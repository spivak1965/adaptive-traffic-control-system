import serial
import time

PORT = "COM3"
BAUD_RATE = 9600


# Connect to Arduino
arduino = serial.Serial(
    PORT,
    BAUD_RATE,
    timeout=1
)

time.sleep(2)

print()
print("================================")
print(" V01 TRAFFIC CONTROL SYSTEM")
print("================================")
print("Arduino connected.")
print()


def send_command(command):
    arduino.write((command + "\n").encode())

    time.sleep(0.1)

    if arduino.in_waiting:
        response = arduino.readline().decode().strip()
        print("Arduino:", response)


try:

    while True:

        print()
        print("1 - North/South GREEN")
        print("2 - North/South YELLOW")
        print("3 - East/West GREEN")
        print("4 - East/West YELLOW")
        print("5 - ALL RED")
        print("6 - EXIT")

        choice = input("\nSelect: ")

        if choice == "1":
            send_command("NS_GREEN")

        elif choice == "2":
            send_command("NS_YELLOW")

        elif choice == "3":
            send_command("EW_GREEN")

        elif choice == "4":
            send_command("EW_YELLOW")

        elif choice == "5":
            send_command("ALL_RED")

        elif choice == "6":
            break

        else:
            print("Invalid selection.")

finally:

    arduino.close()
    print("\nArduino disconnected.")
