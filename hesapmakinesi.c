#include <stdio.h>
#include <conio.h>
int main()
/*
Merhabalar bu benim ilk c projem hesap makinesi
Yaptım ufak bir sorun var ondalıklı sayıları al-
mıyor Örn: 10/7=1 çıkar cevabınız Teşekkürler 
*/

// HESAP MAKİNESİ
{
while(1){
	int sayi1,sayi2;
	long sonuc;
	char islem;
	printf("EMRE CAN TÜRKOĞLU ~ HESAP MAKİNESİ\n");
	printf("Topla: +\nCikar: - \nBol  : / \nCarp: * \n");
	scanf("%c",&islem);
	if(islem=='+'){        
		printf("Toplama islemi \n");
		printf("Birinci sayiyi gir: \t \a");
		scanf("%d",&sayi1);
		printf("Ikinci sayiyi gir: \t \a");
		scanf("%d",&sayi2);
		sonuc = sayi1 + sayi2;
		printf("sonuc = %d \n",sonuc);
	}
	else if(islem=='-'){
		printf("Cikarma islemi \n");
		printf("Birinci sayiyi gir: \t \a");
		scanf("%d",&sayi1);
		printf("Ikinci sayiyi gir: \t \a");
		scanf("%d",&sayi2);
		sonuc = sayi1 - sayi2;
		printf("sonuc = %d \n",sonuc);
	}
	else if(islem=='*'){
		printf("Carpma islemi \n");
		printf("Birinci sayiyi gir: \t \a");
		scanf("%d",&sayi1);
		printf("Ikinci sayiyi gir: \t \a");
		scanf("%d",&sayi2);
		sonuc = sayi1 * sayi2;
		printf("sonuc = %d \n",sonuc);
	}
	else if(islem=='/'){
		printf("Bolme islemi \n");
		printf("Birinci sayiyi gir: \t \a");
		scanf("%d",&sayi1);
		printf("Ikinci sayiyi gir: \t \a");
		scanf("%d",&sayi2);
		sonuc = sayi1 / sayi2;
		printf("sonuc = %d \n",sonuc);
	}
	getch();
	
	}
	
	return 0;
	
}
