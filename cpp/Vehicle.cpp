/*Saya Rakha Dhifiargo Hariadi
 NIM 2209489 mengerjakan soal 
 Latihan praktikum 4 dalam mata
 kuliah DPBO
 untuk keberkahanNya maka saya tidak
 melakukan kecurangan seperti 
 yang telah dispesifikasikan. Aamiin.*/ 
#pragma once
#include <bits/stdc++.h>

using namespace std;

class Vehicle 
{

private:
    string platNomor;   // attribute
    string merk;
    string tahunProduksi;
    string warna;

public:
    // konstruktor kosong
    Vehicle()
    {

    }

    // constructor with parameters
    Vehicle(string platNomor = "", string merk = "", string tahunProduksi = "", string warna = "") 
    {
        this->platNomor = platNomor;
        this->merk = merk;
        this->tahunProduksi = tahunProduksi;
        this->warna = warna;
    }

    // setter for each attribute
    void setPlatNomor(string platNomor) 
    {
        this->platNomor = platNomor;
    }

    void setMerk(string merk) 
    {
        this->merk = merk;
    }

    void setTahunProduksi(string tahunProduksi) 
    {
        this->tahunProduksi = tahunProduksi;
    }

    void setWarna(string warna) 
    {
        this->warna = warna;
    }

    // getter for each attribute
    string getPlatNomor() 
    {
        return this->platNomor;
    }

    string getMerk() 
    {
        return this->merk;
    }

    string getTahunProduksi() 
    {
        return this->tahunProduksi;
    }

    string getWarna() 
    {
        return this->warna;
    }

    // print all attributes of the Vehicle class
    // menggunakan polymorphism
    virtual void printDetails() const 
    {
        cout << "Plat Nomor     : " << this->platNomor << endl;
        cout << "Merk           : " << this->merk << endl;
        cout << "Tahun Produksi : " << this->tahunProduksi << endl;
        cout << "Warna          : " << this->warna << endl;
    }

    ~Vehicle()
    {

    }
};