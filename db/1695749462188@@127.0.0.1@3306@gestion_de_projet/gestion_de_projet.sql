-- Active: 1695749462188@@127.0.0.1@3306@gestion_de_projet

DROP TABLE if EXISTS COMPOSER;
DROP TABLE if EXISTS PARTICIPER;
DROP TABLE IF EXISTS PROJET;
DROP TABLE IF EXISTS TACHE;
DROP TABLE IF EXISTS INTERVENANT;
create table PROJET(
    Ref_Proj integer primary key AUTO_INCREMENT not null,
    Titre_Proj varchar(150) not null,
    Date_Debut_P date not null,
    Date_Fin_P date ,
    Tarif_par_J integer
);

create table TACHE(
    Num_Tache integer primary  key AUTO_INCREMENT not null,
    Designation varchar(150) not null,
    Date_Debut_T date not null,
    Date_Fin_T date,
    CI integer
);

CREATE TABLE INTERVENANT(
    Num_Interv integer PRIMARY KEY AUTO_INCREMENT not null,
    Nom_Interv VARCHAR(150) not null,
    Specialite VARCHAR(150)
);

CREATE TABLE COMPOSER(
    Ref_Proj integer   not null,
    Num_Tache integer  not null,
    Foreign Key (Ref_Proj) REFERENCES PROJET (Ref_Proj) ON DELETE CASCADE,
    Foreign Key (Num_Tache) REFERENCES TACHE(Num_Tache) ON DELETE CASCADE,
    PRIMARY KEY(Ref_Proj,Num_Tache), 
    UNIQUE(Ref_Proj,Num_Tache)
);

CREATE TABLE PARTICIPER(
    Num_Tache integer   not null,
    Num_Interv integer   not null,
    Foreign Key (Num_Tache) REFERENCES TACHE (Num_Tache) ON DELETE CASCADE,
    Foreign Key (Num_Interv) REFERENCES INTERVENANT(Num_Interv) ON DELETE CASCADE,
    PRIMARY KEY(Num_Tache,Num_Interv),
    UNIQUE(Num_Tache,Num_Interv)
);
