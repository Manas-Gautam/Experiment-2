//Name: - Manas Gautam
//PRN: - 23070123081
//Branch: - E&Tc{B1} 
//Exp: - 2.1
#include <iostream> // 1: Includes the iostream library for input and output operations.

using namespace std; // 2: Allows the use of standard library components without needing to prefix with std::.

int main() { // 3: Entry point of the program.

    // 4: Output the size of a char variable.
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    
    // 5: Output the size of an int variable.
    cout << "Size of int: " << sizeof(int) << " byte(s)" << endl;
    
    // 6: Output the size of a short int variable.
    cout << "Size of short int: " << sizeof(short int) << " byte(s)" << endl;
    
    // 7: Output the size of a long int variable.
    cout << "Size of long int: " << sizeof(long int) << " byte(s)" << endl;
    
    // 8: Output the size of a float variable.
    cout << "Size of float: " << sizeof(float) << " byte(s)" << endl;
    
    // 9: Output the size of a double variable.
    cout << "Size of double: " << sizeof(double) << " byte(s)" << endl;
    
    // 10: Output the size of a long double variable.
    cout << "Size of long double: " << sizeof(long double) << " byte(s)" << endl;
    
    // 11: Output the size of a bool variable.
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl;
    
    return 0; // 12: Return 0 to indicate successful execution of the program.
}

//Exp 2.2
#include <iostream> // 1: Includes the iostream library for input and output operations.

using namespace std; // 2: Allows the use of standard library components without needing to prefix with std::.

int main() { // 3: Entry point of the program.

    int a; // 4: Declares an integer variable `a`.

    // 5: Prompts the user to enter an integer.
    cout << "Enter any integer: ";
    cin >> a; // 6: Reads an integer input from the user and stores it in variable `a`.

    // 7: Outputs the integer value and its size in bytes.
    cout << "\nInteger = " << a << " and size is " << sizeof(a) << " bytes";

    float b; // 8: Declares a float variable `b`.

    // 9: Prompts the user to enter a floating-point number.
    cout << "\nEnter a number: ";
    cin >> b; // 10: Reads a floating-point input from the user and stores it in variable `b`.

    // 11: Outputs the float value and its size in bytes.
    cout << "\nFloat = " << b << " and size is " << sizeof(b) << " bytes";

    short int c; // 12: Declares a short integer variable `c`.

    // 13: Prompts the user to enter a short integer.
    cout << "\nEnter an integer: ";
    cin >> c; // 14: Reads an integer input from the user and stores it in variable `c`.

    // 15: Outputs the short integer value and its size in bytes.
    cout << "\nShort integer = " << c << " and size is " << sizeof(c) << " bytes";

    return 0; // 16: Returns 0 to indicate successful completion of the program.
}
Exp: - 2.3
#include <iostream> // 1: Includes the iostream library for input and output operations.

using namespace std; // 2: Allows the use of standard library components without needing to prefix with std::.

int main() { // 3: Entry point of the program.

    int a; // 4: Declares an integer variable named `a`.

    // 5: Prompts the user to enter an integer.
    cout << "Enter any integer: ";
    cin >> a; // 6: Reads an integer input from the user and stores it in the variable `a`.

    // 7: Outputs the value of the integer and its size in bytes.
    cout << "Integer = " << a << " and size is " << sizeof(a) << " bytes";

    // 8: Declares an integer variable named `b` with the 'register' storage class.
    int register b;

    // 9: Prompts the user to enter another integer.
    cout << "\nEnter a number: ";
    cin >> b; // 10: Reads an integer input from the user and stores it in the variable `b`.

    // 11: Outputs the value of the integer and its size in bytes.
    cout << "Register = " << b << " and size is " << sizeof(b) << " bytes";

    // 12: Declares an integer variable named `c` with the 'auto' storage class.
    int auto c;

    // 13: Prompts the user to enter yet another integer.
    cout << "\nEnter an integer: ";
    cin >> c; // 14: Reads an integer input from the user and stores it in the variable `c`.

    // 15: Outputs the value of the integer and its size in bytes.
    cout << "Auto = " << c << " and size is " << sizeof(c) << " bytes";

    return 0; // 16: Returns 0 to indicate successful completion of the program.
}
