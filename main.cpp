# include <iostream>
# include "book.h"


using namespace std;

int main(){
    Library b1("Harry potter", 5);
    Library b2("Dragon thief", 3);
    Library b3("Lord of the rings", 8);
    Library b4("", 0);

    //cout << b1.get_book() << endl;
    //cout << b1.get_number_of_books() << endl;
    cout << "Book: " << b1.get_book() << endl;
    if(b1.borrow_book() == 1){
        cout << "Remaining number of this book in the library: " << b1.get_number_of_books() << endl;
    } else {
        cout << "cannot borrow" << endl;
    }
    
}

