def myfunc(a, b):
  #print(a)
  #print(b)
  #print(a+b)
  return a+b

x = map(myfunc, ('apple', 'banana', 'cherry'), ('orange', 'lemon', 'pineapple'))

print(x)

#convert the map into a list, for readability:
print(list(x))
