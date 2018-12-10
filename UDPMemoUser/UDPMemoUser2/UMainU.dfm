object UMainF: TUMainF
  Left = 0
  Top = 0
  Caption = #52292#54021'2'
  ClientHeight = 499
  ClientWidth = 364
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object mmShow2: TMemo
    Left = 8
    Top = 8
    Width = 345
    Height = 425
    TabOrder = 0
  end
  object edtSend2: TEdit
    Left = 8
    Top = 456
    Width = 257
    Height = 21
    TabOrder = 1
    OnKeyPress = edtSend2KeyPress
  end
  object btSend2: TButton
    Left = 278
    Top = 454
    Width = 75
    Height = 25
    Caption = #48372#45236#44592
    TabOrder = 2
    OnClick = btSend2Click
  end
  object IdUDPClient2: TIdUDPClient
    Active = True
    Port = 5000
    Left = 208
    Top = 200
  end
  object IdUDPServer2: TIdUDPServer
    Active = True
    Bindings = <>
    DefaultPort = 5001
    OnUDPRead = IdUDPServer2UDPRead
    Left = 288
    Top = 200
  end
end
