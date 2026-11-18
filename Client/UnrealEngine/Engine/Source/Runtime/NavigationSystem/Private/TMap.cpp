// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 2

// RemoveAndCopyValue @ 146db3900

bool __thiscall
TMap<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
::RemoveAndCopyValue
          (TMap<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>_>
           *this,FNavigationElementHandle *param_1,TSharedPtr<FNavigationElement,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  TSharedPtr<FNavigationElement,1> *pTVar7;
  uint *puVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar6 = (int)(param_1->SubElementId >> 0x20) * 0x17 + (int)param_1->SubElementId;
  uVar10 = ((param_1->OwnerUObject).WeakPtr.ObjectSerialNumber ^
           (param_1->OwnerUObject).WeakPtr.ObjectIndex) - uVar6 ^ uVar6 >> 0xd;
  uVar4 = (-0x61c88647 - uVar10) - uVar6 ^ uVar10 << 8;
  uVar6 = (uVar6 - uVar4) - uVar10 ^ uVar4 >> 0xd;
  uVar10 = (uVar10 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar4 = (uVar4 - uVar10) - uVar6 ^ uVar10 << 0x10;
  uVar6 = (uVar6 - uVar4) - uVar10 ^ uVar4 >> 5;
  uVar10 = (uVar10 - uVar6) - uVar4 ^ uVar6 >> 3;
  uVar4 = (uVar4 - uVar10) - uVar6 ^ uVar10 << 10;
  uVar4 = TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FNavigationElementHandle>
                    ((TSet<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>,0>,FDefaultSetAllocator>
                      *)this,(uVar6 - uVar4) - uVar10 ^ uVar4 >> 0xf,param_1);
  if (uVar4 == 0xffffffff) {
    return false;
  }
  pTVar7 = (TSharedPtr<FNavigationElement,1> *)
           (*(longlong *)this + 0x10 + (longlong)(int)uVar4 * 0x28);
  if (param_2 != pTVar7) {
    param_2->Object = pTVar7->Object;
    pTVar7->Object = (FNavigationElement *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_2->SharedReferenceCount,&pTVar7->SharedReferenceCount);
  }
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)&this->field_0x28)) {
    puVar5 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x10;
    }
    if ((*(uint *)(puVar5 + (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar4 & 0x1f) & 1) != 0) goto LAB_146db3a60;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_146db3a60:
  lVar9 = *(longlong *)this + (longlong)(int)uVar4 * 0x28;
  puVar5 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar5 = &this->field_0x38;
  }
  puVar8 = (uint *)(puVar5 + (longlong)*(int *)(lVar9 + 0x24) * 4);
  do {
    uVar6 = *puVar8;
    if (uVar6 == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else if (uVar6 == uVar4) {
      *puVar8 = *(uint *)(lVar9 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedPtr<FNavigationElement,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)this,uVar4,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar4,1);
      return true;
    }
    puVar8 = (uint *)(*(longlong *)this + (longlong)(int)uVar6 * 0x28 + 0x20);
  } while( true );
}

// RemoveAndCopyValue @ 146db3b20

bool __thiscall
TMap<FObjectKey,FNavigationElementHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>_>
::RemoveAndCopyValue
          (TMap<FObjectKey,FNavigationElementHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,FNavigationElementHandle,0>_>
           *this,FObjectKey *param_1,FNavigationElementHandle *param_2)

{
  FWeakObjectPtr *pFVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  
  uVar2 = param_1->ObjectSerialNumber;
  uVar13 = param_1->ObjectIndex - uVar2 ^ uVar2 >> 0xd;
  uVar9 = (-0x61c88647 - uVar13) - uVar2 ^ uVar13 << 8;
  uVar12 = (uVar2 - uVar13) - uVar9 ^ uVar9 >> 0xd;
  uVar13 = (uVar13 - uVar12) - uVar9 ^ uVar12 >> 0xc;
  uVar9 = (uVar9 - uVar13) - uVar12 ^ uVar13 << 0x10;
  uVar12 = (uVar12 - uVar9) - uVar13 ^ uVar9 >> 5;
  uVar13 = (uVar13 - uVar12) - uVar9 ^ uVar12 >> 3;
  uVar9 = (uVar9 - uVar13) - uVar12 ^ uVar13 << 10;
  if (*(int *)&this->field_0x8 != *(int *)&this->field_0x34) {
    puVar8 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar8 = &this->field_0x38;
    }
    uVar9 = *(uint *)(puVar8 + (ulonglong)
                               (*(int *)&this->field_0x48 - 1U &
                               ((uVar12 - uVar9) - uVar13 ^ uVar9 >> 0xf)) * 4);
    if (uVar9 != 0xffffffff) {
      lVar3 = *(longlong *)this;
      do {
        lVar11 = (longlong)(int)uVar9 * 0x20;
        if ((*(int *)(lVar11 + lVar3) == param_1->ObjectIndex) &&
           (*(uint *)(lVar11 + 4 + lVar3) == uVar2)) {
          if (uVar9 == 0xffffffff) {
            return false;
          }
          pFVar1 = (FWeakObjectPtr *)(lVar11 + 8 + lVar3);
          FVar5 = pFVar1[1];
          (param_2->OwnerUObject).WeakPtr = *pFVar1;
          param_2->SubElementId = (ulong64)FVar5;
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&this->field_0x28)) {
            puVar8 = *(undefined1 **)&this->field_0x20;
            if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
              puVar8 = &this->field_0x10;
            }
            if ((*(uint *)(puVar8 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar9 & 0x1f) & 1) != 0) goto LAB_146db3ca2;
          }
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
LAB_146db3ca2:
          lVar3 = *(longlong *)this;
          puVar8 = *(undefined1 **)&this->field_0x40;
          if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
            puVar8 = &this->field_0x38;
          }
          puVar10 = (uint *)(puVar8 + (longlong)*(int *)(lVar3 + lVar11 + 0x1c) * 4);
          do {
            uVar2 = *puVar10;
            if (uVar2 == 0xffffffff) {
              bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash");
              if (bVar6) {
                pcVar4 = (code *)swi(3);
                uVar7 = (*pcVar4)();
                return (bool)uVar7;
              }
            }
            else if (uVar2 == uVar9) {
              *puVar10 = *(uint *)(lVar3 + lVar11 + 0x18);
              TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar9,1);
              return true;
            }
            puVar10 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar2 * 0x20);
          } while( true );
        }
        uVar9 = *(uint *)(lVar11 + 0x18 + lVar3);
      } while (uVar9 != 0xffffffff);
    }
  }
  return false;
}

