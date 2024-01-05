int TotalWays(int n)
	{
	    if(n==1) return 4;
	    else if(n==2) return 9;
	    int m=1e9+7;
	    long long x=3,y=2,t;
	    while(n>2){
	        n-=1;
	        t=y;
	        y=x;
	        x=(x+t)%m;
	    }
	    return ((x%m)*(x%m))%m;
	}
