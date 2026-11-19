stok = 0
masuk = 0
keluar = 0

kode = ""
nama = ""


def menu():
    global stok, masuk, keluar, kode, nama

    print("\n===== MENU =====")
    print("1. Barang Masuk")
    print("2. Barang Keluar")
    print("3. Lihat Stok")
    print("4. Bagi Barang ke Rak")
    print("5. Keluar")

    pilih = int(input("Pilih : "))

    if pilih == 1:
        print("\nBarang Masuk")

        kode = input("Kode : ")
        nama = input("Nama : ")
        jumlah = int(input("Jumlah : "))

        if jumlah > 0:
            masuk += jumlah
            stok += jumlah

            print("Barang berhasil masuk")
            print(f"Stok : {stok}")
        else:
            print("Jumlah salah")

        input("Tekan ENTER untuk kembali...")
        menu()

    elif pilih == 2:
        print("\nBarang Keluar")

        kode = input("Kode : ")
        nama = input("Nama : ")
        jumlah = int(input("Jumlah : "))

        if jumlah <= stok:
            if jumlah > 0:
                keluar += jumlah
                stok -= jumlah

                print("Barang berhasil keluar")
                print(f"Stok : {stok}")
            else:
                print("Jumlah salah")
        else:
            print("Stok tidak cukup")

        input("Tekan ENTER untuk kembali...")
        menu()

    elif pilih == 3:
        print("\nStok Barang")

        if stok > 0:
            print(f"Kode : {kode}")
            print(f"Nama : {nama}")
            print(f"Masuk : {masuk}")
            print(f"Keluar : {keluar}")
            print(f"Stok : {stok}")
        else:
            print("Belum ada stok")

        input("Tekan ENTER untuk kembali...")
        menu()

    elif pilih == 4:
        print("\nPembagian Barang")

        if stok > 0:
            rak = int(input("Jumlah rak : "))

            if rak > 0:
                print(f"Per rak : {stok // rak}")
                print(f"Sisa : {stok % rak}")
            else:
                print("Rak tidak boleh 0")
        else:
            print("Belum ada stok")

        input("Tekan ENTER untuk kembali...")
        menu()

    elif pilih == 5:
        print("\nProgram selesai")

    else:
        print("\nPilihan tidak ada")
        input("Tekan ENTER untuk kembali...")
        menu()


def main():
    print("===== INVENTARIS GUDANG =====")

    username = input("Username : ")
    password = input("Password : ")

    if username == "Rifqi":
        if password == "12345":
            print("\nLogin berhasil")
            menu()
        else:
            print("\nPassword salah")
    else:
        print("\nUsername salah")


if __name__ == "__main__":
    main()
