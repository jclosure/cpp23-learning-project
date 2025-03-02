#ifndef BINARY_CALCULATOR_HPP
#define BINARY_CALCULATOR_HPP

#include <iostream>
#include <string>

namespace binary_calculator {

void printBinary(int n) {
    std::cout << "Binary representation of " << n << ": ";
    std::string binary = "";
    while (n > 0) {
        binary = std::to_string(n % 2) + binary;
        n /= 2;
    }
    std::cout << binary << std::endl;
}

void printHex(int n) {
    std::cout << "Hexadecimal representation of " << n << ": ";
    std::cout << std::hex << n << std::endl;
}

void printOct(int n) {
    std::cout << "Octal representation of " << n << ": ";
    std::cout << std::oct << n << std::endl;
}

void printBase64(int n) {
    std::cout << "Base64 representation of " << n << ": ";
    std::string base64_chars =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    std::string binary = "";
    while (n > 0) {
        binary = std::to_string(n % 2) + binary;
        n /= 2;
    }
    while (binary.length() % 6 != 0) {
        binary = "0" + binary;
    }
    std::string base64 = "";
    for (size_t i = 0; i < binary.length(); i += 6) {
        std::string chunk = binary.substr(i, 6);
        int decimal = 0;
        int power = 1;
        for (int j = chunk.length() - 1; j >= 0; j--) {
            if (chunk[j] == '1') {
                decimal += power;
            }
            power *= 2;
        }
        base64 += base64_chars[decimal];
    }
    std::cout << base64 << std::endl;
}

void printBase16(int n) {
    std::cout << "Base16 representation of " << n << ": ";
    printHex(n);
}

void printBase8(int n) {
    std::cout << "Base8 representation of " << n << ": ";
    printOct(n);
}

void printBase2(int n) {
    std::cout << "Base2 representation of " << n << ": ";
    printBinary(n);
}

}  // namespace binary_calculator

#endif  // BINARY_CALCULATOR_HPP
