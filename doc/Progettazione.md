# Progettazione


1. [Introduzione](#introduzione)

  - [Informazioni sul progetto](#informazioni-sul-progetto)

  - [Abstract](#abstract)

  - [Scopo](#scopo)

2. [Analisi](#analisi)

  - [Analisi del dominio](#analisi-del-dominio)

  - [Analisi e specifica dei requisiti](#analisi-e-specifica-dei-requisiti)

3. [Use case](#use-case)

  - [Pianificazione](#pianificazione)

  - [Analisi dei mezzi](#analisi-dei-mezzi)

4. [Progettazione](#progettazione)

  - [Design dell’architettura del sistema](#design-dell’architettura-del-sistema)

  - [Design dei dati e database](#design-dei-dati-e-database)



## Introduzione

### Informazioni sul progetto

Scuola SAMT - Scuola arti e mestieri Trevano

Sezione: Informatica

Materia: Modulo 306

Allievi:

- Samuel Dias Da Silva
- Loris Bruno
- Alessandro Narciso
- Massimo Saia
- Carlo Bogani


Docente responsabile:

- Adriano Barchi

Data di inizio: 27.01.2017

Data di fine: 11.05.2017

### Abstract

<!--Esempio di Abstract-->

  > The cookbooks are very present in kitchens, but   
  > sometimes those can be cumbersome.
  > For solve this problem there is the use of tecnology,   
  > some people use tablets, mobile phone, etc.
  > We were requested to realize a site of recipes's management.

### Scopo

Lo scopo del progetto è quello di realizzare un orologio a parole. Questo dovrà
essere presente in due modelli, uno fisico ed uno virtuale. Su quello fisico
verrà mostrata l'ora scritta con delle parole retroilluminate, questo sarà
controllato da quello virtuale sul quale verrà mostrata l'ora come nel modello
fisico. La parte fisica deve sincronizzarsi alla parte virtuale tramite Wi-Fi.

## Analisi

### Analisi del dominio

  Questo capitolo dovrebbe descrivere il contesto in cui il prodotto verrà
  utilizzato, da questa analisi dovrebbero scaturire le risposte a quesiti
  quali ad esempio:

  -   Background/Situazione iniziale

  -   Quale è e come è organizzato il contesto in cui il prodotto dovrà
      funzionare?

  -   Come viene risolto attualmente il problema? Esiste già un prodotto
      simile?

  -   Chi sono gli utenti? Che bisogni hanno? Come e dove lavorano?

  -   Che competenze/conoscenze/cultura posseggono gli utenti in relazione
      con il problema?

  -   Esistono convenzioni/standard applicati nel dominio?

  -   Che conoscenze teoriche bisogna avere/acquisire per poter operare
      efficacemente nel dominio?

  -   …

### Analisi e specifica dei requisiti

  |ID  |REQ-001                                         |
  |----|------------------------------------------------|
  |**Nome**    |Ergonomia |
  |**Priorità**|1                     |
  |**Versione**|1.0                   |
  |**Note**    ||
  |            |**Sotto requisiti** |
  |**001**  | L’orologio dovrà mostrare le ore in italiano secondi il modo di espressione corrente  |
  |**002**  | La posizione delle parole dovrà essere ottimizzata per una facile lettura   |
  |**003**  | Dovrà avere una risoluzione minima di cinque minuti   |
  |**004**  | L’intervallo tra i cinque minuti dovrà essere mostrato con una rappresentazione grafica intuitiva, risoluzione minima di un minuto. Considerare eventualmente anche una rappresentazione dei secondi.  |

  |ID  |REQ-002                                         |
  |----|------------------------------------------------|
  |**Nome**    |Modello fisico |
  |**Priorità**|1                     |
  |**Versione**|1.0                   |
  |**Note**    ||
  |            |**Sotto requisiti** |
  |**001**  | Il sistema di controllo del display a parole dovrà comunque già essere dimensionato, oppure prevedere un’espansione, per controllare un modello più grande di ca. 2m x 2m  |
  |**002**  | Il modello fisico dovrà essere alimentato autonomamente ed essere sincronizzato automaticamente (tramite Wi-Fi sui diversi time server a disposizione)  |
  |**003**  | In caso di interruzione di alimentazione, un RTC alimentato a batteria dovrà mantenere l’ora sincronizzata in modo che al ritorno dell’alimentazione, l’orologio sia già corretto  |
  |**004**  | Il modello fisico dovrà poter essere controllato (accensione, correzione dell’ora) anche direttamente onboard  |

  |ID  |REQ-003                                         |
  |----|------------------------------------------------|
  |**Nome**    |Modello virtuale |
  |**Priorità**|1                     |
  |**Versione**|1.0                   |
  |**Note**    ||
  |            |**Sotto requisiti** |
  |**001**  | Il modello virtuale dovrà avere la stessa rappresentazione grafica di quello fisico |
  |**002**  | Sincronizzazione con il modello fisico |
  |**003**  | Tramite un accesso ristretto dovrà permettere di controllare il modello fisico e di testarne l’integrità permettendo l’accensione simultanea di tutti i led   |

### Use case

![Use Case](Allegati/use_case.png)

In questo schema abbiamo rappresentato tutti i rispettivi casi dell'applicativo
web (modello virtuale).

### Pianificazione

![Gantt](Allegati/gantt.PNG)

Le attività evidenziate di colore verde nel diagramma di Gantt, sono in parallelo.

### Analisi dei mezzi

Questo prodotto sarà compreso in un costrutto di legno per il modello fisico, ed
in un web server per il modello virtuale.   

I mezzi per realizzare il tutto sono i seguenti:

-
-
-
-
-
-
-
-
-  
-



## Progettazione

Questo capitolo descrive esaustivamente come deve essere realizzato il
prodotto fin nei suoi dettagli. Una buona progettazione permette
all’esecutore di evitare fraintendimenti e imprecisioni
nell’implementazione del prodotto.

### Design dell’architettura del sistema

Descrive:

-   La struttura del programma/sistema lo schema di rete...

-   Gli oggetti/moduli/componenti che lo compongono.

-   I flussi di informazione in ingresso ed in uscita e le
    relative elaborazioni. Può utilizzare *diagrammi di flusso dei
    dati* (DFD).

-   Eventuale sitemap

### Design dei dati e database

Descrizione delle strutture di dati utilizzate dal programma in base
agli attributi e le relazioni degli oggetti in uso.

### Schema E-R, schema logico e descrizione.

Se il diagramma E-R viene modificato, sulla doc dovrà apparire l’ultima
versione, mentre le vecchie saranno sui diari.

### Design delle interfacce

Descrizione delle interfacce interne ed esterne del sistema e
dell’interfaccia utente. La progettazione delle interfacce è basata
sulle informazioni ricavate durante la fase di analisi e realizzata
tramite mockups.

### Design procedurale

Descrive i concetti dettagliati dell’architettura/sviluppo utilizzando
ad esempio:

-   Diagrammi di flusso e Nassi.

-   Tabelle.

-   Classi e metodi.

-   Tabelle di routing

-   Diritti di accesso a condivisioni …

Questi documenti permetteranno di rappresentare i dettagli procedurali
per la realizzazione del prodotto.
