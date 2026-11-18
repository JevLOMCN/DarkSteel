// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// StaticStruct @ 1492634a0

UScriptStruct * __cdecl FNiagaraSimpleClientInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSimpleClientInfo,(UObject *)pUVar1,
                         L"NiagaraSimpleClientInfo");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSimpleClientInfo.OuterSingleton;
}

// ~FNiagaraSimpleClientInfo @ 14927a700

void __thiscall FNiagaraSimpleClientInfo::~FNiagaraSimpleClientInfo(FNiagaraSimpleClientInfo *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->Emitters).AllocatorInstance.Data,(this->Emitters).ArrayNum);
  pFVar1 = (this->Emitters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Components).AllocatorInstance.Data,(this->Components).ArrayNum);
  pFVar1 = (this->Components).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Actors).AllocatorInstance.Data,(this->Actors).ArrayNum);
  pFVar1 = (this->Actors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            ((FString *)(this->Systems).AllocatorInstance.Data,(this->Systems).ArrayNum);
  pFVar1 = (this->Systems).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

