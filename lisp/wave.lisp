(defun pnt(n)
  (when (= n 0) (return-from pnt 0))
  (format t " ")
  (pnt (- n 1)))

(loop
 (let ((x)
       (y))
   (declare (integer x))
   (setq x 0)
   (loop (when (> x 15) (return))
    (pnt x)
    (format t "*")
    (terpri)
    (setq x (+ x 1))
    (sleep 0.08)
    )

   (setq y x)
   (loop (when (< y 0) (return))
    (pnt y)
    (format t "*")
    (terpri)
    (setq y (- y 1))
    (sleep 0.08)
    )
   )

 )
