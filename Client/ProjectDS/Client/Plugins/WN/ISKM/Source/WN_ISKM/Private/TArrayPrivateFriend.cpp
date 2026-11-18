// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 2

// Serialize<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_> @ 14a83d9f0

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  void *pvVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,1,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar10 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
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
              FVar9 = param_2->AllocatorInstance;
              if (((ulonglong)FVar9 & 1) != 0) {
                FVar9 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar9 >> 0x18));
              }
              (**(code **)(*(longlong *)param_1 + 0x188))
                        (param_1,(longlong)FVar9 + (longlong)(int)uVar11 * 8,8);
              uVar10 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar10);
          }
        }
        else {
          TArray<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,TMemoryImageAllocator<0>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x108,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar9 = param_2->AllocatorInstance;
              if (((ulonglong)FVar9 & 1) != 0) {
                FVar9 = (ForAnyElementType)
                        ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                        ((longlong)FVar9 >> 0x18));
              }
              pvVar2 = (void *)((longlong)FVar9 + (longlong)iVar6 * 8);
              DefaultConstructItems<FWN_ISKM_BoneWeightsBuffer::FWN_BoneWeights,int>(pvVar2,1);
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvVar2,8);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)local_res8[0]);
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

// Serialize<FWN_Matrix3x4H,TMemoryImageAllocator<0>_> @ 14a83dc60

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  void *pvVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  int iVar12;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar12 = 0;
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
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar9 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar9) {
                uVar7 = ~uVar11 >> 0x1f;
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
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              (**(code **)(*(longlong *)param_1 + 0x188))
                        (param_1,(longlong)FVar10 + (longlong)(int)uVar11 * 0x18,0x18);
              uVar9 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar9);
          }
        }
        else {
          TArray<FWN_Matrix3x4H,TMemoryImageAllocator<0>_>::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              pvVar2 = (void *)((longlong)FVar10 + (longlong)iVar6 * 0x18);
              DefaultConstructItems<FWN_Matrix3x4H,int>(pvVar2,1);
              (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pvVar2,0x18);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)local_res8[0]);
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

