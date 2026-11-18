// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// operator<< @ 1421b78b0

FArchive * __thiscall
UE::Private::FReferencerFinderArchive::operator<<(FReferencerFinderArchive *this,UObject **param_1)

{
  UObject *pUVar1;
  TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *pTVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  
  pUVar1 = *param_1;
  if (pUVar1 != (UObject *)0x0) {
    pTVar2 = this->Targets;
    uVar5 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
      FVar6 = (pTVar2->Hash).SecondaryData;
      if (FVar6 == (ForElementType<FSetElementId>)0x0) {
        FVar6 = (ForElementType<FSetElementId>)&pTVar2->Hash;
      }
      iVar4 = *(int *)((longlong)FVar6 +
                      (ulonglong)(pTVar2->HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
      if (iVar4 != -1) {
        while (*(UObject **)(*(longlong *)&pTVar2->Elements + (longlong)iVar4 * 0x10) != pUVar1) {
          iVar4 = *(int *)(*(longlong *)&pTVar2->Elements + 8 + (longlong)iVar4 * 0x10);
          if (iVar4 == -1) {
            return (FArchive *)this;
          }
        }
        if ((this->bSkipInnerReferences != false) &&
           (bVar3 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)this->CurrentObject,pUVar1),
           bVar3)) {
          return (FArchive *)this;
        }
        this->bDoesReferenceAnyTargets = true;
      }
    }
  }
  return (FArchive *)this;
}

// HandleObjectReference @ 1421d1770

void __thiscall
UE::Private::FReferencerFinderArchive::HandleObjectReference
          (FReferencerFinderArchive *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  UObject *pUVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  
  pUVar1 = *param_1;
  if (pUVar1 != (UObject *)0x0) {
    plVar2 = (longlong *)this->_padding_;
    uVar5 = ((uint)((ulonglong)pUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar6 = (longlong *)plVar2[8];
      if ((longlong *)plVar2[8] == (longlong *)0x0) {
        plVar6 = plVar2 + 7;
      }
      iVar4 = *(int *)((longlong)plVar6 +
                      (ulonglong)((int)plVar2[9] - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
      if (iVar4 != -1) {
        while (*(UObject **)(*plVar2 + (longlong)iVar4 * 0x10) != pUVar1) {
          iVar4 = *(int *)(*plVar2 + 8 + (longlong)iVar4 * 0x10);
          if (iVar4 == -1) {
            return;
          }
        }
        if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
           (bVar3 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)this->_padding_,pUVar1), bVar3))
        {
          return;
        }
        *(undefined1 *)&this->_padding_ = 1;
      }
    }
  }
  return;
}

// IsIgnoringArchetypeRef @ 1421d3580

bool __thiscall
UE::Private::FReferencerFinderArchive::IsIgnoringArchetypeRef(FReferencerFinderArchive *this)

{
  return false;
}

// IsIgnoringTransient @ 1421d35d0

bool __thiscall
UE::Private::FReferencerFinderArchive::IsIgnoringTransient(FReferencerFinderArchive *this)

{
  return false;
}

