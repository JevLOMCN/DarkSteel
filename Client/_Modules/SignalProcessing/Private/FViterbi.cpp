// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// Decode @ 1445227f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TArray<int,TSizedDefaultAllocator<32>_> * __cdecl
Audio::FViterbi::Decode
          (TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          IViterbiObservations *param_1,IViterbiInitialProbability *param_2,
          IViterbiTransitionProbability *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint local_f8;
  undefined4 local_f4;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  uint local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TArray<float,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  TArray<float,TSizedDefaultAllocator<32>_> local_b0;
  FScriptContainerElement *local_a0;
  longlong local_98;
  TArray<float,TSizedDefaultAllocator<32>_> local_90;
  FScriptContainerElement *local_78;
  
  uVar19 = 0;
  iVar7 = (**(code **)((longlong)*param_1 + 8))(param_1);
  lVar15 = (longlong)iVar7;
  local_e0 = (**(code **)((longlong)*param_1 + 0x10))(param_1);
  if ((iVar7 < 1) || ((int)local_e0 < 1)) {
    (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar7,&local_d8.AllocatorInstance,&local_d8.ArrayNum,&local_d8.ArrayMax);
  memset(local_d8.AllocatorInstance.Data + (longlong)iVar8 * 4,0,lVar15 << 2);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_b0,iVar7,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_c8,iVar7,Default);
  TArray<float,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_90,iVar7,Default);
  uVar22 = uVar19;
  if (0 < iVar7) {
    do {
      uVar17 = (uint)uVar19;
      pcVar4 = *(code **)((longlong)*param_2 + 8);
      fVar25 = (float)(**(code **)((longlong)*param_1 + 0x18))(param_1,0,uVar19);
      fVar26 = (float)(*pcVar4)(param_2,uVar19);
      uVar14 = 0;
      if ((int)uVar17 < local_c8.ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      uVar19 = (ulonglong)(uVar17 + 1);
      *(float *)(local_c8.AllocatorInstance.Data + uVar22 * 4) = fVar25 + fVar26;
      uVar22 = uVar22 + 1;
    } while ((longlong)uVar22 < lVar15);
  }
  local_f8 = 1;
  if (1 < (int)local_e0) {
    do {
      iVar7 = 0;
      local_a0 = local_c8.AllocatorInstance.Data;
      local_b8 = local_b0.AllocatorInstance.Data;
      if ((local_f8 & 1) != 0) {
        local_a0 = local_b0.AllocatorInstance.Data;
        local_b8 = local_c8.AllocatorInstance.Data;
      }
      local_78 = local_d8.AllocatorInstance.Data;
      local_98 = 0;
      if (0 < lVar15) {
        do {
          lVar23 = local_98;
          pFVar18 = local_b8;
          iVar12 = 0;
          fVar26 = (float)(**(code **)((longlong)*param_1 + 0x18))(param_1,local_f8,iVar7);
          fVar25 = *(float *)pFVar18;
          fVar27 = (float)(**(code **)((longlong)*param_3 + 8))(param_3,local_f8,0);
          pFVar18 = local_b8;
          iVar8 = 0;
          iVar21 = 1;
          lVar24 = 1;
          fVar25 = fVar27 + fVar25 + fVar26;
          if (1 < lVar15) {
            do {
              fVar27 = (float)(**(code **)((longlong)*param_3 + 8))(param_3,local_f8,iVar21);
              fVar27 = fVar27 + *(float *)(pFVar18 + lVar24 * 4) + fVar26;
              iVar8 = iVar21;
              if (fVar27 <= fVar25) {
                iVar8 = iVar12;
                fVar27 = fVar25;
              }
              fVar25 = fVar27;
              iVar21 = iVar21 + 1;
              lVar24 = lVar24 + 1;
              lVar23 = local_98;
              iVar12 = iVar8;
            } while (lVar24 < lVar15);
          }
          iVar7 = iVar7 + 1;
          *(float *)(local_a0 + lVar23 * 4) = fVar25;
          *(int *)(local_78 + lVar23 * 4) = iVar8;
          local_98 = lVar23 + 1;
        } while (local_98 < lVar15);
      }
      if (((local_f0.Data <= &local_d8) &&
          (&local_d8 <
           (TArray<int,TSizedDefaultAllocator<32>_> *)
           (local_f0.Data + (longlong)local_e8._4_4_ * 0x10))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar7 = (int)local_e8;
      if ((int)local_e8 == local_e8._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_f0,(int *)((longlong)&local_e8 + 4));
      }
      FVar20.Data = local_d8.AllocatorInstance.Data;
      pFVar18 = local_f0.Data + (longlong)iVar7 * 0x10;
      local_e8 = CONCAT44(local_e8._4_4_,iVar7 + 1);
      *(FScriptContainerElement **)&pFVar18->field_0x0 = (FScriptContainerElement *)0x0;
      lVar23 = (longlong)local_d8.ArrayNum;
      *(int *)(pFVar18 + 8) = local_d8.ArrayNum;
      if (local_d8.ArrayNum == 0) {
        *(int *)(pFVar18 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_d8.ArrayNum,0,(ForAnyElementType *)pFVar18,local_d8.ArrayNum,
                   (int *)(pFVar18 + 0xc));
        memcpy(*(FScriptContainerElement **)&pFVar18->field_0x0,FVar20.Data,lVar23 << 2);
      }
      local_f8 = local_f8 + 1;
    } while ((int)local_f8 < (int)local_e0);
  }
  uVar14 = local_e0;
  uVar19 = 0;
  uVar22 = 1;
  uVar17 = 0;
  FVar20.Data = local_b0.AllocatorInstance.Data;
  if ((local_e0 & 1) != 0) {
    FVar20.Data = local_c8.AllocatorInstance.Data;
  }
  fVar25 = *(float *)FVar20.Data;
  uVar13 = uVar17;
  if (1 < lVar15) {
    lVar23 = 1;
    uVar16 = uVar19;
    if (4 < lVar15) {
      uVar10 = 3;
      pFVar18 = FVar20.Data + 0xc;
      lVar24 = (lVar15 - 5U >> 2) + 1;
      lVar23 = lVar24 * 4 + 1;
      do {
        fVar26 = *(float *)(pFVar18 + -8);
        fVar27 = fVar25;
        if (fVar25 < fVar26) {
          fVar27 = fVar26;
        }
        uVar5 = uVar22;
        if (fVar26 <= fVar25) {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        if (fVar27 < *(float *)(pFVar18 + -4)) {
          uVar16 = (ulonglong)(uVar10 - 1);
          fVar27 = *(float *)(pFVar18 + -4);
        }
        if (fVar27 < *(float *)pFVar18) {
          uVar16 = (ulonglong)uVar10;
          fVar27 = *(float *)pFVar18;
        }
        fVar25 = fVar27;
        if (fVar27 < *(float *)(pFVar18 + 4)) {
          uVar16 = (ulonglong)(uVar10 + 1);
          fVar25 = *(float *)(pFVar18 + 4);
        }
        uVar13 = (uint)uVar16;
        uVar22 = (ulonglong)((int)uVar22 + 4);
        uVar10 = uVar10 + 4;
        pFVar18 = pFVar18 + 0x10;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      if (lVar15 <= lVar23) goto LAB_144522cd7;
    }
    do {
      uVar5 = uVar22;
      fVar26 = *(float *)(FVar20.Data + lVar23 * 4);
      if (*(float *)(FVar20.Data + lVar23 * 4) <= fVar25) {
        uVar5 = uVar16;
        fVar26 = fVar25;
      }
      fVar25 = fVar26;
      uVar16 = uVar5;
      uVar13 = (uint)uVar16;
      uVar22 = (ulonglong)((int)uVar22 + 1);
      lVar23 = lVar23 + 1;
    } while (lVar23 < lVar15);
  }
LAB_144522cd7:
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  piVar2 = &__return_storage_ptr__->ArrayNum;
  *piVar1 = 0;
  iVar7 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
  *piVar2 = iVar7 + 1;
  *(uint *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) = uVar13;
  uVar14 = uVar14 - 2;
  if (-1 < (int)uVar14) {
    lVar15 = (longlong)(int)uVar14 << 4;
    do {
      uVar13 = uVar17;
      if ((int)uVar14 < (int)local_e8) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      FVar20.Data = local_f0.Data;
      uVar10 = *piVar2 - 1;
      uVar13 = uVar17;
      if ((int)uVar10 < *piVar2) {
        uVar13 = ~uVar10 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      uVar13 = *(uint *)((__return_storage_ptr__->AllocatorInstance).Data +
                        (longlong)*piVar2 * 4 + -4);
      uVar10 = uVar17;
      if ((int)uVar13 < *(int *)(FVar20.Data + lVar15 + 8)) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      local_f4 = *(undefined4 *)(*(longlong *)(FVar20.Data + lVar15) + (longlong)(int)uVar13 * 4);
      pFVar18 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar18 <= (FScriptContainerElement *)&local_f4) &&
          ((FScriptContainerElement *)&local_f4 < pFVar18 + (longlong)*piVar1 * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar7 = *piVar2;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      *piVar2 = iVar7 + 1;
      lVar15 = lVar15 + -0x10;
      uVar14 = uVar14 - 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 4) =
           local_f4;
    } while (-1 < (int)uVar14);
  }
  pFVar18 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar7 = __return_storage_ptr__->ArrayNum / 2;
  if (0 < iVar7) {
    pFVar11 = pFVar18 + (longlong)(__return_storage_ptr__->ArrayNum + -1) * 4;
    do {
      uVar3 = *(undefined4 *)(pFVar18 + uVar19 * 4);
      *(undefined4 *)(pFVar18 + uVar19 * 4) = *(undefined4 *)pFVar11;
      uVar19 = uVar19 + 1;
      *(undefined4 *)pFVar11 = uVar3;
      pFVar11 = pFVar11 + -4;
    } while ((longlong)uVar19 < (longlong)iVar7);
  }
  if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.AllocatorInstance.Data);
  }
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)local_f0.Data,(int)local_e8);
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_f0.Data !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_f0.Data);
  }
  return __return_storage_ptr__;
}

