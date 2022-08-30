#include<iostream>
using namespace std;
class student{
 public:
  int rollno,m1,m2,m3;
  string name; 
  int get(){
   cout<<"enter the name:";
   cin>>name;
   cout<<"enter the roll no:";
   cin>>rollno;
   cout<<"enter 1st mark:";
   cin>>m1;
   cout<<"enter 2nd mark:";
   cin>>m2; 
   cout<<"enter 3rd mark:";
   cin>>m3; 
  }
  int show(){
  	cout<<"name :";
   cout<<name;
   cout<<endl<<"rollno:";
   cout<<rollno;
   cout<<endl<<"mark1:";
   cout<<m1;
   cout<<"mark2:";
   cout<<m2;
   cout<<"mark3:";
   cout<<m3; 	
  int avg=(m1+m2+m3)*100/300;
  cout<<endl<<"average is :";
  cout<<avg;
  if(avg>80&&avg<=100)
  cout<<endl<<"grade A"<<endl;
  else if(avg>65&&avg<80)
  cout<<endl<<"grade B"<<endl;
  else if(avg>50)
  cout<<endl<<"grade C"<<endl;  
  }
};
int  main()
{
 student s[3];
 for(int i=0;i<3;i++)
 {
 s[i].get();
  s[i].show();
 }
}
