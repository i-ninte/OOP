#include <iostream>
#include <list>

class YoutubeChannel {
private:
    std::string name;
    std::string ownerName;
    int subscriberCount;
    std::list<std::string> publishedVideoTitles;

public:
    YoutubeChannel(std::string name, std::string ownerName) {
        this->name = name;
        this->ownerName = ownerName;
        subscriberCount = 0;
    }

    void subscribe() {
        subscriberCount++;
    }

    void unsubscribe() {
        if (subscriberCount > 0) {
            subscriberCount--;
        }
    }

    std::string getName() const {
        return name;
    }

    void setName(std::string name) {
        this->name = name;
    }

    void publishVideo(std::string title) {
        publishedVideoTitles.push_back(title);
    }

    void getInfo() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Owner Name: " << ownerName << std::endl;
        std::cout << "Number of Subscribers: " << subscriberCount << std::endl;
        std::cout << "Published Video Titles: ";
        for (auto title : publishedVideoTitles) {
            std::cout << title << ", ";
        }
        std::cout << std::endl;
    }
};

int main() {
    YoutubeChannel ytChannel("My Channel", "John Doe");

    ytChannel.publishVideo("My First Video");
    ytChannel.getInfo();

    ytChannel.unsubscribe();
    ytChannel.getInfo();

    for (int i = 0; i < 20; i++) {
        ytChannel.subscribe();
    }
    ytChannel.getInfo();

    return 0;
}
