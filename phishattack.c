import email
import mysql.connector as plq;
def retainer(lst):
    l2=[]
    for i in range(len(lst)):
        l2.append(lst[i][0])

    return l2;

def email_check(username,given_email):
    pq=plq.connect(host="localhost",database="cyber",user="root",password="ram123");

    cursor=pq.cursor();
     # username="anu2dud";
    # password="abc123";
    cursor.execute(f"select email from email_details where username='{username}'")
    emails_1=cursor.fetchall();
    emails_1=retainer(emails_1)

    if given_email in emails_1:
        return True
    else:
        return False

    cursor=pq.cursor();


def location_check(username,location_given):
    pq=plq.connect(host="localhost",database="cyber",user="root",password="ram123");

    # username="anu2dud"
    # password="anu2dud"
    cursor=pq.cursor();

    cursor.execute(f"select location from locations where username='{username}'")
    # location_given="agra";

    location=cursor.fetchall();
    location=retainer(location)

    # print(location_given,location)
    if location_given.lower() in location:
        return True
    else:
        return False

def check(username,location_given,given_email):
    if location_check(username,location_given) and email_check(username,given_email):
        return True
    else:
        return False

# location_check("anu2dud","agra");
# email_check("anu2dud","anu@gmail.com")
