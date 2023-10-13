#include <iostream>

// Fungsi untuk menghitung berapa kali Matahari mengelilingi Bumi dalam waktu tertentu
int hitungPutaranMatahari(int waktu) {
    int putaran = waktu / 365; // 1 tahun = 365 hari
    return putaran; 
}

int main() {
    int tahun = 1;
    int bulan = 1/12; // 1 bulan = 1/12 tahun
    int minggu = 1/52; // 1 minggu = 1/52 tahun
    int hari = 1/365; // 1 hari = 1/365 tahun

    // Menghitung berapa kali Matahari mengelilingi Bumi dalam waktu 1 tahun
    int putaranTahun = hitungPutaranMatahari(tahun);
    std::cout << "Matahari mengelilingi Bumi sebanyak " << putaranTahun << " kali dalam 1 tahun." << std::endl;

    // Menghitung berapa kali Matahari mengelilingi Bumi dalam waktu 1 bulan
    int putaranBulan = hitungPutaranMatahari(bulan);
    std::cout << "Matahari mengelilingi Bumi sebanyak " << putaranBulan << " kali dalam 1 bulan." << std::endl;

    // Menghitung berapa kali Matahari mengelilingi Bumi dalam waktu 1 minggu
    int putaranMinggu = hitungPutaranMatahari(minggu);
    std::cout << "Matahari mengelilingi Bumi sebanyak " << putaranMinggu << " kali dalam 1 minggu." << std::endl;

    // Menghitung berapa kali Matahari mengelilingi Bumi dalam waktu 1 hari
    int putaranHari = hitungPutaranMatahari(hari);
    std::cout << "Matahari mengelilingi Bumi sebanyak " << putaranHari << " kali dalam 1 hari." << std::endl;

    return 0;
}