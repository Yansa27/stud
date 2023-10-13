#include <iostream>

// Fungsi untuk mengembalikan jumlah hari dalam suatu bulan
int hitungJumlahHari(int bulan, int tahun) {
    // Menggunakan if untuk menentukan jumlah hari berdasarkan bulan dan tahun
    if (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12) {
        return 31; // Bulan dengan 31 hari
    } else if (bulan == 4 || bulan == 6 || bulan == 9 || bulan == 11) {
        return 30; // Bulan dengan 30 hari
    } else if (bulan == 2) {
        // Penanganan khusus untuk bulan Februari (bulan 2)
        // Jika tahun adalah tahun kabisat, Februari memiliki 29 hari; jika tidak, 28 hari.
        if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
            return 29; // Tahun kabisat
        } else {
            return 28; // Tidak tahun kabisat
        }
    } else {
        return -1; // Bulan tidak valid
    }
}

int main() {
    int bulan, tahun;

    std::cout << "Masukkan bulan (1-12): ";
    std::cin >> bulan;

    std::cout << "Masukkan tahun: ";
    std::cin >> tahun;

    // Memeriksa apakah bulan dan tahun yang dimasukkan valid
    if (bulan >= 1 && bulan <= 12 && tahun >= 0) {
        int jumlahHari = hitungJumlahHari(bulan, tahun);
        if (jumlahHari != -1) {
            std::cout << "Jumlah hari pada bulan " << bulan << " tahun " << tahun << " adalah " << jumlahHari << " hari." << std::endl;
        } else {
            std::cout << "Bulan tidak valid." << std::endl;
        }
    } else {
        std::cout << "Masukan bulan (1-12) dan tahun yang valid." << std::endl;
    }

    return 0;
}