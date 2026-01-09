#include<iostream>
using namespace std;
void swap(int *x, int *y){ // pass by reference
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    cin >> a >> b;
    swap(&a,&b); // swapping using reference
    cout << "After swapping: " << endl;
    cout << "a: " << a << " b: " << b << endl;
    return 0;

}