#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define n 20

using namespace std;

int main()

{
int pop[n][n], peso[n], ptotal = 0, i, j, k;
float prob, prel;

srand((unsigned)time(NULL));

for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        pop[i][j] = 0;
    }
}

for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        pop[i][j] = 1;
        pop[j][i] = 1;
            if(i==j){
                pop[i][j] = 0;
            }
    }
}

for(k=3;k<n;k++){

for(i=0;i<n;i++){
    peso[i] = 0;
    cout << peso[i] << " ";
}
cout << endl;

for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        if(pop[i][j] == 1);
            peso[i] = peso[i] + 1;
    }
}

for(i=0;i<n;i++){
    cout << peso[i] << " ";
}

for (i=0;i<n;i++){
    ptotal = ptotal + peso[i];
}

cout << "o peso total da " << k-2 << " rodada e: " << ptotal << endl;

for(j=0;j<n;j++){
    prob = (rand()%1000)/1000;
    prel = (double)peso[j]/(double)ptotal;
        if(prob<=prel){
            pop[k][j] = 1;
            pop[j][k] = 1;

        }
        if(k==j) {
            pop[k][j] = 0;
        }

}

for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        cout << pop[i][j];
    }
cout << endl;
}

}

}



