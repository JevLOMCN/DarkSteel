// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 1

// ShutdownModule @ 14ec1cb60

void __thiscall FOnlineServicesInterfaceModule::ShutdownModule(FOnlineServicesInterfaceModule *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_1553aced8 = (FOnlineServicesRegistry *)0x0;
      atexit(`TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_1553aced8 != (FOnlineServicesRegistry *)0x0) {
    UE::Online::FOnlineServicesRegistry::~FOnlineServicesRegistry(DAT_1553aced8);
    DAT_1553aced8 = (FOnlineServicesRegistry *)0x0;
  }
  return;
}

