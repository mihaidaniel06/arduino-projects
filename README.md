# 🚦 Semafor cu Buton pentru Pietoni – Arduino UNO

Acest proiect simulează funcționarea unui semafor pentru intersecții, cu două direcții opuse și un buton pentru pietoni. La apăsarea butonului, semaforul schimbă culoarea în mod sincronizat pentru a permite traversarea sigură.

## 🧰 Componente folosite

- 1x Placă **Arduino UNO R3**
- 6x LED-uri (2x roșii, 2x galbene, 2x verzi)
- 1x Buton (tact switch)
- 1x Buzzer activ
- Rezistențe (220Ω pentru LED-uri)
- Jumpere
- Breadboard

## ⚙️ Funcționalitate

- Inițial, semaforul A are **roșu**, iar semaforul B are **verde**.
- Când butonul este apăsat, se declanșează o secvență:
  - Se aprinde **verde** la semaforul A și **roșu** la B (pietoni pot traversa).
  - Buzzerul emite semnal cât timp este verde.
  - Se face tranziția prin **galben** la ambele semafoare.
  - Se revine la starea inițială.

## 🖥️ Cod sursă

Codul poate fi găsit în fișierul `semafor.ino`.

## 🔌 Conectare pinii LED-urilor

| LED        | Pin Arduino |
|------------|-------------|
| Verde A    | 8           |
| Galben A   | 12          |
| Roșu A     | 4           |
| Verde B    | 11          |
| Galben B   | 9           |
| Roșu B     | 10          |
| Buzzer     | 7           |
| Buton      | 2 (cu rezistență de pull-down) |

## 📸 Galerie

https://youtu.be/DQv5NBU3rqw
