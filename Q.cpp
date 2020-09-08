;
;       Objective: find the sum of two numbers 
;       Input: Requests two  integers  from the user.
;       Output: Outputs the input number.
%include "io.mac"

.DATA
prompt_msg  db   "Please input number ",0
colon  db   ": ",0
output_msg  db   "The sum is : ",0

.CODE
      .STARTUP
      mov CX, 1

      PutStr prompt_msg   ; request first number
      PutInt CX
      PutStr colon
      GetInt DX              ; CX= first number
      mov AX, DX
      add CX, 1
prog:
      cmp CX, 10
      jg endprog

      PutStr prompt_msg
      PutInt CX
      PutStr colon
      GetInt DX              ; CX= first number
      add AX, DX
      add CX, 1

      jmp prog

endprog:
      PutStr  output_msg   
      PutInt  AX
      nwln
done:
      .EXIT