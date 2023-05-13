{$apptype windows}
{$reference 'System.Windows.Forms.dll'}
{$reference 'System.Drawing.dll'}
 
uses
  System,
  System.Windows.Forms,
  System.Drawing,
  Unit1,
  Unit2,
  Unit3;
var 
  myForm: Form;
  button,button1,button2 : Button;
  tool, tool1, tool2 : tooltip;
  label1: &Label;
  
procedure Click1(sender: Object; e: EventArgs);
begin
  //Скрываем первую форму
  myForm.Visible:=false;
  (new Form1).ShowDialog;
  //И показываем ее
  myForm.Visible:=true ;
end;

procedure Click2(sender: Object; e: EventArgs);
begin
  //Скрываем первую форму
  myForm.Visible:=false;
  (new Form2).ShowDialog; 
  //И показываем ее
  myForm.Visible:=true ;
end;
procedure Click3(sender: Object; e: EventArgs);
begin
  //Скрываем первую форму
  myForm.Visible:=false;
  (new Form3).ShowDialog;
  //И показываем ее
  myForm.Visible:=true ;
end;

procedure closing(sender: Object; e:System.ComponentModel.CancelEventArgs);
begin
   e.Cancel := System.Windows.Forms.MessageBox.Show('}{очешь закрыть форму?', 
                'Закрытие', MessageBoxButtons.YesNo, MessageBoxIcon.Question) <> System.Windows.Forms.DialogResult.Yes;
                
end;

begin 
  System.Windows.Forms.Application.EnableVisualStyles();
  System.Windows.Forms.Application.SetCompatibleTextRenderingDefault(false);

  myForm := new Form();
  myForm.StartPosition := FormStartPosition.CenterScreen;
  label1:= new &Label();
  label1.Location:= new Point(50,10);
  label1.Size := new size(210,40);
  label1.Text := 'Выберите лабораторную работу, Нажмите для запуска в новой форме, Задания во всплывающей подсказке.';
  myForm.Controls.Add(label1);
  button := new System.Windows.Forms.Button();
  button.Location := new Point(100, 60);
  button.Size := new size(100,30);
  button.Text := 'Лабораторная 1';
  button.Click += Click1;
  myForm.Controls.Add(button);
  //Делаем всплывающую подсказку для кнопки
  tool := new ToolTip();
  //Установим нужные интервалы
  tool.AutoPopDelay := 5000;
  tool.InitialDelay := 1000;
  tool.ReshowDelay := 500;
  //Даже если форма неактивна
  tool.ShowAlways := true;
  //Связываем нашу подсказку с кнопкой и присваиваем ей текст
  tool.SetToolTip(button, 'При выборе элемента указывается, элемент четный или не четный. Четный - запись зеленого цвета, нечетный - лилового.');
  
  button1 := new System.Windows.Forms.Button();
  button1.Location := new Point(100, 100);
  button1.Size := new size(100,30);
  button1.Text := 'Лабораторная 2';
  button1.Click += Click2;
  myForm.Controls.Add(button1);
  
  tool1 := new ToolTip();
  //Установим нужные интервалы
  tool1.AutoPopDelay := 5000;
  tool1.InitialDelay := 1000;
  tool1.ReshowDelay := 500;
  //Даже если форма неактивна
  tool1.ShowAlways := true;
  //Связываем нашу подсказку с кнопкой и присваиваем ей текст
  tool1.SetToolTip(button1, 'Прохождение теста и получение % правильных ответов');
  
  button2 := new System.Windows.Forms.Button();
  button2.Location := new Point(100, 140);
  button2.Size := new size(100,30);
  button2.Text := 'Лабораторная 3';
  button2.Click += Click3;
  myForm.Controls.Add(button2);
  
  tool2 := new ToolTip();
  //Установим нужные интервалы
  tool2.AutoPopDelay := 5000;
  tool2.InitialDelay := 1000;
  tool2.ReshowDelay := 500;
  //Даже если форма неактивна
  tool2.ShowAlways := true;
  //Связываем нашу подсказку с кнопкой и присваиваем ей текст
  tool2.SetToolTip(button2, 'Рассчет параметров треугольника на основе координат его вершин');
  
  myform.Closing += Closing;
  
  Application.Run(myForm);  
  
end.