n=input()
for x in range(n):
	c=[]
	p=[]
	c1,c2,c3,c4,c5,c6=raw_input().split()
	c1,c2,c3,c4,c5,c6=[int(c1),int(c2),int(c3),int(c4),int(c5),int(c6)]
	c.append(c1)
	c.append(c2)
	c.append(c3)
	c.append(c4)
	c.append(c5)
	c.append(c6)
	for y in range(6):
		a1,a2,a3,fin,att=raw_input().split()
		qwer=[]
		if a1!="ab":
			a1=float(a1)
			qwer.append(a1)
		if a2!="ab":
			a2=float(a2)
			qwer.append(a2)
		if a3!="ab":
			a3=float(a3)
			qwer.append(a3)
		fin,att=[float(fin),float(att)]
		if qwer!=[]:
			sub1=max(qwer)
			qwer.remove(sub1)
			if qwer!=[]:
				sub2=max(qwer)
			else:
				sub2=0
		else:
			sub1=0
			sub2=0
		t1=((sub1+sub2)/40)*45
		if att<51:
			t2=5
		elif att<61:
			t2=4
		elif att<71:
			t2=3
		elif att<81:
			t2=2
		elif att<91:
			t2=1
		else:
			t2=0
		t3=fin/2
		t4=t1+t2+t3
		if t4>=91:
			pts=10
		elif t4>=81:
			pts=9
		elif t4>=71:
			pts=8
		elif t4>=61:
			pts=7
		elif t4>50:
			pts=6
		elif t4==50:
			pts=5
		else:
			pts=0
		p.append(pts*c[y])
	flag=0
	res=0.00
	tc=0.00
	for y in range(6):
		if p[y]==0:
			flag=1
		res+=p[y]
		tc+=c[y]
	res/=tc
	if flag==1:
		print("FAILED, %.2f"%res)
	else:
		print("PASSED, %.2f"%res)