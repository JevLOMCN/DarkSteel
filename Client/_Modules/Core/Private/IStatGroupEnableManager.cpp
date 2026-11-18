// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~IStatGroupEnableManager @ 1419d3190

void __thiscall IStatGroupEnableManager::~IStatGroupEnableManager(IStatGroupEnableManager *this)

{
  *this = (IStatGroupEnableManager)&___7IStatGroupEnableManager__6B_;
  return;
}

// Get @ 1419fc3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

IStatGroupEnableManager * __cdecl IStatGroupEnableManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  IStatGroupEnableManager *pIVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      InitializeCriticalSectionAndSpinCount
                ((LPCRITICAL_SECTION)&::Singleton.SynchronizationObject,4000);
      ::Singleton.StatIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ::Singleton.StatIDs.ArrayNum = 0;
      ::Singleton.StatIDs.ArrayMax = 0;
      ::Singleton.MemoryCounter.Counter = 0;
      ::Singleton.EnableForNewGroup._0_8_ = 0;
      ::Singleton.EnableForNewGroup._8_8_ = 0;
      ::Singleton.EnableForNewGroup._32_8_ = 0;
      ::Singleton.EnableForNewGroup._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      ::Singleton.EnableForNewGroup._48_8_ = _UNK_150631d98;
      ::Singleton.EnableForNewGroup._64_8_ = 0;
      ::Singleton.EnableForNewGroup._72_4_ = 0;
      ::Singleton.EnableForNewGroups = false;
      ::Singleton.UseEnableForNewGroups = false;
      bVar2 = IsInGameThread();
      if (!bVar2) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Stats\\StatsSystemTypes.cpp"
                           ,0x157,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pIVar3 = (IStatGroupEnableManager *)(*pcVar1)();
          return pIVar3;
        }
      }
      atexit(`IStatGroupEnableManager::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&::_TSS0);
      return (IStatGroupEnableManager *)&::Singleton;
    }
  }
  return (IStatGroupEnableManager *)&::Singleton;
}

