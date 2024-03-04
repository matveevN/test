Программа на С++, которая читает текстовый файл, удаляет заданное слово в каждой строке,
сортирует прочитанные строки без учета регистра символов и сохраняет в новый файл. Имена файлов 
и удаляемое слово должны задаваться через командную строку при вызове бинарного файла. 


Windows
test1.txt

Alexander Sergeyevich Pushkin is considered to be one of the greatest
Russian poets of all times. He was a famous writer of Romantic era.
Pushkin was born in 1799 and has lived a short but bright life.
Many people regard him as the founder of Russian modern literature.
Pushkin was born in a noble family and his first poem was published when
he was only 15. Although he was born in Moscow, he spent most of his youth
in the village near St Petersburg, in Tsarskoye Selo Lyceum. As a teenager
he was already a recognized by the literary establishment of his lyceum.

удалить Pushkin

Пример
создать два файла test1.txt test2.txt
запустить test.exe 
первый параметр C:\test\test1.txt
второй параметр C:\test\test2.txt
третий параметр Pushkin


Linux 
создать два файла test1.txt test2.txt
использовал vim
g++ test.cpp

первый параметр .\test1.txt
второй параметр .\test2.txt
третий параметр Pushkin


