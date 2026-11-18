// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 26

// ClearAndDisableTLSCachesOnCurrentThread @ 14168b0c0

void __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::ClearAndDisableTLSCachesOnCurrentThread
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this)

{
  FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>((FMallocBinned2 *)this,false);
  FPerThreadFreeBlockLists::ClearTLS();
  return;
}

// ClearAndDisableTLSCachesOnCurrentThread @ 14168b0e0

void __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::ClearAndDisableTLSCachesOnCurrentThread
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this)

{
  FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>((FMallocBinned3 *)this,false);
  FPerThreadFreeBlockLists::ClearTLS();
  return;
}

// FindPoolInfo @ 141693f10

FPoolInfo * __cdecl
TMallocBinnedCommon<FMallocBinned2,51,32752>::Internal::FindPoolInfo
          (FMallocBinned2 *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPoolInfo *pFVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 < (void *)param_1->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)InPtr >= AddressSpaceBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                       ,0xec,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPoolInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar7 = (longlong)param_2 - param_1->_padding_;
  uVar6 = uVar7 >> ((byte)param_1->_padding_ & 0x3f);
  puVar5 = (ulonglong *)
           (((ulonglong)((int)param_1->_padding_ - 1) & uVar6 & 0xffffffff) * 0x20 +
           param_1->_padding_);
  puVar4 = puVar5;
  do {
    if (*puVar4 == uVar6) {
      return (FPoolInfo *)
             ((ulonglong)
              ((uint)(uVar7 >> ((byte)param_1->_padding_ & 0x3f)) & (uint)param_1->_padding_) * 0x20
             + puVar4[1]);
    }
    puVar4 = (ulonglong *)puVar4[3];
  } while (puVar4 != puVar5);
  return (FPoolInfo *)0x0;
}

// FindPoolInfo @ 141693fc0

FPoolInfo * __cdecl
TMallocBinnedCommon<FMallocBinned3,77,131072>::Internal::FindPoolInfo
          (FMallocBinned3 *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPoolInfo *pFVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 < (void *)param_1->_padding_) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)InPtr >= AddressSpaceBase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                       ,0xec,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPoolInfo *)(*pcVar1)();
      return pFVar3;
    }
  }
  uVar7 = (longlong)param_2 - param_1->_padding_;
  uVar6 = uVar7 >> ((byte)param_1->_padding_ & 0x3f);
  puVar5 = (ulonglong *)
           (((ulonglong)((int)param_1->_padding_ - 1) & uVar6 & 0xffffffff) * 0x20 +
           param_1->_padding_);
  puVar4 = puVar5;
  do {
    if (*puVar4 == uVar6) {
      return (FPoolInfo *)
             ((ulonglong)
              ((uint)(uVar7 >> ((byte)param_1->_padding_ & 0x3f)) & (uint)param_1->_padding_) * 0x10
             + puVar4[1]);
    }
    puVar4 = (ulonglong *)puVar4[3];
  } while (puVar4 != puVar5);
  return (FPoolInfo *)0x0;
}

// GetAllocatorStats @ 141698ca0

void __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::GetAllocatorStats
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this,FGenericMemoryStats *param_1)

{
  long64 lVar1;
  
  lVar1 = GetTotalAllocatedSmallPoolMemory(this);
  FMallocBinnedCommonBase::GetAllocatorStatsInternal((FMallocBinnedCommonBase *)this,param_1,lVar1);
  return;
}

// GetAllocatorStats @ 141698ce0

void __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::GetAllocatorStats
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this,FGenericMemoryStats *param_1)

{
  long64 lVar1;
  
  lVar1 = GetTotalAllocatedSmallPoolMemory(this);
  FMallocBinnedCommonBase::GetAllocatorStatsInternal((FMallocBinnedCommonBase *)this,param_1,lVar1);
  return;
}

// GetFreeBlockListsRegistrationMutex @ 1416996e0

