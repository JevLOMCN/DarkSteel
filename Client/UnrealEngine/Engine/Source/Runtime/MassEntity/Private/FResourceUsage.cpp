// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 12

// CanAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471bfab0

bool __cdecl
FMassProcessorDependencySolver::FResourceUsage::
CanAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
           *param_1,
          TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2)

{
  bool bVar1;
  
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                    ((FConstBitSetContainer *)&param_2->Write,
                     (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Write);
  if (((!bVar1) &&
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&param_2->Write,
                          (TBitArray<FDefaultBitArrayAllocator> *)param_1), !bVar1)) &&
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                        ((FConstBitSetContainer *)param_2,
                         (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Write), !bVar1)) {
    return true;
  }
  return false;
}

// CanAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471bfb20

bool __cdecl
FMassProcessorDependencySolver::FResourceUsage::
CanAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
           *param_1,
          TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2)

{
  bool bVar1;
  
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                    ((FConstBitSetContainer *)&param_2->Write,
                     (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Write);
  if (((!bVar1) &&
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&param_2->Write,
                          (TBitArray<FDefaultBitArrayAllocator> *)param_1), !bVar1)) &&
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                        ((FConstBitSetContainer *)param_2,
                         (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Write), !bVar1)) {
    return true;
  }
  return false;
}

// CanAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471bfb90

bool __cdecl
FMassProcessorDependencySolver::FResourceUsage::
CanAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
           *param_1,
          TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          *param_2)

{
  bool bVar1;
  
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                    ((FConstBitSetContainer *)&param_2->Write,
                     (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Write);
  if (((!bVar1) &&
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&param_2->Write,
                          (TBitArray<FDefaultBitArrayAllocator> *)param_1), !bVar1)) &&
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                        ((FConstBitSetContainer *)param_2,
                         (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Write), !bVar1)) {
    return true;
  }
  return false;
}

// CanAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_> @ 1471bfc00

bool __cdecl
FMassProcessorDependencySolver::FResourceUsage::
CanAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
          (TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
           *param_1,
          TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
          *param_2)

{
  bool bVar1;
  
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                    ((FConstBitSetContainer *)&param_2->Write,
                     (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Write);
  if (((!bVar1) &&
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&param_2->Write,
                          (TBitArray<FDefaultBitArrayAllocator> *)param_1), !bVar1)) &&
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                        ((FConstBitSetContainer *)param_2,
                         (TBitArray<FDefaultBitArrayAllocator> *)&param_1->Write), !bVar1)) {
    return true;
  }
  return false;
}

// HandleElementType<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471c8eb0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::FResourceUsage::
HandleElementType<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (FResourceUsage *this,
          TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
          *param_1,TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   *param_2,FNode *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *pTVar3;
  FNode *pFVar4;
  TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar14;
  FScriptContainerElement *pFVar15;
  TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *pTVar16;
  TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined1 local_6c [4];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  longlong local_58;
  
  iVar12 = *(int *)&(param_2->Read).field_0x18;
  lVar25 = 0;
  uVar22 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar19 = 1;
  local_74 = 1;
  if (iVar12 < 1) {
LAB_1471c8f63:
    if ((int)local_70 < iVar12) goto LAB_1471c8f70;
  }
  else {
    pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
               **)&(param_2->Read).field_0x10;
    pTVar16 = param_2;
    if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   *)0x0) {
      pTVar16 = pTVar3;
    }
    if ((*(byte *)&pTVar16->Read & 1) == 0) {
      do {
        uVar10 = uVar19 * 2;
        uVar22 = uVar22 + 1;
        uVar19 = 1;
        local_78 = (uint)lVar25 + 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
          local_78 = (uint)lVar25;
        }
        lVar25 = (longlong)(int)local_78;
        local_74 = uVar19;
        local_70 = uVar22;
        if (iVar12 <= (int)uVar22) break;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + lVar25 * 4) & uVar19) == 0);
      goto LAB_1471c8f63;
    }
LAB_1471c8f70:
    do {
      uVar19 = 0;
      if ((int)local_70 < (param_1->Write).Access.ArrayNum) {
        uVar19 = ~local_70 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + (longlong)(int)local_70 * 0x10;
      puVar20 = *(uint **)pFVar23;
      iVar12 = *(int *)(pFVar23 + 8);
      puVar2 = puVar20 + iVar12;
      while( true ) {
        if (*(int *)(pFVar23 + 8) != iVar12) {
          local_6c[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_6c);
        }
        if (puVar20 == puVar2) break;
        uVar19 = *puVar20;
        uVar22 = 0;
        if ((int)uVar19 < (this->AllNodesView).ArrayNum) {
          uVar22 = ~uVar19 >> 0x1f;
        }
        local_68 = uVar19;
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->AllNodesView).DataPtr;
        iVar9 = pFVar4[(int)uVar19].ValidArchetypes.ArrayNum;
        pFVar18 = pFVar4[(int)uVar19].ValidArchetypes.AllocatorInstance.Data;
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar21 = pFVar18 + (longlong)iVar9 * 0x10;
        if (pFVar18 == pFVar21) {
LAB_1471c9188:
          puVar20 = puVar20 + 1;
        }
        else {
          pFVar15 = (param_3->ValidArchetypes).AllocatorInstance.Data;
          do {
            if (pFVar15 != pFVar15 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10) {
              pFVar13 = pFVar15;
              do {
                if (*(longlong *)pFVar13 == *(longlong *)pFVar18) {
                  pFVar18 = (param_3->OriginalDependencies).AllocatorInstance.Data;
                  if (((pFVar18 <= (FScriptContainerElement *)&local_68) &&
                      ((FScriptContainerElement *)&local_68 <
                       pFVar18 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar9 = (param_3->OriginalDependencies).ArrayNum;
                  piVar1 = &(param_3->OriginalDependencies).ArrayMax;
                  if (iVar9 == *piVar1) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                       piVar1);
                  }
                  (param_3->OriginalDependencies).ArrayNum = iVar9 + 1;
                  *(uint *)((param_3->OriginalDependencies).AllocatorInstance.Data +
                           (longlong)iVar9 * 4) = local_68;
                  goto LAB_1471c9188;
                }
                pFVar13 = pFVar13 + 0x10;
              } while (pFVar13 != pFVar15 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10);
            }
            pFVar18 = pFVar18 + 0x10;
          } while (pFVar18 != pFVar21);
          puVar20 = puVar20 + 1;
        }
      }
      uVar26 = (ulonglong)local_78;
      iVar12 = *(int *)&(param_2->Read).field_0x18;
      do {
        uVar19 = local_74 * 2;
        local_70 = local_70 + 1;
        local_74 = 1;
        local_78 = (uint)uVar26 + 1;
        if (uVar19 != 0) {
          local_74 = uVar19;
          local_78 = (uint)uVar26;
        }
        uVar26 = (ulonglong)(int)local_78;
        if (iVar12 <= (int)local_70) break;
        pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   **)&(param_2->Read).field_0x10;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + uVar26 * 4) & local_74) == 0);
    } while ((int)local_70 < iVar12);
  }
  iVar12 = *(int *)&(param_2->Write).field_0x18;
  lVar25 = 0;
  uVar22 = 0;
  local_70 = 0;
  uVar19 = 1;
  local_5c = 1;
  local_78 = 0;
  if (iVar12 < 1) {
LAB_1471c9284:
    if ((int)local_78 < iVar12) goto LAB_1471c9290;
  }
  else {
    pTVar5 = *(TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
               **)&(param_2->Write).field_0x10;
    pTVar14 = pTVar5;
    if (pTVar5 == (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)0x0) {
      pTVar14 = &param_2->Write;
    }
    if ((*(byte *)pTVar14 & 1) == 0) {
      do {
        uVar10 = uVar19 * 2;
        local_78 = uVar22 + 1;
        local_70 = (uint)lVar25 + 1;
        if (uVar10 != 0) {
          local_70 = (uint)lVar25;
        }
        uVar19 = 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
        }
        lVar25 = (longlong)(int)local_70;
        local_5c = uVar19;
        if (iVar12 <= (int)local_78) break;
        pTVar14 = &param_2->Write;
        if (pTVar5 != (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)0x0) {
          pTVar14 = pTVar5;
        }
        uVar22 = local_78;
      } while ((*(uint *)(&pTVar14->field_0x0 + lVar25 * 4) & uVar19) == 0);
      goto LAB_1471c9284;
    }
