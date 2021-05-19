object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 440
  ClientWidth = 707
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Name: TLabel
    Left = 47
    Top = 32
    Width = 27
    Height = 13
    Caption = 'Name'
  end
  object Label2: TLabel
    Left = 34
    Top = 59
    Width = 40
    Height = 13
    Caption = 'Birthday'
  end
  object Passport: TLabel
    Left = 32
    Top = 86
    Width = 42
    Height = 13
    Caption = 'Passport'
  end
  object Insurance: TLabel
    Left = 26
    Top = 113
    Width = 48
    Height = 13
    Caption = 'Insurance'
  end
  object Label5: TLabel
    Left = 26
    Top = 140
    Width = 47
    Height = 13
    Caption = 'Education'
  end
  object Label6: TLabel
    Left = 53
    Top = 167
    Width = 21
    Height = 13
    Caption = 'Post'
  end
  object Label7: TLabel
    Left = 44
    Top = 194
    Width = 30
    Height = 13
    Caption = 'Salary'
  end
  object Label8: TLabel
    Left = 46
    Top = 221
    Width = 27
    Height = 13
    Caption = 'Hiring'
  end
  object Label9: TLabel
    Left = 46
    Top = 248
    Width = 28
    Height = 13
    Caption = 'Notes'
  end
  object Name1: TEdit
    Left = 80
    Top = 29
    Width = 145
    Height = 21
    TabOrder = 0
  end
  object Passport1: TEdit
    Left = 80
    Top = 83
    Width = 145
    Height = 21
    TabOrder = 1
  end
  object Insurance1: TEdit
    Left = 80
    Top = 110
    Width = 145
    Height = 21
    TabOrder = 2
  end
  object Education1: TEdit
    Left = 80
    Top = 137
    Width = 145
    Height = 21
    TabOrder = 3
  end
  object Post1: TEdit
    Left = 80
    Top = 164
    Width = 145
    Height = 21
    TabOrder = 4
  end
  object Salary1: TEdit
    Left = 80
    Top = 191
    Width = 145
    Height = 21
    TabOrder = 5
  end
  object Notes1: TEdit
    Left = 80
    Top = 245
    Width = 145
    Height = 21
    TabOrder = 6
  end
  object Birthday1: TDateTimePicker
    Left = 80
    Top = 56
    Width = 145
    Height = 21
    Date = 44329.000000000000000000
    Time = 0.763088842591969300
    TabOrder = 7
  end
  object Hiring1: TDateTimePicker
    Left = 80
    Top = 218
    Width = 145
    Height = 21
    Date = 44329.000000000000000000
    Time = 0.765645324070646900
    TabOrder = 8
  end
  object Memo1: TMemo
    Left = 240
    Top = 29
    Width = 217
    Height = 268
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 9
  end
  object ComboBox1: TComboBox
    Left = 472
    Top = 164
    Width = 145
    Height = 21
    TabOrder = 10
  end
  object Add: TButton
    Left = 80
    Top = 272
    Width = 105
    Height = 25
    Caption = 'Add'
    TabOrder = 11
    OnClick = AddClick
  end
  object Elder: TButton
    Left = 80
    Top = 365
    Width = 105
    Height = 25
    Caption = 'Identify the elderly'
    TabOrder = 12
    OnClick = ElderClick
  end
  object StaticText1: TStaticText
    Left = 472
    Top = 141
    Width = 68
    Height = 17
    Caption = 'List of elderly'
    TabOrder = 13
  end
  object Delete: TButton
    Left = 472
    Top = 191
    Width = 145
    Height = 25
    Caption = 'Delete'
    TabOrder = 14
    OnClick = DeleteClick
  end
  object DeleteFills: TButton
    Left = 80
    Top = 303
    Width = 105
    Height = 25
    Caption = 'Delete fills'
    TabOrder = 15
    OnClick = DeleteFillsClick
  end
  object Display: TButton
    Left = 80
    Top = 334
    Width = 105
    Height = 25
    Caption = 'Display all'
    TabOrder = 16
    OnClick = DisplayClick
  end
  object ComboBox2: TComboBox
    Left = 472
    Top = 29
    Width = 145
    Height = 21
    TabOrder = 17
  end
  object FindAll: TEdit
    Left = 472
    Top = 75
    Width = 145
    Height = 21
    TabOrder = 18
  end
  object Button1: TButton
    Left = 472
    Top = 102
    Width = 145
    Height = 25
    Caption = 'Find'
    TabOrder = 19
    OnClick = Button1Click
  end
  object StaticText2: TStaticText
    Left = 472
    Top = 12
    Width = 154
    Height = 17
    Caption = 'Choose the fill you want to find'
    TabOrder = 20
  end
  object StaticText3: TStaticText
    Left = 472
    Top = 56
    Width = 55
    Height = 17
    Caption = 'Enter data'
    TabOrder = 21
  end
  object ComboBox3: TComboBox
    Left = 472
    Top = 245
    Width = 145
    Height = 21
    TabOrder = 22
  end
  object StaticText4: TStaticText
    Left = 472
    Top = 224
    Width = 87
    Height = 17
    Caption = 'List of employees'
    TabOrder = 23
  end
  object DelEmp: TButton
    Left = 472
    Top = 272
    Width = 145
    Height = 25
    Caption = 'Delete'
    TabOrder = 24
    OnClick = DelEmpClick
  end
end
