#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void selectionSort(string[], int);
void swap(string &, string &);
void displayArray(string[], int, string);
void readFileIntoArray(string[], string, int);
int binarySearch(string[], int, string);

// fungsi utama
int main() {
    const int NUM_NAMES = 35;
    string names[NUM_NAMES];

    readFileIntoArray(names, "names.txt", NUM_NAMES);


    displayArray(names, NUM_NAMES, "UNSORTED: \n--------------------");
    selectionSort(names, NUM_NAMES);
    displayArray(names, NUM_NAMES, "SORTED: \n-------------------- ");

    string user_name;
    cout << "Masukkan Nama Provinsi: ";
    getline(cin, user_name);

    int position = binarySearch(names, NUM_NAMES, user_name);

    if (position != -1)
       cout << names[position] << " Berada " << "di index: " << position - 1<< endl;
    else
        cout << user_name << " Tidak ditemukan." << endl;


    return 0;
}

void readFileIntoArray(string array[], string file_name, int ARRAY_SIZE) // Untuk membaca file yang akan diinput
{
    // 1. open
    ifstream inputFile;

    inputFile.open(file_name);

    if (inputFile.fail())
    {
        cout << "Invalid file." << endl;
    }
    else
    {
        // 2. read
        int index = 0;

        while(getline(inputFile, array[index]) && index != ARRAY_SIZE)
            index++;

        // 3. close
        inputFile.close();
    }

}

void selectionSort(string array[], int ARRAY_SIZE) // Sorting
{
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < ARRAY_SIZE; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }
        swap(array[min_index], array[start_index]);
    }
}

void swap(string &a, string &b) // Sorting
{
    string temp = a;
    a = b;
    b = temp;
}

void displayArray(string array[], int ARRAY_SIZE, string prompt) // Menampilkan data array
{
    cout << prompt << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << endl;
    cout << endl;
}

int binarySearch(string array[], int array_size, string user_name) // Melakukan konsep binary search
{
    int first = 0,
        last = array_size - 1,
        middle,
        position;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;

        if (array[middle] == user_name)     // Middle
        {
            position = middle;
            found = true;
        }
        else if (array[middle] > user_name)   // Lower Half
            last = middle - 1;
        else                                  // Upper Half
            first = middle + 1;

    }
    return position;
}
