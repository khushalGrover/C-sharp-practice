# logic to check leap is:
#   on ever year that is evenly divisible by 4
#       except every yesr that is evenly is divisible by 100
#           unless the year is also evenly divisible by 400

year = int(input("Enter year to check: "))

if year % 4 == 0:
    # print("may be this is leap year bcz divided by 4")
    if year % 100 == 0 :
        # print("may be now bcz of divided by 100")
        if year % 400 == 0:
            print("YES LEAP YEAR!!!")
        else:
            print("NOT LEAP YEAR")
    else:
        print("YES LEAP YEAR")
else:
    print("NOT LEAP YEAR")