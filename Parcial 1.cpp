#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void suma(int a, int b);
void resta(int a, int b);
void multiplicacion(int a, int b);
void division(int a, int b);
void MostrarMenu();
void OperacionesAritm();
int EsPrimo();
int raizcuadrada ();

int main()
{
	MostrarMenu();
	return 0;
}

void MostrarMenu() {
	system("color 8e");
	system("cls");
	int opcion;
	cout << "--------------Menu-----------------" << endl;
    cout << "1. Operaciones Aritmeticas" << endl;
    cout << "2. Determinar si un numero es primo o no" << endl;
    cout << "3. Raiz cuadrada de un número" << endl;
    cout << "4. Salir\n";
    cout << "-----------------------------------\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;
    
    switch (opcion) {
    	case 1:
    		OperacionesAritm();
    		break;
    	case 2:
    		EsPrimo();
    		break;
    	case 3:
    		raizcuadrada ();
    		break;
    	case 4:
        	system("cls");
            cout << "Saliendo del programa..." << endl;
            break;
        default:
            cout << "Error. Intente nuevamente." << endl;
            system("pause");
    }

	// Si el usuario no seleccionó salir, vuelve a mostrar el menú
    if (opcion != 4) {
        MostrarMenu();
    } else {
        cout << "Hasta Luego." << endl;
    }

}

void OperacionesAritm() {
	system("cls");
	int opcion, valor1, valor2;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;;
    cout << "4. Division" << endl;;
    cout << "Seleccione una opcion: ";
    cin >> opcion;
    
    switch (opcion){
    	case 1:
    		cout << "Ingrese el primer valor" << endl;
    		cin >> valor1;
    		cout << "Ingrese el segundo valor" << endl;
    		cin >> valor2;
    		suma(valor1, valor2);
    		break;
    	case 2:
    		cout << "Ingrese el primer valor" << endl;
    		cin >> valor1;
    		cout << "Ingrese el segundo valor" << endl;
    		cin >> valor2;
    		resta(valor1, valor2);
    		break;
    	case 3:
    		cout << "Ingrese el primer valor" << endl;
    		cin >> valor1;
    		cout << "Ingrese el segundo valor" << endl;
    		cin >> valor2;
    		multiplicacion(valor1, valor2);
    		break;
    	case 4:
    		cout << "Ingrese el primer valor" << endl;
    		cin >> valor1;
    		cout << "Ingrese el segundo valor" << endl;
    		cin >> valor2;
    		division(valor1, valor2);
    		break;
		}
}



// Definiciones de las funciones declaradas anteriormente
void suma(int a, int b) {
    int resultado = a + b; // Realiza la suma de a y b
    cout << "Suma: " << resultado << endl;
    system("pause");
}

void resta(int a, int b) {
    int resultado = a - b; // Realiza la resta de a y b
    cout << "Resta: " << resultado << endl;
    system("pause");
}

void multiplicacion(int a, int b) {
    int resultado = a * b; // Realiza la multiplicación de a y b
    cout << "Multiplicacion: " << resultado << endl;
    system("pause");
}

void division(int a, int b) {
    if (b != 0) {
        int resultado = a / b; // Realiza la división de a y b
        cout << "Division: " << resultado << endl;
    } else {
    	// Si el divisor es cero, muestra un mensaje de error
        cout << "No es posible dividir por cero." << endl;
    }
    system("pause");
}

int EsPrimo() {
	system("cls");
    int num;
	bool EsPrimo = true;
	
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num <= 1) {
        EsPrimo = false;
    } else {
        for (int i = 2; i <= num / 2; ++i){
        	if (num % i == 0){
        		EsPrimo = false;
        		break;
			}
		}
    }
    
    if (EsPrimo) {
    	system("cls");
    	cout << "El numero " << num << " es Primo" << endl; // Se muestra el resultado
	} else {
		cout << "El numero " << num << " no es Primo" << endl; // Se muestra el resultado
	}
    system("pause");
    return 0;
}

int raizcuadrada () {
	int numero, raiz;
		cout << "Ingrese un numero para calcular su raiz cuadrada: ";
        cin >> numero;

        // Calcular la raíz cuadrada del número ingresado por el usuario
        raiz = sqrt(numero);
        cout << "La raiz cuadrada de " << numero << " es: " << raiz << endl;
    system("pause");
    
    return 0;
}







