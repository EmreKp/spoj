for i in range(10):
	s=raw_input()
	t=1
	for e in s:
		if e=='F' or e=='L' or e=='T' or e=='D':
			t=t*2
	print t
