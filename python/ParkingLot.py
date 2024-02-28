# /*Saya Rakha Dhifiargo Hariadi
#  NIM 2209489 mengerjakan soal 
#  Latihan praktikum 4 dalam mata
#  kuliah DPBO
#  untuk keberkahanNya maka saya tidak
#  melakukan kecurangan seperti 
#  yang telah dispesifikasikan. Aamiin.*/ 
from Vehicle import Vehicle 
 
class ParkingLot:
    
    __namaParkingLot = "" # atribut untuk parking lot
    __luasParkingLot = ""
    __kapasitas = 0
    __jumlahKendaraanNow = 0
    __daftarKendaraan = []

    # constructor with parameters
    def __init__(self, namaParkingLot="", luasParkingLot=0, kapasitas=0, jumlahKendaraanNow=0, daftarKendaraan=[]):
        self.__namaParkingLot = namaParkingLot
        self.__luasParkingLot = luasParkingLot
        self.__kapasitas = kapasitas
        self.__jumlahKendaraanNow = jumlahKendaraanNow
        self.__daftarKendaraan = daftarKendaraan

    # setter
    def setNamaParkingLot(self, namaParkingLot):
        self.__namaParkingLot = namaParkingLot

    def setLuasParkingLot(self, luasParkingLot):
        self.__luasParkingLot = luasParkingLot

    def setKapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def setJumlahKendaraanNow(self, jumlahKendaraanNow):
        self.__jumlahKendaraanNow = jumlahKendaraanNow

    def setDaftarKendaraan(self, daftarKendaraan):
        self.__daftarKendaraan = daftarKendaraan

    # getter
    def getNamaParkingLot(self):
        return self.__namaParkingLot

    def getLuasParkingLot(self):
        return self.__luasParkingLot

    def getKapasitas(self):
        return self.__kapasitas

    def getJumlahKendaraanNow(self):
        return self.__jumlahKendaraanNow

    def getDaftarKendaraan(self):
        return self.__daftarKendaraan
    
    # method untuk menambah satu kendaraan ke array
    def addKendaraan(self, kendaraan):
        self.__daftarKendaraan.append(kendaraan)
        self.__jumlahKendaraanNow = self.__jumlahKendaraanNow + 1
    