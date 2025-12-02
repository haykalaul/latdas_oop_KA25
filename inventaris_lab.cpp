#include <iostream>
#include <vector>
#include <string>
using namespace std;

class AlatLaboratorium {
private:
    string nama;
    string kategori;
    int jumlah;

public:
    // Constructor
    AlatLaboratorium(string n, string k, int j) 
        : nama(n), kategori(k), jumlah(j) {}

    // Method untuk menambah jumlah
    void tambahJumlah(int n) {
        jumlah += n;
    }

    // Method untuk mengurangi jumlah
    void kurangiJumlah(int n) {
        if (n > jumlah) {
            cout << "Jumlah tidak mencukupi untuk dikurangi.\n";
            return;
        }
        jumlah -= n;
    }

    // Method menampilkan info alat
    void tampilkanInfo() const {
        cout << "Nama     : " << nama << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "Jumlah   : " << jumlah << endl;
        cout << "-----------------------------\n";
    }

    // Getter jumlah untuk validasi
    int getJumlah() const {
        return jumlah;
    }
};

// Fungsi untuk menampilkan seluruh alat
void tampilkanDaftar(const vector<AlatLaboratorium>& daftar) {
    if (daftar.empty()) {
        cout << "Belum ada data alat.\n\n";
        return;
    }

    cout << "\n=== Daftar Alat Laboratorium ===\n";
    for (const auto& alat : daftar) {
        alat.tampilkanInfo();
    }
}

// Fungsi menambah alat baru
void tambahAlat(vector<AlatLaboratorium>& daftar) {
    string nama, kategori;
    int jumlah;

    cin.ignore();
    cout << "Masukkan nama alat     : ";
    getline(cin, nama);
    cout << "Masukkan kategori alat : ";
    getline(cin, kategori);
    cout << "Masukkan jumlah awal   : ";
    cin >> jumlah;

    daftar.emplace_back(nama, kategori, jumlah);
    cout << "Alat berhasil ditambahkan!\n\n";
}

// Fungsi update jumlah
void updateJumlah(vector<AlatLaboratorium>& daftar) {
    if (daftar.empty()) {
        cout << "Data alat kosong.\n\n";
        return;
    }

    int index, pilihan, n;
    tampilkanDaftar(daftar);

    cout << "Pilih nomor alat (mulai dari 0): ";
    cin >> index;

    if (index < 0 || index >= daftar.size()) {
        cout << "Pilihan tidak valid.\n\n";
        return;
    }

    cout << "1. Tambah jumlah\n";
    cout << "2. Kurangi jumlah\n";
    cout << "Pilihan: ";
    cin >> pilihan;

    cout << "Masukkan jumlah: ";
    cin >> n;

    if (pilihan == 1) {
        daftar[index].tambahJumlah(n);
        cout << "Jumlah berhasil ditambah.\n\n";
    } else if (pilihan == 2) {
        daftar[index].kurangiJumlah(n);
        cout << "Jumlah berhasil dikurangi.\n\n";
    } else {
        cout << "Pilihan tidak valid.\n\n";
    }
}

int main() {
    vector<AlatLaboratorium> inventaris;
    int pilihan;

    while (true) {
        cout << "=== Sistem Inventaris Laboratorium ===\n";
        cout << "1. Tambah Alat\n";
        cout << "2. Tampilkan Daftar Alat\n";
        cout << "3. Update Jumlah Alat\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            tambahAlat(inventaris);
            break;
        case 2:
            tampilkanDaftar(inventaris);
            break;
        case 3:
            updateJumlah(inventaris);
            break;
        case 4:
            cout << "Terima kasih!\n";
            return 0;
        default:
            cout << "Pilihan tidak valid.\n\n";
        }
    }

    return 0;
}
