#include <iostream>
using namespace std;
#include <cmath>

int first();
int second();


int main() {

first();
second();
return 0;


}
int first() {
    int a;
    a = 2;
    cout << a;
    
    float b;
    b = 12.11;
    
    const float p = 3.14;
    
    float result;
    float partOne = 0.5 * (log(a) + log(b));
    float partTwo = pow(cos(pow(a + b, 2)) + exp(a), (p / 6) * (1/3));
    result = partOne / partTwo;
    cout << result;
    
    return 0;

    
    }

int second() {
    
    int a = 4;
    float b = 300.1;
    float result2;
    result2 = pow(7.2*(a+b), (1+pow(cos(a),2))*(1-cos(b))+0.711*pow(log(a+b),3));
    cout << "\n" << result2;
    
    return 0;
}