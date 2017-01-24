// 使用vs2010的代码整洁快捷键为Ctrl+k, Ctrl+f
// 
#include <iostream>  
#include <string>  
using namespace std;  
int main()  
{  
	cout<<"input your name:";  
	string name;  
	cin>>name;  

	cout<<endl<<endl;  
	const int pad=3;  
	const string space(pad,' ');  
	const string greet=space+"Hello, "+name+space;  
	const string ps(greet.size(),' ');  
	const int row=pad*2+3;  
	const string::size_type col=greet.size()+2;  

	for(int r=0;r!=row;++r)  
	{  
		string::size_type c=0;  
		while(c!=col)  
		{  
			if(r==pad+1 && c==1)  
			{  
				cout<<greet;  
				c+=greet.size();  
			}  
			else   
			{  
				if(r==0||r==row-1||c==0||c==col-1)  
				{  
					cout<<"*";  
					++c;  
				}  
				else if(c==1)  
				{  
					cout<<ps;  
					c+=ps.size();  
				}  
			}  
		}  
		cout<<endl;  
	}  
	system("pause");
	return 0;  
}  