LAB_1471c9290:
    do {
      uVar22 = ~local_78 >> 0x1f;
      uVar19 = 0;
      if ((int)local_78 < (param_1->Read).Access.ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_58 = (longlong)(int)local_78 * 0x10;
      uVar19 = *(int *)((param_1->Read).Access.AllocatorInstance.Data + local_58 + 8) - 1;
      if (-1 < (int)uVar19) {
        lVar27 = (longlong)(int)uVar19;
        lVar25 = lVar27 * 4;
        do {
          lVar7 = local_58;
          uVar10 = 0;
          if ((int)local_78 < (param_1->Read).Access.ArrayNum) {
            uVar10 = uVar22;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar24 = ~uVar19 >> 0x1f;
          pFVar23 = (param_1->Read).Access.AllocatorInstance.Data + lVar7;
          uVar10 = 0;
          if ((int)uVar19 < *(int *)(pFVar23 + 8)) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = *(uint *)(*(longlong *)pFVar23 + lVar25);
          uVar11 = 0;
          if ((int)uVar10 < (this->AllNodesView).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          local_64 = uVar10;
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->AllNodesView).DataPtr;
          iVar12 = pFVar4[(int)uVar10].ValidArchetypes.ArrayNum;
          pFVar23 = pFVar4[(int)uVar10].ValidArchetypes.AllocatorInstance.Data;
          if ((iVar12 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = pFVar23 + (longlong)iVar12 * 0x10;
          if (pFVar23 != pFVar18) {
            pFVar21 = (param_3->ValidArchetypes).AllocatorInstance.Data;
            do {
              if (pFVar21 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10) {
                pFVar15 = pFVar21;
                do {
                  if (*(longlong *)pFVar15 == *(longlong *)pFVar23) {
                    pFVar23 = (param_3->OriginalDependencies).AllocatorInstance.Data;
                    if (((pFVar23 <= (FScriptContainerElement *)&local_64) &&
                        ((FScriptContainerElement *)&local_64 <
                         pFVar23 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = (param_3->OriginalDependencies).ArrayNum;
                    piVar1 = &(param_3->OriginalDependencies).ArrayMax;
                    if (iVar12 == *piVar1) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                          piVar1);
                    }
                    (param_3->OriginalDependencies).ArrayNum = iVar12 + 1;
                    *(uint *)((param_3->OriginalDependencies).AllocatorInstance.Data +
                             (longlong)iVar12 * 4) = local_64;
                    uVar10 = 0;
                    if ((int)local_78 < (param_1->Read).Access.ArrayNum) {
                      uVar10 = uVar22;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar23 = (param_1->Read).Access.AllocatorInstance.Data + local_58;
                    uVar10 = 0;
                    if ((int)uVar19 < *(int *)&pFVar23[8].field_0x0) {
                      uVar10 = uVar24;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = ~uVar19 + *(int *)&pFVar23[8].field_0x0;
                    if (1 < iVar12) {
                      iVar12 = 1;
                    }
                    if (iVar12 != 0) {
                      memmove((void *)(*(longlong *)&pFVar23->field_0x0 + lVar27 * 4),
                              (void *)(*(longlong *)&pFVar23->field_0x0 +
                                      (longlong)(*(int *)&pFVar23[8].field_0x0 - iVar12) * 4),
                              (longlong)iVar12 << 2);
                    }
                    *(int *)&pFVar23[8].field_0x0 = *(int *)&pFVar23[8].field_0x0 + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,(ForAnyElementType *)pFVar23,*(int *)&pFVar23[8].field_0x0,
                               (int *)(pFVar23 + 0xc));
                    goto LAB_1471c949e;
                  }
                  pFVar15 = pFVar15 + 0x10;
                } while (pFVar15 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10);
              }
              pFVar23 = pFVar23 + 0x10;
            } while (pFVar23 != pFVar18);
          }
LAB_1471c949e:
          lVar27 = lVar27 + -1;
          lVar25 = lVar25 + -4;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      uVar19 = 0;
      if ((int)local_78 < (param_1->Write).Access.ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = *(int *)((param_1->Write).Access.AllocatorInstance.Data +
                       (longlong)(int)local_78 * 0x10 + 8) - 1;
      if (-1 < (int)uVar19) {
        lVar27 = (longlong)(int)uVar19;
        local_58 = (longlong)(int)local_78 << 4;
        lVar25 = lVar27 * 4;
        do {
          lVar7 = local_58;
          uVar10 = 0;
          if ((int)local_78 < (param_1->Write).Access.ArrayNum) {
            uVar10 = uVar22;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar24 = ~uVar19 >> 0x1f;
          pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + lVar7;
          uVar10 = 0;
          if ((int)uVar19 < *(int *)(pFVar23 + 8)) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = *(uint *)(*(longlong *)pFVar23 + lVar25);
          uVar11 = 0;
          if ((int)uVar10 < (this->AllNodesView).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          local_60 = uVar10;
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->AllNodesView).DataPtr;
          iVar12 = pFVar4[(int)uVar10].ValidArchetypes.ArrayNum;
          pFVar23 = pFVar4[(int)uVar10].ValidArchetypes.AllocatorInstance.Data;
          if ((iVar12 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = pFVar23 + (longlong)iVar12 * 0x10;
          if (pFVar23 != pFVar18) {
            pFVar21 = (param_3->ValidArchetypes).AllocatorInstance.Data;
            do {
              if (pFVar21 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10) {
                pFVar15 = pFVar21;
                do {
                  if (*(longlong *)pFVar15 == *(longlong *)pFVar23) {
                    pFVar23 = (param_3->OriginalDependencies).AllocatorInstance.Data;
                    if (((pFVar23 <= (FScriptContainerElement *)&local_60) &&
                        ((FScriptContainerElement *)&local_60 <
                         pFVar23 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = (param_3->OriginalDependencies).ArrayNum;
                    piVar1 = &(param_3->OriginalDependencies).ArrayMax;
                    if (iVar12 == *piVar1) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                          piVar1);
                    }
                    (param_3->OriginalDependencies).ArrayNum = iVar12 + 1;
                    *(uint *)((param_3->OriginalDependencies).AllocatorInstance.Data +
                             (longlong)iVar12 * 4) = local_60;
                    uVar10 = 0;
                    if ((int)local_78 < (param_1->Write).Access.ArrayNum) {
                      uVar10 = uVar22;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + local_58;
                    uVar10 = 0;
                    if ((int)uVar19 < *(int *)&pFVar23[8].field_0x0) {
                      uVar10 = uVar24;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = ~uVar19 + *(int *)&pFVar23[8].field_0x0;
                    if (1 < iVar12) {
                      iVar12 = 1;
                    }
                    if (iVar12 != 0) {
                      memmove((void *)(*(longlong *)&pFVar23->field_0x0 + lVar27 * 4),
                              (void *)(*(longlong *)&pFVar23->field_0x0 +
                                      (longlong)(*(int *)&pFVar23[8].field_0x0 - iVar12) * 4),
                              (longlong)iVar12 << 2);
                    }
                    *(int *)&pFVar23[8].field_0x0 = *(int *)&pFVar23[8].field_0x0 + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,(ForAnyElementType *)pFVar23,*(int *)&pFVar23[8].field_0x0,
                               (int *)(pFVar23 + 0xc));
                    goto LAB_1471c96be;
                  }
                  pFVar15 = pFVar15 + 0x10;
                } while (pFVar15 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10);
              }
              pFVar23 = pFVar23 + 0x10;
            } while (pFVar23 != pFVar18);
          }
LAB_1471c96be:
          lVar27 = lVar27 + -1;
          lVar25 = lVar25 + -4;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      uVar26 = (ulonglong)local_70;
      iVar12 = *(int *)&(param_2->Write).field_0x18;
      do {
        uVar19 = local_5c * 2;
        local_78 = local_78 + 1;
        local_70 = (uint)uVar26 + 1;
        if (uVar19 != 0) {
          local_70 = (uint)uVar26;
        }
        local_5c = 1;
        if (uVar19 != 0) {
          local_5c = uVar19;
        }
        uVar26 = (ulonglong)(int)local_70;
        if (iVar12 <= (int)local_78) break;
        pTVar5 = *(TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   **)&(param_2->Write).field_0x10;
        pTVar14 = &param_2->Write;
        if (pTVar5 != (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)0x0) {
          pTVar14 = pTVar5;
        }
      } while ((*(uint *)(&pTVar14->field_0x0 + uVar26 * 4) & local_5c) == 0);
    } while ((int)local_78 < iVar12);
  }
  iVar12 = *(int *)&(param_2->Read).field_0x18;
  lVar25 = 0;
  uVar22 = 0;
  uVar19 = 1;
  if (iVar12 < 1) {
LAB_1471c97a1:
    if ((int)uVar22 < *(int *)&(param_2->Read).field_0x18) goto LAB_1471c97b0;
  }
  else {
    pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
               **)&(param_2->Read).field_0x10;
    pTVar16 = param_2;
    if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   *)0x0) {
      pTVar16 = pTVar3;
    }
    if ((*(byte *)&pTVar16->Read & 1) == 0) {
      do {
        uVar10 = uVar19 * 2;
        uVar22 = uVar22 + 1;
        uVar19 = 1;
        iVar9 = (int)lVar25 + 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
          iVar9 = (int)lVar25;
        }
        lVar25 = (longlong)iVar9;
        if (iVar12 <= (int)uVar22) break;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + lVar25 * 4) & uVar19) == 0);
      goto LAB_1471c97a1;
    }
LAB_1471c97b0:
    do {
      uVar10 = 0;
      if ((int)uVar22 < (param_1->Read).Access.ArrayNum) {
        uVar10 = ~uVar22 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (param_1->Read).Access.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10;
      if (((*(int **)&pFVar23->field_0x0 <= &param_4) &&
          (&param_4 < *(int **)&pFVar23->field_0x0 + *(int *)(pFVar23 + 0xc))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = *(int *)&pFVar23[8].field_0x0;
      if (iVar12 == *(int *)(pFVar23 + 0xc)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
      }
      *(int *)&pFVar23[8].field_0x0 = iVar12 + 1;
      *(int *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar12 * 4) = param_4;
      iVar12 = *(int *)&(param_2->Read).field_0x18;
      do {
        uVar10 = uVar19 * 2;
        uVar22 = uVar22 + 1;
        uVar19 = 1;
        iVar9 = (int)lVar25 + 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
          iVar9 = (int)lVar25;
        }
        lVar25 = (longlong)iVar9;
        if (iVar12 <= (int)uVar22) goto LAB_1471c98d6;
        pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   **)&(param_2->Read).field_0x10;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + lVar25 * 4) & uVar19) == 0);
    } while ((int)uVar22 < iVar12);
  }
LAB_1471c98d6:
  iVar12 = *(int *)&(param_2->Write).field_0x18;
  pTVar5 = &param_2->Write;
  lVar25 = 0;
  uVar22 = 0;
  uVar19 = 1;
  if (0 < iVar12) {
    pTVar14 = *(TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                **)&(param_2->Write).field_0x10;
    pTVar17 = pTVar14;
    if (pTVar14 ==
        (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
         *)0x0) {
      pTVar17 = pTVar5;
    }
    if ((*(byte *)pTVar17 & 1) != 0) goto LAB_1471c9940;
    do {
      uVar10 = uVar19 * 2;
      uVar22 = uVar22 + 1;
      uVar19 = 1;
      iVar9 = (int)lVar25 + 1;
      if (uVar10 != 0) {
        uVar19 = uVar10;
        iVar9 = (int)lVar25;
      }
      lVar25 = (longlong)iVar9;
      if (iVar12 <= (int)uVar22) {
        return;
      }
      pTVar17 = pTVar5;
      if (pTVar14 !=
          (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *)0x0) {
        pTVar17 = pTVar14;
      }
    } while ((*(uint *)(&pTVar17->field_0x0 + lVar25 * 4) & uVar19) == 0);
  }
  if (iVar12 <= (int)uVar22) {
    return;
  }
LAB_1471c9940:
  do {
    uVar10 = 0;
    if ((int)uVar22 < (param_1->Write).Access.ArrayNum) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10;
    if (((*(int **)&pFVar23->field_0x0 <= &param_4) &&
        (&param_4 < *(int **)&pFVar23->field_0x0 + *(int *)(pFVar23 + 0xc))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = *(int *)&pFVar23[8].field_0x0;
    if (iVar12 == *(int *)(pFVar23 + 0xc)) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
    }
    *(int *)&pFVar23[8].field_0x0 = iVar12 + 1;
    *(int *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar12 * 4) = param_4;
    iVar12 = *(int *)&(param_2->Write).field_0x18;
    do {
      uVar10 = uVar19 * 2;
      uVar22 = uVar22 + 1;
      uVar19 = 1;
      iVar9 = (int)lVar25 + 1;
      if (uVar10 != 0) {
        uVar19 = uVar10;
        iVar9 = (int)lVar25;
      }
      lVar25 = (longlong)iVar9;
      if (iVar12 <= (int)uVar22) {
        return;
      }
      pTVar14 = *(TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  **)&(param_2->Write).field_0x10;
      pTVar17 = pTVar5;
      if (pTVar14 !=
          (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *)0x0) {
        pTVar17 = pTVar14;
      }
    } while ((*(uint *)(&pTVar17->field_0x0 + lVar25 * 4) & uVar19) == 0);
    if (iVar12 <= (int)uVar22) {
      return;
    }
  } while( true );
}

// HandleElementType<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471c9d80

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::FResourceUsage::
HandleElementType<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (FResourceUsage *this,
          TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
          *param_1,TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   *param_2,FNode *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *pTVar3;
  FNode *pFVar4;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar14;
  FScriptContainerElement *pFVar15;
  TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *pTVar16;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined1 local_6c [4];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  longlong local_58;
  
  iVar12 = *(int *)&(param_2->Read).field_0x18;
  lVar25 = 0;
  uVar22 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar19 = 1;
  local_74 = 1;
  if (iVar12 < 1) {
LAB_1471c9e33:
    if ((int)local_70 < iVar12) goto LAB_1471c9e40;
  }
  else {
    pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
               **)&(param_2->Read).field_0x10;
    pTVar16 = param_2;
    if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   *)0x0) {
      pTVar16 = pTVar3;
    }
    if ((*(byte *)&pTVar16->Read & 1) == 0) {
      do {
        uVar10 = uVar19 * 2;
        uVar22 = uVar22 + 1;
        uVar19 = 1;
        local_78 = (uint)lVar25 + 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
          local_78 = (uint)lVar25;
        }
        lVar25 = (longlong)(int)local_78;
        local_74 = uVar19;
        local_70 = uVar22;
        if (iVar12 <= (int)uVar22) break;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + lVar25 * 4) & uVar19) == 0);
      goto LAB_1471c9e33;
    }
LAB_1471c9e40:
    do {
      uVar19 = 0;
      if ((int)local_70 < (param_1->Write).Access.ArrayNum) {
        uVar19 = ~local_70 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + (longlong)(int)local_70 * 0x10;
      puVar20 = *(uint **)pFVar23;
      iVar12 = *(int *)(pFVar23 + 8);
      puVar2 = puVar20 + iVar12;
      while( true ) {
        if (*(int *)(pFVar23 + 8) != iVar12) {
          local_6c[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_6c);
        }
        if (puVar20 == puVar2) break;
        uVar19 = *puVar20;
        uVar22 = 0;
        if ((int)uVar19 < (this->AllNodesView).ArrayNum) {
          uVar22 = ~uVar19 >> 0x1f;
        }
        local_68 = uVar19;
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->AllNodesView).DataPtr;
        iVar9 = pFVar4[(int)uVar19].ValidArchetypes.ArrayNum;
        pFVar18 = pFVar4[(int)uVar19].ValidArchetypes.AllocatorInstance.Data;
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar21 = pFVar18 + (longlong)iVar9 * 0x10;
        if (pFVar18 == pFVar21) {
LAB_1471ca058:
          puVar20 = puVar20 + 1;
        }
        else {
          pFVar15 = (param_3->ValidArchetypes).AllocatorInstance.Data;
          do {
            if (pFVar15 != pFVar15 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10) {
              pFVar13 = pFVar15;
              do {
                if (*(longlong *)pFVar13 == *(longlong *)pFVar18) {
                  pFVar18 = (param_3->OriginalDependencies).AllocatorInstance.Data;
                  if (((pFVar18 <= (FScriptContainerElement *)&local_68) &&
                      ((FScriptContainerElement *)&local_68 <
                       pFVar18 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar9 = (param_3->OriginalDependencies).ArrayNum;
                  piVar1 = &(param_3->OriginalDependencies).ArrayMax;
                  if (iVar9 == *piVar1) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                       piVar1);
                  }
                  (param_3->OriginalDependencies).ArrayNum = iVar9 + 1;
                  *(uint *)((param_3->OriginalDependencies).AllocatorInstance.Data +
                           (longlong)iVar9 * 4) = local_68;
                  goto LAB_1471ca058;
                }
                pFVar13 = pFVar13 + 0x10;
              } while (pFVar13 != pFVar15 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10);
            }
            pFVar18 = pFVar18 + 0x10;
          } while (pFVar18 != pFVar21);
          puVar20 = puVar20 + 1;
        }
      }
      uVar26 = (ulonglong)local_78;
      iVar12 = *(int *)&(param_2->Read).field_0x18;
      do {
        uVar19 = local_74 * 2;
        local_70 = local_70 + 1;
        local_74 = 1;
        local_78 = (uint)uVar26 + 1;
        if (uVar19 != 0) {
          local_74 = uVar19;
          local_78 = (uint)uVar26;
        }
        uVar26 = (ulonglong)(int)local_78;
        if (iVar12 <= (int)local_70) break;
        pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   **)&(param_2->Read).field_0x10;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + uVar26 * 4) & local_74) == 0);
    } while ((int)local_70 < iVar12);
  }
  iVar12 = *(int *)&(param_2->Write).field_0x18;
  lVar25 = 0;
  uVar22 = 0;
  local_70 = 0;
  uVar19 = 1;
  local_5c = 1;
  local_78 = 0;
  if (iVar12 < 1) {
LAB_1471ca154:
    if ((int)local_78 < iVar12) goto LAB_1471ca160;
  }
  else {
    pTVar5 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
               **)&(param_2->Write).field_0x10;
    pTVar14 = pTVar5;
    if (pTVar5 == (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)0x0) {
      pTVar14 = &param_2->Write;
    }
    if ((*(byte *)pTVar14 & 1) == 0) {
      do {
        uVar10 = uVar19 * 2;
        local_78 = uVar22 + 1;
        local_70 = (uint)lVar25 + 1;
        if (uVar10 != 0) {
          local_70 = (uint)lVar25;
        }
        uVar19 = 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
        }
        lVar25 = (longlong)(int)local_70;
        local_5c = uVar19;
        if (iVar12 <= (int)local_78) break;
        pTVar14 = &param_2->Write;
        if (pTVar5 != (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)0x0) {
          pTVar14 = pTVar5;
        }
        uVar22 = local_78;
      } while ((*(uint *)(&pTVar14->field_0x0 + lVar25 * 4) & uVar19) == 0);
      goto LAB_1471ca154;
    }
