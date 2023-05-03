#include <iostream>
#include <fstream>
#include <sstream>

int main() {
    std::ifstream file("data.txt");
    if (!file) {
        std::cerr << "Error: could not open file.\n";
        return 1;
    }
    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string value1, value2;
        ss >> value1 >> value2;
        std::cout << value1 << " " << value2 << '\n';
    }
    file.close();
    
    std::string input;
    std::cin >> input;
    return 0;
}