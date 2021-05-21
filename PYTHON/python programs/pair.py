a=[25, 45, 60, 10, 13, 57]
for i in range(len(a)):
    for j in range(i+1, len(a)):
        if a[i]+a[j]==70:
            print(list((a[i], a[j])))
        elif a[i]+a[j]<70:
            print(list(((a[i], a[j]), (a[i]+a[j]-70))))