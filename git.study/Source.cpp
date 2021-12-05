#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;

class Exam {
public:
	
	void test_1() { cout << "Write the answers to the following questions?\n"; }
	void test_2() {cout << "2+2=\n";}
	void test_3() { cout << "5_3=\n"; }
};

int main() {

	cout << "welcom\n" << endl;

	Exam pass;
	pass.test_1();
	pass.test_2();
	pass.test_3();

	cout << endl << "Good luck";

	return 0;
}