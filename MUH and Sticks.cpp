#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,a[100000],c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,m,n,o,p,q,r,c,baal=0;
    for(i=0;i<6;i++)
        cin>>a[i];

        m=a[0];
        n=a[1];
        o=a[2];
        p=a[3];
        q=a[4];
        r=a[5];



        for(i=0;i<6;i++)
        {
            if(a[i]==m)
                c1++;
            if(a[i]==n)
                c2++;
            if(a[i]==o)
                c3++;
                if(a[i]==p)
                c4++;
            if(a[i]==q)
                c5++;
            if(a[i]==r)
                c6++;


        }
      ///  cout<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<" "<<c5<<" "<<c6<<endl;;
        c=c1+c2+c3+c4+c5+c6;
        if(c1>=4)
            baal++;
        if(c2>=4)
            baal++;
             if(c3>=4)
            baal++;
        if(c4>=4)
            baal++;
             if(c5>=4)
            baal++;
        if(c6>=4)
            baal++;

          ///  cout<<"baal"<<baal<<endl;

        if(c==20 && baal>=4)
            cout<<"Elephant";
             else if(c==36 && baal>=4)
            cout<<"Elephant";
        else if(c==18 && baal>=4)
            cout<<"Bear";
        else if(c==26 && baal>=4)
            cout<<"Bear";
        else
            cout<<"Alien";

}
