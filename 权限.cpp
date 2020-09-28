#include<iostream>
using namespace std;
//访问权限
//三种
//公共权限public 成员 类内可以访问 类外不能访问
//保护权限 protected 成员 类内可以访问 类外不能访问
//私有权限 private 成员类内可以访问 类外不能访问
class person
{
public:
	string m_name;
protected:
	string m_car;
private:
	int m_password;
public:
	void func() {
		m_name = "张三";
		m_car = "拖拉机";
		m_password = 123344;//函数内部可以访问三个权限
	}
};
int main() {
	person p1;
	p1.m_name = "肖轶戈";//保护权限不可访问
	p1.m_car = "bdjdb";//私有权限无法访问
	p1.m_password = 1212;
}
