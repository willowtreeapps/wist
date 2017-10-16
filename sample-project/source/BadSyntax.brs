sub Main()

  ' This is a comment in BrightScript
  rem and so is this

  port = CreateObject("roMessagePort")
  screen = CreateObject("roParagraphScreen")

  reallyBad = {
    And: 2
    Box: 3
    CreateObject: 4
    Dim: 5
    Each: 6
    Else: 7
    ElseIf: 8
    End: 9
    EndFunction: 10
    EndIf: 11
    EndSub: 12
    EndWhile: 13
    Eval: 14
    Exit: 15
    ExitWhile: 16
    FALSE: 18
    For: 19
    Function: 20
    GetGlobalAA: 21
    GetLastRunCompileError: 22
    GetLastRunRunTimeError: 23
    Goto: 24
    If: 25
    Invalid: 26
    Let: 27
    LINE_NUM: 28
    Next: 29
    Not: 30
    ObjFun: 31
    Or: 32
    Pos: 33
    Print: 34
    Rem: 35
    Return: 36
    Run: 37
    Step: 38
    Stop: 39
    Sub: 40
    Tab: 41
    Then: 42
    To: 43
    TRUE: 44
    Type: 45
    While: 46
  }

  screen.addParagraph(reallyBad.TRUE.toStr())

  For Each n In reallyBad
    Print n;reallyBad[n]
  End For

  aa = CreateObject("roAssociativeArray")
  aa.true = "false"
  aa.stop = function() as string
    return "no way"
  end function

  screen.addParagraph(aa.true)

  screen.addParagraph(aa.stop())

  bb = {
    "81191": "test"
  }

  screen.addParagraph(bb["81191"])
  screen.Show()

  _somePrivateFunction()
  screen._somePrivateFunction()

  library "v30/bslCore.brs"

  while(true)
      msg = wait(0, m.port)
      msgType = type(msg)

      if msgType = "roSGScreenEvent"

          if msg.isScreenClosed() then return

      end if
  end while
end sub

function foo(zzz) as string
  a = "foo"
  return
end function

function foo()
  a = "foo"
  b = function()
    c = "baz"
  end function
end function

sub bar()
  a = "foo"
  return a
end sub

sub bar() as string
  a = "foo"
  return
end sub