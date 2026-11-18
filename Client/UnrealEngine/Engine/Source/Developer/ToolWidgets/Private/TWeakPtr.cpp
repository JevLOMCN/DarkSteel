// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 1

// UEOpEquals<FSidebarDrawer> @ 142d5bd40

bool __thiscall
TWeakPtr<FSidebarDrawer,1>::UEOpEquals<FSidebarDrawer>
          (TWeakPtr<FSidebarDrawer,1> *this,TWeakPtr<FSidebarDrawer,1> *param_1)

{
  TAttribute<FText> *pTVar1;
  FSidebarDrawer *pFVar2;
  int iVar3;
  int iVar4;
  FSidebarDrawer *pFVar5;
  FSidebarDrawer *pFVar6;
  FSidebarDrawer *pFVar7;
  FSidebarDrawer *pFVar8;
  bool bVar9;
  
  pFVar2 = (FSidebarDrawer *)(this->WeakReferenceCount).ReferenceController;
  pFVar8 = (FSidebarDrawer *)0x0;
  pFVar6 = pFVar2;
  pFVar7 = pFVar8;
  if (pFVar2 != (FSidebarDrawer *)0x0) {
    iVar3 = *(int *)&(pFVar2->Config).ButtonText.Value.TextData.Reference;
    do {
      pFVar6 = pFVar8;
      pFVar7 = (FSidebarDrawer *)0x0;
      if (iVar3 == 0) goto LAB_142d5bd81;
      pTVar1 = &(pFVar2->Config).ButtonText;
      LOCK();
      iVar4 = *(int *)&(pTVar1->Value).TextData.Reference;
      bVar9 = iVar3 == iVar4;
      if (bVar9) {
        *(int *)&(pTVar1->Value).TextData.Reference = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar9);
    pFVar6 = pFVar2;
    pFVar7 = this->Object;
  }
LAB_142d5bd81:
  pFVar2 = (FSidebarDrawer *)(param_1->WeakReferenceCount).ReferenceController;
  pFVar5 = pFVar2;
  if (pFVar2 != (FSidebarDrawer *)0x0) {
    iVar3 = *(int *)&(pFVar2->Config).ButtonText.Value.TextData.Reference;
    do {
      pFVar5 = pFVar8;
      if (iVar3 == 0) goto LAB_142d5bda2;
      pTVar1 = &(pFVar2->Config).ButtonText;
      LOCK();
      iVar4 = *(int *)&(pTVar1->Value).TextData.Reference;
      bVar9 = iVar3 == iVar4;
      if (bVar9) {
        *(int *)&(pTVar1->Value).TextData.Reference = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar9);
    pFVar8 = param_1->Object;
    pFVar5 = pFVar2;
  }
LAB_142d5bda2:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  return pFVar7 == pFVar8;
}

