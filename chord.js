

tonic = [1, 4, 5, 10];
dominant = [2, 8, 11, 12];
predominant = [3, 6, 7, 9];

function randomChord(t, d, p) {
	let result = Math.random(); 
	let index = Math.floor(Math.random()*4);
	if(index > 3) {
		index = 3;
	}
	switch(result) {
		case t:
			tonic[index];
			break;
		case d:
			tonic[index];
			break;
		case s:
			tonic[index];
			break;
	}
}
