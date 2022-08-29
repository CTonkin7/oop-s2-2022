#include <iostream>
#include "book.h"
using namespace std;
class Library{
    private:
        string book;
        int number_of_books;
    public:
    Library(string s_book, int s_number_of_books);
    string get_book(){return book;}
    int get_number_of_books(){return number_of_books;}
    void set_book(string new_book){book = new_book;}
    void set_number_of_books(int new_number_of_books){number_of_books = new_number_of_books;}
    bool borrow_book();

};
Library::Library(string s_book, int s_number_of_books){
        book = s_book;
        number_of_books = s_number_of_books;
    }

bool Library::borrow_book(){
        if (number_of_books > 0){                
            number_of_books--;
            return true;
        }
        return false;
    }

int main(){
    Library b1("Harry potter", 5);
    Library b2("Dragon thief", 3);
    Library b3("Lord of the rings", 8);
    Library b4("How to train your dragon", 0);

    //cout << b1.get_book() << endl;
    //cout << b1.get_number_of_books() << endl;
    cout << "Book: " << b1.get_book() << endl;
    if(b1.borrow_book() == 1){
        cout << "Remaining number of this book in the library: " << b1.get_number_of_books() << endl;
    } else {
        cout << "cannot borrow" << endl;
    }
    cout << "Book: " << b2.get_book() << endl;
    if(b2.borrow_book() == 1){
        cout << "Remaining number of this book in the library: " << b2.get_number_of_books() << endl;
    } else {
        cout << "cannot borrow" << endl;
    }
    cout << "Book: " << b3.get_book() << endl;
    if(b3.borrow_book() == 1){
        cout << "Remaining number of this book in the library: " << b3.get_number_of_books() << endl;
    } else {
        cout << "cannot borrow" << endl;
    }
    cout << "Book: " << b4.get_book() << endl;
    if(b4.borrow_book() == 1){
        cout << "Remaining number of this book in the library: " << b4.get_number_of_books() << endl;
    } else {
        cout << "cannot borrow" << endl;
    }

    
}




