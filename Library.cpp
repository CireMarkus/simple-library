#include "Library.hpp"
#include <iostream>

using namespace std;

int Library::totalBorrowedBooks = 0; 

Library::Library(){
  reservedCount = 0;
}

void Library::listBooks(){
  for (auto book: bookList){
    cout << book <<endl;
  }
}

void Library::addBook(string title, double bookCost){
   if (bookList.size() > 100 ){
    cout << "Library is full!" << endl;
   }else if (!(libraryBudget >= bookCost)){
    cout <<"Insufficient budget to add " << title <<"."<<endl;
   }else{
      libraryBudget -= bookCost;
      bookList.push_back(title);
   }
}

bool Library::borrowBook(string title){
    for(auto book: bookList){
      if (book == title){
        cout << "You borrowed " << title << "." << endl;
        for (int i = 0; i < bookList.size(); i++){
          if(bookList[i] == title){
            bookList.erase(bookList.begin() + i);
          }
        }
        for (int i = 0; i < reservedBooks.size();i++){
          if (reservedBooks[i] == title){
            reservedBooks.erase(reservedBooks.begin() + i);
          }
         }

        totalBorrowedBooks += 1;
        
        return true;
      }
    }
    cout << "Book not found!" << endl;
    return false; 
}

int Library::getTotalBorrowedBooks(){
  return totalBorrowedBooks;
}


void Library::reserveBook(string title) const{
    for(auto book: bookList){
      if (book == title){
        for(auto rbook: reservedBooks){
          if (rbook == title){
            cout << "Book not reserved!" <<endl;
            return;
            }
        }
        reservedBooks.push_back(title);
        reservedCount += 1;
        cout << "Book reserved: " << title << endl;
        cout << "Reserved book count: " << reservedCount << endl;
        return;
      }
    }
    cout << "Book not reserved!" << endl;
    return; 
}



