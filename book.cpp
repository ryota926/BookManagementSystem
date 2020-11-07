/*
 * book.cpp
 *
 *  Created on: Sep 22, 2019
 *      Author: Ryota Suzuki
 */
#include "book.h"
#include <iostream>
#include <string>
using namespace std;

void book::addBook(){
    setTitle();
    setAuthor();
    setCopies();
}

void book::setTitle(){
    cout<<"Title: ";
    string Title;
    cin.ignore();
    getline(cin,Title);
    title = Title;
}

string book::getTitle(){
    return title;
}

void book::setAuthor(){
    cout<<"Author: ";
    string Author;
    getline(cin,Author);
    author = Author;
}

string book::getAuthor(){
    return author;
}

void book::setCopies(){
    cout<<"Number of copies: ";
    int Copies;
    cin>>Copies;
    copies = Copies;
}

int book::getCopies(){
    return copies;
}

bool book::getAvil(){
    if (getCopies()>0){
        return true;
    }
    else{
        return false;
    }
}

void book::detail(){
    cout<<"Title:"<< getTitle()<<endl;
    cout<<"Author: "<<getAuthor()<<endl;
    cout<<"Number of copies: "<<getCopies()<<endl;
    cout<<"Availability: ";
    if(getAvil() == true){
        cout<<"Available"<<endl;
    }
    if(getAvil() == false){
        cout<<"Not available"<<endl;
    }
}

void book::modify(){
    setTitle();
    setAuthor();
    setCopies();
}
