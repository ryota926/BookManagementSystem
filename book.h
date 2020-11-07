/*
 * book.h
 *
 *  Created on: Sep 22, 2019
 *      Author: Ryota Suzuki
 */

#ifndef BOOK_H_
#define BOOK_H_



#include <iostream>
#include <string>
using namespace std;

class book{
    public:
        void addBook();
        void setTitle();
        void setAuthor();
        void setCopies();
        void detail();
        void modify();
        string getTitle();
        string getAuthor();
        int getCopies();
        bool getAvil();
    private:
        string title;
        string author;
        int copies;
        bool avil;
};


#endif /* BOOK_H_ */
