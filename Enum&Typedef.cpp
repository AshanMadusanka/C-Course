#include <iostream>


int main() {

    enum days {
        Monday = 1,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday
    };

    days current_day;
    current_day = Thursday;

    std::cout << current_day << std::endl;

    switch (current_day) {
        case Monday:
            std::cout << "It's Monday!" << std::endl;
            break;
        case Tuesday:
            std::cout << "It's Tuesday!" << std::endl;
            break;
        case Wednesday:
            std::cout << "It's Wednesday!" << std::endl;
            break;
        case Thursday:
            std::cout << "It's Thursday!" << std::endl;
            break;
        case Friday:
            std::cout << "It's Friday!" << std::endl;
            break;
        case Saturday:
            std::cout << "It's Saturday!" << std::endl;
            break;
        case Sunday:
            std::cout << "It's Sunday!" << std::endl;
            break;

    }

    return 0;
}