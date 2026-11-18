// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 1

// StaticStruct @ 14eb016d0

UScriptStruct * __cdecl FThreadingOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FThreadingOptions.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NNERuntimeORT();
    Z_Registration_Info_UScriptStruct_FThreadingOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FThreadingOptions,(UObject *)pUVar1,
                         L"ThreadingOptions");
  }
  return Z_Registration_Info_UScriptStruct_FThreadingOptions.OuterSingleton;
}

