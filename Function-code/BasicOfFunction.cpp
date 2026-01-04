#include <iostream>
using namespace std;
int main(){
    int a , b, c;
    cin >> a >> b >> c;
    for (int i = 0; i<= a; i++) // outer loop // with third variable
    {
        // cin >> a;  // this line is redundant here
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

  for (int i = 0; i<= b; i++)
    {
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

  for (int i = 0; i<= c; i++)
    {
        for(int j = 0; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
// to optimize the code we can use function.
// take a third variable and call cin from inside the loop.