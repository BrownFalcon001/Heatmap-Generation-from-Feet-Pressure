# importing modules
import numpy as np
import random
from itertools import count
import pandas as pd
import matplotlib.pyplot as plt
import csv
from matplotlib.animation import FuncAnimation

# plt.style.use('seaborn-v0_8-dark')


df = pd.read_csv('updated.csv')
datas = df.to_numpy()

data = []

for x in range(len(datas[0])):
    temp = []
    for y in range(len(datas)):
        if datas[y][x] == 0.98:
            temp.append(0.01)
        elif datas[y][x] == 0.96:
            temp.append(0.02)
        elif datas[y][x] == 0.94:
            temp.append(0.03)
        elif datas[y][x] == 1:
            temp.append(0.04)
        elif datas[y][x] == 0.92:
            temp.append(0.05)
        # eikhane tui code likhbi


        else:
            temp.append(.5)
    data.append(temp)

data[0][0] = 0
data[0][1] = 1

# data 2d array
# .5 --> touch korbo na
# 0.01 --> p1
# 0.02 --> p2
# 0.03 --> p3
# 0.04 --> p4
# 0.05 --> p5

n = len(data)

# print(yy)
pixel_plot = plt.figure()

d = []
for x in range(len(data)):
    temp = []
    for y in range(len(data[0])):
        temp.append(data[x][y])
    d.append(temp)

def animate(i):
    # print(data)
    df = pd.read_csv('analog-data.csv')
    print(df)
    # print(df)
    xxx = df.to_numpy()
    xx = xxx[0][0].split()

    # print(xx)
    yy = [(int(xx[0]) + 1) / 700, (int(xx[1]) + 1) / 700, (int(xx[2]) + 1) / 700, (int(xx[3]) + 1) / 700,
          (int(xx[4]) + 1) / 700]
    # print(yy)
    # yy = np.random.random((1, 5))
    # yy = yy[0]
    # print(yy)

    # p1

    for x in range(len(data[0])):
        for y in range(len(data)):
            if data[y][x] == .01:
                data[y][x] = yy[0]
                # print(data[y][x])

    # p2
    for x in range(len(data[0])):
        for y in range(len(data)):
            if data[y][x] == .02:
                data[y][x] = yy[1]
    # p3
    for x in range(len(data[0])):
        for y in range(len(data)):
            if data[y][x] == .03:
                data[y][x] = yy[2]
    # p4
    for x in range(len(data[0])):
        for y in range(len(data)):
            if data[y][x] == .04:
                data[y][x] = yy[3]

    # p5
    for x in range(len(data[0])):
        for y in range(len(data)):
            if data[y][x] == .05:
                data[y][x] = yy[4]

    data[0][0] = 0
    data[0][1] = 1

    plt.cla()
    plt.title("Heatmap")
    pixel_plot = plt.imshow(
        data, cmap='jet')

    for x in range(len(data)):
        for y in range(len(data[0])):
            data[x][y] = d[x][y]
            # print(d[x][y])

ani = FuncAnimation(plt.gcf(), animate, interval=499)

plt.show()