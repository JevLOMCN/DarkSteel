// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 1

// StaticStruct @ 143632720

UScriptStruct * __cdecl FElementID::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FElementID.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MeshDescription();
    Z_Registration_Info_UScriptStruct_FElementID.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FElementID,(UObject *)pUVar1,L"ElementID");
  }
  return Z_Registration_Info_UScriptStruct_FElementID.OuterSingleton;
}

