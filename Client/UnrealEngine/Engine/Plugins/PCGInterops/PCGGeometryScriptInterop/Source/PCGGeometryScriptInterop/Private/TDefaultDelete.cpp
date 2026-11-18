// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 1

// operator() @ 14cee73f0

void __thiscall
TDefaultDelete<FProgressCancel>::operator()
          (TDefaultDelete<FProgressCancel> *this,FProgressCancel *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  longlong *plVar4;
  
  if (param_1 != (FProgressCancel *)0x0) {
    DestructItems<FProgressCancel::FMessageInfo,int>
              ((FMessageInfo *)(param_1->Warnings).AllocatorInstance.Data,
               (param_1->Warnings).ArrayNum);
    pFVar1 = (param_1->Warnings).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    if (*(longlong *)&param_1->CancelF != 0) {
      plVar2 = *(longlong **)&(param_1->CancelF).field_0x28;
      plVar4 = (longlong *)&(param_1->CancelF).field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar4 = plVar2;
      }
      (**(code **)(*plVar4 + 0x10))();
    }
    DeleteCriticalSection((LPCRITICAL_SECTION)&param_1->MessageCS);
    pIVar3 = (param_1->ProgressMessage).TextData.Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    pIVar3 = (param_1->Progress).Message.TextData.Reference;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 0x10))();
    }
    ::operator_delete(param_1,0xb0);
  }
  return;
}

