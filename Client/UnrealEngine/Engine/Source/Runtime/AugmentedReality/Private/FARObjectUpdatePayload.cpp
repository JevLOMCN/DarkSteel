// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 1

// StaticStruct @ 14cf2eed0

UScriptStruct * __cdecl FARObjectUpdatePayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FARObjectUpdatePayload.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AugmentedReality();
    Z_Registration_Info_UScriptStruct_FARObjectUpdatePayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FARObjectUpdatePayload,(UObject *)pUVar1,
                         L"ARObjectUpdatePayload");
  }
  return Z_Registration_Info_UScriptStruct_FARObjectUpdatePayload.OuterSingleton;
}

