  /*
   *  Problem name: TEST - Life, the Universe, and Everything
   *  url: https://www.spoj.com/problems/TEST/
   *  Task: rewrite small numbers from input to output.
            Stop processing input after reading in the number 42.
            All numbers at input are integers of one or two digits.
   */
#include <iostream>

using namespace std;

int main() {
	int a;

    while (a<100)
    {
        cin>>a;
        if (a==42) {return 0;}
        else cout<<a<<endl;
    }
}
