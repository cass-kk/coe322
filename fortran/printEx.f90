Program printing
  implicit none
  integer :: line
  integer :: column
  print '(10i3)',((10*line+column, i=0,9), line=0, 9)

  !actually how to do it
  do line = 0,9
    print '(10i3)',( 10*line+column, column=0,9)
  end do

  !or
  !print '(10i3)',(column, column=0,99)

End Program printing
