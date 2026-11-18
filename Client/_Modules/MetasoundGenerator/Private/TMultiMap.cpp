// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGenerator
// Functions: 3

// EmplaceUnique<Metasound::FOperatorPoolEntryID_const_&,FGuid_const_&> @ 14b2a45c0

FGuid * __thiscall
TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
::EmplaceUnique<Metasound::FOperatorPoolEntryID_const_&,FGuid_const_&>
          (TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
           *this,FOperatorPoolEntryID *param_1,FGuid *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  FGuid *pFVar5;
  int iVar6;
  int local_res10;
  TBaseKeyIterator<0> local_48;
  
  TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_48,
             (TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<Metasound::FOperatorPoolEntryID_const_>)param_1);
  iVar6 = local_48.NextIndex;
  do {
    if (local_48.Index == -1) {
LAB_14b2a46a9:
      local_48.Set = (TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
                      *)param_1;
      local_48.Key = (FOperatorPoolEntryID *)param_2;
      TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,FGuid_const_&>_>
                ((TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
                  *)this,(TPairInitializer<Metasound::FOperatorPoolEntryID_const_&,FGuid_const_&> *)
                         &local_res10,(bool *)&local_48);
      return (FGuid *)(*(longlong *)this + (longlong)local_res10 * 0x38 + 0x20);
    }
    pFVar5 = (FGuid *)(*(longlong *)&(local_48.Set)->Elements + 0x20 +
                      (longlong)local_48.Index * 0x38);
    if (((pFVar5->C == param_2->C && pFVar5->B == param_2->B) && pFVar5->D == param_2->D) &&
        pFVar5->A == param_2->A) {
      if (pFVar5 != (FGuid *)0x0) {
        return pFVar5;
      }
      goto LAB_14b2a46a9;
    }
    if (iVar6 == -1) goto LAB_14b2a46a9;
    do {
      lVar4 = (longlong)iVar6 * 0x38;
      lVar2 = *(longlong *)&(local_48.Set)->Elements;
      iVar1 = *(int *)(lVar4 + 0x30 + lVar2);
      if ((((*(uint *)(lVar4 + 8 + lVar2) == ((local_48.Key)->OperatorID).C &&
            *(uint *)(lVar4 + 0xc + lVar2) == ((local_48.Key)->OperatorID).D) &&
           *(uint *)(lVar4 + 4 + lVar2) == ((local_48.Key)->OperatorID).B) &&
           ((local_48.Key)->OperatorID).A == *(uint *)(lVar4 + lVar2)) &&
         (bVar3 = Metasound::operator==
                            ((FOperatorSettings *)(lVar4 + lVar2 + 0x10),
                             &(local_48.Key)->OperatorSettings), local_48.Index = iVar6,
         iVar6 = iVar1, bVar3)) break;
      iVar6 = iVar1;
      local_48.Index = iVar1;
    } while (iVar1 != -1);
  } while( true );
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 14b2a4ce0

