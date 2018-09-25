/*
 *  Problem name: ADDREV - Adding Reversed Numbers
 *  url: https://www.spoj.com/problems/ADDREV/
 *  Task: To add two reversed numbers and output their reversed sum.
 */
 #include <iostream>
 #include <string>

 using namespace std;

 int reverize(int number)
 {
     string income;
     string outcome;
     income = to_string(number);
     int islong = income.length();
     for (int i=islong; i>=0; i--)
     {
         outcome[islong-i] = income[i-1];
     }
     int out_int;
     out_int = stoi(outcome);
     return out_int;
     out_int=0;
 }
 int main()
 {

     int t,a,b,c;
     cin>>t;
     for (int i=t; i>0; i--)
     {
         cin>>a>>b;
         c=(reverize(a)+reverize(b));
         cout<<reverize(c)<<endl;
     }

     return 0;
 }
