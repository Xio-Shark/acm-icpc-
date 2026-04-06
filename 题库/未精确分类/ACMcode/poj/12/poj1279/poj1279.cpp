#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
using namespace std;
#define EPS 1e-10
const int MAXN = 1505;
struct Point{
    double x,y;
    Point(){}
    Point(double _x,double _y):x(_x),y(_y){}
    void input(){
        scanf("%lf%lf",&x,&y);
    }
};
Point points[MAXN],p[MAXN],q[MAXN];
int n;
int cCnt,curCnt;
inline void getline(Point x,Point y,double &a,double &b,double &c){
     a = y.y - x.y;
    b = x.x - y.x;
    c = y.x * x.y - x.x * y.y;
}
inline void initial(){
    for(int i = 1; i <= n; ++i)p[i] = points[i];
    p[n+1] = p[1];
    p[0] = p[n];
    cCnt = n;
}
inline Point intersect(Point x,Point y,double a,double b,double c){
     double u = fabs(a * x.x + b * x.y + c);
    double v = fabs(a * y.x + b * y.y + c);
    return Point( (x.x * v + y.x * u) / (u + v) , (x.y * v + y.y * u) / (u + v) );
}
inline void cut(double a,double b ,double c){
    curCnt = 0;
    for(int i = 1; i <= cCnt; ++i){
        if(a*p[i].x + b*p[i].y + c >= 0)
            q[++curCnt] = p[i];
        else {
            if(a*p[i-1].x + b*p[i-1].y + c > 0){
                q[++curCnt] = intersect(p[i],p[i-1],a,b,c);
            }
            if(a*p[i+1].x + b*p[i+1].y + c > 0){
                q[++curCnt] = intersect(p[i],p[i+1],a,b,c);
            }
        }
    }
    for(int i = 1; i <= curCnt; ++i)p[i] = q[i];
    p[curCnt+1] = q[1];p[0] = p[curCnt];
    cCnt = curCnt;
}
double solve(){
    initial();
    for(int i = 1; i <= n; ++i){
        double a,b,c;
        getline(points[i],points[i+1],a,b,c);
        cut(a,b,c);
    }
    double area = 0;
    for (int i = 1; i <= curCnt; i++)
        area += p[i].x * p[i+1].y - p[i+1].x * p[i].y;
    return fabs(area / 2.0);
}
int main(){
    int T;
    scanf("%d", &T);
    while (T--){
        scanf("%d",&n);
        for(int i = 1; i <= n; ++i)
            points[i].input();
        points[n+1] = points[1];
        printf("%.2f\n",solve());
    }
    return 0;
}

