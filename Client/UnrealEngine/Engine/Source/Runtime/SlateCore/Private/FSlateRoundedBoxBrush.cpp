// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// FSlateRoundedBoxBrush<FLinearColor,float> @ 142535500

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,float>
          (FSlateRoundedBoxBrush *this,FLinearColor *param_1,float param_2,
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
  dVar4 = (double)param_2;
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  FVar3 = FLinearColor::Transparent;
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

// FSlateRoundedBoxBrush<FLinearColor,FLinearColor,float> @ 1425355d0

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FLinearColor,float>
          (FSlateRoundedBoxBrush *this,FName param_1,FLinearColor *param_2,float param_3,
          FLinearColor *param_4,float param_5,FDeprecateVector2DParameter *param_6,Type param_7)

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
            ((FSlateBrush *)this,RoundedBox,param_1,&local_78,param_7,FullColor,param_6,param_2,
             (UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  dVar5 = (double)param_3;
  uStack_20 = (uint)uStack_20._2_2_ << 0x10;
  uVar3 = *(undefined8 *)&param_4->field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar1._8_4_ = SUB84(dVar5,0);
  auVar1._0_8_ = dVar5;
  auVar1._12_4_ = uVar6;
  *(undefined1 (*) [16])&this->field_0x40 = auVar1;
  local_28 = (uint)CONCAT12(local_65,local_67) << 8;
  auVar2._8_4_ = SUB84(dVar5,0);
  auVar2._0_8_ = dVar5;
  auVar2._12_4_ = uVar6;
  *(undefined1 (*) [16])&this->field_0x50 = auVar2;
  *(undefined8 *)&this->field_0x60 = uVar3;
  *(undefined8 *)&this->field_0x68 = uVar4;
  *(int *)&this->field_0x70 = local_28;
  *(float *)&this->field_0x74 = param_5;
  *(int *)&this->field_0x78 = uStack_20;
  *(undefined4 *)&this->field_0x7c = uStack_1c;
  return this;
}

// FSlateRoundedBoxBrush<FLinearColor,FSlateColor,float> @ 1425356d0

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FLinearColor,FSlateColor,float>
          (FSlateRoundedBoxBrush *this,FLinearColor *param_1,float param_2,FSlateColor *param_3,
          float param_4,FDeprecateVector2DParameter *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  ESlateColorStylingMode EVar5;
  EStyleColor EVar6;
  undefined2 uVar7;
  double dVar8;
  undefined4 uVar9;
  FMargin local_68 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_68[0].Left = 0.0;
  local_68[0].Top = 0.0;
  local_68[0].Right = 0.0;
  local_68[0].Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,RoundedBox,(FName)0x0,local_68,NoTile,NoImage,param_5,param_1,
             (UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  EVar5 = param_3->ColorUseRule;
  EVar6 = param_3->ColorTableId;
  uVar7 = *(undefined2 *)&param_3->field_0x12;
  uVar3 = *(undefined8 *)&(param_3->SpecifiedColor).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_3->SpecifiedColor).field0_0x0 + 8);
  dVar8 = (double)param_2;
  uStack_20 = (uint)uStack_20._2_2_ << 0x10;
  uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar1._8_4_ = SUB84(dVar8,0);
  auVar1._0_8_ = dVar8;
  auVar1._12_4_ = uVar9;
  *(undefined1 (*) [16])&this->field_0x40 = auVar1;
  auVar2._8_4_ = SUB84(dVar8,0);
  auVar2._0_8_ = dVar8;
  auVar2._12_4_ = uVar9;
  *(undefined1 (*) [16])&this->field_0x50 = auVar2;
  *(undefined8 *)&this->field_0x60 = uVar3;
  *(undefined8 *)&this->field_0x68 = uVar4;
  this->field_0x70 = EVar5;
  this->field_0x71 = EVar6;
  *(undefined2 *)&this->field_0x72 = uVar7;
  *(float *)&this->field_0x74 = param_4;
  *(int *)&this->field_0x78 = uStack_20;
  *(undefined4 *)&this->field_0x7c = uStack_1c;
  return this;
}

// FSlateRoundedBoxBrush<FSlateColor> @ 1425357c0

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,FDeprecateSlateVector2D *param_2)

