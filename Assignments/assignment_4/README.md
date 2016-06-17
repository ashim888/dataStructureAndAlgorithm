###Assignment IV

#####DEADLINE: June 17th 2016
=================
#####find BigO for all below
```
1. int thrower(){
	int arr[5]={1000, 2, 3, 17, 50};
	return arr[0]=25;
}
```
```
2. int container(int n)
{	
	for(int i=0;i < n;i++){
		if(i%2){
		return true;
	}
}

```

```
3. int naiveFib(int n)
{
	for(int i=0;i < n;i++){
		for(j=0;j< n;i++){
			if(i%2==0){
				return true;	
		}
	}	
}

```

```
4. unsigned int naiveFib(int n)
{	
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return ( naiveFib(n-1) + naiveFib(n-2) );	
	}
}
```

#####Answer some of the questions below
```
1. How Stack is different from Array?
2. What do you mean by stack underflow and stack overflow? Explain with some diagramatic representation.
```

