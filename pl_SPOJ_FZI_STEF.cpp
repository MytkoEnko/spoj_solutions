/*
 *  Problem name: FZI_STEF - Stefan
 *  url: https://pl.spoj.com/problems/FZI_STEF/
 *  Task: see description under the link above (Polish)
 */
 #include <iostream>
 using namespace std;

 int main() {
     int miasta, zarobek;
     long long suma=0, maks=0;
     cin >> miasta;
     while (miasta--){
             cin >> zarobek;

             suma+=zarobek;

             if (suma>maks){
                 maks=suma;
             }
             if (suma<0){
                 suma=0;
             }
         }

         cout << maks << endl;

     return 0;

 }
