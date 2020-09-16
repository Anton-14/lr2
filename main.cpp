#include <iostream>

using namespace std;

int main()
{
   char a=0;
    cout << "ASCII" << endl;
    for (int i=0; i<= 255; ++i){
    cout << a << endl;
    a++;
}
   char b;
   cout << "введите число" << endl;
   cin >> b;
   if ((b>= 48) && (b<=57))
       cout <<"число" << endl;
   else if ((b>= 65) && (b<= 90)||(b >=97) && (b<=122))
        cout << "буква" << endl;
   else cout << "неизвестно" << endl;


    int  x, y;
   cout << "ведите x" << endl;
   cin >> x;
   y= x%5;
   switch (y)
   {
   case 0: cout << x*(-1)+1 << endl; break;
   case 1: cout << 5 << endl; break;
   case 2 : cout << 0 << endl; break;
   case 3 : cout << x-3 << endl; break;
   case 4: cout << 0 << endl; break;
   }
   return 0;

}
