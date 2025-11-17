#include <iostream>
#include <string>
using namespace std;

//======================================================
// PrioritizMe
// Program ini membantu kamu menetukan urutan prioritas.
// Empat kriteria utama:
// 1. Deadline
// 2. Tingkat kesulitan
// 3. Tingkat kepentingan
// 4. Dampak terhadap nilai atau prestasi
// Program menghitung skor sederhana dari semua kriteria.
// ======================================================

// Fungsi untuk menghitung skor prioritas
int hitungSkor (int deadline, int kesulitan, int kepentingan, int dampak){
    return (6-deadline) + kesulitan + kepentingan + dampak;
}
// Fungsi input tugas
void inputTugas(string namaTugas[], int deadline[], int kesulitan[], int kepentingan[], int dampak[], int skor[], int jumlahTugas){
    for (int i = 0; i < jumlahTugas; i++){
        cout << "\nMasukan nama tugas ke-" << i+1 << ":  ";
        getline(cin, namaTugas[i]) ;

        cout << "Masukkan deadline (1-5, 1 = paling dekat): ";
        cin >> deadline[i];

    }
}
