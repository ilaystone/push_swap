from collections import deque

st = [8, 5, 6, 3, 0, 2]
sa = deque()
tmp = sorted(st)
sa.extend([tmp.index(x) + 1 for x in st])

sa_c = sa.copy()
sa_c.rotate(-sa_c.index(1))

dyns_vals = [0] * len(sa_c)
for i, x in enumerate(sa_c):
	t = []
	for j, y in enumerate(reversed(dyns_vals[:i])):
		if sa_c[i - 1 - j] < x:
			t.append(y + 1)
		dyns_vals[i] = max(t, default=0)
sa_c.reverse()
dyns_vals.reverse()
cur_val = max(dyns_vals)
res = []
for i, x in enumerate(dyns_vals):
	if x == cur_val and (len(res) == 0 or sa_c[i] < res[0]):
		res.insert(0, sa_c[i])
		cur_val -= 1
print(sa)
print(res)