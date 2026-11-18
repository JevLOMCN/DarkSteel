// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// StaticStruct @ 148e406b0

UScriptStruct * __cdecl FNDIDataChannel_GPUScriptParameterAccessInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo,
                         (UObject *)pUVar1,L"NDIDataChannel_GPUScriptParameterAccessInfo");
  }
  return Z_Registration_Info_UScriptStruct_FNDIDataChannel_GPUScriptParameterAccessInfo.
         OuterSingleton;
}

