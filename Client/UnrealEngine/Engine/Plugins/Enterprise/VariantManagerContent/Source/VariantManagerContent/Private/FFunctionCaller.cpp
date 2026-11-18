// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VariantManagerContent
// Functions: 2

// StaticStruct @ 14e2cf2f0

UScriptStruct * __cdecl FFunctionCaller::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFunctionCaller.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_VariantManagerContent();
    Z_Registration_Info_UScriptStruct_FFunctionCaller.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFunctionCaller,(UObject *)pUVar1,
                         L"FunctionCaller");
  }
  return Z_Registration_Info_UScriptStruct_FFunctionCaller.OuterSingleton;
}

// PostSerialize @ 14e2e14c0

void __thiscall FFunctionCaller::PostSerialize(FFunctionCaller *this,FArchive *param_1)

{
  return;
}

