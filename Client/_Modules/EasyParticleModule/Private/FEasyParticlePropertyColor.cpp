// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 4

// StaticStruct @ 14acb15b0

UScriptStruct * __cdecl FEasyParticlePropertyColor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEasyParticlePropertyColor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FEasyParticlePropertyColor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEasyParticlePropertyColor,(UObject *)pUVar1,
                         L"EasyParticlePropertyColor");
  }
  return Z_Registration_Info_UScriptStruct_FEasyParticlePropertyColor.OuterSingleton;
}

// FEasyParticlePropertyColor @ 14acbfe30

FEasyParticlePropertyColor * __thiscall
FEasyParticlePropertyColor::FEasyParticlePropertyColor(FEasyParticlePropertyColor *this)

{
  float fVar1;
  FLinearColor FVar2;
  FRichCurve *pFVar3;
  undefined1 in_R9B;
  float fVar4;
  FKeyHandle local_res8 [4];
  uint in_stack_ffffffffffffffc8;
  FKeyHandle FVar5;
  
  (this->ColorRangeValue).Min.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0
  ;
  FVar2 = FLinearColor::White;
  fVar4 = FLinearColor::White.field0_0x0._0_4_;
  (this->ColorRangeValue).RandomKey_R_G = false;
  (this->ColorRangeValue).RandomKey_R_B = false;
  (this->ColorRangeValue).RandomKey_R_A = false;
  (this->ColorRangeValue).RandomKey_G_B = false;
  (this->ColorRangeValue).RandomKey_G_A = false;
  (this->ColorRangeValue).RandomKey_B_A = false;
  (this->ColorRangeValue).Max.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve(&this->ColorCurveValue);
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve(&(this->ColorCurveRangeValue).Min);
  FEasyParticleLinearColorCurve::FEasyParticleLinearColorCurve(&(this->ColorCurveRangeValue).Max);
  (this->ColorCurveRangeValue).RandomKey_R_G = false;
  (this->ColorCurveRangeValue).RandomKey_R_B = false;
  (this->ColorCurveRangeValue).RandomKey_R_A = false;
  (this->ColorCurveRangeValue).RandomKey_G_B = false;
  (this->ColorCurveRangeValue).RandomKey_G_A = false;
  (this->ColorCurveRangeValue).RandomKey_B_A = false;
  this->Type = Color;
  (this->ColorValue).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FKeyHandle::FKeyHandle(local_res8);
  fVar1 = __real_3f800000;
  FVar5.Index = in_stack_ffffffffffffffc8 & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveValue).ColorCurves,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveValue).ColorCurves + 1,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveValue).ColorCurves + 2,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveValue).ColorCurves + 3,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveValue).ColorCurves + 3,fVar4,__real_3f000000,(bool)in_R9B,
                     FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveValue).ColorCurves + 3,fVar4,fVar1,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((FRichCurve *)&this->ColorCurveRangeValue,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveRangeValue).Min.ColorCurves + 1,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveRangeValue).Min.ColorCurves + 2,fVar4,0.0,(bool)in_R9B,FVar5);
  pFVar3 = (this->ColorCurveRangeValue).Min.ColorCurves + 3;
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,__real_3f000000,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,fVar1,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveRangeValue).Max.ColorCurves,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveRangeValue).Max.ColorCurves + 1,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey((this->ColorCurveRangeValue).Max.ColorCurves + 2,fVar4,0.0,(bool)in_R9B,FVar5);
  pFVar3 = (this->ColorCurveRangeValue).Max.ColorCurves + 3;
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,0.0,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FVar5.Index = FVar5.Index & 0xffffff00;
  FRichCurve::AddKey(pFVar3,fVar4,__real_3f000000,(bool)in_R9B,FVar5);
  FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(pFVar3,fVar4,fVar1,(bool)in_R9B,(FKeyHandle)(FVar5.Index & 0xffffff00));
  *(undefined4 *)&(this->ColorCurveRangeValue).Min.ColorCurves[0]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveRangeValue).Max.ColorCurves[0]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveValue).ColorCurves[0]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveRangeValue).Min.ColorCurves[1]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveRangeValue).Max.ColorCurves[1]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveValue).ColorCurves[1]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveRangeValue).Min.ColorCurves[2]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveRangeValue).Max.ColorCurves[2]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveValue).ColorCurves[2]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveRangeValue).Min.ColorCurves[3]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveRangeValue).Max.ColorCurves[3]._padding_ = 0x3f800000;
  *(undefined4 *)&(this->ColorCurveValue).ColorCurves[3]._padding_ = 0x3f800000;
  return this;
}

