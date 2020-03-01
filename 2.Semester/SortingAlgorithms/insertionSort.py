def insertionSort (tab):
    N = len(tab)
    for i in range(N):
        key = tab[i]
        k = i-1
        while k >= 0 and tab[k] > key:
            tab[k+1] = tab[k]
            k -= 1

        tab[k+1] = key


table = [32,4,54,3,23,5,6,76,54,3423,4,6]

print(table)

insertionSort(table)

print(table)
