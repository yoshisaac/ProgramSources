program main
  integer :: i
  real :: x

  integer :: slp, slep
  do while (.true.)
     do i = 1, abs(tan(cos(x))*100), 1
        write (*,'(A1)',advance='no') '#'
     end do

     write (*,'(A1)') '}'
     
     x = x + 0.07

     slp = slep(5)
  end do
end program main
