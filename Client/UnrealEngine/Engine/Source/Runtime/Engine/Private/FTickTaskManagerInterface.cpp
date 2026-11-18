// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FTickTaskManagerInterface @ 1488b2670

void __thiscall
FTickTaskManagerInterface::~FTickTaskManagerInterface(FTickTaskManagerInterface *this)

{
  *this = (FTickTaskManagerInterface)&___7FTickTaskManagerInterface__6B_;
  return;
}

// Get @ 1488c1c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FTickTaskManagerInterface * __cdecl FTickTaskManagerInterface::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FTickTaskManagerInterface *pFVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance._padding_ = (longlong)&___7FTickTaskManager__6B_;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.TickTaskSequencer = FTickTaskSequencer::Get();
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.LevelList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.LevelList.ArrayNum = 0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.LevelList.ArrayMax = 0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.World = (UWorld *)0x0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.DeltaSeconds = 0.0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.Thread = GameThread;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.TickType.Value = '\x02';
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.TickGroup.Value = '\0';
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.bLogTick = false;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.Context.bLogTicksShowPrerequistes = false;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.bTickNewlySpawned = false;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.AllTickFunctions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.AllTickFunctions.ArrayNum = 0;
      `public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2::
      SingletonInstance.AllTickFunctions.ArrayMax = 0;
      if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
        IConsoleManager::SetupSingleton();
        if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Singleton != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x4fb,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pFVar3 = (FTickTaskManagerInterface *)(*pcVar1)();
            return pFVar3;
          }
        }
      }
      (**(code **)((longlong)*IConsoleManager::Singleton + 0x70))
                (IConsoleManager::Singleton,L"dumpticks",
                 L"Dumps all tick functions registered with FTickTaskManager to log.",0);
      UE::Tick::FTaskSyncManager::Get();
      atexit(`FTickTaskManager::Get'::__l2::_dynamic_atexit_destructor_for__SingletonInstance__);
      _Init_thread_footer(&`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return (FTickTaskManagerInterface *)
             &`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::
              __l2::SingletonInstance;
    }
  }
  return (FTickTaskManagerInterface *)
         &`public:_static_class_FTickTaskManager&___ptr64___cdecl_FTickTaskManager::Get(void)'::__l2
          ::SingletonInstance;
}

