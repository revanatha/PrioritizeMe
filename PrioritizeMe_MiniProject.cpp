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

        cout << "Masukkan tingkat kesulitan (1-5): ";
        cin >> kesulitan[i];                                                

        cout << "Masukkan tingkat kepentingan (1-5): ";
        cin >> kepentingan[i];                                              

        cout << "Masukkan pengaruh terhadap nilai/prestasi (1-5): ";        
        cin >> dampak[i];

        cin.ignore();    //digunakan untuk menghapus newline sebelum input nama berikutnya                                            

        skor[i] = hitungSkor(deadline[i], kesulitan[i], kepentingan[i], dampak[i]);
    }
}

//Fungsi untuk mengurutkan urutan prioritas (menghasilkan indeks urutan)
void urutkanPrioritas(int skor[], int jumlahTugas, int urutan[]) {
    //isi urut awal = 0,1,2,...
for (int i=0; i<jumlahTugas; i++) {
    urutan[i] = i;
}
// bubble sort indexs berdasarkan skor
    for(int i = 0; i < jumlahTugas - 1; i++){
        for(int j = 0; j < jumlahTugas - i - 1; j++){
           if(skor[urutan[j]] < skor[urutan[j+1]]){       // membandingkan skor berdasarkan index urutan
             int wadah   = urutan[j];                     // memindahkan urutan[j] ke wadah sementara
             urutan[j]   = urutan[j+1];                   // memindahkan urutan[j+1] ke urutan[j]
             urutan[j+1] = wadah;                         // memindahkan isi dari wadah sementara ke urutan[j+1]
           }
       }
    }
}
int main() {
int jumlah Tugas;
cout << "Masukkan jumlah tugas: ";
cin >> jumlahTugas;                                       // menginputkan jumlah tugas
cin.ignore();                                            // bersihkan newline setelah angka

string namaTugas [jumlahTugas];
int deadline[jumlahTugas], kesulitan [jumlahTugas], kepentingan [jumlahTugas], dampak [jumlah Tugas], skor [jumlah Tugas];
int urutan[jumlahTugas];                               // array indeks urut prioritas

input Tugas (namaTugas, deadline, kesulitan, kepentingan, dampak, skor, jumlah Tugas);            //memanggil fungsi input Tugas

urutkanPrioritas (skor, jumlahTugas, urutan);                                                     //memanggil fungsi urutkanPrioritas

tampilkanTugas (namaTugas, deadline, kesulitan, kepentingan, dampak, skor, jumlahTugas, urutan);   //memanggil fungsi tampilkanTugas

return 0;
}


