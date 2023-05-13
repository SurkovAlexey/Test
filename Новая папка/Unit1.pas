{$reference 'System.Windows.Forms.dll'}
{$reference 'System.Drawing.dll'}
 
Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
    procedure listBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure label3_Click(sender: Object; e: EventArgs);
    
    procedure listBox2_SelectedIndexChanged(sender: Object; e: EventArgs);
    procedure button1_Enter(sender: Object; e: EventArgs);
    procedure Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    textBox1: TextBox;
    button1: Button;
    label1: &Label;
    listBox2: ListBox;
    label2: &Label;
    label3: &Label;
    listBox1: ListBox;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin 
  var integ:integer;
  if integer.tryparse(textbox1.Text,integ) then
  begin
    textbox1.backColor := color.red;
  
  if strtoint(textbox1.Text) mod 2 = 0 then
    begin
    
    listbox1.Items.Add($'{textbox1.Text}');
    label1.ForeColor := color.Green;
    label1.text := 'Четное'
    end;
  if strtoint(textbox1.Text) mod 2 <> 0 then
    begin
    
    listbox2.Items.Add(textbox1.Text);
    label1.ForeColor := color.deeppink;
    label1.text := 'НеЧетное'
    end;
    end
  else begin
    textbox1.backColor := color.lightcoral;
  label1.ForeColor := color.black;
  label1.text := 'Ошибочка'
  end;
  end;

procedure Form1.listBox1_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  MessageBox.Show($'{listbox1.SelectedItem} Число четное', 'Message', MessageBoxButtons.OK)
end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.label3_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.listBox2_SelectedIndexChanged(sender: Object; e: EventArgs);
begin
  MessageBox.Show($'{listbox2.SelectedItem} Число нечетное', 'Message', MessageBoxButtons.OK) 
end;

procedure Form1.button1_Enter(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
begin
  e.Cancel := System.Windows.Forms.MessageBox.Show('Уверен,что хочешь закрыть форму?', 
                'Закрытие формы', MessageBoxButtons.YesNo, MessageBoxIcon.Question) <> System.Windows.Forms.DialogResult.Yes;
end;


end.
