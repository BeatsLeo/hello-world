#include<stdio.h>
int main(){
	char in[50];
	char arr[100]="╬╘╫Р╩╕сЕципб╡ьдЧ╧П╦ш╟д╨з╪╙аи╫З╪╫гЮбЁт╔кумНуЦцЖ╦соФ╤УтагМ╦йиб╧Стф╢╗╧ря╖╬╞й╧аЛс╕╪╠";
    char utf[1000]="E4BAACE6B4A5E6B2AAE6B89DE89299E696B0E8978FE5AE81E6A182E6B8AFE6BEB3E9BB91E59089E8BEBDE6998BE58680E99D92E9B281E8B1ABE88B8FE79A96E6B599E997BDE8B5A3E6B998E98482E7B2A4E790BCE79498E99995E8B4B5E4BA91E5B79DE68C82E5ADA6E8ADA6E4BDBFE9A286E5BA94E680A5";
    scanf("%s",&in);
    int flag=0;
      while(flag<50){
    	for(int l=0;l<100;l++){
    	if(in[flag]==arr[l]&&in[flag+1]==arr[l+1]){
    		printf("%c%c%c%c%c%c",utf[l*3],utf[l*3+1],utf[l*3+2],utf[l*3+3],utf[l*3+4],utf[l*3+5]);
			flag+=2;
			continue; 
                           	}
   }
 printf("%c",in[flag]);
 flag++;
    	if(!((in[flag]))|0){
    				return 0;
				}}}
