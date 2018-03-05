import serial
ser=serial.serial('/dev/ttyACM0', 9600)
#/dev/ttyAMC0 is an example of the port.
while 1:
	n=input('Input instruction: ')
	string=str(n)
	ser.write(string)
	print string