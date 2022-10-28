#!/usr/bin/python3

import os

"""
for dir in os.walk(os.getcwd()):
	for file in dir:
		print(f"{file}")

"""
#os.fwalk()
#are identical to walk() output, and dirfd

content = ""

for dirpath, dirnames, files in \
	os.walk(os.getcwd(), followlinks=False, topdown=True):
	if not "." in dirpath:
	    #.replace("/", "")
		fdir = f"├── {dirpath.lstrip("/")} "
		#fdir = f"├── {dirnames} "
		print(fdir)
		content+=fdir
	for file in files:
		"""
		if os.path.isfile(os.path.join(dir,file)):
		File "/usr/lib/python3.9/posixpath.py", line 76, in join
			a = os.fspath(a)
		TypeError: expected str, bytes or os.PathLike object,
		not builtin_function_or_method
		"""
		try:
			ffile = f"│   ├── {file} "
			#if os.path.isfile(dir,file):
			print(ffile)
			content+=ffile
			#print(f"{file}")
		except TypeError as err:
			print(f"{file} seem not to be a file and was ignored.")
	break

#print("\n\n\n\n\n\n\n\n\n\n\n",content)
#print(content.split(" ")
