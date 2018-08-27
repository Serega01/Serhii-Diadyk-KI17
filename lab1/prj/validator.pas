unit validator;

interface
 function validation(var entstr: string):boolean;

implementation
  function validation(var entstr:string):boolean;
  begin
    validation:=true;
     if (entstr='') then
         validation:=false
         else if (entstr=' ') then
              validation:=false
              else if (entstr='.') then
                       validation:=false
                       else if (entstr=',') then
                            validation:=false
                            else if (entstr='/') then
                            validation:=false else
                                validation:=true;

      end;
  end.

