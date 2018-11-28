
#include <iostream>

//using namespace std;
//using std::cout;
//using std::endl;

//int num = 1;

//1.hello world demo
/*int main(int argc, char** argv)
{
	cout << "hello world!"<<endl;
	return 0;
}*/

//2.namespace
/*namespace A
{
	int mum = 10;
	void printA()
	{
		cout << "zheshiA" << endl;
	}
}

namespace B
{
	int num = 100;
	void printNum(int num)
	{
		cout << "形参num = " << num << endl;
		cout << "B::num = " << B::num << endl;
		cout << "A::num = " << A::mum << endl;
		cout << "全局num = " << ::num << endl;
	}
}

int main(int argc, char* agrv[])
{
	B::printNum(1000);
	return 0;
}*/

/*//3.引用
using std::cout;
using std::endl;

void test0(void)
{
	int num = 100;
	int & ref = num;
	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;
	cout << "&num = " << &num << endl;
	cout << "&ref = " << &ref << endl;

	ref = 200;
	cout << "修改引用以后" << endl;
	cout << "num = " << num << endl;
	cout << "ref = " << ref << endl;
	cout << "&num = " << &num << endl;
	cout << "&ref = " << &ref << endl;
}

int main(int argc, char * argv[])
{
	test0();
	return 0;
}
*/
/*
结果：
num = 100
ref = 100
&num = 003AFE28
&ref = 003AFE28
修改引用以后
num = 200
ref = 200
&num = 003AFE28
&ref = 003AFE28
*/

/*//4.引用作为函数的参数
using std::cout;
using std::endl;

void swap(int &x, int &y)
{
	int temp = y;
	y = x;
	x = temp;
}

void test1(void)
{
	int a = 3;
	int b = 4;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	swap(a,b);
	cout << "交换以后：" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int main(int argc, char * argv[])
{
	test1();
	return 0;
}*/

/*//5.开辟空间
using std::cout;
using std::endl;

void test2(void)
{
	int * p = (int *)malloc(sizeof(int));
	*p = 10;
	cout << "*p = " << *p <<endl;

	int * p2 = (int *)malloc(sizeof(int) * 10);
	for (int idx = 0; idx < 10; idx++)
	{
		p2[idx] = idx;
	}

	free(p);
	free(p2);
}

void test3(void)
{
	int *p = new int(1);
	cout << "new *p = " << *p << endl;

	delete p;
}

int main(int argc, char * argv[])
{
	test2();
	test3();

	return 0;
}*/

/*//6.引用作为函数返回值
using std::cout;
using std::endl;

int arr[5] = { 0,1,2,3,4 };

int &func(int idx)
{
	return arr[idx];
}

int main(int argc, char argv[])
{
	cout << func(1) << endl;

	return 0;
}*/

/*//7.重载
using std::cout;
using std::endl;

int add(int x, int y)
{
	return x + y;
}
int add(int x, int y, int z)
{
	return x + y + z;
}

int main(int argc, char argv[])
{
	cout << add(1, 2) << endl;
	cout << add(1, 2, 3) << endl;

	return 0;
}*/

//8.字符串

#include <string>
using std::cout;
using std::endl;
using std::string;

void testString(void)
{
	string s1 = "helloworld";
	string s2 = "nihao";
	string s3 = s1 + "   " + s2;

	s1.append(s2);
	cout << "s1=" << s1 << endl;
}

int main(void)
{
	testString();

	return 0;
}









