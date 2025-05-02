#include <iostream>
using namespace std;

//definition of function
//1)Re-use approach
//2)flexibility

//single responsibility
int add(int num1, int num2)
{
    //int formula = num1+ num2;
    // cout << formula << endl;
    return num1 + num2; //fuction definition
}

int product(int num1, int num2) {
    return num1 * num2;
}
  
int getUserInput(int index) {
    int n;
    cout << "Enter  the number" << index << ":" << endl;
    cin >> n;
    return n;
}




void calculatorApp() {
    int n1 = getUserInput(1);
    int n2 = getUserInput(2);


    


    int slection;
    cout << "select calculator option:" << endl;
    cout << "1)sum=" << endl;
    cout << "2)product=" << endl;
    cin >> slection;

    int result;
    switch (slection)
    {
    case 1:
        result = add(n1, n2);
        break;
    case 2:
        result = product(n1, n2);
        break;
    }
    cout << " result" << result << endl;
}


 

int main()
{
    calculatorApp();
}
