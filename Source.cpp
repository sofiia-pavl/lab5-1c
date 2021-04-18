#include "Public.h"
#include "MyException.h"
#include <iostream>

int main()
{
    Public a;
    Public b;
    bool initResult;

    do {
        try
        {
            initResult = true;
            cout << " Add first number : " << endl << endl; cin >> a;
            cout << endl;
            cout << " Add second number : " << endl << endl; cin >> b;
            cout << endl;
        }
        catch (invalid_argument e)
        {
            initResult = false;
            cout << e.what() << endl;
        }
        catch (bad_exception e)
        {
            initResult = false;
            cout << e.what() << endl;
        }
        catch (MyException& e)
        {
            initResult = false;
            cout << e.what() << endl;
        }
        catch (const char* e)
        {
            initResult = false;
            cerr << e << endl;
        }
    } while (!initResult);

    cout << "++ of first number" << endl << ++a << endl;
    cout << "-- of second number" << endl << --b << endl;

    cout << "Subtraction of first and second number : " << endl << a - b;
    cout << endl;
    cout << "Comparison of first and second number : " << endl;
    a(a, b);

	return 0;
}