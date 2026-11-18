// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 3

// StaticStruct @ 14ac8d130

UScriptStruct * __cdecl FRange_LinearColorCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRange_LinearColorCurve.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FRange_LinearColorCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRange_LinearColorCurve,(UObject *)pUVar1,
                         L"Range_LinearColorCurve");
  }
  return Z_Registration_Info_UScriptStruct_FRange_LinearColorCurve.OuterSingleton;
}

// operator= @ 14ac91330

FRange_LinearColorCurve * __thiscall
FRange_LinearColorCurve::operator=(FRange_LinearColorCurve *this,FRange_LinearColorCurve *param_1)

{
  FUIParticleLinearColorCurve::operator=(&this->Min,&param_1->Min);
  FUIParticleLinearColorCurve::operator=(&this->Max,&param_1->Max);
  this->RandomKey_R_G = param_1->RandomKey_R_G;
  this->RandomKey_R_B = param_1->RandomKey_R_B;
  this->RandomKey_R_A = param_1->RandomKey_R_A;
  this->RandomKey_G_B = param_1->RandomKey_G_B;
  this->RandomKey_G_A = param_1->RandomKey_G_A;
  this->RandomKey_B_A = param_1->RandomKey_B_A;
  return this;
}

// GetValue @ 14ac98df0

FLinearColor * __thiscall
FRange_LinearColorCurve::GetValue
          (FRange_LinearColorCurve *this,FLinearColor *__return_storage_ptr__,float param_1,
          float param_2,float param_3,FLerpKeyColor *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FLinearColor_u_0 local_98;
  FLinearColor_u_0 local_88 [8];
  
  fVar1 = param_4->R;
  fVar2 = param_4->G;
  if (this->RandomKey_R_G != false) {
    fVar2 = fVar1;
  }
  fVar3 = param_4->B;
  if (this->RandomKey_R_B != false) {
    fVar3 = fVar1;
  }
  fVar4 = param_4->A;
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
  FUIParticleLinearColorCurve::GetValue
            (&this->Min,(FLinearColor *)&local_88[0]._s_0,param_1,param_2,param_3);
  FUIParticleLinearColorCurve::GetValue
            (&this->Max,(FLinearColor *)&local_98._s_0,param_1,param_2,param_3);
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (local_98._s_0.R - (float)local_88[0]._0_4_) * fVar1 + (float)local_88[0]._0_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.G =
       (local_98._s_0.G - (float)local_88[0]._4_4_) * fVar2 + (float)local_88[0]._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.B =
       (local_98._s_0.B - (float)local_88[0]._8_4_) * fVar3 + (float)local_88[0]._8_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (local_98._s_0.A - (float)local_88[0]._12_4_) * fVar4 + (float)local_88[0]._12_4_;
  return __return_storage_ptr__;
}

