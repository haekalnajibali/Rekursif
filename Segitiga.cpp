//HaekalNajibAli
//G1A021052
//InformatikaB

#include <iostream>
using namespace std;

void printn(int jumlah)
{
    if (jumlah == 0)
        return;
    cout << "* ";
    printn(jumlah - 1);
}
 
void segitiga(int n, int i){
    if (n == 0)
        return;
    printn(i);
    cout << endl;
    segitiga(n - 1, i + 1);
}
int main()
{
    int n;
    printf("masukkan jumlah segitiga : ");
    cin>>n;
    segitiga(n, 1);
    return 0;
}