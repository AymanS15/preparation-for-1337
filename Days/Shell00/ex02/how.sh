touch  test1  test3 test4  
mkdir test0 test2

ln test3 test5
ln -s test0 test6   

#--------  File Size ------------
fallocate -l 4 test1
fallocate -l 1 test3 
fallocate -l 2 test4 
#--------------------------------

#-------- Setting Time ----------
touch -amt 202201012047 test0
touch -amt 202201012146 test1
touch -amt 202201012245 test2
touch -amt 202201012344 test3
touch -amt 202201012343 test4
touch -hamt 202201012220 test6
#--------------------------------


#--------  chmod ----------------

chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4

#--------------------------------



#tar -cf exo2.tar *

#1 -w-
#2 --x
#3 -wx
#4 r--
#5 r-x
#6 rw-
#7 rwx