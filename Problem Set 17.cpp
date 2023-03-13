#include <iostream>
using namespace std;


 

  // answer = 6
int main() {
   string s = "A";
s+="B";
cout << s;

 }
  // answer = AB



  int main() {
    cout << (4&1)<<1;
 }

  // answer = 01

int main() {
 cout << ('C'&~1);
 }

  // answer = 66

   int main() {
 cout << (char) ('C'&~1);
 }

  // answer = B


  int main() {
  cout << (3<<2>>1) <<endl ;
  cout << (3>>2>>1); 
 }

  // answer = 6
  // answer = 0

   int main() {
char s[] = "AAAAAAAAAAA 69";
char x[3];
int y; 
sscanf(s,"%s %d",x,&y);
cout << x << y;

 }

  // answer = AAAAAAAAAAA69


   int main() {
char s[] = "42,45 69:72";
int a,b,c,d; 
sscanf(s,"%d %d %d %d",&a,&b,&c,&d);
cout << a << b << c << d << "\n";
sscanf(s,"%d,%d %d:%d",&a,&b,&c,&d);
cout << a << b << c << d << "\n";
 }

  // answer = 420260
              42456972
  
  


