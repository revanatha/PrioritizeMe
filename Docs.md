# Dokumentasi Teknis

## Deskripsi Aplikasi
PrioritizeMe adalah aplikasi konsol yang membantu kamu menentukan urutan prioritas tugas. Pengguna memasukkan tugas beserta empat nilai penilaian. Aplikasi menghitung skor dan menampilkan hasil urutan yang lebih terarah.

Struktur Data
Task[] (Struct)

ID tugas (int)
Judul tugas (String)
Deadline tugas (int)
Tingkat kesulitan (int)
Tingkat kepentingan (int)
Dampak terhadap nilai atau prestasi (int)
Skor prioritas (int)

### 1.Deadline tugas
Nilai yang menunjukkan seberapa dekat batas waktu. Nilai kecil berarti deadline sudah dekat.
konsep kerjanya :
• Kamu memberi angka 1 sampai 5.
• Angka kecil berarti waktu semakin dekat.
• Program membalik nilai ini menjadi skor yang lebih tinggi.
• Tugas dengan deadline dekat naik ke posisi atas karena skor deadline menambah skor akhir.

### 2.Tingkat kesulitan
Nilai yang menunjukkan seberapa sulit tugas diselesaikan.
konsep kerja :
• Kamu memberi nilai 1 sampai 5.
• Nilai besar berarti tugas lebih sulit.
• Program menambahkan nilai ini ke skor akhir.
• Tugas yang sulit mendapat perhatian lebih karena butuh tenaga dan waktu lebih banyak.

### 3.Tingkat kepentingan
Nilai yang menunjukkan apakah tugas itu penting untuk diselesaikan.
konsep kerja :
• Kamu memberi nilai 1 sampai 5.
• Nilai besar berarti tugas penting.
• Nilai kepentingan ikut menambah skor akhir.
• Tugas penting otomatis naik prioritas saat program mengurutkannya.

### 4.Dampak terhadap nilai atau prestasi
Nilai yang menunjukkan pengaruh tugas terhadap nilai akademik.
konsep kerja :
• Kamu memberi nilai 1 sampai 5.
• Nilai besar berarti tugas sangat berpengaruh ke performa akademik.
• Program menambahkan nilai ini pada skor akhir.
• Tugas yang berdampak besar akan berada di urutan atas setelah proses pengurutan.

### Konsep perhitungan skor
• Program menjumlahkan semua nilai kriteria.
• Untuk deadline, program memakai rumus sederhana. Semakin dekat deadline. Semakin tinggi skor.
• Skor akhir menjadi dasar urutan prioritas.
• Program mengurutkan array berdasarkan skor tertinggi
• Hasilnya. Kamu melihat daftar tugas mulai dari yang paling penting sampai yang paling rendah.
