t=0
k=0
read i
while [ $k -lt $i ]; do
	read e
	if [ $e -gt 0 ]; then t=$(($t+$e))
	fi
	let k=k+1
done
echo $t
