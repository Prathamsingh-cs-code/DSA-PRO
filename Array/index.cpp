#include <iostream>
using namespace std;
 int main(){
    int marks[5];
    for(int i=0; i<=5; i++){
     
        cin >> marks[i];
    }
    for (int i = 0; i <= 5; i++)
    {
        if(marks[i]<33){
            cout << "You have failed in subject " << i << endl;
        }
    }
    
 }