// ConsoleApplication2.cpp : �w�q�D���x���ε{�����i�J�I�C
//

#include "stdafx.h"
#include <stdlib.h>
#include "iostream"

using namespace std;

class Father {
public:
	virtual void show() {
		cout << "it's Father" << endl;
	}
};

class Son : public Father {
public:
	virtual void show() {
		cout << "it's Son" << endl;
	}
};


void showByPtr(Father *father) {
	father->show();
}

void showByRef(Father &father) {
	father.show();
}

int main() {
	Father father;
	Son son;

	showByPtr(&father);
	showByPtr(&son);
	showByRef(father);
	showByRef(son);

	system("PAUSE");
	return 0;
}