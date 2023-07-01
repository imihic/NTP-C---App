object PodrskaForm: TPodrskaForm
  Left = 0
  Top = 0
  BorderStyle = bsNone
  Caption = 'PodrskaForm'
  ClientHeight = 628
  ClientWidth = 962
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label2: TLabel
    Left = 8
    Top = 0
    Width = 82
    Height = 32
    Caption = 'Podr'#353'ka'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 2328053
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    StyleElements = [seClient, seBorder]
  end
  object Button1: TButton
    Left = 465
    Top = 527
    Width = 184
    Height = 25
    Caption = 'Po'#353'alji'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 8
    Top = 38
    Width = 641
    Height = 417
    ReadOnly = True
    TabOrder = 1
  end
  object Button2: TButton
    Left = 737
    Top = 603
    Width = 225
    Height = 25
    Caption = 'Odustani'
    TabOrder = 2
  end
  object Button3: TButton
    Left = 8
    Top = 527
    Width = 129
    Height = 25
    Caption = 'U'#269'itaj datoteku'
    TabOrder = 3
  end
  object Button4: TButton
    Left = 143
    Top = 527
    Width = 129
    Height = 25
    Caption = 'Snimi glasovnu'
    TabOrder = 4
  end
  object Edit1: TEdit
    Left = 8
    Top = 472
    Width = 641
    Height = 49
    TabOrder = 5
  end
  object IdTCPClient1: TIdTCPClient
    OnConnected = IdTCPClient1Connected
    ConnectTimeout = 120
    Host = '127.0.0.1'
    Port = 9999
    ReadTimeout = -1
    ReuseSocket = rsTrue
    Left = 712
    Top = 296
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    OnTimer = checkForResponse
    Left = 736
    Top = 480
  end
end
