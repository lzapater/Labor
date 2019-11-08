#include <iostream>

using namespace std;

class Persona {
protected:
	string nombre;
	string apellido;
	int edad;

public:
	void agregar(string n, string a, int e) {
		nombre = n;
		apellido = a;
		edad = e;
	}
	void imprimir() {
		cout << nombre << '\t' << apellido << '\t' << edad << " anhos";
	}
};
class Natural :public Persona {
private:
	string dni;
public:
	void agregar(string n, string a, string d) {
		nombre = n;
		apellido = a;
		dni = d;
	}
	void imprimir() {
		cout << nombre << '\t' << apellido << '\t' << "Numero de DNI: "<<dni;
	}
};
class Juridica :public Persona {
private:
	string ruc;
public:
	void agregar(string n, string a, string r) {
		nombre = n;
		apellido = a;
		ruc = r;
	}
	void imprimir() {
		cout << nombre << '\t' << apellido << '\t' << "Numero de RUC: " << ruc;
	}
};

int main()
{
	Persona p1;
	cout << "Ejemplo:"<<endl;
	p1.agregar("Luis", "Zapater", 23);
	p1.imprimir();
	cout << '\n';
	cout << '\n';
	cout << "Persona natural:" << endl;
	Natural n1;
	n1.agregar("Juan", "Perez", "74268475");
	n1.imprimir();
	cout << '\n';
	cout << '\n';
	cout << "Persona juridica:" << endl;
	Juridica j1;
	j1.agregar("Jose", "Gomez", "20103284");
	j1.imprimir();
	cout << '\n';
	return 0;
}
