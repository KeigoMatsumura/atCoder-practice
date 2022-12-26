N = int(input())
A = list(map(int, input()).split())

mod = 10**9+7
A.sort()

def check(A):
    length = len(A)
    if length %2 == 0:
        for i in range(length//2):
            if A[2*i] == A[2*i+1] == 2*i+2:
                continue
            else:
                return False
        return True
    else:
        for i in range(length//2+1):
            if i == 0:
                if A[0]==0:
                    continue
                else:
                    return False
            else:
                if A[2*i-1]==A[2*i]==2*i:
                    continue
                else:
                    return False
        return True
        
def cnt(A):
    length=len(A)
    if check(A):
        print(2**(length//2)%mod)
    else:
        print(0)
cnt(A)