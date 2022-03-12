#include <iostream>
using namespace std;

int main(){
    float a=0, b=0, c=0, triangolo=0, quadrato=0, rettangolo=0, trapezio=0;
    std::cout << "Inserire dei valori reali" << std::endl;
    cin >> a >> b >> c;
    triangolo = a*b/2;
    quadrato = a*a;
    rettangolo = a*b;
    trapezio =  (a+b)*c/2;
    std::cout << " L'area e' " << triangolo << " " << quadrato << " " << rettangolo << " " << trapezio << std::endl;
    return 0;
}
