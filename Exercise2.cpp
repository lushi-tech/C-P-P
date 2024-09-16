/*
The progrma calculates an employee's goss pay rate includig overtime.
The user enters the hours worked and if the hours are more than base hours it claculates additional pay rate
If the hours are less then base hours then just calculates the salary.
Here we use functions and global constants.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double pay_rate = 22.55;  //global constant
const double base_hours = 40.0;
const double overtimeMultiplier = 1.5;

double getBasepay(double);
double getOvertimepay(double);
int main() {
    double hours,
           basePay,
           overtime = 0.0,
           totalpay;
cout<<"how many hours did you work? ";
cin>>hours;

basePay = getBasepay (hours);

if (hours > base_hours)
   overtime = getOvertimepay(hours);
   
totalpay = basePay + overtime;

cout<<setprecision(2)<<fixed<<showpoint;

cout<<"base pay: "<<basePay<<endl;
cout<<"Overtime pay "<<overtime<<endl;
cout<<"Total Pay "<<totalpay<<endl;

return 0;
}

double getBasepay(double hoursworked){
    double basepay;
    if(hoursworked > base_hours)
       basepay = base_hours * pay_rate;
    else
       basepay = hoursworked * pay_rate;


return basepay;
}

double getOvertimepay(double hoursworked){
    double overtimePay;
    if(hoursworked > base_hours){
        overtimePay = (hoursworked - base_hours) * pay_rate * overtimeMultiplier;
    }
    else
    overtimePay = 0.0;
    
    return overtimePay;
    
    
}