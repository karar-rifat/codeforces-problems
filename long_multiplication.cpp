#include <iostream>
using namespace std;

int main(){
    int test;
    cin >> test;
    while(test>0){
        int k, q;
        cin >> k >> q ;
        int rule[k];
        int players[q];
        for(int i=0; i<k; i++){
            cin >> rule[i] ;
        }

        for(int i=0; i<q; i++){
            cin >> players[i] ;
        }

        for(int p : players){
            bool goNext = true;
            int counter = 0;
            while(goNext){
                for(int r : rule){
                    if(p<r){
                        break;
                    }
                    else if (p>=r){
                        counter += 1;
                    }
                }
                p -= counter;
                goNext = p >= rule[0] ? true : false;
                counter = 0;
            }

            cout << p << '\n';
        }


        test--;
    }

    return 0;
}