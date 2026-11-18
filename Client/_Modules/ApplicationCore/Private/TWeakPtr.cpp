// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 2

// UEOpEquals<FGenericWindow_const_> @ 1423c1570

bool __thiscall
TWeakPtr<FGenericWindow_const_,1>::UEOpEquals<FGenericWindow_const_>
          (TWeakPtr<FGenericWindow_const_,1> *this,TWeakPtr<FGenericWindow_const_,1> *param_1)

{
  FGenericWindow *pFVar1;
  int iVar2;
  int iVar3;
  FGenericWindow *pFVar4;
  FGenericWindow *pFVar5;
  FGenericWindow *pFVar6;
  FGenericWindow *pFVar7;
  bool bVar8;
  
  pFVar1 = (FGenericWindow *)(this->WeakReferenceCount).ReferenceController;
  pFVar7 = (FGenericWindow *)0x0;
  pFVar5 = pFVar1;
  pFVar6 = pFVar7;
  if (pFVar1 != (FGenericWindow *)0x0) {
    iVar2 = *(int *)&(pFVar1->Definition).Object;
    do {
      pFVar5 = pFVar7;
      pFVar6 = (FGenericWindow *)0x0;
      if (iVar2 == 0) goto LAB_1423c15b1;
      LOCK();
      iVar3 = *(int *)&(pFVar1->Definition).Object;
      bVar8 = iVar2 == iVar3;
      if (bVar8) {
        *(int *)&(pFVar1->Definition).Object = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar8);
    pFVar5 = pFVar1;
    pFVar6 = this->Object;
  }
LAB_1423c15b1:
  pFVar1 = (FGenericWindow *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar4 = pFVar1;
  if (pFVar1 != (FGenericWindow *)0x0) {
    iVar2 = *(int *)&(pFVar1->Definition).Object;
    do {
      pFVar4 = pFVar7;
      if (iVar2 == 0) goto LAB_1423c15d2;
      LOCK();
      iVar3 = *(int *)&(pFVar1->Definition).Object;
      bVar8 = iVar2 == iVar3;
      if (bVar8) {
        *(int *)&(pFVar1->Definition).Object = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar8);
    pFVar7 = param_1->Object;
    pFVar4 = pFVar1;
  }
LAB_1423c15d2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  return pFVar6 == pFVar7;
}

// UEOpEquals<ITextInputMethodContext_const_> @ 1423c1610

bool __thiscall
TWeakPtr<ITextInputMethodContext_const_,1>::UEOpEquals<ITextInputMethodContext_const_>
          (TWeakPtr<ITextInputMethodContext_const_,1> *this,
          TWeakPtr<ITextInputMethodContext_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar1 = (this->WeakReferenceCount).ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar5 = pTVar1;
  pTVar6 = pTVar7;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      pTVar6 = (TReferenceControllerBase<1> *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1423c1651;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar5 = pTVar1;
    pTVar6 = (TReferenceControllerBase<1> *)this->Object;
  }
LAB_1423c1651:
  pTVar1 = (param_1->WeakReferenceCount).ReferenceController;
  pTVar4 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      pTVar4 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1423c1672;
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = (TReferenceControllerBase<1> *)param_1->Object;
    pTVar4 = pTVar1;
  }
LAB_1423c1672:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return pTVar6 == pTVar7;
}

