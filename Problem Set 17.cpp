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
  
  

               else if (answer == "C" || answer == "c")
	{
		hints_used++;
		system("cls");
		cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
		cout << "\t\t\t\t\tQ U E S T I O N  No. 10" << endl;
		cout << "// คำถาม " << endl;
		cout << "" << endl;
		cout << "" << endl;
		cout << "[1] คำตอบ " << endl;
		cout << "[2] คำตอบ" << endl;
		cout << "[3] คำตอบ" << endl;
		cout << "[4] คำตอบ" << endl;
		string answer;
		cout << endl;
		cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
		cin >> answer;
		//total_score += 5;
		//correct_answer += 1;
		if (answer == "3")
			cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;
		cout << endl;
		system("pause");
		system("cls");

	}

