/*
 *{
	#include <iostream>
	
	using namespace std;
	
	int add(int a, int b)
	{
		return a+b;
	}
	
	double add(double a, double b)
	{
		return a+b;
	}
	
	int main(void)
	{
		int isum = add(2,3);
		float fsum = add(2.33,3.032);
		
		cout << isum << endl;
		cout << fsum << endl;
	
		system("pause");
		return 0;
	}
}
*/

#include <iostream>
#include <cmath>
//#define RATE 2.54
using namespace std;

int main()
{
	double x, s;
	scanf("%lf", &x);
	// double类型输出应该用%lf，%f是对应float的
	s = sqrt(x);

	cout<<s;

	system("pause");
	return 0;
}
/*
int main()
{
	float inch, cm;

	scanf("%f", &inch);

	cm=inch*RATE;

	cout<<inch<<"inch="<<inch*RATE<<"cm";

	system("pause");

	return 0;
}
*/
/*
int main(void)
{
	//cout<<"Hello C++."<<endl;
	//cout<<"I like programming."<<endl;
		

	char name[100];
	cin.getline(name, 100 ); //geline 函数怎么用？卡在这里过不去了，图书馆现在没网，无法查询，在 中国大学生慕课上参加的C++课程。
	//Feb 16th, afternoon, cin.geline(字符串数组指针，长度), 测试通过！
	//还要谨记一点！！！：不要用搜狗输入法输入英语单词，否则轻则乱码，重则卡死！！！

	cout<<"Hello "<<name<<".";

	//system("pause");
	return 0;
}
*/
/*
 *1-3 pass
int main()
{
	double a, b, c;

	cin>>a>>b;
	cout<<a*b;

	system("pause");

	return 0;
}
*/