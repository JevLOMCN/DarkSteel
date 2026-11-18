// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// FEntityGroupBuilder @ 146118580

FEntityGroupBuilder * __thiscall
UE::MovieScene::FEntityGroupBuilder::FEntityGroupBuilder
          (FEntityGroupBuilder *this,UMovieSceneEntityGroupingSystem *param_1,
          FEntityGroupingPolicyKey param_2)

{
  this->Owner = param_1;
  (this->PolicyKey).Index = param_2.Index;
  return this;
}

// AddEntityToGroup @ 146122da0

void __thiscall
UE::MovieScene::FEntityGroupBuilder::AddEntityToGroup
          (FEntityGroupBuilder *this,FMovieSceneEntityID *param_1,FEntityGroupID *param_2)

{
  ushort uVar1;
  UMovieSceneEntityGroupingSystem *pUVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  FEntityGroupInfo *pFVar8;
  FSparseArrayAllocationInfo *pFVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  FEntityGroupID local_28;
  FSparseArrayAllocationInfo local_18;
  
  uVar1 = param_1->Value;
  if ((((param_2->PolicyKey).Index == -1) || (param_2->GroupIndex == -1)) ||
     ((param_2->Flags & RemovedFromGroup) != None)) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3774488813879951331>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityGroupingSystem.cpp"
                       ,0x1d,"InNewGroupID.HasGroup()");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    pUVar2 = this->Owner;
    uVar14 = (uint)uVar1;
    if ((int)(uint)uVar1 < *(int *)&(pUVar2->EntityIDToGroup).field_0x28) {
      if ((*(int *)&(pUVar2->EntityIDToGroup).field_0x28 <= (int)uVar14) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar3 = *(undefined1 **)&(pUVar2->EntityIDToGroup).field_0x20;
      puVar13 = &(pUVar2->EntityIDToGroup).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar13 = puVar3;
      }
      if ((*(uint *)(puVar13 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0) {
        lVar4 = *(longlong *)&this->Owner->EntityIDToGroup;
        local_28._8_4_ = *(undefined4 *)(lVar4 + 8 + (ulonglong)uVar1 * 0xc);
        local_28._0_8_ = *(undefined8 *)(lVar4 + (ulonglong)uVar1 * 0xc);
        if ((local_28.PolicyKey.Index == (param_2->PolicyKey).Index) &&
           (local_28.GroupIndex == param_2->GroupIndex)) {
          return;
        }
        RemoveEntityFromGroup(this,param_1,&local_28);
      }
    }
    uVar11 = param_2->GroupIndex;
    uVar15 = (param_2->PolicyKey).Index - uVar11 ^ uVar11 >> 0xd;
    uVar10 = (-0x61c88647 - uVar15) - uVar11 ^ uVar15 << 8;
    uVar12 = (uVar11 - uVar10) - uVar15 ^ uVar10 >> 0xd;
    uVar15 = (uVar15 - uVar12) - uVar10 ^ uVar12 >> 0xc;
    uVar11 = (uVar10 - uVar15) - uVar12 ^ uVar15 << 0x10;
    uVar10 = (uVar12 - uVar11) - uVar15 ^ uVar11 >> 5;
    uVar12 = (uVar15 - uVar10) - uVar11 ^ uVar10 >> 3;
    uVar11 = (uVar11 - uVar12) - uVar10 ^ uVar12 << 10;
    pFVar8 = TMapBase<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
             ::FindOrAddImpl<UE::MovieScene::FEntityGroupID_const_&>
                       ((TMapBase<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FEntityGroupID,UMovieSceneEntityGroupingSystem::FEntityGroupInfo,0>_>
                         *)&this->Owner->Groups,(uVar10 - uVar11) - uVar12 ^ uVar11 >> 0xf,param_2);
    pFVar8->NumEntities = pFVar8->NumEntities + 1;
    pFVar9 = TSparseArrayBase<12,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                       ((TSparseArrayBase<12,4,FDefaultSparseArrayAllocator> *)
                        &this->Owner->EntityIDToGroup,&local_18,uVar14);
    puVar5 = pFVar9->Pointer;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = *(undefined8 *)param_2;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)&param_2->Flags;
    }
  }
  return;
}

// AllocateGroupIndex @ 146124190

int __thiscall UE::MovieScene::FEntityGroupBuilder::AllocateGroupIndex(FEntityGroupBuilder *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  UMovieSceneEntityGroupingSystem *pUVar4;
  longlong lVar5;
  int iVar6;
  FSparseArrayAllocationInfo local_18;
  
  pUVar4 = this->Owner;
  iVar1 = (this->PolicyKey).Index;
  iVar2 = *(int *)&(pUVar4->AllocatedGroupIndices).field_0x34;
  if (iVar2 == 0) {
    iVar6 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,4,1,(ForAnyElementType *)&pUVar4->AllocatedGroupIndices,
                       (int *)&(pUVar4->AllocatedGroupIndices).field_0x8,
                       (int *)&(pUVar4->AllocatedGroupIndices).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pUVar4->AllocatedGroupIndices).field_0x10,
               false);
  }
  else {
    iVar6 = *(int *)&(pUVar4->AllocatedGroupIndices).field_0x30;
    iVar2 = iVar2 + -1;
    lVar5 = *(longlong *)&pUVar4->AllocatedGroupIndices;
    iVar3 = *(int *)(lVar5 + 4 + (longlong)iVar6 * 8);
    *(int *)&(pUVar4->AllocatedGroupIndices).field_0x30 = iVar3;
    *(int *)&(pUVar4->AllocatedGroupIndices).field_0x34 = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar3 * 8) = 0xffffffff;
    }
  }
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)&pUVar4->AllocatedGroupIndices,
             &local_18,iVar6);
  if (local_18.Pointer != (int *)0x0) {
    *(int *)local_18.Pointer = iVar1;
  }
  return local_18.Index;
}

