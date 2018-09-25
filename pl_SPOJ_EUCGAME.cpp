/*
 *  Problem name: EUCGAME - Euclides game
 *  url: https://pl.spoj.com/problems/EUCGAME/
 *  Task: Return number of coins left when the game is over (see description undler URL - PL)
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
