N, Y = map(int, input().split())
for x in range(N + 1):
    for y in range(N + 1 -x):
        z = N - x - y
        if 0 <= N <= 2000 and 10000 * x + 5000 * y + 1000 * z == Y:
            print(x, y, z)
            exit()
print(-1, -1, -1)
