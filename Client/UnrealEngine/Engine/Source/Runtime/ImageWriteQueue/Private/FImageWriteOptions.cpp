// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 1

// StaticStruct @ 1446e7f40

UScriptStruct * __cdecl FImageWriteOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FImageWriteOptions.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ImageWriteQueue();
    Z_Registration_Info_UScriptStruct_FImageWriteOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImageWriteOptions,(UObject *)pUVar1,
                         L"ImageWriteOptions");
  }
  return Z_Registration_Info_UScriptStruct_FImageWriteOptions.OuterSingleton;
}

