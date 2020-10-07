#include<iostream>
#include<string>
using namespace std;
//对象的初始化和清理工作
//利用构造函数 进行初始化的操作
//利用析构函数 进行清理的工作
class person {
	//1.构造函数
	//没有返回值 不用写void
	//函数名 与类名相同
	//构造函数可以有参数 可以发生重载
	//创建对象时，构造函数会自动调用，但仅调用一次
public:
	person() {
		cout << "person的构造函数调用" << endl;//如果你不写构造函数，编译器会为你自动分配一个空的构造函数
	}
	//析构函数 用于进行清理工作
	//没有返回值 不写void
	//函数名和类名相同 在名称前加~
	//析构函数不可以有参数，不可以发生重载
	//对象在销毁前 会自动调用析构函数，且只会调用一次
	~person() {
		cout << "调用析构函数" << endl;
	}


};
void test01() {
	person p;///在栈上的数据，test01(),执行完会自动释放。如果不自己提供。编译器会提供两个空的构造和析构
}
int main() {
	test01();
	system("pause");
	return 0;
}
