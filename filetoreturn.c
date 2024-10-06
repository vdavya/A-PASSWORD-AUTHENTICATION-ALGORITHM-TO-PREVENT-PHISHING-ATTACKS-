from tkinter import*
from tkinter import font;

def True_fire():

    top=Tk();

    top.title("Cyber project");
    top.geometry("750x350")

    Label(top,text="Acess Given ",font=("Arial",50)).place(x=135,y=125);
    top.mainloop();

def False_fire():

    top=Tk();

    top.title("Cyber project");
    top.geometry("750x350")

    Label(top,text="Acess Denied",font=("Arial",50)).place(x=135,y=125);

    top.mainloop();

# False_fire();
# True_fire();
