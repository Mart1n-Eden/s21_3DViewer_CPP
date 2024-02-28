# 3DViewer_CPP_V2.0

В проекте на языке программирования С++ реализована программа для просмотра 3D моделей в каркасном виде (3D Viewer). Сами модели необходимо загружать из файлов формата .obj, после чего появляется возможность просматривать их на экране с возможностью вращения, масштабирования и перемещения. Так же программа позволяет:
 - настраивать тип проекции (параллельная и центральная)
 - настраивать тип (отсутствует, сплошная, пунктирная), цвет и толщину ребер, способ отображения (отсутствует, круг, квадрат), цвет и размер вершин
 - выбирать цвет фона
 - сохраняется между перезапусками программы
 - сохранять полученные ("отрендеренные") изображения в файл в форматах bmp и jpeg
 - записывать небольшие "скринкасты" - текущие пользовательские аффинные преобразования загруженного объекта в gif-анимацию (640x480, 10fps, 5s)


## Реализация 3DViewer_CPP_V2.0

- Программа разработана на языке С++ стандарта C++17 с использованием дополнительных библиотек и модулей QT.
- Код программы находится в папке src.
- Программа разработана в соответствии с принципами объектно-ориентированного программирования.
- Программа реализована с использованием паттерна MVC.
- При написании программы использованы два паттерна проектирования (Одиночка,  Наблюдатель).
- Сборка программы настроена с помощью Makefile со стандартным набором целей для GNU-программ: all, install, uninstall, clean, dvi, dist, tests, gcov_report.
- Обеспечено покрытие unit-тестами модулей, связанных с загрузкой моделей и аффинными преобразованиями
- В один момент времени должна быть только одна модель на экране.
- Программа предоставляет возможность:
    - Загружать каркасную модель из файла формата obj (поддержка только списка вершин и поверхностей).
    - Перемещать модель на заданное расстояние относительно осей X, Y, Z.
    - Поворачивать модель на заданный угол относительно своих осей X, Y, Z
    - Масштабировать модель на заданное значение.
- В программе реализован графический пользовательский интерфейс, на базе любой GUI-библиотеки Qt
- Графический пользовательский интерфейс содержит:
    - Кнопку для выбора файла с моделью и поле для вывода его названия.
    - Зону визуализации каркасной модели.
    - Кнопку/кнопки и поля ввода для перемещения модели. 
    - Кнопку/кнопки и поля ввода для поворота модели. 
    - Кнопку/кнопки и поля ввода для масштабирования модели.  
    - Информацию о загруженной модели - название файла, кол-во вершин и ребер.
- Программа корректно обрабатывает и позволяет пользователю просматривать модели с деталями до 100, 1000, 10 000, 100 000, 1 000 000 вершин.
