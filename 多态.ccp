#include<iostream>
using namespace std;
#include<string>
//分别利用普通写法和多态技术实现计算器
//普通写法
class calculator {
public:
	int m_num1;
	int m_num2;

	int getresult(string oper) {
		if (oper == "+") {
			return m_num1 + m_num2;
		}
		else if (oper == "-") {
			return m_num1 - m_num2;
		}
		else if (oper == "*") {
			return m_num1 - m_num2;
		}
		//如果需要扩展新的功能，需要修改源码
		//在真实的开发中 提倡 开闭原则
		//开闭原则：对扩展进行开放，对修改进行关闭
	}
};
//利用多态实现计算器
//实现计算机的抽象类
class abstractcalculator {
public:
	virtual int getresult() {
		return 0;
	}
	int m;
	int n;
};
class addcalculator :public abstractcalculator {
public:
	int getresult() {
		return m + n;
	}

};
class subcalculator :public abstractcalculator {
public:
	int getresult() {
		return m - n;
	}
};
class mulcalculator :public abstractcalculator {
public:
	int getresult() {
		return m * n;
	}
};
	void tset01() {
		calculator c;
		c.m_num1 = 10;
		c.m_num2 = 10;
		cout << c.m_num1 << "+" << c.m_num2 << "=" << c.getresult("+") << endl;
		cout << c.m_num1 << "-" << c.m_num2 << "=" << c.getresult("-") << endl;
		cout << c.m_num1 << "*" << c.m_num2 << "=" << c.getresult("*") << endl;
	}
	void test02() {
		//多态使用的条件
		//父类的指针或者引用指向子类
		//加法运算
		abstractcalculator* abc = new addcalculator;
		abc->m = 12;
		abc->n = 23;
		cout << abc->m << "+" << abc->n << "=" << abc->getresult() << endl;



	}
	int main() {
		 test01();
		test02();
		system("pause");
			return 0;
	}
