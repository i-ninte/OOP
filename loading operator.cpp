// Fix the code below to print the desired input using operator overloading
#include <iostream>
#include <string>

using namespace std;

class YouTubeChannel {
   public:
    string Name;
    int SubscribersCount;
    YouTubeChannel(string name, int subscribersCount) {
        Name = name;
        SubscribersCount = subscribersCount;
    }
    // Insert your code here
    friend void operator<<(ostream& os, YouTubeChannel& yt) {
        os << "Channel Name: " << yt.Name;
         os << "\nNumber of Subscribers: " << yt.SubscribersCount;
        
    }
};

int main() {
    YouTubeChannel yt1 = YouTubeChannel("Grade A Under A", 3680000);
    cout << yt1;
    return 0;
}