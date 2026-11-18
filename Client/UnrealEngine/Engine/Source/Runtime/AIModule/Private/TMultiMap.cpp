// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 2

// FindPair @ 146e8c1d0

TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> * __thiscall
TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
::FindPair(TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
           *this,TWeakObjectPtr<UBlackboardData,FWeakObjectPtr> param_1,
          TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TBaseKeyIterator<0> local_38;
  
  local_res18 = param_2.WeakPtr;
  TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_38,
             (TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              *)this,(TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr>)param_1.WeakPtr);
  iVar1 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
      return (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)0x0;
    }
    bVar2 = TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>::
            UEOpEquals<UBlackboardComponent,bool>
                      ((TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)
                       (*(longlong *)&(local_38.Set)->Elements + 8 + (longlong)local_38.Index * 0x18
                       ),(TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)&local_res18);
    if (bVar2) {
      return (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)
             (*(longlong *)&(local_38.Set)->Elements + 8 + (longlong)local_38.Index * 0x18);
    }
    iVar3 = iVar1;
    if (iVar1 == -1) {
      return (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)0x0;
    }
    do {
      local_res10 = local_38.Key.WeakPtr;
      iVar1 = *(int *)(*(longlong *)&(local_38.Set)->Elements + 0x10 + (longlong)iVar3 * 0x18);
      local_res20 = *(FWeakObjectPtr *)
                     (*(longlong *)&(local_38.Set)->Elements + (longlong)iVar3 * 0x18);
      bVar2 = TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr>::
              UEOpEquals<UBlackboardData_const_,bool>
                        ((TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)&local_res10);
      local_38.Index = iVar3;
      if (bVar2) break;
      iVar3 = iVar1;
      local_38.Index = iVar1;
    } while (iVar1 != -1);
  } while( true );
}

// RemoveSingle @ 146e9b690

int __thiscall
TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
::RemoveSingle(TMultiMap<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>_>
               *this,TWeakObjectPtr<UBlackboardData,FWeakObjectPtr> param_1,
              TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  TBaseKeyIterator<0> local_48;
  
  local_res18 = param_2.WeakPtr;
  TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_48,
             (TSet<TTuple<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UBlackboardData,FWeakObjectPtr>,TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>,1>,FDefaultSetAllocator>
              *)this,(TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr>)param_1.WeakPtr);
  uVar8 = local_48.NextIndex;
  if (local_48.Index == 0xffffffff) {
    return 0;
  }
  while (iVar5 = local_48.Index,
        bVar4 = TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr>::
                UEOpEquals<UBlackboardComponent,bool>
                          ((TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)
                           (*(longlong *)&(local_48.Set)->Elements +
                           ((longlong)local_48.Index * 3 + 1) * 8),
                           (TWeakObjectPtr<UBlackboardComponent,FWeakObjectPtr> *)&local_res18),
        !bVar4) {
    local_48.Index = uVar8;
    if (uVar8 == 0xffffffff) {
      return 0;
    }
    do {
      local_res10 = local_48.Key.WeakPtr;
      uVar2 = *(uint *)(*(longlong *)&(local_48.Set)->Elements + 0x10 + (longlong)(int)uVar8 * 0x18)
      ;
      local_res20 = *(FWeakObjectPtr *)
                     (*(longlong *)&(local_48.Set)->Elements + (longlong)(int)uVar8 * 0x18);
      local_48.NextIndex = uVar2;
      bVar4 = TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr>::
              UEOpEquals<UBlackboardData_const_,bool>
                        ((TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UBlackboardData_const_,FWeakObjectPtr> *)&local_res10);
      uVar9 = uVar8;
      uVar8 = uVar2;
      if (bVar4) break;
      uVar9 = uVar2;
    } while (uVar2 != 0xffffffff);
    local_48.Index = uVar9;
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < iVar5) && (iVar5 < *(int *)&((local_48.Set)->Elements).field_0x28)) {
    FVar10 = *(ForElementType<unsigned_int> *)&((local_48.Set)->Elements).field_0x20;
    if (FVar10 == (ForElementType<unsigned_int>)0x0) {
      FVar10 = (ForElementType<unsigned_int>)&((local_48.Set)->Elements).field_0x10;
    }
    if ((*(uint *)((longlong)FVar10 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
         >> (iVar5 & 0x1fU) & 1) != 0) goto LAB_146e9b7d0;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_146e9b7d0:
  lVar1 = *(longlong *)&(local_48.Set)->Elements + (longlong)iVar5 * 0x18;
  FVar6 = ((local_48.Set)->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&(local_48.Set)->Hash;
  }
  puVar7 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar1 + 0x14) * 4);
  while( true ) {
    uVar8 = *puVar7;
    if ((uVar8 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar8 == iVar5) {
      *puVar7 = *(uint *)(lVar1 + 0x10);
      TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_48.Set,iVar5,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&(local_48.Set)->Elements + (longlong)(int)uVar8 * 0x18 + 0x10);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

