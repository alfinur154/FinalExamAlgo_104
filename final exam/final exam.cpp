#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 40;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;


void tambahMahasiswa() {
    if (jumlahMahasiswa < MAX_MAHASISWA) {
        cout << "========== TAMBAH MAHASISWA ==========" << endl;
        cout << "NIM : ";
        cin >> NIM[jumlahMahasiswa];
        cin.ignore();
        cout << "Nama : ";
        getline(cin, nama[jumlahMahasiswa]);
        cout << "Tahun Masuk: ";
        cin >> tahunMasuk[jumlahMahasiswa];
        cin.ignore();
        jumlahMahasiswa++;

        cout << "Mahasiswa berhasil ditambahkan!" << endl;
    }
    else {
        cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
    }
};
bool empty() {
    return (top == -1);
}
void tampilkanSemuaMahasiswa() {
    if (empty()) {
        cout << "\nStack is empty." << endl;
    }
    else {
        for (int tmp = 0; top <= top; tmp++) {
            cout << stack_array[tmp] << endl;
        }
    }
    
};
//isi disini
void algorithmacariMahasiswaByNIM() {
    cout << "Masukkan NIM yang mau dicari ";
    cin >> NIM[jumlahMahasiswa];
    return;
};
//isi disini
void algorithmaSortByTahunMasuk() {
    
};
int main() {
    int pilihan;
    do {
        cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
        cout << "1. Tambah Mahasiswa" << endl;
        cout << "2. Tampilkan Semua Mahasiswa" << endl;
        cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
        cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;
        cin.ignore();

        char ch;
        cin >> ch;
        cout << endl;

        switch (pilihan) {
        case 1:
            //isi disini
            break;
        case 2:
            //isi disini
            break;
        case 3:
            //isi disini
            break;
        case 4:
            //isi disini
            break;
        case 5:
            cout << "Terima kasih! Program selesai." << endl;
            break;
        default:
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
        cout << endl;
    } while (pilihan != 5);
    return 0;
}




//2.  stack
//3.Stack Menyimpan data seperti menumpuk buku disebuah dus, dan caranya di algoritma disebut -> last in first out. / (LIFO) Dan ada 2 operasi ialah:  push dan pop QUEUE adalah first in first out (FIFO) Kok yang pertama di masukkan dan yang masuk terakhir keluar dan urutan  dari yang pertama dan terakhir . 
//4. pada saat data masih belum di panggil dan setelah di panggil data nya data masuk kepada kolom stak/tabel maka d urutkan pada pas operasinya dengan pengoprasian LIFO
//5. a. 4 
//   b. in benar, Preorder 
     