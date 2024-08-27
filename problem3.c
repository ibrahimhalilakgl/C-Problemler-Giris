#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.

int main(){

    int degisken, denklem;  // Kullanıcının gireceği X değeri ve denklem sonucunu tutmak için değişkenler tanımlıyoruz.

    printf("Lutfen X Degerini Giriniz: ");  // Kullanıcıdan X değeri girmesini istiyoruz.
    scanf("%d", &degisken);  // Kullanıcının girdiği X değerini 'degisken' değişkenine kaydediyoruz.

    denklem = (3 * degisken) * (3 * degisken);  // Denklemi hesaplıyoruz: (3*X)²

    printf("Girilen Denklemin Sonucu: %d", denklem);  // Hesaplanan denklem sonucunu ekrana yazdırıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
