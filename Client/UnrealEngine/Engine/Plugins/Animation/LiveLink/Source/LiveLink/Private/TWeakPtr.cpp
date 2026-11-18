// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// UEOpEquals<FMessageEndpoint> @ 14d00ce30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TWeakPtr<FMessageEndpoint,1>::UEOpEquals<FMessageEndpoint>
          (TWeakPtr<FMessageEndpoint,1> *this,TWeakPtr<FMessageEndpoint,1> *param_1)

{
  FMessageEndpoint *pFVar1;
  atomic<int> aVar2;
  int iVar3;
  atomic<int> aVar4;
  int iVar5;
  FMessageEndpoint *pFVar6;
  FMessageEndpoint *pFVar7;
  FMessageEndpoint *pFVar8;
  FMessageEndpoint *pFVar9;
  bool bVar10;
  
  pFVar1 = (FMessageEndpoint *)(this->WeakReferenceCount).ReferenceController;
  pFVar9 = (FMessageEndpoint *)0x0;
  pFVar7 = pFVar1;
  pFVar8 = pFVar9;
  if (pFVar1 != (FMessageEndpoint *)0x0) {
    aVar2 = *(atomic<int> *)&pFVar1->_padding_;
    do {
      pFVar7 = pFVar9;
      pFVar8 = (FMessageEndpoint *)0x0;
      if (aVar2 == (atomic<int>)0x0) goto LAB_14d00ce71;
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
LAB_14d00ce71:
  pFVar1 = (FMessageEndpoint *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar6 = pFVar1;
  if (pFVar1 != (FMessageEndpoint *)0x0) {
    iVar3 = (int)pFVar1->_padding_;
    do {
      pFVar6 = pFVar9;
      if (iVar3 == 0) goto LAB_14d00ce92;
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
LAB_14d00ce92:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar7);
  return pFVar8 == pFVar9;
}

