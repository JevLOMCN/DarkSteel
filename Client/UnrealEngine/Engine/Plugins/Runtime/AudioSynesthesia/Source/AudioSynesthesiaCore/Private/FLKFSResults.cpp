// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 1

// StaticStruct @ 14d7ebaf0

UScriptStruct * __cdecl FLKFSResults::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLKFSResults.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioSynesthesiaCore();
    Z_Registration_Info_UScriptStruct_FLKFSResults.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLKFSResults,(UObject *)pUVar1,L"LKFSResults");
  }
  return Z_Registration_Info_UScriptStruct_FLKFSResults.OuterSingleton;
}

