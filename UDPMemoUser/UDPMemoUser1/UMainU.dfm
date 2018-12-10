object UMainF: TUMainF
  Left = 0
  Top = 0
  Caption = #52292#54021'1'
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
  object mmShow1: TMemo
    Left = 8
    Top = 8
    Width = 345
    Height = 425
    TabOrder = 0
  end
  object edtSend1: TEdit
    Left = 8
    Top = 456
    Width = 257
    Height = 21
    TabOrder = 1
    OnKeyPress = edtSend1KeyPress
  end
  object btSend1: TButton
    Left = 278
    Top = 454
    Width = 75
    Height = 25
    Caption = #48372#45236#44592
    TabOrder = 2
    OnClick = btSend1Click
  end
  object IdUDPClient1: TIdUDPClient
    Active = True
    Port = 5001
    Left = 208
    Top = 200
  end
  object IdUDPServer1: TIdUDPServer
    Active = True
    Bindings = <>
    DefaultPort = 5000
    OnUDPRead = IdUDPServer1UDPRead
    Left = 288
    Top = 200
  end
end
