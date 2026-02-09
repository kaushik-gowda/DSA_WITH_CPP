#include <iostream>
using namespace std;

int change(int &x, int &y) {
    x = x * 2;
    y = y * 2;
    return x, y;
}
int main() {

    int a = 10;
    int b = 20;
    change(a, b);

    cout << "The changed values are: " << a << " and " << b << endl;

    return 0;
}

// In this code, we have a function `change` that takes two integer reference parameters `x` and `y`. The function doubles the values of `x` and `y`. In the `main` function, we declare two integer variables `a` and `b`, assign them values, and then call the `change` function with these variables. Since we are passing the variables by reference, any changes made to `x` and `y` inside the function will affect `a` and `b`. After calling the function, we print the changed values of `a` and `b` to the console. This demonstrates pass by reference, where the references to the original variables are passed to the function, allowing it to modify their values directly.
