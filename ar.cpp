#include<iostream>
using namespace std;
class student
{
	public:
		char s_name[10];
		int rollno;
		
	void enterdata()
	{
		cout<<"enter student name:";
		for(int i=0;i<10;i++)
		{cin>>s_name[i];
		}
		cout<<"enter rollno:";
		cin>>rollno;
	}
	void showdata();
};
void student::showdata()
{
	cout<<"list of student:";
	for(int i=0;i<10;i++)
	{cout<<s_name[i]<<" ";
	}
	cout<<rollno;
}
int main()
{
student s;
s.enterdata();
s.showdata();
return 0;
}
