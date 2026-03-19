#include <iostream>

class Kalkulator {
private:
    double liczba1;
    double liczba2;

public:
    // Konstruktor domyślny
    Kalkulator() : liczba1(0), liczba2(0) {}

    // Metody do ustawiania liczb
    void setLiczby(double l1, double l2) {
        liczba1 = l1;
        liczba2 = l2;
    }

    // Metody obliczeniowe
    double dodaj() const { return liczba1 + liczba2; }
    double odejmij() const { return liczba1 - liczba2; }
    double pomnoz() const { return liczba1 * liczba2; }

    // Obsługa dzielenia przez zero
    double podziel() const {
        if (liczba2 == 0) {
            std::cerr << "Błąd: Dzielenie przez zero!" << std::endl;
            return 0;
        }
        return liczba1 / liczba2;
    }
};

int main() {
    double n1, n2;
    char op;
    Kalkulator kal;

    std::cout << "--- Obiektowy Kalkulator C++ ---" << std::endl;
    std::cout << "Wpisz działanie (np. 5 + 3): ";
    std::cin >> n1 >> op >> n2;

    kal.setLiczby(n1, n2);

    switch (op) {
    case '+': std::cout << "Wynik: " << kal.dodaj() << std::endl; break;
    case '-': std::cout << "Wynik: " << kal.odejmij() << std::endl; break;
    case '*': std::cout << "Wynik: " << kal.pomnoz() << std::endl; break;
    case '/': std::cout << "Wynik: " << kal.podziel() << std::endl; break;
    default: std::cout << "Nieprawidłowy operator!" << std::endl;
    }

    return 0;
}
