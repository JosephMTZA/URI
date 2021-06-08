#include <bits/stdc++.h>
using namespace std;
double a,b,c, raiz1, raiz2, raizC, multi, division;

int main(){
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0.0) {
        printf("Impossivel calcular\n");
    }else{
        multi = (pow(b, 2) - 4* a * c);
        if (multi < 0){
            printf("Impossivel calcular\n");
            return 0;
        }
        raizC = pow(multi,0.5);
        division = a*2;
        raiz1 = (-b-raizC)/division;
        raiz2 = (-b+raizC)/division;
        printf("R1 = %.5lf\n", raiz2);
        printf("R2 = %.5lf\n", raiz1);
    return 0;
    }
}