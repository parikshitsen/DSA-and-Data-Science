import pyautogui
def num(n):
	n=int(input("Enter choice: "))
	if n==10:
		pyautogui.alert("You Enter wrong digit!!!")
	else:
		num(n)

if __name__=='__main__':
	n=int(input("Enter choice: "))
	num(n)

