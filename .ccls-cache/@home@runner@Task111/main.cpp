#include <iostream>
#include <string>

std::string encryptCaesar(int, std::string);
std::string decryptCaesar(int, std::string);

int main()
{
    int key;

    std::cout << "Enter the key: ";
    std::cin >> key;
    std::cout << "Enter the text: ";
    std::cin.ignore();
    std::string str;
    std::getline(std::cin, str);

    encryptCaesar(key, str);
    std::string encryptString = encryptCaesar(encryptString);
    decryptCaesar(key, encryptString);
}

std::string encryptCaesar(int key, std::string str)
{
    std::string encryptString;
    for (auto &c : str)
    {
        if (c >= 'a' && c <= 'z')
            c = ((c - 'a' + key) % 26) + 'a';
        else if (c >= 'A' && c <= 'Z')
            c = ((c - 'A' + key) % 26) + 'A';
    }
    encryptString = str;
    return encryptString;
}

std::string decryptCaesar(int key, std::string encryptString)
{
    return encryptCaesar(-key, encryptString);
}
