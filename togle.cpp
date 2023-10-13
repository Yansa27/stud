#include <iostream>

// Fungsi untuk menghitung kombinasi C(n, k)
int kombinasi(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    } else {
        return kombinasi(n - 1, k - 1) + kombinasi(n - 1, k);
    }
}

int main() {
    int totalBola, jumlahDipilih;

    // Meminta pengguna memasukkan total jumlah bola
    std::cout << "Masukkan total jumlah bola: ";
    std::cin >> totalBola;

    // Memeriksa apakah input totalBola valid
    if (totalBola <= 0) {
        std::cout << "Input total bola tidak valid. Harus lebih dari 0." << std::endl;
        return 1;
    }

    // Meminta pengguna memasukkan jumlah bola yang akan dipilih
    std::cout << "Masukkan jumlah bola yang akan dipilih: ";
    std::cin >> jumlahDipilih;

    // Memeriksa apakah input jumlahDipilih valid
    if (jumlahDipilih <= 0 || jumlahDipilih > totalBola) {
        std::cout << "Input jumlah bola yang dipilih tidak valid." << std::endl;
        return 1;
    }

    // Menghitung peluang menang
    int jumlahKombinasi = kombinasi(totalBola, jumlahDipilih);

    // Menghitung peluang menang sebagai pecahan
    double peluang = 1.0 / jumlahKombinasi;

    // Menampilkan hasil kepada pengguna
    std::cout << "Peluang menang: 1 / " << jumlahKombinasi << " atau sekitar " << peluang * 100 << "%" << std::endl;

    return 0;
}
