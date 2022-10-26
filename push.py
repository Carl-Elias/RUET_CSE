import os
str = input("Input your Commit message:\n")
os.system("python3 ./rmv.py")
os.system("git add -v .")
os.system("git commit --signoff -m"+str)
os.system("git push")