LAB_1471ca160:
    do {
      uVar22 = ~local_78 >> 0x1f;
      uVar19 = 0;
      if ((int)local_78 < (param_1->Read).Access.ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_58 = (longlong)(int)local_78 * 0x10;
      uVar19 = *(int *)((param_1->Read).Access.AllocatorInstance.Data + local_58 + 8) - 1;
      if (-1 < (int)uVar19) {
        lVar27 = (longlong)(int)uVar19;
        lVar25 = lVar27 * 4;
        do {
          lVar7 = local_58;
          uVar10 = 0;
          if ((int)local_78 < (param_1->Read).Access.ArrayNum) {
            uVar10 = uVar22;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar24 = ~uVar19 >> 0x1f;
          pFVar23 = (param_1->Read).Access.AllocatorInstance.Data + lVar7;
          uVar10 = 0;
          if ((int)uVar19 < *(int *)(pFVar23 + 8)) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = *(uint *)(*(longlong *)pFVar23 + lVar25);
          uVar11 = 0;
          if ((int)uVar10 < (this->AllNodesView).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          local_64 = uVar10;
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->AllNodesView).DataPtr;
          iVar12 = pFVar4[(int)uVar10].ValidArchetypes.ArrayNum;
          pFVar23 = pFVar4[(int)uVar10].ValidArchetypes.AllocatorInstance.Data;
          if ((iVar12 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = pFVar23 + (longlong)iVar12 * 0x10;
          if (pFVar23 != pFVar18) {
            pFVar21 = (param_3->ValidArchetypes).AllocatorInstance.Data;
            do {
              if (pFVar21 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10) {
                pFVar15 = pFVar21;
                do {
                  if (*(longlong *)pFVar15 == *(longlong *)pFVar23) {
                    pFVar23 = (param_3->OriginalDependencies).AllocatorInstance.Data;
                    if (((pFVar23 <= (FScriptContainerElement *)&local_64) &&
                        ((FScriptContainerElement *)&local_64 <
                         pFVar23 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = (param_3->OriginalDependencies).ArrayNum;
                    piVar1 = &(param_3->OriginalDependencies).ArrayMax;
                    if (iVar12 == *piVar1) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                          piVar1);
                    }
                    (param_3->OriginalDependencies).ArrayNum = iVar12 + 1;
                    *(uint *)((param_3->OriginalDependencies).AllocatorInstance.Data +
                             (longlong)iVar12 * 4) = local_64;
                    uVar10 = 0;
                    if ((int)local_78 < (param_1->Read).Access.ArrayNum) {
                      uVar10 = uVar22;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar23 = (param_1->Read).Access.AllocatorInstance.Data + local_58;
                    uVar10 = 0;
                    if ((int)uVar19 < *(int *)&pFVar23[8].field_0x0) {
                      uVar10 = uVar24;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = ~uVar19 + *(int *)&pFVar23[8].field_0x0;
                    if (1 < iVar12) {
                      iVar12 = 1;
                    }
                    if (iVar12 != 0) {
                      memmove((void *)(*(longlong *)&pFVar23->field_0x0 + lVar27 * 4),
                              (void *)(*(longlong *)&pFVar23->field_0x0 +
                                      (longlong)(*(int *)&pFVar23[8].field_0x0 - iVar12) * 4),
                              (longlong)iVar12 << 2);
                    }
                    *(int *)&pFVar23[8].field_0x0 = *(int *)&pFVar23[8].field_0x0 + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,(ForAnyElementType *)pFVar23,*(int *)&pFVar23[8].field_0x0,
                               (int *)(pFVar23 + 0xc));
                    goto LAB_1471ca36e;
                  }
                  pFVar15 = pFVar15 + 0x10;
                } while (pFVar15 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10);
              }
              pFVar23 = pFVar23 + 0x10;
            } while (pFVar23 != pFVar18);
          }
LAB_1471ca36e:
          lVar27 = lVar27 + -1;
          lVar25 = lVar25 + -4;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      uVar19 = 0;
      if ((int)local_78 < (param_1->Write).Access.ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = *(int *)((param_1->Write).Access.AllocatorInstance.Data +
                       (longlong)(int)local_78 * 0x10 + 8) - 1;
      if (-1 < (int)uVar19) {
        lVar27 = (longlong)(int)uVar19;
        local_58 = (longlong)(int)local_78 << 4;
        lVar25 = lVar27 * 4;
        do {
          lVar7 = local_58;
          uVar10 = 0;
          if ((int)local_78 < (param_1->Write).Access.ArrayNum) {
            uVar10 = uVar22;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar24 = ~uVar19 >> 0x1f;
          pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + lVar7;
          uVar10 = 0;
          if ((int)uVar19 < *(int *)(pFVar23 + 8)) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = *(uint *)(*(longlong *)pFVar23 + lVar25);
          uVar11 = 0;
          if ((int)uVar10 < (this->AllNodesView).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          local_60 = uVar10;
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->AllNodesView).DataPtr;
          iVar12 = pFVar4[(int)uVar10].ValidArchetypes.ArrayNum;
          pFVar23 = pFVar4[(int)uVar10].ValidArchetypes.AllocatorInstance.Data;
          if ((iVar12 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = pFVar23 + (longlong)iVar12 * 0x10;
          if (pFVar23 != pFVar18) {
            pFVar21 = (param_3->ValidArchetypes).AllocatorInstance.Data;
            do {
              if (pFVar21 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10) {
                pFVar15 = pFVar21;
                do {
                  if (*(longlong *)pFVar15 == *(longlong *)pFVar23) {
                    pFVar23 = (param_3->OriginalDependencies).AllocatorInstance.Data;
                    if (((pFVar23 <= (FScriptContainerElement *)&local_60) &&
                        ((FScriptContainerElement *)&local_60 <
                         pFVar23 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = (param_3->OriginalDependencies).ArrayNum;
                    piVar1 = &(param_3->OriginalDependencies).ArrayMax;
                    if (iVar12 == *piVar1) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                          piVar1);
                    }
                    (param_3->OriginalDependencies).ArrayNum = iVar12 + 1;
                    *(uint *)((param_3->OriginalDependencies).AllocatorInstance.Data +
                             (longlong)iVar12 * 4) = local_60;
                    uVar10 = 0;
                    if ((int)local_78 < (param_1->Write).Access.ArrayNum) {
                      uVar10 = uVar22;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + local_58;
                    uVar10 = 0;
                    if ((int)uVar19 < *(int *)&pFVar23[8].field_0x0) {
                      uVar10 = uVar24;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = ~uVar19 + *(int *)&pFVar23[8].field_0x0;
                    if (1 < iVar12) {
                      iVar12 = 1;
                    }
                    if (iVar12 != 0) {
                      memmove((void *)(*(longlong *)&pFVar23->field_0x0 + lVar27 * 4),
                              (void *)(*(longlong *)&pFVar23->field_0x0 +
                                      (longlong)(*(int *)&pFVar23[8].field_0x0 - iVar12) * 4),
                              (longlong)iVar12 << 2);
                    }
                    *(int *)&pFVar23[8].field_0x0 = *(int *)&pFVar23[8].field_0x0 + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,(ForAnyElementType *)pFVar23,*(int *)&pFVar23[8].field_0x0,
                               (int *)(pFVar23 + 0xc));
                    goto LAB_1471ca58e;
                  }
                  pFVar15 = pFVar15 + 0x10;
                } while (pFVar15 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10);
              }
              pFVar23 = pFVar23 + 0x10;
            } while (pFVar23 != pFVar18);
          }
LAB_1471ca58e:
          lVar27 = lVar27 + -1;
          lVar25 = lVar25 + -4;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      uVar26 = (ulonglong)local_70;
      iVar12 = *(int *)&(param_2->Write).field_0x18;
      do {
        uVar19 = local_5c * 2;
        local_78 = local_78 + 1;
        local_70 = (uint)uVar26 + 1;
        if (uVar19 != 0) {
          local_70 = (uint)uVar26;
        }
        local_5c = 1;
        if (uVar19 != 0) {
          local_5c = uVar19;
        }
        uVar26 = (ulonglong)(int)local_70;
        if (iVar12 <= (int)local_78) break;
        pTVar5 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   **)&(param_2->Write).field_0x10;
        pTVar14 = &param_2->Write;
        if (pTVar5 != (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)0x0) {
          pTVar14 = pTVar5;
        }
      } while ((*(uint *)(&pTVar14->field_0x0 + uVar26 * 4) & local_5c) == 0);
    } while ((int)local_78 < iVar12);
  }
  iVar12 = *(int *)&(param_2->Read).field_0x18;
  lVar25 = 0;
  uVar22 = 0;
  uVar19 = 1;
  if (iVar12 < 1) {
LAB_1471ca671:
    if ((int)uVar22 < *(int *)&(param_2->Read).field_0x18) goto LAB_1471ca680;
  }
  else {
    pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
               **)&(param_2->Read).field_0x10;
    pTVar16 = param_2;
    if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   *)0x0) {
      pTVar16 = pTVar3;
    }
    if ((*(byte *)&pTVar16->Read & 1) == 0) {
      do {
        uVar10 = uVar19 * 2;
        uVar22 = uVar22 + 1;
        uVar19 = 1;
        iVar9 = (int)lVar25 + 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
          iVar9 = (int)lVar25;
        }
        lVar25 = (longlong)iVar9;
        if (iVar12 <= (int)uVar22) break;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + lVar25 * 4) & uVar19) == 0);
      goto LAB_1471ca671;
    }
LAB_1471ca680:
    do {
      uVar10 = 0;
      if ((int)uVar22 < (param_1->Read).Access.ArrayNum) {
        uVar10 = ~uVar22 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (param_1->Read).Access.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10;
      if (((*(int **)&pFVar23->field_0x0 <= &param_4) &&
          (&param_4 < *(int **)&pFVar23->field_0x0 + *(int *)(pFVar23 + 0xc))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = *(int *)&pFVar23[8].field_0x0;
      if (iVar12 == *(int *)(pFVar23 + 0xc)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
      }
      *(int *)&pFVar23[8].field_0x0 = iVar12 + 1;
      *(int *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar12 * 4) = param_4;
      iVar12 = *(int *)&(param_2->Read).field_0x18;
      do {
        uVar10 = uVar19 * 2;
        uVar22 = uVar22 + 1;
        uVar19 = 1;
        iVar9 = (int)lVar25 + 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
          iVar9 = (int)lVar25;
        }
        lVar25 = (longlong)iVar9;
        if (iVar12 <= (int)uVar22) goto LAB_1471ca7a6;
        pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   **)&(param_2->Read).field_0x10;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + lVar25 * 4) & uVar19) == 0);
    } while ((int)uVar22 < iVar12);
  }
LAB_1471ca7a6:
  iVar12 = *(int *)&(param_2->Write).field_0x18;
  pTVar5 = &param_2->Write;
  lVar25 = 0;
  uVar22 = 0;
  uVar19 = 1;
  if (0 < iVar12) {
    pTVar14 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                **)&(param_2->Write).field_0x10;
    pTVar17 = pTVar14;
    if (pTVar14 ==
        (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
        0x0) {
      pTVar17 = pTVar5;
    }
    if ((*(byte *)pTVar17 & 1) != 0) goto LAB_1471ca810;
    do {
      uVar10 = uVar19 * 2;
      uVar22 = uVar22 + 1;
      uVar19 = 1;
      iVar9 = (int)lVar25 + 1;
      if (uVar10 != 0) {
        uVar19 = uVar10;
        iVar9 = (int)lVar25;
      }
      lVar25 = (longlong)iVar9;
      if (iVar12 <= (int)uVar22) {
        return;
      }
      pTVar17 = pTVar5;
      if (pTVar14 !=
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
          0x0) {
        pTVar17 = pTVar14;
      }
    } while ((*(uint *)(&pTVar17->field_0x0 + lVar25 * 4) & uVar19) == 0);
  }
  if (iVar12 <= (int)uVar22) {
    return;
  }
LAB_1471ca810:
  do {
    uVar10 = 0;
    if ((int)uVar22 < (param_1->Write).Access.ArrayNum) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10;
    if (((*(int **)&pFVar23->field_0x0 <= &param_4) &&
        (&param_4 < *(int **)&pFVar23->field_0x0 + *(int *)(pFVar23 + 0xc))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = *(int *)&pFVar23[8].field_0x0;
    if (iVar12 == *(int *)(pFVar23 + 0xc)) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
    }
    *(int *)&pFVar23[8].field_0x0 = iVar12 + 1;
    *(int *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar12 * 4) = param_4;
    iVar12 = *(int *)&(param_2->Write).field_0x18;
    do {
      uVar10 = uVar19 * 2;
      uVar22 = uVar22 + 1;
      uVar19 = 1;
      iVar9 = (int)lVar25 + 1;
      if (uVar10 != 0) {
        uVar19 = uVar10;
        iVar9 = (int)lVar25;
      }
      lVar25 = (longlong)iVar9;
      if (iVar12 <= (int)uVar22) {
        return;
      }
      pTVar14 = *(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  **)&(param_2->Write).field_0x10;
      pTVar17 = pTVar5;
      if (pTVar14 !=
          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
          0x0) {
        pTVar17 = pTVar14;
      }
    } while ((*(uint *)(&pTVar17->field_0x0 + lVar25 * 4) & uVar19) == 0);
    if (iVar12 <= (int)uVar22) {
      return;
    }
  } while( true );
}

// HandleElementType<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_> @ 1471cac50

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::FResourceUsage::
HandleElementType<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
          (FResourceUsage *this,
          TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
          *param_1,TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   *param_2,FNode *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *pTVar3;
  FNode *pFVar4;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar14;
  FScriptContainerElement *pFVar15;
  TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
  *pTVar16;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  uint *puVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint local_78;
  uint local_74;
  uint local_70;
  undefined1 local_6c [4];
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  longlong local_58;
  
  iVar12 = *(int *)&(param_2->Read).field_0x18;
  lVar25 = 0;
  uVar22 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar19 = 1;
  local_74 = 1;
  if (iVar12 < 1) {
LAB_1471cad03:
    if ((int)local_70 < iVar12) goto LAB_1471cad10;
  }
  else {
    pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
               **)&(param_2->Read).field_0x10;
    pTVar16 = param_2;
    if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   *)0x0) {
      pTVar16 = pTVar3;
    }
    if ((*(byte *)&pTVar16->Read & 1) == 0) {
      do {
        uVar10 = uVar19 * 2;
        uVar22 = uVar22 + 1;
        uVar19 = 1;
        local_78 = (uint)lVar25 + 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
          local_78 = (uint)lVar25;
        }
        lVar25 = (longlong)(int)local_78;
        local_74 = uVar19;
        local_70 = uVar22;
        if (iVar12 <= (int)uVar22) break;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + lVar25 * 4) & uVar19) == 0);
      goto LAB_1471cad03;
    }
LAB_1471cad10:
    do {
      uVar19 = 0;
      if ((int)local_70 < (param_1->Write).Access.ArrayNum) {
        uVar19 = ~local_70 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + (longlong)(int)local_70 * 0x10;
      puVar20 = *(uint **)pFVar23;
      iVar12 = *(int *)(pFVar23 + 8);
      puVar2 = puVar20 + iVar12;
      while( true ) {
        if (*(int *)(pFVar23 + 8) != iVar12) {
          local_6c[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_6c);
        }
        if (puVar20 == puVar2) break;
        uVar19 = *puVar20;
        uVar22 = 0;
        if ((int)uVar19 < (this->AllNodesView).ArrayNum) {
          uVar22 = ~uVar19 >> 0x1f;
        }
        local_68 = uVar19;
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->AllNodesView).DataPtr;
        iVar9 = pFVar4[(int)uVar19].ValidArchetypes.ArrayNum;
        pFVar18 = pFVar4[(int)uVar19].ValidArchetypes.AllocatorInstance.Data;
        if ((iVar9 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar21 = pFVar18 + (longlong)iVar9 * 0x10;
        if (pFVar18 == pFVar21) {
LAB_1471caf28:
          puVar20 = puVar20 + 1;
        }
        else {
          pFVar15 = (param_3->ValidArchetypes).AllocatorInstance.Data;
          do {
            if (pFVar15 != pFVar15 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10) {
              pFVar13 = pFVar15;
              do {
                if (*(longlong *)pFVar13 == *(longlong *)pFVar18) {
                  pFVar18 = (param_3->OriginalDependencies).AllocatorInstance.Data;
                  if (((pFVar18 <= (FScriptContainerElement *)&local_68) &&
                      ((FScriptContainerElement *)&local_68 <
                       pFVar18 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  iVar9 = (param_3->OriginalDependencies).ArrayNum;
                  piVar1 = &(param_3->OriginalDependencies).ArrayMax;
                  if (iVar9 == *piVar1) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                       piVar1);
                  }
                  (param_3->OriginalDependencies).ArrayNum = iVar9 + 1;
                  *(uint *)((param_3->OriginalDependencies).AllocatorInstance.Data +
                           (longlong)iVar9 * 4) = local_68;
                  goto LAB_1471caf28;
                }
                pFVar13 = pFVar13 + 0x10;
              } while (pFVar13 != pFVar15 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10);
            }
            pFVar18 = pFVar18 + 0x10;
          } while (pFVar18 != pFVar21);
          puVar20 = puVar20 + 1;
        }
      }
      uVar26 = (ulonglong)local_78;
      iVar12 = *(int *)&(param_2->Read).field_0x18;
      do {
        uVar19 = local_74 * 2;
        local_70 = local_70 + 1;
        local_74 = 1;
        local_78 = (uint)uVar26 + 1;
        if (uVar19 != 0) {
          local_74 = uVar19;
          local_78 = (uint)uVar26;
        }
        uVar26 = (ulonglong)(int)local_78;
        if (iVar12 <= (int)local_70) break;
        pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   **)&(param_2->Read).field_0x10;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + uVar26 * 4) & local_74) == 0);
    } while ((int)local_70 < iVar12);
  }
  iVar12 = *(int *)&(param_2->Write).field_0x18;
  lVar25 = 0;
  uVar22 = 0;
  local_70 = 0;
  uVar19 = 1;
  local_5c = 1;
  local_78 = 0;
  if (iVar12 < 1) {
LAB_1471cb024:
    if ((int)local_78 < iVar12) goto LAB_1471cb030;
  }
  else {
    pTVar5 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
               **)&(param_2->Write).field_0x10;
    pTVar14 = pTVar5;
    if (pTVar5 == (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)0x0) {
      pTVar14 = &param_2->Write;
    }
    if ((*(byte *)pTVar14 & 1) == 0) {
      do {
        uVar10 = uVar19 * 2;
        local_78 = uVar22 + 1;
        local_70 = (uint)lVar25 + 1;
        if (uVar10 != 0) {
          local_70 = (uint)lVar25;
        }
        uVar19 = 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
        }
        lVar25 = (longlong)(int)local_70;
        local_5c = uVar19;
        if (iVar12 <= (int)local_78) break;
        pTVar14 = &param_2->Write;
        if (pTVar5 != (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)0x0) {
          pTVar14 = pTVar5;
        }
        uVar22 = local_78;
      } while ((*(uint *)(&pTVar14->field_0x0 + lVar25 * 4) & uVar19) == 0);
      goto LAB_1471cb024;
    }
LAB_1471cb030:
    do {
      uVar22 = ~local_78 >> 0x1f;
      uVar19 = 0;
      if ((int)local_78 < (param_1->Read).Access.ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_58 = (longlong)(int)local_78 * 0x10;
      uVar19 = *(int *)((param_1->Read).Access.AllocatorInstance.Data + local_58 + 8) - 1;
      if (-1 < (int)uVar19) {
        lVar27 = (longlong)(int)uVar19;
        lVar25 = lVar27 * 4;
        do {
          lVar7 = local_58;
          uVar10 = 0;
          if ((int)local_78 < (param_1->Read).Access.ArrayNum) {
            uVar10 = uVar22;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar24 = ~uVar19 >> 0x1f;
          pFVar23 = (param_1->Read).Access.AllocatorInstance.Data + lVar7;
          uVar10 = 0;
          if ((int)uVar19 < *(int *)(pFVar23 + 8)) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = *(uint *)(*(longlong *)pFVar23 + lVar25);
          uVar11 = 0;
          if ((int)uVar10 < (this->AllNodesView).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          local_64 = uVar10;
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->AllNodesView).DataPtr;
          iVar12 = pFVar4[(int)uVar10].ValidArchetypes.ArrayNum;
          pFVar23 = pFVar4[(int)uVar10].ValidArchetypes.AllocatorInstance.Data;
          if ((iVar12 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = pFVar23 + (longlong)iVar12 * 0x10;
          if (pFVar23 != pFVar18) {
            pFVar21 = (param_3->ValidArchetypes).AllocatorInstance.Data;
            do {
              if (pFVar21 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10) {
                pFVar15 = pFVar21;
                do {
                  if (*(longlong *)pFVar15 == *(longlong *)pFVar23) {
                    pFVar23 = (param_3->OriginalDependencies).AllocatorInstance.Data;
                    if (((pFVar23 <= (FScriptContainerElement *)&local_64) &&
                        ((FScriptContainerElement *)&local_64 <
                         pFVar23 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = (param_3->OriginalDependencies).ArrayNum;
                    piVar1 = &(param_3->OriginalDependencies).ArrayMax;
                    if (iVar12 == *piVar1) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                          piVar1);
                    }
                    (param_3->OriginalDependencies).ArrayNum = iVar12 + 1;
                    *(uint *)((param_3->OriginalDependencies).AllocatorInstance.Data +
                             (longlong)iVar12 * 4) = local_64;
                    uVar10 = 0;
                    if ((int)local_78 < (param_1->Read).Access.ArrayNum) {
                      uVar10 = uVar22;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar23 = (param_1->Read).Access.AllocatorInstance.Data + local_58;
                    uVar10 = 0;
                    if ((int)uVar19 < *(int *)&pFVar23[8].field_0x0) {
                      uVar10 = uVar24;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = ~uVar19 + *(int *)&pFVar23[8].field_0x0;
                    if (1 < iVar12) {
                      iVar12 = 1;
                    }
                    if (iVar12 != 0) {
                      memmove((void *)(*(longlong *)&pFVar23->field_0x0 + lVar27 * 4),
                              (void *)(*(longlong *)&pFVar23->field_0x0 +
                                      (longlong)(*(int *)&pFVar23[8].field_0x0 - iVar12) * 4),
                              (longlong)iVar12 << 2);
                    }
                    *(int *)&pFVar23[8].field_0x0 = *(int *)&pFVar23[8].field_0x0 + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,(ForAnyElementType *)pFVar23,*(int *)&pFVar23[8].field_0x0,
                               (int *)(pFVar23 + 0xc));
                    goto LAB_1471cb23e;
                  }
                  pFVar15 = pFVar15 + 0x10;
                } while (pFVar15 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10);
              }
              pFVar23 = pFVar23 + 0x10;
            } while (pFVar23 != pFVar18);
          }
LAB_1471cb23e:
          lVar27 = lVar27 + -1;
          lVar25 = lVar25 + -4;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      uVar19 = 0;
      if ((int)local_78 < (param_1->Write).Access.ArrayNum) {
        uVar19 = uVar22;
      }
      if ((uVar19 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar19 = *(int *)((param_1->Write).Access.AllocatorInstance.Data +
                       (longlong)(int)local_78 * 0x10 + 8) - 1;
      if (-1 < (int)uVar19) {
        lVar27 = (longlong)(int)uVar19;
        local_58 = (longlong)(int)local_78 << 4;
        lVar25 = lVar27 * 4;
        do {
          lVar7 = local_58;
          uVar10 = 0;
          if ((int)local_78 < (param_1->Write).Access.ArrayNum) {
            uVar10 = uVar22;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar24 = ~uVar19 >> 0x1f;
          pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + lVar7;
          uVar10 = 0;
          if ((int)uVar19 < *(int *)(pFVar23 + 8)) {
            uVar10 = uVar24;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = *(uint *)(*(longlong *)pFVar23 + lVar25);
          uVar11 = 0;
          if ((int)uVar10 < (this->AllNodesView).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          local_60 = uVar10;
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar4 = (this->AllNodesView).DataPtr;
          iVar12 = pFVar4[(int)uVar10].ValidArchetypes.ArrayNum;
          pFVar23 = pFVar4[(int)uVar10].ValidArchetypes.AllocatorInstance.Data;
          if ((iVar12 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar18 = pFVar23 + (longlong)iVar12 * 0x10;
          if (pFVar23 != pFVar18) {
            pFVar21 = (param_3->ValidArchetypes).AllocatorInstance.Data;
            do {
              if (pFVar21 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10) {
                pFVar15 = pFVar21;
                do {
                  if (*(longlong *)pFVar15 == *(longlong *)pFVar23) {
                    pFVar23 = (param_3->OriginalDependencies).AllocatorInstance.Data;
                    if (((pFVar23 <= (FScriptContainerElement *)&local_60) &&
                        ((FScriptContainerElement *)&local_60 <
                         pFVar23 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = (param_3->OriginalDependencies).ArrayNum;
                    piVar1 = &(param_3->OriginalDependencies).ArrayMax;
                    if (iVar12 == *piVar1) {
                      iVar12 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                          piVar1);
                    }
                    (param_3->OriginalDependencies).ArrayNum = iVar12 + 1;
                    *(uint *)((param_3->OriginalDependencies).AllocatorInstance.Data +
                             (longlong)iVar12 * 4) = local_60;
                    uVar10 = 0;
                    if ((int)local_78 < (param_1->Write).Access.ArrayNum) {
                      uVar10 = uVar22;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + local_58;
                    uVar10 = 0;
                    if ((int)uVar19 < *(int *)&pFVar23[8].field_0x0) {
                      uVar10 = uVar24;
                    }
                    if ((uVar10 == 0) &&
                       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    iVar12 = ~uVar19 + *(int *)&pFVar23[8].field_0x0;
                    if (1 < iVar12) {
                      iVar12 = 1;
                    }
                    if (iVar12 != 0) {
                      memmove((void *)(*(longlong *)&pFVar23->field_0x0 + lVar27 * 4),
                              (void *)(*(longlong *)&pFVar23->field_0x0 +
                                      (longlong)(*(int *)&pFVar23[8].field_0x0 - iVar12) * 4),
                              (longlong)iVar12 << 2);
                    }
                    *(int *)&pFVar23[8].field_0x0 = *(int *)&pFVar23[8].field_0x0 + -1;
                    UE::Core::Private::
                    ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,(ForAnyElementType *)pFVar23,*(int *)&pFVar23[8].field_0x0,
                               (int *)(pFVar23 + 0xc));
                    goto LAB_1471cb45e;
                  }
                  pFVar15 = pFVar15 + 0x10;
                } while (pFVar15 != pFVar21 + (longlong)(param_3->ValidArchetypes).ArrayNum * 0x10);
              }
              pFVar23 = pFVar23 + 0x10;
            } while (pFVar23 != pFVar18);
          }
LAB_1471cb45e:
          lVar27 = lVar27 + -1;
          lVar25 = lVar25 + -4;
          uVar19 = uVar19 - 1;
        } while (-1 < (int)uVar19);
      }
      uVar26 = (ulonglong)local_70;
      iVar12 = *(int *)&(param_2->Write).field_0x18;
      do {
        uVar19 = local_5c * 2;
        local_78 = local_78 + 1;
        local_70 = (uint)uVar26 + 1;
        if (uVar19 != 0) {
          local_70 = (uint)uVar26;
        }
        local_5c = 1;
        if (uVar19 != 0) {
          local_5c = uVar19;
        }
        uVar26 = (ulonglong)(int)local_70;
        if (iVar12 <= (int)local_78) break;
        pTVar5 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   **)&(param_2->Write).field_0x10;
        pTVar14 = &param_2->Write;
        if (pTVar5 != (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)0x0) {
          pTVar14 = pTVar5;
        }
      } while ((*(uint *)(&pTVar14->field_0x0 + uVar26 * 4) & local_5c) == 0);
    } while ((int)local_78 < iVar12);
  }
  iVar12 = *(int *)&(param_2->Read).field_0x18;
  lVar25 = 0;
  uVar22 = 0;
  uVar19 = 1;
  if (iVar12 < 1) {
LAB_1471cb541:
    if ((int)uVar22 < *(int *)&(param_2->Read).field_0x18) goto LAB_1471cb550;
  }
  else {
    pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
               **)&(param_2->Read).field_0x10;
    pTVar16 = param_2;
    if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   *)0x0) {
      pTVar16 = pTVar3;
    }
    if ((*(byte *)&pTVar16->Read & 1) == 0) {
      do {
        uVar10 = uVar19 * 2;
        uVar22 = uVar22 + 1;
        uVar19 = 1;
        iVar9 = (int)lVar25 + 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
          iVar9 = (int)lVar25;
        }
        lVar25 = (longlong)iVar9;
        if (iVar12 <= (int)uVar22) break;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + lVar25 * 4) & uVar19) == 0);
      goto LAB_1471cb541;
    }
LAB_1471cb550:
    do {
      uVar10 = 0;
      if ((int)uVar22 < (param_1->Read).Access.ArrayNum) {
        uVar10 = ~uVar22 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar23 = (param_1->Read).Access.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10;
      if (((*(int **)&pFVar23->field_0x0 <= &param_4) &&
          (&param_4 < *(int **)&pFVar23->field_0x0 + *(int *)(pFVar23 + 0xc))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = *(int *)&pFVar23[8].field_0x0;
      if (iVar12 == *(int *)(pFVar23 + 0xc)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
      }
      *(int *)&pFVar23[8].field_0x0 = iVar12 + 1;
      *(int *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar12 * 4) = param_4;
      iVar12 = *(int *)&(param_2->Read).field_0x18;
      do {
        uVar10 = uVar19 * 2;
        uVar22 = uVar22 + 1;
        uVar19 = 1;
        iVar9 = (int)lVar25 + 1;
        if (uVar10 != 0) {
          uVar19 = uVar10;
          iVar9 = (int)lVar25;
        }
        lVar25 = (longlong)iVar9;
        if (iVar12 <= (int)uVar22) goto LAB_1471cb676;
        pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                   **)&(param_2->Read).field_0x10;
        pTVar16 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                       *)0x0) {
          pTVar16 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar16->Read).field_0x0 + lVar25 * 4) & uVar19) == 0);
    } while ((int)uVar22 < iVar12);
  }
LAB_1471cb676:
  iVar12 = *(int *)&(param_2->Write).field_0x18;
  pTVar5 = &param_2->Write;
  lVar25 = 0;
  uVar22 = 0;
  uVar19 = 1;
  if (0 < iVar12) {
    pTVar14 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                **)&(param_2->Write).field_0x10;
    pTVar17 = pTVar14;
    if (pTVar14 ==
        (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
         *)0x0) {
      pTVar17 = pTVar5;
    }
    if ((*(byte *)pTVar17 & 1) != 0) goto LAB_1471cb6e0;
    do {
      uVar10 = uVar19 * 2;
      uVar22 = uVar22 + 1;
      uVar19 = 1;
      iVar9 = (int)lVar25 + 1;
      if (uVar10 != 0) {
        uVar19 = uVar10;
        iVar9 = (int)lVar25;
      }
      lVar25 = (longlong)iVar9;
      if (iVar12 <= (int)uVar22) {
        return;
      }
      pTVar17 = pTVar5;
      if (pTVar14 !=
          (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *)0x0) {
        pTVar17 = pTVar14;
      }
    } while ((*(uint *)(&pTVar17->field_0x0 + lVar25 * 4) & uVar19) == 0);
  }
  if (iVar12 <= (int)uVar22) {
    return;
  }
LAB_1471cb6e0:
  do {
    uVar10 = 0;
    if ((int)uVar22 < (param_1->Write).Access.ArrayNum) {
      uVar10 = ~uVar22 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar23 = (param_1->Write).Access.AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10;
    if (((*(int **)&pFVar23->field_0x0 <= &param_4) &&
        (&param_4 < *(int **)&pFVar23->field_0x0 + *(int *)(pFVar23 + 0xc))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar12 = *(int *)&pFVar23[8].field_0x0;
    if (iVar12 == *(int *)(pFVar23 + 0xc)) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 0xc));
    }
    *(int *)&pFVar23[8].field_0x0 = iVar12 + 1;
    *(int *)(*(longlong *)&pFVar23->field_0x0 + (longlong)iVar12 * 4) = param_4;
    iVar12 = *(int *)&(param_2->Write).field_0x18;
    do {
      uVar10 = uVar19 * 2;
      uVar22 = uVar22 + 1;
      uVar19 = 1;
      iVar9 = (int)lVar25 + 1;
      if (uVar10 != 0) {
        uVar19 = uVar10;
        iVar9 = (int)lVar25;
      }
      lVar25 = (longlong)iVar9;
      if (iVar12 <= (int)uVar22) {
        return;
      }
      pTVar14 = *(TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  **)&(param_2->Write).field_0x10;
      pTVar17 = pTVar5;
      if (pTVar14 !=
          (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
           *)0x0) {
        pTVar17 = pTVar14;
      }
    } while ((*(uint *)(&pTVar17->field_0x0 + lVar25 * 4) & uVar19) == 0);
    if (iVar12 <= (int)uVar22) {
      return;
    }
  } while( true );
}

// HandleElementType<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_> @ 1471cbb20

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::FResourceUsage::
HandleElementType<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
          (FResourceUsage *this,
          TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
          *param_1,TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                   *param_2,FNode *param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
  *pTVar3;
  FScriptContainerElement *pFVar4;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *pTVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *pTVar12;
  TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
  *pTVar13;
  TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *pTVar14;
  uint uVar15;
  undefined4 *puVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined1 local_58 [4];
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  longlong local_40;
  
  iVar11 = *(int *)&(param_2->Read).field_0x18;
  lVar18 = 0;
  uVar21 = 0;
  local_50 = 0;
  local_44 = 0;
  uVar15 = 1;
  if (iVar11 < 1) {
LAB_1471cbbbb:
    if ((int)local_44 < iVar11) goto LAB_1471cbbd0;
  }
  else {
    pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
               **)&(param_2->Read).field_0x10;
    pTVar13 = param_2;
    if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                   *)0x0) {
      pTVar13 = pTVar3;
    }
    if ((*(byte *)&pTVar13->Read & 1) == 0) {
      do {
        uVar22 = uVar15 * 2;
        uVar21 = uVar21 + 1;
        uVar15 = 1;
        local_50 = (uint)lVar18 + 1;
        if (uVar22 != 0) {
          uVar15 = uVar22;
          local_50 = (uint)lVar18;
        }
        lVar18 = (longlong)(int)local_50;
        local_44 = uVar21;
        if (iVar11 <= (int)uVar21) break;
        pTVar13 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                       *)0x0) {
          pTVar13 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar13->Read).field_0x0 + lVar18 * 4) & uVar15) == 0);
      goto LAB_1471cbbbb;
    }
LAB_1471cbbd0:
    do {
      uVar21 = local_44;
      uVar22 = 0;
      if ((int)local_44 < (param_1->Write).Access.ArrayNum) {
        uVar22 = ~local_44 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = (param_1->Write).Access.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10;
      puVar16 = *(undefined4 **)pFVar17;
      iVar11 = *(int *)(pFVar17 + 8);
      puVar2 = puVar16 + iVar11;
      while( true ) {
        if (*(int *)(pFVar17 + 8) != iVar11) {
          local_58[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_58);
        }
        if (puVar16 == puVar2) break;
        local_54 = *puVar16;
        pFVar4 = (param_3->OriginalDependencies).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_54) &&
            ((FScriptContainerElement *)&local_54 <
             pFVar4 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (param_3->OriginalDependencies).ArrayNum;
        piVar1 = &(param_3->OriginalDependencies).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_3->OriginalDependencies).AllocatorInstance,piVar1);
        }
        puVar16 = puVar16 + 1;
        (param_3->OriginalDependencies).ArrayNum = iVar9 + 1;
        *(undefined4 *)
         ((param_3->OriginalDependencies).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_54;
      }
      uVar19 = (ulonglong)local_50;
      iVar11 = *(int *)&(param_2->Read).field_0x18;
      do {
        uVar21 = uVar15 * 2;
        local_44 = local_44 + 1;
        uVar15 = 1;
        local_50 = (uint)uVar19 + 1;
        if (uVar21 != 0) {
          uVar15 = uVar21;
          local_50 = (uint)uVar19;
        }
        uVar19 = (ulonglong)(int)local_50;
        if (iVar11 <= (int)local_44) break;
        pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                   **)&(param_2->Read).field_0x10;
        pTVar13 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                       *)0x0) {
          pTVar13 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar13->Read).field_0x0 + uVar19 * 4) & uVar15) == 0);
    } while ((int)local_44 < iVar11);
  }
  iVar11 = *(int *)&(param_2->Write).field_0x18;
  lVar18 = 0;
  uVar15 = 1;
  local_50 = 1;
  local_44 = 0;
  uVar21 = 0;
  if (iVar11 < 1) {
LAB_1471cbdd5:
    if ((int)uVar21 < iVar11) goto LAB_1471cbde0;
  }
  else {
    pTVar5 = *(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
               **)&(param_2->Write).field_0x10;
    pTVar12 = pTVar5;
    if (pTVar5 == (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                   *)0x0) {
      pTVar12 = &param_2->Write;
    }
    if ((*(byte *)pTVar12 & 1) == 0) {
      do {
        uVar22 = uVar15 * 2;
        uVar21 = uVar21 + 1;
        local_44 = (uint)lVar18 + 1;
        if (uVar22 != 0) {
          local_44 = (uint)lVar18;
        }
        uVar15 = 1;
        if (uVar22 != 0) {
          uVar15 = uVar22;
        }
        lVar18 = (longlong)(int)local_44;
        local_50 = uVar15;
        if (iVar11 <= (int)uVar21) break;
        pTVar12 = &param_2->Write;
        if (pTVar5 != (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                       *)0x0) {
          pTVar12 = pTVar5;
        }
      } while ((*(uint *)(&pTVar12->field_0x0 + lVar18 * 4) & uVar15) == 0);
      goto LAB_1471cbdd5;
    }
LAB_1471cbde0:
    do {
      uVar22 = ~uVar21 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar21 < (param_1->Read).Access.ArrayNum) {
        uVar15 = uVar22;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_40 = (longlong)(int)uVar21 * 0x10;
      uVar15 = *(int *)((param_1->Read).Access.AllocatorInstance.Data + local_40 + 8) - 1;
      if (-1 < (int)uVar15) {
        lVar20 = (longlong)(int)uVar15;
        lVar18 = lVar20 * 4;
        do {
          lVar7 = local_40;
          uVar10 = 0;
          if ((int)uVar21 < (param_1->Read).Access.ArrayNum) {
            uVar10 = uVar22;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (param_1->Read).Access.AllocatorInstance.Data + lVar7;
          uVar10 = 0;
          if ((int)uVar15 < *(int *)(pFVar17 + 8)) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_4c = *(undefined4 *)(*(longlong *)pFVar17 + lVar18);
          pFVar17 = (param_3->OriginalDependencies).AllocatorInstance.Data;
          if (((pFVar17 <= (FScriptContainerElement *)&local_4c) &&
              ((FScriptContainerElement *)&local_4c <
               pFVar17 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (param_3->OriginalDependencies).ArrayNum;
          if (iVar11 == (param_3->OriginalDependencies).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                &(param_3->OriginalDependencies).ArrayMax);
          }
          (param_3->OriginalDependencies).ArrayNum = iVar11 + 1;
          *(undefined4 *)
           ((param_3->OriginalDependencies).AllocatorInstance.Data + (longlong)iVar11 * 4) =
               local_4c;
          uVar10 = 0;
          if ((int)uVar21 < (param_1->Read).Access.ArrayNum) {
            uVar10 = uVar22;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (param_1->Read).Access.AllocatorInstance.Data + local_40;
          uVar10 = 0;
          if ((int)uVar15 < *(int *)&pFVar17[8].field_0x0) {
            uVar10 = ~uVar15 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = ~uVar15 + *(int *)&pFVar17[8].field_0x0;
          if (1 < iVar11) {
            iVar11 = 1;
          }
          if (iVar11 != 0) {
            memmove((void *)(*(longlong *)&pFVar17->field_0x0 + lVar20 * 4),
                    (void *)(*(longlong *)&pFVar17->field_0x0 +
                            (longlong)(*(int *)&pFVar17[8].field_0x0 - iVar11) * 4),
                    (longlong)iVar11 << 2);
          }
          *(int *)&pFVar17[8].field_0x0 = *(int *)&pFVar17[8].field_0x0 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)pFVar17,*(int *)&pFVar17[8].field_0x0,
                     (int *)(pFVar17 + 0xc));
          lVar20 = lVar20 + -1;
          lVar18 = lVar18 + -4;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      uVar15 = 0;
      if ((int)uVar21 < (param_1->Write).Access.ArrayNum) {
        uVar15 = ~uVar21 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar15 = *(int *)((param_1->Write).Access.AllocatorInstance.Data +
                       (longlong)(int)uVar21 * 0x10 + 8) - 1;
      if (-1 < (int)uVar15) {
        lVar20 = (longlong)(int)uVar15;
        local_40 = (longlong)(int)uVar21 << 4;
        lVar18 = lVar20 * 4;
        do {
          lVar7 = local_40;
          uVar22 = 0;
          if ((int)uVar21 < (param_1->Write).Access.ArrayNum) {
            uVar22 = ~uVar21 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (param_1->Write).Access.AllocatorInstance.Data + lVar7;
          uVar22 = 0;
          if ((int)uVar15 < *(int *)(pFVar17 + 8)) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_48 = *(undefined4 *)(*(longlong *)pFVar17 + lVar18);
          pFVar17 = (param_3->OriginalDependencies).AllocatorInstance.Data;
          if (((pFVar17 <= (FScriptContainerElement *)&local_48) &&
              ((FScriptContainerElement *)&local_48 <
               pFVar17 + (longlong)(param_3->OriginalDependencies).ArrayMax * 4)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (param_3->OriginalDependencies).ArrayNum;
          if (iVar11 == (param_3->OriginalDependencies).ArrayMax) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(param_3->OriginalDependencies).AllocatorInstance,
                                &(param_3->OriginalDependencies).ArrayMax);
          }
          (param_3->OriginalDependencies).ArrayNum = iVar11 + 1;
          *(undefined4 *)
           ((param_3->OriginalDependencies).AllocatorInstance.Data + (longlong)iVar11 * 4) =
               local_48;
          uVar22 = 0;
          if ((int)uVar21 < (param_1->Write).Access.ArrayNum) {
            uVar22 = ~uVar21 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pFVar17 = (param_1->Write).Access.AllocatorInstance.Data + local_40;
          uVar22 = 0;
          if ((int)uVar15 < *(int *)&pFVar17[8].field_0x0) {
            uVar22 = ~uVar15 >> 0x1f;
          }
          if ((uVar22 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = ~uVar15 + *(int *)&pFVar17[8].field_0x0;
          if (1 < iVar11) {
            iVar11 = 1;
          }
          if (iVar11 != 0) {
            memmove((void *)(*(longlong *)&pFVar17->field_0x0 + lVar20 * 4),
                    (void *)(*(longlong *)&pFVar17->field_0x0 +
                            (longlong)(*(int *)&pFVar17[8].field_0x0 - iVar11) * 4),
                    (longlong)iVar11 << 2);
          }
          *(int *)&pFVar17[8].field_0x0 = *(int *)&pFVar17[8].field_0x0 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)pFVar17,*(int *)&pFVar17[8].field_0x0,
                     (int *)(pFVar17 + 0xc));
          lVar20 = lVar20 + -1;
          lVar18 = lVar18 + -4;
          uVar15 = uVar15 - 1;
        } while (-1 < (int)uVar15);
      }
      uVar19 = (ulonglong)local_44;
      iVar11 = *(int *)&(param_2->Write).field_0x18;
      do {
        uVar15 = local_50 * 2;
        uVar21 = uVar21 + 1;
        local_44 = (uint)uVar19 + 1;
        if (uVar15 != 0) {
          local_44 = (uint)uVar19;
        }
        local_50 = 1;
        if (uVar15 != 0) {
          local_50 = uVar15;
        }
        uVar19 = (ulonglong)(int)local_44;
        if (iVar11 <= (int)uVar21) break;
        pTVar5 = *(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                   **)&(param_2->Write).field_0x10;
        pTVar12 = &param_2->Write;
        if (pTVar5 != (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                       *)0x0) {
          pTVar12 = pTVar5;
        }
      } while ((*(uint *)(&pTVar12->field_0x0 + uVar19 * 4) & local_50) == 0);
    } while ((int)uVar21 < iVar11);
  }
  iVar11 = *(int *)&(param_2->Read).field_0x18;
  lVar18 = 0;
  uVar21 = 0;
  uVar15 = 1;
  if (iVar11 < 1) {
LAB_1471cc421:
    if ((int)uVar21 < *(int *)&(param_2->Read).field_0x18) goto LAB_1471cc430;
  }
  else {
    pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
               **)&(param_2->Read).field_0x10;
    pTVar13 = param_2;
    if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                   *)0x0) {
      pTVar13 = pTVar3;
    }
    if ((*(byte *)&pTVar13->Read & 1) == 0) {
      do {
        uVar22 = uVar15 * 2;
        uVar21 = uVar21 + 1;
        uVar15 = 1;
        iVar9 = (int)lVar18 + 1;
        if (uVar22 != 0) {
          uVar15 = uVar22;
          iVar9 = (int)lVar18;
        }
        lVar18 = (longlong)iVar9;
        if (iVar11 <= (int)uVar21) break;
        pTVar13 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                       *)0x0) {
          pTVar13 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar13->Read).field_0x0 + lVar18 * 4) & uVar15) == 0);
      goto LAB_1471cc421;
    }
LAB_1471cc430:
    do {
      uVar22 = 0;
      if ((int)uVar21 < (param_1->Read).Access.ArrayNum) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = (param_1->Read).Access.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10;
      if (((*(int **)&pFVar17->field_0x0 <= &param_4) &&
          (&param_4 < *(int **)&pFVar17->field_0x0 + *(int *)(pFVar17 + 0xc))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = *(int *)&pFVar17[8].field_0x0;
      if (iVar11 == *(int *)(pFVar17 + 0xc)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
      }
      *(int *)&pFVar17[8].field_0x0 = iVar11 + 1;
      *(int *)(*(longlong *)&pFVar17->field_0x0 + (longlong)iVar11 * 4) = param_4;
      iVar11 = *(int *)&(param_2->Read).field_0x18;
      do {
        uVar22 = uVar15 * 2;
        uVar21 = uVar21 + 1;
        uVar15 = 1;
        iVar9 = (int)lVar18 + 1;
        if (uVar22 != 0) {
          uVar15 = uVar22;
          iVar9 = (int)lVar18;
        }
        lVar18 = (longlong)iVar9;
        if (iVar11 <= (int)uVar21) goto LAB_1471cc556;
        pTVar3 = *(TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                   **)&(param_2->Read).field_0x10;
        pTVar13 = param_2;
        if (pTVar3 != (TMassExecutionAccess<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
                       *)0x0) {
          pTVar13 = pTVar3;
        }
      } while ((*(uint *)(&(pTVar13->Read).field_0x0 + lVar18 * 4) & uVar15) == 0);
    } while ((int)uVar21 < iVar11);
  }
LAB_1471cc556:
  iVar11 = *(int *)&(param_2->Write).field_0x18;
  pTVar5 = &param_2->Write;
  lVar18 = 0;
  uVar21 = 0;
  uVar15 = 1;
  if (0 < iVar11) {
    pTVar12 = *(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                **)&(param_2->Write).field_0x10;
    pTVar14 = pTVar12;
    if (pTVar12 ==
        (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *)0x0
       ) {
      pTVar14 = pTVar5;
    }
    if ((*(byte *)pTVar14 & 1) != 0) goto LAB_1471cc5c0;
    do {
      uVar22 = uVar15 * 2;
      uVar21 = uVar21 + 1;
      uVar15 = 1;
      iVar9 = (int)lVar18 + 1;
      if (uVar22 != 0) {
        uVar15 = uVar22;
        iVar9 = (int)lVar18;
      }
      lVar18 = (longlong)iVar9;
      if (iVar11 <= (int)uVar21) {
        return;
      }
      pTVar14 = pTVar5;
      if (pTVar12 !=
          (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *)
          0x0) {
        pTVar14 = pTVar12;
      }
    } while ((*(uint *)(&pTVar14->field_0x0 + lVar18 * 4) & uVar15) == 0);
  }
  if (iVar11 <= (int)uVar21) {
    return;
  }
LAB_1471cc5c0:
  while( true ) {
    uVar22 = 0;
    if ((int)uVar21 < (param_1->Write).Access.ArrayNum) {
      uVar22 = ~uVar21 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    pFVar17 = (param_1->Write).Access.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10;
    if (((*(int **)&pFVar17->field_0x0 <= &param_4) &&
        (&param_4 < *(int **)&pFVar17->field_0x0 + *(int *)(pFVar17 + 0xc))) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar11 = *(int *)&pFVar17[8].field_0x0;
    if (iVar11 == *(int *)(pFVar17 + 0xc)) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)pFVar17,(int *)(pFVar17 + 0xc));
    }
    *(int *)&pFVar17[8].field_0x0 = iVar11 + 1;
    *(int *)(*(longlong *)&pFVar17->field_0x0 + (longlong)iVar11 * 4) = param_4;
    iVar11 = *(int *)&(param_2->Write).field_0x18;
    do {
      uVar22 = uVar15 * 2;
      uVar21 = uVar21 + 1;
      uVar15 = 1;
      iVar9 = (int)lVar18 + 1;
      if (uVar22 != 0) {
        uVar15 = uVar22;
        iVar9 = (int)lVar18;
      }
      lVar18 = (longlong)iVar9;
      if (iVar11 <= (int)uVar21) {
        return;
      }
      pTVar12 = *(TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>
                  **)&(param_2->Write).field_0x10;
      pTVar14 = pTVar5;
      if (pTVar12 !=
          (TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass> *)
          0x0) {
        pTVar14 = pTVar12;
      }
    } while ((*(uint *)(&pTVar14->field_0x0 + lVar18 * 4) & uVar15) == 0);
    if (iVar11 <= (int)uVar21) {
      return;
    }
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// FResourceUsage @ 1471dbf60

/* WARNING: Removing unreachable block (ram,0x0001471dc031) */
/* WARNING: Removing unreachable block (ram,0x0001471dc056) */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

FResourceUsage * __thiscall
FMassProcessorDependencySolver::FResourceUsage::FResourceUsage
          (FResourceUsage *this,
          TArray<FMassProcessorDependencySolver::FNode,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FResourceUsage *pFVar4;
  uint uVar5;
  TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess> *pTVar6;
  int iVar7;
  
  FMassExecutionRequirements::FMassExecutionRequirements(&this->Requirements);
  uVar5 = 0;
  (this->FragmentsAccess).Read.Access.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentsAccess).Read.Access.ArrayNum = 0;
  (this->FragmentsAccess).Read.Access.ArrayMax = 0;
  (this->FragmentsAccess).Write.Access.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FragmentsAccess).Write.Access.ArrayNum = 0;
  (this->FragmentsAccess).Write.Access.ArrayMax = 0;
  (this->ChunkFragmentsAccess).Read.Access.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkFragmentsAccess).Read.Access.ArrayNum = 0;
  (this->ChunkFragmentsAccess).Read.Access.ArrayMax = 0;
  (this->ChunkFragmentsAccess).Write.Access.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChunkFragmentsAccess).Write.Access.ArrayNum = 0;
  (this->ChunkFragmentsAccess).Write.Access.ArrayMax = 0;
  (this->SharedFragmentsAccess).Read.Access.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedFragmentsAccess).Read.Access.ArrayNum = 0;
  (this->SharedFragmentsAccess).Read.Access.ArrayMax = 0;
  (this->SharedFragmentsAccess).Write.Access.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SharedFragmentsAccess).Write.Access.ArrayNum = 0;
  (this->SharedFragmentsAccess).Write.Access.ArrayMax = 0;
  (this->RequiredSubsystemsAccess).Read.Access.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequiredSubsystemsAccess).Read.Access.ArrayNum = 0;
  (this->RequiredSubsystemsAccess).Read.Access.ArrayMax = 0;
  (this->RequiredSubsystemsAccess).Write.Access.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RequiredSubsystemsAccess).Write.Access.ArrayNum = 0;
  (this->RequiredSubsystemsAccess).Write.Access.ArrayMax = 0;
  (this->AllNodesView).DataPtr = (FNode *)(param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  if ((iVar3 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FResourceUsage *)(*pcVar1)();
    return pFVar4;
  }
  (this->AllNodesView).ArrayNum = iVar3;
  while( true ) {
    pTVar6 = &this->FragmentsAccess;
    if (uVar5 != 0) {
      pTVar6 = (TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
                *)&(this->FragmentsAccess).Write;
    }
    iVar7 = FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.Elements.
            _8_4_ - FMassFragmentBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.
                    Elements._52_4_;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,(ForAnyElementType *)pTVar6,&(pTVar6->Read).Access.ArrayNum,
                       &(pTVar6->Read).Access.ArrayMax);
    memset((pTVar6->Read).Access.AllocatorInstance.Data + (longlong)iVar3 * 0x10,0,
           (longlong)iVar7 << 4);
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OpIndex <= EMassAccessOperation::MAX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                           ,0x22,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FResourceUsage *)(*pcVar1)();
      return pFVar4;
    }
    pTVar6 = &this->ChunkFragmentsAccess;
    if (uVar5 != 0) {
      pTVar6 = (TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
                *)&(this->ChunkFragmentsAccess).Write;
    }
    iVar7 = FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.
            Elements._8_4_ -
            FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.
            Elements._52_4_;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,(ForAnyElementType *)pTVar6,&(pTVar6->Read).Access.ArrayNum,
                       &(pTVar6->Read).Access.ArrayMax);
    memset((pTVar6->Read).Access.AllocatorInstance.Data + (longlong)iVar3 * 0x10,0,
           (longlong)iVar7 << 4);
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OpIndex <= EMassAccessOperation::MAX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                           ,0x22,L""), bVar2)) break;
    pTVar6 = &this->SharedFragmentsAccess;
    if (uVar5 != 0) {
      pTVar6 = (TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
                *)&(this->SharedFragmentsAccess).Write;
    }
    iVar7 = FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.
            Elements._8_4_ -
            FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.
            Elements._52_4_;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,(ForAnyElementType *)pTVar6,&(pTVar6->Read).Access.ArrayNum,
                       &(pTVar6->Read).Access.ArrayMax);
    memset((pTVar6->Read).Access.AllocatorInstance.Data + (longlong)iVar3 * 0x10,0,
           (longlong)iVar7 << 4);
    if ((2 < uVar5) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("OpIndex <= EMassAccessOperation::MAX",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassProcessorDependencySolver.h"
                           ,0x22,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FResourceUsage *)(*pcVar1)();
      return pFVar4;
    }
    pTVar6 = &this->RequiredSubsystemsAccess;
    if (uVar5 != 0) {
      pTVar6 = (TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
                *)&(this->RequiredSubsystemsAccess).Write;
    }
    iVar7 = FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.
            Elements._8_4_ -
            FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker.StructTypeToIndexSet.
            Elements._52_4_;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,iVar7,(ForAnyElementType *)pTVar6,&(pTVar6->Read).Access.ArrayNum,
                       &(pTVar6->Read).Access.ArrayMax);
    memset((pTVar6->Read).Access.AllocatorInstance.Data + (longlong)iVar3 * 0x10,0,
           (longlong)iVar7 << 4);
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return this;
    }
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FResourceUsage *)(*pcVar1)();
  return pFVar4;
}

