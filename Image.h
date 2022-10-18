#ifndef	IMAGE_H
#define IMAGE_H

#include <iostream>

using namespace std;

class Image {
public:
	string imageName;
	Image(string imageName) {
		this->imageName = imageName;
	}
	void print() {
		cout << "Image with name: " << imageName << endl;
	}
};

#endif
