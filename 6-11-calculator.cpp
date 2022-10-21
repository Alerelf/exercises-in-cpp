#include<iostream>
using namespace std;
class Cd {
private:
long a,b,c,e,g;
short d;
public:
 Cd(): a(0),b(0),c(1),e(0),g(0),d(0){}

long set(){

cout<<"\nВведите целую часть ";cin>>a;
cout<<"\nВведите числитель (целое число): ";cin>>b;
cout<<"\nВведите знаменатель неравный 0: ";cin>>c;
while(c==0){
if(d>0)return 0;
cout<<"\nВведите знаменатель неравный 0. У вас 1 попытка.\n";
cin>>c;d++;
}
//dcg
for(long i=c;i>0;i--){
if(b%i==0 && c%i==0){
b=b/i;c=c/i;
}}
if(b>c){
a+=b/c;b=b%c;
}
return 0;
}

void get(){

for(long i=c;i>0;i--){
if(b%i==0 && c%i==0){
b=b/i;c=c/i;
}}

cout<<"Результат: ";
if(b<c){
if(a!=0)cout<<a<<" целая(ых) ";
if(a==0 && b==0)cout<<b;
if(b!=0)cout<<b<<"/"<<c<<endl;
}

if(b>=c){a+=b/c;b=b%c;
cout<<a<<" целая(ых)";
if(b!=0)cout<<" "<<b<<"/"<<c;
}
}

Cd x(Cd f){
Cd v;
v.a=a+f.a;
//складывать ли 0и?
if (c==f.c){
v.b=b+f.b;
v.c=c;
} else {
v.b=b*f.c+f.b*c;
v.c=c*f.c;
}
return v;
}

Cd s(Cd f){Cd v;
v.a=a-f.a;
if(c==f.c){
v.b=b-f.b;v.c=c;
}else{
v.b=b*f.c-f.b*c;v.c=c*f.c;
}
return v;
}

Cd m(Cd f){
Cd v;
if(a>0)e=a*c+b;else e=b;
if(f.a>0)g=f.a*f.c+f.b;else g=f.b;
v.b=e*g;
if(c==f.c)v.c=c*c;
else v.c=c*f.c;
return v;
}

Cd k(Cd f){
Cd v;
if(a>0)e=a*c+b;else e=b;
if(f.a>0)g=f.a*f.c+f.b;else g=f.b;
v.b=e*f.c;
v.c=g*c;
return v;
}

};

int main(){

Cd a,b,c;

short j=1,m=1;char o;

cout<<"Добро пожаловать в калькулятор дробей."
<<"\nВведите две дроби: ";a.set();b.set();
while(j>0){
cout<<"\nВыберите операцию:"
<<"\n + сумма, - разность,"
<<"\n * произведение или / деление.\n";
cin>>o;switch(o){
case '+':c=a.x(b);c.get();break;
case '-':c=a.s(b);c.get();break;
case '*':c=a.m(b);c.get();break;
case '/':c=a.k(b);c.get();break;
default:cout<<"Попробуйте ещё\n";break;
}
cout<<"\nХотите операции с дробями ещё? Y/n(1 or 0).\n";
cin>>j;
if(j>0){
cout<<"\nС этими же дробями? Y/n(1 or 0).\n";
cin>>m;
if(m==0){
cout<<"Введите две дроби: ";
a.set();b.set();
}}} 
return 0;
}