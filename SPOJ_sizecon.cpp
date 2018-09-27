/*
 *  Problem name: SIZECON - Size Contest
 *  url: https://www.spoj.com/problems/SIZECON/
 *  Task: Find the sum of all given positive integers. The smallest score the better.
    SCORE: 168 points - there is a room for improvement.
 */
#include <iostream>
using namespace std;
int main()
{
    int in,sum=0;
    cin>>in;
    int every[in];
    for (int i=0;i<in; i++)
    {
        cin>>every[i];
        if (every[i]>0) sum+=every[i];
    }
    cout<<sum<<endl;
    return 0;
}
