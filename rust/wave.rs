use std::time;

const LENGTH: i8 = 15;

fn spaces(n: i8) {
    let mut i = 0;

    while i < n {
	std::print!(" ");
	i += 1;
    }
}

fn main() {
    loop {
	let mut x = 0;
	while x < LENGTH {
	    spaces(x);
	    std::println!("*");
	    x += 1;
	    std::thread::sleep(time::Duration::from_millis(65));
	}

	let mut y = LENGTH;
	while y > 0 {
	    spaces(y);
	    std::println!("*");
	    y -= 1;
	    std::thread::sleep(time::Duration::from_millis(65));
	}
    }
}
