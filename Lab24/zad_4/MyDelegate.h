#pragma once
using namespace System;

namespace zad4
{
	public delegate void MyDelegate(String^ data);//в пространстве имен программы Lab75 глобально 
	//декларируем делегат как ссылку на метод, который принимает объект типа String ^ (это управл€емый
	//—борщиком мусора указатель на строку символов(char'овский массив)) и ничего не возвращает (void) 
}