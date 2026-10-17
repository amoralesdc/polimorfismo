#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
protected:
    string marca;
    string modelo;
    int velocidadMax;

public:
    Vehiculo(string marca, string modelo, int velocidadMax)
        : marca(marca), modelo(modelo), velocidadMax(velocidadMax) {}

    virtual void mostrarInfo() const {
        cout << marca << " " << modelo << " - " << velocidadMax << " km/h" << endl;
    }

    virtual ~Vehiculo() {}
};

class Auto : public Vehiculo {
private:
    int numPuertas;

public:
    Auto(string marca, string modelo, int velocidadMax, int numPuertas)
        : Vehiculo(marca, modelo, velocidadMax), numPuertas(numPuertas) {}

    void mostrarInfo() const override {
        cout << "Auto: " << marca << " " << modelo << " - " << velocidadMax
             << " km/h - " << numPuertas << " puertas" << endl;
    }
};

class Motocicleta : public Vehiculo {
private:
    int cilindrada;

public:
    Motocicleta(string marca, string modelo, int velocidadMax, int cilindrada)
        : Vehiculo(marca, modelo, velocidadMax), cilindrada(cilindrada) {}

    void mostrarInfo() const override {
        cout << "Motocicleta: " << marca << " " << modelo << " - " << velocidadMax
             << " km/h - " << cilindrada << " cc" << endl;
    }
};

int main() {
    Vehiculo* vehiculos[4];
    vehiculos[0] = new Auto("Toyota", "Corolla", 180, 4);
    vehiculos[1] = new Motocicleta("Yamaha", "R6", 260, 600);
    vehiculos[2] = new Auto("Ford", "Mustang", 250, 2);
    vehiculos[3] = new Motocicleta("Honda", "CBR500R", 190, 500);

    for (int i = 0; i < 4; i++) {
        vehiculos[i]->mostrarInfo();
    }

    for (int i = 0; i < 4; i++) {
        delete vehiculos[i];
    }

    return 0;
}
