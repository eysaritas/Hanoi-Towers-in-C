#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fonksiyon parametrelerimiz parantez içinde tanýmlanmýþ.
void hanoi(int n,char kaynak,char hedef,char yardimci) 
 {	
	if(n==1)
	{	//n=1 olduðunda sadece en alttaki disk kalýr ve onu da tek hamle ile hedef çubuða aktarýrýz.
		printf("Disk 1 %c den %c cubuguna tasinir.",kaynak,hedef);
		return;
	}
	//Özyinelemeli fonksiyonlar kullanarak n tane olan diskin (n-1) tanesini yardýmcý çubuða taþýyouz.(A-->B)
	//1
	hanoi(n-1,kaynak,yardimci,hedef);

	printf("\nDisk %d %c den %c cubuguna tasinir.\n",n,kaynak,hedef);
	
	//Yine özyinelemeli fonksiyonlar kullnarak n tane olan diskin (n-1) tanesini yardýmcý çubuktan hedef çubuða taþýyoruz.(B-->C)
	//2
	hanoi(n-1,yardimci,hedef,kaynak);
 }

 int main() {
	
	int n;
	double time_spent=0.0;

	//Kullanýcýdan oyun için disk sayýsý giriþi alýn.	
	printf("Disk sayisini giriniz: ");
	scanf("%d",&n);
	printf("\n");
	
	//Zaman ölçer baþlangýcý.
	clock_t begin= clock();
	printf("Hanoi Kuleleri oyununun cozum hamleleri: \n\n");
	
	//Fonksiyonumuzu main içine çaðýrýyoruz.(A:Kaynak Çubuðu,B:Yardýmcý Çubuðu,C:Hedef Çubuk.)
	hanoi(n,'A','C','B');
	
	//Zaman ölçer sonu.
 	clock_t end=clock();
	time_spent+=(double)(end-begin)/CLOCKS_PER_SEC;
	
	//Zamaný yazdýrýyoruz.
	printf("\n\n");
	printf("Islem icin gereken sure: %f",time_spent);

	return 0;
 }
 
 
