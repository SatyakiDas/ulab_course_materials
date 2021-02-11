#include <iostream>

using namespace std;
const int MAX_m=2005;
const int MAX_n=1005;
struct wormhole
{
    int x,y,t;
};
int des[MAX_n];
int m,n;
wormhole wh[MAX_m];

bool negloop()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            wormhole w=wh[j];
            if(des[w.y]>des[w.x]+w.t)
            {
                des[w.y]=des[w.x]+w.t;
                if(i==n-1)
                    return true;
            }
        }
    }
    return false;
}
int main()
{
    int c;
    cin>>c;
    while(c--)
    {
        cin>>n>>m;
        for(int i=0;i<m;i++){
            cin>>wh[i].x>>wh[i].y>>wh[i].t;
            }
        if(negloop())
        {
            cout<<"possible"<<endl;
        }
        else
        {
            cout<<"not possible"<<endl;
        }
    }
    return 0;
}
