#include<iostream>
using namespace std;
int main( )
{ 
   char a[4] = "abc"; 
   for (char *cp = a; (*cp) != '\0'; cp+=1) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   int b[4] = {6,9,6}; 
   int* end1 = &b[4-1];
   for (int *cp = b;cp <= end1; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   double c[4] = {6.1,9.2,6.3}; 
   double *end2 = &c[4-1];
   for (double *cp = c;cp <= end2; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   // khi cp+=2 thi se k in ra dia chi va gia tri cua b 
   for (char *cp = a; (*cp) != '\0'; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   // khi cp+=2 thi se k in ra dia chi va gia tri cua 9.2
    for (double *cp = c;cp <= end2; cp+=2) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}

