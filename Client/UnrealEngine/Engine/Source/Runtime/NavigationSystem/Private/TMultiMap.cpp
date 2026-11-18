// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// EmplaceUnique<FNavigationElementHandle_const_&,TSharedRef<FNavigationElement_const_,1>_const_&> @ 146d69c70

TSharedRef<FNavigationElement_const_,1> * __thiscall
TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
::EmplaceUnique<FNavigationElementHandle_const_&,TSharedRef<FNavigationElement_const_,1>_const_&>
          (TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
           *this,FNavigationElementHandle *param_1,TSharedRef<FNavigationElement_const_,1> *param_2)

{
  TSharedRef<FNavigationElement_const_,1> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  int local_res10;
  TBaseKeyIterator<0> local_28;
  
  TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FNavigationElementHandle_const_>)param_1);
  if (local_28.Index != -1) {
    lVar2 = *(longlong *)&(local_28.Set)->Elements;
    do {
      lVar3 = (longlong)local_28.Index * 5 + 2;
      pTVar1 = (TSharedRef<FNavigationElement_const_,1> *)(lVar2 + lVar3 * 8);
      if (*(FNavigationElement **)(lVar2 + lVar3 * 8) == param_2->Object) {
        if (pTVar1 != (TSharedRef<FNavigationElement_const_,1> *)0x0) {
          return pTVar1;
        }
        break;
      }
      if (local_28.NextIndex == -1) break;
      local_28.Index = local_28.NextIndex;
      do {
        lVar3 = (longlong)local_28.Index;
        local_28.NextIndex = *(int *)(lVar2 + 0x20 + lVar3 * 0x28);
        if (((*(int *)(lVar2 + lVar3 * 0x28) == ((local_28.Key)->OwnerUObject).WeakPtr.ObjectIndex)
            && (*(int *)(lVar2 + 4 + lVar3 * 0x28) ==
                ((local_28.Key)->OwnerUObject).WeakPtr.ObjectSerialNumber)) &&
           (*(ulong64 *)(lVar2 + 8 + lVar3 * 0x28) == (local_28.Key)->SubElementId)) break;
        local_28.Index = local_28.NextIndex;
      } while (local_28.NextIndex != -1);
    } while (local_28.Index != -1);
  }
  local_28.Set = (TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
                  *)param_1;
  local_28.Key = (FNavigationElementHandle *)param_2;
  TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FNavigationElementHandle_const_&,TSharedRef<FNavigationElement_const_,1>_const_&>_>
            ((TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FNavigationElementHandle_const_&,TSharedRef<FNavigationElement_const_,1>_const_&>
                      *)&local_res10,(bool *)&local_28);
  return (TSharedRef<FNavigationElement_const_,1> *)
         (*(longlong *)this + (longlong)local_res10 * 0x28 + 0x10);
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 146d6f440

void __thiscall
TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
           *this,FNavigationElementHandle *param_1,
          TArray<TSharedRef<FNavigationElement_const_,1>_const_,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  TBaseKeyIterator<1> local_58;
  
  TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_58,
             (TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FNavigationElementHandle_const_>)param_1);
  if (local_58.Index != -1) {
    piVar1 = &param_2->ArrayMax;
    do {
      iVar8 = local_58.NextIndex;
      pFVar12 = (FScriptContainerElement *)
                (*(longlong *)&(local_58.Set)->Elements + ((longlong)local_58.Index * 5 + 2) * 8);
      pFVar10 = (param_2->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar12) && (pFVar12 < pFVar10 + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar7 + 1;
      pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar12;
      lVar11 = *(longlong *)(pFVar12 + 8);
      *(longlong *)(pFVar10 + 8) = lVar11;
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      if (iVar8 == -1) break;
      lVar11 = *(longlong *)&(local_58.Set)->Elements;
      do {
        lVar9 = (longlong)iVar8;
        local_58.NextIndex = *(int *)(lVar11 + 0x20 + lVar9 * 0x28);
        if (((*(int *)(lVar11 + lVar9 * 0x28) == ((local_58.Key)->OwnerUObject).WeakPtr.ObjectIndex)
            && (*(int *)(lVar11 + 4 + lVar9 * 0x28) ==
                ((local_58.Key)->OwnerUObject).WeakPtr.ObjectSerialNumber)) &&
           (local_58.Index = iVar8,
           *(ulong64 *)(lVar11 + 8 + lVar9 * 0x28) == (local_58.Key)->SubElementId)) break;
        local_58.Index = local_58.NextIndex;
        iVar8 = local_58.NextIndex;
      } while (local_58.NextIndex != -1);
    } while (local_58.Index != -1);
  }
  if (param_3) {
    pFVar12 = (param_2->AllocatorInstance).Data;
    iVar8 = param_2->ArrayNum / 2;
    lVar11 = (longlong)iVar8;
    if (0 < iVar8) {
      pFVar10 = pFVar12 + (longlong)(param_2->ArrayNum + -1) * 0x10;
      do {
        uVar3 = *(undefined8 *)(pFVar10 + 8);
        uVar4 = *(undefined8 *)pFVar12;
        uVar5 = *(undefined8 *)(pFVar12 + 8);
        *(undefined8 *)pFVar12 = *(undefined8 *)pFVar10;
        *(undefined8 *)(pFVar12 + 8) = uVar3;
        pFVar12 = pFVar12 + 0x10;
        *(undefined8 *)pFVar10 = uVar4;
        *(undefined8 *)(pFVar10 + 8) = uVar5;
        lVar11 = lVar11 + -1;
        pFVar10 = pFVar10 + -0x10;
      } while (lVar11 != 0);
    }
  }
  return;
}

