#include <iostream>
using namespace std;

int main()
{
    int nilaimatematika, nilaifisika, nrerata;
    string status;

    cout << "Masukan Nilai Matematika : ";
    cin >> nilaimatematika;

    cout << "Masukan Nilai Fisika : ";
    cin >> nilaifisika;

    nrerata = (nilaimatematika + nilaifisika) / 2;

    if (nrerata > 60) {
        status = "Lulus";
    }
    else if (nilaimatematika > 70) {
        status = "Lulus";
    }
    else {
        status = "Lulus";
    }
    cout << "Nilai MTK : " << nilaimatematika << endl;
    cout << "Nilai Fisika : " << nilaifisika << endl;
    cout << "rata-rata nilai : " << nrerata << endl;
    cout << "Statusnya adalah " << status << endl;

    return 0;
}
    

