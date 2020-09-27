#include<iostream>
#include<string>
using namespace std;


class Student {
public:
	//属性和行为"
	int number;//学号
	string name;//姓名

	void showstudent() {
		cout << "姓名" << name << "     " << "学号" << number << endl;
	}
	void setname(string s) {
		name = s;
	}
	void setnumber(int r) {
		number = r;
	}
};

	
int main() {
	//创建一个具体的学生
	Student s1;
	//s1.name = "张三";
	s1.setname("张三");
		//s1.number = 21;
	s1.setnumber(21);
		s1.number = 32;
		s1.showstudent();

		Student c1;
		c1.name = "肖轶戈";
		c1.number = 33;
		c1.showstudent();
	system("pause");
	return 0;
}