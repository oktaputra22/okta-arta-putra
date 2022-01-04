/**************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

***************************/

#include <iostream>

using namespace std;

int main()
{
    char nama[30],pembeli[30];
    int harga,jumlah,total,jumtotal,jumbayar,kembalian,potongan;
    string input, kode;
    
    awal:
    cout<<"=========================================="<<endl;
    cout<<"==========      putra store    ==========="<<endl;
    cout<<"=========================================="<<endl;
    cout<<"nama pembeli  :";
    cin >> pembeli;
    cout<<"pilihan barang yang tersedia"<<endl;
    cout<<"001 bajau kaos motif - Rp 60.000"<<endl;
    cout<<"002 bajau kaos polos - Rp 50.000"<<endl;
    cout<<"003 celana pendek - Rp 70.000"<<endl;
    cout<<"004 jaket polos - Rp 100.000"<<endl;
    cout<<"005 celana panjang jeans - Rp 120.000"<<endl;
    cout<<"006 jaket motif - Rp 110.000"<<endl;
    
    
    cout<<endl;
    cout<<endl;
    cout<<" barang yang di pilih :";
    cin >>kode;
    cout<<" jumblah bli            :";
    cin>>jumlah;
     
     if (kode == "001" ){
         cout<< "  bajau kaos motif ";
         harga = 60000;
     }   else if (kode == "002"){
         cout<< " bajau kaos polos ";
         harga = 50000;
     }   else if (kode == "003"){
         cout<< " celana pendek ";
         harga = 70000;
     }   else if (kode == "004"){
         cout<< " jaket polos ";
         harga = 100000;
     }   else if (kode == "005"){
         cout<< " jaket polos ";
         harga = 120000;
     }   else if (kode == "006"){
         cout<< " jaket motif ";
         harga = 110000;
     }   else {
         cout << " barang yang tidak tersedia";
     }
     
     
     
     cout << endl;
     cout << "=========================================="<<endl;
     cout << " struk pembayaran"<<endl;
     cout << "=========================================="<<endl;
     cout << " name pembeli   :"<<pembeli<<endl;
     cout << " harga          :"<<harga<<endl;
     cout << " jumblah        :"<<jumlah<<endl;
     
     total = harga * jumlah;
     cout << " total        :"<<total<<endl;
     cout << endl;
     if ( total > 50000 || total < 500000){
         potongan = 0.2 * total;
     }   else if (total > 500000){
         potongan = 0.10 * total;
     }   else {
         potongan = 0;
     }
     
     cout << " potongan       :"<<potongan<<endl;
     cout <<"================================="<<endl;
     
     jumtotal = total-potongan;
     
     cout << " total keseluruhan  :"<<jumtotal<<endl;
     cout << " uang bayar       :";
     cin >>jumbayar;
     
     kembalian = jumbayar -jumtotal;
     cout << " uang kembalian     :"<<kembalian<<endl;
     cout << "===================================="<<endl;
     
     cout << " input lagi [Y/T] : ";
     cin  >> input;
     
     if (input == "y" || input == "Y" ){
         goto awal;
        } else{
            return 0;
        }
     
     
     
}
