#include <iostream>
using namespace std;

int multipy(int x, int y) {
    int result = x * y;
    return result;
}

int main() {

    int a = 10;
    int b = 20;
    int mul = multipy(a, b);

    cout << "The multiplication of " << a << " and " << b << " is: " << mul << endl;

    return 0;
}

// In this code, we have a function `multipy` that takes two integer parameters `x` and `y`. The function multiplies these two integers and returns the result. In the `main` function, we declare two integer variables `a` and `b`, assign them values, and then call the `multipy` function with these variables. The result is stored in the variable `mul`, which is then printed to the console. This demonstrates pass by value, where the values of `a` and `b` are passed to the function, and any changes to `x` and `y` inside the function do not affect `a` and `b`.
