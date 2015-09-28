#include "stdio.h"
#include "math.h"
int main()
{
float a, b, c, D, X, X1, X2, XRiil, XImajiner;
printf("raika syadad\n");
printf("D400150002\n");
printf("Perhitungan akar-akar persamaan aX2+bX+c=0\n");
printf("Masukan Nilai Koefisien a = ");scanf("%f",&a);
printf("Masukan Nilai Koefisien b = ");scanf("%f",&b);
printf("Masukan Nilai Koefisien c = ");scanf("%f",&c);
D = b*b-4*a*c;
printf("Diskriminan = %g\n", D);
printf("Akar persamaan %gX2 + %gX + %g = 0 adalah:\n", a, b, c);
if (D > 0) {
X1 = (-b+sqrt(D))/(2*a);
X2 = (-b-sqrt(D))/(2*a);
printf("X1 = %g\n", X1);
printf("X2 = %g\n", X2);
}
else if (D == 0) {
X = -b/(2*a);
printf("X1 = X2 = %g\n", X);
}
else {
XRiil = -b/(2*a);
XImajiner = sqrt(-D)/(2*a);
printf("Akar imajiner:\n");
printf("X1 = %g+%g*i\n", XRiil, XImajiner);
printf("X2 = %g-%g*i\n", XRiil, XImajiner);
}

return 0;
}
