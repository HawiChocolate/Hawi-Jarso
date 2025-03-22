// Examples of the following:
// Overloading functions:
#include <iostream>
using namespace std;


void add(int a, int b)
{
  cout << "sum = " << (a + b);
}

void add(double a, double b)
{
    cout << endl << "sum = " << (a + b);
}

int main()
{
    add(10, 2);
    add(5.3, 6.2);

    return 0;
}


// Function template:
#include <iostream>
using namespace std;

template <typename T>
T add(T num1, T num2) {
    return (num1 + num2);
}

int main() {
    int result1;
    double result2;
    // calling with int parameters
    result1 = add<int>(2, 3);
    cout << "2 + 3 = " << result1 << endl;

    // calling with double parameters
    result2 = add<double>(2.2, 3.3);
    cout << "2.2 + 3.3 = " << result2 << endl;

    return 0;
}

// Namespaces:
#include <iostream>
using namespace std;

namespace car
{
  int value() { return 5; }
}

namespace teddy
{
  const double pi = 3.1416;
  double value() { return 2*pi; }
}

int main () {
  cout << car::value() << '\n';
  cout << teddy::value() << '\n';
  cout << teddy::pi << '\n';
  return 0;
}

//Structures(data):
#include <iostream>
using namespace std;

struct Person {
    string first_name;
    string last_name;
    int age;
    float salary;

    // member function to display information about the person
    void display_info() {
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person p1;
    
    cout << "Enter first name: ";
    cin >> p1.first_name;
    cout << "Enter last name: ";
    cin >> p1.last_name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;

    // display information using member function
    cout << "\nDisplaying Information." << endl;
    p1.display_info();

    return 0;
}