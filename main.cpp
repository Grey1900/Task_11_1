/******************************************************************************/
/* File Name: Task_11_1                                                       */
/* Data: 22.08.2022                                                           */
/* Developer: Sergey Plotnikov                                                */
/* Description: Solution for task 1 of Block 11 of the C++ study course       */
/******************************************************************************/

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

    std::cout << "Encrypted text: " << encryptCaesar(key, str) << std::endl;
    std::cout << "Decrypted text: " << decryptCaesar(key, encryptCaesar(key, str)) << std::endl;
}

std::string encryptCaesar(int key, std::string str)
{
  
    for (auto& c : str)
    {
        if (c >= 'a' && c <= 'z') {
            c = ((c - 'a' + key) % 26) + 'a';
        }
        else if (c >= 'A' && c <= 'Z') {
            c = ((c - 'A' + key) % 26) + 'A';
        }
    }
    return str;
}

std::string decryptCaesar(int key, std::string encryptString)
{
    return encryptCaesar(-key, encryptString);
}