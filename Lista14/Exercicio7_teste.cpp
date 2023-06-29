#include<iostream>

#include<cstdio>

#include<cstdlib>

using namespace std;


main(){

    int a[3][3] {{4,5,7},{2,7,8},{3,1,0}};

    int b[3][3] {{1,2,4},{4,5,6},{7,1,1}};

    int m[3][3];

    int l, c, k;

    for(l = 0 ; l < 3; l++){

        for(c = 0; c < 3; c++){

            m[l][c] = l + c - 1;

            for(k = 0; k < 3; k++){
                m[l][c] = m[l][c] + a[l][k] * b[k][c];
            }

        }

    }


    for(l = 0; l < 3; l++){

        for(c = 0; c < 3; c++){
            cout << m[l][c] << "\t";

        }
        cout << "\n";
    }

}
