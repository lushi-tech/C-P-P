#include <iostream>
#include <iomanip>
using namespace std;

void getJudgeData(double &);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main() {
    double score1, score2, score3, score4, score5;
    
    getJudgeData(score1);
    getJudgeData(score2);
    getJudgeData(score3);
    getJudgeData(score4);
    getJudgeData(score5);
    
    calcScore(score1, score2, score3, score4, score5);
    return 0;
}

void getJudgeData(double &score){
    do{
        cout<<"Enter judge's score (0-10): ";
        cin>>score;
        
        if(score<0 || score>10){
            cout<<"Invalid score! Please enter a value betweenn 0 and 10. ";
        }
       } 
       while(score <0 || score>10);
}

void calcScore(double score1,double score2,double score3,double score4, double score5){
    double lowest = findLowest(score1, score2, score3, score4, score5);
    double highest = findHighest(score1, score2, score3, score4, score5);
    
    double total = score1 + score2 + score3 + score4 + score5 - lowest  - highest;
    
    double average = total/3;
    
    cout<<fixed<<setprecision(2);
    cout<<"The final average is : "<<average<<endl;
}

double findLowest(double score1,double score2,double score3,double score4, double score5){
    double lowest = score1;
    if(score2 < lowest) lowest = score2;
    if(score3 < lowest) lowest = score3;
    if(score4 < lowest) lowest = score4;
    if(score5 < lowest) lowest = score5;
    return lowest;
}

double findHighest(double score1,double score2,double score3,double score4, double score5){
    double highest =score1;
    if(score2 > highest) highest = score2;
    if(score3 > highest) highest = score3;
    if(score4 > highest) highest = score4;
    if(score5 > highest) highest = score5;
    
    return highest;
}