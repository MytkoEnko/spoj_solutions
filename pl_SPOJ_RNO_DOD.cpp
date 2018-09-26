/*
 *  Problem name: RNO_DOD - Simple summation
 *  url: https://pl.spoj.com/problems/RNO_DOD/
 *  Task: Return total for all given integers.
    Income: number of cases, number of integers in case, integers separated by space
 */
#include <iostream>
using namespace std;

int t, n, li,sum;

int main() {

	cin>>t;

	for (int i=0; i<=t-1; i++)
	{
		cin>>n;
		for (int i=0; i<=n-1; i++)
		{
			cin>>li;
			sum+=li;
		}
		cout<<sum<<endl;
		sum=0;
		}

	return 0;
}
