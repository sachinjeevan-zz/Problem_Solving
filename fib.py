def fib(n,lis):
    if(n<=1):
        lis[n] = n
        return lis[n]
    else:
        a = fib(n-1,lis) if lis[n-1]==-1 else lis[n-1]
        b = fib(n-2,lis) if lis[n-2]==-1 else lis[n-2]
        lis[n] = a+b
        return lis[n]
n = int(input())
lis = [-1]*(n+1)
print(fib(n,lis))
