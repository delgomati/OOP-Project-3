//
// Created by Owner on 12/04/2022.
//

#include "Book.h"

Book::Book(){
    checkedOutBy = nullptr;
}
Book::Book(string aTitle){
    checkedOutBy = nullptr;
    title = aTitle;
}
Book::~Book(){
    delete this->checkedOutBy;
}
string Book::getTitle() const{
    return title;
}
void Book::setTitle(string aTitle){
    title = aTitle;
}


Patron* Book::getCurrentPatron() const{
    return checkedOutBy;
}
void Book::checkOut(Patron* aPatron){
    checkedOutBy = aPatron;

}
void Book::returnBook(){
    checkedOutBy = nullptr;
}
bool Book::isCheckedOut() const{
    if (checkedOutBy != nullptr){
        return true;
    }
    return false;
}


string Book::toString(){
    string output = "'" + title + "' ";
    output += getBookSizeRepresentation();
    return output;
}