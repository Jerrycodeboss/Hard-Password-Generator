#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string generatePassword(int length) {
    std::string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    std::string password = "";

    // Initialize random seed
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for (int i = 0; i < length; i++) {
        int randomIndex = std::rand() % characters.length();
        password += characters[randomIndex];
    }

    return password;
}

int main() {
    int passwordLength;

    std::cout << "Enter the desired length of the password: ";
    std::cin >> passwordLength;

    std::string password = generatePassword(passwordLength);

    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}

