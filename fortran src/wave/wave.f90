program main
  integer :: x
  integer :: y
  integer :: a
  
  integer :: wat, prt
  
  integer :: b

  do while (.true.)

     do x = 0, 15, 1
        prt = prnt(x)
        write (*, '(A1)') '*'
        wat = slep(30)
     end do

     do y = x, 1, -1
        prt = prnt(y)
        write (*, '(A1)') '*'
        wat = slep(30)
     end do

  end do
end program

