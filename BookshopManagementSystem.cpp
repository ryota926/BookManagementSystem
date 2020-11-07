//============================================================================
// Name        : BookshopManagementSystem.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <stdlib.h>
#include "book.h"
using namespace std;

int main() {
    bool cont = true;
    int input;
    book* list[100];
    int count = 0;
    string title;
    string tempStr;
    cout<<"Welcome to the Bookshop Management System"<<endl;
    while(cont == true){
        cout<<"Please select one of the following commands"<<endl;
        cout<<"1. Add book"<<endl;
        cout<<"2. Find book and details"<<endl;
        cout<<"3. Print list of books"<<endl;
        cout<<"4. Modify book record"<<endl;
        cout<<"5. Delete book"<<endl;
        cout<<"6. Exit program"<<endl;

        cin >> input;
        bool found = false;

        switch(input){
            case 1:
                cout<<"Enter the following book details..."<<endl;
                list[count]=new book();
                list[count]->addBook();
                count++;
                break;

            case 2:
                cout<<"Enter name of book you want to find: "<<endl;
                cin>>tempStr;
                for(int i=0; i<count; i++){
                    if(tempStr == list[i]->getTitle()){
                        cout<<"Book found! Here are some details about it"<<endl;
                        list[i]->detail();
                    }
                }
                break;

            case 3:
                cout<<"Here is the list of books in the system"<<endl<<endl;
                for(int i=0; i<count; i++){
                    cout<<list[i]->getTitle()<<endl;
                }
                break;

            case 4:
                cout<<"Enter name of book you want to modify: ";
                cin>>tempStr;
                for(int i=0; i<count; i++){
                    if(tempStr == list[i]->getTitle()){
                        list[i]->modify();
                        found = true;
                        break;
                    }
                }
                if(found == false){
                    cout<<"Could not find book, try again"<<endl;
                }
                break;

            case 5:
                cout<<"Enter name of book you want to delete: ";
                cin>>tempStr;
                for(int i=0; i<count; i++){
                    if(tempStr == list[i]->getTitle()){
                        for(int j=i; j<count; j++){
                            list[j]=list[j+1];
                        }
                        found = true;
                        count--;
                        break;
                    }
                }
                if(found == false){
                    cout<<"Could not find book, try again"<<endl;
                }
                break;

            case 6:
                cont = false;
                break;
        }

        system("CLS");
    }
    return 0;
}
