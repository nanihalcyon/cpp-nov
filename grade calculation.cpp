#include <iostream>
using namespace std;

int main()
{
	int language1,language2,language3,maths,science,social,obtained_marks,total_marks;
	float percentage;
	cout<< "enter your obtained marks";
	cout<<"\n language1 ";
	cin>>language1;
	cout<<"\n language2 ";
	cin>>language2;
	cout<<"\n language3 ";
	cin>>language3;
	cout<<"\n maths ";
	cin>>maths;
	cout<<"\n science ";
	cin>>science;
	cout<<"\n social ";
	cin>>social;
	obtained_marks=(language1+language2+language3+maths+science+social);
	
	cout<< " obtained total marks "<< obtained_marks;
	cout<< "\n enter your total marks ";
	cin>>total_marks;
	percentage=(((float)obtained_marks/(float)total_marks)*100);
	cout<< "\n your percentage is ";
	cout<<percentage <<"\n";
    if(percentage<40)
    {
    	cout<<" grade is F";
	}else if(percentage<=60)
    {
    	cout<<" grade is D";
	}else if(percentage<=70)
    {
    	cout<<" grade is C";
	}else if(percentage<=85)
    {
    	cout<<" grade is B ";
	}else if(percentage<=100)
    {
    	cout<<" grade is A";
	}
	
	return 0;
}
