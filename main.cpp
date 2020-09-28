#include <iostream>

using namespace std;

int main() {

    string cadena;
    cout << endl << "Tipo de dato: ";
    getline(cin, cadena);
    if(cadena=="int"){
        cout << endl << sizeof(int);

    }else if(cadena == "char"){
        cout << endl << sizeof(char);

    }else if(cadena== "long"){
        cout << endl << sizeof(long);
        
    }
    else if(cadena== "float"){
        cout << endl << sizeof(float);

    }
    else if(cadena== "short"){
        cout << endl << sizeof(short);

    }
    else if(cadena== "double"){
        cout << endl << sizeof(double);

    }else{
        cout << "Dato erroneo";
    }

    return 0;
}