// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UniversalObjectLocator
// Functions: 1

// StaticStruct @ 1443444e0

UScriptStruct * __cdecl FUniversalObjectLocatorEmptyPayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UniversalObjectLocator();
    Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniversalObjectLocatorEmptyPayload,
                         (UObject *)pUVar1,L"UniversalObjectLocatorEmptyPayload");
  }
  return Z_Registration_Info_UScriptStruct_FUniversalObjectLocatorEmptyPayload.OuterSingleton;
}

