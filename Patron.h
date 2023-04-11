//
// Created by Owner on 12/04/2022.
//

#ifndef HWK6_PATRON_H
#define HWK6_PATRON_H
#include <string>
#include <vector>
class Book;
using namespace std;

class Patron {
public:
    Patron();
    Patron(string aName, string anAddress, string aPhone);
    ~Patron();
    string getName() const;
    void setName(const string& name);
    string getAddress() const;
    void setAddress(const string& address);
    string getPhoneNumber() const;
    void setPhoneNumber(const string & phoneNumber);
    void addCheckedBook(Book* aBook);
    void removeCheckedBook(Book* aBook);
    bool isBookCheckedOutByPatron(Book* aBook);


private:
    string name;
    string address;
    string phoneNumber;
    vector<Book*> *listCheckedBooks;

};


#endif //HWK6_PATRON_H
