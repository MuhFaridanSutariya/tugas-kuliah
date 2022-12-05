#include <iostream>
using namespace std;

int main(){
    int sum, i, arr[30], num, first, last, middle;
    cout << "----------------------------------------Selamat datang di program pencarian NIM----------------------------------------\n\n";
    cout << "Masukkan total NIM yang ingin anda masukkan : ";
    cin >> sum;

    for (i=0; i <sum; i++){
        cout<< "Masukkan NIM "<<(i+1)<<" : ";
        cin>>arr[i];
    }

    cout << "Masukkan NIM yang ingin anda cari:";
    cin >> num;
    first = 0;
    last = sum - 1;
    middle = (first+last)/2;
    while (first <= last){
        if(arr[middle] < num){
            first = middle + 1;
        }
        else if(arr[middle] == num){
            cout << num << " ditemukan dalam array pada lokasi ke "<<middle+1<<"\n";
            break;
        }
        else {
            last = middle - 1;
        }
        middle = (first + last)/2;
    }
    if(first > last){
        cout<<num<< " NIM tidak ditemukan ";
    }
    return 0;
}
