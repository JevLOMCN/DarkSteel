// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 1

// ~FStateItem @ 14d710c60

void __thiscall UE::StateTree::SCompactTreeView::FStateItem::~FStateItem(FStateItem *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  ITextData *pIVar4;
  longlong *plVar5;
  
  DestructItems<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,int>
            ((TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)
             (this->Children).AllocatorInstance.Data,(this->Children).ArrayNum);
  pFVar3 = (this->Children).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FInstancedStruct::Reset(&(this->CustomData).InstancedStruct);
  pIVar4 = (this->TooltipText).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  pIVar4 = (this->Desc).TextData.Reference;
  if (pIVar4 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar4 + 0x10))();
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d710ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 8))(plVar5,1);
      return;
    }
  }
  return;
}

