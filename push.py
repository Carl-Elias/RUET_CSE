import os
f = open("../commit.txt", "w")
str = input("Input your Commit message:\n")
f.write(str)
f.close
f = open("../commit.txt", "a")
str2 = f"\nAuthor : Tonmoy Islam \nEmail: tonmoyvyper@gmail.com"
f.write(str2)
f.close
os.system("python3 ./rmv.py")
os.system("git add -v .")
os.system("git commit -F ../commit.txt")
os.system("git push")
