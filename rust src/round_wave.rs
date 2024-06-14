use std::time;

fn main() {

    let mut i: f64 = 0.0;
    
    loop {
        println!("");
	let mut h: i64 = 0;
	while h < (100_f64 * i.cos().abs()) as i64 {
	    print!(" ");
	    h += 1;
	}

	print!("*");

	i += 0.1;

	std::thread::sleep(time::Duration::from_millis(65));
    }
}
