#include <iostream> 
using namespace std;
int main(){
    double a11, a12, a13, a21, a22, a23, a31, a32, a33;
    cin >> a11 >> a12 >> a13>> a21>> a22>> a23>> a31>> a32>> a33;
    double A = a11*((a33*a22)-(a32*a23));
    double B = a12*((a33*a21)-(a31*a23));
    double C = a13*((a32*a21)-(a31*a22));
    cout << (A-B)+(C) << endl;
    
}