"""
problem definition:
    Write a program that uses a two-dimensional array to store the highest and
        lowest temperatures for each month of the year. The program should output
        the average high, average low, and the highest and lowest tempera-tures for
        the year.
analysis:
    input:
        a 2D-array of highest and lowest temperatures for each month of the year
    output:
        average high, average low, and the highest and lowest temperatures
    process:
        since there are only to sub-arrays of interest we can let one be the 0th and 1th
            array

        looping from i = 0 to 12:
            to get highest and lowest temperatures for each month

        to get the average low,
            find the sum of the 1th array and divide it by 12

        to get the average high,
            find the sum of the 0th array and divide it by 12

        find sort the 0th array and get its max, return the index of the max

        find sort the `th array and get its min, return the index of the min

design:
    let temperature be a 2D-array

    function getData():
        loop from i to 12:
            temperature[0][i] <- input: "enter heighest temperature on month" i
            temperature[1][i] <- input: "enter lowest temperature on month" i

    function averageHigh():
        return -> sum of all elements in temperature[0] divided by 12.0

    function averageLow():
        return -> sum of all elements in temperature[1] divided by 12.0

    function indexHighTemp():
        let index = 0

        loop from i = 1 to 11:
            if temperature[0][index] > temperature[0][i]:
                index = i

        return -> index


    function indexLowTemp():
        let index = 0

        loop from i = 1 to 11:
            if temperature[1][index] < temperature[1][i]:
                index = i

        return -> index

    call: getData()

    display -> "average high:" call: averageHigh()
    display -> "average low:" averageLow()
    display -> "highest temperature at:" indexHighTemp()
    display -> "lowest temperature:" indexLowTemp()

"""

temperature = [[], []]

month = ['jan', 'feb', 'mar', 'apr',
         'may', 'june', 'july', 'aug',
         'sept', 'oct', 'nov', 'dec']


def getData():
    for i in range(12):
        temperature[0].append(
            float(input(f"enter highest temperature for {month[i]}: ")))
        temperature[1].append(
            float(input(f"enter lowest temperature for {month[i]}: ")))


def averageHigh():
    return sum(temperature[0]) / 12.0


def averageLow():
    return sum(temperature[1]) / 12.0


def indexHighTemp():
    return temperature[0].index(max(temperature[0]))


def indexLowTemp():
    return temperature[1].index(min(temperature[1]))


getData()

print(
    f"""average high: {averageHigh()}
average low: {averageLow()}
highest temperature at: {indexHighTemp()}
lowest temperature: {indexLowTemp()}""")
