#include <iostream>
#include <ctime>
#include <string>

using namespace std;

// Struktur Mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    int nilai;
};

// Fungsi untuk menentukan grade
char getGrade(int nilai) {
    if (nilai > 85) return 'A';
    else if (nilai > 75) return 'B';
    else if (nilai > 65) return 'C';
    else if (nilai > 45) return 'D';
    else return 'E';
}

int main() {
    int jumlah;
    char ulang;

    do {
        // Menampilkan tanggal hari ini
        time_t t = time(0);
        tm* now = localtime(&t);
        cout << "REPORT NILAI MAHASISWA PERTANGGAL "
             << now->tm_mday << '-' << (now->tm_mon + 1) << '-' << (now->tm_year + 1900) << endl;

        cout << "\nMasukkan jumlah Mahasiswa yang ingin diinput: ";
        cin >> jumlah;
        cin.ignore();

        Mahasiswa mahasiswa[jumlah];

        cout << "\nSilahkan input " << jumlah << " data mahasiswa:\n";
        for (int i = 0; i < jumlah; i++) {
            cout << "\nMahasiswa ke-" << i + 1 << ":\n";
            cout << "NIM   : "; getline(cin, mahasiswa[i].nim);
            cout << "Nama  : "; getline(cin, mahasiswa[i].nama);
            cout << "Nilai : "; cin >> mahasiswa[i].nilai;
            cin.ignore();
        }

        // Menampilkan tabel
        cout << "\n==================================================\n";
        cout << "|    NIM    |      NAMA      |   NILAI  | GRADES |\n";
        cout << "==================================================\n";

        for (int i = 0; i < jumlah; i++) {
            cout << "| " << mahasiswa[i].nim
                 << " | " << mahasiswa[i].nama
                 << " |    " << mahasiswa[i].nilai
                 << "    |   " << getGrade(mahasiswa[i].nilai) << "    |" << endl;
        }

        cout << "--------------------------------------------------\n";
        cout << "Mau melakukan input ulang? [Y/T]: ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
