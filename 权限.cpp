#include<iostream>
using namespace std;
//����Ȩ��
//����
//����Ȩ��public ��Ա ���ڿ��Է��� ���ⲻ�ܷ���
//����Ȩ�� protected ��Ա ���ڿ��Է��� ���ⲻ�ܷ���
//˽��Ȩ�� private ��Ա���ڿ��Է��� ���ⲻ�ܷ���
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
		m_name = "����";
		m_car = "������";
		m_password = 123344;//�����ڲ����Է�������Ȩ��
	}
};
int main() {
	person p1;
	p1.m_name = "Ф���";//����Ȩ�޲��ɷ���
	p1.m_car = "bdjdb";//˽��Ȩ���޷�����
	p1.m_password = 1212;
}
