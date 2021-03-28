#include <iostream>
using namespace std;

class CPU {
public:
	CPU() { //构造函数的定义
		cout << "Construct CPU" << endl;
	}
	CPU(CPU& c) {
		cout << "CPU copy constructor" << endl;
	}
	~CPU() {
		cout << "Destruct CPU" << endl;    //析构函数的定义
	}
};

class RAM {
public:
	RAM() {
		cout << "Construct RAM" << endl;
	}
	RAM(RAM& c) {
		cout << "RAM copy constructor" << endl;
	}
	~RAM() {
		cout << "Destruct RAM" << endl;    //析构函数的定义
	}
};
class CDROM {
public:
	CDROM() {
		cout << "Construct CDROM" << endl;
	}
	CDROM(CDROM& c) {
		cout << "CDROM copy constructor" << endl;
	}
	~CDROM() {
		cout << "Destruct CDROM" << endl;    //析构函数的定义
	}
};
class Computer {
private:
	CPU c;
	RAM r;
	CDROM cd;
public:
	Computer(CPU xp1, RAM xp3, CDROM xp2) :c(xp1), r(xp3), cd(xp2) {
		cout << "Construct Computer" << endl;
	}
	Computer(Computer&i) :c(i.c), r(i.r), cd(i.cd) {
		cout << "Computer copy constructor" << endl;
	}
	~Computer() {
		cout << "Destruct Computer" << endl;    //析构函数的定义
	}
};
int main() {
	/*Computer(CPU xp1,RAM xp3 ,CDROM xp2 ) :c(xp1), r(xp3), cd(xp2)  {*/
	CPU a;
	RAM c;
	CDROM b;
	Computer i(a, c, b);
	Computer j(i);
	return  0;
}
