#include "Book.h"
#include "Author.h"

int main() {
	Book InfernuDante = Book("Disco Titanic");
	Author rpGheo = Author("Radu Pavel Gheo");

	InfernuDante.addAuthor(rpGheo);
	int indexChapterOne = InfernuDante.createChapter("Capitolul 1");
	Chapter chp1 = InfernuDante.getChapter(indexChapterOne);

	int indexSubChapterOneOne = chp1.createSubChapter("Subcapitolul 1.1");
	SubChapter scOneOne = chp1.getSubChapter(indexSubChapterOneOne);
	scOneOne.createNewParagraph("Paragraph 1");
	scOneOne.createNewParagraph("Paragraph 2");
	scOneOne.createNewParagraph("Paragraph 3");
	scOneOne.createNewImage("Image 1");
	scOneOne.createNewParagraph("Paragraph 4");
	scOneOne.createNewTable("Table 1");
	scOneOne.createNewParagraph("Paragraph 5");
	scOneOne.print();
}
