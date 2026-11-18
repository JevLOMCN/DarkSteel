// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 147ba0280

UScriptStruct * __cdecl FRadialDamageParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRadialDamageParams.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRadialDamageParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRadialDamageParams,(UObject *)pUVar1,
                         L"RadialDamageParams");
  }
  return Z_Registration_Info_UScriptStruct_FRadialDamageParams.OuterSingleton;
}

// GetDamageScale @ 147bdf670

float __thiscall FRadialDamageParams::GetDamageScale(FRadialDamageParams *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = this->InnerRadius;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar3 = this->OuterRadius;
  if (this->OuterRadius <= fVar2) {
    fVar3 = fVar2;
  }
  fVar1 = 0.0;
  if (((param_1 < fVar3) && (fVar1 = __real_3f800000, this->DamageFalloff != 0.0)) &&
     (fVar2 < param_1)) {
    fVar2 = powf(__real_3f800000 - (param_1 - fVar2) / (fVar3 - fVar2),this->DamageFalloff);
    return fVar2;
  }
  return fVar1;
}

