#include <iostream>
using namespace std;

string kegiatan(string tugas) {
    string nama_tugas;
    int tanggal, kesulitan, kepentingan, dampak;
    string selesai;
    
    do {
        cin >> nama_tugas;
        cout << "Apakah sudah semua? "<< endl;
        
        cin >> selesai;
    }  while (selesai == "belum");


    return nama_tugas;
}

int main() {
    string judul;
    cout << "Masukkan Judul Tugas : ";
    cin >> judul;

    cout << "Daftar Tugas : " << endl;
    cout << kegiatan(judul) << endl;


    return 0;
}