// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 1

// operator() @ 149700ef0

void __thiscall
TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>::operator()
          (TDefaultDelete<TAsyncComponentDataComputeQueue<FDistanceFieldVolumeData>::FComputeJob>
           *this,FComputeJob *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FProgressCancel *pFVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  ITextData *pIVar6;
  FTaskBase *pFVar7;
  longlong *plVar8;
  
  if (param_1 != (FComputeJob *)0x0) {
    pFVar3 = (param_1->Progress).Ptr;
    if (pFVar3 != (FProgressCancel *)0x0) {
      DestructItems<FProgressCancel::FMessageInfo,int>
                ((FMessageInfo *)(pFVar3->Warnings).AllocatorInstance.Data,
                 (pFVar3->Warnings).ArrayNum);
      pFVar4 = (pFVar3->Warnings).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      if (*(longlong *)&pFVar3->CancelF != 0) {
        plVar5 = *(longlong **)&(pFVar3->CancelF).field_0x28;
        plVar8 = (longlong *)&(pFVar3->CancelF).field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar8 = plVar5;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar3->MessageCS);
      pIVar6 = (pFVar3->ProgressMessage).TextData.Reference;
      if (pIVar6 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar6 + 0x10))();
      }
      pIVar6 = (pFVar3->Progress).Message.TextData.Reference;
      if (pIVar6 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar6 + 0x10))();
      }
      ::operator_delete(pFVar3,0xb0);
    }
    pFVar7 = (param_1->Task).Pimpl.Reference;
    if (pFVar7 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar7->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar7->_padding_)(pFVar7,1);
      }
    }
    ::operator_delete(param_1,0x20);
  }
  return;
}

