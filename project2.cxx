#include <stdio.h>
#include <string.h>

int stok = 0;
int masuk = 0;
int keluar = 0;

char kode[20];
char nama[50];

void menu() {
    int pilih;
    int jumlah;
    int rak;

    printf("\n===== MENU =====\n");
    printf("1. Barang Masuk\n");
    printf("2. Barang Keluar\n");
    printf("3. Lihat Stok\n");
    printf("4. Bagi Barang ke Rak\n");
    printf("5. Keluar\n");

    printf("Pilih : ");
    scanf("%d", &pilih);

    if (pilih == 1) {
        printf("\nBarang Masuk\n");

        printf("Kode : ");
        scanf("%s", kode);

        printf("Nama : ");
        scanf("%s", nama);

        printf("Jumlah : ");
        scanf("%d", &jumlah);

        if (jumlah > 0) {
            masuk += jumlah;
            stok += jumlah;

            printf("Barang berhasil masuk\n");
            printf("Stok : %d\n", stok);
        } else {
            printf("Jumlah salah\n");
        }

        printf("Tekan ENTER untuk kembali...");
        getchar();
        getchar();
        menu();
    }

    else if (pilih == 2) {
        printf("\nBarang Keluar\n");

        printf("Kode : ");
        scanf("%s", kode);

        printf("Nama : ");
        scanf("%s", nama);

        printf("Jumlah : ");
        scanf("%d", &jumlah);

        if (jumlah <= stok) {
            if (jumlah > 0) {
                keluar += jumlah;
                stok -= jumlah;

                printf("Barang berhasil keluar\n");
                printf("Stok : %d\n", stok);
            } else {
                printf("Jumlah salah\n");
            }
        } else {
            printf("Stok tidak cukup\n");
        }
        printf("Tekan ENTER untuk kembali...");
        getchar();
        getchar();
        menu();
    }

    else if (pilih == 3) {
        printf("\nStok Barang\n");

        if (stok > 0) {
            printf("Kode : %s\n", kode);
            printf("Nama : %s\n", nama);
            printf("Masuk : %d\n", masuk);
            printf("Keluar : %d\n", keluar);
            printf("Stok : %d\n", stok);
        } else {
            printf("Belum ada stok\n");
        }
        printf("Tekan ENTER untuk kembali...");
        getchar();
        getchar();
        menu();
    }

    else if (pilih == 4) {
        printf("\nPembagian Barang\n");

        if (stok > 0) {
            printf("Jumlah rak : ");
            scanf("%d", &rak);

            if (rak > 0) {
                printf("Per rak : %d\n", stok / rak);
                printf("Sisa : %d\n", stok % rak);
            } else {
                printf("Rak tidak boleh 0\n");
            }
        } else {
            printf("Belum ada stok\n");
        }
        printf("Tekan ENTER untuk kembali...");
        getchar();
        getchar();
        menu();
    }

    else if (pilih == 5) {
        printf("\nProgram selesai\n");
    }

    else {
        printf("\nPilihan tidak ada\n");
        printf("Tekan ENTER untuk kembali...");
        getchar();
        getchar();
        menu();
    }
}

int main() {
    char username[20];
    char password[20];

    printf("===== INVENTARIS GUDANG =====\n");

    printf("Username : ");
    scanf("%s", username);

    printf("Password : ");
    scanf("%s", password);

    if (strcmp(username, "Rifqi") == 0) {
        if (strcmp(password, "12345") == 0) {
            printf("\nLogin berhasil\n");
            menu();
        } else {
            printf("\nPassword salah\n");
        }
    } else {
        printf("\nUsername salah\n");
    }

    return 0;
}