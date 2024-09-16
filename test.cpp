#include <iostream>


using namespace std;

void swap(int &a, int &b);

int main(){
int x, y;
x = 5;
y = 7;

swap(x, y);

cout<<"X: "<<x<<endl;
cout<<"Y: "<<y<<endl;

    return 0;
}

void swap(int &a, int &b){
int t;
t = a;
a = b;
b = t;
}