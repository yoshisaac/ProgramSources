(let (i)
  (declare (integer i))
  (setq i 1)
  (loop (when (> i 100) (return))
   (if (= (mod i 3) 0) (format t "fizz"))
   (if (= (mod i 5) 0) (format t "buzz"))
   (if (and (not (= (mod i 3) 0)) (not (= (mod i 5) 0))) (write i))
   (terpri)
   (setq i (+ i 1))
   )
  )
