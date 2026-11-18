// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// StaticStruct @ 14925e1a0

UScriptStruct * __cdecl FNiagaraOutlinerSystemData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraOutlinerSystemData,(UObject *)pUVar1,
                         L"NiagaraOutlinerSystemData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraOutlinerSystemData.OuterSingleton;
}

