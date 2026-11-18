// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 1

// StaticStruct @ 14e323000

UScriptStruct * __cdecl FInterchangeUserDefinedAttributeInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInterchangeUserDefinedAttributeInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_InterchangeCore();
    Z_Registration_Info_UScriptStruct_FInterchangeUserDefinedAttributeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInterchangeUserDefinedAttributeInfo,
                         (UObject *)pUVar1,L"InterchangeUserDefinedAttributeInfo");
  }
  return Z_Registration_Info_UScriptStruct_FInterchangeUserDefinedAttributeInfo.OuterSingleton;
}

