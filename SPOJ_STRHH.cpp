/*
 *  Problem name: STRHH - Half of the half
 *  url: https://www.spoj.com/problems/STRHH/
 *  Task: For given string with even number of characters return
    every second character from the first half of the sequence.
    Start printing with the first character.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int times; double dlug;
    string word;
    cin>>times;
    while (times>0)
    {
        cin>>word;
        dlug=round((word.length())/2.0/2.0);
        if (dlug<1) dlug=1;
        for (int i=0,j=0; i<dlug; i++,j+=2)
        {
            cout<<word[j];
        }
        cout<<endl;
        times--;
        word.clear();
    };



    return 0;
}