FWindowsRecursiveMutex * __cdecl
TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex(void)'
                  ::__l2::FreeBlockListsRegistrationMutex,4000);
      atexit(`TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex'::
             __l2::_dynamic_atexit_destructor_for__FreeBlockListsRegistrationMutex__);
      _Init_thread_footer(&`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex(void)'
              ::__l2::FreeBlockListsRegistrationMutex;
    }
  }
  return &`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetFreeBlockListsRegistrationMutex(void)'
          ::__l2::FreeBlockListsRegistrationMutex;
}

// GetFreeBlockListsRegistrationMutex @ 141699770

FWindowsRecursiveMutex * __cdecl
TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)
                 &`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex(void)'
                  ::__l2::FreeBlockListsRegistrationMutex,4000);
      atexit(`TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex'::
             __l2::_dynamic_atexit_destructor_for__FreeBlockListsRegistrationMutex__);
      _Init_thread_footer(&`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex(void)'
              ::__l2::FreeBlockListsRegistrationMutex;
    }
  }
  return &`protected:_static_class_UE::FWindowsRecursiveMutex&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetFreeBlockListsRegistrationMutex(void)'
          ::__l2::FreeBlockListsRegistrationMutex;
}

// GetOrCreatePoolInfo @ 141699ad0

/* WARNING: Enum "Type": Some values do not have unique names */

FPoolInfo * __cdecl
TMallocBinnedCommon<FMallocBinned2,51,32752>::Internal::GetOrCreatePoolInfo
          (FMallocBinned2 *param_1,void *param_2,ECanary param_3)

{
  ECanary EVar1;
  longlong lVar2;
  ulonglong *puVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  FPoolInfo *pFVar7;
  void *pvVar8;
  FStaticBasicLogRecord *pFVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulong64 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  if ((param_2 < (void *)param_1->_padding_) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)InPtr >= AddressSpaceBase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0xec,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FPoolInfo *)(*pcVar5)();
    return pFVar7;
  }
  uVar16 = (longlong)param_2 - param_1->_padding_;
  uVar17 = uVar16 >> ((byte)param_1->_padding_ & 0x3f);
  uVar15 = (uint)(uVar16 >> ((byte)param_1->_padding_ & 0x3f)) & (uint)param_1->_padding_;
  puVar14 = (ulonglong *)
            (((ulonglong)((int)param_1->_padding_ - 1) & uVar17 & 0xffffffff) * 0x20 +
            param_1->_padding_);
  puVar10 = puVar14;
  do {
    uVar16 = puVar10[1];
    if (uVar16 == 0) {
      *puVar10 = uVar17;
      uVar4 = param_1->_padding_;
      uVar12 = uVar4 * 0x20;
      pvVar8 = FMallocBinned2::AllocateMetaDataMemory(uVar12);
      FMallocBinnedCommonBase::PoolInfoMemory = FMallocBinnedCommonBase::PoolInfoMemory + uVar12;
      if (pvVar8 != (void *)0x0) {
        DefaultConstructItems<FMallocBinned2::FPoolInfo,unsigned___int64>(pvVar8,uVar4);
        lVar13 = (ulonglong)uVar15 * 0x20;
        puVar10[1] = (ulonglong)pvVar8;
        if (*(short *)(lVar13 + 2 + (longlong)pvVar8) != 0x3941) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
        }
        *(ECanary *)(lVar13 + 2 + (longlong)pvVar8) = param_3;
        return (FPoolInfo *)(puVar10[1] + lVar13);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->_padding_);
                    /* WARNING: Subroutine does not return */
      FMallocBinnedCommonBase::OutOfMemory(uVar12,0);
    }
    if (*puVar10 == uVar17) {
      lVar13 = (ulonglong)uVar15 * 0x20;
      EVar1 = *(ECanary *)(lVar13 + 2 + uVar16);
      if ((EVar1 != param_3) && (EVar1 != Unassigned)) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
      }
      *(ECanary *)(lVar13 + uVar16 + 2) = param_3;
      return (FPoolInfo *)(puVar10[1] + lVar13);
    }
    puVar10 = (ulonglong *)puVar10[3];
  } while (puVar10 != puVar14);
  if (param_1->_padding_ == 0) {
    pvVar8 = FMallocBinned2::AllocateMetaDataMemory
                       ((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity);
    param_1->_padding_ = (longlong)pvVar8;
    FMallocBinnedCommonBase::HashMemory =
         FMallocBinnedCommonBase::HashMemory +
         (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity;
    puVar10 = (ulonglong *)0x0;
    for (uVar16 = (ulonglong)(FMallocBinnedCommonBase::OsAllocationGranularity >> 5); uVar16 != 0;
        uVar16 = uVar16 - 1) {
      lVar2 = param_1->_padding_;
      *(undefined8 *)((longlong)puVar10 + lVar2) = 0;
      *(undefined8 *)((longlong)puVar10 + lVar2 + 8) = 0;
      lVar13 = (longlong)puVar10 + lVar2;
      *(longlong *)(lVar13 + 0x10) = lVar13;
      puVar10 = puVar10 + 4;
      *(longlong *)(lVar13 + 0x18) = lVar13;
      *(undefined8 *)(lVar13 + 0x10) = *(undefined8 *)(lVar2 + 0x10);
      *(longlong *)(lVar13 + 0x18) = lVar2;
      *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x18) = lVar13;
      *(longlong *)(lVar2 + 0x10) = lVar13;
    }
  }
  puVar10 = (ulonglong *)param_1->_padding_;
  puVar3 = (ulonglong *)puVar10[3];
  puVar11 = (ulonglong *)0x0;
  if (puVar3 != puVar10) {
    puVar11 = puVar3;
  }
  puVar3[2] = puVar10[2];
  *(ulonglong *)(puVar10[2] + 0x18) = puVar10[3];
  puVar10[2] = (ulonglong)puVar10;
  puVar10[3] = (ulonglong)puVar10;
  param_1->_padding_ = (longlong)puVar11;
  pvVar8 = (void *)puVar10[1];
  if (pvVar8 == (void *)0x0) {
    uVar4 = param_1->_padding_;
    uVar12 = uVar4 * 0x20;
    pvVar8 = FMallocBinned2::AllocateMetaDataMemory(uVar12);
    FMallocBinnedCommonBase::PoolInfoMemory = FMallocBinnedCommonBase::PoolInfoMemory + uVar12;
    if (pvVar8 == (void *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->_padding_);
                    /* WARNING: Subroutine does not return */
      FMallocBinnedCommonBase::OutOfMemory(uVar12,0);
    }
    DefaultConstructItems<FMallocBinned2::FPoolInfo,unsigned___int64>(pvVar8,uVar4);
    lVar13 = (ulonglong)uVar15 * 0x20;
    puVar10[1] = (ulonglong)pvVar8;
    if (*(short *)(lVar13 + 2 + (longlong)pvVar8) == 0x3941) goto LAB_141699cb7;
    pFVar9 = &::LOG_Static;
  }
  else {
    lVar13 = (ulonglong)uVar15 * 0x20;
    EVar1 = *(ECanary *)(lVar13 + 2 + (longlong)pvVar8);
    if ((EVar1 == param_3) || (EVar1 == Unassigned)) goto LAB_141699cb7;
    pFVar9 = &::LOG_Static;
  }
  UE::Logging::Private::BasicFatalLog(pFVar9,(FLogCategoryBase *)&LogMemory);
LAB_141699cb7:
  *(ECanary *)(lVar13 + 2 + (longlong)pvVar8) = param_3;
  *puVar10 = uVar17;
  puVar10[2] = puVar14[2];
  puVar10[3] = (ulonglong)puVar14;
  *(ulonglong **)(puVar14[2] + 0x18) = puVar10;
  puVar14[2] = (ulonglong)puVar10;
  return (FPoolInfo *)(puVar10[1] + lVar13);
}

// GetOrCreatePoolInfo @ 141699df0

/* WARNING: Enum "Type": Some values do not have unique names */

FPoolInfo * __cdecl
TMallocBinnedCommon<FMallocBinned3,77,131072>::Internal::GetOrCreatePoolInfo
          (FMallocBinned3 *param_1,void *param_2,ECanary param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  bool bVar5;
  FPoolInfo *pFVar6;
  void *pvVar7;
  undefined **ppuVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulong64 uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  if ((param_2 < (void *)param_1->_padding_) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(UPTRINT)InPtr >= AddressSpaceBase",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0xec,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar6 = (FPoolInfo *)(*pcVar4)();
    return pFVar6;
  }
  uVar15 = (longlong)param_2 - param_1->_padding_;
  uVar16 = uVar15 >> ((byte)param_1->_padding_ & 0x3f);
  uVar14 = (uint)(uVar15 >> ((byte)param_1->_padding_ & 0x3f)) & (uint)param_1->_padding_;
  puVar13 = (ulonglong *)
            (((ulonglong)((int)param_1->_padding_ - 1) & uVar16 & 0xffffffff) * 0x20 +
            param_1->_padding_);
  puVar9 = puVar13;
  do {
    uVar15 = puVar9[1];
    if (uVar15 == 0) {
      *puVar9 = uVar16;
      uVar3 = param_1->_padding_;
      uVar11 = uVar3 * 0x10;
      pvVar7 = FMallocBinned3::AllocateMetaDataMemory(uVar11);
      FMallocBinnedCommonBase::PoolInfoMemory = FMallocBinnedCommonBase::PoolInfoMemory + uVar11;
      if (pvVar7 != (void *)0x0) {
        DefaultConstructItems<FMallocBinned3::FPoolInfo,unsigned___int64>(pvVar7,uVar3);
        lVar12 = (ulonglong)uVar14 * 0x10;
        puVar9[1] = (ulonglong)pvVar7;
        if (*(int *)(lVar12 + (longlong)pvVar7) != 0x39431234) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)&PTR_u_MallocBinned3_C_150661f80,
                     (FLogCategoryBase *)&LogMemory);
        }
        *(ECanary *)(lVar12 + (longlong)pvVar7) = param_3;
        return (FPoolInfo *)(puVar9[1] + lVar12);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->_padding_);
                    /* WARNING: Subroutine does not return */
      FMallocBinnedCommonBase::OutOfMemory(uVar11,0);
    }
    if (*puVar9 == uVar16) {
      lVar12 = (ulonglong)uVar14 * 0x10;
      if ((*(ECanary *)(lVar12 + uVar15) != param_3) &&
         (*(ECanary *)(lVar12 + uVar15) != Unassigned)) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)&PTR_u_MallocBinned3_C_150661fa0,
                   (FLogCategoryBase *)&LogMemory);
      }
      *(ECanary *)(lVar12 + uVar15) = param_3;
      return (FPoolInfo *)(puVar9[1] + lVar12);
    }
    puVar9 = (ulonglong *)puVar9[3];
  } while (puVar9 != puVar13);
  if (param_1->_padding_ == 0) {
    pvVar7 = FMallocBinned3::AllocateMetaDataMemory
                       ((ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity);
    param_1->_padding_ = (longlong)pvVar7;
    FMallocBinnedCommonBase::HashMemory =
         FMallocBinnedCommonBase::HashMemory +
         (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity;
    puVar9 = (ulonglong *)0x0;
    for (uVar15 = (ulonglong)(FMallocBinnedCommonBase::OsAllocationGranularity >> 5); uVar15 != 0;
        uVar15 = uVar15 - 1) {
      lVar1 = param_1->_padding_;
      *(undefined8 *)(lVar1 + (longlong)puVar9) = 0;
      *(undefined8 *)(lVar1 + 8 + (longlong)puVar9) = 0;
      lVar12 = lVar1 + (longlong)puVar9;
      *(longlong *)(lVar12 + 0x10) = lVar12;
      puVar9 = puVar9 + 4;
      *(longlong *)(lVar12 + 0x18) = lVar12;
      *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar1 + 0x10);
      *(longlong *)(lVar12 + 0x18) = lVar1;
      *(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x18) = lVar12;
      *(longlong *)(lVar1 + 0x10) = lVar12;
    }
  }
  puVar9 = (ulonglong *)param_1->_padding_;
  puVar2 = (ulonglong *)puVar9[3];
  puVar10 = (ulonglong *)0x0;
  if (puVar2 != puVar9) {
    puVar10 = puVar2;
  }
  puVar2[2] = puVar9[2];
  *(ulonglong *)(puVar9[2] + 0x18) = puVar9[3];
  puVar9[2] = (ulonglong)puVar9;
  puVar9[3] = (ulonglong)puVar9;
  param_1->_padding_ = (longlong)puVar10;
  pvVar7 = (void *)puVar9[1];
  if (pvVar7 == (void *)0x0) {
    uVar3 = param_1->_padding_;
    uVar11 = uVar3 * 0x10;
    pvVar7 = FMallocBinned3::AllocateMetaDataMemory(uVar11);
    FMallocBinnedCommonBase::PoolInfoMemory = FMallocBinnedCommonBase::PoolInfoMemory + uVar11;
    if (pvVar7 == (void *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&param_1->_padding_);
                    /* WARNING: Subroutine does not return */
      FMallocBinnedCommonBase::OutOfMemory(uVar11,0);
    }
    DefaultConstructItems<FMallocBinned3::FPoolInfo,unsigned___int64>(pvVar7,uVar3);
    lVar12 = (ulonglong)uVar14 * 0x10;
    puVar9[1] = (ulonglong)pvVar7;
    if (*(int *)(lVar12 + (longlong)pvVar7) == 0x39431234) goto LAB_141699fcb;
    ppuVar8 = &PTR_u_MallocBinned3_C_150661f80;
  }
  else {
    lVar12 = (ulonglong)uVar14 * 0x10;
    if ((*(ECanary *)(lVar12 + (longlong)pvVar7) == param_3) ||
       (*(ECanary *)(lVar12 + (longlong)pvVar7) == Unassigned)) goto LAB_141699fcb;
    ppuVar8 = &PTR_u_MallocBinned3_C_150661fa0;
  }
  UE::Logging::Private::BasicFatalLog
            ((FStaticBasicLogRecord *)ppuVar8,(FLogCategoryBase *)&LogMemory);
LAB_141699fcb:
  *(ECanary *)(lVar12 + (longlong)pvVar7) = param_3;
  *puVar9 = uVar16;
  puVar9[2] = puVar13[2];
  puVar9[3] = (ulonglong)puVar13;
  *(ulonglong **)(puVar13[2] + 0x18) = puVar9;
  puVar13[2] = (ulonglong)puVar9;
  return (FPoolInfo *)(puVar9[1] + lVar12);
}

// GetRegisteredFreeBlockLists @ 14169ac80

TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
* __cdecl TMallocBinnedCommon<FMallocBinned2,51,32752>::GetRegisteredFreeBlockLists(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetRegisteredFreeBlockLists(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetRegisteredFreeBlockLists(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetRegisteredFreeBlockLists(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`TMallocBinnedCommon<FMallocBinned2,51,32752>::GetRegisteredFreeBlockLists'::__l2::
             _dynamic_atexit_destructor_for__RegisteredFreeBlockLists__);
      _Init_thread_footer(&`protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetRegisteredFreeBlockLists(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
          *)&`protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::GetRegisteredFreeBlockLists(void)'
             ::__l2::RegisteredFreeBlockLists;
}