void __thiscall
TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
           *this,FOperatorPoolEntryID *param_1,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<Metasound::FOperatorPoolEntryID_const_>)param_1);
  iVar6 = local_38.Index;
  iVar7 = local_38.NextIndex;
  do {
    local_38.Index = iVar6;
    if (local_38.Index == -1) {
LAB_14b2a4e8e:
      if (param_3) {
        pFVar11 = (param_2->AllocatorInstance).Data;
        iVar7 = param_2->ArrayNum / 2;
        lVar9 = (longlong)iVar7;
        if (0 < iVar7) {
          pFVar10 = pFVar11 + (longlong)(param_2->ArrayNum + -1) * 0x10;
          do {
            uVar2 = *(undefined8 *)(pFVar10 + 8);
            uVar3 = *(undefined8 *)pFVar11;
            uVar4 = *(undefined8 *)(pFVar11 + 8);
            *(undefined8 *)pFVar11 = *(undefined8 *)pFVar10;
            *(undefined8 *)(pFVar11 + 8) = uVar2;
            pFVar11 = pFVar11 + 0x10;
            *(undefined8 *)pFVar10 = uVar3;
            *(undefined8 *)(pFVar10 + 8) = uVar4;
            lVar9 = lVar9 + -1;
            pFVar10 = pFVar10 + -0x10;
          } while (lVar9 != 0);
        }
      }
      return;
    }
    pFVar10 = (FScriptContainerElement *)
              (*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x38 + 0x20);
    pFVar11 = (param_2->AllocatorInstance).Data;
    if (((pFVar11 <= pFVar10) && (pFVar10 < pFVar11 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x410,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    uVar2 = *(undefined8 *)(pFVar10 + 8);
    pFVar11 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(undefined8 *)pFVar11 = *(undefined8 *)pFVar10;
    *(undefined8 *)(pFVar11 + 8) = uVar2;
    iVar6 = iVar7;
    local_38.Index = iVar7;
    if (iVar7 == -1) goto LAB_14b2a4e8e;
    do {
      lVar8 = (longlong)iVar6 * 0x38;
      lVar9 = *(longlong *)&(local_38.Set)->Elements;
      iVar7 = *(int *)(lVar8 + 0x30 + lVar9);
      local_38.NextIndex = iVar7;
      if ((((*(uint *)(lVar8 + 8 + lVar9) == ((local_38.Key)->OperatorID).C &&
            *(uint *)(lVar8 + 0xc + lVar9) == ((local_38.Key)->OperatorID).D) &&
           *(uint *)(lVar8 + 4 + lVar9) == ((local_38.Key)->OperatorID).B) &&
           ((local_38.Key)->OperatorID).A == *(uint *)(lVar8 + lVar9)) &&
         (bVar5 = Metasound::operator==
                            ((FOperatorSettings *)(lVar8 + lVar9 + 0x10),
                             &(local_38.Key)->OperatorSettings), bVar5)) break;
      iVar6 = iVar7;
    } while (iVar7 != -1);
  } while( true );
}

// Remove @ 14b2b6730

int __thiscall
TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
::Remove(TMultiMap<Metasound::FOperatorPoolEntryID,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>_>
         *this,FOperatorPoolEntryID *param_1,FGuid *param_2)

{
  uint uVar1;
  ForElementType<unsigned_int> FVar2;
  ForElementType<FSetElementId> FVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  FOperatorPoolEntryID *pFVar13;
  ForElementType<unsigned_int> FVar14;
  TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
  *this_00;
  TBaseKeyIterator<0> local_38;
  
  iVar7 = 0;
  TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_38,
             (TSet<TTuple<Metasound::FOperatorPoolEntryID,FGuid>,TDefaultMapHashableKeyFuncs<Metasound::FOperatorPoolEntryID,FGuid,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<Metasound::FOperatorPoolEntryID_const_>)param_1);
  pFVar13 = local_38.Key;
  this_00 = local_38.Set;
  uVar10 = local_38.NextIndex;
  if (local_38.Index == 0xffffffff) {
    return 0;
  }
  do {
    iVar5 = local_38.Index;
    lVar9 = (longlong)local_38.Index * 0x38 + *(longlong *)&this_00->Elements;
    if (((*(uint *)(lVar9 + 0x2c) == param_2->D && *(uint *)(lVar9 + 0x28) == param_2->C) &&
        *(uint *)(lVar9 + 0x24) == param_2->B) && *(uint *)(lVar9 + 0x20) == param_2->A) {
      if ((local_38.Index < 0) || (*(int *)&(this_00->Elements).field_0x28 <= local_38.Index)) {
LAB_14b2b6815:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
      }
      else {
        if ((*(int *)&(this_00->Elements).field_0x28 <= local_38.Index) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        FVar2 = *(ForElementType<unsigned_int> *)&(this_00->Elements).field_0x20;
        FVar14 = (ForElementType<unsigned_int>)&(this_00->Elements).field_0x10;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar2;
        }
        uVar10 = iVar5;
        if (iVar5 < 0) {
          uVar10 = iVar5 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar10 >> 5) * 4) >> (iVar5 & 0x1fU) & 1)
            == 0) goto LAB_14b2b6815;
      }
      FVar3 = (this_00->Hash).SecondaryData;
      lVar9 = (longlong)iVar5 * 0x38 + *(longlong *)&this_00->Elements;
      FVar8 = (ForElementType<FSetElementId>)&this_00->Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar8 = FVar3;
      }
      puVar12 = (uint *)((longlong)FVar8 + (longlong)*(int *)(lVar9 + 0x34) * 4);
      while( true ) {
        uVar10 = *puVar12;
        if ((uVar10 == 0xffffffff) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NextElementIndex != INDEX_NONE",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                               ,0x2b5,L"Corrupt hash"), bVar6)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        if (uVar10 == iVar5) break;
        puVar12 = (uint *)(*(longlong *)&this_00->Elements + 0x30 + (longlong)(int)uVar10 * 0x38);
      }
      *puVar12 = *(uint *)(lVar9 + 0x30);
      TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this_00,iVar5,1);
      iVar7 = iVar7 + 1;
      pFVar13 = local_38.Key;
      this_00 = local_38.Set;
      uVar10 = local_38.NextIndex;
    }
    local_38.Index = uVar10;
    if (uVar10 == 0xffffffff) {
      return iVar7;
    }
    do {
      puVar12 = (uint *)((longlong)(int)uVar10 * 0x38 + *(longlong *)&this_00->Elements);
      uVar1 = puVar12[0xc];
      local_38.NextIndex = uVar1;
      if ((((puVar12[3] == (pFVar13->OperatorID).D && puVar12[1] == (pFVar13->OperatorID).B) &&
           puVar12[2] == (pFVar13->OperatorID).C) && (pFVar13->OperatorID).A == *puVar12) &&
         (bVar6 = Metasound::operator==
                            ((FOperatorSettings *)(puVar12 + 4),&pFVar13->OperatorSettings),
         uVar11 = uVar10, bVar6)) break;
      uVar11 = uVar1;
      uVar10 = uVar1;
    } while (uVar1 != 0xffffffff);
    uVar10 = uVar1;
    local_38.Index = uVar11;
    if (uVar11 == 0xffffffff) {
      return iVar7;
    }
  } while( true );
}

