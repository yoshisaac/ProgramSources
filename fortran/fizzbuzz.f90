program main
  integer :: i
  do i = 100, 1, -1
     if (mod(i,3) == 0 .and. mod(i,5) == 0) then
        write (*,'(A8)') 'fizzbuzz'
     elseif (mod(i,3) == 0) then
        write (*,'(A4)') 'fizz'
     elseif (mod(i,5) == 0) then
        write (*,'(A4)') 'buzz'
     else
        write (*,'(I0)') i
     end if
  end do
end program main
