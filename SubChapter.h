#ifndef	SUBCHAPTER_H
#define SUBCHAPTER_H

#include <iostream>
#include <list>
#include "Paragraph.h"
#include "Table.h"
#include "Image.h"

using namespace std;

class SubChapter {
public:
    string name;
    list<Paragraph> paragraphs;
    list<Table> tables;
    list<Image> images;
    SubChapter(string name) {
        this->name = name;
        paragraphs = list<Paragraph>();
        tables = list<Table>();
        images = list<Image>();
    }
    void createNewParagraph(string content)
    {
        paragraphs.push_back(Paragraph(content));
    }
    void createNewTable(string content)
    {
        tables.push_back(Table(content));
    }
    void createNewImage(string content)
    {
        images.push_back(Image(content));
    }
};

#endif