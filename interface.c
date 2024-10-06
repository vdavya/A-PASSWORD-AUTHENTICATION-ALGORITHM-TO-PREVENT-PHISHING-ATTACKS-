from msilib.schema import Font
import tkinter as tk
from tkinter import*

def interface():

    def display_text():
        global  username;
        global password;
        username=e1.get();
        password=e2.get()

        top.destroy();

    top=Tk();
    top.geometry("750x250")
    top.title("Cyber project")
    Label(top, text="UserName",font=("Arial",9)).place(x=220, y=5)
    Label(top, text="Password",font=("Arial",9)).place(x=220, y=35)
    e1=Entry(top,justify=CENTER,width=25)
    e1.pack(pady=5);
    e2=Entry(top,justify=CENTER,show="*",width=25)
    e2.pack(pady=5);

    tk.Button(top,text="Submit",width=20,command=display_text).pack(pady=20)
    top.mainloop();
    l2=[]
    l2.append(username)
    l2.append(password)
    return l2

# interface();
