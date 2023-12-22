# Основы оптимального управления
## Симплекс-метод линейного программирования

**Всем привет! ✌**

В данной теме используйте закон [Равномерного распределения случайных величин](https://github.com/MyNameIsVoo/UniformNormalDistribution_WinForms_Cpp/blob/master/README.md#1-%D0%BC%D0%BE%D0%B4%D0%B5%D0%BB%D0%B8%D1%80%D0%BE%D0%B2%D0%B0%D0%BD%D0%B8%D0%B5-%D1%80%D0%B0%D0%B2%D0%BD%D0%BE%D0%BC%D0%B5%D1%80%D0%BD%D0%BE%D0%B3%D0%BE-%D1%80%D0%B0%D1%81%D0%BF%D1%80%D0%B5%D0%B4%D0%B5%D0%BB%D0%B5%D0%BD%D0%B8%D1%8F)

## Цель работы

Изучение экспериментальных методов получения случайных процессов с заданными статистическими характеристиками путем пропускания белого шума через формирующий фильтр, а также изучение методов определения статистических характеристик случайного стационарного эргодического  процесса по его реализации.

## Общая характеристика

При исследовании динамики систем методом моделирования возникает задача воспроизведения случайных процессов с заданными статистическими свойствами. Эту задачу можно решить путем пропускания белого шума через формирующий фильтр.

В общем случае случайную функцию можно считать заданной, если известны  все многомерные законы распределения для любых значений   из области аргумента t. В рамках корреляционной теории случайную  функцию характеризуют математическим ожиданием:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/6c3787c7-45cd-49d4-a47d-711daff5989c)

и корреляционной функцией:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/b9cc327e-b9b7-4d4a-8188-10500f97ce3b)

где ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/cc7b9fd8-8388-496f-a1e4-951f4ae07834) - центрированная случайная функция, ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/39a1d9d5-4125-4e67-b719-9c4481aa438d)
  -одномерный и двумерный дифференциальные законы распределения.

Корреляционная функция ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/b16a977d-0d17-4433-b1b2-fd41108d2d23)
 при значении ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/760fb90c-8ea1-4a53-8955-87ebd566c848) 
представляет собой дисперсию случайного процесса:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/944ce441-f1ac-4d2e-ac91-27628c31ec9e)

Если случайная функция x(t) является стационарной, то справедливы соотношения:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/4d80a059-f981-4c9b-9dc8-c3487ac47689)

Случайная функция x(t) обладает эргодическим свойством, если ее характеристики m(x), ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/1a35568b-1664-4a40-aab0-da8bfb98913c)
могут быть определены осреднением по времени одной реализации достаточной длительности. Достаточным условием эргодичности стационарной случайности функция является стремлением к нулю ее корреляционной функции:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/4faf7a85-f60a-4cdf-a569-98ac16f2f65b)

Наряду с корреляционной функцией стационарную, случайную функцию можно характеризовать спектральной плотностью ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/b797baa6-fbb0-462d-8cfe-5a9acefc0c30)
. Спектральная плотность и корреляционная функция однозначно получаются друг из друга как прямое и обратное преобразования Фурье:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/5b87918e-46f5-43ba-80da-aa6f4d6bda24)

Спектральная плотность характеризует распределение дисперсии случайного процесса по частотам его гармонических составляющих:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/98564ace-b723-4046-8bef-21ecbbfa84b7)

При исследовании двух x(t), y(t) или более случайных процессов в рассмотрении вводятся взаимные корреляционные функции ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/5b670e36-c8ef-4846-aea7-8a7f85cc0094)
 и взаимные спектральные плотности ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/6e93aa3a-3c05-4773-8f92-d924771420bf)
 :

 ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/fa2b2f59-a620-4e5f-b0ab-a208c4132e81)

Стационарный, случайный процесс, обладающий постоянной спектральной плотностью:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/a4611eea-9503-401f-94e2-a0f78582a1f7)

принято называть белым шумом. Его корреляционная функция согласно (6)

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/6f65618a-0723-4d0b-b91a-9d7b2c447aec)

где ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/81192898-8e84-4692-b898-bc45ec605195)
 - дельта-функция.

Дисперсия такого случайного процесса, как следует из (7), равна бесконечности, поэтому определенный выше белый шум является математической абстракцией и физически не реализуем.

В практических задачах под белым шумом понимает случайный процесс, спектральная плотность которого постоянно в широком диапазоне частот перекрывают полосу пропускания исследуемой системы. В лабораторных исследованиях случайные процессы такого вида получаются с помощью специальных приборов-генераторов белого шума.

