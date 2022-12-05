#include <iostream>
using namespace std;

void swape(int *a, int *b){
    int temp = *a; // save data pertama kedalam variabel temp
    *a = *b; // save data kedua ke variabel yang menampung nilai pertama
    *b = temp; // save data temp ke variabel yang menampung nilai kedua
}

void bubble_sort(int data[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if (data[i] > data[j]){
                swape(&data[i], &data[j]);
            }
        }
    }
}

int main()
{
    int data[10], n;

    cout << "Mengurutkan data secara menurun dengan algoritma bubble Sort! \n\n";

    cout << "Masukkan Jumlah datanya : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        cout << "Data ke " << i + 1 << " : ";
        cin >> data[i];
    }

    cout << "\ndata sebelum diurutkan : ";
    for (int i = 0; i<n; i++){
        cout << data[i] << " ";
    }

    bubble_sort(data, n);

    cout << "\nData setelah diurutkan : ";
    for(int i = 0; i < n; i++){
        cout << data[i] << " ";
    }

    return 0;
}
