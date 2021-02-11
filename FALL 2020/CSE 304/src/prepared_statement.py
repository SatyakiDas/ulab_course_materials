import mysql.connector

connection = mysql.connector.connect(user="root", password="", database="students")
cursor = connection.cursor(prepared=True)

stu_id = input("Enter Student ID: ")
query = """INSERT INTO cse304_2 (id, fname, lname, dept, cgpa, gender, hometown) VALUES (%s, %s, %s, %s, %s, %s, %s)"""
# SELECT * FROM cse304_2 where id=193014041; drop table cse304_2

tuple1 = (stu_id, 'Shahidul', 'Islam', 'CSE', 3.64, 'Male', 'Dhaka')
cursor.execute(query, tuple1, multi=True)
connection.commit()

# for (result) in cursor:
#     print(f"ID: {result[0]}, Full Name: {result[1]} {result[2]}")

cursor.close()
connection.close()