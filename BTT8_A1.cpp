#include<iostream>
using namespace std;
void f(int xval)
{
   int x;
   x = xval;
   // in d?a ch? c?a x t?i dây
   cout << &x;
}
void g(int yval)
{
   int y;
   // in d?a ch? c?a y t?i dây
   cout << &y;
}
int main()
{
   f(7);
   g(11);
   return 0;
} 
/* nhan xet dia chi cua ca x y deu bang nhau, vi 2 ham f va g deu bat dau tren dinh stack frame cua ham main
ham f va g deu nhau tham so kieu int va cung kieu void */
