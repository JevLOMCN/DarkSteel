// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 3

// StaticStruct @ 14acb14f0

UScriptStruct * __cdecl FUIParticleRange_Color::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleRange_Color.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FUIParticleRange_Color.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleRange_Color,(UObject *)pUVar1,
                         L"UIParticleRange_Color");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleRange_Color.OuterSingleton;
}

// GetValue @ 14acc4370

FLinearColor * __thiscall
FUIParticleRange_Color::GetValue
          (FUIParticleRange_Color *this,FLinearColor *__return_storage_ptr__,
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
  float fVar11;
  
  fVar1 = param_1->Factor;
  fVar9 = param_1->Factor2;
  if (this->RandomKey_R_G != false) {
    fVar9 = fVar1;
  }
  fVar10 = param_1->Factor3;
  if (this->RandomKey_R_B != false) {
    fVar10 = fVar1;
  }
  fVar11 = param_1->Factor4;
  if (this->RandomKey_R_A != false) {
    fVar11 = fVar1;
  }
  if (this->RandomKey_G_B != false) {
    fVar10 = fVar9;
  }
  if (this->RandomKey_G_A != false) {
    fVar11 = fVar9;
  }
  if (this->RandomKey_B_A != false) {
    fVar11 = fVar10;
  }
  fVar2 = (this->Max).field0_0x0._s_0.G;
  fVar3 = (this->Min).field0_0x0._s_0.G;
  fVar4 = (this->Max).field0_0x0._s_0.B;
  fVar5 = (this->Min).field0_0x0._s_0.B;
  fVar6 = (this->Min).field0_0x0._s_0.G;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       ((this->Max).field0_0x0._s_0.R - (this->Min).field0_0x0._s_0.R) * fVar1 +
       (this->Min).field0_0x0._s_0.R;
  fVar1 = (this->Max).field0_0x0._s_0.A;
  fVar7 = (this->Min).field0_0x0._s_0.A;
  fVar8 = (this->Min).field0_0x0._s_0.B;
  (__return_storage_ptr__->field0_0x0)._s_0.G = (fVar2 - fVar3) * fVar9 + fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.B = (fVar4 - fVar5) * fVar10 + fVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.A =
       (fVar1 - fVar7) * fVar11 + (this->Min).field0_0x0._s_0.A;
  return __return_storage_ptr__;
}

// Reset @ 14acc8400

void __thiscall FUIParticleRange_Color::Reset(FUIParticleRange_Color *this)

{
  FLinearColor FVar1;
  
  (this->Min).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White.field0_0x0;
  FVar1 = FLinearColor::White;
  this->RandomKey_R_G = false;
  this->RandomKey_R_B = false;
  this->RandomKey_R_A = false;
  this->RandomKey_G_B = false;
  this->RandomKey_G_A = false;
  this->RandomKey_B_A = false;
  (this->Max).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  return;
}

