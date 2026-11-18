// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 1

// StaticStruct @ 14a85ba60

UScriptStruct * __cdecl FBlendStackAnimNodeReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlendStackAnimNodeReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_BlendStack();
    Z_Registration_Info_UScriptStruct_FBlendStackAnimNodeReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendStackAnimNodeReference,(UObject *)pUVar1,
                         L"BlendStackAnimNodeReference");
  }
  return Z_Registration_Info_UScriptStruct_FBlendStackAnimNodeReference.OuterSingleton;
}

