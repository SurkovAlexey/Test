Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;
type
  Form1 = class(Form)
   
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure label1_Click(sender: Object; e: EventArgs);
    procedure label2_Click(sender: Object; e: EventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    textBox1: TextBox;
    button1: Button;
    label1: &Label;
    label2: &Label;
    button2: Button;
    label3: &Label;
    label4: &Label;
    textBox2: TextBox;
    textBox3: TextBox;
    label5: &Label;
    label6: &Label;
    label7: &Label;
    textBox4: TextBox;
    label8: &Label;
    label9: &Label;
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
var s := new hashset<string>;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
    var integ:integer;
    var ll2 : string;
  if integer.tryparse(textbox1.Text,integ) then
     begin
       textbox1.backColor := color.lightGreen;
        if integer.tryparse(textbox4.Text,integ) then
          begin
          textbox4.backColor := color.lightGreen;
          var year := strtoint(textbox1.Text)  ;
          var dt := new DateTime(year,1,1); 
               if (dt.AddDays(strtoint(textbox4.Text)-1)).year < (year+1) then
               begin
                ll2 := dt.Adddays(strtoint(textbox4.Text)-1).Day.tostring;
                s.add($'{ll2}.{(dt.Adddays(strtoint(textbox4.Text)-1).Month):d2}');
                label9.text := $'{ll2}.{dt.Adddays(strtoint(textbox4.Text)-1).Month:d2}';
                listbox1.Items.Clear;
                for var i:=0 to s.toarray.High do
                listbox1.Items.Add((s.ToArray)[i]);
               end
               else MessageBox.Show($'{textbox4.Text} день в {dt.AddDays(strtoint(textbox4.Text)-1).year} году', 'Message', MessageBoxButtons.OK)
         end
         
        else 
           begin
           textbox4.backColor := color.lightcoral;
           label9.text := 'Error';
           end
    end;     
    if not integer.tryparse(textbox1.Text,integ) then  
      begin
      textbox1.backColor := color.lightcoral;
      label9.text := 'Error';
      end;
  

end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.label1_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.label2_Click(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  
end;

procedure Form1.button2_Click(sender: Object; e: EventArgs);
begin
  var pi := 3.14;
  var kof := 0.6;
  var rad,stor:integer;
   if not integer.tryparse(textbox2.Text,rad) then 
      begin
        textbox2.backColor := color.lightcoral;
        label7.BackColor := color.lightcoral;
        label7.text := 'Error';
      end;
   if not integer.tryparse(textbox3.Text,stor) then 
      begin
        textbox3.backColor := color.lightcoral;
        label7.BackColor := color.lightcoral;
        label7.text := 'Error';
      end;
   if integer.tryparse(textbox2.Text,rad) then
      begin
        textbox2.backColor := color.lightgreen;
      end;
   if integer.tryparse(textbox3.Text,stor) then
      begin
        textbox3.backColor := color.lightgreen;
      end;
   if integer.tryparse(textbox2.Text,rad) and integer.tryparse(textbox3.Text,stor) then
      begin
        rad:=strtoint(textbox2.Text);
        stor:=strtoint(textbox3.Text);
          if rad > kof*stor then
            begin
              label7.BackColor := color.lightgreen;
            label7.ForeColor := color.lime;
             label7.text := ' Влезет ';
            end;
          if rad < kof*stor then 
            begin
            label7.BackColor := color.lightcoral;
            label7.ForeColor := color.Red;
            label7.text := ' Не Влезет ';
            end;
          if rad = kof*stor then
            begin
              label7.BackColor := color.lightgreen;
            label7.ForeColor := color.lime;
             label7.text := ' Идеально !';
            end;
      end;
  
end;



end.
