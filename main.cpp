#include <iostream>

int main(){
    float a;
    float b;
    float c;
    a=0;
    b=0;
    c=0;
    std::cin >> a >> b >> c;
    std::cout<<(a*b)*0.5<<std::endl;
    std::cout<<(a*a)<<std::endl;
    std::cout<<(a*b)<<std::endl;
    std::cout<<((a+b)*c)*0.5<<std::endl;
    return 0;
}
