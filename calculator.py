from tkinter import *
from tkinter import ttk

screen = []

def add_to_screen(i):
	screen.append(i)

root = Tk()
root.title("Calculator")

frame = ttk.Frame(root, padding="3 3 12 12")
frame.grid(column=0, row=0, sticky=(N,W,E,S))
frame.columnconfigure(0, weight=1)
frame.rowconfigure(0,weight=1)

for i in range(1,10):
	ttk.Button(frame, text=str(i), command=add_to_screen(i)).grid(column=((i - 1) % 3 ),row=((i - 1)//3 + 1),sticky=(W,E))

root.mainloop()
