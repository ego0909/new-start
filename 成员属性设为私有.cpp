#include<iostream>
#include<string>
//class��Ĭ��Ȩ����˽�л��ģ����ǿ���ʹ��public���乫����
using namespace std;
//��Ա������Ϊ˽��
//1.���Կ��ƶ�дȨ��
//2.����д���Լ�����ݵ���Ч��
class ego {
public:
	//����
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

	//����
	int age;
	//����
	string m_mylove;
};
int main() {
	ego p;
	p.setname("Ф���");
	p.setage(22);

	cout << "����Ϊ" << p.getname() << endl;
	cout << "����Ϊ" << p.getage() << endl;
	p.setmylove("С��������") ;
	cout << "�ҵİ�����" << p.getmylove() << endl;

	system("pause");
	return 0;
}
//������˽�л���
//���������������������class������