// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// UEOpEquals<FMassEntityManager_const_> @ 1471d4800

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TWeakPtr<FMassEntityManager_const_,1>::UEOpEquals<FMassEntityManager_const_>
          (TWeakPtr<FMassEntityManager_const_,1> *this,
          TWeakPtr<FMassEntityManager_const_,1> *param_1)

{
  FMassEntityManager *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FMassEntityManager *pFVar6;
  FMassEntityManager *pFVar7;
  FMassEntityManager *pFVar8;
  FMassEntityManager *pFVar9;
  bool bVar10;
  
  pFVar1 = (FMassEntityManager *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FMassEntityManager *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FMassEntityManager *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FMassEntityManager *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1471d4841;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar1->_padding_;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar7 = pFVar1;
    pFVar8 = this->Object;
  }
LAB_1471d4841:
  pFVar1 = (FMassEntityManager *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FMassEntityManager *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_1471d4862;
      LOCK();
      iVar5 = (int)pFVar1->_padding_;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pFVar1->_padding_ = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pFVar9 = param_1->Object;
    pFVar6 = pFVar1;
  }
LAB_1471d4862:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

// UEOpEquals<FMassEntityManager> @ 1471d48a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
TWeakPtr<FMassEntityManager_const_,1>::UEOpEquals<FMassEntityManager>
          (TWeakPtr<FMassEntityManager_const_,1> *this,TWeakPtr<FMassEntityManager,1> *param_1)

{
  FMassEntityManager *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FMassEntityManager *pFVar6;
  FMassEntityManager *pFVar7;
  FMassEntityManager *pFVar8;
  FMassEntityManager *pFVar9;
  bool bVar10;
  
  pFVar1 = (FMassEntityManager *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FMassEntityManager *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FMassEntityManager *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FMassEntityManager *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1471d48e1;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar1->_padding_;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pFVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pFVar7 = pFVar1;
    pFVar8 = this->Object;
  }
LAB_1471d48e1:
  pFVar1 = (FMassEntityManager *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FMassEntityManager *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_1471d4902;
      LOCK();
      iVar5 = (int)pFVar1->_padding_;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pFVar1->_padding_ = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pFVar9 = param_1->Object;
    pFVar6 = pFVar1;
  }
LAB_1471d4902:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

