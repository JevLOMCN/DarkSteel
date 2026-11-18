// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// StaticStruct @ 1493c2b00

UScriptStruct * __cdecl FNiagaraSimStageExecutionLoopEditorData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData,
                         (UObject *)pUVar1,L"NiagaraSimStageExecutionLoopEditorData");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSimStageExecutionLoopEditorData.OuterSingleton;
}

