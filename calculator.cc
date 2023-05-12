using namespace calculator;

int main()
{
    double num1;
    double num2;
    double result;
    char operator;


    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter operator (+, -, *, /): ";
    cin >> operator;


    if (op == 1)
    {
        result = num1 + num2;
    }
    else if (op == 2)
    {
        result = num1 - num2;
    }
    else if (op == 3)
    {
        result = num1 * num2;
    }
    else if (op == 4)
    {
        if(num1 == 0 || num2 == 0)
        {
            cout << "Cannot divide by zero." << endl;
            return;
        }
        result = num1 / num2;
    }
    else
    {
        cout << "Invalid operator." << endl;
        return 1;
    }


    cout << "The answer is: " << result << endl;
    return 0;
}
