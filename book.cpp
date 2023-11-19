#include "book.hpp"
#include <string>
#include <iostream>

using std::string;
using std::endl;

// book default constructor
Book::Book(){
  pages = MIN_PAGES;
}
// constructor with params
Book::Book(string aTitle, string anAuthor, int aPageNum){
  // if pagenum is less than min, set to min
  // if pagenum is greater than max, set to max
  // else set pagenum to what was specified
  if (aPageNum < MIN_PAGES){
    pages = MIN_PAGES;
  }
  else if (aPageNum > MAX_PAGES){
    pages = MAX_PAGES;
  }
  else {
    pages = aPageNum;
  }
  title = aTitle;
  author = anAuthor;
}

// getters
int Book::getPages(){
  return pages;
}
string Book::getAuthor(){
  return author;
}
string Book::getTitle(){
  return title;
}
// publisher getter for published book
string PublishedBook::getPublisher(){
  return publisher;
}

// setters
void Book::setPages(int aPageNum){
  pages = aPageNum;
}
void Book::setAuthor(std::string anAuthor){
  author = anAuthor;
}
void Book::setTitle(string aTitle){
  title = aTitle;
}
// publisher setter for published book class
void PublishedBook::setPublisher(std::string aPublisher){
  publisher = aPublisher;
}

// string of book info and formatted
string Book::toString(){
  return title + " by " + author + " (" + std::to_string(pages) + "pp.)";
}

// same as tostring of base class but adds unique publisher attribute
string PublishedBook::toString(){
  return getTitle() + " by " + getAuthor() + " (" + std::to_string(getPages()) + "pp.), " + publisher;
}

// overloading "<<" operator to display book object info
std::ostream& operator << (std::ostream& os, PublishedBook theBook) {
  os << theBook.toString() << endl;
  return os;
}