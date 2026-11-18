// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Get @ 1418723a0

FCoreTexts * __cdecl FCoreTexts::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FCoreTexts *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FLazySingleton::Construct<FCoreTextsSingleton>
              (&`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_154f07508 =
         &`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FCoreTextsSingleton>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_154f07508 == (TLazySingleton<struct_FCoreTextsSingleton> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FCoreTexts *)(*pcVar1)();
    return pFVar3;
  }
  return (FCoreTexts *)(DAT_154f07508 + 0x50);
}

// TearDown @ 1418936a0

void __cdecl FCoreTexts::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_154f07508 = 0;
      atexit(`TLazySingleton<FCoreTextsSingleton>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<FCoreTextsSingleton>::Reset
            ((TLazySingleton<FCoreTextsSingleton> *)
             &`private:_static_class_TLazySingleton<struct_FCoreTextsSingleton>&___ptr64___cdecl_TLazySingleton<FCoreTextsSingleton>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

