






#ZADANIA PROJEKTOWE
# Zad 1
attributes(mtcars)

numV <- c(1,2,3,4,5)
factNumV <- factor(numV)
attributes(factNumV)

charV <- c("A", "B", "C", "C", "C")
factCharV <- factor(charV)
attributes(factCharV)

levels(factCharV)
levels(factCharV)[factCharV = "A"] <- "a"
levels(factCharV)[factCharV = "B"] <- "b"
levels(factCharV)

Plec <- c("M", "M", "F")
factPlec <- factor(Plec)
levels(factPlec)
levels(factPlec) <- sapply(levels(factPlec), function (x) (if (x == "M") "Mezczyzna" else if (x == "F") "Kobieta"))
levels(factPlec)

a16 <- c("M", "M", "F", NA)
a16
a161 <- factor(a16, exclude = NA)
a162 <- factor(a16, exclude = "F")
a163 <- factor(a16, exclude = c(NA, "F"))

# Zad 3
v5 <- sample(c(-2, 0, 1, 2, 4, 10), size = 36, replace = TRUE)

matrix(v5, ncol = 2)
matrix(v5, ncol = 3)
matrix(v5, ncol = 4)
matrix(v5, ncol = 8)
matrix(v5, ncol = 12)

matrix(v5, nrow = 2, byrow = TRUE)
matrix(v5, nrow = 3, byrow = TRUE)
matrix(v5, nrow = 4, byrow = TRUE)
matrix(v5, nrow = 8, byrow = TRUE)
matrix(v5, nrow = 12, byrow = TRUE)

A3 <- matrix(v5, nrow = 6, byrow = TRUE)
A3
det(A3)
t(A3)

A4 <- A3[3:6,2:5]
A4

razem <- c()
for (i in 1:nrow(A3)){
  gora <- A3[i,i:ncol(A3)]
  dol <- rep(0, times=i-1)
  razem <- c(razem, dol, gora)
}
Atg <- t(matrix(razem, nrow=ncol(A3)))
Atg

Atg1 <- upper.tri(A3, diag = FALSE)
diag(Atg1) <-c(10, 2, 2, 4, 2, 10)
Atg1


el <- c()
for (i in 1:nrow(A3)){
  el[i] <- A3[i,i]
}
el

A4 <- A3
A4
A4 <- A4[-3,-5]
A4

A5 <- cbind(A3, A3)
A5

# Zad 4
bbb <- matrix(1:841, ncol=29)
Ak <- matrix(bbb, 30, 30)
Aw <- matrix(bbb, 30, 30)
Ak
Aw

# Zad 5
L <- matrix(c(3, 12, 0, 1, 5, 0, 2, 4, 2), ncol=3)
P <-c(3,3,10)
x <- solve(L, P)
cat(x[1], x[2], x[3])
w1 <- x[1]
w2 <- x[2]
w3 <- x[3]
w5 <- c(w1,w2,w3)
w5