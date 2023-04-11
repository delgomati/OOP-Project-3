//
// Created by Owner on 12/04/2022.
//

#include "Library.h"
#include <iostream>


Library::Library(){
    this->loans = new vector<Loan*>();
    this->patrons = new vector<Patron*>();
    this->books = new vector<Book*>();
}
Library::Library(string libraryName){
    name = libraryName;
    this->loans = new vector<Loan*>();
    this->patrons = new vector<Patron*>();
    this->books = new vector<Book*>();
}
Library::~Library(){
    for(int i=0; i< this ->loans->size(); i++){
        delete this-> loans->at(i);
        this->loans->at(i) = nullptr;
    }

    for(int i=0; i< this ->patrons->size(); i++){
        delete this-> patrons->at(i);
        this->patrons->at(i) = nullptr;
    }

    for(int i=0; i< this ->books->size(); i++){
        delete this-> books->at(i);
        this->books->at(i) = nullptr;
    }

    delete this->loans;
    delete this->patrons;
    delete this->books;

}
string Library::getName() const{
    return name;
}
Book* Library::searchBook(string title) const{
    for (auto ptr: *books){
        if (ptr->getTitle() == title){
            return ptr;
        }
    }
    return nullptr;
}
Patron* Library::searchPatron(string name) const{
    for (auto ptr: *patrons){
        if (ptr->getName() == name){
            return ptr;
        }
    }
    return nullptr;
}

void Library::addPrintedBook(string title, int numPages){
    PrintedBook *newBook = new PrintedBook(title, numPages);
    this->books->push_back(newBook);
}
void Library::addEBook(string title, int sizeCharacters, int charsPerPage){
    EBook *newBook = new EBook(title, sizeCharacters, charsPerPage);
    this->books->push_back(newBook);
}
void Library::addAudioBook(string title, int durationSeconds){
    AudioBook *newBook = new AudioBook(title, durationSeconds);
    this->books->push_back(newBook);
}


void Library::addPatron(string name, string address, string phoneNumber){
    Patron *newPatron = new Patron();
    newPatron-> setName(name);
    newPatron-> setAddress(address);
    newPatron-> setPhoneNumber(phoneNumber);
    this->patrons->push_back(newPatron);
}

void Library::checkOutBook(Book* aBook, Patron* aPatron, int dueYear, int dueMonth, int dueDay){
    if (aBook != nullptr && aPatron != nullptr){
        if (!aBook->isCheckedOut()){
            Loan *newLoan = new Loan(aBook, aPatron, dueYear, dueMonth, dueDay);
            this->loans->push_back(newLoan);

            aPatron->addCheckedBook(aBook);
            aBook->checkOut(aPatron);
        }
    }
}

void Library::returnBook(Book* aBook, Patron* aPatron){
    if (aBook != nullptr && aPatron != nullptr){
        for (auto ptr: *loans){
            if (ptr->getBook() == aBook && ptr->getPatron() == aPatron){
                aPatron->removeCheckedBook(aBook);
                aBook->returnBook();
            }
            else{
                cout << "That book is not checked out by that patron" << endl;
            }
        }
    }
}