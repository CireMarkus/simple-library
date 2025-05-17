#include "Library.hpp"
#include <iostream>

using namespace std;
double libraryBudget = 5000;

int main() {
  cout << "Current library budget is: " << libraryBudget << endl;  
  //Declare library class. 
  Library myLibrary = Library();

  //add some books to the library.
  myLibrary.addBook("The Great Gatsby", 300);
  myLibrary.addBook("1984",400);
  myLibrary.addBook("To Kill a Mockingbird", 350);
  cout << "Current library budget is: " << libraryBudget << endl;  
  //List the inventory. 
  myLibrary.listBooks();
  
  myLibrary.reserveBook("1984");
  myLibrary.borrowBook("To Kill a Mockingbird");

  myLibrary.listBooks();

  cout << "The total number of borrowed books is: " << myLibrary.getTotalBorrowedBooks() << endl;
}