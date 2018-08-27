unit Unit1;

{$mode objfpc}{$H+}

interface

uses
  Classes, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls,
  Menus, validator;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Memo1: TMemo;
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure Button3Click(Sender: TObject);
    procedure Edit1Change(Sender: TObject);
    procedure FormCloseQuery(Sender: TObject; var CanClose: boolean);
    procedure FormCreate(Sender: TObject);
    procedure Label1Click(Sender: TObject);
    procedure Label1Resize(Sender: TObject);
    procedure Label2Click(Sender: TObject);
    procedure Label3Click(Sender: TObject);
    procedure Label3DragDrop(Sender, Source: TObject; X, Y: Integer);
    procedure Label5Click(Sender: TObject);
    procedure Memo1Change(Sender: TObject);
    procedure MenuItem1Click(Sender: TObject);
    procedure ToggleBox1Change(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  Form1: TForm1;
  year, month, day: Word;
  m: array [1..12] of string = ('Січень', 'Лютий', 'Березень', 'Квітень', 'Травень', 'Червень', 'Липень', 'Серпень', 'Вересень', 'Жовтень', 'Листопад', 'Грудень');
  prov: boolean;
  verse: string;
  entstrlwrcs: string;
  entstr: string;
  nomer: integer;
  rand: integer;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.FormCloseQuery(Sender: TObject; var CanClose: boolean);
begin

end;

procedure TForm1.FormCreate(Sender: TObject);
begin

end;

procedure TForm1.Label1Click(Sender: TObject);
begin

end;

procedure TForm1.Label1Resize(Sender: TObject);
begin

end;

procedure TForm1.Label2Click(Sender: TObject);
begin

end;

procedure TForm1.Label3Click(Sender: TObject);
begin

end;

procedure TForm1.Label3DragDrop(Sender, Source: TObject; X, Y: Integer);
begin

end;

procedure TForm1.Label5Click(Sender: TObject);
begin

end;

procedure TForm1.Memo1Change(Sender: TObject);
begin

end;

procedure TForm1.MenuItem1Click(Sender: TObject);
begin

end;

procedure TForm1.ToggleBox1Change(Sender: TObject);
begin

end;

procedure TForm1.Button1Click(Sender: TObject);
begin
  DecodeDate(Date,year,month,day);
  label5.caption:= Format('%s %d року', [m[month],year]);
end;

procedure TForm1.Button2Click(Sender: TObject);
begin
  randomize;
  rand:= random(6)+5;
  label5.caption:= IntToStr(rand);
end;

procedure TForm1.Button3Click(Sender: TObject);
begin
  verse:= LowerCase('кожен має право на достатній життєвий рівень для себе і своєї сімї, що включає достатнє харчування, одяг, житло');
  entstr:=Memo1.Text;
  prov:= validation(entstr);
  if (prov=true) then
       begin
  entstrlwrcs:= AnsiLowerCase(entstr);
  nomer:=pos(entstrlwrcs, verse);
  if (nomer<>0) then
      label5.caption:='Таке слово є в 48 статті Конституції України'
  else
      label5.caption:='Слово відсутнє'
      end
  else label5.caption:='Некоректні данні. Будь ласка, введіть слово.';
end;

procedure TForm1.Edit1Change(Sender: TObject);
begin

end;

end.

