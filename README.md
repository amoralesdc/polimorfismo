# Polimorfismo en acción

Arreglo de punteros `Vehiculo*` que mezcla objetos `Auto` y `Motocicleta`. Al recorrerlo y llamar `mostrarInfo()` en cada elemento, cada objeto responde según su tipo real.

## Compilar y ejecutar

```bash
g++ polimorfismo.cpp -o polimorfismo
./polimorfismo
```

## Salida

```
Auto: Toyota Corolla - 180 km/h - 4 puertas
Motocicleta: Yamaha R6 - 260 km/h - 600 cc
Auto: Ford Mustang - 250 km/h - 2 puertas
Motocicleta: Honda CBR500R - 190 km/h - 500 cc
```
