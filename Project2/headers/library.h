#ifndef _LIBRARY_H
#define _LIBRARY_H

#include "book.h"
#include "user.h"
#include <iostream>
#include <vector>
#include <map>
#include <string>

class Library{
    std::map<int, Book> books;
    int number_books;
    std::map<std::string, Book> user_books;

    public:
    Library();
    void addBook(std::string book);
    void removeBook(int book);
    void searchBook(std::string name);
    void printLibraryID();
    void printLibraryName();
    void printBookByUser();
    void addUser(std::string username, std::string book);
    void borrowBook(std::string username, string book);
    void returnBook(std::string username, string book);
    void printUsers();
};


#endif