// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 2

// <lambda_invoker_cdecl> @ 14cab0ae0

bool __cdecl FProgressCancel::<lambda_24_>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// ~FProgressCancel @ 14cad1ab0

void __thiscall FProgressCancel::~FProgressCancel(FProgressCancel *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  longlong *plVar4;
  
  DestructItems<FProgressCancel::FMessageInfo,int>
            ((FMessageInfo *)(this->Warnings).AllocatorInstance.Data,(this->Warnings).ArrayNum);
  pFVar1 = (this->Warnings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->CancelF != 0) {
    plVar2 = *(longlong **)&(this->CancelF).field_0x28;
    plVar4 = (longlong *)&(this->CancelF).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MessageCS);
  pIVar3 = (this->ProgressMessage).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pIVar3 = (this->Progress).Message.TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cad1b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar3 + 0x10))();
    return;
  }
  return;
}

