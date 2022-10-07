//program to convert fahrenheit to celcius
#include <iostream>
using namespace std;
float  temperature (int f);
float celcius;
int main() {
    int fahrenheit;
    cout << "enter temperature in Fahrenheit"<<endl;
    cin>>fahrenheit;
    celcius=temperature (fahrenheit);
    cout<<"temperature in celcius="<<celcius<<endl;
    return 0;
}
float temperature (int f){
    float celcius;
    celcius=0.556*(f-32);
return celcius;
}