// GetRegisteredFreeBlockLists @ 14169acf0

TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
* __cdecl TMallocBinnedCommon<FMallocBinned3,77,131072>::GetRegisteredFreeBlockLists(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetRegisteredFreeBlockLists(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetRegisteredFreeBlockLists(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetRegisteredFreeBlockLists(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`TMallocBinnedCommon<FMallocBinned3,77,131072>::GetRegisteredFreeBlockLists'::__l2::
             _dynamic_atexit_destructor_for__RegisteredFreeBlockLists__);
      _Init_thread_footer(&`protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetRegisteredFreeBlockLists(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
          *)&`protected:_static_class_TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::GetRegisteredFreeBlockLists(void)'
             ::__l2::RegisteredFreeBlockLists;
}

// GetTotalAllocatedSmallPoolMemory @ 1416a15c0

long64 __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::GetTotalAllocatedSmallPoolMemory
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  atomic<__int64> aVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  lVar5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)GetFreeBlockListsRegistrationMutex();
  EnterCriticalSection(lpCriticalSection);
  pTVar4 = GetRegisteredFreeBlockLists();
  pFVar6 = (pTVar4->AllocatorInstance).Data;
  iVar2 = pTVar4->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar4->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMallocBinnedCommon<FMallocBinned2,51,32752>::FPerThreadFreeBlockLists_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    aVar3 = FMallocBinnedCommonBase::ConsolidatedMemory;
    if (pFVar6 == pFVar1) break;
    lVar5 = lVar5 + **(longlong **)pFVar6;
    pFVar6 = pFVar6 + 8;
  }
  LeaveCriticalSection(lpCriticalSection);
  return (longlong)FMallocBinnedCommonBase::AllocatedSmallPoolMemory + (longlong)aVar3 + lVar5;
}

// GetTotalAllocatedSmallPoolMemory @ 1416a1660

long64 __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::GetTotalAllocatedSmallPoolMemory
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  atomic<__int64> aVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  TArray<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists_*,TSizedDefaultAllocator<32>_>
  *pTVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  lVar5 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)GetFreeBlockListsRegistrationMutex();
  EnterCriticalSection(lpCriticalSection);
  pTVar4 = GetRegisteredFreeBlockLists();
  pFVar6 = (pTVar4->AllocatorInstance).Data;
  iVar2 = pTVar4->ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar4->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMallocBinnedCommon<FMallocBinned3,77,131072>::FPerThreadFreeBlockLists_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    aVar3 = FMallocBinnedCommonBase::ConsolidatedMemory;
    if (pFVar6 == pFVar1) break;
    lVar5 = lVar5 + **(longlong **)pFVar6;
    pFVar6 = pFVar6 + 8;
  }
  LeaveCriticalSection(lpCriticalSection);
  return (longlong)FMallocBinnedCommonBase::AllocatedSmallPoolMemory + (longlong)aVar3 + lVar5;
}

// MarkTLSCachesAsUnusedOnCurrentThread @ 1416b4290

void __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::MarkTLSCachesAsUnusedOnCurrentThread
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this)

{
  atomic<unsigned___int64> *this_00;
  atomic<unsigned___int64> aVar1;
  LPVOID pvVar2;
  
  FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned2>((FMallocBinned2 *)this,true);
  pvVar2 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pvVar2 != (LPVOID)0x0) {
    *(undefined1 *)((longlong)pvVar2 + 0x678) = 0;
    this_00 = (atomic<unsigned___int64> *)((longlong)pvVar2 + 8);
    LOCK();
    aVar1 = *this_00;
    *this_00 = (atomic<unsigned___int64>)((longlong)*this_00 + -1);
    UNLOCK();
    if ((((ulonglong)aVar1 & 0xfffffffffffffffc) != 0) && (((ulonglong)aVar1 & 2) == 0)) {
      UE::FWordMutex::UnlockSlow((FWordMutex *)this_00,(ulong64)aVar1);
      return;
    }
  }
  return;
}

// MarkTLSCachesAsUnusedOnCurrentThread @ 1416b42f0

void __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::MarkTLSCachesAsUnusedOnCurrentThread
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this)

{
  atomic<unsigned___int64> *this_00;
  atomic<unsigned___int64> aVar1;
  LPVOID pvVar2;
  
  FMallocBinnedCommonUtils::FlushCurrentThreadCache<FMallocBinned3>((FMallocBinned3 *)this,true);
  pvVar2 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pvVar2 != (LPVOID)0x0) {
    *(undefined1 *)((longlong)pvVar2 + 0x9b8) = 0;
    this_00 = (atomic<unsigned___int64> *)((longlong)pvVar2 + 8);
    LOCK();
    aVar1 = *this_00;
    *this_00 = (atomic<unsigned___int64>)((longlong)*this_00 + -1);
    UNLOCK();
    if ((((ulonglong)aVar1 & 0xfffffffffffffffc) != 0) && (((ulonglong)aVar1 & 2) == 0)) {
      UE::FWordMutex::UnlockSlow((FWordMutex *)this_00,(ulong64)aVar1);
      return;
    }
  }
  return;
}

// MarkTLSCachesAsUsedOnCurrentThread @ 1416b4350

void __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::MarkTLSCachesAsUsedOnCurrentThread
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this)

{
  atomic<unsigned___int64> *this_00;
  FWordMutex FVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pvVar2 != (LPVOID)0x0) {
    this_00 = (atomic<unsigned___int64> *)((longlong)pvVar2 + 8);
    LOCK();
    FVar1.State = *this_00;
    if (FVar1.State == (atomic<unsigned___int64>)0x0) {
      *this_00 = (atomic<unsigned___int64>)0x1;
    }
    UNLOCK();
    if (FVar1.State != (atomic<unsigned___int64>)0x0) {
      UE::FWordMutex::LockSlow((FWordMutex *)this_00);
    }
    *(undefined1 *)((longlong)pvVar2 + 0x678) = 1;
  }
  return;
}

// MarkTLSCachesAsUsedOnCurrentThread @ 1416b43a0

void __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::MarkTLSCachesAsUsedOnCurrentThread
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this)

{
  atomic<unsigned___int64> *this_00;
  FWordMutex FVar1;
  LPVOID pvVar2;
  
  pvVar2 = TlsGetValue(FMallocBinnedCommonBase::BinnedTlsSlot);
  if (pvVar2 != (LPVOID)0x0) {
    this_00 = (atomic<unsigned___int64> *)((longlong)pvVar2 + 8);
    LOCK();
    FVar1.State = *this_00;
    if (FVar1.State == (atomic<unsigned___int64>)0x0) {
      *this_00 = (atomic<unsigned___int64>)0x1;
    }
    UNLOCK();
    if (FVar1.State != (atomic<unsigned___int64>)0x0) {
      UE::FWordMutex::LockSlow((FWordMutex *)this_00);
    }
    *(undefined1 *)((longlong)pvVar2 + 0x9b8) = 1;
  }
  return;
}

// PromoteToLargerBin @ 1416b6f70

bool __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::PromoteToLargerBin
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this,ulong64 *param_1,uint *param_2,
          FMallocBinned2 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0x10;
  if (0x10 < *param_2) {
    uVar2 = (ulonglong)*param_2;
  }
  *param_2 = (uint)uVar2;
  uVar3 = (*param_1 - 1) + uVar2 & ~(uVar2 - 1);
  if ((uVar3 < 0x7ff1) && ((uint)uVar2 < 0x101)) {
    uVar3 = (ulonglong)FMallocBinned2::MemSizeToPoolIndex[uVar3 + 7 >> 3];
    do {
      if ((uVar2 - 1 & (ulonglong)FMallocBinned2::SmallBinSizes[uVar3]) == 0) {
        *param_1 = (ulonglong)FMallocBinned2::SmallBinSizes[uVar3];
        *param_2 = 0x10;
        return true;
      }
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < 0x33);
  }
  return false;
}

// PromoteToLargerBin @ 1416b7000

bool __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::PromoteToLargerBin
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this,ulong64 *param_1,uint *param_2,
          FMallocBinned3 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0x10;
  if (0x10 < *param_2) {
    uVar2 = (ulonglong)*param_2;
  }
  *param_2 = (uint)uVar2;
  uVar4 = (*param_1 - 1) + uVar2 & ~(uVar2 - 1);
  if ((uVar4 < 0x20001) && ((uint)uVar2 < 0x101)) {
    uVar1 = (uint)FMallocBinned3::MemSizeToPoolIndex[uVar4 + 7 >> 3];
    uVar3 = (uint)FMallocBinned3::MemSizeToPoolIndex[uVar4 + 7 >> 3];
    do {
      uVar3 = uVar3 + 1;
      if ((uVar2 - 1 & (ulonglong)FMallocBinned3::SmallBinSizesShifted[uVar3] * 8) == 0) {
        *param_1 = (ulonglong)FMallocBinned3::SmallBinSizesShifted[uVar3] * 8;
        *param_2 = 0x10;
        return true;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x4d);
  }
  return false;
}

// QuantizeSizeCommon @ 1416b9a40

ulong64 __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::QuantizeSizeCommon
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this,ulong64 param_1,uint param_2,
          FMallocBinned2 *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulong64 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_1 < 0x7ff1 && param_2 < 0x11) {
    uVar5 = (ulong64)FMallocBinned2::SmallBinSizes
                     [FMallocBinned2::MemSizeToPoolIndex[param_1 + 7 >> 3]];
    if (param_1 <= uVar5) {
      return uVar5;
    }
    iVar7 = 0x34b;
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar2 = param_2;
    }
    uVar8 = (param_1 - 1) + (ulonglong)uVar2 & ~((ulonglong)uVar2 - 1);
    if (uVar2 < 0x101 && uVar8 < 0x7ff1) {
      uVar4 = (ulonglong)FMallocBinned2::MemSizeToPoolIndex[uVar8 + 7 >> 3];
      do {
        uVar5 = (ulong64)FMallocBinned2::SmallBinSizes[uVar4];
        if ((uVar5 & (ulonglong)uVar2 - 1) == 0) {
          if (uVar8 <= uVar5) {
            return uVar5;
          }
          iVar7 = 0x359;
          goto LAB_1416b9b2c;
        }
        uVar6 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar6;
      } while (uVar6 < 0x33);
    }
    uVar4 = (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity;
    if (FMallocBinnedCommonBase::OsAllocationGranularity < uVar2) {
      uVar4 = (ulonglong)uVar2;
    }
    uVar5 = (uVar4 - 1) + uVar8 & ~(uVar4 - 1);
    if (uVar8 <= uVar5) {
      return uVar5;
    }
    iVar7 = 0x363;
  }
LAB_1416b9b2c:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("SizeOut >= Count",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                     ,iVar7,L"");
  if (!bVar3) {
    return uVar5;
  }
  pcVar1 = (code *)swi(3);
  uVar5 = (*pcVar1)();
  return uVar5;
}

// QuantizeSizeCommon @ 1416b9b70

ulong64 __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::QuantizeSizeCommon
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this,ulong64 param_1,uint param_2,
          FMallocBinned3 *param_3)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (param_2 < 0x11 && param_1 < 0x20001) {
    uVar8 = (ulonglong)
            FMallocBinned3::SmallBinSizesShifted
            [(ulonglong)FMallocBinned3::MemSizeToPoolIndex[param_1 + 7 >> 3] + 1] * 8;
    if ((uVar8 < param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("SizeOut >= Count",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                           ,0x34b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar2 = param_2;
    }
    uVar5 = (ulonglong)uVar2;
    uVar10 = (param_1 - 1) + uVar5 & ~(uVar5 - 1);
    if (uVar2 < 0x101 && uVar10 < 0x20001) {
      uVar6 = (uint)FMallocBinned3::MemSizeToPoolIndex[uVar10 + 7 >> 3];
      uVar7 = (uint)FMallocBinned3::MemSizeToPoolIndex[uVar10 + 7 >> 3];
      do {
        uVar7 = uVar7 + 1;
        uVar8 = (ulonglong)FMallocBinned3::SmallBinSizesShifted[uVar7] * 8;
        if ((uVar5 - 1 & uVar8) == 0) {
          if (uVar10 <= uVar8) {
            return uVar8;
          }
          iVar9 = 0x359;
          goto LAB_1416b9c9c;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 0x4d);
    }
    uVar8 = (ulonglong)FMallocBinnedCommonBase::OsAllocationGranularity;
    if (FMallocBinnedCommonBase::OsAllocationGranularity < uVar2) {
      uVar8 = uVar5;
    }
    uVar8 = (uVar8 - 1) + uVar10 & ~(uVar8 - 1);
    if (uVar8 < uVar10) {
      iVar9 = 0x363;
LAB_1416b9c9c:
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SizeOut >= Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,iVar9,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return uVar4;
      }
    }
  }
  return uVar8;
}

// SetupTLSCachesOnCurrentThread @ 1416c12b0

void __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::SetupTLSCachesOnCurrentThread
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) {
    FMallocBinnedCommonBase::BinnedTlsSlot = TlsAlloc();
    if (FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(BinnedTlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0x318,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  FPerThreadFreeBlockLists::SetTLS();
  return;
}

// SetupTLSCachesOnCurrentThread @ 1416c1310

void __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::SetupTLSCachesOnCurrentThread
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) {
    FMallocBinnedCommonBase::BinnedTlsSlot = TlsAlloc();
    if (FMallocBinnedCommonBase::BinnedTlsSlot == 0xffffffff) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FPlatformTLS::IsValidTlsSlot(BinnedTlsSlot)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocBinnedCommon.h"
                         ,0x318,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  FPerThreadFreeBlockLists::SetTLS();
  return;
}

// UpdateStatsCommon @ 1416c6a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon
          (TMallocBinnedCommon<FMallocBinned2,51,32752> *this,FMallocBinned2 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FCsvProfiler *pFVar6;
  FName *pFVar7;
  long64 lVar8;
  uint *puVar9;
  ushort *puVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_158 [32];
  FName local_138;
  FName local_130;
  FName local_128 [2];
  wchar_t local_118 [64];
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (GMallocBinnedEnableCSVStats == 0) {
    pFVar6 = FCsvProfiler::Get();
    bVar5 = FCsvProfiler::IsCategoryEnabled(pFVar6,_GCsvCategory_MallocBinned.Index);
    if (!bVar5) {
      return;
    }
  }
  pFVar6 = FCsvProfiler::Get();
  FCsvProfiler::EnableCategoryByIndex(pFVar6,_GCsvCategory_MallocBinned.Index,true);
  lVar12 = 0;
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
      ::__l2::bFirstTime != false) {
    puVar10 = FMallocBinned2::SmallBinSizes;
    lVar11 = lVar12;
    do {
      TCString<wchar_t>::SprintfImpl(local_118,L"FragmentationBin%d");
      pFVar7 = ::FName::FName(&local_138,local_118);
      *(FName *)((longlong)
                 &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
                  ::__l2::FragmentationsStats + lVar11) = *pFVar7;
      TCString<wchar_t>::SprintfImpl(local_118,L"WasteBin%d");
      pFVar7 = ::FName::FName(&local_130,local_118);
      *(FName *)((longlong)
                 &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
                  ::__l2::WasteStats + lVar11) = *pFVar7;
      TCString<wchar_t>::SprintfImpl(local_118,L"TotalMemBin%d");
      pFVar7 = ::FName::FName(local_128,local_118);
      puVar10 = puVar10 + 1;
      *(FName *)((longlong)
                 &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
                  ::__l2::TotalMemStats + lVar11) = *pFVar7;
      lVar11 = lVar11 + 8;
    } while ((longlong)puVar10 < 0x154eafad6);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
    ::__l2::bFirstTime = false;
  }
  fVar4 = __real_42c80000;
  fVar3 = __real_35800000;
  fVar2 = __real_3f800000;
  puVar9 = &param_1->SmallPoolTables[0].TotalAllocatedBins;
  lVar11 = 0x33;
  do {
    fVar13 = fVar2 - (float)puVar9[-1] / (float)*puVar9;
    FCsvProfiler::RecordCustomStat
              ((FName *)((longlong)
                         &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
                          ::__l2::FragmentationsStats + lVar12),_GCsvCategory_MallocBinned.Index,
               (int)(fVar13 * fVar4),Set);
    uVar1 = puVar9[1];
    FCsvProfiler::RecordCustomStat
              ((FName *)((longlong)
                         &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
                          ::__l2::TotalMemStats + lVar12),_GCsvCategory_MallocBinned.Index,
               (float)uVar1 * fVar3,Set);
    FCsvProfiler::RecordCustomStat
              ((FName *)((longlong)
                         &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
                          ::__l2::WasteStats + lVar12),_GCsvCategory_MallocBinned.Index,
               (float)uVar1 * fVar3 * fVar13,Set);
    lVar12 = lVar12 + 8;
    puVar9 = puVar9 + 0x12;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
      ::__l13::__CsvProfilerStat1002 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("RequestedSmallPoolMemoryMB",_GCsvCategory_MallocBinned.Index);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
    ::__l13::__CsvProfilerStat1002 = true;
  }
  lVar8 = GetTotalAllocatedSmallPoolMemory(this);
  FCsvProfiler::RecordCustomStat
            ("RequestedSmallPoolMemoryMB",_GCsvCategory_MallocBinned.Index,(float)lVar8 * fVar3,Set)
  ;
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
      ::__l17::__CsvProfilerStat1003 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("TotalAllocatedSmallPoolMemoryMB",_GCsvCategory_MallocBinned.Index);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
    ::__l17::__CsvProfilerStat1003 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TotalAllocatedSmallPoolMemoryMB",_GCsvCategory_MallocBinned.Index,
             (float)(longlong)FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory * fVar3,Set);
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
      ::__l21::__CsvProfilerStat1004 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("RequestedLargeAllocsMemoryMB",_GCsvCategory_MallocBinned.Index);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
    ::__l21::__CsvProfilerStat1004 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("RequestedLargeAllocsMemoryMB",_GCsvCategory_MallocBinned.Index,
             (float)(longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemory * fVar3,Set);
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
      ::__l25::__CsvProfilerStat1005 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("TotalAllocatedLargeAllocsMemoryMB",_GCsvCategory_MallocBinned.Index);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned2,51,32752>::UpdateStatsCommon(FMallocBinned2_const&___ptr64)___ptr64'
    ::__l25::__CsvProfilerStat1005 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TotalAllocatedLargeAllocsMemoryMB",_GCsvCategory_MallocBinned.Index,
             (float)(longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment * fVar3,
             Set);
  return;
}

// UpdateStatsCommon @ 1416c6e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon
          (TMallocBinnedCommon<FMallocBinned3,77,131072> *this,FMallocBinned3 *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  FCsvProfiler *pFVar6;
  FName *pFVar7;
  long64 lVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_148 [32];
  FName local_128;
  FName local_120;
  FName local_118 [2];
  wchar_t local_108 [64];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (GMallocBinnedEnableCSVStats == 0) {
    pFVar6 = FCsvProfiler::Get();
    bVar5 = FCsvProfiler::IsCategoryEnabled(pFVar6,_GCsvCategory_MallocBinned.Index);
    if (!bVar5) {
      return;
    }
  }
  pFVar6 = FCsvProfiler::Get();
  FCsvProfiler::EnableCategoryByIndex(pFVar6,_GCsvCategory_MallocBinned.Index,true);
  lVar11 = 0;
  lVar10 = lVar11;
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
      ::__l2::bFirstTime != false) {
    do {
      TCString<wchar_t>::SprintfImpl(local_108,L"FragmentationBin%d");
      pFVar7 = ::FName::FName(&local_128,local_108);
      *(FName *)((longlong)
                 &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
                  ::__l2::FragmentationsStats + lVar10) = *pFVar7;
      TCString<wchar_t>::SprintfImpl(local_108,L"WasteBin%d");
      pFVar7 = ::FName::FName(&local_120,local_108);
      *(FName *)((longlong)
                 &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
                  ::__l2::WasteStats + lVar10) = *pFVar7;
      TCString<wchar_t>::SprintfImpl(local_108,L"TotalMemBin%d");
      pFVar7 = ::FName::FName(local_118,local_108);
      *(FName *)((longlong)
                 &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
                  ::__l2::TotalMemStats + lVar10) = *pFVar7;
      lVar10 = lVar10 + 8;
    } while (lVar10 < 0x268);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
    ::__l2::bFirstTime = false;
  }
  fVar4 = __real_42c80000;
  fVar3 = __real_35800000;
  fVar2 = __real_3f800000;
  puVar9 = &param_1->SmallPoolTables[0].TotalAllocatedBins;
  lVar10 = 0x4d;
  do {
    fVar12 = fVar2 - (float)puVar9[-1] / (float)*puVar9;
    FCsvProfiler::RecordCustomStat
              ((FName *)((longlong)
                         &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
                          ::__l2::FragmentationsStats + lVar11),_GCsvCategory_MallocBinned.Index,
               (int)(fVar12 * fVar4),Set);
    uVar1 = puVar9[1];
    FCsvProfiler::RecordCustomStat
              ((FName *)((longlong)
                         &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
                          ::__l2::TotalMemStats + lVar11),_GCsvCategory_MallocBinned.Index,
               (float)uVar1 * fVar3,Set);
    FCsvProfiler::RecordCustomStat
              ((FName *)((longlong)
                         &`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
                          ::__l2::WasteStats + lVar11),_GCsvCategory_MallocBinned.Index,
               (float)uVar1 * fVar3 * fVar12,Set);
    lVar11 = lVar11 + 8;
    puVar9 = puVar9 + 0x2c;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
      ::__l13::__CsvProfilerStat1002 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("RequestedSmallPoolMemoryMB",_GCsvCategory_MallocBinned.Index);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
    ::__l13::__CsvProfilerStat1002 = true;
  }
  lVar8 = GetTotalAllocatedSmallPoolMemory(this);
  FCsvProfiler::RecordCustomStat
            ("RequestedSmallPoolMemoryMB",_GCsvCategory_MallocBinned.Index,(float)lVar8 * fVar3,Set)
  ;
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
      ::__l17::__CsvProfilerStat1003 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("TotalAllocatedSmallPoolMemoryMB",_GCsvCategory_MallocBinned.Index);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
    ::__l17::__CsvProfilerStat1003 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TotalAllocatedSmallPoolMemoryMB",_GCsvCategory_MallocBinned.Index,
             (float)(longlong)FMallocBinnedCommonBase::AllocatedOSSmallPoolMemory * fVar3,Set);
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
      ::__l21::__CsvProfilerStat1004 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("RequestedLargeAllocsMemoryMB",_GCsvCategory_MallocBinned.Index);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
    ::__l21::__CsvProfilerStat1004 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("RequestedLargeAllocsMemoryMB",_GCsvCategory_MallocBinned.Index,
             (float)(longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemory * fVar3,Set);
  if (`protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
      ::__l25::__CsvProfilerStat1005 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("TotalAllocatedLargeAllocsMemoryMB",_GCsvCategory_MallocBinned.Index);
    `protected:_void___cdecl_TMallocBinnedCommon<FMallocBinned3,77,131072>::UpdateStatsCommon(FMallocBinned3_const&___ptr64)___ptr64'
    ::__l25::__CsvProfilerStat1005 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TotalAllocatedLargeAllocsMemoryMB",_GCsvCategory_MallocBinned.Index,
             (float)(longlong)FMallocBinnedCommonBase::AllocatedLargePoolMemoryWAlignment * fVar3,
             Set);
  return;
}

