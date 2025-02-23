#include <iostream>
using namespace std;

int main(){
    int i = 0;
    while (i < 5)
    {
        cout<<"The value of i is: "<<i<<endl;
        i++;
    }
    cout<<"The loop has ended!"<<endl;

    do
    {
        cout<<"The value of i is: "<<i<<endl;
        i--;
    } while (i > 0);
    

    int myNumbers[5] = {10, 20, 30, 40, 50};
    // Loop through integers
    for (int i : myNumbers) {
        cout << i << "\n";
    }
    return 0;
}
