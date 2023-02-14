#
#
#

done = 0

csMajors = 0
dataMajors = 0
cyberMajors = 0
otherMajors = 0
totalMajors = 0

dataMinors = 0
cyberMinors = 0
mathMinors = 0
otherMinors = 0

while done == 0:
    major = input("Enter major: ")
    if major.lower().__eq__("done"):
        done = 1
    elif major.lower().__eq__("cs"):
        csMajors += 1
        minor = input("Enter minor: ")

        if minor.lower().__eq__("data"):
            dataMinors += 1
        elif minor.lower().__eq__("cyber"):
            cyberMinors += 1
        elif minor.lower().__eq__("math"):
            mathMinors += 1
        else:
            otherMinors += 1
    elif major.lower().__eq__("data"):
        dataMajors += 1
    elif major.lower().__eq__("cyber"):
        cyberMajors += 1
    else:
        otherMajors += 1

totalMajors = csMajors+dataMajors+dataMajors+otherMajors

csMajorPercent = (csMajors/totalMajors)*100
dataMajorPercent = (dataMajors/totalMajors)*100
cyberMajorPercent = (cyberMajors/totalMajors)*100
otherMajorPercent = (otherMajors/totalMajors)*100

dataMinorPercent = (dataMinors/csMajors)*100
cyberMinorPercent = (cyberMinors/csMajors)*100
mathMinorPercent = (mathMinors/csMajors)*100
otherMinorPercent = (otherMinors/csMajors)*100

csString = "Computer Science"
cyberString = "Cyber Security"
dataString = "Data Science"
mathString = "Mathematics"
otherString = "Other Majors"
otherMinorsString = "Other Minors"

print(f"Total number of students: {totalMajors}")

print("\nMajors of students in CS160")

print(f"{csString:<20} {csMajors:>3} {csMajorPercent:>10.2f}")
print(f"{cyberString:<20} {cyberMajors:>3} {cyberMajorPercent:>10.2f}")
print(f"{dataString:<20} {dataMajors:>3} {dataMajorPercent:>10.2f}")
print(f"{otherString:<20} {otherMajors:>3} {otherMajorPercent:>10.2f}")

print("\nMinors for Computer Science Majors in CS160")
print(f"{dataString:<20} {dataMinors:>3} {dataMinorPercent:>10.2f}")
print(f"{cyberString:<20} {cyberMinors:>3} {cyberMinorPercent:>10.2f}")
print(f"{mathString:<20} {mathMinors:>3} {mathMinorPercent:>10.2f}")
print(f"{otherMinorsString:<20} {otherMinors:>3} {otherMinorPercent:>10.2f}")