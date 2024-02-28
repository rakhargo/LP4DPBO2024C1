# /*Saya Rakha Dhifiargo Hariadi
#  NIM 2209489 mengerjakan soal 
#  Latihan praktikum 4 dalam mata
#  kuliah DPBO
#  untuk keberkahanNya maka saya tidak
#  melakukan kecurangan seperti 
#  yang telah dispesifikasikan. Aamiin.*/ 

class Vehicle:  # class Vehicle

    __platNomor = ""  # attribute
    __merk = ""
    __tahunProduksi = ""
    __warna = ""

    def __init__(self, platNomor="", merk="", tahunProduksi="", warna=""):  # constructor with parameters
        self.__platNomor = platNomor
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna

    # setter and getter for each attribute
    def setPlatNomor(self, platNomor):
        self.__platNomor = platNomor

    def setMerk(self, merk):
        self.__merk = merk

    def setTahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi

    def setWarna(self, warna):
        self.__warna = warna

    def getPlatNomor(self):
        return self.__platNomor

    def getMerk(self):
        return self.__merk

    def getTahunProduksi(self):
        return self.__tahunProduksi

    def getWarna(self):
        return self.__warna
    
    # print semua atribut yang dimiliki class vehicle
    def printVehicle(self):
        print(f"Plat Nomor     : {self.__platNomor}")
        print(f"Merk           : {self.__merk}")
        print(f"Tahun Produksi : {self.__tahunProduksi}")
        print(f"Warna          : {self.__warna}")