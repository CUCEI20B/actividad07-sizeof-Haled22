#include <iostream>

using namespace std;

int main() {

    string cadena;
    cout << endl << "Tipo de dato: ";
    getline(cin, cadena);
    if(cadena=="int"){
        cout << endl << "Int = " << sizeof(int);

    }else if(cadena == "char"){
        cout << endl << "Char = " << sizeof(char);

    }else if(cadena== "long"){
        cout << endl << "Long = " << sizeof(long);
        
    }
    else if(cadena== "float"){
        cout << endl << "Float = " << sizeof(float);

    }
    else if(cadena== "short"){
        cout << endl << "Short = " << sizeof(short);

    }
    else if(cadena== "double"){
        cout << endl << "Double = " << sizeof(double);

    }else{
        cout << "Dato erroneo";
    }

    return 0;
}