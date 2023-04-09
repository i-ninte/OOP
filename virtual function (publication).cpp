//
// question
/*
Write a main() program that creates an array of pointers to publication. . In a loop, ask the user for
data about a particular book or tape, and use new to create an object of type
book or tape to hold the data. Put the pointer to the object in the array. When
the user has finished entering the data for all books and tapes, display the
resulting data for all the books and tapes entered, using a for loop and a
single statement such as pubarr[j]->putdata(); to display the data from each
object in the array.
*/

#include <iostream>
using namespace std;
class publication {
private:
  string title;
  float price;

public:
  virtual void getdata() {
    cout << " title" << endl;
    cin >> title;
    cout << "price" << endl;
    cin >> price;
  }
  virtual void putdata() {
    cout << title << endl;
    cout << price << endl;
  }
};

class book : public publication {
private:
  int pagecount;

public:
  void getdata() {
    publication::getdata();
    cout << " enter page count"<< endl;
    cin >> pagecount;
  }
  void putdata() { publication::putdata(); cout << pagecount << endl; }
};
class tape : public publication {
private:
  float playingtime;

public:
  void getdata() {
    publication::getdata(); cout << "playing time"<<endl;
    cin >> playingtime;
  }
  void putdata() {
    publication::putdata();
    cout << playingtime;
  }
};

int main() {
  publication *pubarr[100];
  int n = 0;
  char choice;
  do {
    cout << "do you want to enter data for tape or book (b/t)?"<< endl;
    cin >> choice;
    if (choice == 'b') {
      pubarr[n] = new book;
    } else {
      pubarr[n] = new tape;
    }
    pubarr[n++]->getdata();
    cout << " enter another (y/n)?";
    cin >> choice;
  } while (choice != 'n');

  for (int j = 0; j < n; j++) {
    pubarr[j]->putdata();
    cout << endl;
  }

  return 0;
}