//
//  main.cpp
//  ArayaSokmaSiralama
//
//  Created by Kemal on 8.11.2018.
//  Copyright © 2018 Kemal. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int data[10] = {6,2,4,7,6,8,1,9,3,5};
    int i,k, ekle;
    
    for(i = 1; i < 10; i++){
        ekle = data[i];
        // Önce Eklenecek Yer Boşaltılıyor ;
        for(k = i - 1; k >= 0 && ekle <= data[k]; k--){ // Geriye kaydırıyor
            data[k+1] = data[k]; // Uygun yer boşaltıldı
        }
        data[k+1] = ekle;
    }
    
    for(i = 0; i < 10; i++){
        std::cout << data[i] << std::endl;
    }
    
    
    return 0;
}
