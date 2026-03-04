#include <iostream>

class Titik2D {  
private:  
    double x, y;

public:  
    // Constructor dengan parameter
    Titik2D(double nilai_x, double nilai_y) {   
        x = nilai_x;  
        y = nilai_y;  
    }  
      
    void cetak() {   
        std::cout << "X: " << x << " | Y: " << y << std::endl;   
    }  
};

int main() {  
    // Objek dibuat TANPA memberikan argumen
    Titik2D titikA;  
    titikA.cetak();  
      
    return 0;  
}