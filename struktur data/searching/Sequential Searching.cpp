#include <iostream>
 
using namespace std;
 
int main()
{
  cout << "##  Program Searching ##" << endl;
  cout << "==================================" << endl;
  cout << endl;
 
  int input[100], arr_count, i, num;
 
  cout << "Input jumlah element : ";
  cin >> arr_count;
 
  cout << "Input "<< arr_count << " angka : " ;
  cout << endl;
 
  // simpan setiap angka yang diinput ke dalam array
  for(i = 0; i < arr_count; i++)
  {
       cin >> input[i];
  }
 
  cout << endl;
 
  cout << "Input angka yang akan dicari: ";
  cin >> num;
  cout <<"---------------------------"<<endl;
  cout<<endl;
 
  // proses pencarian array
  for(i = 0; i < arr_count; i++){
    if(input[i] == num){
      cout << "Angka ditemukan pada index ke-" << i;
      break;
    }
  }
 
  if(i == arr_count){
    cout  << "Angka tidak ditemukan";
  }
 
  cout << endl;
  return 0;
}
