#include <iostream>

using namespace std;

enum Day {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Sturday,
    Sunday
};

enum State {
    Idle,
    Running,
    Paused,
    Stopped
};

int main(){
    Day Today = Tuesday;
    State Currentstate = Stopped;
    
    //using switch cases
    switch (Currentstate)
    {
    case Idle:
        cout<<"The state is Idle"<<endl;
        break;
    case Paused:
        cout<<"The state is Paused"<<endl;
        break;
    case Running:
        cout<<"The state is Running"<<endl;
        break;    
    default:
        cout<<"Sorry, I don't know the current state!"<<endl;
        break;
    }
    //using if statement
    if (Today == Tuesday)
    {
        cout<<"To day is Tuesday!"<<endl;
    }
    
    return 0;
}