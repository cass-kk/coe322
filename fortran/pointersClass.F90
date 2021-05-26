Program PointMax
  implicit none
  real, dimension(10), target :: array &
     = [1.1., 2.2, 3.3, 4.4, 5.5, &
     9.9, 8.8, 7.7, 6.6, 0.0]
  real, pointer :: biggest_element

  print '(10f5.2)', array
  call setPointer(array, biggest_element)
  print *, "Biggest element is", biggest_element
  biggest_element = 0
  print '(10f5.2)', array

  contains
    subroutine setPointer(array, bigpointer)
      implicit none
      real, dimension(:), intent(in) :: array
      real, pointer, intent(out :: bigpointer
      integer :: element
      real :: max_value

      max_value = -10


    end subroutine setPointer
End Program PointMax
