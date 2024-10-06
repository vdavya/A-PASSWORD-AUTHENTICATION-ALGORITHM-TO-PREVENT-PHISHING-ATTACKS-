from asyncio import create_subprocess_exec
from sqlite3 import Cursor
from interface import*


from phish_check import*;
from slating import*;
from Result_firing import *
import mysql.connector as pq;


def login():
    plq=pq.connect(host="localhost",database="cyber",user="root",password="ram123");

    user_name,pass_word=interface();
# user_name,pass_word="abcdef111","thisisus";
    cursor=plq.cursor();
    cursor.execute(f"select password from credentials where username='{user_name}'")
    my_pass_word=hash_salt(user_name,pass_word);
    password_from_db=cursor.fetchall()[0][0];
# user_name,pass_word
# print(my_pass_word);
# print(password_from_db)
    location_given="vellore";
    given_email="rahul@gmail.com"
    if check(user_name,location_given,given_email):
       pass
    else:
        False_fire();

        return
    if (my_pass_word==password_from_db):
        True_fire();
    else:
        False_fire();
# pass_word=hash_salt(user_name,pass_word);

# login();
