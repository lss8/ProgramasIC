#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 1000

using namespace std;

int main()
{
    int i, j, z, c ;
    int nos[n][n] ;
    float prob, p ;
    char resp ;

    srand((unsigned)time(NULL));

    do {
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            nos[i][j] = 0 ;
        }
    }

    cout << "Defina o valor de Z" << endl ;
    cin >> z ;
    prob = (float)z/float(n) ;

    c = 0 ;
    for (i=0;i<n;i++) {
        for (j=c;j<n;j++) {
            if (i == j) {
                nos[i][j] = 0 ;
            }
            else {
                if (nos[i][j] == 0) {
                    p = rand()%1001 ;
                    p = p/double(1000) ;
                    if (p <= prob) {
                        nos[i][j] = 1 ;
                        nos[j][i] = 1 ;
                    }
                }
            }
        }
        c++ ;
    }

    cout << prob << endl ;

    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            /*if (nos[i][j] == 0) {
            printf("\033[22;34m%d ", nos[i][j]);
            }*/
            if (nos[i][j] == 1) {
            //printf("\033[22;31m%d ", nos[i][j]);
            c++ ;
            }
        }
        //cout << endl ;
    }

    printf("\033[22;37m%d\n", c);

    cout << "Deseja executar novamente?" << endl ;
    cin >> resp ;

    } while (resp == 's' || resp == 'S') ;

    return 0 ;
}
