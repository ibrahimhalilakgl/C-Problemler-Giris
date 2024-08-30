#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.

int main(){

    int sayi, toplam = 0;  // Kullanıcının gireceği sayıyı ve toplamı tutmak için değişkenler tanımlıyoruz. 'toplam' değişkenini sıfırla başlatıyoruz.

    printf("Lutfen Birinci Sayiyi Giriniz: ");  // Kullanıcıdan birinci sayıyı girmesini istiyoruz.
    scanf("%d", &sayi);  // Kullanıcının girdiği sayıyı 'sayi' değişkenine kaydediyoruz.

    toplam = toplam + sayi;  // Girdiği sayıyı 'toplam' değişkenine ekliyoruz.

    printf("Lutfen Ikinci Sayiyi Giriniz: ");  // Kullanıcıdan ikinci sayıyı girmesini istiyoruz.
    scanf("%d", &sayi);  // Kullanıcının girdiği sayıyı 'sayi' değişkenine kaydediyoruz.

    toplam = toplam + sayi;  // İkinci sayıyı da 'toplam' değişkenine ekliyoruz.

    printf("Lutfen Ucuncu Sayiyi Giriniz: ");  // Kullanıcıdan üçüncü sayıyı girmesini istiyoruz.
    scanf("%d", &sayi);  // Kullanıcının girdiği sayıyı 'sayi' değişkenine kaydediyoruz.

    toplam = toplam + sayi;  // Üçüncü sayıyı da 'toplam' değişkenine ekliyoruz.

    printf("Girilen Sayilarin Toplami: %d", toplam);  // Hesaplanan toplamı ekrana yazdırıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
