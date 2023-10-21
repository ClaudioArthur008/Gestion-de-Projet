/* 2023-09-26 19:43:39 [76 ms] */ 
create table projet(
Ref_proj integer primary key not null,
Titre_Proj varchar(250) not null,
Date_Debut_P date not null,
Date_Fin_P date not null,
Tarif_par_J integer
);
/* 2023-09-26 19:45:45 [20 ms] */ 
DROP Table if EXISTS projet;
/* 2023-09-26 20:01:26 [9 ms] */ 
DROP Table if EXISTS COMPOSER;
/* 2023-09-26 20:01:28 [7 ms] */ 
DROP Table if EXISTS PARTICIPER;
/* 2023-09-26 20:01:48 [74 ms] */ 
create table PROJET(
    Ref_Proj integer primary key AUTO_INCREMENT not null,
    Titre_Proj varchar(250) not null,
    Date_Debut_P date not null,
    Date_Fin_P date not null,
    Tarif_par_J integer
);
/* 2023-09-26 20:01:51 [129 ms] */ 
create table TACHE(
    Num_Tache integer primary key not null,
    Titre_Proj varchar(250) not null,
    Date_Debut_T date not null,
    Date_Fin_T date not null,
    CI integer
);
/* 2023-09-26 20:01:53 [26 ms] */ 
CREATE TABLE INTERVENANT(
    Num_Interv integer PRIMARY KEY AUTO_INCREMENT not null,
    Nom_Interv VARCHAR(150) not null,
    Specialite VARCHAR(150)
);
/* 2023-09-26 20:02:04 [7 ms] */ 
DROP Table if EXISTS COMPOSER;
/* 2023-09-26 20:10:36 [7 ms] */ 
DROP Table if EXISTS PARTICIPER;
/* 2023-09-26 20:11:26 [7 ms] */ 
DROP Table if EXISTS COMPOSER;
/* 2023-09-26 20:12:04 [13 ms] */ 
DROP TABLE IF EXISTS PROJET;
/* 2023-09-26 20:12:05 [13 ms] */ 
DROP TABLE IF EXISTS TACHE;
/* 2023-09-26 20:12:07 [12 ms] */ 
DROP TABLE IF EXISTS INTERVENANT;
/* 2023-09-26 20:12:22 [26 ms] */ 
create table TACHE(
    Num_Tache integer primary  key AUTO_INCREMENT not null,
    Titre_Proj varchar(250) not null,
    Date_Debut_T date not null,
    Date_Fin_T date not null,
    CI integer
);
/* 2023-09-26 20:12:24 [25 ms] */ 
CREATE TABLE INTERVENANT(
    Num_Interv integer PRIMARY KEY AUTO_INCREMENT not null,
    Nom_Interv VARCHAR(150) not null,
    Specialite VARCHAR(150)
);
/* 2023-09-26 20:12:42 [195 ms] */ 
create table PROJET(
    Ref_Proj integer primary key AUTO_INCREMENT not null,
    Titre_Proj varchar(250) not null,
    Date_Debut_P date not null,
    Date_Fin_P date not null,
    Tarif_par_J integer
);
/* 2023-09-26 20:12:49 [44 ms] */ 
CREATE TABLE PARTICIPER(
    Num_Tache integer   not null,
    Num_Interv integer   not null,
    Foreign Key (Num_Tache) REFERENCES TACHE (Num_Tache) ON DELETE CASCADE,
    Foreign Key (Num_Interv) REFERENCES INTERVENANT(Num_Interv) ON DELETE CASCADE,
    PRIMARY KEY(Num_Tache,Num_Interv),
    UNIQUE(Num_Tache,Num_Interv)
);
/* 2023-09-26 20:12:56 [38 ms] */ 
CREATE TABLE COMPOSER(
    Ref_Proj integer   not null,
    Num_Tache integer  not null,
    Foreign Key (Ref_Proj) REFERENCES PROJET (Ref_Proj) ON DELETE CASCADE,
    Foreign Key (Num_Tache) REFERENCES TACHE(Num_Tache) ON DELETE CASCADE,
    PRIMARY KEY(Ref_Proj,Num_Tache), 
    UNIQUE(Ref_Proj,Num_Tache)
);
