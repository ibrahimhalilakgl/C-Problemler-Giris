#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.

int main(){

    int sayi1, sayi2, toplam, carpim;  // İki sayı, bu sayıların toplamı ve çarpımı için değişkenler tanımlıyoruz.

    printf("Lutfen Birinci Sayiyi Giriniz: ");  // Kullanıcıdan birinci sayıyı girmesini istiyoruz.
    scanf("%d", &sayi1);  // Kullanıcının girdiği birinci sayıyı 'sayi1' değişkenine kaydediyoruz.

    printf("Lutfen Ikinci Sayiyi Giriniz: ");  // Kullanıcıdan ikinci sayıyı girmesini istiyoruz.
    scanf("%d", &sayi2);  // Kullanıcının girdiği ikinci sayıyı 'sayi2' değişkenine kaydediyoruz.

    toplam = sayi1 + sayi2;  // İki sayının toplamını hesaplayıp 'toplam' değişkenine atıyoruz.
    carpim = sayi1 * sayi2;  // İki sayının çarpımını hesaplayıp 'carpim' değişkenine atıyoruz.

    printf("Girilen Sayilarin Toplami: %d\n", toplam);  // Hesaplanan toplamı ekrana yazdırıyoruz.
    printf("Girilen Sayilarin Carpimi: %d", carpim);  // Hesaplanan çarpımı ekrana yazdırıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
