Program primeNumbers
  implicit none
  integer :: n
  read *, n
  call test_if_prime(n)
contains
  subroutine test_if_prime(how_many)
    implicit none
    integer :: how_many
    integer :: manyCounter = 0
    integer :: i, j
    logical :: isprime
    logical :: stoptest = .false.
    i = 2

    outer: do
       j = i-1
       isprime = .true.              !assuming (initially) all numbers are prime
       if (stoptest /= .false.) exit !reached the number of primes found

       inner: do while(j >= 2)
          if(mod(i,j) == 0) then
             isprime = .false.       !number determined not to be prime
             end if
             j = j-1
       end do inner

       if(isprime == .true.)then
          print *, i
          manyCounter = manyCounter + 1
       end if
       
       if(manyCounter == how_many)then
          stoptest = .true.
       end if
       i = i+1
     end do outer
   end subroutine test_if_prime

End Program primenumbers
