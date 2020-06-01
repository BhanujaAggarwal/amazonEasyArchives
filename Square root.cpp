long long int floorSqrt(long long int x) 
{
    if(x==0) return 0;
    if(x<4) return 1;
    for(int i=2;i<x;i++){
        if(i*i==x) return i;
        if(i*i>x) return i-1;
    }
    // Your code goes here  
}