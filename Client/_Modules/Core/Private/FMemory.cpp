// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 23

// ClearAndDisableTLSCachesOnCurrentThread @ 1416e3100

void __cdecl FMemory::ClearAndDisableTLSCachesOnCurrentThread(void)

{
  if (UE::Private::GMalloc != (FMalloc *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416e310f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UE::Private::GMalloc + 0x90))();
    return;
  }
  return;
}

// EnablePoisonTests @ 1416ec560

/* WARNING: Removing unreachable block (ram,0x0001416ec65e) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMemory::EnablePoisonTests(void)

{
  code *pcVar1;
  FMalloc *pFVar2;
  bool bVar3;
  FMalloc *pFVar4;
  
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar3) {
    if (bOnce == false) {
      bOnce = true;
      while( true ) {
        pFVar2 = UE::Private::GMalloc;
        pFVar4 = malloc(0x10);
        MemoryTrace_Alloc((ulong64)pFVar4,0x10,0,0,0);
        if (pFVar4 == (FMalloc *)0x0) {
          pFVar4 = (FMalloc *)0x0;
        }
        else {
          *pFVar4 = (FMalloc)&___7FMallocPoisonProxy__6B_;
          pFVar4[1] = (FMalloc)pFVar2;
          if ((pFVar2 == (FMalloc *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("UsedMalloc",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocPoisonProxy.h"
                                 ,0x23,L"FMallocPoisonProxy is used without a valid malloc!"), bVar3
             )) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        LOCK();
        bVar3 = pFVar2 == UE::Private::GMalloc;
        pFVar2 = pFVar4;
        if (!bVar3) {
          pFVar2 = UE::Private::GMalloc;
        }
        UE::Private::GMalloc = pFVar2;
        UNLOCK();
        if (bVar3) break;
        if (pFVar4 != (FMalloc *)0x0) {
          (**(code **)*pFVar4)(pFVar4,1);
        }
      }
      if (3 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        return;
      }
    }
    else if (1 < (byte)LogMemory._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
      return;
    }
  }
  else if (3 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  return;
}

// EnablePurgatoryTests @ 1416ec6e0

/* WARNING: Removing unreachable block (ram,0x0001416ec7ac) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMemory::EnablePurgatoryTests(void)

{
  FMalloc *pFVar1;
  FMalloc *pFVar2;
  FMalloc *pFVar3;
  longlong lVar4;
  FMalloc *pFVar5;
  bool bVar6;
  
  if (bOnce) {
    if (1 < (byte)LogMemory._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMemory);
      return;
    }
  }
  else {
    bOnce = true;
    while( true ) {
      pFVar1 = UE::Private::GMalloc;
      pFVar2 = malloc(0x140);
      MemoryTrace_Alloc((ulong64)pFVar2,0x140,0,0,0);
      pFVar5 = (FMalloc *)0x0;
      if (pFVar2 != (FMalloc *)0x0) {
        *pFVar2 = (FMalloc)&___7FMallocPurgatoryProxy__6B_;
        pFVar2[1] = (FMalloc)pFVar1;
        lVar4 = 4;
        *(undefined4 *)&pFVar2[2].field_0x4 = 0;
        *(undefined4 *)(pFVar2 + 3) = 0;
        pFVar3 = pFVar2;
        do {
          pFVar3 = pFVar3 + 8;
          *pFVar3 = (FMalloc)0x0;
          *pFVar3 = (FMalloc)0x0;
          lVar4 = lVar4 + -1;
          pFVar5 = pFVar2;
        } while (lVar4 != 0);
      }
      LOCK();
      bVar6 = pFVar1 == UE::Private::GMalloc;
      pFVar1 = pFVar5;
      if (!bVar6) {
        pFVar1 = UE::Private::GMalloc;
      }
      UE::Private::GMalloc = pFVar1;
      UNLOCK();
      if (bVar6) break;
      if (pFVar5 != (FMalloc *)0x0) {
        (**(code **)*pFVar5)(pFVar5,1);
      }
    }
    if (3 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  return;
}

// ExplicitInit @ 1416ed2b0

void __cdecl FMemory::ExplicitInit(FMalloc *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\UnrealMemory.cpp"
                     ,0x1a7,L"ExplicitInit() forbidden when global allocator is created lazily");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Free @ 1416f0e60

void __cdecl FMemory::Free(void *param_1)

{
  FLowLevelMemTracker *this;
  
  if (param_1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,param_1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  }
  return;
}

// FreeExternal @ 1416f0ee0

void __cdecl FMemory::FreeExternal(void *param_1)

{
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
  if (param_1 != (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001416f0f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
    return;
  }
  return;
}

// GCreateMalloc @ 1416f0fc0

void __cdecl FMemory::GCreateMalloc(void)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  FMalloc *pFVar4;
  FMalloc *pFVar5;
  FPlatformMemoryStats local_98;
  
  if ((::_TSS0 <=
       *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c)) || (_Init_thread_header(&::_TSS0), ::_TSS0 != -1)) {
    return;
  }
  UE::Private::GMalloc = FWindowsPlatformMemory::BaseAllocator();
  FWindowsPlatformMemory::GetStats(&local_98);
  FGenericPlatformMallocCrash::Get(UE::Private::GMalloc);
  pFVar4 = MemoryTrace_Create(UE::Private::GMalloc);
  if (pFVar4 != UE::Private::GMalloc) {
    UE::Private::GMalloc = pFVar4;
    MemoryTrace_Initialize();
  }
  cVar2 = (**(code **)((longlong)*UE::Private::GMalloc + 0xb8))();
  pFVar4 = UE::Private::GMalloc;
  if (cVar2 == '\0') {
    pFVar4 = malloc(0x38);
    MemoryTrace_Alloc((ulong64)pFVar4,0x38,0,0,0);
    if (pFVar4 != (FMalloc *)0x0) {
      pFVar4[1] = (FMalloc)UE::Private::GMalloc;
      *pFVar4 = (FMalloc)&___7FMallocThreadSafeProxy__6B_;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pFVar4 + 2),4000);
    }
  }
  UE::Private::GMalloc = pFVar4;
  pFVar5 = malloc(0x10);
  MemoryTrace_Alloc((ulong64)pFVar5,0x10,0,0,0);
  pFVar4 = UE::Private::GMalloc;
  if (pFVar5 != (FMalloc *)0x0) {
    *pFVar5 = (FMalloc)&___7FMallocPoisonProxy__6B_;
    pFVar5[1] = (FMalloc)pFVar4;
    if ((pFVar4 == (FMalloc *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UsedMalloc",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\MallocPoisonProxy.h"
                           ,0x23,L"FMallocPoisonProxy is used without a valid malloc!"), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UE::Private::GMalloc = pFVar5;
  UE::Private::GMalloc = FMallocDoubleFreeFinder::OverrideIfEnabled(pFVar5);
  UE::Private::GMalloc = FMallocFrameProfiler::OverrideIfEnabled(UE::Private::GMalloc);
  (**(code **)((longlong)*UE::Private::GMalloc + 0xd0))(UE::Private::GMalloc);
  ThreadSafeCreationResult = 0;
  _Init_thread_footer(&::_TSS0);
  return;
}

// GetAllocSize @ 1416f1d30

ulong64 __cdecl FMemory::GetAllocSize(void *param_1)

{
  char cVar1;
  ulong64 uVar2;
  ulong64 local_res10 [3];
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
    local_res10[0] = 0;
    cVar1 = (**(code **)((longlong)*UE::Private::GMalloc + 0x68))
                      (UE::Private::GMalloc,param_1,local_res10);
  }
  else {
    local_res10[0] = 0;
    cVar1 = (**(code **)((longlong)*UE::Private::GMalloc + 0x68))
                      (UE::Private::GMalloc,param_1,local_res10);
  }
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_res10[0];
  }
  return uVar2;
}

// GetAllocSizeExternal @ 1416f1db0

ulong64 __cdecl FMemory::GetAllocSizeExternal(void *param_1)

{
  char cVar1;
  ulong64 uVar2;
  ulong64 local_res10 [3];
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
  local_res10[0] = 0;
  cVar1 = (**(code **)((longlong)*UE::Private::GMalloc + 0x68))
                    (UE::Private::GMalloc,param_1,local_res10);
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_res10[0];
  }
  return uVar2;
}

// Malloc @ 141704830

void * __cdecl FMemory::Malloc(ulong64 param_1,uint param_2)

{
  void *pvVar1;
  ulong64 local_18;
  uint local_10;
  
  local_18 = param_1;
  local_10 = param_2;
  pvVar1 = `FMemory_MallocInline'::__l2::<lambda_1>::operator()(&local_18);
  return pvVar1;
}

// MallocExternal @ 141704860

void * __cdecl FMemory::MallocExternal(ulong64 param_1,uint param_2)

{
  void *pvVar1;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
                    /* WARNING: Could not recover jumptable at 0x00014170489a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)((longlong)*UE::Private::GMalloc + 0x28))
                             (UE::Private::GMalloc,param_1,param_2);
  return pvVar1;
}

// MallocZeroed @ 1417049f0

void * __cdecl FMemory::MallocZeroed(ulong64 param_1,uint param_2)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
  else {
    DoGamethreadHook(0);
  }
  pvVar1 = (void *)(**(code **)((longlong)*UE::Private::GMalloc + 0x50))
                             (UE::Private::GMalloc,param_1,param_2);
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    this = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      this = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc(this,Default,pvVar1,param_1,Untagged,FMalloc,true);
  }
  return pvVar1;
}

// MallocZeroedExternal @ 141704a80

void * __cdecl FMemory::MallocZeroedExternal(ulong64 param_1,uint param_2)

{
  void *pvVar1;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
                    /* WARNING: Could not recover jumptable at 0x000141704aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)((longlong)*UE::Private::GMalloc + 0x50))
                             (UE::Private::GMalloc,param_1,param_2);
  return pvVar1;
}

// MarkTLSCachesAsUnusedOnCurrentThread @ 141704b30

void __cdecl FMemory::MarkTLSCachesAsUnusedOnCurrentThread(void)

{
  if (UE::Private::GMalloc != (FMalloc *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141704b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UE::Private::GMalloc + 0x88))();
    return;
  }
  return;
}

// MarkTLSCachesAsUsedOnCurrentThread @ 141704bb0

void __cdecl FMemory::MarkTLSCachesAsUsedOnCurrentThread(void)

{
  if (UE::Private::GMalloc != (FMalloc *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141704bbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UE::Private::GMalloc + 0x80))();
    return;
  }
  return;
}

// QuantizeSize @ 141708680

ulong64 __cdecl FMemory::QuantizeSize(ulong64 param_1,uint param_2)

{
  ulong64 uVar1;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x000141708699. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*UE::Private::GMalloc + 0x60))
                    (UE::Private::GMalloc,param_1,param_2);
  return uVar1;
}

// QuantizeSizeExternal @ 1417086b0

ulong64 __cdecl FMemory::QuantizeSizeExternal(ulong64 param_1,uint param_2)

{
  ulong64 uVar1;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
                    /* WARNING: Could not recover jumptable at 0x0001417086ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*UE::Private::GMalloc + 0x60))
                    (UE::Private::GMalloc,param_1,param_2);
  return uVar1;
}

// Realloc @ 141709030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void * __cdecl FMemory::Realloc(void *param_1,ulong64 param_2,uint param_3)

{
  FLowLevelMemTracker *pFVar1;
  void *pvVar2;
  undefined1 auStackY_68 [32];
  FLLMScopeFromPtr local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_68;
  FLLMScopeFromPtr::FLLMScopeFromPtr(&local_28,param_1,Default);
  if ((FLowLevelMemTracker::EnabledState != Disabled) && (param_1 != (void *)0x0)) {
    pFVar1 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar1 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelFree(pFVar1,Default,param_1,FMalloc,true);
  }
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
  else {
    DoGamethreadHook(1);
  }
  pvVar2 = (void *)(**(code **)((longlong)*UE::Private::GMalloc + 0x38))
                             (UE::Private::GMalloc,param_1,param_2,param_3);
  if ((FLowLevelMemTracker::EnabledState != Disabled) && (pvVar2 != (void *)0x0)) {
    pFVar1 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar1 = FLowLevelMemTracker::Construct();
    }
    FLowLevelMemTracker::OnLowLevelAlloc(pFVar1,Default,pvVar2,param_2,Untagged,FMalloc,true);
  }
  FLLMScopeFromPtr::~FLLMScopeFromPtr(&local_28);
  return pvVar2;
}

// ReallocExternal @ 141709140

void * __cdecl FMemory::ReallocExternal(void *param_1,ulong64 param_2,uint param_3)

{
  void *pvVar1;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
                    /* WARNING: Could not recover jumptable at 0x00014170918b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = (void *)(**(code **)((longlong)*UE::Private::GMalloc + 0x38))
                             (UE::Private::GMalloc,param_1,param_2,param_3);
  return pvVar1;
}

// SetupTLSCachesOnCurrentThread @ 141712870

void __cdecl FMemory::SetupTLSCachesOnCurrentThread(void)

{
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
                    /* WARNING: Could not recover jumptable at 0x000141712893. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*UE::Private::GMalloc + 0x78))();
  return;
}

// TestMemory @ 141714d60

void __cdecl FMemory::TestMemory(void)

{
  code *pcVar1;
  float fVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  void *local_48;
  void *local_40;
  ForAnyElementType local_38;
  int local_30;
  int iStack_2c;
  ForAnyElementType local_28;
  int local_20;
  int local_1c [5];
  ulonglong uVar10;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    atexit(`FMemory::TestMemory'::__l2::_dynamic_atexit_destructor_for__LeakedPointers__);
    _Init_thread_footer(&::_TSS0);
  }
  _Src.Data = LeakedPointers.AllocatorInstance.Data;
  lVar9 = (longlong)LeakedPointers.ArrayNum;
  uVar11 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = LeakedPointers.ArrayNum;
  if (LeakedPointers.ArrayNum == 0) {
    local_1c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,LeakedPointers.ArrayNum,0,&local_28,LeakedPointers.ArrayNum,local_1c);
    memcpy(local_28.Data,_Src.Data,lVar9 << 3);
  }
  fVar2 = __real_40800100;
  lVar9 = 1000;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = 0;
  iStack_2c = 0;
  do {
    uVar4 = rand();
    iVar5 = (int)((float)(uVar4 & 0x7fff) * fVar2);
    iVar6 = 0x1ffff;
    if (iVar5 < 0x1ffff) {
      iVar6 = iVar5;
    }
    local_48 = Malloc((longlong)iVar6,0);
    if (((local_38.Data <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < local_38.Data + (longlong)iStack_2c * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (local_30 == iStack_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_38,&iStack_2c);
    }
    iVar6 = local_30 + 1;
    *(void **)(local_38.Data + (longlong)local_30 * 8) = local_48;
    lVar9 = lVar9 + -1;
    local_30 = iVar6;
  } while (lVar9 != 0);
  LeakedPointers.ArrayNum = 0;
  if (LeakedPointers.ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&LeakedPointers.AllocatorInstance,0,&LeakedPointers.ArrayMax);
  }
  lVar9 = 100;
  do {
    uVar4 = rand();
    iVar5 = (int)((float)(uVar4 & 0x7fff) * fVar2);
    iVar6 = 0x1ffff;
    if (iVar5 < 0x1ffff) {
      iVar6 = iVar5;
    }
    local_40 = Malloc((longlong)iVar6,0);
    if (((LeakedPointers.AllocatorInstance.Data <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 <
         LeakedPointers.AllocatorInstance.Data + (longlong)LeakedPointers.ArrayMax * 8)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (LeakedPointers.ArrayNum == LeakedPointers.ArrayMax) {
      LeakedPointers.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&LeakedPointers.AllocatorInstance,&LeakedPointers.ArrayMax);
    }
    lVar7 = (longlong)LeakedPointers.ArrayNum;
    LeakedPointers.ArrayNum = LeakedPointers.ArrayNum + 1;
    *(void **)(LeakedPointers.AllocatorInstance.Data + lVar7 * 8) = local_40;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar10 = uVar11;
  uVar12 = uVar11;
  if (0 < local_20) {
    do {
      uVar8 = (uint)uVar10;
      uVar4 = 0;
      if ((int)uVar8 < local_20) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      Free(*(void **)(local_28.Data + uVar12));
      uVar10 = (ulonglong)(uVar8 + 1);
      uVar12 = uVar12 + 8;
    } while ((int)(uVar8 + 1) < local_20);
  }
  uVar10 = uVar11;
  if (0 < local_30) {
    do {
      uVar8 = (uint)uVar11;
      uVar4 = 0;
      if ((int)uVar8 < local_30) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      Free(*(void **)(local_38.Data + uVar10));
      uVar11 = (ulonglong)(uVar8 + 1);
      uVar10 = uVar10 + 8;
    } while ((int)(uVar8 + 1) < local_30);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    Free(local_38.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    Free(local_28.Data);
  }
  return;
}

// Trim @ 141717050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FMemory::Trim(bool param_1)

{
  int *piVar1;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_2_::FStat_STAT_FMemory_Trim>
  FVar10;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_6_::FStat_STAT_FMemory_Trim_Broadcast>
  FVar11;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar12;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_2_::FStat_STAT_FMemory_Trim_GMalloc>
  FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FNameEntryId FVar16;
  FName FVar17;
  FNameEntryId FVar18;
  bool bVar19;
  bool bVar20;
  LARGE_INTEGER local_res10;
  FName local_res18;
  FName local_res20;
  FName local_88;
  FName local_68;
  FStatMessage local_58;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    GCreateMalloc();
  }
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId563,"FMemory::Trim",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\UnrealMemory.cpp"
               ,0x233);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId563);
  }
  FVar17 = (FName)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  FVar18.Value = 0;
  local_res18 = FVar17;
  if ((*(int *)FVar17 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FMemory_Trim ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_2_::FStat_STAT_FMemory_Trim>
         )0x0) {
      pFVar9 = ::FName::FName((FName *)&local_res10.s,"STAT_FMemory_Trim");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMemory_Trim,*pFVar9,
                 L"STAT_FMemory_Trim","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_FMemory_Trim;
  if (StatPtr_STAT_FMemory_Trim ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_2_::FStat_STAT_FMemory_Trim>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_FMemory_Trim");
    FVar10 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_2_::FStat_STAT_FMemory_Trim>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMemory_Trim,*pFVar9,
                          L"STAT_FMemory_Trim","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar16 = FVar2.ComparisonIndex.Value;
  uVar8 = FVar2.Number;
  if ((FVar16.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar16.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\UnrealMemory.cpp"
                   ,0x234);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.s.LowPart = FVar16.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      bVar6 = true;
      local_68 = FVar2;
      goto LAB_14171720c;
    }
  }
  bVar6 = false;
LAB_14171720c:
  if ((*(int *)FVar17 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_FMemory_Trim_Broadcast ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_6_::FStat_STAT_FMemory_Trim_Broadcast>
         )0x0) {
      pFVar9 = ::FName::FName((FName *)&local_res10.s,"STAT_FMemory_Trim_Broadcast");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMemory_Trim_Broadcast,*pFVar9,
                 L"STAT_FMemory_Trim_Broadcast","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    else {
      _Init_thread_footer(&::_TSS1);
    }
  }
  FVar11 = StatPtr_STAT_FMemory_Trim_Broadcast;
  if (StatPtr_STAT_FMemory_Trim_Broadcast ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_6_::FStat_STAT_FMemory_Trim_Broadcast>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_FMemory_Trim_Broadcast");
    FVar11 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_6_::FStat_STAT_FMemory_Trim_Broadcast>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMemory_Trim_Broadcast,*pFVar9,
                          L"STAT_FMemory_Trim_Broadcast","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar11;
  bVar4 = false;
  bVar3 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar8 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar8 == 0)) {
    pTVar12 = FCoreDelegates::GetMemoryTrimDelegate();
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(pTVar12);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar16.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\UnrealMemory.cpp"
                   ,0x236);
        bVar4 = true;
        bVar3 = true;
      }
    }
    bVar20 = FThreadStats::bPrimaryEnable != false;
    if (bVar20) {
      local_res10.s.LowPart = FVar16.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar4 = false;
      local_88 = FVar17;
    }
    pTVar12 = FCoreDelegates::GetMemoryTrimDelegate();
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(pTVar12);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar20) && (local_88 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar14 == (FThreadStats *)0x0) {
        pFVar15 = FThreadStatsPool::Get();
        pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
      }
      if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
        local_58.NameAndInfo.Index.Value = local_88.ComparisonIndex.Value;
        local_58.NameAndInfo.Number = local_88.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_res10);
        local_58.StatData.Pad[4] = '\0';
        local_58.StatData.Pad[5] = '\0';
        local_58.StatData.Pad[6] = '\0';
        local_58.StatData.Pad[7] = '\0';
        local_58.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_58.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_58.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_58.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar14,&local_58);
        piVar1 = &pFVar14->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
  }
  if ((*(int *)local_res18 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    if (StatPtr_STAT_FMemory_Trim_GMalloc ==
        (FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_2_::FStat_STAT_FMemory_Trim_GMalloc>
         )0x0) {
      pFVar9 = ::FName::FName((FName *)&local_res10.s,"STAT_FMemory_Trim_GMalloc");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMemory_Trim_GMalloc,*pFVar9,
                 L"STAT_FMemory_Trim_GMalloc","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS2);
  }
  FVar13 = StatPtr_STAT_FMemory_Trim_GMalloc;
  if (StatPtr_STAT_FMemory_Trim_GMalloc ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_2_::FStat_STAT_FMemory_Trim_GMalloc>
       )0x0) {
    pFVar9 = ::FName::FName(&local_res18,"STAT_FMemory_Trim_GMalloc");
    FVar13 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FMemory::Trim(bool)_::_2_::FStat_STAT_FMemory_Trim_GMalloc>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMemory_Trim_GMalloc,*pFVar9,
                          L"STAT_FMemory_Trim_GMalloc","STATGROUP_Quick","STATCAT_Advanced",L"Quick"
                          ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar13;
  bVar3 = false;
  bVar4 = false;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar8 = FVar17.Number;
  if ((FVar16.Value == 0) && (uVar8 == 0)) {
    (**(code **)((longlong)*UE::Private::GMalloc + 0x70))(UE::Private::GMalloc,param_1);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.s,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.s.LowPart = FVar16.Value;
        local_res10.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10.s,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\HAL\\UnrealMemory.cpp"
                   ,0x239);
        bVar3 = true;
        bVar4 = true;
      }
    }
    bVar20 = FThreadStats::bPrimaryEnable == false;
    if (bVar20) {
      FVar17.ComparisonIndex.Value = 0;
      FVar17.Number = 0;
    }
    else {
      local_res10.s.LowPart = FVar16.Value;
      local_res10.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      FVar18.Value = FVar16.Value;
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x70))(UE::Private::GMalloc,param_1);
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar20) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
       && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar14 == (FThreadStats *)0x0) {
        pFVar15 = FThreadStatsPool::Get();
        pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
      }
      if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
        local_58.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
        local_58.NameAndInfo.Index.Value = FVar18.Value;
        QueryPerformanceCounter(&local_res10);
        local_58.StatData.Pad[4] = '\0';
        local_58.StatData.Pad[5] = '\0';
        local_58.StatData.Pad[6] = '\0';
        local_58.StatData.Pad[7] = '\0';
        local_58.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
        local_58.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
        local_58.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
        local_58.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar14,&local_58);
        piVar1 = &pFVar14->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar14,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar14,false,false);
        }
      }
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (local_68 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_58.NameAndInfo.Index.Value = local_68.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = local_68.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res10);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res10.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res10.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res10.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res10.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_58);
      piVar1 = &pFVar14->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// SystemFree @ 1419acae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FMemory::SystemFree(void *param_1)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (GTraceAllowed) {
    if (((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xbb4) == '\0') && (-1 < CallstackChannel->Enabled)) &&
       (FBacktracer::Instance != (FBacktracer *)0x0)) {
      uVar1 = FBacktracer::GetBacktraceId(FBacktracer::Instance,&stack0x00000000);
    }
    else {
      uVar1 = 0;
    }
    if (-1 < MemAllocChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FMemoryFreeSystemFields>((TLogScope<0> *)&local_28);
      *local_28 = param_1;
      *(uint *)(local_28 + 1) = uVar1;
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
    MemoryTrace_UpdateInternal();
  }
  free(param_1);
  return;
}