В основу метода получения из белого шума случайных процессов с различными спектральными плоскостями положено свойство динамической системы изменять спектральный состав входных воздействий. Для систем, динамические свойства которые описывают передаточной функцией Ф(p), формула, связывающая спектральные плотности входного x(t) и выходного y(t) сигналов, имеет вид:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/04da3af5-f76a-4889-b2c4-6401e58fcc17)

Если входным сигналом является нормированный белый шум со спектральной плотностью ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/77565733-73b4-41b6-a41a-efdebf8a3b17)
 , то спектральная плотность выходного сигнала: 

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/edfd8c62-59bf-4446-ad7c-cb30bd4e0c35)

Эта формула позволяет способ определения передаточной функции формирующего фильтра, преобразующего белый шум в случайный процесс с заданной спектральной плотностью. Для этого надо спектральную плотность представить в виде произведения двух комплексно сопряженных сомножителей:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/dcaefaf1-b1ed-46ba-8d85-24115f4bfaf5)

Тогда передаточная функция формирующего фильтра находится по формуле:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/d5da05e2-f01c-4172-826b-7e68e10d158c)

Разложение (15) возможно, если спектральная плотность ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/8e92ab72-ae0d-4cc2-9eea-11e81662f9d4)
  является дробно- рациональной функцией.

## Определение характеристик стационарных процессов по реализациям

При работе динамической системы на ее входы действуют случайные сигналы, вероятные характеристики которые обычно известны. Во многих прикладных задачах вероятные характеристики случайных процессов определяются экспериментально путем обработки реализации этих процессов.

В лабораторной работе считается, что заданы реализации случайных процессов x(t) и y(t) в дискретном ряде точек:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/194c3f66-baaf-49ce-83ed-0b8294846d56)

Требуется определить оценки математических ожиданий, дисперсий, корреляционных и взаимных корреляционных функций этих процессов. Оценки вероятностных характеристик эргодических случайных процессов определяются по известным формулам математической статистики.

Оценка математического ожидания рассчитывается по формуле:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/ad165e5b-ca7c-4287-af8d-8043f9572790)

Оценка дисперсии рассчитывается по формуле:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/36a14bd5-469e-4e74-bb73-666b9a8743fe)

За оценку среднеквадратического отклонения можно принять:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/9df70d5f-a901-494a-9241-d5d2e27c342c)

В качестве оценки корреляционной функции случайного процесса принимаются выражения:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/ec767525-84e5-4f72-9aa3-4fba30ec36a5)

## Порядок выполнения работы

Целью данной работы является формирование из белого шума случайного процесса с корреляционной функцией:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/f13b3f7c-6918-4199-8faf-c2918efdd64e)

Для определения передаточной функции соответствующего формирующего фильтра найдем спектральную плотность:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/066ebf6c-fc73-4212-a854-7b2df968a181)

Полученное выраженье запишем в формуле (15):

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/776ba7fe-5629-4dc7-807e-7ea350ab8f15)

Отсюда, на основании (16), передаточная функция формирующего фильтра:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/6e40920f-0f2a-423f-a6b8-8faa0e8a4453)

где ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/c7676d86-059d-4746-908b-32b565443c78)

Таким образом, для получения случайного процесса с корреляционной функцией (17) надо пропустить белый шум через фильтр с передаточной функцией (19). Соответствующее дифференциальное уравнение имеет вид:

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/5636aefc-f8e4-4f6b-a2f4-fd5929989268)

где ![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/72454821-3e51-4895-a401-058ebabb3578)

## Исходные данные

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/d9c9b045-0c24-4087-97d5-fe874792725c)

## Результаты вычислений

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/8cf748d6-9dab-455e-a2b3-80ecb7737d30)

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/5319f59b-3cc7-45db-94ed-ff088d7dc325)

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/74b093b6-9279-43cc-a356-bf48682501c7)

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/0fe7364c-f48f-4577-b2be-bd207fb094a9)

> [!WARNING]
> **ВНИМАНИЕ!** На всех ЭВМ будет различный результат!

> [!WARNING]
> **ВНИМАНИЕ!** Это мой первый опыт ведения подобного дневника. Есть замечания - пишите! Есть предложения - пишите! Я вас слушаю и слышу! Спасибо за внимание!

## Внешний вид программы

![image](https://github.com/MyNameIsVoo/FormationOfRandomProcessFromWhiteNoise_WinForms_Cpp/assets/95473945/b8138b46-005e-4d71-88ef-8c2c653d6bf4)


# Ссылки

## Если нужен код без воды - вам сюда
> Ссылка с консольными: [Консольные](https://github.com/MyNameIsVoo/MyWorks_Cpp/blob/master/README.md)
