#include <iostream>
#include <cmath> // For scientific functions like sqrt, pow, sin, etc.

using namespace std;

int main() {
    double num1, num2, result;
    int choice;

    cout << "Select the operation to perform:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Square root \n";
    cout << "6. Power (^)\n";
    cout << "7. Sine (sin)\n";
    cout << "8. Cosine (cos)\n";
    cout << "9. Tangent (tan)\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) 
    {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        
        case 5:
            cout << "Enter a number: ";
            cin >> num1;
            if (num1 >= 0) {
                result = sqrt(num1);
                cout << "Result: " << result << endl;
            } else {
                cout << "Error: Square root of negative number is not allowed." << endl;
            }
            break;
        
        case 6:
            cout << "Enter the base and exponent: ";
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "Result: " << result << endl;
            break;

        case 7:
            cout << "Enter a number (in degrees): ";
            cin >> num1;
            result = sin(num1 * M_PI / 180); // Converting degrees to radians
            cout << "Result (sin): " << result << endl;
            break;

        case 8:
            cout << "Enter a number (in degrees): ";
            cin >> num1;
            result = cos(num1 * M_PI / 180); // Converting degrees to radians
            cout << "Result (cos): " << result << endl;
            break;

        case 9:
            cout << "Enter a number (in degrees): ";
            cin >> num1;
            result = tan(num1 * M_PI / 180); // Converting degrees to radians
            cout << "Result (tan): " << result << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
            break;
    }

    return 0;
}
