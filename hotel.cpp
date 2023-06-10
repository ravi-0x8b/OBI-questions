#include <iostream>

int main(int argc, char** argv) {
    int D{}, A{}, N{};
    int valorTotal{ 0 };

    const unsigned short DAYS_IN_JULY{ 31 };

    std::cin >> D >> A >> N;

    int diarias{ DAYS_IN_JULY - N + 1 };

    if ((N >= 1) && (N <= 15)) {
        valorTotal = D + (A * (N - 1));
        valorTotal = valorTotal * diarias;
    } 
    else {
        valorTotal = D + (A * 14);
        valorTotal = valorTotal * diarias;
    }

    std::cout << valorTotal << '\n';
    return 0;
}
