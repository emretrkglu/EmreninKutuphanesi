 
import random
Chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ123456789!@#$%^&*()"
 
password_len = int(input("Şifre kaç karakter? : "))
password_count = int(input("Kaç adet şifre olacak? : "))
for x in range(0, password_count):
        password = ""
        for x in range(0, password_len):
            password_char = random.choice(Chars)
            password      = password + password_char
        print("Şifreniz : " , password)
 
