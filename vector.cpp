
#include <iostream>
#include <vector>

void part1() {
    //TODO: Implement part 1
     std::vector<int> p1vector;

    for(int i = 1; i <=50000; i++) {
        p1vector.push_back(69);
    }
    std::cout << "After adding elements: Size = " << p1vector.size() << ", Capacity = " << p1vector.capacity() << std::endl;
    p1vector.resize(p1vector.size()/2);
    std::cout << "After resizing: Size = " << p1vector.size() << ", Capacity = " << p1vector.capacity() << std::endl;
    p1vector.shrink_to_fit();
    std::cout << "After shrink to fit(): Size = " << p1vector.size() << ", Capacity = " << p1vector.capacity() << std::endl;

}

void part2() {
    //TODO: Implement part 2
    std::vector<bool> p2bvector;
    std::vector<char> p2cvector;

    for(int i = 1; i <=10000; i++) {
        p2bvector.push_back(true);
    }

    for(int i = 1; i <=10000; i++) {
        p2cvector.push_back('a');
    }

    std::cout << "Memory usage of std::vector<bool>: " << p2bvector.size() << " bytes" << std::endl;
    std::cout << "Memory usage of std::vector<char>: " << p2cvector.size() << " bytes" << std::endl;

}

int main() {
    part1();
    part2();
    return 0;
}
