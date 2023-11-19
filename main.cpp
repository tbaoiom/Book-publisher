#include <iostream>
#include "book.hpp"

using std::cout;
using std::endl;

int main() {
  // Create 2 book objects and display
  Book book1("The Great Gatsby", "F.Scott Fitzgerald", 148);
  Book book2("Crime and Punishment", "Fyodor Dostoevski", 492);

  cout << book1.toString() << endl;
  cout << book2.toString() << endl;

  // create 2 published book objects and display
  PublishedBook pubBook1("The Stranger", "Albert Camus", 123, "Knopf Doubleday Publishing Group");
  PublishedBook pubBook2("Heart of Darkness", "Joseph Conrad", 72, "Blackwood's Magazine");

  cout << pubBook1.toString() << endl;
  cout << pubBook2 << endl; // overloaded << operator
  return 0;
}