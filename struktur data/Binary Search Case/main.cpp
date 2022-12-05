#include<iostream>
#include <string>
using namespace std;

void SelectionSort(string[], int);
void swap(string &, string &);
void displayArray(string[], int, string);

int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {
                                "A. Budi Pranoto",
                                "AAJ Batavia",
                                "Aam Dewi Hamidah",
                                "Aarti Lohia",
                                "Abdul Hadi Ismail",
                                "Abdul Rachman",
                                "Abdul Rahman",
                                "Abdul Rifai Natanegara",
                                "Abdul Slam Tahir",
                                "Abdullah Alatas",
                                "Abu Djaja Bunjamin",
                                "Abu Hermanto Budiono",
                                "Achirsyah Moeis",
                                "Achmad Fadjar",
                                "Achmad Faried Joesoef",
                                "Achmad Kalla",
                                "Achmad Latief Alwy",
                                "Achmad Nugraha Djuanda",
                                "Achmad Sandi",
                                "Achmad",
                                "Adam Sautin",
                                "Ade R. Syarief",
                                "Ade Tjakralaksana",
                                "Adelina",
                                "Adhi Utomo",
                                "Jusman",
                                "Adi Bisono",
                                "Sasono",
                                "Sumito",
                                "Nusantara",
                                "Koeswojo",
                                "Adji",
                                "Hermanto",
                                "Achmad",
                                "Adriana",
                                "Adryansyah",
                                "Hermawan",
                                "Afandi",
                                "Agam",
                                "Harlim",
                                "Noegroho"}

    displayArray(names, NUM_NAMES, "UNSORTED: \n----------------------");
    SelectionSort(names, NUM_NAMES);
    displayArray(names, NUM_NAMES, "SORTED: \n----------------------");
    return 0;
}

void SelectionSort(string array[], int ARRAY_SIZE){
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++){
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < ARRAY_SIZE; index++){
            if (array[index] < min_value){
                min_value = array[index];
                min_index = index;
            }
        }
    }
}
