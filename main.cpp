#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float a = 0;
    float b = 0;
    float c = 0;
    cout<<"Inserire il valore di a, b e c: "<<endl;
    cin >> a >> b >> c;
    cout<<"Area triangolo: "<<(a*b)/2<<endl;
    cout<<"Area quadrato: "<<pow(a,2)<<endl;
    cout<<"Area rettangolo: "<<a*b<<endl;
    cout<<"Area trapezio: "<<((a+b)*c)/2<<endl;
    return 0;
}
