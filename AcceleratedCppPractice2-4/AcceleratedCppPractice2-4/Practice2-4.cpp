// 使用vs2010的代码整洁快捷键为Ctrl+k, Ctrl+f
// 
#include <iostream>  
#include <string>  

using namespace std;  

void square(int side);
void rectangle(int row5, int col5);
void triangle(int side);

int main()  
{  
	int practice = 0;
	for (;;) // 死循环，可以多次输入验证不同的题目结果
	{
		cout<<"Please choose Practice num:"<<endl;
		cin>>practice;
		switch (practice)
		{
			case 4:
				{
					cout<<"input your name:";  
					string name;  
					cin>>name;  

					cout<<endl<<endl;  
					const int pad=3;  //空行数量
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
					break;
				}

			case 5:
				{
					int shape=0;
					int length;
					int row5, col5;
					cout<<"choose 1. square, 2. rectangle, 3. triangle"<<endl;
					cin>>shape;
					switch (shape)
					{
					case 1:	
						{	
							cout<<"Please input the length of side";
							cin>>length;
							square(length);
							break;
						}
					case 2:
						{
							cout<<"Please input rows and columns"<<endl;
							cin>>row5>>col5;
							rectangle(row5, col5);
							break;
						}
					case 3:
						{
							cout<<"Please input the length of side";
							cin>>length;
							triangle(length);
							break;
						}//case
					}//switch
				}//case

			case 7:
				{
					countdown();
					break;
				}
		}//switch
	}
	return 0;  
}  

//output square
void square(int side)
{
	for (int i=0; i<side; i++)
	{
		for (int j=0; j<side; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

//output rectangle
void rectangle(int row5, int col5)
{
	for (int i=0; i<row5; i++)
	{
		for (int j=0; j<col5; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

// output triangle
void triangle(int side)
{
	for (int i=0; i<side; i++)
	{
		for (int j=0; j<i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}

void countdown()
{
	for(int i=-5; i < 10; i++)
	{
		cout<<i;
		i++;
		cout<<endl;
	}
}