//
// Created by Owner on 12/04/2022.
//

#ifndef HWK6_PRINTEDBOOK_H
#define HWK6_PRINTEDBOOK_H
#include "Book.h"

class PrintedBook: public Book {
public:
    PrintedBook(string aTitle, int numPages);
    ~PrintedBook();
    string getBookSizeRepresentation();
private:
    int numPages;

};



#endif //HWK6_PRINTEDBOOK_H
