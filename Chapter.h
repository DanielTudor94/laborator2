#ifndef	CHAPTER_H
#define CHAPTER_H

#include <iostream>
#include <list>
#include "SubChapter.h"

using namespace std;

class Chapter {
public:
    string name;
    list<SubChapter> subChapters;
    Chapter(string name) {
        this->name = name;
        subChapters = list<SubChapter>();
    }
    int createSubChapter(string name) {
        subChapters.push_back(SubChapter(name));
    }
    SubChapter getSubChapter(int index) {
        auto l = subChapters.begin();
        advance(l, index);
        return *l;
    }
};

#endif
