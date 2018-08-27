unit unit2;

{$mode objfpc}{$H+}

interface

uses
  Classes, Validator1_2, Math, SysUtils, FileUtil, Forms, Controls, Graphics, Dialogs, StdCtrls;

type

  { TForm1 }

  TForm1 = class(TForm)
    Button1: TButton;
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Edit4: TEdit;
    Label1: TLabel;
    Label2: TLabel;
    Label3: TLabel;
    Label4: TLabel;
    Label5: TLabel;
    Label6: TLabel;
    Label7: TLabel;
    procedure Button1Click(Sender: TObject);
    procedure Edit1Change(Sender: TObject);
    procedure Edit2Change(Sender: TObject);
    procedure Edit3Change(Sender: TObject);
    procedure Edit4Change(Sender: TObject);
    procedure Edit5Change(Sender: TObject);
    procedure FormCreate(Sender: TObject);
    procedure Label1Click(Sender: TObject);
    procedure Label8Click(Sender: TObject);
  private
    { private declarations }
  public
    { public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.lfm}

{ TForm1 }

procedure TForm1.FormCreate(Sender: TObject);
begin

end;

procedure TForm1.Button1Click(Sender: TObject);
var x, y, z : String;
  x1, y1, z1 : smallint;
  q : Real;
begin
  x:=Edit1.Text;
  y:=Edit2.Text;
  z:=Edit3.Text;
   if valid(x,y,z) = true
   then begin
           x1:=StrToInt(x);
           y1:=StrToInt(y);
           z1:=StrToInt(z);
           if valid2(x1,y1,z1)=true
             then begin
                     q := x1*Pi-(Power(sqrt(Power(y1,z1)),abs(x1)-(y1)-(z1)));
                     Edit4.Text := FloatToStr(q);
   end
   else Edit4.Text := 'Некоректні данні!';
   end
   else Edit4.Text := 'Некоректні данні!';
end;

procedure TForm1.Edit1Change(Sender: TObject);
begin

end;

procedure TForm1.Edit2Change(Sender: TObject);
begin

end;

procedure TForm1.Edit3Change(Sender: TObject);
begin

end;

procedure TForm1.Edit4Change(Sender: TObject);
begin

end;

procedure TForm1.Edit5Change(Sender: TObject);
begin

end;

procedure TForm1.Label1Click(Sender: TObject);
begin

end;

procedure TForm1.Label8Click(Sender: TObject);
begin
  end;

end.

