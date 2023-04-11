//
// Created by Owner on 12/04/2022.
//

#include "EBook.h"


EBook::EBook(string aTitle, int sizeCharacters, int charsPerPage){
    setTitle(aTitle);
    this->sizeCharacters = sizeCharacters;
    this->charsPerPage = charsPerPage;
}

EBook::~EBook(){

}

string EBook::getBookSizeRepresentation(){
    int numPages = ceil(double (sizeCharacters) / charsPerPage);
    return ("has " + to_string(numPages) + " digital pages");

}