#include "headers/library.h"

using namespace std;

Library::Library()
{
    books = {};
    number_books = books.size();
    user_books = {};
}

void Library::addBook(string book)
{
    Book b = Book(book);
    b.addBook(); //TODO: pensar melhor nisto, se calhar este método será só para alterar a quantidade nos livros com mesmo nome
    books[b.id] = b;
    number_books++;
}

void Library::removeBook(int book_id)
{
    books[book_id].removeBook();
    books.erase(book_id);
    number_books--;
}

void Library::searchBook(string name)
{
}

void Library::printLibraryID()
{
    for (auto &b : books)
    {
        cout << b.first << " -> " << b.second.name << endl;
    }
    cout << endl;
}

bool bookName(Book b1, Book b2)
{

    return b1.name <= b2.name;
}

void Library::printLibraryName()
{
    vector<Book> bk{};

    for (auto &b : books)
    {
        bk.push_back(b.second);
    }

    sort(bk.begin(), bk.end(), bookName);

    for (auto &b : bk)
    {
        cout << b.id << " -> " << b.name << endl;
    }
}

void Library::printBookByUser() {}
void Library::addUser(std::string username, string book) {
    User u = User(username);
}
void Library::borrowBook(std::string username, string book) {
    Book b = Book(book);
    user_books[username] = b;
    b.borrowBook();
}

void Library::returnBook(std::string username, string book) {

    user_books[username].returnBook();
    user_books.erase(username);
}

void Library::printUsers()
{
    cout << "Users: " << endl;
    for (auto &u : user_books)
    {
        cout << u.first << endl;
    }
    cout<< endl;
}