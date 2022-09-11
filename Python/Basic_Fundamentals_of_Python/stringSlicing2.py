#program to slice userName and Domain from user Email
# for eg. user name: USERNAME123 and DomainNAme: MAIL for EmailAdress: EMAIL123@MAIL.com

#input the email of user
email = input("Enter ur email ID: ")
# for eg. khushal99Grover@gmail.com




# slice the name from input email
userName = email[:email.index("@"):]
# userName = khushal99Grover


# slice the domain from the input email
Domain = email[email.index("@") + 1 :email.index("."):]
# domain = gmail

# print the result
print("Your userId is {} and your are using {} domain!! ".format(userName, Domain))