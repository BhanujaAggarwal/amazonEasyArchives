long long thirdLargest(long long a[], long long n)
{
     if(n<3) return -1;
     int o=0,tw=0,th=0;
     for(int i=1;i<n;i++){
         if(a[i]>a[o]) o=i;
     }
     for(int i=0;i<n;i++){
         if(a[i]>a[tw] and i!=o) tw=i;
     }
     for(int i=0;i<n;i++){
         if(a[i]>a[th] and i!=o and i!=tw) th=i;
     }
     return a[th];
}