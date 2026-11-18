// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// CheckCachedData @ 147810d70

void __thiscall FWalkableSlopeOverride::CheckCachedData(FWalkableSlopeOverride *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = this->WalkableSlopeAngle;
  if (fVar1 != this->CachedSlopeAngle) {
    fVar2 = cosf(fVar1 * __real_3c8efa35);
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    this->CachedSlopeAngle = fVar1;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    this->CachedSlopeCos = fVar2;
  }
  return;
}

// StaticStruct @ 147ba3e40

UScriptStruct * __cdecl FWalkableSlopeOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWalkableSlopeOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWalkableSlopeOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWalkableSlopeOverride,(UObject *)pUVar1,
                         L"WalkableSlopeOverride");
  }
  return Z_Registration_Info_UScriptStruct_FWalkableSlopeOverride.OuterSingleton;
}

