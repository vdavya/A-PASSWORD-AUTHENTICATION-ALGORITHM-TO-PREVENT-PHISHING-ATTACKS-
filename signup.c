import mysql.connector as pq
from interface import interface
from slating import*

def sign_up():
    Username,password=interface();
# Username="abcdef111"
# password="thisisus"

    plq=pq.connect(host="localhost",database="cyber",user="root",password="ram123");


    password=hash_salt(Username,password);




cursor= plq.cursor();

    quer=f"insert into Credentials  values('{Username}','{password}')"

    cursor.execute(quer)
    plq.commit();

# sign_up();
