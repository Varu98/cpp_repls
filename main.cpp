#include <iostream>
using namespace std;

void ques2(){
cout<<"MY\n\tNAME\n\t\tIS\n\t\t\tXYZ"<<endl;
}

void ques3(int a,int b,int c,int d){
  //write a program to add four variables
  int sum;
  sum = a+b+c+d;
  cout<<sum<<endl;
}


void ques4(int a,int b,int c,int d){
  int sum;
  sum = a+b+c+d;
 // cin>>a>>b>>c>>d>>endl;
  cout<<sum<<endl; 
//.write a program to add four variables using cin?

}

//ques6
void ques6(int a){
  //write a program in ‘c’ language to find out the given
// number is even or odd?
  if(a==2){
    cout<<"\n"<<endl;
    cout<<a<<"\nis even no."<<endl;
  }else{
    cout<<a<<"\nis odd no."<<endl;
  }
  
}
//ques 5

void ques5()
{
    int num1;
    cout<<"\nEnter a no.\n";
    cin>>num1;
    if(num1%2 == 0)
    cout<<num1<<" is even\n";
    else
    cout<<num1<<" is odd\n";
}


// //ques 7 by JOD
void ques7(){
  float pi=3.14;
  int r;
  float area;
  cout<<"enter the radius of circle to find the area of circle  \n";
  cin>>r;
  area=pi*r*r;
  cout<<"area of circle is:\n"<<area;

  
 }

 //ques 10
 int ques10(int a,int b){
   int sum;
   sum = a+b;
   return sum;
 }
 //ques 9
 void ques9(){
   cout<<"Enter No. from 1-7 for Week Days\n";
   int num;
   cin>>num;
   switch(num){
     case 1:
     cout<<"sunday";
     break;
     case 2:
     cout<<"Monday";
     break;
     case 3:
     cout<<"Tuesday";
     break;
     case 4:
     cout<<"Wednesday";
     break;
     case 5:
     cout<<"Thusday";
     break;
     case 6:
     cout<<"Friday";
     break;
     case 7:
     cout<<"Saturday";
     break;
     default:
     cout<<"You are dumb";
   }
 }

void ques8()
{
    /*bs= basic salary
    da= dearness allowance
    ta= transport allowance
    hra= house rent allowance
    gs= gross salary*/

    float bs,da,ta,hra,gs;
    cout<<"Enter the basic salary\n";
    cin>>bs;
    if(bs<6000)
    {
        da=0.02*bs;
        ta=0.01*bs;
        hra=0.05*bs;
    }
    else if(bs>=6000 && bs<8000)
    {
        da=0.03*bs;
        ta=0.02*bs;
        hra=0.08*bs;
    }
    else
    {
        da=0.04*bs;
        ta=0.03*bs;
        hra=0.1*bs;
    }

    gs=bs+da+ta+hra;//gross salary
    cout<<"Gross salary is = "<<gs<<endl;
    
}

int main() {
  cout << "Hello, how are you?!\n";
  ques2();
  ques3(1,2,3,4);
  ques4(1,2,3,4);
  ques7();
  ques5();
  ques6(3);
  ques8();
  ques9();
  ques10(6,8);
  return 0;
}
/*
ques12 by Varu
int ques12(){
  write a program using if else of weekdays?
cout<<"\nques12\n"<<endl;
cout<<
  
}
*/


//ques 11 by lawda haggu harsh #jhatkabaal
/*
void main(){
  char c;
  cout<<"enter an alphabet:";
  cin>>c;
  islowercasevowel=(c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
  isuppercasevowel=(c=='A' || c=='E' ||c=='I' ||c=='O' ||c=='U');
  if
}
*/
