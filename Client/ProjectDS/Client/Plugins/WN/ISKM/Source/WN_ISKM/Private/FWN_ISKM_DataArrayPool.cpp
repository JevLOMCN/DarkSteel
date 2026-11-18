// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 4

// Acquire @ 14a8421b0

void __thiscall
FWN_ISKM_DataArrayPool<float>::Acquire
          (FWN_ISKM_DataArrayPool<float> *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  
  if (this == (FWN_ISKM_DataArrayPool<float> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar8 = (this->FreedDataArrays).ArrayNum;
  lVar9 = (longlong)iVar8;
  if (iVar8 == 0) goto LAB_14a842599;
  uVar11 = 0xffffffff;
  if (param_2 != -1) {
    uVar10 = 0;
    iVar16 = 0x7fffffff;
    if (0 < iVar8) {
      lVar12 = 0;
      lVar14 = lVar9;
      do {
        uVar6 = 0;
        if ((int)uVar10 < (this->FreedDataArrays).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = *(int *)((this->FreedDataArrays).AllocatorInstance.Data + lVar12 + 0xc);
        iVar7 = iVar8 - param_2;
        if ((param_2 <= iVar8) && (iVar7 < iVar16)) {
          iVar16 = iVar7;
          uVar11 = uVar10;
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x10;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      if (uVar11 == 0xffffffff) {
        lVar14 = 0;
        uVar10 = 0;
        iVar8 = 0x7fffffff;
        do {
          uVar6 = 0;
          if ((int)uVar10 < (this->FreedDataArrays).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar16 = *(int *)((this->FreedDataArrays).AllocatorInstance.Data + lVar14 + 0xc);
          iVar7 = param_2 - iVar16;
          if ((iVar16 < param_2) && (iVar7 < iVar8)) {
            iVar8 = iVar7;
            uVar11 = uVar10;
          }
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 0x10;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (uVar11 == 0xffffffff) goto LAB_14a842433;
      }
      uVar10 = 0;
      if ((int)uVar11 < (this->FreedDataArrays).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar13 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                ((this->FreedDataArrays).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10);
      if (param_1 != pTVar13) {
        pFVar15 = (param_1->AllocatorInstance).Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (param_1->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
        (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        param_1->ArrayNum = pTVar13->ArrayNum;
        param_1->ArrayMax = pTVar13->ArrayMax;
        pTVar13->ArrayNum = 0;
        pTVar13->ArrayMax = 0;
      }
      uVar10 = 0;
      if ((int)uVar11 < (this->FreedDataArrays).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
      RemoveAtSwapImpl(&this->FreedDataArrays,uVar11);
      goto LAB_14a842599;
    }
  }
LAB_14a842433:
  iVar8 = (this->FreedDataArrays).ArrayNum;
  pTVar1 = &this->FreedDataArrays;
  uVar10 = iVar8 - 1;
  uVar11 = 0;
  if ((int)uVar10 < iVar8) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar13 = (TArray<float,TSizedDefaultAllocator<32>_> *)
            ((pTVar1->AllocatorInstance).Data +
            (longlong)(this->FreedDataArrays).ArrayNum * 0x10 + -0x10);
  if (param_1 != pTVar13) {
    pFVar15 = (param_1->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (param_1->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar13->ArrayNum;
    param_1->ArrayMax = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  if (((this->FreedDataArrays).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (longlong)(this->FreedDataArrays).ArrayNum;
  pFVar15 = (pTVar1->AllocatorInstance).Data;
  pvVar3 = *(void **)(pFVar15 + lVar9 * 0x10 + -0x10);
  *(undefined8 *)(pFVar15 + lVar9 * 0x10 + -0x10) = 0;
  *(undefined8 *)(pFVar15 + lVar9 * 0x10 + -8) = 0;
  iVar8 = (this->FreedDataArrays).ArrayNum;
  pFVar15 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  if (*(void **)(pFVar15 + -0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar15 + -0x10));
  }
  iVar8 = (this->FreedDataArrays).ArrayNum - iVar8;
  if (iVar8 != 0) {
    memmove(pFVar15 + -0x10,pFVar15,(longlong)iVar8 << 4);
  }
  piVar2 = &(this->FreedDataArrays).ArrayNum;
  *piVar2 = *piVar2 + -1;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
LAB_14a842599:
  this->NumAllocated = this->NumAllocated + 1;
  if (param_1->ArrayMax < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1->ArrayMax);
  }
  param_1->ArrayNum = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a8425ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Acquire @ 14a8425e0

void __thiscall
FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData>::Acquire
          (FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData> *this,
          TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_> *param_1,int param_2)

{
  TArray<TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_> *pTVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  
  if (this == (FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  iVar8 = (this->FreedDataArrays).ArrayNum;
  lVar9 = (longlong)iVar8;
  if (iVar8 == 0) goto LAB_14a8429c9;
  uVar11 = 0xffffffff;
  if (param_2 != -1) {
    uVar10 = 0;
    iVar16 = 0x7fffffff;
    if (0 < iVar8) {
      lVar12 = 0;
      lVar14 = lVar9;
      do {
        uVar6 = 0;
        if ((int)uVar10 < (this->FreedDataArrays).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = *(int *)((this->FreedDataArrays).AllocatorInstance.Data + lVar12 + 0xc);
        iVar7 = iVar8 - param_2;
        if ((param_2 <= iVar8) && (iVar7 < iVar16)) {
          iVar16 = iVar7;
          uVar11 = uVar10;
        }
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x10;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      if (uVar11 == 0xffffffff) {
        lVar14 = 0;
        uVar10 = 0;
        iVar8 = 0x7fffffff;
        do {
          uVar6 = 0;
          if ((int)uVar10 < (this->FreedDataArrays).ArrayNum) {
            uVar6 = ~uVar10 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar16 = *(int *)((this->FreedDataArrays).AllocatorInstance.Data + lVar14 + 0xc);
          iVar7 = param_2 - iVar16;
          if ((iVar16 < param_2) && (iVar7 < iVar8)) {
            iVar8 = iVar7;
            uVar11 = uVar10;
          }
          uVar10 = uVar10 + 1;
          lVar14 = lVar14 + 0x10;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
        if (uVar11 == 0xffffffff) goto LAB_14a842863;
      }
      uVar10 = 0;
      if ((int)uVar11 < (this->FreedDataArrays).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar13 = (TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_> *)
                ((this->FreedDataArrays).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x10);
      if (param_1 != pTVar13) {
        pFVar15 = (param_1->AllocatorInstance).Data;
        if (pFVar15 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar15);
        }
        (param_1->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
        (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        param_1->ArrayNum = pTVar13->ArrayNum;
        param_1->ArrayMax = pTVar13->ArrayMax;
        pTVar13->ArrayNum = 0;
        pTVar13->ArrayMax = 0;
      }
      uVar10 = 0;
      if ((int)uVar11 < (this->FreedDataArrays).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TArray<TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtSwapImpl(&this->FreedDataArrays,uVar11);
      goto LAB_14a8429c9;
    }
  }
LAB_14a842863:
  iVar8 = (this->FreedDataArrays).ArrayNum;
  pTVar1 = &this->FreedDataArrays;
  uVar10 = iVar8 - 1;
  uVar11 = 0;
  if ((int)uVar10 < iVar8) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar13 = (TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_> *)
            ((pTVar1->AllocatorInstance).Data +
            (longlong)(this->FreedDataArrays).ArrayNum * 0x10 + -0x10);
  if (param_1 != pTVar13) {
    pFVar15 = (param_1->AllocatorInstance).Data;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar15);
    }
    (param_1->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar13->ArrayNum;
    param_1->ArrayMax = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  if (((this->FreedDataArrays).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (longlong)(this->FreedDataArrays).ArrayNum;
  pFVar15 = (pTVar1->AllocatorInstance).Data;
  pvVar3 = *(void **)(pFVar15 + lVar9 * 0x10 + -0x10);
  *(undefined8 *)(pFVar15 + lVar9 * 0x10 + -0x10) = 0;
  *(undefined8 *)(pFVar15 + lVar9 * 0x10 + -8) = 0;
  iVar8 = (this->FreedDataArrays).ArrayNum;
  pFVar15 = (pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
  if (*(void **)(pFVar15 + -0x10) != (void *)0x0) {
    FMemory::Free(*(void **)(pFVar15 + -0x10));
  }
  iVar8 = (this->FreedDataArrays).ArrayNum - iVar8;
  if (iVar8 != 0) {
    memmove(pFVar15 + -0x10,pFVar15,(longlong)iVar8 << 4);
  }
  piVar2 = &(this->FreedDataArrays).ArrayNum;
  *piVar2 = *piVar2 + -1;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
LAB_14a8429c9:
  this->NumAllocated = this->NumAllocated + 1;
  if (param_1->ArrayMax < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1->ArrayMax);
  }
  param_1->ArrayNum = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a8429ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Empty @ 14a847d20

void __thiscall FWN_ISKM_DataArrayPool<float>::Empty(FWN_ISKM_DataArrayPool<float> *this)

{
  int *piVar1;
  int iVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  if (this == (FWN_ISKM_DataArrayPool<float> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (this->NumAllocated != 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5386124812953321657>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                       ,0xb9,"NumAllocated == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &(this->FreedDataArrays).ArrayMax;
  pTVar3 = (TArray<float,TSizedDefaultAllocator<32>_> *)
           (this->FreedDataArrays).AllocatorInstance.Data;
  iVar2 = (this->FreedDataArrays).ArrayNum;
  if ((this->FreedDataArrays).ArrayMax < 0) {
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->FreedDataArrays).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->FreedDataArrays).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<float,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->FreedDataArrays).ArrayNum = 0;
  }
  this->NumAllocated = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a847de2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// Empty @ 14a847e00

void __thiscall
FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData>::Empty
          (FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData> *this)

{
  int *piVar1;
  int iVar2;
  TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  if (this == (FWN_ISKM_DataArrayPool<FWN_ISKM_InstanceData> *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if (this->NumAllocated != 0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5386124812953321657>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                       ,0xb9,"NumAllocated == 0");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar1 = &(this->FreedDataArrays).ArrayMax;
  pTVar3 = (TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_> *)
           (this->FreedDataArrays).AllocatorInstance.Data;
  iVar2 = (this->FreedDataArrays).ArrayNum;
  if ((this->FreedDataArrays).ArrayMax < 0) {
    DestructItems<TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->FreedDataArrays).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->FreedDataArrays).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<FWN_ISKM_InstanceData,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->FreedDataArrays).ArrayNum = 0;
  }
  this->NumAllocated = 0;
                    /* WARNING: Could not recover jumptable at 0x00014a847ec2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

