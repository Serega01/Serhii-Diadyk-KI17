unit validator1_2;

{$mode objfpc}{$H+}

interface
  function valid (x, y, z : string): Boolean;
  function valid2(x1, y1, z1 : smallint): Boolean;


implementation
  function dop(x : string):Boolean;
  var i : byte;
  begin
    dop := true;
    i := 1;
    if x[1]='-' then inc(i);
    while i <= length(x) do
      begin
        if (x[i]<'0')or(x[i]>'9') then begin
                                         dop := false;
                                         break;
                                       end;
        inc(i);
      end;
  end;

  function valid (x, y, z : string): Boolean;
  begin
    valid := true;
    if (length(x)>2)and(x[1]<>'-')or(length(y)>2)and(y[1]<>'-')or(length(z)>2)and(z[1]<>'-')
      or(length(x)=0)or(length(y)=0)or(length(z)=0) then begin
                                                            valid:=false;
                                                            exit;
                                                          end;
    valid:=dop(x);
    if valid=true then valid:=dop(y)
                  else exit;
    if valid=true then valid:=dop(z)
                  else exit;
  end;

  function valid2(x1, y1, z1 : smallint): Boolean;
  begin
    valid2 := true;
    if (-80>x1)or(x1>80)or(-80>y1)or(y1>80)or(0>=z1)or(z1>80) then valid2 := false;
  end;

end.


