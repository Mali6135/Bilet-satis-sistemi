#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
	srand(time(NULL));
	int secenek,i,dogru=0,kaldi_mi1=0,kaldi_mi2=0;
	char soru;
	int koltuk[10] = {0,0,0,0,0,0,0,0,0,0};
	basla:
	printf("Lutfen 'Birinci sinif' icin 1'e basiniz.\nLutfen 'Ekonomik sinif' icin 2'ye basiniz.\n");
	scanf("%d",&secenek);
	while(dogru==0){	
	if(secenek == 1){
		ilk:
		i=rand()%5+1;
		if(koltuk[i] == 1){
			if(kaldi_mi1+kaldi_mi2==10){
				printf("Maalesef bos koltuk kalmadi.Bir sonraki ucus 3 saat sonra olacaktir..\n");
				return 0;
			}			
			else if(kaldi_mi1==5){
				printf("Ekonomik siniftan koltuk ister misiniz?(E-e/H-h)");
				scanf("%s",&soru);				
				if(soru == 'E' || soru == 'e'){
					goto ikinci;
				}
				else if(soru == 'H' || soru == 'h'){
					printf("Bir sonraki ucus 3 saat sonra gerceklesecektir..\n");				
					return 0;
				}
			}
			else if(kaldi_mi1+kaldi_mi2==10){
				printf("Maalesef bos koltuk kalmadi.Bir sonraki ucus 3 saat sonra olacaktir..\n");
				return 0;
			}
			goto ilk;
		}
		else if(koltuk[i] == 0){
			kaldi_mi1++;			
			koltuk[i]=1;
			printf("%d numarali koltuktan birinci sinif bilet aldiniz..\n\n",i);
			goto basla;			
		}	
		}	
	else if(secenek == 2){
		ikinci:
		i=rand()%5+6;
		if(koltuk[i] == 1){
			if(kaldi_mi1+kaldi_mi2==10){
				printf("Maalesef bos koltuk kalmadi.Bir sonraki ucus 3 saat sonra olacaktir..\n");
				return 0;
			}			
			else if(kaldi_mi2==5){
				printf("Birinci siniftan koltuk ister misiniz?(E-e/H-h)");
				scanf("%s",&soru);
				if(soru == 'E' || soru == 'e'){
					goto ilk;
				}
				else if(soru == 'H' || soru == 'h'){
					printf("Bir sonraki ucus 3 saat sonra gerceklesecektir..\n");				
					return 0;
				}
				
			}
			else if(kaldi_mi1+kaldi_mi2==10){
				printf("Maalesef bos koltuk kalmadi.Bir sonraki ucus 3 saat sonra olacaktir..\n");
				return 0;
			}
			goto ikinci;
		}
		else if(koltuk[i] == 0){
			kaldi_mi2++;			
			koltuk[i]=1;
			printf("%d numarali koltuktan ekonomik sinif bilet aldiniz..\n\n",i);
			goto basla;			
		}	
	}
		
	}
}
