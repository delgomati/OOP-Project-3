//
// Created by Owner on 12/04/2022.
//

#include "Patron.h"


Patron::Patron(){
    this->listCheckedBooks = new vector<Book*>();
}
Patron::Patron(string aName, string anAddress, string aPhone){
    this->listCheckedBooks = new vector<Book*>();
    name = aName;
    address = anAddress;
    phoneNumber = aPhone;
}
Patron::~Patron(){
    for(int i=0; i< this ->listCheckedBooks->size(); i++){
        delete this-> listCheckedBooks->at(i);
        this->listCheckedBooks->at(i) = nullptr;
    }
    delete this->listCheckedBooks;

}
string Patron::getName() const{
    return name;
}
void Patron::setName(const string & name){
    this->name =name;
}

string  Patron::getAddress() const{
    return address;
}
void  Patron::setAddress(const string& address){
    this->address = address;
}
string Patron::getPhoneNumber() const{
    return phoneNumber;
}
void Patron::setPhoneNumber(const string & phoneNumber){
    this->phoneNumber = phoneNumber;
}
void Patron::addCheckedBook(Book* aBook){
    listCheckedBooks->push_back(aBook);

}
void Patron::removeCheckedBook(Book* aBook){
    vector<Book*> *updatedCheckedBooks;
    for (auto ptr: *listCheckedBooks){
        if (ptr != aBook){
            updatedCheckedBooks->push_back(ptr);
        }
    }
    listCheckedBooks = updatedCheckedBooks;

}
bool Patron::isBookCheckedOutByPatron(Book* aBook){
    for (auto ptr: *listCheckedBooks){
        if (ptr == aBook){
            return true;
        }
    }
    return false;
}