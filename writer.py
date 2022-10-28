import os

with open("files.md", "r") as f:
    #f.write("Hello world!")
	m = str(f.read())
	#print(m.format(key="content", valuee = "bala"))
	print(m.format(content="baala"))