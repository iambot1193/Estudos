def time_to_seconds(time_str):
    h, m, s = map(int, time_str.split(':'))
    return h * 3600 + m * 60 + s

def seconds_to_time(seconds):
    h = seconds // 3600
    seconds %= 3600
    m = seconds // 60
    s = seconds % 60
    return f"{h:02}:{m:02}:{s:02}"

time1 = "4:42:05"
time2 = "2:45:22"

# Convert times to seconds
seconds1 = time_to_seconds(time1)
seconds2 = time_to_seconds(time2)

# Sum the seconds
total_seconds = seconds1 + seconds2

# Convert the total seconds back to HH:MM:SS format
total_time = seconds_to_time(total_seconds)

print(total_time)