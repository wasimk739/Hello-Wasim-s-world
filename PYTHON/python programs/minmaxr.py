import random
def minmax1(x):
    # this function fails if the list length is 0
    minimum = maximum = x[0]
    for i in x[1:]:
        if i < minimum:
            minimum = i
        else:
            if i > maximum: maximum = i
    return (minimum, maximum)
x=random.sample(range(20, 50), 10)
print(x)
a=minmax1(x)
print(a)