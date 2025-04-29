#include <iostream>
#include <iomanip> 
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
class Calculator {
private:
    T value1;
    T value2;

public:
    Calculator(T v1, T v2) : value1(v1), value2(v2) {}
    T add() {
        return value1 + value2;
    }
    T sub() {
        return value1 - value2;
    }
    T mul() {
        return value1 * value2;
    }
    T div() {
        return value1 / value2;
    }
};

int main() {
    cout << "Max of 5 and 10 is: " << findMax(5, 10) << endl;
   

    Calculator<int> calcInt(5, 10);
    cout << "Integer Operations: "
         << calcInt.add() << ", "
         << calcInt.sub() << ", "
         << calcInt.mul() << ", "
         << calcInt.div() << endl;

    Calculator<float> calcFloat(5.5f, 2.2f);
    cout << "Float Operations: "
         << fixed << setprecision(2) << calcFloat.add() << ", "
         << calcFloat.sub() << ", "
         << calcFloat.mul() << ", "
         << calcFloat.div() << endl;

    /*Calculator<double> calcDouble(5.5, 2.2);
    cout << "Double Operations: "
         << fixed << setprecision(2) << calcDouble.add() << ", "
         << calcDouble.sub() << ", "
         << calcDouble.mul() << ", "
         << calcDouble.div() << endl;
	*/
    return 0;
}