// RemoveEntityFromGroup @ 14614f850

void __thiscall
UE::MovieScene::FEntityGroupBuilder::RemoveEntityFromGroup
          (FEntityGroupBuilder *this,FMovieSceneEntityID *param_1,FEntityGroupID *param_2)

{
  uint *puVar1;
  ushort uVar2;
  UMovieSceneEntityGroupingSystem *pUVar3;
  longlong lVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  atomic<unsigned_char> *paVar15;
  int *piVar16;
  uint uVar17;
  undefined1 *puVar18;
  ForElementType<unsigned_int> FVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 local_res10 [8];
  longlong local_res18;
  
  uVar2 = param_1->Value;
  if ((((param_2->PolicyKey).Index == -1) || (param_2->GroupIndex == -1)) ||
     ((param_2->Flags & RemovedFromGroup) != None)) {
    pcVar12 = "InPreviousGroupID.HasGroup()";
    iVar10 = 0x37;
    bVar8 = false;
    paVar15 = &bGEnsureHasExecuted<_3774488813879951305>;
  }
  else {
    pUVar3 = this->Owner;
    if (*(int *)&(pUVar3->EntityIDToGroup).field_0x28 <= (int)(uint)uVar2) {
      return;
    }
    if ((*(int *)&(pUVar3->EntityIDToGroup).field_0x28 <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar18 = *(undefined1 **)&(pUVar3->EntityIDToGroup).field_0x20;
    puVar21 = &(pUVar3->EntityIDToGroup).field_0x10;
    if (puVar18 != (undefined1 *)0x0) {
      puVar21 = puVar18;
    }
    if ((*(uint *)(puVar21 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    lVar4 = *(longlong *)&this->Owner->EntityIDToGroup;
    if (((param_2->PolicyKey).Index != *(int *)(lVar4 + (ulonglong)uVar2 * 0xc)) ||
       (param_2->GroupIndex != *(int *)(lVar4 + 4 + (ulonglong)uVar2 * 0xc))) {
      local_res10[0] = 0;
      `UE::MovieScene::FEntityGroupBuilder::RemoveEntityFromGroup'::__l5::<lambda_1>::operator()
                (local_res10);
    }
    uVar2 = param_1->Value;
    pUVar3 = this->Owner;
    bVar7 = (byte)uVar2 & 0x1f;
    uVar23 = 1 << bVar7 | 1U >> 0x20 - bVar7;
    lVar4 = *(longlong *)&pUVar3->EntityIDToGroup;
    puVar18 = &(pUVar3->EntityIDToGroup).field_0x10;
    uVar20 = (uint)uVar2;
    if ((*(int *)&(pUVar3->EntityIDToGroup).field_0x28 <= (int)(uint)uVar2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar21 = *(undefined1 **)&(pUVar3->EntityIDToGroup).field_0x20;
    puVar13 = puVar18;
    if (puVar21 != (undefined1 *)0x0) {
      puVar13 = puVar21;
    }
    local_res18 = (ulonglong)(uVar2 >> 5) * 4;
    if (((*(uint *)(puVar13 + local_res18) & uVar23) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("AllocationFlags[Index]",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                           ,0xc5,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)&(pUVar3->EntityIDToGroup).field_0x34 != 0) {
      *(uint *)(lVar4 + (longlong)*(int *)&(pUVar3->EntityIDToGroup).field_0x30 * 0xc) = uVar20;
    }
    uVar9 = 0xffffffff;
    puVar14 = (undefined4 *)((ulonglong)uVar2 * 0xc + lVar4);
    *puVar14 = 0xffffffff;
    if (0 < *(int *)&(pUVar3->EntityIDToGroup).field_0x34) {
      uVar9 = *(undefined4 *)&(pUVar3->EntityIDToGroup).field_0x30;
    }
    puVar14[1] = uVar9;
    puVar21 = &(pUVar3->EntityIDToGroup).field_0x34;
    *(int *)puVar21 = *(int *)puVar21 + 1;
    *(uint *)&(pUVar3->EntityIDToGroup).field_0x30 = uVar20;
    if ((*(int *)&(pUVar3->EntityIDToGroup).field_0x28 <= (int)uVar20) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar21 = *(undefined1 **)&(pUVar3->EntityIDToGroup).field_0x20;
    if (puVar21 != (undefined1 *)0x0) {
      puVar18 = puVar21;
    }
    *(uint *)(puVar18 + local_res18) = *(uint *)(puVar18 + local_res18) & ~uVar23;
    uVar20 = param_2->GroupIndex;
    iVar10 = (param_2->PolicyKey).Index;
    pUVar3 = this->Owner;
    uVar17 = iVar10 - uVar20 ^ uVar20 >> 0xd;
    uVar23 = (-0x61c88647 - uVar20) - uVar17 ^ uVar17 << 8;
    uVar22 = (uVar20 - uVar17) - uVar23 ^ uVar23 >> 0xd;
    uVar17 = (uVar17 - uVar22) - uVar23 ^ uVar22 >> 0xc;
    uVar23 = (uVar23 - uVar17) - uVar22 ^ uVar17 << 0x10;
    uVar22 = (uVar22 - uVar23) - uVar17 ^ uVar23 >> 5;
    uVar17 = (uVar17 - uVar22) - uVar23 ^ uVar22 >> 3;
    uVar23 = (uVar23 - uVar17) - uVar22 ^ uVar17 << 10;
    if (*(int *)&(pUVar3->Groups).field_0x8 != *(int *)&(pUVar3->Groups).field_0x34) {
      puVar18 = *(undefined1 **)&(pUVar3->Groups).field_0x40;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = &(pUVar3->Groups).field_0x38;
      }
      iVar11 = *(int *)(puVar18 +
                       (ulonglong)
                       (*(int *)&(pUVar3->Groups).field_0x48 - 1U &
                       ((uVar22 - uVar23) - uVar17 ^ uVar23 >> 0xf)) * 4);
      if (iVar11 != -1) {
        do {
          lVar4 = *(longlong *)&pUVar3->Groups + (longlong)iVar11 * 0x18;
          if ((*(int *)(*(longlong *)&pUVar3->Groups + (longlong)iVar11 * 0x18) == iVar10) &&
             (*(uint *)(lVar4 + 4) == uVar20)) {
            if (iVar11 != -1) {
              piVar16 = (int *)(lVar4 + 0xc);
              if (lVar4 == 0) {
                piVar16 = (int *)0x0;
              }
              if (piVar16 != (int *)0x0) {
                iVar10 = *piVar16 + -1;
                *piVar16 = iVar10;
                if (0 < iVar10) {
                  return;
                }
                if ((iVar10 != 0) &&
                   (bVar8 = Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<_3774488813879951290>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityGroupingSystem.cpp"
                                       ,0x46,"PreviousGroup->NumEntities == 0"), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                pUVar3 = this->Owner;
                iVar10 = (param_2->GroupIndex - (pUVar3->EmptyGroupIndices).NumBits) + 1;
                if (0 < iVar10) {
                  iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                     (&pUVar3->EmptyGroupIndices,iVar10);
                  TBitArray<FDefaultBitArrayAllocator>::SetRange
                            (&pUVar3->EmptyGroupIndices,iVar11,iVar10,false);
                }
                pUVar3 = this->Owner;
                iVar10 = param_2->GroupIndex;
                if (((iVar10 < 0) || ((pUVar3->EmptyGroupIndices).NumBits <= iVar10)) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Index>=0 && Index<NumBits",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                       ,0x5be,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar5 = (pUVar3->EmptyGroupIndices).AllocatorInstance.SecondaryData;
                FVar19 = (ForElementType<unsigned_int>)&pUVar3->EmptyGroupIndices;
                if (FVar5 != (ForElementType<unsigned_int>)0x0) {
                  FVar19 = FVar5;
                }
                puVar1 = (uint *)((longlong)FVar19 +
                                 (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
                return;
              }
            }
            break;
          }
          iVar11 = *(int *)(lVar4 + 0x10);
        } while (iVar11 != -1);
      }
    }
    pcVar12 = "PreviousGroup";
    iVar10 = 0x3f;
    bVar8 = true;
    paVar15 = &bGEnsureHasExecuted<_3774488813879951297>;
  }
  bVar8 = Assert::Private::ExecCheckImplInternal
                    (paVar15,bVar8,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityGroupingSystem.cpp"
                     ,iVar10,pcVar12);
  if (!bVar8) {
    return;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// ReportUsedGroupIndex @ 146150e30

void __thiscall
UE::MovieScene::FEntityGroupBuilder::ReportUsedGroupIndex(FEntityGroupBuilder *this,int param_1)

{
  uint *puVar1;
  UMovieSceneEntityGroupingSystem *pUVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  
  if ((-1 < param_1) && (pUVar2 = this->Owner, param_1 < (pUVar2->EmptyGroupIndices).NumBits)) {
    if (((pUVar2->EmptyGroupIndices).NumBits <= param_1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar5 = (pUVar2->EmptyGroupIndices).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)&pUVar2->EmptyGroupIndices;
    }
    puVar1 = (uint *)((longlong)FVar5 + (ulonglong)((uint)param_1 >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  }
  return;
}

// operator() @ 1504e4130

bool __thiscall
`UE::MovieScene::FEntityGroupBuilder::RemoveEntityFromGroup'::__l5::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3774488813879951303>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3774488813879951303>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

