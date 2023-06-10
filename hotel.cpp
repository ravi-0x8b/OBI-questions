#include <iostream>

struct Hotel {
    int D; // valor da diária
    int A; // taxa da diária por dia
    int N; // dia da chegada do hospede
    int V; // valor total a pagar
} hotel;

int main(int argc, char** argv) {
    const unsigned short DAYS_IN_JULY{ 31 };

    std::cin >> hotel.D >> hotel.A >> hotel.N;

    int diarias{ DAYS_IN_JULY - hotel.N + 1 };

    if ((hotel.N >= 1) && (hotel.N <= 15)) {
        hotel.V = hotel.D + (hotel.A * (hotel.N - 1));
        hotel.V *= diarias;
    } 
    else {
        hotel.V = hotel.D + (hotel.A * 14);
        hotel.V *= diarias;
    }

    std::cout << hotel.V << '\n';
    return 0;
}
