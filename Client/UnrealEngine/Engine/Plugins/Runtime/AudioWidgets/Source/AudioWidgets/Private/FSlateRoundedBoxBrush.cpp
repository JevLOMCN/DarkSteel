// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// FSlateRoundedBoxBrush<FLinearColor,FLinearColor,double> @ 14d894d20

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FLinearColor,double>
          (FSlateRoundedBoxBrush *this,FLinearColor *param_1,double param_2,FLinearColor *param_3,
          float param_4,FDeprecateVector2DParameter *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 uVar6;
  FMargin local_78;
  undefined2 local_67;
  undefined1 local_65;
  int local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_78.Left = 0.0;
  local_78.Top = 0.0;
  local_78.Right = 0.0;
  local_78.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,RoundedBox,(FName)0x0,&local_78,NoTile,NoImage,param_5,param_1,
             (UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  uVar3 = *(undefined8 *)&param_3->field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  local_28 = (uint)CONCAT12(local_65,local_67) << 8;
  dVar5 = (double)(float)param_2;
  uStack_20 = (uint)uStack_20._2_2_ << 0x10;
  uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar1._8_4_ = SUB84(dVar5,0);
  auVar1._0_8_ = dVar5;
  auVar1._12_4_ = uVar6;
  *(undefined1 (*) [16])&this->field_0x40 = auVar1;
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = dVar5;
  auVar2._12_4_ = uVar6;
  *(undefined1 (*) [16])&this->field_0x50 = auVar2;
  *(undefined8 *)&this->field_0x60 = uVar3;
  *(undefined8 *)&this->field_0x68 = uVar4;
  *(int *)&this->field_0x70 = local_28;
  *(float *)&this->field_0x74 = param_4;
  *(int *)&this->field_0x78 = uStack_20;
  *(undefined4 *)&this->field_0x7c = uStack_1c;
  return this;
}

// FSlateRoundedBoxBrush<FSlateColor,double> @ 14d894e50

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,double>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,double param_2,
          FDeprecateVector2DParameter *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  FLinearColor FVar3;
  double dVar4;
  undefined4 uVar5;
  FMargin local_68 [4];
  uint local_28;
  uint6 uStack_1e;
  
  local_68[0].Left = 0.0;
  local_68[0].Top = 0.0;
  local_68[0].Right = 0.0;
  local_68[0].Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,RoundedBox,(FName)0x0,local_68,NoTile,NoImage,param_3,param_1,
             (UObject *)0x0,false);
  local_28 = local_28 & 0xffffff00;
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  FVar3 = FLinearColor::Transparent;
  dVar4 = (double)(float)param_2;
  uVar5 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar1._8_4_ = SUB84(dVar4,0);
  auVar1._0_8_ = dVar4;
  auVar1._12_4_ = uVar5;
  *(undefined1 (*) [16])&this->field_0x40 = auVar1;
  auVar2._8_4_ = SUB84(dVar4,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = uVar5;
  *(undefined1 (*) [16])&this->field_0x50 = auVar2;
  *(FLinearColor_u_0 *)&this->field_0x60 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  *(ulonglong *)&this->field_0x70 = (ulonglong)local_28;
  *(ulonglong *)&this->field_0x78 = (ulonglong)uStack_1e << 0x10;
  return this;
}

