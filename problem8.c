#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.

int main(){

    int gun, hafta, yil;  // Gün sayısını, haftaya ve yıla çevirmek için değişkenler tanımlıyoruz.

    printf("Lutfen Gun Sayisini Giriniz: ");  // Kullanıcıdan toplam gün sayısını girmesini istiyoruz.
    scanf("%d", &gun);  // Kullanıcının girdiği gün sayısını 'gun' değişkenine kaydediyoruz.

    yil = gun / 365;  // Toplam gün sayısından kaç yıl olduğunu hesaplıyoruz.
    gun = gun - (yil * 365);  // Yıl olarak hesaplanan günleri çıkarıyoruz, kalan günleri tekrar 'gun' değişkeninde saklıyoruz.

    hafta = gun / 7;  // Kalan gün sayısından kaç hafta olduğunu hesaplıyoruz.
    gun = gun - (hafta * 7);  // Hafta olarak hesaplanan günleri çıkarıyoruz, kalan günleri tekrar 'gun' değişkeninde saklıyoruz.

    printf("Girilen Gun Sayisi: %d Yil, %d Hafta, %d Gun.", yil, hafta, gun);  // Hesaplanan yıl, hafta ve gün değerlerini ekrana yazdırıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
