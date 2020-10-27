#include<iostream>
using namespace std;

//普通实现界面
//JAVA界面
class java {
public:
	void header() {
		cout << "首页、公开课、登录、注册....（公共头部）" << endl;
	}
	void footer() {
		cout << "帮助、交流合作、站内地图" << endl;
	}
	void left() {
		cout << "java、python、c++、...." << endl;
	}
	void content() {
		cout << "JAVA学科视频" << endl;
	}
};
//利用继承实现界面
//把公共的部分抽离出来
class basepage {
public:
	void header() {
		cout << "首页、公开课、登录、注册....（公共头部）" << endl;
	}
	void footer() {
		cout << "帮助、交流合作、站内地图" << endl;
	}
	void left() {
		cout << "java、python、c++、...." << endl;
	}
};
//JAVA界面
class java :public basepage {
public:
	void content() {
		cout << "JAVA的视频下载" << endl;
	}
};
//继承的语法：class 子类：继承方式 父类
//子类 也称为 派生类、
//父类也称为基类

int mian() {
	
	system("pause");
	return 0;
}
