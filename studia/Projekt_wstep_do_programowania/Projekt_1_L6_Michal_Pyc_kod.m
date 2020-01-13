clear
clc
%%%% pierwsza funkcja
syms y(x);
y(x)=x.^4 + 2*(x.^3) + 3*x -2; %%% definicja funkcji
fplot(y, 'LineWidth',3)    %%% rysowanie wykresu funkcji
hold on
grid on


%%%% Tworzenie wielomianu taylora
N=3;  %%% wykładnik pochodnej
xo=0;  %%% dowolnie wybrany punkt 
x1 = -4
x2 = 4
wykres0 = y(xo);  %%% definicja wykresu dla dowolnego punktu
wykres1 = y(x1);
wykres2 = y(x2);
d = y(x);
 for n = 1:N    %%% pętla tworząca wartości wielomianu Taylora
    pochodna = diff(d);   
    d = pochodna;
    pochodna(x)= pochodna;
    wykres0 = wykres0 + pochodna(xo).*(x-xo).^n/factorial(n);  %%% wzór Taylora
    wykres1 = wykres1 + pochodna(x1).*(x-x1).^n/factorial(n);
    wykres2 = wykres2 + pochodna(x2).*(x-x2).^n/factorial(n);
 end

fplot(wykres0, 'r-', 'LineWidth', 1)  %%% rysowanie wykresu wielomianu Taylora
fplot(wykres1, 'LineWidth', 1) 
fplot(wykres2, 'k-', 'LineWidth', 1) 
hold on
legend('Funkcja bazowa', 'Wielomian Taylora xo', 'Wielomian Taylora x1','Wielomian Taylora x2')




%%%% druga funkcja
y(x) = cos(x)
fig = figure()
set(fig, 'color', 'white')
fplot(y,'LineWidth',3)
grid on
hold on

%%%% Tworzenie wielomianu taylora
N=4;
xo=0; 
x1 = -pi/2
x2 = pi/2
wykres0 = y(xo);
wykres1 = y(x1);
wykres2 = y(x2);
d = y(x);
 for n = 1:N
    pochodna = diff(d);   
    d = pochodna;
    pochodna(x)= pochodna;
    wykres0 = wykres0 + pochodna(xo).*(x-xo).^n/factorial(n); 
    wykres1 = wykres1 + pochodna(x1).*(x-x1).^n/factorial(n);
    wykres2 = wykres2 + pochodna(x2).*(x-x2).^n/factorial(n);
 end

fplot(wykres0, 'r-', 'LineWidth', 2)
fplot(wykres1, 'LineWidth', 2) 
fplot(wykres2, 'k-', 'LineWidth', 2) 
hold on
legend('Funkcja bazowa', 'Wielomian Taylora xo', 'Wielomian Taylora x1','Wielomian Taylora x2')


%%%% trzecia funkcja
y(x) = x.^5 - 3*(x.^4) + 7*(x.^3) - x.^2 + 2*x + 1
fig = figure()
set(fig, 'color', 'white')
fplot(y,'LineWidth',3)
grid on
hold on


N=4;
xo=0;
x1 = -3
x2 = 3
wykres0 = y(xo);
wykres1 = y(x1);
wykres2 = y(x2);
d = y(x);
 for n = 1:N
    pochodna = diff(d);   
    d = pochodna;
    pochodna(x)= pochodna;
    wykres0 = wykres0 + pochodna(xo).*(x-xo).^n/factorial(n);
    wykres1 = wykres1 + pochodna(x1).*(x-x1).^n/factorial(n);
    wykres2 = wykres2 + pochodna(x2).*(x-x2).^n/factorial(n);
 end

fplot(wykres0, 'r-', 'LineWidth', 2)
fplot(wykres1, 'LineWidth', 2) 
fplot(wykres2, 'k-', 'LineWidth', 2) 
hold on
legend('Funkcja bazowa', 'Wielomian Taylora xo', 'Wielomian Taylora x1','Wielomian Taylora x2')

