#include <iostream>

class TollBooth {
private:
    unsigned int totalCars;
    double totalCash;

public:
    TollBooth() : totalCars(0), totalCash(0.0) {}

    void payingCar() {
        totalCars++;
        totalCash += 0.5;
    }

    void nopayCar() {
        totalCars++;
    }

    void display() const {
        std::cout << "Total cars: " << totalCars << std::endl;
        std::cout << "Total cash: " << totalCash << " pesewas" << std::endl;
    }
};

int main() {
    TollBooth booth;

    std::cout << "Press 'p' to count a paying car, 'n' to count a nonpaying car, or 'esc' to exit." << std::endl;

    while (true) {
        char c = std::getchar();

        if (c == 'p') {
            booth.payingCar();
            std::cout << "Counted a paying car." << std::endl;
        } else if (c == 'n') {
            booth.nopayCar();
            std::cout << "Counted a nonpaying car." << std::endl;
        } else if (c == 27) {  // ESC key
            booth.display();
            break;
        }
    }

    return 0;
}
