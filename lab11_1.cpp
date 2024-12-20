// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    int n = rand() % 9;
    string grade;
    switch(n){
        case 0 :
        grade = "A";break;
        case 1 :
        grade = "B+";break;
        case 2 :
        grade = "B";break;
        case 3 :
        grade = "C+";break;
        case 4 :
        grade = "C";break;
        case 5 :
        grade = "D+";break;
        case 6 :
        grade = "D";break;
        case 7 :
        grade = "F";break;
        case 8 :
        grade = "W";break;
    }
    cout<<"Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    cout<<"You will get "<<grade<<" in this 261102. ";
}