// CanAccessRequirements @ 1472010f0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassProcessorDependencySolver::FResourceUsage::CanAccessRequirements
          (FResourceUsage *this,FMassExecutionRequirements *param_1,
          TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  bool bVar1;
  TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess> local_78;
  TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess> local_58;
  TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess> local_38;
  
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                    ((FConstBitSetContainer *)&(param_1->Fragments).Write,
                     (TBitArray<FDefaultBitArrayAllocator> *)&(this->Requirements).Fragments.Write);
  if (((bVar1) ||
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&(param_1->Fragments).Write,
                          (TBitArray<FDefaultBitArrayAllocator> *)this), bVar1)) ||
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                        ((FConstBitSetContainer *)param_1,
                         (TBitArray<FDefaultBitArrayAllocator> *)
                         &(this->Requirements).Fragments.Write), bVar1)) {
    FResourceAccess::FResourceAccess(&local_78.Read,&(this->FragmentsAccess).Read);
    FResourceAccess::FResourceAccess(&local_78.Write,&(this->FragmentsAccess).Write);
    bVar1 = HasArchetypeConflict(this,&local_78,param_2);
    if (bVar1) {
      return false;
    }
  }
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                    ((FConstBitSetContainer *)&(param_1->ChunkFragments).Write,
                     (TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->Requirements).ChunkFragments.Write);
  if (((bVar1) ||
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&(param_1->ChunkFragments).Write,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this->Requirements).ChunkFragments), bVar1)) ||
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                        ((FConstBitSetContainer *)&param_1->ChunkFragments,
                         (TBitArray<FDefaultBitArrayAllocator> *)
                         &(this->Requirements).ChunkFragments.Write), bVar1)) {
    FResourceAccess::FResourceAccess(&local_58.Read,&(this->ChunkFragmentsAccess).Read);
    FResourceAccess::FResourceAccess(&local_58.Write,&(this->ChunkFragmentsAccess).Write);
    bVar1 = HasArchetypeConflict(this,&local_58,param_2);
    if (bVar1) {
      return false;
    }
  }
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                    ((FConstBitSetContainer *)&(param_1->SharedFragments).Write,
                     (TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->Requirements).SharedFragments.Write);
  if (((bVar1) ||
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&(param_1->SharedFragments).Write,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this->Requirements).SharedFragments), bVar1)) ||
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                        ((FConstBitSetContainer *)&param_1->SharedFragments,
                         (TBitArray<FDefaultBitArrayAllocator> *)
                         &(this->Requirements).SharedFragments.Write), bVar1)) {
    FResourceAccess::FResourceAccess(&local_38.Read,&(this->SharedFragmentsAccess).Read);
    FResourceAccess::FResourceAccess(&local_38.Write,&(this->SharedFragmentsAccess).Write);
    bVar1 = HasArchetypeConflict(this,&local_38,param_2);
    if (bVar1) {
      return false;
    }
  }
  bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                    ((FConstBitSetContainer *)&(param_1->RequiredSubsystems).Write,
                     (TBitArray<FDefaultBitArrayAllocator> *)
                     &(this->Requirements).RequiredSubsystems.Write);
  if (((!bVar1) &&
      (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                         ((FConstBitSetContainer *)&(param_1->RequiredSubsystems).Write,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this->Requirements).RequiredSubsystems), !bVar1)) &&
     (bVar1 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                        ((FConstBitSetContainer *)&param_1->RequiredSubsystems,
                         (TBitArray<FDefaultBitArrayAllocator> *)
                         &(this->Requirements).RequiredSubsystems.Write), !bVar1)) {
    return true;
  }
  return false;
}

