#include <iostream>

#include "Dog.h"

using namespace std;

class Person {
public:
	void sleep();

};

void Person::sleep() {
	cout << "Person sleep." << endl;
}

int main() {

	Person xiaoming;
	xiaoming.sleep();

	Dog xiaobai;
	xiaobai.bark();
	return 0;
}