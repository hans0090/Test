
#include <iostream>
 
using namespace std;
 
const int MOD = 100;
 
int main()
{
    int a, b, min;
 
    while(cin >> a >> b) {
        if(a == 0 && b == 0)
            break;
 
        // ������С�Ĵ�
        min = (b - a * MOD % b) % b;
 
        // ѭ��������
        for(int i=min; i<MOD; i+=b) {
            if(i != min)
                printf(" ");
            printf("%02d", i);
        }
        printf("\n");
    }
 
    return 0;
}
