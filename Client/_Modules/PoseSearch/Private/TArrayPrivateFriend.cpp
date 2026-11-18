// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 9

// Serialize<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_> @ 14a8dd6d0

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                ((TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar9 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x18;
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2);
              Serialize<int,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 8));
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x18;
              DefaultConstructItems<TTuple<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>_>,int>
                        (pFVar2,1);
              (**(code **)(*(longlong *)param_1 + 0x178))(param_1,pFVar2);
              Serialize<int,TSizedDefaultAllocator<32>_>
                        (param_1,(TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar2 + 8));
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> @ 14a8dd950

FArchive * __cdecl
TArrayPrivateFriend::Serialize<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FPoseHistoryEntry *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x48);
  iVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::PoseSearch::FPoseHistoryEntry,int>
                ((FPoseHistoryEntry *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x48,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x38e39)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar9 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              UE::PoseSearch::operator<<
                        (param_1,(FPoseHistoryEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x48))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<UE::PoseSearch::FPoseHistoryEntry,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x848,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FPoseHistoryEntry *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x48);
              DefaultConstructItems<UE::PoseSearch::FPoseHistoryEntry,int>(pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_> @ 14a8ddba0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_> *param_2)

{
  int *piVar1;
  FPoseMetadata *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar9 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              UE::PoseSearch::operator<<
                        (param_1,(FPoseMetadata *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::PoseSearch::FPoseMetadata,TAlignedHeapAllocator<16>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FPoseMetadata *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<UE::PoseSearch::FPoseMetadata,int>(pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_> @ 14a8dddf0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_> *param_2)

{
  int *piVar1;
  FSearchIndexAsset *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x24);
  iVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (0x24,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x71c72)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar9 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              UE::PoseSearch::operator<<
                        (param_1,(FSearchIndexAsset *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x24))
              ;
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::PoseSearch::FSearchIndexAsset,TAlignedHeapAllocator<16>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                                  (0x424,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FSearchIndexAsset *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x24);
              DefaultConstructItems<UE::PoseSearch::FSearchIndexAsset,int>(pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_> @ 14a917690

FArchive * __cdecl
TArrayPrivateFriend::Serialize<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FArchivedPoseHistory *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x98);
  iVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::PoseSearch::FArchivedPoseHistory,int>
                ((FArchivedPoseHistory *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x98,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x1af29)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              UE::PoseSearch::operator<<
                        (param_1,(FArchivedPoseHistory *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x98));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<UE::PoseSearch::FArchivedPoseHistory,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x898,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FArchivedPoseHistory *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x98);
              DefaultConstructItems<UE::PoseSearch::FArchivedPoseHistory,int>(pFVar10,1);
              UE::PoseSearch::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_> @ 14a9178e0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FPoseSearchQueryTrajectorySample *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 6);
  iVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x40001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              ::operator<<(param_1,(FPoseSearchQueryTrajectorySample *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x40)
                          );
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FPoseSearchQueryTrajectorySample,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x1040,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FPoseSearchQueryTrajectorySample *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x40);
              DefaultConstructItems<FPoseSearchQueryTrajectorySample,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_> @ 14a917b10

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FTraceMotionMatchingStateDatabaseEntry *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x28);
  iVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>
                ((FTraceMotionMatchingStateDatabaseEntry *)(param_2->AllocatorInstance).Data,
                 param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x66667)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar9 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              UE::PoseSearch::operator<<
                        (param_1,(FTraceMotionMatchingStateDatabaseEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x28))
              ;
              uVar9 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar9);
          }
        }
        else {
          TArray<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x828,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FTraceMotionMatchingStateDatabaseEntry *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0x28);
              DefaultConstructItems<UE::PoseSearch::FTraceMotionMatchingStateDatabaseEntry,int>
                        (pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_> @ 14a917d60

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FTraceMotionMatchingStatePoseEntry *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc);
  iVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x155556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar9 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar10 < (int)uVar9) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              UE::PoseSearch::operator<<
                        (param_1,(FTraceMotionMatchingStatePoseEntry *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0xc));
              uVar10 = uVar10 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar10 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,TSizedDefaultAllocator<32>_>::
          Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x40c,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              pFVar2 = (FTraceMotionMatchingStatePoseEntry *)
                       ((param_2->AllocatorInstance).Data + (longlong)iVar6 * 0xc);
              DefaultConstructItems<UE::PoseSearch::FTraceMotionMatchingStatePoseEntry,int>
                        (pFVar2,1);
              UE::PoseSearch::operator<<(param_1,pFVar2);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<UE::PoseSearch::FVPTreeNode,TSizedDefaultAllocator<32>_> @ 14a917fb0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<UE::PoseSearch::FVPTreeNode,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::PoseSearch::FVPTreeNode,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FVPTreeNode *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              UE::PoseSearch::operator<<
                        (param_1,(FVPTreeNode *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<UE::PoseSearch::FVPTreeNode,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FVPTreeNode *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<UE::PoseSearch::FVPTreeNode,int>(pFVar10,1);
              UE::PoseSearch::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

