// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// ForEachAllocation @ 146133800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FUpdateGroupsTask::ForEachAllocation
          (FUpdateGroupsTask *this,FEntityAllocationProxy *param_1,
          TRead<UE::MovieScene::FMovieSceneEntityID> param_2,
          TWrite<UE::MovieScene::FEntityGroupID> param_3)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ForElementType<unsigned_int> FVar8;
  ForElementType<unsigned_int> FVar9;
  longlong *plVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_f8 [32];
  UMovieSceneEntityGroupingSystem **local_d8;
  undefined1 local_c8;
  undefined1 local_c7 [7];
  FUpdateGroupsTask *local_c0;
  int local_b8;
  longlong *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  UMovieSceneEntityGroupingSystem *local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  iVar7 = param_1->AllocationIndex;
  uVar12 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_68.MaxBits = 0x80;
  lVar2 = *(longlong *)&param_1->Manager->EntityAllocationMasks;
  local_c0 = this;
  TSparseArray<UMovieSceneEntityGroupingSystem::FEntityGroupingHandlerInfo,FDefaultSparseArrayAllocator>
  ::CreateConstIterator(&this->System->GroupHandlers,(TConstIterator *)&local_b0);
  if (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits) {
    do {
      iVar4 = local_a8.CurrentBitIndex;
      bVar5 = FEntityComponentFilter::Match
                        ((FEntityComponentFilter *)
                         (*local_b0 + 0x108 + (longlong)local_a8.CurrentBitIndex * 0x188),
                         (FComponentMask *)((longlong)iVar7 * 0x38 + lVar2));
      if (bVar5) {
        iVar13 = (iVar4 - local_68.NumBits) + 1;
        if (0 < iVar13) {
          iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&local_68,iVar13);
          TBitArray<FDefaultBitArrayAllocator>::SetRange(&local_68,iVar6,iVar13,false);
        }
        if (((iVar4 < 0) || (local_68.NumBits <= iVar4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        FVar9 = (ForElementType<unsigned_int>)&local_68;
        if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar9 = local_68.AllocatorInstance.SecondaryData;
        }
        iVar13 = iVar4;
        if (iVar4 < 0) {
          iVar13 = iVar4 + 0x1f;
        }
        puVar1 = (uint *)((longlong)FVar9 + (longlong)(iVar13 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)iVar4 & 0x1f);
      }
      local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
      this = local_c0;
    } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
  }
  iVar7 = TBitArray<FDefaultBitArrayAllocator>::CountSetBits(&local_68,0,-1);
  if (1 < iVar7) {
    local_c8 = 0;
    `UE::MovieScene::FUpdateGroupsTask::ForEachAllocation'::__l2::<lambda_1>::operator()(&local_c8);
  }
  FVar9 = (ForElementType<unsigned_int>)&local_68;
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FVar9 = local_68.AllocatorInstance.SecondaryData;
  }
  FVar8 = FVar9;
  if (local_68.NumBits + 0x1fU >> 5 == 0) {
LAB_1461339b9:
    iVar7 = -1;
LAB_1461339bf:
    local_c7[0] = 0;
    bVar5 = `UE::MovieScene::FUpdateGroupsTask::ForEachAllocation'::__l3::<lambda_2>::operator()
                      (local_c7);
    if (bVar5) {
LAB_1461339d4:
      local_88 = this->System;
      plVar10 = (longlong *)((longlong)iVar7 * 0x188 + *(longlong *)&local_88->GroupHandlers);
      local_80 = iVar7;
      if (((*(byte *)(plVar10 + 0x20) & 1) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((*(byte *)(plVar10 + 0x20) & 2) == 0) {
        plVar10 = (longlong *)*plVar10;
      }
      local_78 = *(undefined4 *)&param_1->Manager;
      uStack_74 = *(undefined4 *)((longlong)&param_1->Manager + 4);
      iStack_70 = param_1->AllocationIndex;
      uStack_6c = *(undefined4 *)&param_1->field_0xc;
      local_d8 = &local_88;
      (**(code **)(*plVar10 + 8))(plVar10,&local_78,param_2,param_3);
    }
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    return;
  }
LAB_1461339a4:
  if (*(int *)FVar8 == 0) goto code_r0x0001461339ad;
  puVar1 = (uint *)((longlong)FVar9 + uVar12 * 4);
  local_b8 = 0;
  bVar5 = *puVar1 != 0;
  if (bVar5) {
    for (; (*puVar1 >> local_b8 & 1) == 0; local_b8 = local_b8 + 1) {
    }
  }
  iVar7 = 0x20;
  if (bVar5) {
    iVar7 = local_b8;
  }
  iVar7 = (int)uVar12 * 0x20 + iVar7;
  if (local_68.NumBits <= iVar7) goto LAB_1461339b9;
  if (iVar7 == -1) goto LAB_1461339bf;
  goto LAB_1461339d4;
code_r0x0001461339ad:
  uVar11 = (int)uVar12 + 1;
  uVar12 = (ulonglong)uVar11;
  FVar8 = (ForElementType<unsigned_int>)((longlong)FVar8 + 4);
  if ((int)(local_68.NumBits + 0x1fU >> 5) <= (int)uVar11) goto LAB_1461339b9;
  goto LAB_1461339a4;
}

// PostTask @ 146149cc0

void __thiscall UE::MovieScene::FUpdateGroupsTask::PostTask(FUpdateGroupsTask *this)

{
  if (this->bFreeGroupIDs != false) {
    UMovieSceneEntityGroupingSystem::FreeEmptyGroups(this->System);
    return;
  }
  return;
}

// operator() @ 1504e3d20

bool __thiscall
`UE::MovieScene::FUpdateGroupsTask::ForEachAllocation'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3774488813879951181>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3774488813879951181>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FUpdateGroupsTask::ForEachAllocation(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TWrite<UE::MovieScene::FEntityGroupID>)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e4980

bool __thiscall
`UE::MovieScene::FUpdateGroupsTask::ForEachAllocation'::__l3::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3774488813879951176>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3774488813879951176>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FUpdateGroupsTask::ForEachAllocation(UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TWrite<UE::MovieScene::FEntityGroupID>)___ptr64'::`3'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

