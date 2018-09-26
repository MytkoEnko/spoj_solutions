/*
 *  Problem name: XIWTPZA - Rectangles (Prostokąty)
 *  url: https://pl.spoj.com/problems/XIWTPZA/
 *  Task: Find out if one given rectangle can contain another one without touching it's edges.
    Income: number of cases, 4 integers representing lengths of sides of first and secodn rectangle accordingly
    Outcome: Yes (TAK) if first rectangle can contain secnd, and No (NIE) if not.
    ! possible vertical, horizontal and diagonal directions
 */
#include <iostream>
#include <math.h>

using namespace std;

int main() {

	double m,a,b,p,q,e;

	cin>>m;

	for (int i=0; i<m; i++)
	{
	cin>>a>>b>>p>>q;

	if (b>a){e=a;a=b;b=e;};
	if (q>p) {e=p; p=q; q=e;};
	if ((p < a && q < b) || (p > a && b > (2*p*q*a + (p*p-q*q)*sqrt(p*p+q*q-a*a)) / (p*p+q*q)))
	cout<<"TAK"<<endl;

	else cout<<"NIE"<<endl;
	}
	return 0;
}
