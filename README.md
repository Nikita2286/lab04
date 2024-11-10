SnakeGame - Descrierea și Regulile Jocului
SnakeGame este o implementare clasică a jocului retro „Snake”. În acest joc, utilizatorul controlează un șarpe într-un spațiu delimitat, având scopul de a mânca „mere” sau alte obiecte care apar aleatoriu pe tablă. Fiecare obiect consumat extinde lungimea șarpelui, iar jocul devine mai provocator pe măsură ce acesta crește. Jucătorul trebuie să evite coliziunile cu pereții și cu propriul corp al șarpelui, întrucât acestea duc la finalizarea jocului.

Fișierele Proiectului și Funcționalitatea lor
snake.cpp și snake.hpp
Modificări: Structura care stoca segmentele șarpelui a fost schimbată dintr-un array static în std::vector, un container din biblioteca standard C++ care permite o mai ușoară gestionare a dimensiunii. De asemenea, în locul pointerilor și alocărilor manuale de memorie, se folosesc acum referințe și containerul std::vector, ceea ce simplifică gestionarea memoriei.
Clasa Snake: Clasa reprezintă șarpele, având funcții pentru mutarea (Move) și creșterea (Grow) acestuia, precum și pentru obținerea poziției capului (GetHeadPosition). Parametrii sunt gestionați prin referințe pentru o mai bună eficiență.
painter.hpp și painter.cpp
Clasa Painter: Clasa Painter extinde funcționalitatea unei clase abstracte (AbstractPainter), fiind responsabilă de desenarea pe tablă și afișarea textului.
Metode:
DrawImage(Point topLeft, Point bottomRight, std::vector<std::string> image): Desenează o imagine pe tablă între două puncte date.
WriteText(Point position, std::string text): Afișează un text la o poziție specificată de coordonatele unui obiect Point.
point.hpp și point.cpp
Structura Point: Structura Point este definită pentru a reprezenta un punct cu coordonatele x și y.
Funcționalitate:
Constructorul inițializează punctul cu valorile specificate (implicit, x și y sunt 0).
Operatorii supraîncărcați permit copierea și compararea valorilor punctelor, precum și citirea și afișarea lor din/în fluxuri.
board.hpp și board.cpp
Clasa Board: Clasa reprezintă tabloul de joc cu dimensiuni predefinite de lățime și înălțime.
Funcționalitate:
Constructorii inițializează dimensiunile tabloului (implicit 20x20), iar metoda GetWidth() și GetHeight() returnează dimensiunile respective.
Operatorii de atribuire și de comparare permit copierea și verificarea egalității între două obiecte Board, iar operatorii de flux oferă funcționalitate de citire și afișare.
abstract_painter.hpp
Modificări: În locul tipurilor char* și char**, se folosesc std::string și std::vector<std::string> pentru a fi compatibile cu celelalte componente ale proiectului și pentru o mai ușoară gestionare a memoriei.
Makefile
Modificări: Makefile a fost ajustat pentru a include snake.cpp și pentru a compila fișierele folosind standardul C++17, necesar pentru utilizarea STL.
Funcționalitate:
Comanda make all compilează și leagă fișierele sursă pentru a genera executabilul final.
Comanda make clean șterge fișierele obiect și executabilul pentru a elibera spațiu sau pentru a reface compilarea.
