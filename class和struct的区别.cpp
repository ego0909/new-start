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
	//struct��class������
	//class��Ĭ��Ȩ����˽��Ȩ��
	//struct��Ĭ��Ȩ���ǹ���Ȩ��
	c1 sb;
	sb.m_a = 299;//classĬ��Ȩ��Ϊ˽�У����Բ��ܷ���

	c2 sg;//struct����Ȩ��Ϊ���������Կ��Է���
	sg.m_3 = 88;

	system("pause");
	return 0;
}