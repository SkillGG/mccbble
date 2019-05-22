object Form1: SlotForm
  Left = 1063
  Top = 132
  Width = 238
  Height = 183
  Caption = 'Slot'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 8
    Top = 0
    Width = 75
    Height = 25
    Caption = 'Set center'
    TabOrder = 0
  end
  object Button2: TButton
    Left = 88
    Top = 0
    Width = 75
    Height = 25
    Caption = 'Dig!'
    TabOrder = 1
  end
  object MainMenu1: TMainMenu
    Left = 292
    object Options1: TMenuItem
      Caption = 'Options'
      object Version1: TMenuItem
        Caption = 'Version'
        object N17101: TMenuItem
          Caption = '1.7.10'
          Checked = True
          OnClick = PublicClick
        end
        object N181: TMenuItem
          Caption = '1.8'
          OnClick = PublicClick
        end
        object Other1: TMenuItem
          Caption = 'Other'
          OnClick = PublicClick
        end
      end
    end
  end
end
