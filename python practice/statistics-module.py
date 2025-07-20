import statistics as stat           #statistics will be abbreviated as stat now
list = [51,21,55,13,15,16,84,44,55]
mean = stat.mean(list)
median = stat.median(list)
mode = stat.mode(list)

print("Mean: ", round(mean))        #round() will give an roundoff value
print("Median: ", median)
print("Mode: ", mode)