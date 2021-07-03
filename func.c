#include <stdio.h>

int main(){
    double F(int x) {
        double ans =  1 - (3 * x) / 2 + x**6 / 4 + (8 - x*x)**3;
        return ans;
    }
    double ans = F(2);
    double ans2 = F(5);
    printf("F(2) = %lf\n", ans);
    printf("F(5) = %lf\n", ans2);
    return 0;
}