{
  FDeprecateSlateVector2D local_res8 [4];
  
  local_res8[0] = *param_2;
  FSlateRoundedBoxBrush<FSlateColor>(this,param_1,(FDeprecateVector2DParameter *)local_res8);
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  return this;
}

// FSlateRoundedBoxBrush<FSlateColor> @ 142535800

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,FDeprecateVector2DParameter *param_2)

{
  FMargin local_18;
  
  local_18.Left = 0.0;
  local_18.Top = 0.0;
  local_18.Right = 0.0;
  local_18.Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,RoundedBox,(FName)0x0,&local_18,NoTile,NoImage,param_2,param_1,
             (UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  return this;
}

// FSlateRoundedBoxBrush<FSlateColor,float> @ 142535860

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,float>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,float param_2,
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
  dVar4 = (double)param_2;
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  FVar3 = FLinearColor::Transparent;
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

// FSlateRoundedBoxBrush<FSlateColor,FSlateColor> @ 142535930

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,FSlateColor *param_2,float param_3,
          FDeprecateVector2DParameter *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ESlateColorStylingMode EVar3;
  EStyleColor EVar4;
  undefined2 uVar5;
  FMargin local_68 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_68[0].Left = 0.0;
  local_68[0].Top = 0.0;
  local_68[0].Right = 0.0;
  local_68[0].Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,RoundedBox,(FName)0x0,local_68,NoTile,NoImage,param_4,param_1,
             (UObject *)0x0,false);
  uStack_20 = CONCAT22(uStack_20._2_2_,1);
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  EVar3 = param_2->ColorUseRule;
  EVar4 = param_2->ColorTableId;
  uVar5 = *(undefined2 *)&param_2->field_0x12;
  uVar1 = *(undefined8 *)&(param_2->SpecifiedColor).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(param_2->SpecifiedColor).field0_0x0 + 8);
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x60 = uVar1;
  *(undefined8 *)&this->field_0x68 = uVar2;
  this->field_0x70 = EVar3;
  this->field_0x71 = EVar4;
  *(undefined2 *)&this->field_0x72 = uVar5;
  *(float *)&this->field_0x74 = param_3;
  *(undefined4 *)&this->field_0x78 = uStack_20;
  *(undefined4 *)&this->field_0x7c = uStack_1c;
  return this;
}

// FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float> @ 142535a00

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,float>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,float param_2,FSlateColor *param_3,
          float param_4,FDeprecateVector2DParameter *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  ESlateColorStylingMode EVar5;
  EStyleColor EVar6;
  undefined2 uVar7;
  double dVar8;
  undefined4 uVar9;
  FMargin local_68 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_68[0].Left = 0.0;
  local_68[0].Top = 0.0;
  local_68[0].Right = 0.0;
  local_68[0].Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,RoundedBox,(FName)0x0,local_68,NoTile,NoImage,param_5,param_1,
             (UObject *)0x0,false);
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  EVar5 = param_3->ColorUseRule;
  EVar6 = param_3->ColorTableId;
  uVar7 = *(undefined2 *)&param_3->field_0x12;
  uVar3 = *(undefined8 *)&(param_3->SpecifiedColor).field0_0x0;
  uVar4 = *(undefined8 *)((longlong)&(param_3->SpecifiedColor).field0_0x0 + 8);
  dVar8 = (double)param_2;
  uStack_20 = (uint)uStack_20._2_2_ << 0x10;
  uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
  auVar1._8_4_ = SUB84(dVar8,0);
  auVar1._0_8_ = dVar8;
  auVar1._12_4_ = uVar9;
  *(undefined1 (*) [16])&this->field_0x40 = auVar1;
  auVar2._8_4_ = SUB84(dVar8,0);
  auVar2._0_8_ = dVar8;
  auVar2._12_4_ = uVar9;
  *(undefined1 (*) [16])&this->field_0x50 = auVar2;
  *(undefined8 *)&this->field_0x60 = uVar3;
  *(undefined8 *)&this->field_0x68 = uVar4;
  this->field_0x70 = EVar5;
  this->field_0x71 = EVar6;
  *(undefined2 *)&this->field_0x72 = uVar7;
  *(float *)&this->field_0x74 = param_4;
  *(int *)&this->field_0x78 = uStack_20;
  *(undefined4 *)&this->field_0x7c = uStack_1c;
  return this;
}

