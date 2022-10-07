//SRUDENTS GRADING SYSTEM
#include<iostream>
using namespace std;

int main(){
int maths,English,french,sci,cre;
float avg,sum;

cout<<"Enter marks for 5 units" << endl;
cin>>maths>>french>>sci>>cre>>English;
sum=(maths+french+sci+cre+English);

avg=(sum)/5;

if(avg>=70 && avg<=100)
    cout<<" Grade A"<<endl;

else if(avg>=60 && avg<=69)
    cout<<" Grade B"<<endl;

else if(avg>=50 && avg<=59)
    cout<<"Grade C"<<endl;

else if(avg>=40 && avg<=49)
    cout<<"Grade D"<<endl;

else
    cout<<"Grade E"<<endl;



return 0;
}




