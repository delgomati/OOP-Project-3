//
// Created by Owner on 12/04/2022.
//

#include "PrintedBook.h"



PrintedBook::PrintedBook(string aTitle, int numPages){
    setTitle(aTitle);
    this->numPages = numPages;
}
PrintedBook::~PrintedBook(){

}
string PrintedBook::getBookSizeRepresentation(){
    return ("has " + to_string(numPages) + " pages");
}