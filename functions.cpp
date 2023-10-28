#include<iostream>
using namespace std;
int getsum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        if(i%2==0){
        sum=sum+i;
        }
       

    }
    return sum;
}
int main(){
    int n;
     cout<<"enter the value of n";
     cin>>n;
     int p=getsum(n);
cout<<"sum upto "<<n<<" is "<<p;
}


/***************************          AREA OF CIRCLE                 ************************/

#include<iostream>
using namespace std;
int areaofcircle(int r){
    int ans;
    ans=3.14*r*r;
    return ans;

}
int main(){
    int r;
   cout<<"enter the radius"<<endl;
   cin>>r;
   int x=areaofcircle(r);
   cout<<"area of circle "<<x;

}


//****************************        EVEN ODD        ************************/


#include<iostream>
using namespace std;
int evenOrodd(int t){
    int ans;
    if(t%2==0){
        ans =1;
    }
    else{
        ans=0;
    }
    return ans;
}
int main(){
    int x;
    cout<<"enter the number"<<endl;
    cin>>x;
   int  p=evenOrodd(x);
   if(p==1){
    cout<<"even number";
   }
   else{
    cout<<"odd number";
   }
}



//*********************            FACTORIAL                *******************/


#include<iostream>
using namespace std;
int factorial(int x){
    int ans=1,i;
    for(i=1;i<=x;i++){
    ans=i*ans;
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    cout<<"factorial is "<<factorial(n);
}




/*********************        PRIME NUMBER        ************************/

#include<iostream>
using namespace std;
bool PrimeNumber(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
}
    int main(){
        int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int p= PrimeNumber(n);
    if(p==1){
        cout<<"prime number"<<endl;
    }else{
        cout<<"not a prime number";
    }
}


/*******************************  PRIME FROM 1 TO N ******************************/




#include<iostream>
using namespace std;
bool PrimeNumber(int n){
   

   
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
        else{
            return 1;
        }
    }
    }

    int main(){
        int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    if(n>=2){
cout<<2<<endl;
    }
    for(int i=2;i<n;i++){
        int p= PrimeNumber(i);
    if(p==1){
        cout<<i<<endl;
    }
    // else{
    //     cout<<"not a prime number"<<endl;
    // }
    }
    
}


/**********************   TEMPERATURE     ******************/



#include<iostream>
using namespace std;
int TempInKelvin(int c){
    float p;
p=c+273.15;
return p;
}
int TempInfahrenheit(int c){
float p;
p=(c*1.8)+32;
return p;
}
int main(){
    int t,x;
    cout<<"enter the temperature"<<endl;
    cin>>t;
    cout<<"1 for fahrenheit 2 for kelvin scale"<<endl;
    cin>>x;
    if(x==1){
    cout<<"temperature in fahrenheit is "<<TempInfahrenheit(t)<<endl;

    }
    else if(x==2){
            cout<<"temperature in kelvinis "<<TempInKelvin(t)<<endl;
    }
    else{
        cout<<"enter valid"<<endl;
    }
    }



/**********************     REVERSE NUMBER       *****************/


#include<iostream>
#include<math.h>
using namespace std;
int reversenumber(int n){
    int count=0,k;
    k=n;
    while(n){
        count++;
      n=n/10;
    }
     count = count-1;
    int p=0,sum=0;
    while(k){
     
        p=k%10;
        sum=p*pow(10,count)+sum;
        count--;
        k=k/10;
    }
    return sum;
}
int main(){
    int n;
    cin >>n;
int x= reversenumber(n);
cout<<x;
}