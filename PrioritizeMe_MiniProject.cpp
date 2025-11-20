#include <iostream>
using namespace std;

//======================================================
// PrioritizMe
// Program ini membantu kamu menetukan urutan prioritas.
// Empat kriteria utama:
// 1. Deadline.
// 2. Tingkat kesulitan.
// 3. Tingkat kepentingan.
// 4. Dampak terhadap nilai atau prestasi.
// Program menghitung skor sederhana dari semua kriteria.
// ======================================================

// Fungsi untuk menghitung skor prioritas
int hitungSkor (int deadline, int kesulitan, int kepentingan, int dampak){
    return (6-deadline) + kesulitan + kepentingan + dampak;    //Deadline kecil jadi skor besar + faktor lain (kesulitan, kepentiungan, dampak)
}
// Fungsi input tugas
void inputTugas(string namaTugas[], int deadline[], int kesulitan[], int kepentingan[], int dampak[], int skor[], int jumlahTugas){
    for (int i = 0; i < jumlahTugas; i++){                        //Loop untuk input setiap tugas
        cout << "\nMasukan nama tugas ke-" << i+1 << ":  ";       //Input nama tugas
        getline(cin, namaTugas[i]) ;                              //getline agar bisa input spasi dalam nama, bisa input lebih dari 1 kata

        cout << "Masukkan deadline (1-5, 1 = paling dekat): ";
        cin >> deadline[i];    //Input deadline, skala 1-5, 1 paling penting (prioritas)
        
        cout << "Masukkan tingkat kesulitan (1-5): ";
        cin >> kesulitan[i];                                      //Input kesulitan dengan skala 1-5, 1 paling mudah          

        cout << "Masukkan tingkat kepentingan (1-5): ";
        cin >> kepentingan[i];                                     //Input kepentingan tugas, skala 1-5, 5 paling penting          

        cout << "Masukkan dampak terhadap nilai/prestasi (1-5): ";        
        cin >> dampak[i];                                          //Input dampak tugas, skala 1-5, 1 dampak paling kecil

        cin.ignore();                                              //digunakan untuk menghapus newline sebelum input nama berikutnya                                            

        skor[i] = hitungSkor(deadline[i], kesulitan[i], kepentingan[i], dampak[i]);    //memanggil fungsi untuk menghitung skor prioritas
    }
}

// Fungsi menampilkan tugas
void tampilkanTugas(string namaTugas[], int deadline[], int kesulitan[], int kepentingan[], int dampak[], int skor[], int jumlahTugas, int urutan[]) {
    cout << "\n=== DAFTAR TUGAS ===\n";
    for (int i = 0; i < jumlahTugas; i++) {                                   //Loop menampilkan tugas satu persatu
        int index = urutan [i];                                               //Urutan[i] berisi indeks tugas diurutkan
        cout << "\nTugas ke-" << i+1 << endl;
        cout << "Nama          : " << namaTugas[index] << endl;               //Menampilkan nama tugas
        cout << "Deadline      : " << deadline[index] << endl;                //Menampilkan skala deadline tugas
        cout << "Kesulitan     : " << kesulitan[index] << endl;               //Menampilkan skala kesulitan tugas
        cout << "Kepentigan    : " << kepentingan[index] << endl;             //Menampilkan skala kepentingan tugas
        cout << "Pengaruh      : " << dampak[index] << endl;                  //Menampilkan skala dampak tugas
        cout << "Skor prioritas: " << skor[index] << endl;                    //Menampilkan skor prioritas
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





