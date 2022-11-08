//
//  Hashtable.cpp
//  Assignment 4
//
//  Created by Khaled  Nana  on 06/11/2022.
//

#include "Hashtable.hpp"
HashTable::HashTable()
{
    for (int i=0; i<tablesize; i++) {
        Hashtable[i] =new item;
        Hashtable[i]->name="empty";
        Hashtable[i]->age=0;
        Hashtable[i]->salary=0;
        Hashtable[i]->experience=0;
        Hashtable[i]->next=NULL;
    }
};



int HashTable::Hash(string key)
{
    int hash=0;
    int index;
    for (int i=0; i<key.length(); i++)
    {
        hash=hash+(int)key[i];
//        cout<<"hash = "<<hash<<endl;
    }
    index=hash % tablesize;
    
//    for (int i=0; i<key.length(); i++) {
//        cout<<"key["<<i<<"] = "<<(int)key[i]<<endl;
//    }
    return index;
};

void HashTable::addItem(string name,int age,double salary,int experience)
{
    int index=Hash(name);
    if(Hashtable[index]->name=="empty")
    {
        Hashtable[index]->name=name;
        Hashtable[index]->age=age;
        Hashtable[index]->salary=salary;
        Hashtable[index]->experience=experience;
    }
    else
    {
        item* ptr=Hashtable[index];
        item* p=new item;
        p->name=name;
        p->age=age;
        p->salary=salary;
        p->experience=experience;
        p->next=NULL;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=p;
    }
};
int HashTable::NumberOfItemsInIndex(int index)
{
    int count=0;
    if(Hashtable[index]->name == "empty")
    {
        return count;
    }
    else
    {
        count++;
        item* ptr=Hashtable[index];
        while(ptr->next!=NULL)
        {
            count++;
            ptr=ptr->next;
            
        }
    }
    return count;
};
void HashTable::printTable()
{
    int number;
    for (int i=0; i<tablesize; i++) {
        number=NumberOfItemsInIndex(i);
        cout<<endl<<endl<<"Index = "<<i<<endl;
        cout<<Hashtable[i]->name<<endl;
        cout<<Hashtable[i]->age<<endl;
        cout<<Hashtable[i]->salary<<endl;
        cout<<Hashtable[i]->experience<<endl;
        cout<<"# of items = "<< number<<endl;
        cout<<endl<<endl;
    }
};
void HashTable::printIteminIndex(int value)
{
    item* ptr=Hashtable[value];
    if (ptr->name=="empty")
    {
        cout<<"index = "<<value<<" is empty"<<endl;
    }
    else
    {
        while(ptr != NULL)
        {
            cout<<endl<<endl;
            cout<<ptr->name<<endl;
            cout<<ptr->age<<endl;
            cout<<ptr->salary<<endl;
            cout<<ptr->experience<<endl;
        }
    }
};
