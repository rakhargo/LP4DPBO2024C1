# /*Saya Rakha Dhifiargo Hariadi
#  NIM 2209489 mengerjakan soal 
#  Latihan praktikum 4 dalam mata
#  kuliah DPBO
#  untuk keberkahanNya maka saya tidak
#  melakukan kecurangan seperti 
#  yang telah dispesifikasikan. Aamiin.*/ 
from Vehicle import Vehicle
 
class Motorcycle(Vehicle):  # class Motorcycle inherits from Vehicle

    __jenisMotor = ""
    __kapasitasTangki = ""

    def __init__(self, platNomor="", merk="", tahunProduksi="", warna="", jenisMotor="", kapasitasTangki=""):  # constructor with parameters
        super().__init__(platNomor, merk, tahunProduksi, warna)
        self.__jenisMotor = jenisMotor
        self.__kapasitasTangki = kapasitasTangki

    # setter and getter for each attribute
    def setJenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor

    def setKapasitasTangki(self, kapasitasTangki):
        self.__kapasitasTangki = kapasitasTangki

    def getJenisMotor(self):
        return self.__jenisMotor

    def getKapasitasTangki(self):
        return self.__kapasitasTangki
    
    # print semua atribut yang dimiliki class motorcycle
    def printAll(self):
        self.printVehicle()
        print(f"Jenis Motor    : {self.__jenisMotor}")
        print(f"Tangki         : {self.__kapasitasTangki}")