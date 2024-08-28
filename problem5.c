#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.
#define PI 3.14  // Pi sayısını tanımlıyoruz. Bu, dairenin alanını hesaplamak için kullanılacak.

int main(){

    int yaricap;  // Dairenin yarıçapını tutmak için bir değişken tanımlıyoruz.
    float alan;  // Dairenin alanını tutmak için bir değişken tanımlıyoruz.

    printf("Lutfen Dairenin Yaricapini Giriniz: ");  // Kullanıcıdan dairenin yarıçapını girmesini istiyoruz.
    scanf("%d", &yaricap);  // Kullanıcının girdiği yarıçapı 'yaricap' değişkenine kaydediyoruz.

    alan = PI * (yaricap * yaricap);  // Dairenin alanını hesaplıyoruz: Pi * (yarıçap^2)

    printf("%d Yaricapli Dairenin Alani: %.2f", yaricap, alan);  // Hesaplanan alanı ekrana yazdırıyoruz. Alanı virgülden sonra iki basamak olacak şekilde formatlıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
