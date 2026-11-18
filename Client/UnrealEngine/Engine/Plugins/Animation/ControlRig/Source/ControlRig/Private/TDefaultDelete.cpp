// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// operator() @ 14a3c26e0

void __thiscall
TDefaultDelete<FSampleTrackContainer>::operator()
          (TDefaultDelete<FSampleTrackContainer> *this,FSampleTrackContainer *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> FVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  longlong *plVar6;
  
  if (param_1 != (FSampleTrackContainer *)0x0) {
    FVar3 = (param_1->TimeSampleTrackIndex).Samples.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<int>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    DestructItems<TSharedPtr<FSampleTrackBase,1>,int>
              ((TSharedPtr<FSampleTrackBase,1> *)(param_1->Tracks).AllocatorInstance.Data,
               (param_1->Tracks).ArrayNum);
    pFVar4 = (param_1->Tracks).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    *(undefined4 *)&(param_1->NameToIndex).field_0x48 = 0;
    pvVar5 = *(void **)&(param_1->NameToIndex).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->NameToIndex);
    plVar6 = (longlong *)param_1->_padding_;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    ::operator_delete(param_1,0x98);
  }
  return;
}

