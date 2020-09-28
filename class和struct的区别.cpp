#include<iostream>
#include<string>
using namespace std;
class c1 {
	int m_a;
};
struct c2 {
	int m_3;
};
int main() {
	//struct和class的区别
	//class的默认权限是私有权限
	//struct的默认权限是公共权限
	c1 sb;
	sb.m_a = 299;//class默认权限为私有，所以不能访问

	c2 sg;//struct访问权限为公共，所以可以访问
	sg.m_3 = 88;

	system("pause");
	return 0;
}