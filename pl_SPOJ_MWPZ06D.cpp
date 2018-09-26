/*
 *  Problem name: MWPZ06D - Name day / Candies (Imieniny)
 *  url: https://pl.spoj.com/problems/MWPZ06D/
 *  Task: Find out if there is any candies left, if all guests get equal number of them.
    Income: Nr of cases, nr of guests, nr of candies
    Outcome: Yes (Tak) if candies left, No (Nie) if there is no candies left.
 */
#include <iostream>
using namespace std;

int main() {
    int n, c, u, z;
	cin>>n;

	for (int i=0; i<=n-1; i++)
	{
		cin>>u>>c;
		if ((u>=3)&&(c!=0))
		{
	    	z=c%(u-1);
		}
		else if ((u==1)&&(c!=0)) {z=1;}
		else z=0;

		if (z == 0)
		{
		    cout<<"NIE"<<endl;
		}
		else cout<<"TAK"<<endl;
	}
	return 0;
}
