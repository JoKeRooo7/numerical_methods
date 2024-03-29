## Метод Ньютона

Метод Ньютона, также известный как метод касательных или метод касательных линий, является численным методом для нахождения корней уравнения f(x) = 0. Он основан на итеративном процессе, который использует локальное приближение функции касательной линией в точке текущего приближения, чтобы найти следующее приближение.


* Выбор начального приближения: Выбирается начальное приближение $x_0$ oбычно близкое к реальному корню уравнения.

* Итерационный процесс: Повторяется следующий итерационный процесс до достижения заданной точности или максимального числа итераций:

    * Вычисление значения функции: Для текущего приближения $x_n$ вычисляется значение функции  $f(x_n)$ 
    * Вычисление производной: Вычисляется значение производной функции $f`(x_n)$ в точке $x_n$
    * Коррекция приближения: Новое приближение $x_{n+1}$ вычисляется путем вычитания отношения $f(x_n) / f`(x_n) $из текущего приближения. То есть: $ x_{n+1} = x_n - \frac{{f(x_n)}}{{f`(x_n)}}$

* Проверка на сходимость: Проверяется условие завершения итерационного процесса. Обычно используется условие, при котором разница между последовательными приближениями меньше заданной точности или максимальное количество итераций достигнуто.

* Возврат результата: Возвращается найденное приближенное значение корня уравнения.

