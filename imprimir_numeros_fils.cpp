#include <iostream>
#include <thread>

void imprimirPares() {
    for (int i = 2; i <= 10; i += 2) {
        std::cout << "Fil parell: " << i << std::endl;
    }
}

void imprimirImpares() {
    for (int i = 1; i <= 10; i += 2) {
        std::cout << "Fil imparell: " << i << std::endl;
    }
}

int main() {
    // Crear los hijos
    std::thread filImparells(imprimirImpares);
    std::thread filParells(imprimirPares);

    // Esperar a que acaben
    filImparells.join();
    filParells.join();

    return 0;
}