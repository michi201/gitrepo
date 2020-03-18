z <- log(27, 1/3)
x <- -1/27
y <- log(64, 1/4)
x*y*z

#zad2
a2 <- exp(1)
a2
a5 <- expm1(10^(-15))
a5
a6 <- log1p((0.1)^25)
a6
a7 <- log1p((0.1)^25)
a7

#zad3
b1 <- 7^(5/((2^3) - sin(pi/6)))
b1
b2 <- 7^5/((2^3) - sin(pi/6))
b2
b3 <- 7^5/2^(3 - sin(pi/6))
b3
b4 <- (7^5/2^3) - sin(pi/6)
b4
b1+b2+b3+b4

#zad4
sqrt(2)
sqrt(-2+0i)

#zad5
choose(52,4) #dwumian newtonafactorial(52) # =52!
factorial(52) # =52!
factorial(52)/(factorial(4)*factorial(52-4)) # 52!/4!*(52-4)!

#zad6
f <- function(x) {x^2 + 2}
integrate(f, 0, 3)

#L.4
5:10
v1 <- 10:29
v1
v2 <- v1^2
v2
v3 <- 1/v2
v3
mean(v2) #œrednia
sd(v2) #odchylenie standardowe

#ZADANIA PROJEKTOWE

#zad2
p1 <- c(2, 12, 5, 11)
p1
p2 <- c(-4, 1, 7, 3)
p2
p1 + p2
p2 - p1
p1 * p2
p1 / p2
p1 ^ p2

#zad3
p3 <- (2*p1 + p2)/7
p3
q3 <- p1
q3
q3 <- q3 * 2
q3
q3 <- q3 + p2
q3
q3 <- q3 / 7
q3
p3 == q3 #sprawdzenie rownosci

#zad4
p5 <- (p1 + (p2/2))^2
p5
q5 <- p2
q5
q5 <- q5 / 2
q5 <- q5 + p1
q5 <- q5^2
p5 == q5

p6 <- (p1 + 2)*(p1 - 5)-p2
q6 <- p1
q6.1 <- q6 + 2
q6.2 <- q6 -5
q6 <- q6.1*q6.2
q6 <- q6 - p2
p6 == q6

p7 <- (p1+2)/(p1-5)*p2
q7 <- p1
q7.1 <- q7 + 2
q7.2 <- q7 - 5
q7.2 <- q7.2 * p2
q7 <- q7.1/q7.2
p7 == q7

#zad5
q8 <- p1 + p2 
q8 <- q8/2 
q8 <- q8 + p1
q8
p8 <- ((p1 + p2)/2)+p1
p8 == q8

w1 <- -p1^3
w2 <- p2 - p1
q9 <- w1/w2
p9 <- (-p1^3)/(p2-p1)
p9 == q9

#zad6
f1 <- function(x) {1/x^2}
ca1 <- integrate(f1, 1, 100)
ca2 <- integrate(f1, 1, 5)
ca1[["value"]] - ca2[["value"]]
integrate(f1, 5, 100)
