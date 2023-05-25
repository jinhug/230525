eval

int get_accuracy(int y_treue[], int y_perd[]){
	int i;
	int res = 0;

	for(i=0;i<100;i++){
		if(y_true[i] == y_pred[i])
			res++;
	}
	return res;
}
