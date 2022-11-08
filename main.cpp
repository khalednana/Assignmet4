//
//  main.cpp
//  Assignment 4
//
//  Created by Khaled  Nana  on 02/11/2022.
//

#include <iostream>
#include <string>
#include <list>
#include "Hashtable.hpp"
#include "employee.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    HashTable hash;
    hash.addItem("Mina", 30, 10000, 4);
    hash.addItem("Fawzy", 45, 5000, 8);
    hash.addItem("Yara", 19, 2000, 0);
    hash.addItem("Mariam", 32, 8000, 2);
    hash.addItem("Ayman", 33, 4000, 8);
    hash.addItem("Roshdy", 28, 9000, 3);
    hash.addItem("Aya", 26, 6000, 3);
    hash.addItem("Abdallah", 29, 7000, 4);
    hash.addItem("Fatma", 21, 3000, 1);

    hash.printTable();
    return 0;
}
