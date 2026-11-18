// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// StaticStruct @ 1492c65c0

UScriptStruct * __cdecl FNiagaraCollisionEventPayload::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload,(UObject *)pUVar1,
                         L"NiagaraCollisionEventPayload");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.OuterSingleton;
}

