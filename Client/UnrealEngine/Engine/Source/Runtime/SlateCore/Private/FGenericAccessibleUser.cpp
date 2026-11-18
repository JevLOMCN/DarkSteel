// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// GetFocusedAccessibleWidget @ 1425e1040

TSharedPtr<IAccessibleWidget,1> * __thiscall
FGenericAccessibleUser::GetFocusedAccessibleWidget
          (FGenericAccessibleUser *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  IAccessibleWidget *pIVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  IAccessibleWidget *pIVar5;
  IAccessibleWidget *pIVar6;
  bool bVar7;
  
  if ((((this->FocusedAccessibleWidget).Object == (IAccessibleWidget *)0x0) ||
      (pTVar1 = (this->FocusedAccessibleWidget).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  pIVar2 = (IAccessibleWidget *)
           (this->FocusedAccessibleWidget).WeakReferenceCount.ReferenceController;
  pIVar5 = pIVar2;
  pIVar6 = (IAccessibleWidget *)0x0;
  if (pIVar2 != (IAccessibleWidget *)0x0) {
    aVar3 = *(atomic<int> *)&pIVar2->field_0x8;
    do {
      pIVar5 = (IAccessibleWidget *)0x0;
      pIVar6 = (IAccessibleWidget *)0x0;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1425e1091;
      LOCK();
      aVar4 = *(atomic<int> *)&pIVar2->field_0x8;
      bVar7 = aVar3 == aVar4;
      if (bVar7) {
        *(atomic<int> *)&pIVar2->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar7);
    pIVar5 = pIVar2;
    pIVar6 = (this->FocusedAccessibleWidget).Object;
  }
LAB_1425e1091:
  __return_storage_ptr__->Object = pIVar6;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

