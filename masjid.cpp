#include <iostream>
#include <cmath> // Untuk menggunakan fungsi M_PI

// Fungsi untuk menghitung luas lingkaran
double hitungLuasLingkaran(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    int jumlahLingkaran; // Jumlah lingkaran yang akan dihitung
    double radiusLingkaran; // Jari-jari lingkaran

    std::cout << "Masukkan jumlah lingkaran yang akan dihitung: ";
    std::cin >> jumlahLingkaran;

    double totalLuas = 0.0; // Inisialisasi total luas

    for (int i = 1; i <= jumlahLingkaran; ++i) {
        std::cout << "Masukkan jari-jari lingkaran ke-" << i << " (dalam meter): ";
        std::cin >> radiusLingkaran;

        if (radiusLingkaran < 0) {
            std::cout << "Jari-jari lingkaran tidak boleh negatif. Coba lagi." << std::endl;
            --i; // Mengulangi input jika jari-jari negatif
            continue;
        }

        double luasLingkaran = hitungLuasLingkaran(radiusLingkaran);
        std::cout << "Luas lingkaran ke-" << i << " adalah " << luasLingkaran << " meter persegi." << std::endl;

        totalLuas += luasLingkaran;
    }

    std::cout << "Jumlah luas semua lingkaran adalah " << totalLuas << " meter persegi." << std::endl;

    return 0;
}