#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

//Made by Atakan Karaca Daðlar
//will be updating

main() {
	setlocale(LC_ALL, "Turkish");
	
	int sNum;
	char sNam[1000];
	
	
	printf("Merhaba lütfen öðrenci kimlik numaranýzý ve adýnýzý yazýnýz\n");
	//öðrenci numarasý.
	printf("Öðrenci numaranýz: ");
	scanf("%d", &sNum);
	//Ad soyad alýmý.
	printf("Adýnýzý giriniz: ");
	scanf(" %s", &sNam);
	
	int cinsiyet[40];
	char kullaniciCinsiyet;
	//cinsiyet alýmý.
	
	printf("cinsiyetiniz Erkek[e], Kadýn[k]: ");
	scanf(" %c", &cinsiyet);
	//cinsiyet karþýlaþtýrmasýiçin.
	kullaniciCinsiyet = cinsiyet[1];
	
	char secim[10];
	
	printf("\nMerhaba %d %s! Rezervasyon yapmak ister misiniz?\n", sNum, sNam);
	scanf(" %s", &secim);
	
	
	if(strcmp(secim, "Evet") == 0 || strcmp(secim, "evet") == 0){
		
		printf("Programa devam ediliyor...\n");
		system("cls");
		
        
       
        int cinsiyetList[40];
        
        for(int i = 0; i < 40; i++) {
			cinsiyetList[i] = -11;
		}
        
        int doluKoltuklar[40];
        
		for (int i = 0; i < 40; i++) {
    		doluKoltuklar[i] = -1; // -1 dolu olmayan koltuk anlamýna gelir.
		}
        
        
        doluKoltuklar[0] = 1;
        cinsiyetList[0] = 'e';
        
        doluKoltuklar[1] = 19;
        cinsiyetList[1] = 'k';
		
		doluKoltuklar[2] = 24;
        cinsiyetList[2] = 'k';
        
        doluKoltuklar[3] = 27;
        cinsiyetList[3] = 'k';
        
        doluKoltuklar[3] = 36;
        cinsiyetList[3] = 'k';
		
		doluKoltuklar[4] = 11;
        cinsiyetList[4] = 'k';

        
        doluKoltuklar[5] = 7;
        cinsiyetList[5] = 'k';
        
        doluKoltuklar[6] = 10;
        cinsiyetList[6] = 'k';
        
        doluKoltuklar[7] = 22;
        cinsiyetList[7] = 'k';
        
        
        
        
        
        
        
        //rezervasyon iþleri falan fistan...
        // ilk seat cam kenarý
        int firstSeatCounterCam = 3;
        for(int i = 0; i < 20; i++){
       	
       	if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(firstSeatCounterCam  == doluKoltuklar[k]) {
       		   	    	  varMi = 100;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	firstSeatCounterCam  = firstSeatCounterCam  + 4;
			   } else {
			   	printf("[ %d ]", firstSeatCounterCam );
			   	firstSeatCounterCam  = firstSeatCounterCam  + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
	   printf("\n");
	   
	   
	   // ilk seat koridor tarafý
	   int firstSeatCounterCoridor = 4;

	   for(int i = 0; i < 20; i++){
        if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(firstSeatCounterCoridor == doluKoltuklar[k]) {
       		   	    	  varMi = 10000;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	firstSeatCounterCoridor = firstSeatCounterCoridor + 4;
			   } else {
			   	printf("[ %d ]", firstSeatCounterCoridor);
			   	firstSeatCounterCoridor = firstSeatCounterCoridor + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
	   
	    printf("\n");
	    printf("\n");
	    
	    // ikinci seat koridor tarafi
	    
	    int secondSeatCounterCoridor = 2;

	   for(int i = 0; i < 20; i++){
        if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(secondSeatCounterCoridor == doluKoltuklar[k]) {
       		   	    	  varMi = 10000;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	secondSeatCounterCoridor = secondSeatCounterCoridor + 4;
			   } else {
			   	printf("[ %d ]", secondSeatCounterCoridor);
			   	secondSeatCounterCoridor = secondSeatCounterCoridor + 4;
			   }
			   
		   }
		   printf(" ");
 
	   }
	   printf("\n");
	   
	   //ikinci seat cam kenari
	    int secondSeatCounterCam = 1;

	   for(int i = 0; i < 20; i++){
        if(i % 2 == 0) {
       		int varMi = 0;
       		
       		   for(int k = 0; k < 20; k++) {
       		   	    if(secondSeatCounterCam == doluKoltuklar[k]) {
       		   	    	  varMi = 100;
						}
				  }
				  
			   if(varMi != 0) {
			   	printf("[ X ]");
			   	secondSeatCounterCam = secondSeatCounterCam + 4;
			   } else {
			   	printf("[ %d ]", secondSeatCounterCam);
			   	secondSeatCounterCam = secondSeatCounterCam + 4;
			   }
			   
		   }
		   printf(" ");

	}
	printf("\n");
	printf("\n");
	printf("\n");
	

	
	Atakan:
	
	
	
		int max;
		
		//tercih 1- 2- 3- 4- 5
		//seçim ekraný	
		printf("\n|1|--Sað cam kenarý için \n|2|--Sað koridor için \n|3|--Sol cam kenarý için\n|4|--Sol koridor için \n|5|--Programdan çýkmak için \n");
		
		printf("Seçiminiz > ");
		scanf("%d", &max);
		
		switch(max){
			case 1:{
				
			
				
				int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
				
				
			while(1){
				
				printf("\nSað cam kenarýný seçtiniz lütfen koltuk numarasýnýda seçin \n");
			//seçilen yerin buradaki yansýmasý cýstak fýstak...
			int sagCamKenari = 3;
			
			
			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(sagCamKenari == doluKoltuklar[j]) {
    						kontrol = 1;
						}
					}
					
					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {
					   printf(" [ %d ]", sagCamKenari);
					    doluOlmayanKoltuklar[counter] = sagCamKenari;
					    counter += 1;
			    	}
					
					

    				sagCamKenari = sagCamKenari + 4;
				}
				
				int secilenKoltuk;
				
				//Tekrar seçim yapman lazým hayat seçimlerle deðiþir....
				printf("\nSecmek istediginiz koltuk numarasýný yazýnýz : ");
				scanf("%d", &secilenKoltuk);
				
				if (secilenKoltuk % 4 != 3) {
        		printf("\nHatalý seçim! Sað cam kenarý koltuklarýndan birini seçmelisiniz.\n");
        		continue; //Hatalý seçimde yeniden denemen için [hayat için geçerli deðil]...
    			}

				
				//dolu mu deðil mi kontrolü
				int dolu = 0;
				
				for(int i = 0; i < 40; i++){
					
					if(secilenKoltuk == doluOlmayanKoltuklar[i]){
						dolu = 1;
						break;
					}
				}
				
				if(dolu == 0){
					 printf("\nSeçtiðiniz koltuk (%d) dolu. Lütfen baþka bir koltuk seçin.\n", secilenKoltuk);
					 continue;
				}
			
				
			//Cinsiyetin full cýstak kontrolü.
        	int solKoltuk = secilenKoltuk - 1;
        	int sagKoltuk = secilenKoltuk + 1;
        	int uyusmazlik = 0;
        	for (int i = 0; i < 40; i++) {
            if (doluKoltuklar[i] == solKoltuk || doluKoltuklar[i] == sagKoltuk) {
                if (cinsiyet[i] != kullaniciCinsiyet) {
                    printf("\nSeçtiðiniz koltuk (%d) yanýndaki koltuk ile cinsiyet uyumsuzluðu var. Lütfen baþka bir koltuk seçin.\n", secilenKoltuk);
                    uyusmazlik = 1;
                    break;
                }
            }
        }
        //Her þey tamamsa artýk rezerv edilmiþtir.
		if (uyusmazlik == 0) {
            printf("\nSeçtiðiniz koltuk (%d) rezerve edilmiþtir. Ýyi yolculuklar!\n", secilenKoltuk);
            doluKoltuklar[40] = secilenKoltuk;
            cinsiyet[40] = kullaniciCinsiyet;
            break;
        }
				
			}
			
			break;
		
		}
			case 2: {
				
			//Üstteki iþlemin tekrarlanmasý iþte...
			
			int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
			
			
			while(1){
				
				printf("\nSað koridor seçtiniz lütfen koltuk numarasýnýda seçin \n");
			
			int sagKorKenari = 4;
			
			
			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(sagKorKenari == doluKoltuklar[j]) {
    						kontrol = 1;
						}
					}
					
					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {
					   printf(" [ %d ]", sagKorKenari);
					    doluOlmayanKoltuklar[counter] = sagKorKenari;
					    counter += 1;
			    	}
					
					

    				sagKorKenari = sagKorKenari + 4;
				}
				
				int secilenKoltuk;
				
				
        		
				//seçim
				printf("\nSecmek istediginiz koltuk numarasýný yazýnýz : ");
				scanf("%d", &secilenKoltuk);
				
				if (secilenKoltuk % 4 != 0) {
        		printf("\nHatalý seçim! Sað koridor koltuklarýndan birini seçmelisiniz.\n");
        		continue; //Hatalý seçimde yeniden deneme
    			}

				
				//dolu mu deðil mi kontrolü
				int dolu = 0;
				
				for(int i = 0; i < 40; i++){
					
					if(secilenKoltuk == doluOlmayanKoltuklar[i]){
						dolu = 1;
						break;
					}
				}
				
				if(dolu == 0){
					 printf("\nSeçtiðiniz koltuk (%d) dolu. Lütfen baþka bir koltuk seçin.\n", secilenKoltuk);
					 continue;
				}
			
				
			//Cinsiyet kontrolü
        	int solKoltuk = secilenKoltuk - 1;
        	int sagKoltuk = secilenKoltuk + 1;
        	int uyusmazlik = 0;
        	
        	
        	for (int i = 0; i < 40; i++) {
            if (doluKoltuklar[i] == solKoltuk || doluKoltuklar[i] == sagKoltuk) {
                if (cinsiyet[i] != kullaniciCinsiyet) {
                    printf("\nSeçtiðiniz koltuk (%d) yanýndaki koltuk ile cinsiyet uyumsuzluðu var. Lütfen baþka bir koltuk seçin.\n", secilenKoltuk);
                    uyusmazlik = 1;
                    break;
                }
            }
        }
        
		if (uyusmazlik == 0) {
            printf("\nSeçtiðiniz koltuk (%d) rezerve edilmiþtir. Ýyi yolculuklar!\n", secilenKoltuk);
            doluKoltuklar[40] = secilenKoltuk;
            cinsiyet[40] = kullaniciCinsiyet;
            break;
        }
				
			}
			
			break;
		}
			case 3: {
				
			//Üstteki iþlemin tekrarlanmasý iþte...
			
			
			int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
			
			
			while(1){
				
				printf("\nSol cam kenarýný seçtiniz lütfen koltuk numarasýnýda seçin \n");
			
			int solCamKenari = 1;
			
			
			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(solCamKenari == doluKoltuklar[j]) {
    						kontrol = 1;
						}
					}
					
					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {
					   printf(" [ %d ]", solCamKenari);
					    doluOlmayanKoltuklar[counter] = solCamKenari;
					    counter += 1;
			    	}
					
					

    				solCamKenari = solCamKenari + 4;
				}
				
				int secilenKoltuk;
				
				//seçim
				printf("\nSecmek istediginiz koltuk numarasýný yazýnýz : ");
				scanf("%d", &secilenKoltuk);
				
				if (secilenKoltuk % 4 != 1) {
        		printf("\nHatalý seçim! Sol cam kenarý koltuklarýndan birini seçmelisiniz.\n");
        		continue; //Hatalý seçimde yeniden deneme
    			}

				
				//dolu mu deðil mi kontrolü
				int dolu = 0;
				
				for(int i = 0; i < 40; i++){
					
					if(secilenKoltuk == doluOlmayanKoltuklar[i]){
						dolu = 1;
						break;
					}
				}
				
				if(dolu == 0){
					 printf("\nSeçtiðiniz koltuk (%d) dolu. Lütfen baþka bir koltuk seçin.\n", secilenKoltuk);
					 continue;
				}
			
				
			//Cinsiyetin full cýstak kontrolü.
        	int solKoltuk = secilenKoltuk - 1;
        	int sagKoltuk = secilenKoltuk + 1;
        	int uyusmazlik = 0;
        	
        	
        	for (int i = 0; i < 40; i++) {
            if (doluKoltuklar[i] == solKoltuk || doluKoltuklar[i] == sagKoltuk) {
                if (cinsiyet[0] != kullaniciCinsiyet) {
                    printf("\nSeçtiðiniz koltuk (%d) yanýndaki koltuk ile cinsiyet uyumsuzluðu var. Lütfen baþka bir koltuk seçin.\n", secilenKoltuk);
                    uyusmazlik = 1;
                    break;
                }
            }
        }
        //Her þey tamamsa artýk rezerv edilmiþtir.
		if (uyusmazlik == 0) {
            printf("\nSeçtiðiniz koltuk (%d) rezerve edilmiþtir. Ýyi yolculuklar!\n", secilenKoltuk);
            doluKoltuklar[40] = secilenKoltuk;
            cinsiyet[40] = kullaniciCinsiyet;
            break;
        }
				
			}
			
			break;
		}
			case 4: {
				
			
			int doluOlmayanKoltuklar[100];
                for(int i = 0; i < 100; i++) {
                	doluOlmayanKoltuklar[i] = -15;
				}
				int counter = 0;
				
			
			while(1){
				
				printf("\nSol koridor seçtiniz lütfen koltuk numarasýnýda seçin \n");
			
			int solKorKenari = 2;
			
			
			for(int i = 0; i < 10; i++) {
    		
    				int kontrol = 0;
    				for(int j = 0; j < 40; j++) {
    					if(solKorKenari == doluKoltuklar[j]) {
    						kontrol = 1;
						}
					}
					
					if(kontrol == 1) {
						printf(" [ X ]");
			      	} else {
					   printf(" [ %d ]", solKorKenari);
					    doluOlmayanKoltuklar[counter] = solKorKenari;
					    counter += 1;
			    	}
					
					

    				solKorKenari = solKorKenari + 4;
				}
				
				int secilenKoltuk;
				
				
        		
				//seçim
				printf("\nSecmek istediginiz koltuk numarasýný yazýnýz : ");
				scanf("%d", &secilenKoltuk);
				
				if (secilenKoltuk % 4 != 2) {
        		printf("\nHatalý seçim! Sol koridor koltuklarýndan birini seçmelisiniz.\n");
        		continue; //Hatalý seçimde yeniden deneme
    			}

				
				//dolu mu deðil mi kontrolü
				int dolu = 0;
				
				for(int i = 0; i < 40; i++){
					
					if(secilenKoltuk == doluOlmayanKoltuklar[i]){
						dolu = 1;
						break;
					}
				}
				
				if(dolu == 0){
					 printf("\nSeçtiðiniz koltuk (%d) dolu. Lütfen baþka bir koltuk seçin.\n", secilenKoltuk);
					 continue;
				}
			
				
			//Cinsiyetin full cýstak kontrolü.
        	int solKoltuk = secilenKoltuk - 1;
        	int sagKoltuk = secilenKoltuk + 1;
        	int uyusmazlik = 0;
        	
        	
        	for (int i = 0; i < 40; i++) {
            if (doluKoltuklar[i] == solKoltuk || doluKoltuklar[i] == sagKoltuk) {
                if (cinsiyet[0] != kullaniciCinsiyet) {
                    printf("\nSeçtiðiniz koltuk (%d) yanýndaki koltuk ile cinsiyet uyumsuzluðu var. Lütfen baþka bir koltuk seçin.\n", secilenKoltuk);
                    uyusmazlik = 1;
                    break;
                }
            }
        }
        //Her þey tamamsa artýk rezerv edilmiþtir.
		if (uyusmazlik == 0) {
            printf("\nSeçtiðiniz koltuk (%d) rezerve edilmiþtir. Ýyi yolculuklar!\n", secilenKoltuk);
            doluKoltuklar[40] = secilenKoltuk;
            cinsiyet[40] = kullaniciCinsiyet;
            break;
        }
				
			}
			
			break;
		}
			case 5: 
			printf("Programdan çýkýþ yapýlýyor...");
			return 0;
			break;
			
			default: printf("Gecerli bir seçim yapýnýz....");
			goto Atakan;
				break;
		}
	
		
		
		
		
	}
	else if(strcmp(secim, "Hayýr") == 0 || strcmp(secim, "hayýr") == 0){
		
		printf("Programdan çýkýlýyor...");
		
	}
	else{
		
		printf("Geçersiz deðer girdiniz baþa yönlendiriliyorsunuz...");
		
		system("cls");
		
	}
	
}

