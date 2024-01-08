for _ in range(int(input())):
    n=int(input())
    c=0
    for i in range(1,n+1):
        t=i
        while(t):
        
            if(t&1): c+=1;
            t>>=1
        
    
    print(c)
