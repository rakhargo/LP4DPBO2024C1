# /*Saya Rakha Dhifiargo Hariadi
#  NIM 2209489 mengerjakan soal 
#  Latihan praktikum 4 dalam mata
#  kuliah DPBO
#  untuk keberkahanNya maka saya tidak
#  melakukan kecurangan seperti 
#  yang telah dispesifikasikan. Aamiin.*/ 
from Vehicle import Vehicle

class Car(Vehicle):  # class Car inherits from Vehicle

    __jumlahKursi = 0
    __jumlahPintu = 0 

    def __init__(self, platNomor="", merk="", tahunProduksi="", warna="", jumlahKursi=0, jumlahPintu=0):  # constructor with parameters
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jumlahKursi = jumlahKursi
        self.__jumlahPintu = jumlahPintu

    # setter and getter for each attribute
    def setJumlahKursi(self, jumlahKursi):
        self.__jumlahKursi = jumlahKursi

    def setJumlahPintu(self, jumlahPintu):
        self.__jumlahPintu = jumlahPintu

    def getJumlahKursi(self):
        return self.__jumlahKursi

    def getJumlahPintu(self):
        return self.__jumlahPintu
    
    # print semua atribut yang dimiliki class car
    def printAll(self):
        self.printVehicle()
        print(f"Jumlah Kursi   : {self.__jumlahKursi}")
        print(f"Jumlah Pintu   : {self.__jumlahPintu}")