from collections import deque

st = [920, 87, 1185, 209, 717, 2, 953, 1435, 1249, 327]
# [8, 5, 6, 3, 1, 2]
# [1077, 224, 265, 403, 1122, 1173, 222, 1253, 640, 141, 880, 462, 112, 1223, 216, 951, 1082, 364, 997, 319, 1348, 1156, 589, 1017, 588, 1145, 848, 938, 1187, 1066, 419, 945, 554, 644, 198, 876, 1219, 813, 1201, 142, 560, 1463, 976, 1043, 335, 1044, 966, 275, 578, 694]
# [920, 87, 1185, 209, 717, 2, 953, 1435, 1249, 327]
sa = deque()
tmp = sorted(st)
sa.extend([tmp.index(x) + 1 for x in st])

sa_c = sa.copy()
print(sa_c)
sa_c.rotate(-sa_c.index(1))
print(sa_c)
dyns_vals = [0] * len(sa_c)
for i, x in enumerate(sa_c):
	t = []
	for j, y in enumerate(reversed(dyns_vals[:i])):
		if sa_c[i - 1 - j] < x:
			t.append(y + 1)
		dyns_vals[i] = max(t, default=0)
print(dyns_vals)
sa_c.reverse()
dyns_vals.reverse()
cur_val = max(dyns_vals)
res = []
for i, x in enumerate(dyns_vals):
	if x == cur_val and (len(res) == 0 or sa_c[i] < res[0]):
		res.insert(0, sa_c[i])
		cur_val -= 1

print(res)