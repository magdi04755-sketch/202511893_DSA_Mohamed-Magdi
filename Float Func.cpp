#include <iostream>

using namespace std;

float addNumbers(float a, float b, float c, float d)
{
    return a + b + c + d;
}

int main()
{
    float result;

    result = addNumbers(1.5,2.5,3.0,4.0);

    cout <<"Sum=" << result;

    return 0;
}
