#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.

int main(){

    int A, B, gecici;  // İki sayıyı tutmak için A ve B değişkenlerini, geçici değişkeni de swap işlemi için tanımlıyoruz.

    printf("Lutfen A Sayisini Giriniz: ");  // Kullanıcıdan A sayısını girmesini istiyoruz.
    scanf("%d", &A);  // Kullanıcının girdiği A sayısını 'A' değişkenine kaydediyoruz.

    printf("Lutfen B Sayisini Giriniz: ");  // Kullanıcıdan B sayısını girmesini istiyoruz.
    scanf("%d", &B);  // Kullanıcının girdiği B sayısını 'B' değişkenine kaydediyoruz.

    gecici = A;  // A sayısını geçici değişkene kaydediyoruz.
    A = B;  // B sayısını A değişkenine atıyoruz.
    B = gecici;  // Geçici değişkende tuttuğumuz A sayısını B değişkenine atıyoruz.

    printf("A Sayisi: %d , B Sayisi: %d", A, B);  // Değiştirilen A ve B değerlerini ekrana yazdırıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
