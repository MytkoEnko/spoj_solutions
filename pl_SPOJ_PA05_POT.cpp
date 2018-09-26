/*
 *  Problem name: PA05_POT - Raising to a power
 *  url: https://pl.spoj.com/problems/PA05_POT/
 *  Task: For given natural numbers a i b, return last digit of a^b.
 */
#include <iostream>

using namespace std;

int a,c,d,x,y;

int main()
{
    cin>>a;
    for (int i=0; i<=a-1; i++)
    {

    cin >> x >> y;
    c=x%10;
    d=y%4;
    switch(c)
    {
    case 0:
        {
            cout <<"0"<<endl;
        }
        break;
    case 1:
        {
           cout<<1<<endl;
        }
        break;
    case 2:
        {
            switch(d)
            {
                case 1: { cout<<2<<endl;} break;
                case 2: { cout<<4<<endl;} break;
                case 3: { cout<<8<<endl;} break;
                case 0: { cout<<6<<endl;} break;
            }
        }
        break;
    case 3:
        {
            switch(d)
            {
                case 1: { cout<<3<<endl;} break;
                case 2: { cout<<9<<endl;} break;
                case 3: { cout<<7<<endl;} break;
                case 0: { cout<<1<<endl;} break;
            }
        }
        break;
    case 4:
        {
            if (y % 2) {cout<<4<<endl;}
            else {cout<<6<<endl;}
        }
        break;
    case 5:
        {
            cout<<5<<endl;
        }
        break;
    case 6:
        {
            cout<<6<<endl;
        }
        break;
    case 7:
        {
            switch(d)
            {
                case 1: { cout<<7<<endl;} break;
                case 2: { cout<<9<<endl;} break;
                case 3: { cout<<3<<endl;} break;
                case 0: { cout<<1<<endl;} break;
            }
        }
        break;
    case 8:
        {
            switch(d)
            {
                case 1: { cout<<2<<endl;} break;
                case 2: { cout<<4<<endl;} break;
                case 3: { cout<<2<<endl;} break;
                case 0: { cout<<6<<endl;} break;
            }
        }
        break;
    case 9:
        {
            if (y % 2) cout<<9<<endl;
            else cout<<1<<endl;
        }
        break;
    }
    }

    return 0;
}
