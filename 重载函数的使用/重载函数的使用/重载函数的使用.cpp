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
	// double�������Ӧ����%lf��%f�Ƕ�Ӧfloat��
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
	cin.getline(name, 100 ); //geline ������ô�ã������������ȥ�ˣ�ͼ�������û�����޷���ѯ���� �й���ѧ��Ľ���ϲμӵ�C++�γ̡�
	//Feb 16th, afternoon, cin.geline(�ַ�������ָ�룬����), ����ͨ����
	//��Ҫ����һ�㣡��������Ҫ���ѹ����뷨����Ӣ�ﵥ�ʣ������������룬������������

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