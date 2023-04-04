#include <iostream>
#include <string>
using namespace std;

class Publication {
    string title;
    float price;
public:
    void getdata() {
        cout << "Enter publication title: ";
        getline(cin, title);
        cout << "Enter publication price: ";
        cin >> price;
        cin.ignore(); // to clear input buffer
    }
    void putdata() {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public Publication {
    int page_count;
public:
    void getdata() {
        Publication::getdata();
        cout << "Enter page count: ";
        cin >> page_count;
        cin.ignore(); // to clear input buffer
    }
    void putdata() {
        Publication::putdata();
        cout << "Page count: " << page_count << endl;
    }
};

class Tape : public Publication {
    float playing_time;
public:
    void getdata() {
        Publication::getdata();
        cout << "Enter playing time (in minutes): ";
        cin >> playing_time;
        cin.ignore(); // to clear input buffer
    }
    void putdata() {
        Publication::putdata();
        cout << "Playing time: " << playing_time << " minutes" << endl;
    }
};

int main() {
    // Test the Book class
    Book book;
    book.getdata();
    cout << "Book details:" << endl;
    book.putdata();
    
    // Test the Tape class
    Tape tape;
    tape.getdata();
    cout << "Tape details:" << endl;
    tape.putdata();
    
    return 0;
}
