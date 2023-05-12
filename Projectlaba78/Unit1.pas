Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;
type logpass = record //логин и пароль это поля записи типа стринг, так же поле баланс
 log:string; // поле логин 
 pass:string; // поле пароль
 balance:=1000000; // поле баланс, первоначальный
 end;
 
var a : logpass; summa : integer; // обьявляем переменную типа запись для логина и сумму которую вводит пользователь
type
  Form1 = class(Form)   //описание формы и ее свойств
    procedure button2_Click(sender: Object; e: EventArgs);  
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal                               // обьекты формы
    {$resource Unit1.Form1.resources}
    panel1: Panel;
    button1: Button;
    panel2: Panel;
    button4: Button;
    button3: Button;
    button2: Button;
    label2: &Label;
    label1: &Label;
    label4: &Label;
    textBox3: TextBox;
    textBox2: TextBox;
    textBox1: TextBox;
    label3: &Label;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button2_Click(sender: Object; e: EventArgs); // при нажатии кнопки снять
begin
  if integer.TryParse(textbox1.Text,summa) then    // проверка корректности ввода
  begin
   summa := strtoint(textbox1.Text); // преобразование строки ввода в число
   textbox1.Text:='';
   if a.balance - summa >= 0 then // проверка достаточно ли баланса для снятия суммы 
     begin
   a.balance:= a.balance - summa; // пересчет баланса
   label1.Text:= $'Баланс {a.balance}'; //обновение отображения баланса
     end
     else MessageBox.Show($'Лимит превышен ', 'Message', MessageBoxButtons.OK); // если баланса не достаточно - сообщение
       
   end
  else
  begin
    MessageBox.Show($'Сумма введена не верно ', 'Message', MessageBoxButtons.OK); // если ввод суммы не коректен -  сообщение
  end;
end;

procedure Form1.button3_Click(sender: Object; e: EventArgs); // кнопка внести всё анологично, но без проверки баланса
begin
  if integer.TryParse(textbox1.Text,summa) then
  begin
    
  summa := strtoint(textbox1.Text);
  textbox1.Text:='';
  a.balance:= a.balance + summa;
   label1.Text:= $'Баланс {a.balance}';
  end
  else
  begin
    MessageBox.Show($'Сумма введена не верно ', 'Message', MessageBoxButtons.OK);
  end;
end;

procedure Form1.button4_Click(sender: Object; e: EventArgs); // кнопка выхода возвращает на панель с паролем 
begin
  
  panel1.Enabled:=true; // панель доступна
  panel1.Visible:=true; // панель видна
  panel2.Enabled:=false;
  panel2.Visible:=false;
  textbox2.Text:=''; // стираем введенные ранее логин и пароль 
  textbox3.Text:='';
  
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs); // 

begin
  // создание тестовых полей логина и пароля для записи а
  a.log:= 'gref';
  a.pass:= '123';
  
  if (textbox2.Text = a.log) and (textbox3.Text = a.pass) then  // если они введены верно
    begin
    
  label1.Text:= $'Баланс {a.balance}'; // активируем клиентскую панель и баланс 
  panel2.Enabled:=true;
  panel2.Visible:=true;
  panel1.Enabled:=false;
  panel1.Visible:=false;
  
    end
    
  else 
  begin
    textbox2.Text:='';
    textbox3.Text:='';
    MessageBox.Show($'Не верная комбинация ', 'Message', MessageBoxButtons.OK); //если не верные лог парол - сообщение
  end
end;

end.
