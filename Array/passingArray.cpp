#include <iostream>
using namespace std;
void display(int a[], int size){
    for(int i=0; i<size-1; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    display(arr, 5);
}