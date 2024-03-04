#pragma once
#include <bits/stdc++.h>
#include "Vehicle.cpp" // include the Vehicle class file

using namespace std;

class ParkingLot {
private:
    string namaParkingLot;   // attribute for parking lot
    int luasParkingLot;
    int kapasitas;
    int jumlahKendaraanNow;
    vector<Vehicle*> daftarKendaraan;

public:

    // konstruktor korong
    ParkingLot()
    {

    }

    // constructor with parameters
    ParkingLot(string namaParkingLot = "", int luasParkingLot = 0, int kapasitas = 0, int jumlahKendaraanNow = 0, vector<Vehicle*> daftarKendaraan = {})
    {
        this->namaParkingLot = namaParkingLot;
        this->luasParkingLot = luasParkingLot;
        this->kapasitas = kapasitas;
        this->jumlahKendaraanNow = jumlahKendaraanNow;
        this->daftarKendaraan = daftarKendaraan;
    }

    // setter for each attribute
    void setNamaParkingLot(string namaParkingLot) 
    {
        this->namaParkingLot = namaParkingLot;
    }

    void setLuasParkingLot(int luasParkingLot) 
    {
        this->luasParkingLot = luasParkingLot;
    }

    void setKapasitas(int kapasitas) 
    {
        this->kapasitas = kapasitas;
    }

    void setJumlahKendaraanNow(int jumlahKendaraanNow) 
    {
        this->jumlahKendaraanNow = jumlahKendaraanNow;
    }

    void setDaftarKendaraan(vector<Vehicle*> daftarKendaraan) 
    {
        this->daftarKendaraan = daftarKendaraan;
    }

    // getter for each attribute
    string getNamaParkingLot() 
    {
        return this->namaParkingLot;
    }

    int getLuasParkingLot() 
    {
        return this->luasParkingLot;
    }

    int getKapasitas() 
    {
        return this->kapasitas;
    }

    int getJumlahKendaraanNow() 
    {
        return this->jumlahKendaraanNow;
    }

    vector<Vehicle*> getDaftarKendaraan() 
    {
        return this->daftarKendaraan;
    }

    // method to add a vehicle to the vector
    void addKendaraan(Vehicle* kendaraan) 
    {
        this->daftarKendaraan.push_back(kendaraan);
        this->jumlahKendaraanNow = this->jumlahKendaraanNow + 1;
    }

    ~ParkingLot() // destruktor
    {
        
    }
};