//patterns
#include<iostream>
using namespace std;

void pattern1(int n){
for (int i=0; i<n; i++){
  for (int j=0; j<n; j++){
    cout << "*";
      }
  cout << endl;
  }
}
/* output:
    ****
    ****
    ****
    **** */

int main(){
  int n;
  cin >> n;
  pattern1(n);
}

/* for test cases 
int main(){
  int t;
  cin >> t;
  for ( int i=0 ; i<t ; i++ ){
  cin >> n;
  pattern1(n);
  }
}
*/
