#include <iostream>
#include <thread>

void imprimirImpares() {
    for (int i = 1; i <= 10; i += 2) {
        std::cout << "Fil imparell: " << i << std::endl;
    }
}

void imprimirPares() {
    for (int i = 2; i <= 10; i += 2) {
        std::cout << "Fil parell: " << i << std::endl;
    }
}

int main() {
    // Crear els dos fils
    std::thread filImparells(imprimirImpares);
    std::thread filParells(imprimirPares);

    // Esperar que tots dos fils acabin
    filImparells.join();
    filParells.join();

    return 0;
}