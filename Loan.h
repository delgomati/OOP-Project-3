//
// Created by Owner on 12/04/2022.
//

#ifndef HWK6_LOAN_H
#define HWK6_LOAN_H
#include "Book.h"
#include "Patron.h"
#include "Date.h"
using namespace std;

class Loan {
public:
    Loan();
    Loan(Book* aBook, Patron* aPatron, int year, int month, int day);
    ~Loan();
    Book* getBook() const;
    Patron* getPatron() const;
    Date getDueDate() const;
    bool isExpired() const;

private:
    Book* borrowedBook;
    Date dueDate;
    Patron* checkedOutPatron;

};



#endif //HWK6_LOAN_H
