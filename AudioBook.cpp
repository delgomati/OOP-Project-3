//
// Created by Owner on 12/04/2022.
//

#include "AudioBook.h"


AudioBook::AudioBook(string aTitle, int durationSeconds){
    setTitle(aTitle);
    this->durationSeconds = durationSeconds;
}

AudioBook::~AudioBook(){

}

string AudioBook::getBookSizeRepresentation(){
    string representation = "has a duration of ";
    int minutes = floor(durationSeconds / 60);
    if (minutes < 10){
        representation += "0";
    }
    representation += to_string(minutes) + ":";
    int seconds = durationSeconds - (minutes*60);
    if (seconds < 10){
        representation += "0";
    }
    representation += to_string(seconds);
    return representation;
}