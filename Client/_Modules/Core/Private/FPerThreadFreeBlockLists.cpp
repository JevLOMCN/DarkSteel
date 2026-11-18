// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 8

// ClearTLS @ 14168b170

void __cdecl TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists::ClearTLS(void)

{
  atomic<unsigned___int64> *this;
  atomic<unsigned___int64> aVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
  *pTVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong *local_48 [2];
  
  if ((FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(BinnedTlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0x230,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar6 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (plVar6 != (longlong *)0x0) {
    uVar9 = ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) &
            (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity + 0x67f;
    LOCK();
    FMallocBinnedCommonBase::TLSMemory =
         (atomic<__int64>)((longlong)FMallocBinnedCommonBase::TLSMemory - uVar9);
    UNLOCK();
    local_48[0] = plVar6;
    lpCriticalSection = (LPCRITICAL_SECTION)GetFreeBlockListsRegistrationMutex();
    EnterCriticalSection(lpCriticalSection);
    pTVar7 = GetRegisteredFreeBlockLists();
    pFVar3 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)pTVar7->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = pTVar7->ArrayNum;
    if (iVar2 != 0) {
      iVar13 = 0;
      pFVar3 = (pTVar7->AllocatorInstance).Data;
      bVar5 = *(longlong **)pFVar3 != local_48[0];
      lVar12 = 0;
      plVar8 = local_48[0];
      iVar10 = 0;
      do {
        iVar11 = iVar10;
        do {
          lVar12 = lVar12 + 1;
          iVar11 = iVar11 + 1;
          if (iVar2 <= lVar12) break;
        } while (bVar5 == (*(longlong **)(pFVar3 + lVar12 * 8) != plVar8));
        if (bVar5 != false) {
          if (iVar13 != iVar10) {
            memmove(pFVar3 + (longlong)iVar13 * 8,pFVar3 + (longlong)iVar10 * 8,
                    (longlong)(iVar11 - iVar10) << 3);
            plVar8 = local_48[0];
          }
          iVar13 = iVar13 + (iVar11 - iVar10);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar10 = iVar11;
      } while (lVar12 < iVar2);
      pTVar7->ArrayNum = iVar13;
    }
    LOCK();
    FMallocBinnedCommonBase::ConsolidatedMemory =
         (atomic<__int64>)((longlong)FMallocBinnedCommonBase::ConsolidatedMemory + *local_48[0]);
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
    this = (atomic<unsigned___int64> *)(plVar6 + 1);
    *(undefined1 *)(plVar6 + 0xcf) = 0;
    LOCK();
    aVar1 = *this;
    *this = (atomic<unsigned___int64>)((longlong)*this + -1);
    UNLOCK();
    if ((((ulonglong)aVar1 & 0xfffffffffffffffc) != 0) && (((ulonglong)aVar1 & 2) == 0)) {
      UE::FWordMutex::UnlockSlow((FWordMutex *)this,(ulong64)aVar1);
    }
    FWindowsPlatformMemory::BinnedFreeToOS
              (plVar6,((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) + uVar9 &
                      ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1));
  }
                    /* WARNING: Could not recover jumptable at 0x00014168b3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(FMallocBinnedCommonBase::BinnedTlsSlot,(LPVOID)0x0);
  return;
}

// ClearTLS @ 14168b410

void __cdecl TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists::ClearTLS(void)

{
  atomic<unsigned___int64> *this;
  atomic<unsigned___int64> aVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FLowLevelMemTracker *this_00;
  ulong64 uVar8;
  ulong64 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  longlong *local_58;
  longlong *local_50 [3];
  
  if ((FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(BinnedTlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0x230,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  plVar6 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (plVar6 != (longlong *)0x0) {
    uVar11 = ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) &
             (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity + 0x9bf;
    LOCK();
    FMallocBinnedCommonBase::TLSMemory =
         (atomic<__int64>)((longlong)FMallocBinnedCommonBase::TLSMemory - uVar11);
    UNLOCK();
    local_58 = plVar6;
    lpCriticalSection = (LPCRITICAL_SECTION)GetFreeBlockListsRegistrationMutex();
    EnterCriticalSection(lpCriticalSection);
    pTVar7 = GetRegisteredFreeBlockLists();
    pFVar3 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 < pFVar3 + (longlong)pTVar7->ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = pTVar7->ArrayNum;
    if (iVar2 != 0) {
      iVar15 = 0;
      pFVar3 = (pTVar7->AllocatorInstance).Data;
      bVar5 = *(longlong **)pFVar3 != local_58;
      lVar14 = 0;
      plVar10 = local_58;
      iVar12 = 0;
      do {
        iVar13 = iVar12;
        do {
          lVar14 = lVar14 + 1;
          iVar13 = iVar13 + 1;
          if (iVar2 <= lVar14) break;
        } while (bVar5 == (*(longlong **)(pFVar3 + lVar14 * 8) != plVar10));
        if (bVar5 != false) {
          if (iVar15 != iVar12) {
            memmove(pFVar3 + (longlong)iVar15 * 8,pFVar3 + (longlong)iVar12 * 8,
                    (longlong)(iVar13 - iVar12) << 3);
            plVar10 = local_58;
          }
          iVar15 = iVar15 + (iVar13 - iVar12);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar12 = iVar13;
      } while (lVar14 < iVar2);
      pTVar7->ArrayNum = iVar15;
    }
    LOCK();
    FMallocBinnedCommonBase::ConsolidatedMemory =
         (atomic<__int64>)((longlong)FMallocBinnedCommonBase::ConsolidatedMemory + *local_58);
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
    this = (atomic<unsigned___int64> *)(plVar6 + 1);
    *(undefined1 *)(plVar6 + 0x137) = 0;
    LOCK();
    aVar1 = *this;
    *this = (atomic<unsigned___int64>)((longlong)*this + -1);
    UNLOCK();
    if ((((ulonglong)aVar1 & 0xfffffffffffffffc) != 0) && (((ulonglong)aVar1 & 2) == 0)) {
      UE::FWordMutex::UnlockSlow((FWordMutex *)this,(ulong64)aVar1);
    }
    if ((FLowLevelMemTracker::EnabledState != Disabled) &&
       (this_00 = FLowLevelMemTracker::Get(), FLowLevelMemTracker::EnabledState != Disabled)) {
      FLowLevelMemTracker::BootstrapInitialise(this_00);
      UE::LLMPrivate::FLLMTracker::TrackFree(this_00->Trackers[0],plVar6,None,true);
    }
    uVar8 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    uVar9 = FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::GetVirtualSizeAlignment();
    local_50[1]._0_4_ = (undefined4)(((uVar8 - 1) + uVar11 & ~(uVar8 - 1)) / uVar9);
    local_50[0] = plVar6;
    FWindowsPlatformMemory::FPlatformVirtualMemoryBlock::FreeVirtual
              ((FPlatformVirtualMemoryBlock *)local_50);
  }
                    /* WARNING: Could not recover jumptable at 0x00014168b6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TlsSetValue(FMallocBinnedCommonBase::BinnedTlsSlot,(LPVOID)0x0);
  return;
}

// ClearTLS @ 14168b710

long64 __cdecl FMallocBinnedGPU::FPerThreadFreeBlockLists::ClearTLS(FMallocBinnedGPU *param_1)

{
  DWORD dwTlsIndex;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar12;
  ulonglong *local_48 [2];
  ulonglong uVar11;
  
  dwTlsIndex = param_1->BinnedGPUTlsSlot;
  if ((dwTlsIndex == 0xffffffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(BinnedGPUTlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                         ,0x4ac,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    lVar5 = (*pcVar3)();
    return lVar5;
  }
  uVar8 = 0;
  puVar6 = TlsGetValue(dwTlsIndex);
  if (puVar6 != (ulonglong *)0x0) {
    param_1->BinnedGPUTLSMemory = param_1->BinnedGPUTLSMemory + -0x18;
    local_48[0] = puVar6;
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1->FreeBlockListsRegistrationMutex);
    pFVar2 = (param_1->RegisteredFreeBlockLists).AllocatorInstance.Data;
    if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 <
         pFVar2 + (longlong)(param_1->RegisteredFreeBlockLists).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      lVar5 = (*pcVar3)();
      return lVar5;
    }
    iVar1 = (param_1->RegisteredFreeBlockLists).ArrayNum;
    puVar6 = local_48[0];
    if (iVar1 != 0) {
      pFVar2 = (param_1->RegisteredFreeBlockLists).AllocatorInstance.Data;
      bVar4 = *(ulonglong **)pFVar2 != local_48[0];
      uVar11 = uVar8;
      uVar12 = uVar8;
      do {
        uVar9 = (uint)uVar11;
        uVar10 = uVar9;
        do {
          uVar12 = uVar12 + 1;
          uVar10 = uVar10 + 1;
          uVar11 = (ulonglong)uVar10;
          if ((longlong)iVar1 <= (longlong)uVar12) break;
        } while (bVar4 == (*(ulonglong **)(pFVar2 + uVar12 * 8) != puVar6));
        if (bVar4 != false) {
          uVar7 = (uint)uVar8;
          if (uVar7 != uVar9) {
            memmove(pFVar2 + (longlong)(int)uVar7 * 8,pFVar2 + (longlong)(int)uVar9 * 8,
                    (longlong)(int)(uVar10 - uVar9) << 3);
            puVar6 = local_48[0];
          }
          uVar8 = (ulonglong)(uVar7 + (uVar10 - uVar9));
        }
        bVar4 = (bool)(bVar4 ^ 1);
      } while ((longlong)uVar12 < (longlong)iVar1);
      (param_1->RegisteredFreeBlockLists).ArrayNum = (int)uVar8;
    }
    uVar8 = *puVar6;
    LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->FreeBlockListsRegistrationMutex);
  }
  TlsSetValue(dwTlsIndex,(LPVOID)0x0);
  return uVar8;
}

// ObtainRecycledPartial @ 1416b4c50

bool __thiscall
FMallocBinnedGPU::FPerThreadFreeBlockLists::ObtainRecycledPartial
          (FPerThreadFreeBlockLists *this,FArenaParams *param_1,FGlobalRecycler *param_2,
          uint param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  
  uVar11 = ~param_3 >> 0x1f;
  uVar8 = 0;
  if ((int)param_3 < (this->FreeLists).ArrayNum) {
    uVar8 = uVar11;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  uVar7 = 0;
  pFVar10 = (this->FreeLists).AllocatorInstance.Data + (longlong)(int)param_3 * 0x20;
  if (*(longlong *)pFVar10 != 0) {
    return true;
  }
  *(undefined4 *)(pFVar10 + 8) = 0;
  bVar2 = param_1->MaxGlobalBundles;
  if (bVar2 != 0) {
    do {
      if (7 < (uint)uVar7) break;
      uVar8 = 0;
      if ((int)param_3 < (param_2->Bundles).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      lVar1 = (uVar7 + (longlong)(int)param_3 * 8) * 8;
      lVar3 = *(longlong *)((param_2->Bundles).AllocatorInstance.Data + lVar1);
      if (lVar3 != 0) {
        uVar8 = 0;
        if ((int)param_3 < (param_2->Bundles).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pFVar9 = (param_2->Bundles).AllocatorInstance.Data + lVar1;
        if (((ulonglong)pFVar9 & 7) != 0) {
          FWindowsPlatformAtomics::HandleAtomicsFailure
                    (
                    L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes"
                    );
        }
        LOCK();
        lVar1 = *(longlong *)pFVar9;
        if (lVar3 == lVar1) {
          *(longlong *)pFVar9 = 0;
        }
        UNLOCK();
        if (lVar3 == lVar1) {
          *(longlong *)pFVar10 = lVar3;
          *(undefined4 *)(pFVar10 + 8) = *(undefined4 *)(lVar3 + 8);
          *(undefined8 *)(lVar3 + 8) = 0;
          return true;
        }
      }
      uVar8 = (uint)uVar7 + 1;
      uVar7 = (ulonglong)uVar8;
    } while (uVar8 < bVar2);
  }
  *(longlong *)pFVar10 = 0;
  return false;
}

// RecycleFullBundle @ 1416bafc0

FBundleNode * __thiscall
FMallocBinnedGPU::FPerThreadFreeBlockLists::RecycleFullBundle
          (FPerThreadFreeBlockLists *this,FArenaParams *param_1,FGlobalRecycler *param_2,
          uint param_3)

{
  longlong lVar1;
  byte bVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  FBundleNode *pFVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  
  lVar12 = (longlong)(int)param_3;
  uVar10 = ~param_3 >> 0x1f;
  uVar8 = 0;
  if ((int)param_3 < (this->FreeLists).ArrayNum) {
    uVar8 = uVar10;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FBundleNode *)(*pcVar5)();
    return pFVar7;
  }
  pFVar7 = (FBundleNode *)0x0;
  pFVar3 = (this->FreeLists).AllocatorInstance.Data;
  if (*(longlong *)(pFVar3 + lVar12 * 0x20 + 0x10) != 0) {
    uVar9 = 0;
    *(undefined4 *)(*(longlong *)(pFVar3 + lVar12 * 0x20 + 0x10) + 8) =
         *(undefined4 *)(pFVar3 + lVar12 * 0x20 + 0x18);
    lVar4 = *(longlong *)(pFVar3 + lVar12 * 0x20 + 0x10);
    bVar2 = param_1->MaxGlobalBundles;
    if (bVar2 != 0) {
      do {
        if (7 < (uint)uVar9) break;
        uVar8 = 0;
        if ((int)param_3 < (param_2->Bundles).ArrayNum) {
          uVar8 = uVar10;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FBundleNode *)(*pcVar5)();
          return pFVar7;
        }
        lVar1 = (uVar9 + lVar12 * 8) * 8;
        if (*(longlong *)((param_2->Bundles).AllocatorInstance.Data + lVar1) == 0) {
          uVar8 = 0;
          if ((int)param_3 < (param_2->Bundles).ArrayNum) {
            uVar8 = uVar10;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            pFVar7 = (FBundleNode *)(*pcVar5)();
            return pFVar7;
          }
          pFVar11 = (param_2->Bundles).AllocatorInstance.Data + lVar1;
          if (((ulonglong)pFVar11 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchangePointer requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          lVar1 = *(longlong *)pFVar11;
          if (lVar1 == 0) {
            *(longlong *)pFVar11 = lVar4;
          }
          UNLOCK();
          if (lVar1 == 0) goto LAB_1416bb154;
        }
        uVar8 = (uint)uVar9 + 1;
        uVar9 = (ulonglong)uVar8;
      } while (uVar8 < bVar2);
    }
    pFVar7 = *(FBundleNode **)(pFVar3 + lVar12 * 0x20 + 0x10);
    (pFVar7->field1_0x8).NextBundle = (FBundleNode *)0x0;
LAB_1416bb154:
    *(undefined8 *)(pFVar3 + lVar12 * 0x20 + 0x10) = 0;
    *(undefined4 *)(pFVar3 + lVar12 * 0x20 + 0x18) = 0;
  }
  return pFVar7;
}

// SetTLS @ 1416c0960

void __cdecl TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists::SetTLS(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  LPVOID pvVar5;
  void *_Dst;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
  *pTVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *local_18 [2];
  
  if ((FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(BinnedTlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0x20a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar5 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pvVar5 == (LPVOID)0x0) {
    uVar9 = ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) &
            (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity + 0x67f;
    _Dst = FMallocBinned2::AllocateMetaDataMemory(uVar9);
    memset(_Dst,0,0x680);
    puVar7 = (undefined8 *)((longlong)_Dst + 0x18);
    lVar8 = 0x33;
    do {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0;
      puVar7 = puVar7 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(undefined1 *)((longlong)_Dst + 0x678) = 0;
    LOCK();
    FMallocBinnedCommonBase::TLSMemory =
         (atomic<__int64>)((longlong)FMallocBinnedCommonBase::TLSMemory + uVar9);
    UNLOCK();
    *(undefined1 *)((longlong)_Dst + 0x678) = 1;
    LOCK();
    bVar3 = *(longlong *)((longlong)_Dst + 8) == 0;
    if (bVar3) {
      *(longlong *)((longlong)_Dst + 8) = 1;
    }
    UNLOCK();
    if (!bVar3) {
      UE::FWordMutex::LockSlow((FWordMutex *)((longlong)_Dst + 8));
    }
    TlsSetValue(FMallocBinnedCommonBase::BinnedTlsSlot,_Dst);
    local_18[0] = _Dst;
    lpCriticalSection = (LPCRITICAL_SECTION)GetFreeBlockListsRegistrationMutex();
    EnterCriticalSection(lpCriticalSection);
    pTVar6 = GetRegisteredFreeBlockLists();
    pFVar1 = (pTVar6->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar6->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = pTVar6->ArrayNum;
    if (iVar4 == pTVar6->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar4 + 1;
    *(void **)((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// SetTLS @ 1416c0b20

void __cdecl TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists::SetTLS(void)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  LPVOID pvVar5;
  void *_Dst;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
  *pTVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  void *local_18 [2];
  
  if ((FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(BinnedTlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0x20a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar5 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pvVar5 == (LPVOID)0x0) {
    uVar9 = ~((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity - 1) &
            (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity + 0x9bf;
    _Dst = FMallocBinned3::AllocateMetaDataMemory(uVar9);
    memset(_Dst,0,0x9c0);
    puVar7 = (undefined8 *)((longlong)_Dst + 0x18);
    lVar8 = 0x4d;
    do {
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 3) = 0;
      puVar7 = puVar7 + 4;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(undefined1 *)((longlong)_Dst + 0x9b8) = 0;
    LOCK();
    FMallocBinnedCommonBase::TLSMemory =
         (atomic<__int64>)((longlong)FMallocBinnedCommonBase::TLSMemory + uVar9);
    UNLOCK();
    *(undefined1 *)((longlong)_Dst + 0x9b8) = 1;
    LOCK();
    bVar3 = *(longlong *)((longlong)_Dst + 8) == 0;
    if (bVar3) {
      *(longlong *)((longlong)_Dst + 8) = 1;
    }
    UNLOCK();
    if (!bVar3) {
      UE::FWordMutex::LockSlow((FWordMutex *)((longlong)_Dst + 8));
    }
    TlsSetValue(FMallocBinnedCommonBase::BinnedTlsSlot,_Dst);
    local_18[0] = _Dst;
    lpCriticalSection = (LPCRITICAL_SECTION)GetFreeBlockListsRegistrationMutex();
    EnterCriticalSection(lpCriticalSection);
    pTVar6 = GetRegisteredFreeBlockLists();
    pFVar1 = (pTVar6->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)pTVar6->ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar4 = pTVar6->ArrayNum;
    if (iVar4 == pTVar6->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
    }
    pTVar6->ArrayNum = iVar4 + 1;
    *(void **)((pTVar6->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// SetTLS @ 1416c0ce0

void __cdecl FMallocBinnedGPU::FPerThreadFreeBlockLists::SetTLS(FMallocBinnedGPU *param_1)

{
  int *piVar1;
  TArray<FMallocBinnedGPU::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  DWORD dwTlsIndex;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  LPVOID pvVar8;
  undefined8 *lpTlsValue;
  uint uVar9;
  undefined8 *local_18 [2];
  
  dwTlsIndex = param_1->BinnedGPUTlsSlot;
  if (dwTlsIndex == 0xffffffff) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPlatformTLS::IsValidTlsSlot(BinnedGPUTlsSlot)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                       ,0x49c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pvVar8 = TlsGetValue(dwTlsIndex);
  if (pvVar8 == (LPVOID)0x0) {
    lpTlsValue = ::operator_new(0x18);
    if (lpTlsValue == (undefined8 *)0x0) {
      param_1->BinnedGPUTLSMemory = param_1->BinnedGPUTLSMemory + 0x18;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ThreadSingleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\MallocBinnedGPU.cpp"
                         ,0x4a3,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      bVar3 = (param_1->ArenaParams).PoolCount;
      *(int *)((longlong)lpTlsValue + 0x14) = 0;
      *(int *)(lpTlsValue + 2) = 0;
      uVar9 = (uint)bVar3;
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x20,8,uVar9,(ForAnyElementType *)(lpTlsValue + 1),(int *)(lpTlsValue + 2),
                         (int *)((longlong)lpTlsValue + 0x14));
      DefaultConstructItems<FMallocBinnedGPU::FFreeBlockList,int>
                ((void *)((longlong)iVar7 * 0x20 + lpTlsValue[1]),uVar9);
      param_1->BinnedGPUTLSMemory = param_1->BinnedGPUTLSMemory + 0x18;
    }
    TlsSetValue(dwTlsIndex,lpTlsValue);
    local_18[0] = lpTlsValue;
    EnterCriticalSection((LPCRITICAL_SECTION)&param_1->FreeBlockListsRegistrationMutex);
    pTVar2 = &param_1->RegisteredFreeBlockLists;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar4 + (longlong)(param_1->RegisteredFreeBlockLists).ArrayMax * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (param_1->RegisteredFreeBlockLists).ArrayNum;
    piVar1 = &(param_1->RegisteredFreeBlockLists).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (param_1->RegisteredFreeBlockLists).ArrayNum = iVar7 + 1;
    *(undefined8 **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_18[0];
    LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->FreeBlockListsRegistrationMutex);
  }
  return;
}

