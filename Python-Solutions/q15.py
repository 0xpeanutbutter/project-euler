def count_path(size):
    #This uses the concept of Dynamic Programming
    mat = [[0 for i in range(size+1)] for j in range(size+1)]

    #Since the no of possible ways of reaching bottom right corner
    #from rightmost and bottommost points are 1 we set bottommost 
    #and rightmost cells of matrix to 1
    for i in range(size+1):
        mat[size][i] = 1
        mat[i][size] = 1

    #Now we move from penultimate bottom right corner towards left and then up
    #No. of possible way of reaching bottommost point from current cell is calculated as
    #the sum of  no. of ways from its right cell and no of ways from its down cell
    for i in range(size-1,-1,-1):
        for j in range(size-1,-1,-1):
            mat[i][j] = mat[i+1][j] + mat[i][j+1]
    
    return mat[0][0]

size = 20
#size = int(input())
print(f"No. of routes throgh a {size}x{size} grid = {count_path(size)}")