// RemoveSingle @ 146db64a0

int __thiscall
TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
::RemoveSingle(TMultiMap<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>_>
               *this,FNavigationElementHandle *param_1,
              TSharedRef<FNavigationElement_const_,1> *param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  ForElementType<unsigned_int> FVar9;
  TBaseKeyIterator<0> local_28;
  
  TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>,TDefaultMapHashableKeyFuncs<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FNavigationElementHandle_const_>)param_1);
  if (local_28.Index == 0xffffffff) {
    return 0;
  }
  while (iVar6 = local_28.Index,
        *(FNavigationElement **)
         (*(longlong *)&(local_28.Set)->Elements + 0x10 + (longlong)local_28.Index * 0x28) !=
        param_2->Object) {
    if (local_28.NextIndex == 0xffffffff) {
      return 0;
    }
    local_28.Index = local_28.NextIndex;
    do {
      piVar1 = (int *)(*(longlong *)&(local_28.Set)->Elements + (longlong)local_28.Index * 0x28);
      local_28.NextIndex = piVar1[8];
      if (((*piVar1 == ((local_28.Key)->OwnerUObject).WeakPtr.ObjectIndex) &&
          (piVar1[1] == ((local_28.Key)->OwnerUObject).WeakPtr.ObjectSerialNumber)) &&
         (*(ulong64 *)(piVar1 + 2) == (local_28.Key)->SubElementId)) break;
      local_28.Index = local_28.NextIndex;
    } while (local_28.NextIndex != 0xffffffff);
    if (local_28.Index == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < local_28.Index) && (local_28.Index < *(int *)&((local_28.Set)->Elements).field_0x28)) {
    FVar9 = *(ForElementType<unsigned_int> *)&((local_28.Set)->Elements).field_0x20;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)&((local_28.Set)->Elements).field_0x10;
    }
    if ((*(uint *)((longlong)FVar9 +
                  (longlong)((int)(local_28.Index + (local_28.Index >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (local_28.Index & 0x1fU) & 1) != 0) goto LAB_146db65c3;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
LAB_146db65c3:
  lVar2 = *(longlong *)&(local_28.Set)->Elements + (longlong)iVar6 * 0x28;
  FVar7 = ((local_28.Set)->Hash).SecondaryData;
  if (FVar7 == (ForElementType<FSetElementId>)0x0) {
    FVar7 = (ForElementType<FSetElementId>)&(local_28.Set)->Hash;
  }
  puVar8 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar2 + 0x24) * 4);
  while( true ) {
    uVar3 = *puVar8;
    if ((uVar3 == 0xffffffff) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar5)) break;
    if (uVar3 == iVar6) {
      *puVar8 = *(uint *)(lVar2 + 0x20);
      TSparseArray<TSparseSetElement<TTuple<FNavigationElementHandle,TSharedRef<FNavigationElement_const_,1>_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&(local_28.Set)->Elements,iVar6,1);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_28.Set,iVar6,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&(local_28.Set)->Elements + (longlong)(int)uVar3 * 0x28 + 0x20);
  }
  pcVar4 = (code *)swi(3);
  iVar6 = (*pcVar4)();
  return iVar6;
}

