import time

def main():
    gpio = [0,1,2]
    count, temp = 0, 0

    #gpio_mode code here

    while True:
        if (count % 4) == 3:
            while(temp < 3):
                gpio_write(gpio[temp % 4], "ON")
                temp += 1
            time.sleep(.5)
            temp = 0
            while(temp < 3):
                gpio_write(gpio[temp % 4], "OFF")
                temp += 1
            time.sleep(.3)
        else:
            gpio_write(gpio[count % 4], "ON")
            time.sleep(.5)
            gpio_write(gpio[count % 4], "OFF")
            time.sleep(.3)
        count += 1
        print("-------")

def gpio_write(value,mode):
    if value == 0: #red
        if mode == "ON":
            print("RED ON")
        else:
            print("RED OFF")
    elif value == 1: #green
        if mode == "ON":
            print("GREEN ON")
        else:
            print("GREEN OFF")
    else: #blue
        if mode == "ON":
            print("BLUE ON")
        else:
            print("BLUE OFF")

if __name__ == "__main__":
    main()