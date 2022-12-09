import numpy as np
# 1 D
arr = np.array([1,2,3,5,6])

# 2 D
arr_A = np.array([[1,2,3],[3,5,57]])
arr_B = np.array([[1,1,1],[2,2,2]])
# arr_C = np.array([[3,3,3],[4,4,4]])
arr_B[1][1] = 100
a = np.arange(10) #0, 1, 2, ... n-1
b = np.arange(2, 21, 2) # 2 , 4 ,6 ,6... 20

# c = np.linspace(0,1,6) # start, end, num-points
# d = np.linspace(1,20) # start, end, num-points
# e = np.ones((2,1))
f = np.eye(3)
# print(c)
# print(d)
# print(e)
print(f)


print("Array A is " , arr_A)
print("Array B is " , arr_B)
# print("Array c is " , arr_C)
print("sum of array is:\n " , np.add(arr_A, arr_B))
print("subtraction of array is:\n " , np.subtract(arr_A, arr_B))
print(a)
print(b)
