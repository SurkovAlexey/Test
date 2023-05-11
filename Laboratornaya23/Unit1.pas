Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form) //описание формы и ее свойств
    procedure button1_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    label1: &Label;
    textBox1: TextBox;
    label2: &Label;
    label3: &Label;
    label4: &Label;
    label5: &Label;
    textBox2: TextBox;
    textBox3: TextBox;
    textBox4: TextBox;
    label6: &Label;
    button1: Button;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button1_Click(sender: Object; e: EventArgs); //процедура нажатия кнопки 
var a,b,c,d: real; // обьявление переменных
begin
  if real.TryParse(textbox1.Text.Replace(',','.'),a) and // проверка возможности считать число а из соответствующей строки
      real.TryParse(textbox2.Text.Replace(',','.'),b) and //  проверка  число b из соответствующей строки
       real.TryParse(textbox3.Text.Replace(',','.'),c) and //  проверка  число c из соответствующей строки
        real.TryParse(textbox4.Text.Replace(',','.'),d) then //  проверка  число d из соответствующей строки
            label6.Text := max(min(a,b),min(c,d)).ToString // рассчет и вывод
   else MessageBox.Show($'Числа введены не верно ', 'ошибка', MessageBoxButtons.OK)     //если хотябы одна проверка не прошла
end;

end.
