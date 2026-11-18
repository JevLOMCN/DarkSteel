// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ~FNiagaraSimCacheFeedbackContext @ 14938a2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraSimCacheFeedbackContext::~FNiagaraSimCacheFeedbackContext
          (FNiagaraSimCacheFeedbackContext *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  if (this->bAutoLogIssues != false) {
    iVar1 = (this->Warnings).ArrayNum;
    pFVar2 = (this->Warnings).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Warnings).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar2 == pFVar3) break;
      if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      pFVar2 = pFVar2 + 0x10;
    }
    iVar1 = (this->Errors).ArrayNum;
    pFVar2 = (this->Errors).AllocatorInstance.Data;
    pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Errors).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar2 == pFVar3) break;
      if (2 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      pFVar2 = pFVar2 + 0x10;
    }
  }
  DestructItems<FString,int>
            ((FString *)(this->Warnings).AllocatorInstance.Data,(this->Warnings).ArrayNum);
  pFVar2 = (this->Warnings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            ((FString *)(this->Errors).AllocatorInstance.Data,(this->Errors).ArrayNum);
  pFVar2 = (this->Errors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

