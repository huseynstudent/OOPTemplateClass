#include <iostream>
using namespace std;
template <class T1, class T2>
class Caculator {
private:
    T1 sum() {
        return num1 + num2;
    }
    T1 extract() {
        return num1 - num2;
    }
    T1 multiply() {
        return num1 * num2;
    }
    T1 divide() {
        if (num2 == 0)
            return 0;
        return num1 / num2;
    }
public:
    T1 num1;
    T2 num2;
    Caculator(T1 n1, T2 n2) {
        this->num1 = n1;
        this->num2 = n2;
        cout << "number 1: " << num1 << endl;
        cout << "number 2: " << num2 << endl;
    }
    void choose() {
        cout << "======Caculator======\n";
        cout << "pick an operation: \n";
        cout << "\t1)summarization\n\t2)extraction\n\t3)multiplication\n\t4)dividing\n";
        int choice;
        cin >> choice;
        cout << "\nresult: ";
        if (choice == 1)
            cout << sum() << endl;
        else if (choice == 2)
            cout << extract() << endl;
        else if (choice == 3)
            cout << multiply() << endl;
        else if (choice == 4)
            cout << divide() << endl;
        else {
            cout << "\nwrong operation,try again\n";
            choose();
        }

    }
};
void main()
{
    Caculator<double, double> c(1.7, 20);
    c.choose();
}