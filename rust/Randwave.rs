use rand::Rng;
use std::time;

fn spaces(n: i8) {
    let mut i: i8 = 0;

    while i <= n {
	print!(" ");
	i+=1;
    }
}

fn main() {
    let mut rng = rand::thread_rng();

    let mut waveLengthBack: i8 = 0;
    let mut waveLengthForward: i8 = (rng.gen::<i8>()%16).abs();
    
    loop {
	let mut x = waveLengthBack;
	while x < waveLengthForward {
	    spaces(x);
	    println!("*");
	    x+=1;
	    std::thread::sleep(time::Duration::from_millis(65));
	}

	waveLengthBack = (rng.gen::<i8>()%16).abs();
	while !(waveLengthBack <= waveLengthForward) { waveLengthBack = (rng.gen::<i8>()%16).abs(); }

	let mut y = waveLengthForward;
	while y > waveLengthBack {
	    spaces(y);
	    println!("*");
	    y-=1;
	    std::thread::sleep(time::Duration::from_millis(65));
	}

	waveLengthForward = (rng.gen::<i8>()%16).abs();
	while !(waveLengthBack <= waveLengthForward) { waveLengthForward = (rng.gen::<i8>()%16).abs(); }

    }
}
