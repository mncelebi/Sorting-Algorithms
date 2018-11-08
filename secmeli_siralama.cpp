//
//  main.cpp
//  Seçmeli Sıralama
//
//  Created by Kemal on 8.11.2018.
//  Copyright © 2018 Kemal. All rights reserved.
//

#include <iostream>

using namespace std;
int main(int argc, const char * argv[]) {
    int i,j,min,index;
    int data[10] = {1,2,3,4,5,6,7,8,9,10};
    
    for(i = 0; i < 9; i++){ // Dizinin Başından Başlanıyor
        min = data[9]; // Son eleman en küçük olarak kabul ediliyor.
        index = 9;
        for(j = i; j < 9; j++){ // elimizdeki minimumdan daha küçüğü var mı diye aranıyor
            if(data[j] < min){
                min = data[j];
                index = j;
            }
        }
        data[index] = data[i]; // daha küçüğü varsa yer değiştiriliyor.
        data[i] = min;
    }
    
    for(i = 0; i < 10; i++){
        cout << data[i] << endl;
    }
    
    return 0;
}

/*

 DEMO
    [5,4,2,19,1,24]
 
    1.Adım : En küçük 24 Kabul Ediliyor ve karşılaştırma başlıyor.
             i = 0 / j = 0 / min = 24 => 24 > 5 => min = 5 / index = 0
             i = 0 / j = 1 / min = 5 => 5 > 4 => min = 4 / index = 1
             i = 0 / j = 2 / min = 4 => 4 > 2 => min = 2 / index = 2
             i = 0 / j = 3 / min = 2 => 2 < 19 => min = 2 / index = 2
             i = 0 / j = 4 / min = 2 => 2 > 1 => min = 1 / index = 4
             i = 0 / min = 1  /  index = 4
             data[0] ile data[4] yer değiştiriyor ;
             [1,4,2,19,5,24]  => data[0] sıralanmış şekilde bulunuyor.

    2.Adım : En küçük 24 kabul ediliyor ve karşılaştırma başlıyor.
            i = 1 / j = 1 / min = 24 => 24 > 4 => min = 4 / index = 1
            i = 1 / j = 2 / min = 4 => 4 > 2 => min = 2 / index = 2
            i = 1 / j = 3 / min = 2 => 2 < 19 => min = 2 / index = 2
            i = 1 / j = 4 / min = 2 => 2 < 5 => min = 2 / index = 2
            data[1] ile data[2] yer değiştiriyor ;
            [1,2,4,19,5,24]  => data[0] ve data[1] sıralanmış şekilde bulunuyor.
 
     3.Adım : En küçük 24 kabul ediliyor ve karşılaştırma başlıyor.
             i = 2 / j = 2 / min = 24 => 24 > 4 => min = 4 / index = 2
             i = 2 / j = 3 / min = 4 => 4 < 19 => min = 4 / index = 2
             i = 2 / j = 4 / min = 4 => 4 < 5 => min = 4 / index = 2
             data[2] ile data[2] yer değiştiriyor ; ---> 4 zaten doğru yerde olduğu için yeri değişmiyor.
             [1,2,4,19,5,24]  => data[0] ,data[1] ve data[2] sıralanmış şekilde bulunuyor.
 
     3.Adım : En küçük 24 kabul ediliyor ve karşılaştırma başlıyor.
             i = 3 / j = 3 / min = 24 => 24 > 19 => min = 19 / index = 3
             i = 4 / j = 4 / min = 19 => 19 > 5 => min = 5 / index = 4
             data[3] ile data[4] yer değiştiriyor ;
             [1,2,4,5,19,24]  => data[0] ,data[1], data[2] ve data[3] sıralanmış şekilde bulunuyor.
 
     4.Adım : En küçük 24 kabul ediliyor ve karşılaştırma başlıyor.
             i = 4 / j = 4 / min = 24 => 24 > 19 => min = 19 / index = 4
             data[4] ile data[4] yer değiştiriyor ;  ---> 19 zaten doğru yerde olduğu için yeri değişmiyor
             [1,2,4,5,19,24]  => data dizisi küçükten büyüğe doğru sıralandı
 
*/
