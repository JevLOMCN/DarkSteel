// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EasyParticleModule
// Functions: 4

// StaticStruct @ 14acb1530

UScriptStruct * __cdecl FUIParticleRange_Float::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUIParticleRange_Float.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EasyParticleModule();
    Z_Registration_Info_UScriptStruct_FUIParticleRange_Float.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUIParticleRange_Float,(UObject *)pUVar1,
                         L"UIParticleRange_Float");
  }
  return Z_Registration_Info_UScriptStruct_FUIParticleRange_Float.OuterSingleton;
}

// GetValue @ 14acc4430

float __thiscall
FUIParticleRange_Float::GetValue(FUIParticleRange_Float *this,FUIParticleFactorParam *param_1)

{
  return (this->Max - this->Min) * param_1->Factor + this->Min;
}

// GetValue @ 14acc4450

float __thiscall FUIParticleRange_Float::GetValue(FUIParticleRange_Float *this,float param_1)

{
  return (this->Max - this->Min) * param_1 + this->Min;
}

// Reset @ 14acc8430

void __thiscall FUIParticleRange_Float::Reset(FUIParticleRange_Float *this)

{
  this->Min = 0.0;
  this->Max = 0.0;
  return;
}

