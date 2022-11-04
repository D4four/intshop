#ifndef BOOKC_H
#define BOOKC_H

#include"includes.h"
#include"BookStore.h"

class BookC :public BookStore {
public:
    string annotation;
    string genre;
    void get(string name, string author, int yearPubl, int pages, int price, string annotation, string genre);
};

#endif // BOOKC_H
