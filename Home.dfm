object SocketServer: TSocketServer
  Left = 0
  Top = 0
  Caption = 'SocketServer'
  ClientHeight = 964
  ClientWidth = 999
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = getData
  PixelsPerInch = 96
  TextHeight = 13
  object Label11: TLabel
    Left = 8
    Top = 49
    Width = 141
    Height = 25
    Caption = 'Otvoreni rahtjevi'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 2328053
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    StyleElements = [seClient, seBorder]
  end
  object Label1: TLabel
    Left = 510
    Top = 49
    Width = 218
    Height = 25
    Caption = 'Registrirani administratori'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 2328053
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    StyleElements = [seClient, seBorder]
  end
  object Label2: TLabel
    Left = 8
    Top = 416
    Width = 135
    Height = 25
    Caption = 'Rije'#353'eni zahtjevi'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = 2328053
    Font.Height = -19
    Font.Name = 'Segoe UI'
    Font.Style = []
    Font.Quality = fqAntialiased
    ParentFont = False
    StyleElements = [seClient, seBorder]
  end
  object ListView1: TListView
    Left = 510
    Top = 80
    Width = 481
    Height = 272
    Columns = <
      item
        Caption = 'Administrator'
      end
      item
        Caption = 'Dostupan'
      end>
    TabOrder = 0
    ViewStyle = vsReport
  end
  object ListView2: TListView
    Left = 8
    Top = 80
    Width = 481
    Height = 272
    Columns = <
      item
        Caption = 'ID'
      end
      item
        Caption = 'Korisnik'
      end
      item
        Caption = 'Upit'
      end
      item
        Caption = 'Status'
      end>
    Items.ItemData = {
      05340000000100000000000000FFFFFFFFFFFFFFFF00000000FFFFFFFF000000
      000D4E0065006B00690020006B006F007200690073006E0069006B00}
    TabOrder = 1
    ViewStyle = vsReport
  end
  object CheckBox1: TCheckBox
    Left = 16
    Top = 358
    Width = 169
    Height = 27
    Caption = 'Uklju'#269'i automatski dodijeljivanje'
    TabOrder = 2
  end
  object Button1: TButton
    Left = 518
    Top = 358
    Width = 163
    Height = 25
    Caption = 'Dodijeli ru'#269'no zahtjev'
    TabOrder = 3
  end
  object ListView3: TListView
    Left = 8
    Top = 447
    Width = 983
    Height = 272
    Columns = <
      item
        Caption = 'ID'
      end
      item
        Caption = 'Korisnik'
      end
      item
        Caption = 'Status'
      end
      item
        Caption = 'Povratna ocjena'
      end
      item
        Caption = 'Rje'#353'avatelj'
      end>
    TabOrder = 4
    ViewStyle = vsReport
  end
  object Button2: TButton
    Left = 16
    Top = 725
    Width = 113
    Height = 25
    Caption = 'Prika'#382'i statistiku'
    TabOrder = 5
  end
  object FDPhysMySQLDriverLink1: TFDPhysMySQLDriverLink
    DriverID = 'MyPhysSQL'
    VendorLib = 
      'C:\Users\imihic\Documents\Embarcadero\Studio\Projects\libmysql.d' +
      'll'
    Left = 400
    Top = 392
  end
  object FDConnection1: TFDConnection
    ConnectionName = 'chatserver'
    Params.Strings = (
      'Server=localhost'
      'Database=supportserver'
      'User_Name=admin'
      'Password=megadeth33'
      'DriverID=MyPhysSQL')
    Connected = True
    Left = 520
    Top = 400
  end
  object FDTable1: TFDTable
    Active = True
    IndexFieldNames = 'id'
    Connection = FDConnection1
    TableName = 'supportserver.zahtjevi'
    Left = 696
    Top = 400
  end
  object FDStoredProc1: TFDStoredProc
    Active = True
    Connection = FDConnection1
    FetchOptions.AssignedValues = [evAutoClose]
    FetchOptions.AutoClose = False
    CatalogName = 'supportserver'
    StoredProcName = 'getCompletedSupportRequests'
    Left = 776
    Top = 400
  end
  object IdTCPServer1: TIdTCPServer
    Active = True
    Bindings = <
      item
        IP = '0.0.0.0'
        Port = 9999
      end>
    DefaultPort = 9999
    MaxConnections = 200
    ReuseSocket = rsTrue
    OnExecute = IdTCPServer1Execute
    Left = 288
    Top = 400
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 100
    Left = 824
    Top = 376
  end
end
