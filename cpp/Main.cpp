/*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 4 dalam mata
 kuliah DPBO
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ 
#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "ParkingLot.cpp" // include class yang dipakai

using namespace std;

int main()
{
    Motorcycle motorOld("B 3315 KIC", "Mio", "2009", "Hijau", "Matic", 4000); // for motorcycle vehicle object before instantiating parking lot
    vector<Vehicle*> listKendaraan; // creating vector
    listKendaraan.push_back(&motorOld); // inserting motor object into vector
    ParkingLot parkiran("Artristik", 20, 5, listKendaraan.size(), listKendaraan); // instantiating parking lot with the vector
    Car mobil1("B 483 DIK", "Kijang Innova", "2005", "Hitam", 7, 4); // instantiating car vehicle object
    Motorcycle motor1("B 3637 KXS", "Beat Pop", "2015", "Putih", "Matic", 3000); // instantiating motorcycle vehicle object
    parkiran.addKendaraan(&mobil1); // inserting motor and car objects
    parkiran.addKendaraan(&motor1);

    cout << "Nama Parkiran      : " << parkiran.getNamaParkingLot() << endl;
    cout << "Luas Parkiran      : " << parkiran.getLuasParkingLot() << " m^2" << endl;
    cout << "Kapasitas Parkiran : " << parkiran.getKapasitas() << " Kendaraan" << endl;
    cout << "Jumlah Kendaraan   : " << parkiran.getJumlahKendaraanNow() << " Kendaraan sekarang" << endl << endl;
    cout << "Berikut daftar dari kendaraan yang ada:" << endl;
    
    for (auto kendaraan : parkiran.getDaftarKendaraan()) // print hasil akhir
    {
        Vehicle* v = dynamic_cast<Vehicle*>(kendaraan);
        v->printDetails();
        cout << endl;
    }
    
    return 0;
}