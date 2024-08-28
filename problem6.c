#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.

int main(){

    int fiyat, kdv;  // Ürünün fiyatını ve KDV oranını tutmak için değişkenler tanımlıyoruz.
    float GercekFiyat;  // KDV dahil gerçek fiyatı tutmak için bir değişken tanımlıyoruz.

    printf("Lutfen Urunun Fiyatini Giriniz: ");  // Kullanıcıdan ürünün fiyatını girmesini istiyoruz.
    scanf("%d", &fiyat);  // Kullanıcının girdiği fiyatı 'fiyat' değişkenine kaydediyoruz.

    printf("Lutfen Urunun KDV Oranini Tam Sayi Turunde Giriniz: ");  // Kullanıcıdan KDV oranını tam sayı olarak girmesini istiyoruz.
    scanf("%d", &kdv);  // Kullanıcının girdiği KDV oranını 'kdv' değişkenine kaydediyoruz.

    GercekFiyat = fiyat + ((fiyat * kdv) / 100);  // Ürünün KDV dahil gerçek fiyatını hesaplıyoruz.

    printf("Girilen Urunun Gercek Fiyati: %.2f", GercekFiyat);  // Hesaplanan gerçek fiyatı ekrana yazdırıyoruz. Fiyatı virgülden sonra iki basamak olacak şekilde formatlıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
