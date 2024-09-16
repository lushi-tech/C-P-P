/*Exercise 1
Write a program that asks the user to enter an item’s wholesale cost and its markup 
percentage. It should then display the item’s retail price. For example: 
• If an item’s wholesale cost is 5.00 and its markup percentage is 100%, then the 
item’s retail price is 10.00.  If an item’s wholesale cost is 5.00 and its markup percentage is 50%, then the item’s 
retail price is 7.50. 
The program should have a function named calculateRetail that receives the 
wholesale cost and the markup percentage as arguments and returns the retail price 
of the item. 
Input Validation: Do not accept negative values for either the wholesale cost of the 
item or the markup percentage.
*/

#include <iostream>
using namespace std;

double calculateRetail(double, double);

int main() {
    double wholesale, markupPer;
    
    cout<<"Enter the wholesale. ";
    cin>>wholesale;
    while(wholesale < 0){
        cout<<"Wholesale cannot be negative, please enter a valid value again.";
        cin>>wholesale;
    }
    
    cout<<"Enter the markeup percentage. ";
    cin>>markupPer;
    
    while (markupPer < 0){
        cout<<"Markup cannot be negative, please enter a valid value again.";
        cin>>markupPer; 
    }
    
    double RetailPrice = calculateRetail( wholesale, markupPer);
    
    cout<<"The value is : "<<RetailPrice<<endl;
  
    return 0;
}
double calculateRetail(double wholesale, double markupPer){
    
double retail= (wholesale * (markupPer * 0.01)) + wholesale;
    
    return retail;
}