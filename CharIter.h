//
// Created by Andrei on 3/23/2016.
//

#ifndef CLESSONS_CHARITER_H
#define CLESSONS_CHARITER_H
class CharIter {
public:
    virtual bool hasNext() = 0;
    virtual char next() = 0;
};

class StringIter : CharIter {
    char* src;
    int current;
public:
    StringIter(const char* src);
    ~StringIter();
    bool hasNext();
    char next();
};
#endif //CLESSONS_CHARITER_H
