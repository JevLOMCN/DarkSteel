// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// UEOpEquals<UE::PoseSearch::IPoseHistory_const_> @ 14a8de3c0

bool __thiscall
TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1>::UEOpEquals<UE::PoseSearch::IPoseHistory_const_>
          (TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *this,
          TWeakPtr<UE::PoseSearch::IPoseHistory_const_,1> *param_1)

{
  IPoseHistory *pIVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  IPoseHistory *pIVar6;
  IPoseHistory *pIVar7;
  IPoseHistory *pIVar8;
  IPoseHistory *pIVar9;
  bool bVar10;
  
  pIVar1 = (IPoseHistory *)(this->WeakReferenceCount).ReferenceController;
  pIVar9 = (IPoseHistory *)0x0;
  pIVar7 = pIVar1;
  pIVar8 = pIVar9;
  if (pIVar1 != (IPoseHistory *)0x0) {
    aVar2 = *(atomic<int> *)&pIVar1->field_0x8;
    do {
      pIVar7 = pIVar9;
      pIVar8 = (IPoseHistory *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14a8de401;
      LOCK();
      aVar4 = *(atomic<int> *)&pIVar1->field_0x8;
      bVar10 = aVar2 == aVar4;
      if (bVar10) {
        *(atomic<int> *)&pIVar1->field_0x8 = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar10);
    pIVar7 = pIVar1;
    pIVar8 = this->Object;
  }
LAB_14a8de401:
  pIVar1 = (IPoseHistory *)(param_1->WeakReferenceCount).ReferenceController;
  pIVar6 = pIVar1;
  if (pIVar1 != (IPoseHistory *)0x0) {
    iVar3 = *(int *)&pIVar1->field_0x8;
    do {
      pIVar6 = pIVar9;
      if (iVar3 == 0) goto LAB_14a8de422;
      LOCK();
      iVar5 = *(int *)&pIVar1->field_0x8;
      bVar10 = iVar3 == iVar5;
      if (bVar10) {
        *(int *)&pIVar1->field_0x8 = iVar3 + 1;
        iVar5 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar5;
    } while (!bVar10);
    pIVar9 = param_1->Object;
    pIVar6 = pIVar1;
  }
LAB_14a8de422:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pIVar7);
  return pIVar8 == pIVar9;
}

