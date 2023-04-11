#include <iostream>
#include "Library.h"
#include "Book.h"
#include "Patron.h"
using namespace std;

int main() {
    Library library;

    int option;
    string name, address, phoneNumber;
    string bookTitle;
    int numPages, sizeCharacters, charsPerPage, durationSeconds;
    int dueMonth, dueDay, dueYear;
    Book *aBook;
    Patron *aPatron = new Patron();

    bool exit = false;
    do{
        cout << "---------------------------------\n"
                " Main Menu\n"
                "------------------------------\n"
                "1) Add Patron\n"
                "2) Add Book\n"
                "3) Search for Patron\n"
                "4) Search for Book\n"
                "5) Check Out Book\n"
                "6) Return Book\n"
                " 99) EXIT\n"
                "------------------------------" << endl;

        cin >> option;

        switch (option) {
            case 1:
                // Add Patron
                cin.ignore();
                cout << "Enter the patron's name: ";
                getline(cin, name);

                cout << "Enter the patron's address: ";
                getline(cin, address);

                cout << "Enter the patron's phone number: ";
                getline(cin, phoneNumber);

                library.addPatron(name, address, phoneNumber);
                break;
            case 2:
                // Add Book
                int subOption;
                bool invalid;
                do {
                    invalid = false;
                    cout << "---------------------------------\n"
                            " Sub Menu\n"
                            "------------------------------\n"
                            "1) Add Printed Book\n"
                            "2) Add EBook\n"
                            "3) Add Audio Book\n"
                            "------------------------------" << endl;
                    cin >> subOption;

                    cin.ignore();
                    switch(subOption){
                        case 1:
                            // Printed Book
                            cout << "Enter the book's title: ";
                            getline(cin, bookTitle);

                            cout << "Enter the number of pages in the book: ";
                            cin >> numPages;

                            library.addPrintedBook(bookTitle, numPages);\
                        break;
                        case 2:
                            // EBook
                            cout << "Enter the book's title: ";
                            getline(cin, bookTitle);

                            cout << "Enter the character size: ";
                            cin >> sizeCharacters;

                            cout << "Enter the number of characters per page: ";
                            cin >> charsPerPage;

                            library.addEBook(bookTitle, sizeCharacters, charsPerPage);
                            break;
                        case 3:
                            // Audio Book
                            cout << "Enter the book's title: ";
                            getline(cin, bookTitle);

                            cout << "Enter the duration in seconds: ";
                            cin >> durationSeconds;

                            library.addAudioBook(bookTitle, durationSeconds);
                            break;
                        default:
                            cout << "Invalid option, please chose one of the options listed" << endl;
                            invalid = true;
                            break;
                    }

                } while (invalid == true);

                break;

            case 3:
                // Search for Patron
                cin.ignore();
                cout << "Enter the patron's name: ";
                getline(cin, name);

                aPatron = library.searchPatron(name);
                if (aPatron != nullptr){
                    cout << "Name: " << aPatron->getName() << endl;
                    cout << "Address: " << aPatron->getAddress() << endl;
                    cout << "Phone number: " << aPatron->getPhoneNumber() << endl;
                }
                else{
                    cout << "That patron is not in the system" << endl;
                }
                break;

            case 4:
                // Search for Book
                cin.ignore();
                cout << "Enter the book's title: ";
                getline(cin, bookTitle);

                aBook = library.searchBook(bookTitle);
                if (aBook != nullptr){
                    cout << aBook->toString() << endl;
                }
                else{
                    cout << "That book is not in the system" << endl;
                }
                break;

            case 5:
                // Check Out Book
                cin.ignore();
                cout << "Enter the book's title: ";
                getline(cin, bookTitle);
                aBook = library.searchBook(bookTitle);
                if (aBook == nullptr){
                    cout << "That book is not in the system" << endl;
                    break;
                }
                if (aBook->isCheckedOut()){
                    cout << "That book is already checked out" << endl;
                    break;
                }

                cout << "Enter the patron's name: ";
                getline(cin, name);
                aPatron = library.searchPatron(name);
                if (aPatron == nullptr){
                    cout << "That patron is not in the system" << endl;
                    break;
                }

                cout << "Enter the year the book is due: ";
                cin >> dueYear;
                cout << "Enter the month the book is due: ";
                cin >> dueMonth;
                cout << "Enter the day the book is due: ";
                cin >> dueDay;

                library.checkOutBook(aBook, aPatron, dueYear, dueMonth, dueDay);

                break;

            case 6:
                // Return Book
                cin.ignore();
                cout << "Enter the book's title: ";
                getline(cin, bookTitle);
                aBook = library.searchBook(bookTitle);
                if (aBook == nullptr){
                    cout << "That book is not in the system" << endl;
                    break;
                }

                cout << "Enter the patron's name: ";
                getline(cin, name);
                aPatron = library.searchPatron(name);
                if (aPatron == nullptr){
                    cout << "That patron is not in the system" << endl;
                    break;
                }


                library.returnBook(aBook, aPatron);
                break;

            case 99:
                // EXIT
                cout << "Are you sure you want to exit? (y/n): ";
                char answer;
                cin >> answer;
                answer = toupper(answer);
                if (answer == 'Y'){
                    exit = true;
                }
                break;

            default:
                cout << "Invalid option, please chose one of the numbers listed" << endl;
                break;

        }

    } while(!exit);



    return 0;
}