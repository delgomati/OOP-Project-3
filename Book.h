//
// Created by Owner on 12/04/2022.
//

#ifndef HWK6_BOOK_H
#define HWK6_BOOK_H


#include <string>
class Patron;
using namespace std;

class Book {
public:
    Book();
    Book(string aTitle);
    ~Book();
    string getTitle() const;
    void setTitle(string aTitle);
    Patron* getCurrentPatron() const;
    void checkOut(Patron* aPatron);
    void returnBook();
    bool isCheckedOut() const;
    string toString();
    virtual string getBookSizeRepresentation() = 0; // abstract method


private:
    string title;
    Patron* checkedOutBy;

};


#endif //HWK6_BOOK_H
