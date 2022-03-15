#include <iostream>
using namespace std;

int main(){
    float a=0, b=0, c=0, triangolo=0, quadrato=0, rettangolo=0, trapezio=0;
    cout << "Inserire tre valori reali" << endl;
    cin >> a >> b >> c;
    triangolo = a*b/2;
    quadrato = a*a;
    rettangolo = a*b;
    trapezio =  (a+b)*c/2;
    cout << triangolo << endl;
    cout << quadrato << endl;
    cout << rettangolo << endl;
    cout << trapezio << endl;
    return 0;
}
