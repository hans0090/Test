/* HDU1863 ???? */
 
#include <iostream>
#include <queue>
#include <stdio.h>
 
using namespace std;
 
const int N = 100;
int f[N + 1], cnt;
 
void UFInit(int n)//初始化 
{
    for(int i = 1; i <=n; i++)
        f[i] = i;
    cnt = n;
}
 
int Find(int a) {//查找 并查集 
    return a == f[a] ? a : f[a] = Find(f[a]);
}
 
bool Union(int a, int b)// /合并 并查集 
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
    bool operator < (const edge& n) const {//操作符重载 用来在先序队列中比较大小 
        return cost > n.cost;
    }
};

int main()
{
    edge e;
    int n, m;
 
    while(scanf("%d%d", &n, &m) != EOF && n) {
        priority_queue<edge> q;     // 先序队列 
 
        UFInit(m);
 
        // 初始化图 
        while(n--) {
            scanf("%d%d%d", &e.src, &e.dest, &e.cost);
            q.push(e);
        }
 
        // Kruskal算法求最小边 
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
 
        // 如果能连成 
        if(cnt == 1)
            printf("%d\n", ans);
        else
            printf("?\n");
    }
 
    return 0;
}
 