// HasArchetypeConflict @ 14722a990

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassProcessorDependencySolver::FResourceUsage::HasArchetypeConflict
          (FResourceUsage *this,
          TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
          *param_1,TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  FNode *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess> *pTVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint *puVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res20 [8];
  undefined1 local_68 [4];
  uint local_64;
  uint local_60;
  TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess> *local_58;
  TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess> *local_50;
  FScriptContainerElement *local_48;
  
  local_58 = (TMassExecutionAccess<FMassProcessorDependencySolver::FResourceUsage::FResourceAccess>
              *)&param_1->Write;
  local_64 = 0;
  do {
    local_50 = param_1;
    if (local_64 != 0) {
      local_50 = local_58;
    }
    local_60 = (local_50->Read).Access.ArrayNum;
    uVar13 = (ulonglong)(int)local_60;
    pFVar17 = (local_50->Read).Access.AllocatorInstance.Data;
    local_48 = pFVar17 + uVar13 * 0x10;
    while( true ) {
      pFVar14 = local_48;
      if ((local_50->Read).Access.ArrayNum != (int)uVar13) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      pTVar8 = local_58;
      if (pFVar17 == pFVar14) break;
      puVar15 = *(uint **)pFVar17;
      iVar2 = *(int *)(pFVar17 + 8);
      puVar1 = puVar15 + iVar2;
      while( true ) {
        if (*(int *)(pFVar17 + 8) != iVar2) {
          local_68[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_68);
        }
        if (puVar15 == puVar1) break;
        uVar3 = *puVar15;
        uVar11 = 0;
        if ((int)uVar3 < (this->AllNodesView).ArrayNum) {
          uVar11 = ~uVar3 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pFVar5 = (this->AllNodesView).DataPtr;
        iVar4 = pFVar5[(int)uVar3].ValidArchetypes.ArrayNum;
        pFVar14 = pFVar5[(int)uVar3].ValidArchetypes.AllocatorInstance.Data;
        if ((iVar4 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        pTVar8 = local_58;
        pFVar16 = pFVar14 + (longlong)iVar4 * 0x10;
        if (pFVar14 != pFVar16) {
          pFVar6 = (param_2->AllocatorInstance).Data;
          do {
            if (pFVar6 != pFVar6 + (longlong)param_2->ArrayNum * 0x10) {
              pFVar12 = pFVar6;
              do {
                if (*(longlong *)pFVar12 == *(longlong *)pFVar14) {
                  DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
                            ((FResourceUsers *)(local_58->Read).Access.AllocatorInstance.Data,
                             (local_58->Read).Access.ArrayNum);
                  pFVar17 = (pTVar8->Read).Access.AllocatorInstance.Data;
                  if (pFVar17 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar17);
                  }
                  DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
                            ((FResourceUsers *)(param_1->Read).Access.AllocatorInstance.Data,
                             (param_1->Read).Access.ArrayNum);
                  pFVar17 = (param_1->Read).Access.AllocatorInstance.Data;
                  if (pFVar17 != (FScriptContainerElement *)0x0) {
                    FMemory::Free(pFVar17);
                  }
                  return true;
                }
                pFVar12 = pFVar12 + 0x10;
              } while (pFVar12 != pFVar6 + (longlong)param_2->ArrayNum * 0x10);
            }
            pFVar14 = pFVar14 + 0x10;
          } while (pFVar14 != pFVar16);
        }
        puVar15 = puVar15 + 1;
      }
      pFVar17 = pFVar17 + 0x10;
      uVar13 = (ulonglong)local_60;
    }
    local_64 = local_64 + 1;
    if (1 < local_64) {
      DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
                ((FResourceUsers *)(local_58->Read).Access.AllocatorInstance.Data,
                 (local_58->Read).Access.ArrayNum);
      pFVar17 = (pTVar8->Read).Access.AllocatorInstance.Data;
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar17);
      }
      DestructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
                ((FResourceUsers *)(param_1->Read).Access.AllocatorInstance.Data,
                 (param_1->Read).Access.ArrayNum);
      pFVar17 = (param_1->Read).Access.AllocatorInstance.Data;
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar17);
      }
      return false;
    }
  } while( true );
}

// SubmitNode @ 147251240

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
FMassProcessorDependencySolver::FResourceUsage::SubmitNode
          (FResourceUsage *this,int param_1,FNode *param_2)

{
  HandleElementType<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (this,&this->FragmentsAccess,&(param_2->Requirements).Fragments,param_2,param_1);
  HandleElementType<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (this,&this->ChunkFragmentsAccess,&(param_2->Requirements).ChunkFragments,param_2,
             param_1);
  HandleElementType<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
            (this,&this->SharedFragmentsAccess,&(param_2->Requirements).SharedFragments,param_2,
             param_1);
  HandleElementType<TStructTypeBitSet<USubsystem,FMassExternalSubsystemBitSetStructTrackerWrapper,UClass>_>
            (this,&this->RequiredSubsystemsAccess,&(param_2->Requirements).RequiredSubsystems,
             param_2,param_1);
  FMassExecutionRequirements::Append(&this->Requirements,&param_2->Requirements);
  return;
}

