// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UIParticle
// Functions: 1

// StaticStruct @ 14ac8cf30

UScriptStruct * __cdecl FLerpKeyVector2D::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLerpKeyVector2D.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UIParticle();
    Z_Registration_Info_UScriptStruct_FLerpKeyVector2D.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLerpKeyVector2D,(UObject *)pUVar1,
                         L"LerpKeyVector2D");
  }
  return Z_Registration_Info_UScriptStruct_FLerpKeyVector2D.OuterSingleton;
}

