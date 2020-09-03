#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int j;
    double k;
    string str="";
    cin >> j;
    cin >> k;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, str);
    cout << i+j << endl;
    cout<<fixed<<setprecision(1)<<d+k<<endl;
    cout << s + str << endl;


    return 0;
}

