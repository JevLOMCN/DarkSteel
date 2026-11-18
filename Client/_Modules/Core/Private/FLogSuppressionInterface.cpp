// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Get @ 1417d10f0

FLogSuppressionInterface * __cdecl FLogSuppressionInterface::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FLogSuppressionInterface *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FLazySingleton::Construct<FLogSuppressionImplementation>
              (&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_154ebb478 =
         &`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FLogSuppressionImplementation>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FLogSuppressionInterface *)DAT_154ebb478 == (FLogSuppressionInterface *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FLogSuppressionInterface *)(*pcVar1)();
    return pFVar3;
  }
  return (FLogSuppressionInterface *)DAT_154ebb478;
}

// TearDown @ 141801cd0

void __cdecl FLogSuppressionInterface::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154ebb478 = 0;
      atexit(`TLazySingleton<FLogSuppressionImplementation>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_154ebb478 != 0) {
    (*(code *)**(undefined8 **)(DAT_154ebb478 + 8))(DAT_154ebb478 + 8,0);
    DAT_154ebb478 = 0;
  }
  return;
}

// TryGet @ 14180a0c0

FLogSuppressionInterface * __cdecl FLogSuppressionInterface::TryGet(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      FLazySingleton::Construct<FLogSuppressionImplementation>
                (&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                  ::__l2::Singleton);
      DAT_154ebb478 =
           &`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
            ::__l2::Singleton;
      atexit(`TLazySingleton<FLogSuppressionImplementation>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FLogSuppressionImplementation>&___ptr64___cdecl_TLazySingleton<FLogSuppressionImplementation>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (FLogSuppressionInterface *)DAT_154ebb478;
}

