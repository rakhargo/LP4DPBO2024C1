# /*Saya Rakha Dhifiargo Hariadi
#  NIM 2209489 mengerjakan soal 
#  Latihan praktikum 4 dalam mata
#  kuliah DPBO
#  untuk keberkahanNya maka saya tidak
#  melakukan kecurangan seperti 
#  yang telah dispesifikasikan. Aamiin.*/ 
from Vehicle import Vehicle # import class yang dibutuhkan
from Car import Car
from Motorcycle import Motorcycle 
from ParkingLot import ParkingLot 

motorOld = Motorcycle("B 3315 KIC", "Mio", "2009", "Hijau", "Matic", 4000) # untuk objek vehicle yaitu motor sebelum instansiasi parking lot
listKendaraan = [] # membuat array
listKendaraan.append(motorOld) # memasukkan data motor tadi ke array
parkiran = ParkingLot("Artristik", 10, 5, len(listKendaraan), listKendaraan) # instansiasi menggunakan list kendaraan yang sudah terisi
mobil1 = Car("B 483 DIK", "Kijang Innova", "2005", "Hitam", 7, 4) # instansiasi objek vehicle yaitu mobil
motor1 = Motorcycle("B 3637 KXS", "Beat Pop", "2015", "Putih", "Matic", 3000)  # instansiasi objek vehicle yaitu motor
parkiran.addKendaraan(mobil1) # memasukkan data motor dan mobil
parkiran.addKendaraan(motor1)

# print seluruhnya
print(f"Nama Parkiran      : {parkiran.getNamaParkingLot()}")
print(f"Luas Parkiran      : {parkiran.getLuasParkingLot()} m^2")
print(f"Kapasitas Parkiran : {parkiran.getLuasParkingLot()} Kendaraan")
print(f"Jumlah Kendaraan   : {parkiran.getJumlahKendaraanNow()} Kendaraan sekarang\n")
print(f"Berikut daftar dari kendaraan yang ada")
for vehicle in parkiran.getDaftarKendaraan(): # print daftar kendaraan
    vehicle.printAll()
    print()