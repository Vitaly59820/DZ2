#include <iostream>

using namespace std;

int n, x, y;

struct str {
    char m[8][8];
	int extra;
};

str m1,m2,m3;

void prorisovka(str &ooo){
	for(int i = 0;i<n;i++)
	{
    for(int j = 0;j<8;j++)
    {
    if((j==7)){
    ooo.m[i][j] = '|';
    }
    else{
    ooo.m[i][j] = ' ';
    };
    };
	};
	ooo.extra = n-1;
	cout<<endl;
};
void mainprorisovka(){
    cout<<"       1                      2                        3"<<endl;
	for(int i = 0;i<n;i++)
	{
    for(int j = 0;j<8;j++)
    {
    cout<<m1.m[i][j];
    };
    cout<<"               ";
    for(int j = 0;j<8;j++)
    {
    cout<<m2.m[i][j];
    };
    cout<<"                 ";
    for(int j = 0;j<8;j++)
    {
    cout<<m3.m[i][j];
    };
    cout<<endl;
	};
    };
void hod(str &otkuda,str &kuda){
	for(int j =0;j<8;j++)
	{
    char uuu = otkuda.m[otkuda.extra+1][j];
    otkuda.m[otkuda.extra+1][j] = kuda.m[kuda.extra][j];
    kuda.m[kuda.extra][j] = uuu;
	};
	otkuda.extra++;
	kuda.extra--;
	mainprorisovka();
    };
int main()
{
	cout<<"Kolichestvo diskov"<<endl;
	cin>>n;
	for(int i = 0;i<n;i++)
	{
	for(int j = 0;j<8;j++)
	{
	if(j>= 7-i){
	m1.m[i][j] = '_';
	}
	else{
	m1.m[i][j] = ' ';
	};
	};
	};
	m1.extra = -1;
cout<<endl;
prorisovka(m2);
prorisovka(m3);
mainprorisovka();
while (1>0){
cout<<endl<<"Otkuda"<<endl;
cin>>x;
cout<<"Kuda"<<endl;
cin>>y;
if (x==1 && y==2){hod(m1,m2);};
if (x==1 && y==3){hod(m1,m3);};
if (x==2 && y==1){hod(m2,m1);};
if (x==2 && y==3){hod(m2,m3);};
if (x==3 && y==1){hod(m3,m1);};
if (x==3 && y==2){hod(m3,m2);};
};
return 0;
}
