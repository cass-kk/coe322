Program norms
  implicit none
  integer :: i,j, row,column
  integer, parameter :: M=3, N =4
  real(4), dimension(M,N) :: mat = [((i*j, i=1,3), j=1,4)]
  real(4) :: column_norm, row_norm, inf_norm, one_norm

  do row =1, M
    print *,mat
  end do

  !! Inf norm is max column- absolute sum
  inf_norm = 0
  do col=1, N
    column_norm = 0
    do row =1, M
      column_norm = column_norm + abs(mat(row,col_))
    end do
    inf_norm = max(inf_norm, column_norm)
  end do
  print *, inf_norm

contains
  real(4) function infinity_norm( mat)
    implicit none
  real(4), intent(in, dimension(:) :: mat
  integer :: M = size(mat, 1), N = size(mat, 2)
  infinity_norm = 0
  end function infinity_norm

End Program norms


!! the 1-norm is defined as maximum of all sums of absolute values in a ny column

!! the infinity-norm is defined as the maximum row sum
!! compute the sums while avoiding loops
