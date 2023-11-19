#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Book {
  public:
    Book(); // default constructor
    Book(std::string aTitle, std::string anAuthor, int aPageNum);

    // getters
    int getPages();
    std::string getAuthor();
    std::string getTitle();

    // setters
    void setPages(int aPageNum);
    void setAuthor(std::string anAuthor);
    void setTitle(std::string aTitle);

    virtual std::string toString(); // virtual function for string of info
    
  private:
    int pages;
    std::string author;
    std::string title;
    const int MIN_PAGES = 50;
    const int MAX_PAGES = 1000;
};

// derived class published book of book class
class PublishedBook:public Book {
  public:
    PublishedBook():Book(){} // default constructor
    PublishedBook(std::string aTitle, std::string anAuthor, int aPageNum, std::string aPublisher):
    Book(aTitle, anAuthor, aPageNum){
      publisher = aPublisher;
    }
    // getters and setters
    std::string getPublisher();
    std::string toString();
    void setPublisher(std::string aPublisher);

    // overloading "<<" operator
    friend std::ostream& operator << (std::ostream& os, PublishedBook theBook);
  private:
    std::string publisher;
};

#endif