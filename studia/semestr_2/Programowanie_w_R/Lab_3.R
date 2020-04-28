# ZADANIA LABOLATORYJNE

# Zad 1
l11 <- list("Jan", "Kowalski", 1997, FALSE, 172.5, "987 654 321")
str(l11) #struktura listy
l11[c(1)] #pierwszy element listy == l11[1]

l12 <- l11[c(1,2,6)]
str(l12)

l13 <- l11[-c(3,6)]
str(l13)


# Zad 2
wiek <- l11[[3]]
wiek <- 2020 - wiek
paste(l11[1], l11[2], "- lat", wiek)


# Zad 3
w3a <- rnorm(18)
w3b <- rep_len(c(1,2,3), 18)
l3 <- split(w3a, w3b)
str(l3)

# Zad 4
l3sum <- lapply(l3, sum)
str(l3sum)
str(mapply("*", l3, list(10, 100, 1000), SIMPLIFY=FALSE))

#ZADANIA PROJEKTOWE
# Zad 1
pi_napis <- format(pi, nsmall = 19)
napis <- "Jestem w domu!"
odstepy <- rep(" ", as.integer((nchar(pi_napis) - nchar(napis))/2))
cat(pi_napis)
cat(odstepy, napis, sep='')

# Zad 3
l30 <- list(1,5,3,2,6)

l31 <- l30
l31[[2]] <- list(TRUE, FALSE, TRUE)
str(l31)

l32 <- l30
l32[[7]] <- "siodmy" 
str(l32)

l33 <- l30
l33[3:6] <- list(list(0, 0, 7))
str(l33)

l34 <- l30
l34[1] <- list(NULL)
l34 <- l34[ 1:length(l34) != 2 & 1:length(l34) != length(l34)]
str(l34)

# Zad 4

l4a <- list(7, 1:7)
l4b <- list("test", list(TRUE, TRUE, FALSE), 1:3)

l41 <- list(c(l4a, l4b))
str(l41)

l42 <- list(l4a, l4b)
str(l42)

w43 <- unlist(l42) 
w43

l44 <- list( as.numeric( w43[1:length(w43) < 9 | 1:length(w43) > 12]))
str(l44)


# Zad 5
w5 <- round(rnorm(30, 0, 0.3), digits = 1)

cat(w5[ w5 >= -4 & w5 <= -0.5 | w5 > 1 & w5 <= 3])

cat( sum(w5 > 0))

cat(mean(unlist(lapply(w5, abs))))
