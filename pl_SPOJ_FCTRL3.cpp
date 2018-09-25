/*
 *  Problem name: FCTRL3 - Factorial of two numbers
 *  url: https://pl.spoj.com/problems/FCTRL3/
 *  Task: Calculate sum of factorial number and output number of tens and units separated by a single space.
 */
#include <iostream>

using namespace std;

int main() {

    int p, a, b;
    cin>>p;
    while (p--)
    {
        cin>>a>>b;
        while (a!=b)
        {
            if (b>a) {b-=a;}
            else {a-=b;}
        }
        cout<<a+b<<endl;

    }

	return 0;
}
