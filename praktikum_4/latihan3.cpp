#include <iostream>
#include <vector>

int main() {  
    std::vector<int> data = {10, 20, 30, 40};  

    // Variabel total dipindahkan ke dalam loop
    for(int i = 0; i < data.size(); i++) {  
        int total = 0;   // Sekarang menjadi variabel lokal tiap iterasi
        total = total + data[i];  
        std::cout << "Iterasi " << i 
                  << " | Total sementara: " 
                  << total << std::endl;
    }

    return 0;  
}