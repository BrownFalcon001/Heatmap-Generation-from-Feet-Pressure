import serial
import csv


flag = 1

arduino_port = "COM10"
baud = 9600
fileName="analog-data.csv"
samples = 100
print_lables = False
ser = serial.Serial(arduino_port, baud)
print("Connected to Arduino port:" + arduino_port)
file = open(fileName, "w")
print("Created file")

line = 0


while True:
    if print_lables:
        if line==0:
            print("printing column headers")
        else:
            print("line " + str(line) + ": writing...")
    getData = str(ser.readline())
    data = getData[2:][:-5]
    print(data)

    file = open(fileName, "w")
    file.write("hello" + "\n")
    file.write(data + "\n")
    line = line + 1
print("data collection complete")