import os
str = input("Input your Commit message:\n")
str2=str+"\nAuthor: Tonmoy Islam\nEmail: tonmoyvyper@gmail.com"
f=open("c.txt","w")
f.write(str2)
f.close
# str3="git commit -s -m"+"$(echo $str2)"
os.system("python3 ./rmv.py")
os.system("git add -v .")
os.system("git commit --file ./c.txt")
os.system("git push")
