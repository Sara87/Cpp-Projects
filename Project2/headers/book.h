#ifndef _BOOK_H
#define _BOOK_H

#include <string>

class Book
{
private:
    static int current_id;

public:
    int id;
    std::string name;
    int quantity;
    int borrowed;

    Book(std::string book);
    void addBook();
    void removeBook();
    void borrowBook();
    void returnBook();
};

#endif