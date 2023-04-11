//
// Created by Owner on 12/04/2022.
//

#ifndef HWK6_AUDIOBOOK_H
#define HWK6_AUDIOBOOK_H
#include "Book.h"
#include <cmath>

class AudioBook : public Book{
public:
    AudioBook(string aTitle, int durationSeconds);
    ~AudioBook();
    string getBookSizeRepresentation();
private:
    int durationSeconds;
};


#endif //HWK6_AUDIOBOOK_H
