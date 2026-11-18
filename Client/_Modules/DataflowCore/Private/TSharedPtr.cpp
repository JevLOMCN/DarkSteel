// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 1

// TSharedPtr<FDataflowNode,1><FDataflowNode> @ 1444051f0

TSharedPtr<FDataflowNode,1> * __thiscall
TSharedPtr<FDataflowNode,1>::TSharedPtr<FDataflowNode,1><FDataflowNode>
          (TSharedPtr<FDataflowNode,1> *this,FDataflowNode *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  this->Object = param_1;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDataflowNode__U__DefaultDeleter_UFDataflowNode___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1 != (FDataflowNode *)0x0) {
    if (((param_1->_padding_ != 0) && (param_1->_padding_ != 0)) &&
       (0 < *(int *)(param_1->_padding_ + 8))) {
      return this;
    }
    pTVar4 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar4 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar4;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    return this;
  }
  return this;
}

