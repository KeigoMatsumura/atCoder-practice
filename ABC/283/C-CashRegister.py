s = input()

zerocount = 0
scp = s

for i in range(len(s)):
    if scp.find("00") != -1 and s.find("00")+2 <= len(s):
        i = s.find("00") + 2
        zerocount += 1
        scp = scp[i:]
        # print(scp)

print(len(s) - int(zerocount))


