#include "hellocpp.h"

void swapNums(int &x, int &y) {
    int z = x;
    x = y;
    y = z;
  }
 
void truyenthamso(int &a, float &b)
{
    a = a + 100;
    b++;
    float c = a + b;
    cout<<"c = "<<c<<endl;
}  


  int main() {
    int in1 = 10;
    float in2 = 5;
    cout<<"Before:  in1 = "<<in1<<"; in2 = "<<in2<<endl;
    truyenthamso(in1, in2);
    cout<<"After:  in1 = "<<in1<<"; in2 = "<<in2<<endl;
    int firstNum = 10;
    int secondNum = 20;
  
    cout << "Before swap: " << "\n";
    cout << firstNum << secondNum << "\n";
  
    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);
    
    cout << "After swap: " << "\n";
    cout << firstNum << secondNum << "\n";

    int h = 3;
    int k = h++;
    cout<<"k = :"<<k<<endl;
    cout<<"h = :"<<h<<endl;

    return 0;
}



/*
dadada   anh tay cya kjcus switch cases: int 
lakcac

 dadada   anh tay cya kjcus switch cases: int 
 c
 dadada   anh tay cya kjcus switch cases: int 
 a
 dadada   anh tay cya kjcus switch cases: int  
  */