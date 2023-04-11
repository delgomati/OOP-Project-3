//
// Created by Owner on 12/04/2022.
//

#ifndef HWK6_EBOOK_H
#define HWK6_EBOOK_H
#include "Book.h"
#include <cmath>

class EBook : public Book{
public:
    EBook(string aTitle, int sizeCharacters, int charsPerPage);
    ~EBook();
    string getBookSizeRepresentation();

private:
    int sizeCharacters;
    int charsPerPage;
};



#endif //HWK6_EBOOK_H
