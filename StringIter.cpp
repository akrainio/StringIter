//
// Created by Andrei on 3/24/2016.
//
#include <cstring>
#include "CharIter.h"

StringIter::StringIter(const char* src) {
    current = 0;
    this->src = new char[strlen(src) + 1];
    strcpy(this->src, src);
}

bool StringIter::hasNext() {
    return src[current] != 0;
}
char StringIter::next() {
     if (!hasNext()) throw "No such element";
    char result = src[current];
    current += 1;
    return result;
}
StringIter::~StringIter() {
    delete src;
}

StringIter* useIter() {
    const char* str = "foo";
    StringIter* it = new StringIter(str);
    delete it;
}

