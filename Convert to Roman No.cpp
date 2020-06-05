void convertToRoman(int n) 
{
    int a[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000}; 
    string s[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"}; 
    int i = 12,q;
    while(n){
        q = n/a[i];
        n = n%a[i];
        while(q--){
            cout<<s[i];
        }
        i--;
    }
}