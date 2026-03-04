#include <iostream>

class RekeningBank {
private:
    double saldo;

public:
    // Constructor untuk mengisi saldo awal
    RekeningBank(double saldo_awal) {
        saldo = saldo_awal;
    }

    // Method untuk setor uang
    void setor(double jumlah) {
        saldo += jumlah;
        std::cout << "Setor berhasil. Saldo sekarang: " << saldo << std::endl;
    }

    // Method untuk tarik uang
    void tarik(double jumlah) {
        if (jumlah > saldo) {
            std::cout << "Penarikan Gagal" << std::endl;
        } else {
            saldo -= jumlah;
            std::cout << "Penarikan berhasil. Sisa saldo: " << saldo << std::endl;
        }
    }
};

int main() {
    // Membuat objek rekening dengan saldo awal
    RekeningBank rekening1(1000.0);

    rekening1.setor(500.0);
    rekening1.tarik(300.0);
    rekening1.tarik(1500.0); // Melebihi saldo

    return 0;
}