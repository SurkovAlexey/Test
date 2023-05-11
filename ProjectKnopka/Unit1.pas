Unit Unit1;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  Form1 = class(Form)
  procedure RunButton(sender: object; e: EventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button1_MouseEnter(sender: Object; e: EventArgs);
    procedure hardToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure mediumToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure easyToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure exitToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure gameToolStripMenuItem_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  internal
    {$resource Unit1.Form1.resources}
    button1: Button;
    label1: &Label;
    menuStrip1: MenuStrip;
    gameToolStripMenuItem: ToolStripMenuItem;
    newGameToolStripMenuItem: ToolStripMenuItem;
    hardToolStripMenuItem: ToolStripMenuItem;
    mediumToolStripMenuItem: ToolStripMenuItem;
    easyToolStripMenuItem: ToolStripMenuItem;
    exitToolStripMenuItem: ToolStripMenuItem;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation
Var t:= new Timer; Score, lvl, x : integer;

procedure Form1.RunButton(sender: object; e: EventArgs);
begin
  var rnd: Random := new Random();
  button1.Top:= rnd.next(Height - Button1.Size.Height);
  button1.Left := rnd.next(Width - Button1.Size.Width);
end;

procedure Form1.button1_Click(sender: Object; e: EventArgs);
begin
  
  t.dispose;
  var rnd: Random := new Random();
  button1.Top:= rnd.next(Height - Button1.Size.Height);
  button1.Left := rnd.next(Width - Button1.Size.Width);
  //massagebox
  Score:= Score+10*lvl;
  if lvl < 25 then lvl:=lvl+1;
  
  label1.Text:= $'Score {Score}';
 
  t.Interval := 1500-50*lvl;
  t.Tick += RunButton;
  t.Start;
  button1.Visible := true;
end;

procedure Form1.button1_MouseEnter(sender: Object; e: EventArgs);
begin
  
  
end;

procedure Form1.hardToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Score:= 0;
  lvl:=20;
  button1.Top := 230;
  button1.Left := 345;
  button1.Visible := true;
  button1.Enabled := true;
  label1.Text:= $'Score {Score}';
end;

procedure Form1.mediumToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Score:= 0;
  lvl:=10;
  button1.Top := 230;
  button1.Left := 345;
  button1.Visible := true;
  button1.Enabled := true;
  label1.Text:= $'Score {Score}';
end;

procedure Form1.easyToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Score:= 0;
  lvl:=1;
  button1.Top := 230;
  button1.Left := 345;
  button1.Visible := true;
  button1.Enabled := true;
  label1.Text:= $'Score {Score}';
end;

procedure Form1.exitToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  close
end;

procedure Form1.gameToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  Score:= 0;
  label1.Text:= $'Score {Score}';
  t.Dispose;
  button1.Top := 230;
  button1.Left := 345;
end;

end.
