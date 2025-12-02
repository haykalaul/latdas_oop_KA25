# Perancangan dan Implementasi Sistem Inventaris Sederhana Menggunakan Konsep OOP C++
1. Deskripsi Umum

Praktikum ini menempatkan mahasiswa dalam situasi pemecahan persoalan nyata. Setiap kelompok terdiri dari 5 mahasiswa dan diminta membangun modul program inventaris sederhana menggunakan C++ dengan menerapkan konsep class, object, constructor, encapsulation, dan method.
Seluruh proses kolaborasi, kontrol versi, dan pengumpulan hasil wajib dilakukan melalui GitHub.

2. Kasus Persoalan

Sebuah laboratorium sekolah memiliki berbagai alat praktikum seperti mikroskop, tabung reaksi, dan multimeter. Saat ini pencatatan alat masih dilakukan secara manual sehingga sering terjadi:

- Data alat duplikat atau tidak konsisten

- Kesulitan memeriksa stock alat tersedia

- Tidak ada sistem untuk menambahkan alat baru secara efisien

### Laboratorium meminta kelompok Anda membangun modul C++ untuk mengelola daftar alat dengan fitur:

- Membuat class AlatLaboratorium

- Menyimpan atribut dasar:

- nama

- kategori

- jumlah

- Menyediakan method:

- tampilkanInfo()

- tambahJumlah(int n)

- kurangiJumlah(int n)

3. Pembagian Peran (5 Orang)
Anggota	Peran	Tanggung Jawab
- Lead Programmer =>	Merancang struktur class dan membuat file header .hpp
- Implementer=>	Mengembangkan implementasi method di file .cpp
- Integrator	=>Mengelola list objek dan menu program di main.cpp
- Tester	=> Mengembangkan test case dasar & melakukan debugging
- Dokumentator=>	Menulis dokumentasi README & membuat diagram sederhana (class diagram)

4. Aktivitas Praktikum (Step-by-step)
### Tahap 1 — Persiapan GitHub

Salah satu anggota (Leader) membuat repository GitHub bernama:
praktikum-oop-kelompokX

Menambahkan empat anggota lainnya sebagai collaborator

Membuat struktur folder:

/src
  |- AlatLaboratorium.hpp
  |- AlatLaboratorium.cpp
  |- main.cpp
/docs
  |- class_diagram.png
README.md

### Tahap 2 — Analisis & Perancangan

Seluruh kelompok mendiskusikan:

atribut pada class

method yang diperlukan

flow program (input → pengolahan → output)

Dokumentator membuat class diagram dan menyimpannya di folder /docs.

### Tahap 3 — Implementasi

Setiap anggota bekerja sesuai perannya:

A membuat deklarasi class di AlatLaboratorium.hpp

B mengisi implementasi method di AlatLaboratorium.cpp

C mengembangkan main.cpp untuk:

membuat beberapa object

menambah/mengurangi jumlah

menampilkan daftar alat

Semua kode di-push ke branch masing-masing, lalu dibuat pull request

Integrator bertanggung jawab melakukan merge setelah review

### Tahap 4 — Pengujian

D membuat test case berbasis skenario penggunaan:

tambah alat

update jumlah

tampilkan info

Melaporkan bug melalui GitHub Issues

Fix dilakukan melalui PR baru

### Tahap 5 — Dokumentasi & Pengumpulan

E menyusun README.md berisi:

Deskripsi program

Cara menjalankan

Struktur folder

Penjelasan class dan method

Screenshot output program

Kelompok melakukan GitHub Release sebagai versi final

Link repository dikumpulkan ke sistem LMS/dosen

5. Kriteria Penilaian
Aspek	Bobot
Kebenaran implementasi OOP	35%
Struktur kode & modularitas	20%
Kolaborasi GitHub (commit history, PR, review)	20%
Pengujian	10%
Dokumentasi & presentasi	15%
Mengelola koleksi beberapa objek alat menggunakan vector

Menampilkan daftar seluruh alat yang tersedia
