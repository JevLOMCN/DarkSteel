// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 1

// StaticStruct @ 14a69dfb0

UScriptStruct * __cdecl FWN_CS_HitSphereContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereContainer.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_HitSphereContainer,(UObject *)pUVar1,
                         L"WN_CS_HitSphereContainer");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_HitSphereContainer.OuterSingleton;
}

