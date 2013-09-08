def move(n,a,b,c):
    if n<>1:
        move(n-1,a,c,b)
	print "move %d from %s to %s" % (n,a,c)
	move(n-1,b,a,c)
    else:
        print "move %d from %s to %s" % (n,a,c)
if __name__=="__main__":
    move(3,"a","b","c")
