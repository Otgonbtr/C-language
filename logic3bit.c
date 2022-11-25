#include<stdio.h>
#include<string.h>
int logic3bit(char *n){
    /*
    oroltod 000, 001, 010, 011, 100, 101, 111 gesen utga orj irehed 
    2 oron ni 1 baival 1 gesen utga butsaah function.

    Body:
    ----------------------
    "for" davtalt ni 3 udaa hiigdene "i" ni 0-s ehlene.
    ingehdee "if" nuhtsuluur garaas orj irsen toonii "i"-dah element ni 1 bna uu? 
    gedgiig shalgaad unen baival "count"-iin utgiig 1-eer nemegduulne.
    ----------------------
    return:
    ----------------------
    davtalt duussnii daraa "if" nuhtsuluur "count"-iin utgiig 2-toi tentsuu, 
    esvel 2-oos ih bna uu? gedgiig shalgaad unen baival "return 1"-iig butsaana.
    ugui bol 0-iig butsaana.   
    */
   int i,count=0;
   for(i=0; i<3; i++){ // 3-n udaa hiigdene.
    if(n[i]=='1'){     // oroltiin utgiin index bureer guine.
        count++;       // 1 baih bolgond 1-eer nemegdene.
    }
   }
   if(count>=2){  // 2 ymu tuunees ih baival 1 gesen utga butsaana.
    return 1;
   }else{         // ugui bol 0 iig butsaana.
    return 0; 
   }
}


int main(){
    char n[3];                  // oroltiin utga hadgalah sanah oi nuutsluh.
    scanf("%s",&n);             // n-iin utga buyu 000, 001 g.m utga garaas avah.
    int y = logic3bit(n);       // logic3bit() function-luu oroltiin utga 
                                // damjuulaad garaltiig ni y-d hadgalah.
    printf("%d",y);             // garaltiig hevleh.
}