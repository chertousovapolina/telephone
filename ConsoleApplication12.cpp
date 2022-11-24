
//Чертоусова телефон дз

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c, t;
    cin >> a >> b >> c >> t;
    int s = 0;
    if (t <= a) cout << t * b;
    else {
        s = a * b + (t - a) * c;
        cout << s;
    }
    
}

