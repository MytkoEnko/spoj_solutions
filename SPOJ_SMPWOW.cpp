/*
 *  Problem name: SMPWOW - Wow [SIMPLE]
 *  url: https://www.spoj.com/problems/SMPWOW/
 *  Task: Print the word "Wow" where number of "o" equals given
    positive integer.
 */
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    cout<<"W";
    while (a>0)
    {
        cout<<"o";
        a--;
    }
    cout<<"w"<<endl;

    return 0;
}
