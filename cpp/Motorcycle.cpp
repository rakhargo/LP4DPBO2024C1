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

class Motorcycle : public Vehicle 
{
private:
    string jenisMotor;   // attribute
    int kapasitasTangki;

public:

    // Motorcycle()
    // {

    // }

    // constructor with parameters
    Motorcycle(string platNomor = "", string merk = "", string tahunProduksi = "", string warna = "", string jenisMotor = "", int kapasitasTangki = 0) : Vehicle(platNomor, merk, tahunProduksi, warna) 
    {
        this->jenisMotor = jenisMotor;
        this->kapasitasTangki = kapasitasTangki;
    }

    // setter for each attribute
    void setJenisMotor(string jenisMotor) 
    {
        this->jenisMotor = jenisMotor;
    }

    void setKapasitasTangki(int kapasitasTangki) 
    {
        this->kapasitasTangki = kapasitasTangki;
    }

    // getter for each attribute
    string getJenisMotor() 
    {
        return this->jenisMotor;
    }

    int getKapasitasTangki() 
    {
        return this->kapasitasTangki;
    }

    // print all attributes of the Motorcycle class
    // menggunakan polymorphism
    void printDetails() const override 
    {
        Vehicle::printDetails();
        cout << "Jenis Motor    : " << this->jenisMotor << endl;
        cout << "Tangki         : " << this->kapasitasTangki << endl;
    }

    ~Motorcycle()
    {

    }
};