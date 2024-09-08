#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    virtual float operation() = 0;
    void printResult(Calculator* calc) {
        cout << "Answer is " << calc->operation() << endl;
    }
};

class Addition: public Calculator {
    private:
        float a, b;
    public:
        Addition(float num1, float num2): a(num1), b(num2) {
        }
    float operation() override {
        return a + b;
    }
};
class Subtraction: public Calculator {
    private:
        float a, b;
    public:
        Subtraction(float num1, float num2): a(num1), b(num2) {
        }
    float operation() override {
        return a - b;
    }
};
class Multiplication: public Calculator {
    private:
        float a, b;
    public:
        Multiplication(float num1, float num2): a(num1), b(num2) {
        }
    float operation() override {
        return a * b;
    }
};
class Division: public Calculator {
    private:
        float a, b;
    public:
        Division(float num1, float num2): a(num1), b(num2) {
        }
    float operation() override {
        if (b != 0) {
            return a / b;
        } else {
            cout << "You can not divide by 0." << endl;
        }
        return -1;
    }
};

int main() {
    for (int i = 1; i <= 2; i++) { // so it runs twice therefore creating two objects.   
    
        float num1, num2;
        int calculationType;
        cout << "Print your first number: " << endl;
        cin >> num1;
        cout << "Print your second number: " << endl;
        cin >> num2;
        cout << "Choose from the following:" << endl;
        cout << "1 - Addition" << endl;
        cout << "2 - Subtraction" << endl;
        cout << "3 - Multiplication" << endl;
        cout << "4 - Division" << endl;
        cin >> calculationType;
        
        switch (calculationType) {
            case 1: {
                   Addition sum(num1, num2);
                   Calculator* calc1 = &sum;
                   sum.printResult(calc1);
                   break;
               }
            case 2: {
                   Subtraction difference(num1, num2);
                   Calculator* calc2 = &difference;
                   difference.printResult(calc2);
                   break;
               }
            case 3: {
                   Multiplication product(num1, num2);
                   Calculator* calc3 = &product;
                   product.printResult(calc3);
                   break;
               }
            case 4: {
                   Division quotient(num1, num2);
                   Calculator* calc4 = &quotient;
                   quotient.printResult(calc4);
                   break;
               }
        } 
    }        
    return 0;
}
