#include<iostream>
#include<string>
//class的默认权限是私有化的，但是可以使用public将其公共化
using namespace std;
//成员属性设为私有
//1.可以控制读写权限
//2.对于写可以检测数据的有效性
class ego {
public:
	//姓名
	void setname(string m_name) {
		name=m_name;
	}
	string getname() {
		return name;
	}
	int getage() {
	
		return age;
	}
	void setage(int n_age) {
		age = n_age;

	}
	string getmylove() {
		
		return m_mylove;
	}
	void setmylove(string love) {
		m_mylove = love;
		
	}
private:
	string name;

	//年龄
	int age;
	//情人
	string m_mylove;
};
int main() {
	ego p;
	p.setname("肖轶戈");
	p.setage(22);

	cout << "姓名为" << p.getname() << endl;
	cout << "年龄为" << p.getage() << endl;
	p.setmylove("小向美奈子") ;
	cout << "我的爱人是" << p.getmylove() << endl;

	system("pause");
	return 0;
}
//将属性私有化后
//可以利用外调函数来调整class的属性