// GetValue_Color @ 14acc4760

FLinearColor * __thiscall
FEasyParticlePropertyColor::GetValue_Color
          (FEasyParticlePropertyColor *this,FLinearColor *__return_storage_ptr__,
          FUIParticleFactorParam *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  EEasyParticlepertyColor_Type EVar11;
  undefined8 uVar12;
  FLinearColor *pFVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58 [5];
  
  EVar11 = this->Type;
  if (EVar11 == Color) {
    uVar12 = *(undefined8 *)((longlong)&(this->ColorValue).field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         *(undefined8 *)&(this->ColorValue).field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar12;
  }
  else if (EVar11 == ColorRange) {
    fVar1 = param_1->Factor;
    fVar14 = param_1->Factor2;
    if ((this->ColorRangeValue).RandomKey_R_G != false) {
      fVar14 = fVar1;
    }
    fVar15 = param_1->Factor3;
    if ((this->ColorRangeValue).RandomKey_R_B != false) {
      fVar15 = fVar1;
    }
    fVar16 = param_1->Factor4;
    if ((this->ColorRangeValue).RandomKey_R_A != false) {
      fVar16 = fVar1;
    }
    if ((this->ColorRangeValue).RandomKey_G_B != false) {
      fVar15 = fVar14;
    }
    if ((this->ColorRangeValue).RandomKey_G_A != false) {
      fVar16 = fVar14;
    }
    if ((this->ColorRangeValue).RandomKey_B_A != false) {
      fVar16 = fVar15;
    }
    fVar2 = (this->ColorRangeValue).Max.field0_0x0._s_0.G;
    fVar3 = (this->ColorRangeValue).Min.field0_0x0._s_0.G;
    fVar4 = (this->ColorRangeValue).Max.field0_0x0._s_0.B;
    fVar5 = (this->ColorRangeValue).Min.field0_0x0._s_0.B;
    fVar6 = (this->ColorRangeValue).Min.field0_0x0._s_0.G;
    fVar7 = (this->ColorRangeValue).Max.field0_0x0._s_0.A;
    fVar8 = (this->ColorRangeValue).Min.field0_0x0._s_0.A;
    fVar9 = (this->ColorRangeValue).Min.field0_0x0._s_0.B;
    fVar10 = (this->ColorRangeValue).Min.field0_0x0._s_0.A;
    (__return_storage_ptr__->field0_0x0)._s_0.R =
         ((this->ColorRangeValue).Max.field0_0x0._s_0.R -
         (this->ColorRangeValue).Min.field0_0x0._s_0.R) * fVar1 +
         (this->ColorRangeValue).Min.field0_0x0._s_0.R;
    (__return_storage_ptr__->field0_0x0)._s_0.G = (fVar2 - fVar3) * fVar14 + fVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.B = (fVar4 - fVar5) * fVar15 + fVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.A = (fVar7 - fVar8) * fVar16 + fVar10;
  }
  else if (EVar11 == ColorCurve) {
    pFVar13 = FEasyParticleLinearColorCurve::GetValue
                        (&this->ColorCurveValue,(FLinearColor *)&local_58[0]._s_0,param_1);
    uVar12 = *(undefined8 *)((longlong)&pFVar13->field0_0x0 + 8);
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pFVar13->field0_0x0;
    *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar12;
  }
  else if (EVar11 == ColorCurveRange) {
    fVar1 = param_1->Factor;
    fVar14 = param_1->Factor2;
    if ((this->ColorCurveRangeValue).RandomKey_R_G != false) {
      fVar14 = fVar1;
    }
    fVar15 = param_1->Factor3;
    if ((this->ColorCurveRangeValue).RandomKey_R_B != false) {
      fVar15 = fVar1;
    }
    fVar16 = param_1->Factor4;
    if ((this->ColorCurveRangeValue).RandomKey_R_A != false) {
      fVar16 = fVar1;
    }
    if ((this->ColorCurveRangeValue).RandomKey_G_B != false) {
      fVar15 = fVar14;
    }
    if ((this->ColorCurveRangeValue).RandomKey_G_A != false) {
      fVar16 = fVar14;
    }
    if ((this->ColorCurveRangeValue).RandomKey_B_A != false) {
      fVar16 = fVar15;
    }
    FEasyParticleLinearColorCurve::GetValue
              (&(this->ColorCurveRangeValue).Min,(FLinearColor *)&local_58[0]._s_0,param_1);
    FEasyParticleLinearColorCurve::GetValue
              (&(this->ColorCurveRangeValue).Max,(FLinearColor *)&local_68._s_0,param_1);
    (__return_storage_ptr__->field0_0x0)._s_0.R =
         (local_68._s_0.R - (float)local_58[0]._0_4_) * fVar1 + (float)local_58[0]._0_4_;
    (__return_storage_ptr__->field0_0x0)._s_0.G =
         (local_68._s_0.G - (float)local_58[0]._4_4_) * fVar14 + (float)local_58[0]._4_4_;
    (__return_storage_ptr__->field0_0x0)._s_0.B =
         (local_68._s_0.B - (float)local_58[0]._8_4_) * fVar15 + (float)local_58[0]._8_4_;
    (__return_storage_ptr__->field0_0x0)._s_0.A =
         (local_68._s_0.A - (float)local_58[0]._12_4_) * fVar16 + (float)local_58[0]._12_4_;
  }
  return __return_storage_ptr__;
}

// Reset @ 14acc8190

void __thiscall FEasyParticlePropertyColor::Reset(FEasyParticlePropertyColor *this)

{
  FRichCurve *pFVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = 4;
  this->Type = Color;
  lVar3 = 4;
  pFVar1 = (this->ColorCurveValue).ColorCurves;
  do {
    FRichCurve::Reset(pFVar1);
    pFVar1 = pFVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  pFVar1 = (FRichCurve *)&this->ColorCurveRangeValue;
  (this->ColorCurveValue).CurveType = EmitterLifetime;
  (this->ColorCurveValue).Loop = false;
  lVar3 = 4;
  do {
    FRichCurve::Reset(pFVar1);
    pFVar1 = pFVar1 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  (this->ColorCurveRangeValue).Min.CurveType = EmitterLifetime;
  (this->ColorCurveRangeValue).Min.Loop = false;
  pFVar1 = (this->ColorCurveRangeValue).Max.ColorCurves;
  do {
    FRichCurve::Reset(pFVar1);
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (this->ColorCurveRangeValue).Max.CurveType = EmitterLifetime;
  (this->ColorCurveRangeValue).Max.Loop = false;
  (this->ColorCurveRangeValue).RandomKey_R_G = false;
  (this->ColorCurveRangeValue).RandomKey_R_B = false;
  (this->ColorCurveRangeValue).RandomKey_R_A = false;
  (this->ColorCurveRangeValue).RandomKey_G_B = false;
  (this->ColorCurveRangeValue).RandomKey_G_A = false;
  (this->ColorCurveRangeValue).RandomKey_B_A = false;
  return;
}

