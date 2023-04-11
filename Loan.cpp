//
// Created by Owner on 12/04/2022.
//
#include "Loan.h"

Loan::Loan(){
    borrowedBook = nullptr;
    checkedOutPatron = nullptr;

}
Loan::Loan(Book* aBook, Patron* aPatron, int year, int month, int day){
    borrowedBook = nullptr;
    checkedOutPatron = nullptr;
    borrowedBook = aBook;
    checkedOutPatron = aPatron;
    Date date(year, month, day);
    dueDate = date;
}
Loan::~Loan(){
    delete this->borrowedBook;
    delete this->checkedOutPatron;
}

Book* Loan::getBook() const{
    return borrowedBook;
}
Patron* Loan::getPatron() const{
    return checkedOutPatron;

}
Date Loan::getDueDate() const{
    return dueDate;
}
bool Loan::isExpired() const{
    Date date;
    int year = date.currentYear();
    int month = date.currentMonth();
    int day = date.currentDay();
    return (dueDate.isAfter(year, month, day));
}