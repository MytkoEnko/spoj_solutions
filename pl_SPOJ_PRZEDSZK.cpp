/*
 *  Problem name: PRZEDSZK - Kindergarten teacher (Przedszkolanka)
 *  url: https://pl.spoj.com/problems/PRZEDSZK/
 *  Task: Find least common multiple for two given numbers.
 */
#include <iostream>

using namespace std;

int n,a,b;
int gcd(int a, int b)
{
  int c = a % b;
  while(c != 0)
  {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}
        int lcm(int A, int B)
        {
          return A / gcd(A, B) * B;
        }

int main()
{
    cin >> n;
    for (int i=0; i<=n-1; i++)
    {
        cin>>a>>b;
        cout<<lcm(a,b)<<endl;

    }

    return 0;

}
