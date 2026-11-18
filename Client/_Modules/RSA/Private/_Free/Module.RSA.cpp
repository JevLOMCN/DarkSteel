// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RSA
// Functions: 6

// `dynamic_initializer_for_'GLock'' @ 140f44a10

void __cdecl _dynamic_initializer_for__GLock__(void)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&GLock,4000);
  atexit(_dynamic_atexit_destructor_for__GLock__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantRSA'' @ 140f44a40

void __cdecl _dynamic_initializer_for__ModuleRegistrantRSA__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "RSA";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"RSA",3);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>::InitializeModule);
  return;
}

// GetEngineCrypto @ 142a3a580

IEngineCrypto * __cdecl GetEngineCrypto(void)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  IEngineCrypto *pIVar6;
  IModularFeatures *pIVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong local_18 [2];
  
  piVar9 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar9 < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    pIVar7 = IModularFeatures::Get();
    if ((*piVar9 < `public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
                   _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
       _thread_safe_static_guard_0__ == -1)) {
      FName::FName(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::
                    Name,L"EngineCryptoFeature");
      _Init_thread_footer(&`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    FVar2 = `public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'::__l2::Name;
    Features.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    Features.ArrayNum = 0;
    Features.ArrayMax = 0;
    iVar4 = (**(code **)((longlong)*pIVar7 + 0x18))
                      (pIVar7,`public:_static_class_FName___cdecl_IEngineCrypto::GetFeatureName(void)'
                              ::__l2::Name);
    uVar11 = 0;
    if (0 < iVar4) {
      do {
        lVar8 = (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,FVar2,uVar11);
        local_18[0] = lVar8 - 8;
        if (lVar8 == 0) {
          local_18[0] = 0;
        }
        if (((Features.AllocatorInstance.Data <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             Features.AllocatorInstance.Data + (longlong)Features.ArrayMax * 8)) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pIVar6 = (IEngineCrypto *)(*pcVar1)();
          return pIVar6;
        }
        iVar5 = Features.ArrayNum;
        if (Features.ArrayNum == Features.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&Features.AllocatorInstance,&Features.ArrayMax);
        }
        uVar10 = (int)uVar11 + 1;
        Features.ArrayNum = iVar5 + 1;
        *(ulonglong *)(Features.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_18[0];
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < iVar4);
    }
    atexit(`GetEngineCrypto'::__l2::_dynamic_atexit_destructor_for__Features__);
    _Init_thread_footer(&_TSS0);
  }
  if (Features.ArrayNum < 1) {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("Features.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RSA\\Private\\RSA.cpp"
                       ,0xc,
                       L"RSA functionality was used but no modular feature was registered to provide it. Please make sure your project has the PlatformCrypto plugin enabled!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pIVar6 = (IEngineCrypto *)(*pcVar1)();
      return pIVar6;
    }
    if ((Features.ArrayNum < 1) &&
       (bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      pIVar6 = (IEngineCrypto *)(*pcVar1)();
      return pIVar6;
    }
  }
  return *(IEngineCrypto **)Features.AllocatorInstance.Data;
}

// IMPLEMENT_MODULE_RSA @ 142a3a890

void __cdecl IMPLEMENT_MODULE_RSA(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'Features'' @ 15035db40

void __cdecl `GetEngineCrypto'::__l2::_dynamic_atexit_destructor_for__Features__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = Features.AllocatorInstance.Data;
  if (Features.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (Features.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GLock'' @ 15035db60

void __cdecl _dynamic_atexit_destructor_for__GLock__(void)

{
                    /* WARNING: Could not recover jumptable at 0x00015035db67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&GLock);
  return;
}

