"""
problem definition:
    find the polar coordinate of a given cartesian coordinate
analysis:
    - the cartesian coordinate is the XY-coordinate
    - polar coordinates comes in the for of say P(r, O), where r
    is the magnitude of the cartesian coordinates and O is the
    angle (usually given as theta)
    - The inputs will the X and Y coordinates
    - The output qill be the maginitude and the direction
    - The process will be to use the pythagoras theorem to find the
    magnitude, the see what quadrant the X and Y are in then find the
    angle the terminal line make with x-axis
design:
    Let x_cord and y_cord be the X and Y coordinates of type double
    Let magnitude_XY and angle_XY be the magnitude and direction of
    x_cord and y_cord respectively of type double

    Accept x_cord and y_cord as inputs
    magnitude_XY = squareroot of the the sum of the squares of the
    different between the coordinates of the P(x_cord, y_cord) and
    the origin (0, 0)


"""
from math import pow, sqrt, atan, degrees

x_cord = float(input('enter the x-coordinate: '))
y_cord = float(input('enter the y-coordinate: '))

print(f"Given the cartesian coordinate, ({x_cord}, {y_cord}) ")

magnitude_XY = sqrt(pow(x_cord, 2) + pow(y_cord, 2))

print(f"maginitude of ({x_cord}, {y_cord}) is {magnitude_XY}")
print(f"({x_cord}, {y_cord}), is in the ", end='')

if x_cord > 0 and y_cord > 0:
    print('first quadrant', end='')
elif x_cord < 0 and y_cord > 0:
    print('second quadrant', end='')
elif x_cord < 0 and y_cord < 0:
    print('third quadrant', end='')
else:
    print('fouth quadrant', end='')

angle_XY = atan(y_cord/x_cord)

print(f" at angle {angle_XY}rads from the x-axis")
print(f"this is the same in degree as {degrees(angle_XY)}")
print(
    f"thus the polar coordianate of({x_cord}, {y_cord}) is \
({magnitude_XY}, {angle_XY})")
