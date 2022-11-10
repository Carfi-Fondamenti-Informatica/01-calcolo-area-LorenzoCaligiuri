#include <iostream>

int main(){
    float a = 0;
    float b = 0;
    float c = 0;
    std::cout<<"Inserire il valore di a, b e c: "<<std::endl;
    cin >> a >> b >> c;
    std::cout<<"Area triangolo: "<<(a*b)/2<<std::endl;
    std::cout<<"Area quadrato: "<<a*a<<std::endl;
    std::cout<<"Area rettangolo: "<<a*b<<std::endl;
    std::cout<<"Area trapezio: "<<((a+b)*c)/2<<std::endl;
    return 0;
}
