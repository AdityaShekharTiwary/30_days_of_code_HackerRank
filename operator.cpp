#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,z;
    double x;

    cin >> x >> y >> z;
    double tip = (x*y/100);
    double tax = (x*z/100);
    double cost = (x+tip+tax);
    cout << round(cost) << endl;


    return 0;
}
