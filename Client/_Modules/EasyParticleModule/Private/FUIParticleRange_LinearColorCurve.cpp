// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 4

// StaticStruct @ 14acb1470

UScriptStruct * __cdecl FUIParticleRange_LinearColorCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleRange_LinearColorCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FUIParticleRange_LinearColorCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleRange_LinearColorCurve,
                         (UObject *)pUVar1,L"UIParticleRange_LinearColorCurve");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleRange_LinearColorCurve.OuterSingleton;
}

// operator= @ 14acb8300

FUIParticleRange_LinearColorCurve * __thiscall
FUIParticleRange_LinearColorCurve::operator=
          (FUIParticleRange_LinearColorCurve *this,FUIParticleRange_LinearColorCurve *param_1)

{
  FEasyParticleLinearColorCurve::operator=(&this->Min,&param_1->Min);
  FEasyParticleLinearColorCurve::operator=(&this->Max,&param_1->Max);
  this->RandomKey_R_G = param_1->RandomKey_R_G;
  this->RandomKey_R_B = param_1->RandomKey_R_B;
  this->RandomKey_R_A = param_1->RandomKey_R_A;
  this->RandomKey_G_B = param_1->RandomKey_G_B;
  this->RandomKey_G_A = param_1->RandomKey_G_A;
  this->RandomKey_B_A = param_1->RandomKey_B_A;
  return this;
}

// GetValue @ 14acc4520

FLinearColor * __thiscall
FUIParticleRange_LinearColorCurve::GetValue
          (FUIParticleRange_LinearColorCurve *this,FLinearColor *__return_storage_ptr__,
          FUIParticleFactorParam *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FLinearColor_u_0 local_68;
  FLinearColor_u_0 local_58 [5];
  
  fVar1 = param_1->Factor;
  fVar2 = param_1->Factor2;
  if (this->RandomKey_R_G != false) {
    fVar2 = fVar1;
  }
  fVar3 = param_1->Factor3;
  if (this->RandomKey_R_B != false) {
    fVar3 = fVar1;
  }
  fVar4 = param_1->Factor4;
  if (this->RandomKey_R_A != false) {
    fVar4 = fVar1;
  }
  if (this->RandomKey_G_B != false) {
    fVar3 = fVar2;
  }
  if (this->RandomKey_G_A != false) {
    fVar4 = fVar2;
  }
  if (this->RandomKey_B_A != false) {
    fVar4 = fVar3;
  }
  FEasyParticleLinearColorCurve::GetValue(&this->Min,(FLinearColor *)&local_58[0]._s_0,param_1);
  FEasyParticleLinearColorCurve::GetValue(&this->Max,(FLinearColor *)&local_68._s_0,param_1);
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (local_68._s_0.R - (float)local_58[0]._0_4_) * fVar1 + (float)local_58[0]._0_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       (local_68._s_0.G - (float)local_58[0]._4_4_) * fVar2 + (float)local_58[0]._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (local_68._s_0.B - (float)local_58[0]._8_4_) * fVar3 + (float)local_58[0]._8_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (local_68._s_0.A - (float)local_58[0]._12_4_) * fVar4 + (float)local_58[0]._12_4_;
  return __return_storage_ptr__;
}

// Reset @ 14acc8490

void __thiscall FUIParticleRange_LinearColorCurve::Reset(FUIParticleRange_LinearColorCurve *this)

{
  longlong lVar1;
  longlong lVar2;
  FUIParticleRange_LinearColorCurve *this_00;
  FRichCurve *this_01;
  
  lVar2 = 4;
  lVar1 = 4;
  this_00 = this;
  do {
    FRichCurve::Reset((FRichCurve *)this_00);
    this_00 = (FUIParticleRange_LinearColorCurve *)((this_00->Min).ColorCurves + 1);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  (this->Min).CurveType = EmitterLifetime;
  (this->Min).Loop = false;
  this_01 = (this->Max).ColorCurves;
  do {
    FRichCurve::Reset(this_01);
    this_01 = this_01 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (this->Max).CurveType = EmitterLifetime;
  (this->Max).Loop = false;
  this->RandomKey_R_G = false;
  this->RandomKey_R_B = false;
  this->RandomKey_R_A = false;
  this->RandomKey_G_B = false;
  this->RandomKey_G_A = false;
  this->RandomKey_B_A = false;
  return;
}

