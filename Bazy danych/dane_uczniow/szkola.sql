DROP TABLE IF EXISTS nazwiska;
CREATE TABLE nazwiska (
    nr_ucznia INTEGER PRIMARY KEY NOT NULL, 
    nazwisko TEXT(20) NOT NULL,
    imie TEXT(20),
    drugie_imie TEXT(20)
);

DROP TABLE IF EXISTS dane_osobowe;
CREATE TABLE dane_osobowe (
    nr_ucznia INTEGER,
    dzien INTEGER,
    miesiac INTEGER,
    rok INTEGER,
    miejsce_urodzenia TEXT(20) DEFAULT "Gdańsku",
    wojewodztwo TEXT(25) DEFAULT "pomorskie",
    FOREIGN KEY (nr_ucznia) REFERENCES nazwiska(nr_ucznia)
);

DROP TABLE IF EXISTS oceny;
CREATE TABLE oceny (
    nr_ucznia INTEGER,
    zach TEXT(10),
    rel_ety DECIMAL DEFAULT NULL,
    jpol DECIMAL,
    jang DECIMAL,
    jniem DECIMAL,
    mat DECIMAL,
    his DECIMAL,
    geo DECIMAL,
    bio DECIMAL,
    fiz DECIMAL,
    che DECIMAL,
    tech DECIMAL,
    inf DECIMAL DEFAULT NULL,
    plas DECIMAL,
    PO DECIMAL,
    WF DECIMAL DEFAULT NULL,    
    FOREIGN KEY (nr_ucznia) REFERENCES nazwiska(nr_ucznia)
);

INSERT INTO nazwiska(nr_ucznia, nazwisko, imie, drugie_imie)
VALUES (9201, "Adamczuk", "Agata", "");
INSERT INTO nazwiska
VALUES (9802, "Adamiuk", "Marta", "");
