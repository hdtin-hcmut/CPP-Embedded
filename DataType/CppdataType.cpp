/*
Data types in C++ are essential for defining the nature of data that variables can hold. They help the compiler allocate the correct amount of memory and determine the operations that can be performed on the data. Here are the primary data types in C++:
1. Fundamental Data Types
These are the basic data types provided by the language.

- Integer Types:
  - int: Standard integer type.
  - short: Short integer, typically half the size of int.
  - long: Long integer, typically larger than int.
  - long long: Extended long integer, usually larger than long.
  - unsigned int: Unsigned integer (only positive values).

- Floating-Point Types:
  - float: Single-precision floating-point.
  - double: Double-precision floating-point.
  - long double: Extended-precision floating-point.

- Character Types:
  - char: Single character type.
  - unsigned char: Unsigned character.
  - signed char: Signed character.

- Boolean Type:
  - bool: Represents true or false.

2. Derived Data Types
These are constructed from fundamental data types.

- Arrays:
  - Collection of elements of the same type, accessed by index.
  cpp
  int arr[5];
  

- Pointers:
  - Variables that store the address of another variable.
  cpp
  int* ptr;
  

- References:
  - Alternative name for another variable.
  cpp
  int& ref = var;
  

- Functions:
  - Blocks of code that perform a specific task.
  cpp
  int func(int x) {
      return x * 2;
  }
  

3. User-Defined Data Types
These allow for creating more complex types.

- Structures (struct):
  - Group different data types together.
  cpp
  struct Person {
      std::string name;
      int age;
      float height;
  };
  

- Classes:
  - Blueprints for creating objects, supporting encapsulation, inheritance, and polymorphism.
  cpp
  class Car {
  public:
      std::string model;
      int year;

      void display() {
          std::cout << "Model: " << model << ", Year: " << year << std::endl;
      }
  };
  

- Unions:
  - Similar to structures, but members share the same memory location.
  cpp
  union Data {
      int intVal;
      float floatVal;
      char charVal;
  };
  

- Enumerations (enum):
  - Define a set of named integral constants.
  cpp
  enum Color {
      Red,
      Green,
      Blue
  };
  

4. Standard Library Data Types
C++ provides a powerful standard library with additional data types.

- String:
  - Represents a sequence of characters.
  cpp
  std::string str = "Hello, World!";
  

- Containers:
  - Collection of objects, like vectors, lists, and maps.
  cpp
  std::vector<int> vec;
  std::list<std::string> lst;
  std::map<int, std::string> mp;
  

Each data type serves a specific purpose, and choosing the right one is crucial for efficient and effective programming. If you have any specific questions or need further examples, feel free to ask!
*/

#include <iostream>
using namespace std;

int main(){
    const double PI = 3.140517;
    double radius = 10;
    double circumference = 0;

    circumference = PI*radius*radius;
    cout<<"The circumference is "<<circumference<<endl;
    return 0;
}


/*
Data Type	Size	Description
boolean	1 byte	Stores true or false values
char	  1 byte	Stores a single character/letter/number, or ASCII values
int	    2 or 4 bytes	Stores whole numbers, without decimals
float	  4 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits
double	8 bytes	Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits
*/