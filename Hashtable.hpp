//
//  Hashtable.hpp
//  Assignment 4
//
//  Created by Khaled  Nana  on 06/11/2022.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp
#include <iostream>
#include <string>
#include <list>
#include <stdio.h>
#include "employee.hpp"
using namespace std;
class HashTable
{
private:
    static const int tablesize=10;
    
    struct item
    {
        string name;
        int age;
        double salary;
        int experience;
        item* next;
    };
    item* Hashtable[tablesize];
public:
    HashTable();
    int Hash(string key);
    void addItem(string name,int age,double salary,int experience);
    int NumberOfItemsInIndex(int index);
    void printTable();
    void printIteminIndex(int value);
    
};

#endif /* Hashtable_hpp */
