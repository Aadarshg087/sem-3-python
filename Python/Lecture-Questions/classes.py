# ************************* Class Syntax ************************************
# class Name:
#     pass


# *********************** Creating the object *********************************
# n = Name()
# print(n.atrr)


#  The values of those attributes are unique to the object
# A single class may have any number of instances

class Student:
    attrUni = "LPU"  # Global
    attrC = "CSE"   # Global

    def __init__(self, name):
        self.name = name

    def printClass(self):
        print("University name is:", self.attrUni)
        print("Degree name is:", self.attrC)
        print("Student name is:", self.name)


student1 = Student("Ajmer")
print(student1.attrUni)
student1.printClass()
