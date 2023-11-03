#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fonksiyon parametrelerimiz parantez i�inde tan�mlanm��.
void hanoi(int n,char kaynak,char hedef,char yardimci) 
 {	
	if(n==1)
	{	//n=1 oldu�unda sadece en alttaki disk kal�r ve onu da tek hamle ile hedef �ubu�a aktar�r�z.
		printf("Disk 1 %c den %c cubuguna tasinir.",kaynak,hedef);
		return;
	}
	//�zyinelemeli fonksiyonlar kullanarak n tane olan diskin (n-1) tanesini yard�mc� �ubu�a ta��youz.(A-->B)
	//1
	hanoi(n-1,kaynak,yardimci,hedef);

	printf("\nDisk %d %c den %c cubuguna tasinir.\n",n,kaynak,hedef);
	
	//Yine �zyinelemeli fonksiyonlar kullnarak n tane olan diskin (n-1) tanesini yard�mc� �ubuktan hedef �ubu�a ta��yoruz.(B-->C)
	//2
	hanoi(n-1,yardimci,hedef,kaynak);
 }

 int main() {
	
	int n;
	double time_spent=0.0;

	//Kullan�c�dan oyun i�in disk say�s� giri�i al�n.	
	printf("Disk sayisini giriniz: ");
	scanf("%d",&n);
	printf("\n");
	
	//Zaman �l�er ba�lang�c�.
	clock_t begin= clock();
	printf("Hanoi Kuleleri oyununun cozum hamleleri: \n\n");
	
	//Fonksiyonumuzu main i�ine �a��r�yoruz.(A:Kaynak �ubu�u,B:Yard�mc� �ubu�u,C:Hedef �ubuk.)
	hanoi(n,'A','C','B');
	
	//Zaman �l�er sonu.
 	clock_t end=clock();
	time_spent+=(double)(end-begin)/CLOCKS_PER_SEC;
	
	//Zaman� yazd�r�yoruz.
	printf("\n\n");
	printf("Islem icin gereken sure: %f",time_spent);

	return 0;
 }
 
 
