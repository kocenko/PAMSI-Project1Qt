#include "mainwindow.h"
#include "message.h"
#include "orderedList.h"

#include <QApplication>
#include <iostream>
#include <fstream>
#include <chrono>

#if defined(_WIN32)
#define SYS_CLEAR_COMMAND "cls"
#endif

#ifndef SYS_CLEAR_COMMAND
#if defined(unix)
#define SYS_CLEAR_COMMAND "clear"
#endif
#endif

#define ERR_OPEN_FILE -1
#define ERR_FILE_FORMAT -2


int main(int argc, char *argv[])
{

    if (argc > 2){
        std::cerr << "Two many arguments given" << std::endl;
    }
    else if(argc > 1){
        if (argv[1][0] == '-' && argv[1][1] == 'c'){

            std::cout << "Wlaczono tryb konsoli" << std::endl << std::endl;

            OrderedList<std::string>* temp = new OrderedList<std::string>();
            Message msg("");
            std::string given_string;
            int packages_number;
            std::string op = "u";

            std::system(SYS_CLEAR_COMMAND);
            while(op[0] != 'q'){

                std::cout << std::endl;
                std::cout << "           MENU           " << std::endl;
                std::cout << "==========================" << std::endl;
                std::cout << "Wybierz jedna z opcji:    " << std::endl;
                std::cout << "  1 Dodaj wiadomosc       " << std::endl;
                std::cout << "  2 Wyslij wiadomosc      " << std::endl;
                std::cout << "  3 Przemieszaj wiadomosc " << std::endl;
                std::cout << "  4 Odbierz wiadomosc     " << std::endl;
                std::cout << "  5 Odczytaj wiadomosc    " << std::endl;
                std::cout << "  q  Wyjdz z programu     " << std::endl;
                std::cout << std::endl;

                std::cin >> op;

                switch(op[0]){
                case '1':
                    std::cout << "Podaj tresc wiadomosci: ";
                    std::cin >> given_string;
                    msg.setText(given_string);
                    break;
                case '2':
                    if (msg.getText() == ""){
                        std::cerr << "No message detected" << std::endl;
                    }
                    else{
                        std::cout << "Podaj ilosc pakietow: ";
                        std::cin >> packages_number;
                        temp = msg.sendMessage(packages_number);
                    }
                    break;
                case '3':
                    if (!temp->getSize()){
                        std::cerr << "No message detected" << std::endl;
                    }
                    else{
                        temp = msg.shuffle(temp);
                    }
                    break;
                case '4':
                    if (!temp->getSize()){
                        std::cerr << "No message detected" << std::endl;
                    }
                    else{
                        temp = msg.receive(temp);
                    }
                    break;
                case '5':
                    if (!temp->getSize()){
                        std::cerr << "No message detected" << std::endl;
                    }
                    else{
                        temp->walkThrough();
                    }
                    break;
                case 'q':
                    break;
                default:
                    std::cout << "Could not find given option" << std::endl;
                    break;
                }
                std::getchar();
                std::cout << "Wcisnij ENTER, aby kontynuowac ..." << std::endl;
                std::getchar();
                std::system(SYS_CLEAR_COMMAND);
            }
            delete temp;
        }
        else if(argv[1][0] == '-' && argv[1][1] == 't'){
            std::cout << "Wlaczono tryb testowania" << std::endl << std::endl;

            std::ifstream in_stream;
            std::ofstream out_stream;
            std::string input_file;
            std::string output_file;
            std::string line;
            std::string sample_text;
            int i;

            OrderedList<std::string>* temp = new OrderedList<std::string>();
            Message msg("");
            std::string given_string;
            int packages_number;

            // Otwieranie pliku wejsciowego
            std::cout << "Podaj nazwe pliku testowego: ";
            std::cin >> input_file;
            in_stream.open(input_file, std::ios_base::in);
            if (!in_stream){
                std::cerr << "Could not open file" << std::endl;
                return ERR_OPEN_FILE;
            }

            // Otwieranie pliku wyjsciowego
            std::cout << "Podaj nazwe pliku wyjsciowego (niepusty plik zostanie nadpisany): ";
            std::cin >> output_file;
            out_stream.open(output_file, std::ios_base::out);
            if (!out_stream){
                std::cerr << "Could not open file" << std::endl;
                return ERR_OPEN_FILE;
            }
            //out_stream << "Word_length\tPackages_num\tSend_time\tShuffle_time\tReceive_time\t" << std::endl;

            while(getline(in_stream, line)){
                i = line.size() - 1;
                while(line[i] != ' ' && i>0){
                    i--;
                }

                if (!i){
                    std::cerr << "Wrong file formatting" << std::endl;
                    return ERR_FILE_FORMAT;
                }
                given_string = line.substr(0, i);
                packages_number = std::stoi(line.substr(i+1, line.size()-1-i));

                out_stream << given_string.size() << "\t";

                // Symulacja procesu z mierzeniem czasu
                msg.setText(given_string);
                std::chrono::steady_clock::time_point begin_time = std::chrono::steady_clock::now();
                temp = msg.sendMessage(packages_number);
                //out_stream << temp->getSize() << "\t";
                std::chrono::steady_clock::time_point send_time = std::chrono::steady_clock::now();
                temp = msg.shuffle(temp);
                std::chrono::steady_clock::time_point shuffle_time = std::chrono::steady_clock::now();
                temp = msg.receive(temp);
                std::chrono::steady_clock::time_point end_time = std::chrono::steady_clock::now();

                out_stream << std::chrono::duration_cast<std::chrono::nanoseconds>(send_time - begin_time).count() << "\t";
                out_stream << std::chrono::duration_cast<std::chrono::nanoseconds>(shuffle_time - send_time).count() << "\t";
                out_stream << std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - shuffle_time).count() << std::endl;
            }
            in_stream.close();
            out_stream.close();

            delete temp;

        }
        else{
            std::cerr << "Unrecognised argument given" << std::endl;
        }
    }
    else{
        std::cout << "Wlaczono tryb GUI" << std::endl << std::endl;

        QApplication a(argc, argv);
        MainWindow w;

        w.setWindowTitle("JanDoAni");
        w.show();
        return a.exec();
    }
}
