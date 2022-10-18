#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <list>
#include "Author.h"
#include "Chapter.h"
using namespace std;

class Book {
private:
	string title;
	list<Author> authors;
	list<Chapter> chapters;
public:
	Book(string title) {
		this->title = title;
		authors = list<Author>();
		chapters = list<Chapter>();
	}

	void addAuthor(Author author) {
		authors.push_back(author);
	}
	int createChapter(string name) {
		chapters.push_back(Chapter(name));
	}
	Chapter getChapter(int index) {
		auto l = chapters.begin();
		advance(l, index);
		return *l;
	}
};

#endif
