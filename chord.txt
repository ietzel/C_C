

tonic = [1, 4, 5, 10];
dominant = [2, 8, 11, 12];
predominant = [3, 6, 7, 9];

symbols []

//params t, d, p, are the weights of tonic, dominant, predominant, respectively
function randomChord(t, d, p) {
	let result = Math.random()*(t+d+p); 
	let index = Math.floor(Math.random()*4);
	if(index > 3) {
		index = 3;
	}
	switch(result) {
		case result < t:
			tonic[index];
			break;
		case result < t+d:
			dominant[index];
			break;
		default:
			predominant[index];
			break;
	}
}
