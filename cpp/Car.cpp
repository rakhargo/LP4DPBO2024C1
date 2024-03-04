/*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 4 dalam mata
 kuliah DPBO
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ 
#pragma once

#include <bits/stdc++.h>
#include "Vehicle.cpp" // include the Vehicle class file

using namespace std;

class Car : public Vehicle 
{
private:
    int jumlahKursi;   // attribute
    int jumlahPintu;

public:

    // Car()
    // {

    // }

    // constructor with parameters
    Car(string platNomor = "", string merk = "", string tahunProduksi = "", string warna = "", int jumlahKursi = 0, int jumlahPintu = 0) : Vehicle(platNomor, merk, tahunProduksi, warna) 
    {
        this->jumlahKursi = jumlahKursi;
        this->jumlahPintu = jumlahPintu;
    }

    // setter for each attribute
    void setJumlahKursi(int jumlahKursi) 
    {
        this->jumlahKursi = jumlahKursi;
    }

    void setJumlahPintu(int jumlahPintu) 
    {
        this->jumlahPintu = jumlahPintu;
    }

    // getter for each attribute
    int getJumlahKursi() 
    {
        return this->jumlahKursi;
    }

    int getJumlahPintu() 
    {
        return this->jumlahPintu;
    }

    // print all attributes of the Car class
    // menggunakan polymorphism
    void printDetails() const override 
    {
        Vehicle::printDetails();
        cout << "Jumlah Kursi   : " << this->jumlahKursi << endl;
        cout << "Jumlah Pintu   : " << this->jumlahPintu << endl;
    }

    ~Car()
    {

    }
};