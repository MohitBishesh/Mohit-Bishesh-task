#include <iostream>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

double findAngle(double hours, double minutes)
{
    // Here i am calculating the angles traversed by hour as well as minutes hand with respect to 12(as origin)
    double hourAngle = (hours * 30) + (minutes * 0.5);
    double minuteAngle = minutes * 6;

    // Here i am calculating the absolute angle difference between hour hand and minute hand
    double angle = (hourAngle - minuteAngle);

    // if we get angle as greater than 180 degrees, then I am substracting it by 180 degree as per standard angle output format wrt clock analogy 
    if (angle > 180) {
        angle = 360 - angle;
    }
    return angle;
    
}

int main() {
    int hours, minutes;
    label3:
    cout<<"Enter 12 if you want 12 hour format and 24 if you want 24 hour format: "<<endl;
    int format;
    cin>>format;
    if(format != 12 && format != 24)
    {
        cout<<"Invalid format !"<<endl;
        goto label3;
    }
    
    // Input the time in 24-hour format
    // I am using "lobel" for taking repeated input untill got a valid hour
    label:
    cout << "Enter a valid hour between 1 to: "<<format <<" :"<<endl;
    cin >> hours;
    
    if((format == 12 ) && (hours> 12 || hours<1))
    {
        cout<<"Invalid input!!"<<endl;
        goto label;
        
    }
    
    else if(format == 24  && ( hours>24 || hours<1) )
    {
        cout<<"Invalid input!!"<<endl;
        goto label;
    }
    if(hours>12)
    {
        hours = hours - 12;
    }
    
    label2:   // I am using "lobel2" for taking repeated input untill got a valid minute
    cout << "Enter a valid minute between 0 to 59: "<<endl;
    cin >> minutes;
    if(minutes>59 || minutes<0)
    {
        cout<<"Invalid input!!"<<endl;
        goto label2;
    }
    
    double ans = findAngle(hours, minutes);
    cout << "The actual angle from hour to minute hand is: " << abs(ans) << " degrees" << endl;
    cout << "The actual angle from minute to hour hand is: " << 360-abs(ans) << " degrees" << endl;
    return 0;
}
