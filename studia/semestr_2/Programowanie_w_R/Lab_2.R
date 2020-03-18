#LLabolatorium nr 2
# Zad 1
v11 <- rep_len(c(-1,1), 30)
v11
v12 <- rep_len(-1:1, 30)
v12

#Zad 2
v21 <- seq(from = 1/2, by = 3*pi/2, length.out = 100)
v21
temp1 <- c(-10:-1)
temp2 <- c(1:10)
v22 <- c(temp1,temp2)
v22


#Zad 3
v31 <- as.raw(c(0x00, 0x01, 0x08, 0x0f, 0x1f))
v31
#sprawdzanie
is.raw(v31)
#rzutowannie
v31l <- as.logical(v31)
v31i <- as.integer(v31)
v31d <- as.double(v31)
v31n <- as.numeric(v31)
v31co <- as.complex(v31)
v31ch <- as.character(v31)

#Zad 4
v41 <- c(2^(1:10))
v41

#Zad 5
A <- c(2,56,3,6,5,3,2,8,19,-12)
B <- c(4,2,59,-23,-2,43,24,6,9,10)
v51 <- pmin(A,B) 
v52 <- pmax(A,B)

vA <- unique(A)

v53 <- union(A,B)
v54 <- intersect(A,B) #część wspólna
v55 <- setdiff(A,B)
v56 <- setdiff(B,A)

v57 <- c(A,B)
vi57 <- which(v57%%3 == 0) #which - indeksy
v58 <- v57[v57%%3 ==0]

sum(v57)
prod(v57)
mean(v57)
var(v57)
sd(v57)
min(v57)
max(v57)
median(v57)

which.min(v57)
which.max(v57)

#Zad 6
findInterval(v57, c(5,30))

which(v57 == 2)

v62 <- sort(v57)
v62

is.unsorted(v62) # FALSE wiec posortowany
is.unsorted(v62, strict=TRUE) # TRUE wiec nie jest scisle rosnacy

vi65 <- order(v57)
v57[c(vi65)]

rev(vi65)

sample(v57)

ostEl <- v57[c((length(v57)-3):length(v57))]
v68 <- sample(ostEl, 100, TRUE)
v68
