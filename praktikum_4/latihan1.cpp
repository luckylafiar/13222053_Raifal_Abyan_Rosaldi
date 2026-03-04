#include <iostream>
#include <vector>

int main() {  
    std::vector<int> kumpulan_angka;

    kumpulan_angka.push_back(10);  
    kumpulan_angka.push_back(25);  
    kumpulan_angka.push_back(50);

    // Menghapus elemen terakhir (50 akan dihapus)
    kumpulan_angka.pop_back();

    // Menghapus seluruh isi vector
    kumpulan_angka.clear();

    // Menampilkan isi vector
    for(int i = 0; i < kumpulan_angka.size(); i++) {  
        std::cout << "Data ke-" << i 
                  << ": " << kumpulan_angka[i] 
                  << std::endl;  
    }  
      
    return 0;  
}