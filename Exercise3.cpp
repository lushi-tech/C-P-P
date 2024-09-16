/*
this program finds the distance of an object for a time from 1 to 10
*/



#include <iostream>
#include <iomanip>
using namespace std;

double fallingDistance(int);

int main(){
    int distance, time;
    for(int a=1; a<=10; a++){
    time++;
    cout<<"Now we will show the distance of the object with time:"<<a<<endl;
    cout<<fallingDistance(time)<<" meters";
    cout<<endl;
    }
return 0;
}

double fallingDistance(int time){
     const double g=9.8;
    
    return (((time*time)*g)/2);
}