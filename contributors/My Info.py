# -*- coding: utf-8 -*-
"""
Created on Sun Oct  7 15:17:59 2018

@author: Ishaan
"""

import tkinter
from tkinter import messagebox

def Browse():
    tkinter.messagebox.showinfo("My Information","Name: Ishaan Goyal\nGithub Username: Ishaan0905\nLanguages: C, Python\nI want to work with WD")

root=tkinter.Tk()
root.title("First Program")
label=tkinter.Label(root,text="This is my first app\n\n")
label.pack()
b1=tkinter.Button(root,text='My Information',command=Browse)
b1.pack()
root.mainloop()