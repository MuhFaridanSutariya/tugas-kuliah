#include <iostream>

using namespace std;

// membuat fungsi baru untuk menampung proses selection sort
void selection_sort(int data[], int n){
    // deklarasikan variabel temp dan min berguna sebagai variabel penampung nilai data-datanya.
    int temp, min;

    // looping pertama berfungsi mencari data minimumnya dengan mencari hasil dari perbandingan antar 2 buah nilai
    for(int i = 0; i < n - 1; i++){
        min = i;
        // looping kedua berfungsi untuk mencatat data minimum yang telah didapatkan dari looping pertama
        for(int j = i + 1; j < n; j++){
            // melakukan pengkondisian apabila data yang menampung nilai terkecil lebih kecil dibandingkan data yang menampung seluruh nilai
            if(data[j] < data[min]){
                min = j;
            }
        }
        temp = data[i]; // save data pertama kedalam variabel temp
        data[i] = data[min]; // save data kedua ke variabel yang menampung nilai pertama
        data[min] = temp; // save data temp ke variabel yang menampung nilai kedua
    }
}

int main()
{   // Mendeklarasikan variabel data bertipe int berbentuk array, yang berguna untuk menampung nilai, variabel n bertipe int yang
    // -> berfungsi untuk menampung jumlah data yang ingin dilakukan input
    int data[10], n;

    cout << "Mengurutkan data secara Menurun menggunakan algoritma Selection Sort\n\n";

    cout << "Masukkan jumlah data : ";
    cin >> n;

    // berfungsi untuk melakukan inputan nilai untuk data secara berulang
    for (int i = 0; i < n; i++){
        cout << " Data ke " << i+1 << " : ";
        cin >> data[i];
    }

    // karena isi dari data nya berupa array maka kita dapat menggunakan looping
    cout << "\n Data Sebelum Diurutkan : ";
    for (int i = 0; i < n; i++){
        cout << data[i] << " ";
    }

    // memanggil fungsi yang telah dibuat
    selection_sort(data, n);

    // Melakukan looping terhadap hasil dari data yang telah diurutkan
    cout << "\n Data Setelah Diurutkan : ";
    for (int i = 0; i < n; i++){
        cout << data[i] << " ";
    }

    return 0;
}
