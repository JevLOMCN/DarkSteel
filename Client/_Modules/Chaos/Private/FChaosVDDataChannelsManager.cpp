// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Get @ 14378f0e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FChaosVDDataChannelsManager * __cdecl Chaos::VisualDebugger::FChaosVDDataChannelsManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FChaosVDDataChannelsManager *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_Chaos::VisualDebugger::FChaosVDDataChannelsManager>&___ptr64___cdecl_TLazySingleton<Chaos::VisualDebugger::FChaosVDDataChannelsManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_Chaos::VisualDebugger::FChaosVDDataChannelsManager>&___ptr64___cdecl_TLazySingleton<Chaos::VisualDebugger::FChaosVDDataChannelsManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_Chaos::VisualDebugger::FChaosVDDataChannelsManager>&___ptr64___cdecl_TLazySingleton<Chaos::VisualDebugger::FChaosVDDataChannelsManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Singleton = 0;
    _DAT_15506e5b0 = 0;
    _DAT_15506e5b8 = ___xmm_00000000000000020000000000000000;
    uRam000000015506e5c0 = _UNK_150631d48;
    _DAT_15506e5c8 = 0;
    _DAT_15506e5d0 = 0;
    _DAT_15506e5e8 = 0;
    _DAT_15506e608 = 0;
    _DAT_15506e610 = 0;
    _DAT_15506e5f0 = ___xmm_00000000ffffffff0000008000000000;
    uRam000000015506e5f8 = _UNK_150631d98;
    DAT_15506e618 =
         &`private:_static_class_TLazySingleton<class_Chaos::VisualDebugger::FChaosVDDataChannelsManager>&___ptr64___cdecl_TLazySingleton<Chaos::VisualDebugger::FChaosVDDataChannelsManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<Chaos::VisualDebugger::FChaosVDDataChannelsManager>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_Chaos::VisualDebugger::FChaosVDDataChannelsManager>&___ptr64___cdecl_TLazySingleton<Chaos::VisualDebugger::FChaosVDDataChannelsManager>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FChaosVDDataChannelsManager *)DAT_15506e618 == (FChaosVDDataChannelsManager *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FChaosVDDataChannelsManager *)(*pcVar1)();
    return pFVar3;
  }
  return (FChaosVDDataChannelsManager *)DAT_15506e618;
}

