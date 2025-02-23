#include <iostream>
using namespace std;

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}
int main(){

    // Namespace provides a solution for preventing name conflicts in large project.
    // each entity needs a unique name
    using namespace first;
    // int x = 0;
    cout<<x<<endl;
    return 0;
}