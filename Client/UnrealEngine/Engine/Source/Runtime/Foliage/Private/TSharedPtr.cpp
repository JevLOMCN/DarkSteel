// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Foliage
// Functions: 1

// operator=<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> @ 145ed0660

TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1> * __thiscall
TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1>::
operator=<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_>
          (TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1> *this,
          TRawPtrProxy<TArray<FClusterNode,TSizedDefaultAllocator<32>_>_> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TArray<FClusterNode,TSizedDefaultAllocator<32>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedPtr<TArray<FClusterNode,TSizedDefaultAllocator<32>_>,1> local_18;
  
  pTVar3 = param_1->Object;
  pTVar5 = ::operator_new(0x18);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TArray_UFClusterNode__V__TSizedDefaultAllocator__0CA_____U__DefaultDeleter_V__TArray_UFClusterNode__V__TSizedDefaultAllocator__0CA______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5[1]._padding_ = (longlong)pTVar3;
  }
  if (this != &local_18) {
    this->Object = pTVar3;
    pTVar4 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar5 != pTVar4) {
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      (this->SharedReferenceCount).ReferenceController = pTVar5;
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->SharedReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        pTVar5 = pTVar6;
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)pTVar4->_padding_)(pTVar4);
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return this;
}