// FSlateRoundedBoxBrush<FSlateColor,FSlateColor,UE::Math::TVector4<double>_> @ 142535af0

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FSlateColor,UE::Math::TVector4<double>_>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,TVector4<double> *param_2,
          FSlateColor *param_3,float param_4,FDeprecateVector2DParameter *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ESlateColorStylingMode EVar7;
  EStyleColor EVar8;
  undefined2 uVar9;
  FMargin local_58 [4];
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_58[0].Left = 0.0;
  local_58[0].Top = 0.0;
  local_58[0].Right = 0.0;
  local_58[0].Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,RoundedBox,(FName)0x0,local_58,NoTile,NoImage,param_5,param_1,
             (UObject *)0x0,false);
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.W;
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  EVar7 = param_3->ColorUseRule;
  EVar8 = param_3->ColorTableId;
  uVar9 = *(undefined2 *)&param_3->field_0x12;
  uVar5 = *(undefined8 *)&(param_3->SpecifiedColor).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_3->SpecifiedColor).field0_0x0 + 8);
  *(double *)&this->field_0x40 = dVar1;
  *(double *)&this->field_0x48 = dVar2;
  uStack_10 = (uint)uStack_10._2_2_ << 0x10;
  *(double *)&this->field_0x50 = dVar3;
  *(double *)&this->field_0x58 = dVar4;
  *(undefined8 *)&this->field_0x60 = uVar5;
  *(undefined8 *)&this->field_0x68 = uVar6;
  this->field_0x70 = EVar7;
  this->field_0x71 = EVar8;
  *(undefined2 *)&this->field_0x72 = uVar9;
  *(float *)&this->field_0x74 = param_4;
  *(int *)&this->field_0x78 = uStack_10;
  *(undefined4 *)&this->field_0x7c = uStack_c;
  return this;
}

// FSlateRoundedBoxBrush<FSlateColor,UE::Math::TVector4<double>_> @ 142535bd0

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,UE::Math::TVector4<double>_>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,TVector4<double> *param_2,
          FDeprecateVector2DParameter *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FLinearColor FVar5;
  FMargin local_58 [4];
  uint local_18;
  uint6 uStack_e;
  
  local_58[0].Left = 0.0;
  local_58[0].Top = 0.0;
  local_58[0].Right = 0.0;
  local_58[0].Bottom = 0.0;
  FSlateBrush::FSlateBrush
            ((FSlateBrush *)this,RoundedBox,(FName)0x0,local_58,NoTile,NoImage,param_3,param_1,
             (UObject *)0x0,false);
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar4 = (param_2->field0_0x0)._s_0.W;
  *(undefined ***)this = &___7FSlateRoundedBoxBrush__6B_;
  FVar5 = FLinearColor::Transparent;
  local_18 = local_18 & 0xffffff00;
  *(double *)&this->field_0x40 = dVar1;
  *(double *)&this->field_0x48 = dVar2;
  *(double *)&this->field_0x50 = dVar3;
  *(double *)&this->field_0x58 = dVar4;
  *(FLinearColor_u_0 *)&this->field_0x60 = (FLinearColor_u_0_s_0)FVar5.field0_0x0;
  *(ulonglong *)&this->field_0x70 = (ulonglong)local_18;
  *(ulonglong *)&this->field_0x78 = (ulonglong)uStack_e << 0x10;
  return this;
}

// FSlateRoundedBoxBrush<FSlateColor,FLinearColor,float> @ 142535c90

FSlateRoundedBoxBrush * __thiscall
FSlateRoundedBoxBrush::FSlateRoundedBoxBrush<FSlateColor,FLinearColor,float>
          (FSlateRoundedBoxBrush *this,FSlateColor *param_1,float param_2,FLinearColor *param_3,
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
  dVar5 = (double)param_2;
  local_28 = (uint)CONCAT12(local_65,local_67) << 8;
  uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
  uStack_20 = (uint)uStack_20._2_2_ << 0x10;
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

