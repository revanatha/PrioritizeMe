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

// Struktur untuk menyimpan data satu tugas 
struck Task {
    string judul;
    int deadline;          // Semakin kecil. semakin dekat deadline
    int kesulitan;         // Nilai 1 sampai 5
    int kepentingan;       // Nilai 1 sampai 5
    int dampakNilai;       // Nilai 1 sampai 5
    int skor;              // Skor prioritas yang dihitung 
};
// Fungsi untuk menghitung skor prioritas
int hitungSkor(Task t){
    // Semakin dekat deadline. Semakin tinggi prioritas.
    // Rumus sederhana: skor = (6 - deadline) + kesulitan + kepentingan + dampakNilai
    int skor = (6 - t.deadline) + t.kesulitan + t.kepentingan + t.dampakNilai;
    return skor;
}

