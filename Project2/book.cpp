#include "headers/book.h"

using namespace std;

Book::Book(string book)
{
    id = current_id++;
    name = book;
    quantity = 1;
    borrowed = 0;

}

void Book::addBook(){
    if(quantity != 1)
        quantity++;    
};

void Book::removeBook(){
    quantity--;
}
void Book::borrowBook(){
    borrowed++;
}
void Book::returnBook(){
    borrowed--;
}