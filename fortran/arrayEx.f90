Program arrays
  implicit none
  integer:: i

  !using sections{

  real(8), dimension(5) :: x = &
    [0.1d0, 0.2d0, 0.3d0, 0.4d0, 0.5d0]
  x(2:5) = x(1:4)
  print '(f5.3)', x

  !}prints 0.1, 0.1, 0.2, 0.3, 0,4

  !now make the above with an explicit, indexed loop
  !does it give same output? why?

!  real(8), dimension(5) :: x = [0.1d0, 0.2d0, 0.3d0. 0.4d0, 0.5d0]
  do i = 1,4
    x(i+1) = x(i)
  end do
  print '(f5.3)', x



End Program arrays
