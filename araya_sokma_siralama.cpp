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

/*
 DEMO

    [5,6,1,3,6,10,2]

    1.Adım : [5|6,1,3,6,10,2]  --> 0.indis(5) sıralı olarak kabul ediliyor
    2.Adım : [5,6|1,3,6,10,2]  --> 1.indis(6) 6 > 5 olduğu için sıralama değişmiyor. 
    3.Adım : [5,1,6|3,6,10,2]  --> 2.indis(1) 1 önce 6 ile daha sonra 5 ile karşılaştırılacak. 6 > 1 olduğu için 1 birim kaydırılarak araya sokuluyor.
    4.Adım : [1,5,6|3,6,10,2]  
    5.Adım : [1,5,3,6|6,10,2]  --> 3.indis(3) Sırasıyla sonran itibaren karşılaştırılıyor. 6 > 3 olduğu için 1 birim kaydırılarak araya sokuluyor.   
    6.Adım : [1,3,5,6|6,10,2]
    7.Adım : [1,3,5,6,6|10,2]
    8.Adım : [1,3,5,6,6,10|2]  
    9.Adım : [1,3,5,6,6,2,10]
    10.Adım : [1,3,5,6,6,2,10]
    11.Adım : [1,3,5,6,2,6,10]
    12.Adım : [1,3,5,2,6,6,10]
    13.Adım : [1,3,2,5,6,6,10]
    14.Adım : [1,2,3,5,6,6,10] --> Sıralama Tamamlandı.


*/
