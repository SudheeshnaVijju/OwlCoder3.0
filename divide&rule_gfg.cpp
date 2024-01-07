class Solution{
    public:
    long numOfWays(int n)
    {
        //Write Code Here
        if(n%2 || n<=4) return 0;
        if(n%4==0) return ((n/4)-1)*6;
        n=n/2;
        return (n-1)*3;
    }
};
