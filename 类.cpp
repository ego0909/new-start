#include<iostream>
#include<string>
using namespace std;


class Student {
public:
	//���Ժ���Ϊ"
	int number;//ѧ��
	string name;//����

	void showstudent() {
		cout << "����" << name << "     " << "ѧ��" << number << endl;
	}
	void setname(string s) {
		name = s;
	}
	void setnumber(int r) {
		number = r;
	}
};

	
int main() {
	//����һ�������ѧ��
	Student s1;
	//s1.name = "����";
	s1.setname("����");
		//s1.number = 21;
	s1.setnumber(21);
		s1.number = 32;
		s1.showstudent();

		Student c1;
		c1.name = "Ф���";
		c1.number = 33;
		c1.showstudent();
	system("pause");
	return 0;
}