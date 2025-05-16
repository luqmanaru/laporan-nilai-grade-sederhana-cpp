# laporan-nilai-grade-sederhana-cpp
Program C++ untuk membuat laporan nilai mahasiswa secara interaktif lengkap dengan sistem penilaian (A-E).

---

Program interaktif berbasis terminal yang digunakan untuk menginput data mahasiswa dan menampilkan laporan nilai lengkap beserta grade (A-E). Cocok untuk belajar `struct`, `array`, `function`, dan penggunaan waktu (`ctime`) dalam C++.

---

## 🚀 Fitur

- Input data mahasiswa (NIM, Nama, Nilai)
- Hitung dan tampilkan *grade* berdasarkan skor
- Tampilkan laporan dengan tanggal otomatis
- Format tabel rapi dan interaktif
- Fitur perulangan input (coba ulang tanpa restart program)

---

## 📋 Struktur Grade

| Nilai      | Grade |
|------------|--------|
| > 85       | A      |
| 76 - 85    | B      |
| 66 - 75    | C      |
| 46 - 65    | D      |
| <= 45      | E      |

---

## 🖥️ Contoh Output

```
REPORT NILAI MAHASISWA PERTANGGAL 16-5-2025

Masukkan jumlah Mahasiswa yang ingin diinput : 2

Silahkan input 2 nilai Mahasiswa tersebut
Nilai Mahasiswa ke-1
Nim   : 23012345
Nama  : Budi
Nilai : 90

Nilai Mahasiswa ke-2
Nim   : 23012346
Nama  : Sari
Nilai : 70

==================================================
|    NIM    |      NAMA      |   NILAI  | GRADES |
==================================================
|    23012345    |     Budi      |    90    |    A   |
|    23012346    |     Sari      |    70    |    C   |
--------------------------------------------------
Mau melakukan input ulang?  [Y/T] :
```

---

**luqmanaru**
