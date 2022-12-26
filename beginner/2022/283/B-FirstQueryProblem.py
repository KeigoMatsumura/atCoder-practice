n = int(input())
A = list(map(int, input().split()))
q = int(input())
query = [list(map(int, input().split())) for l in range(q)]


# print(n)
# print(A)
# print(q)
# print(query)

for i in range(q):
    # print(query[i][i])
    if query[i][0] == 1:
        # print("code1")
        A[query[i][1]-1] = query[i][2]
    elif query[i][0] == 2:
        # print("code2")
        print(A[query[i][1]-1])
