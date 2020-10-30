#include<iostream>
using namespace std;
class base {
	base() {
		cout << "base的构造函数" << endl;   
}
	~base() {
		cout << "base析构函数！" << endl;
	}
};
class son:public base {
public:
	son() {
		cout << "son的构造函数！" << endl;
	}
	~son() {
		cout << "son的析构函数！" << endl;
	}
	
};
void test() {
	son s;
}
int main() {
	//继承中构造和析构顺序如下：
	//先构造父类，在构造子类，析构的顺序与之相反
	test;
}
