#include <bits/stdc++.h>
using namespace std;

int t, population, pa, pb, j, temp, temp2;
double g1, g2, porcentajea, porcentajeb;
int main(){
    scanf("%d", &t);
    while(t < 1 || t > 3000){
        scanf("%d", &t);
    }


    for (int i = 0; i < t; i++){
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        //while(pa < 100 || pa > 1000000 || pb < 100 || pb > 1000000 || pa > pb || g1 < 0.1 || g1 > 10.0 || g2 < 0.0 || g2 > 10.0 || g2 > g1){
          //  scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        //}
        j = 0;
        porcentajea = g1/100;
        porcentajeb = g2/100;
        

        while (pa <= pb){
            temp = porcentajea*pa;
            
            temp2 = porcentajeb*pb;
        
            pa += temp;
            
            pb += temp2;
          
            j++;
            if (j > 100){
                break;
            }
        }
        if (j>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", j);
        } 
    }
    return 0;
}

