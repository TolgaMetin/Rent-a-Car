#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <math.h>

int main()
{

	char username[20];
	int password=1905;                            //þifre :1905
	int option;
	printf("METIN RENT A CAR'A HOSGELDINIZ\n\n");
	printf("Lutfen kullanici adi giriniz: ");
	gets(username);
	printf("Lutfen sifre giriniz: ");
	scanf("%d", &password);
	
	while(password!=1905)
	{
		printf("yanlis sifre girdiniz bidaha deneyiniz..\n");
		printf("Lutfen sifre giriniz:", password);
		scanf("%d", &password);
		if (password==1905)
		{
			break;
		}
		
    }
    
    
	system("CLS");
	printf("Dogru sifre girdiniz yonlendiliriyosunuz..");
	printf("...Sistem yukleniyo lutfen bekleyiniz\n\n");
	Sleep( 300 );
	printf("MENU\n");
	printf("***********************\n");
	printf("1-Sirketteki Araclar\n");
	printf("2-Kiralanan Araclar\n");
	printf("3-Kiralama\n");                         
	printf("4-Muhasebe\n");
	printf("5-Hakkimizda\n");
	scanf("%d", &option);
	


                      
	system("CLS");
	if(option==1)
	{
		
		FILE *dosya1;

    	char mark1[25][25],model1[25][25],plaka1[25][25], sayi1[25][25], fiyat1[25][25];
    	int i1=0;
    	if((dosya1=fopen("tumaraclar.txt", "r")) !=NULL)
        {
					while(!feof(dosya1))
					{
						fscanf(dosya1,"%s %s %s %s %s",&sayi1[i1],&mark1[i1],&model1[i1],&plaka1[i1],&fiyat1[i1]   );
						printf("%s %s %s %s %s\n", sayi1[i1],mark1[i1],model1[i1],plaka1[i1],fiyat1[i1]);
						i1++;
    				}
   	    }
    }
	else
	{
		printf("dosya bulunamadý");
    }
    
    if(option==2)
    {
		
		FILE *dosya1;

    	char mark1[25][25],model1[25][25],plaka1[25][25], sayi1[25][25], fiyat1[25][25];
    	int i1=0;
    	if((dosya1=fopen("kiralananaraclar.txt", "r")) !=NULL)
        {
					while(!feof(dosya1))
					{
							fscanf(dosya1,"%s %s %s %s %s",&sayi1[i1],&mark1[i1],&model1[i1],&plaka1[i1],&fiyat1[i1]   );
							printf("%s %s %s %s %s\n", sayi1[i1],mark1[i1],model1[i1],plaka1[i1],fiyat1[i1]);
							i1++;
    				}
    	}
    	
    }
    else if(option==4)
    {
    	FILE *dosya1;

    	char mark1[25][25],model1[25][25],plaka1[25][25], sayi1[25][25], fiyat1[25][25];
    	int i1=0;
    	if((dosya1=fopen("tumaraclar.txt", "r")) !=NULL)
        {
					while(!feof(dosya1))
					{
							fscanf(dosya1,"%s %s %s %s %s",&sayi1[i1],&mark1[i1],&model1[i1],&plaka1[i1],&fiyat1[i1]   );
							printf("%s %s %s %s %s\n", sayi1[i1],mark1[i1],model1[i1],plaka1[i1],fiyat1[i1]);
							i1++;
    				}
    	}
		else
		{
		printf("dosya bulunamadý");
    	}
  		
		printf("*****************************************\n");
        int secenek=0;
    	printf("kiralanan araci seciniz..");
    	scanf("%d",&secenek);
    	switch(secenek)
    	{
    		case 1:
    			{
    				FILE*fiyat1;
    				int fiyat45;
    			    if((fiyat1=fopen("fiyat.txt", "r")) !=NULL)
    			    {
    			    	
    					fscanf(fiyat1,"%d", &fiyat45);
    			    	int toplam=toplam+fiyat45;
    					printf("%Kasadaki Tutar: %d ",toplam);
    			    
    			    	
    				}
		
	           }

            case 2:
            	    FILE*fiyat2;
            	    int fiyat46;
            	    if((fiyat2=fopen("fiyat.txt","r"))!=NULL)
                    {
            	    	
            	    	fscanf(fiyat2,"%d", &fiyat46);
            	    	int toplam=toplam+fiyat46;
            	    	printf("%kasadaki tutar: %d",toplam);
            	    	
            	    }		
	   
	        
			case 3: FILE*fiyat3;
            	    int fiyat47;
            	    if((fiyat3=fopen("fiyat.txt","r"))!=NULL)
                    {
            	    	
            	    	fscanf(fiyat3,"%d", &fiyat47);
            	    	int toplam=toplam+fiyat47;
            	    	printf("%kasadaki tutar: %d",toplam);
            	    	
            	    }
	        
			case 4: FILE*fiyat4;
            	    int fiyat48;
            	    if((fiyat4=fopen("fiyat.txt","r"))!=NULL)
                    {
            	    	
            	    	fscanf(fiyat4,"%d", &fiyat48);
            	    	int toplam=toplam+fiyat48;
            	    	printf("%kasadaki tutar: %d",toplam);
            	    	
            	    }
	   
	        
			case 5: FILE*fiyat5;
            	    int fiyat49;
            	    if((fiyat5=fopen("fiyat.txt","r"))!=NULL)
                    {
            	    	
            	    	fscanf(fiyat5,"%d", &fiyat49);
            	    	int toplam=toplam+fiyat49;
            	    	printf("%kasadaki tutar: %d",toplam);
            	    	
            	    }
	   
	   

	   }
   }
	   
	  
	   else if(option==5)
	   {

	   printf("METIN RENT A CAR SIRKET POLITIKASI\n\n");
	   printf("1926 yilinda Amerika'da kurulmus olan METINN RENT A CAR, dunyanin ilk uluslarasi rent a car firmasidir. Bugun dunya geneline yayilmis 150 farkli ulkede ve 8000'i askin ofisiyle hizmet vermektedir.\n");
       printf("METIN RENT A CAR, 90 yili askin koklu gecmisinin yani sira dunya genelinde en genis ofis agina sahip rent a car firmasidir.\n");
       printf("Turkiye'de 2001 yilindan bu yana Asya Nakliyat ve Dis Ticaret A.S. catisi altinda faaliyet gosteren METIN RENT A CAR, cogunlugu havalimanlarinda olmak uzere Turkiye geneline yayilmis ofis agiyla hizmet vermektedir\n");
       printf("METIN RENT A CAR Turkiye, uluslararasi kalite standartlari ve ulasilabilir fiyat politikasindan odun vermeden hem gunluk yani kisa sureli arac kiralama, hem de uzun donem filo kiralama hizmetini ayni anda sunan az sayidaki rent a car firmasindan biridir.\n");
       }
   
   
   
   
   
   
   
   }







            		
            		
            		
            		
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  
	  

    
	
    

    
    	
 	
    	
    













	
	
		
		
		
		
		
		
		
		

	
	
	
	
	
	
	










	
	
	
	
	
	
	
	
	
	
	
	
	
