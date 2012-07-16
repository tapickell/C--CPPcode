__author__ = 'Todd Pickell'
# tried to add the header commetn you gave me but got errors for some reason
# this is just a Python version of the project1.cpp, I had some extra time to code
# and thought it would be neat to try, you could run this with ironPython in Visual Studio
# I created it with PyCharm on Mac though, haven't gotten too familiar with ironPython yet.
print 'C++ Programming Project #1 in Python\n'
userNum1 =input('Please enter first number: ')
userNum2 =input('Please enter second number: ')
print 'You entered ', userNum1, ' and ', userNum2
if userNum1 > userNum2:
    print userNum1, " is greater than ", userNum2
else:
    print userNum2, " is greater than ", userNum1
print "The sum of these numbers is: ", userNum1 + userNum2
print "The difference of these numbers is: ", userNum1 - userNum2
print "The product of these numbers is: ", userNum1 * userNum2
print "The quotient of these numbers is: ", float(userNum1) / float(userNum2)
print "This ends C++ Programming Project #1 redone in Python\nby Todd Pickell"