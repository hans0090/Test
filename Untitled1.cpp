/* HDU1863 ???? */
 
#include <iostream>
#include <queue>
#include <stdio.h>
 
using namespace std;
 
const int N = 100;
int f[N + 1], cnt;
 
void UFInit(int n)//��ʼ�� 
{
    for(int i = 1; i <=n; i++)
        f[i] = i;
    cnt = n;
}
 
int Find(int a) {//���� ���鼯 
    return a == f[a] ? a : f[a] = Find(f[a]);
}
 
bool Union(int a, int b)// /�ϲ� ���鼯 
{
    a = Find(a);
    b = Find(b);
    if (a != b) {
        f[a] = b;
        cnt--;
        return true;
    } else
        return false;
}

struct edge {// 
    int src, dest, cost;
    bool operator < (const edge& n) const {//���������� ��������������бȽϴ�С 
        return cost > n.cost;
    }
};

int main()
{
    edge e;
    int n, m;
 
    while(scanf("%d%d", &n, &m) != EOF && n) {
        priority_queue<edge> q;     // ������� 
 
        UFInit(m);
 
        // ��ʼ��ͼ 
        while(n--) {
            scanf("%d%d%d", &e.src, &e.dest, &e.cost);
            q.push(e);
        }
 
        // Kruskal�㷨����С�� 
        int ans=0, count=0;
        while(!q.empty()) {
            e = q.top();
            q.pop();
 
            if(Union(e.src, e.dest)) {
                count++;
                ans += e.cost;
            }
 
            if(count == m - 1)
                break;
        }
 
        // ��������� 
        if(cnt == 1)
            printf("%d\n", ans);
        else
            printf("?\n");
    }
 
    return 0;
}
 

