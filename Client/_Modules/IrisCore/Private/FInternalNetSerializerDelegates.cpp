// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// BroadcastLoadedModulesUpdated @ 1443282a0

void __cdecl UE::Net::Private::FInternalNetSerializerDelegates::BroadcastLoadedModulesUpdated(void)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  
  this = GetLoadedModulesUpdatedDelegate();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast(this);
  return;
}

// BroadcastPostFreezeNetSerializerRegistry @ 1443282c0

void __cdecl
UE::Net::Private::FInternalNetSerializerDelegates::BroadcastPostFreezeNetSerializerRegistry(void)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  
  this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
         GetPostFreezeNetSerializerRegistryDelegate();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear(this);
  return;
}

// BroadcastPreFreezeNetSerializerRegistry @ 1443282f0

void __cdecl
UE::Net::Private::FInternalNetSerializerDelegates::BroadcastPreFreezeNetSerializerRegistry(void)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this;
  
  this = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
         GetPreFreezeNetSerializerRegistryDelegate();
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear(this);
  return;
}

// GetLoadedModulesUpdatedDelegate @ 1443305d0

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
UE::Net::Private::FInternalNetSerializerDelegates::GetLoadedModulesUpdatedDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Net::Private::FInternalNetSerializerDelegates::GetLoadedModulesUpdatedDelegate'::
             __l2::_dynamic_atexit_destructor_for__LoadedModulesUpdatedDelegate__);
      _Init_thread_footer(&::_TSS0);
      return &LoadedModulesUpdatedDelegate;
    }
  }
  return &LoadedModulesUpdatedDelegate;
}

// GetPostFreezeNetSerializerRegistryDelegate @ 144330a50

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
UE::Net::Private::FInternalNetSerializerDelegates::GetPostFreezeNetSerializerRegistryDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Net::Private::FInternalNetSerializerDelegates::
             GetPostFreezeNetSerializerRegistryDelegate'::__l2::
             _dynamic_atexit_destructor_for__PostFreezeNetSerializerRegistryDelegate__);
      _Init_thread_footer(&::_TSS0);
      return &PostFreezeNetSerializerRegistryDelegate;
    }
  }
  return &PostFreezeNetSerializerRegistryDelegate;
}

// GetPreFreezeNetSerializerRegistryDelegate @ 144330ad0

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __cdecl
UE::Net::Private::FInternalNetSerializerDelegates::GetPreFreezeNetSerializerRegistryDelegate(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UE::Net::Private::FInternalNetSerializerDelegates::
             GetPreFreezeNetSerializerRegistryDelegate'::__l2::
             _dynamic_atexit_destructor_for__PreFreezeNetSerializerRegistryDelegate__);
      _Init_thread_footer(&::_TSS0);
      return &PreFreezeNetSerializerRegistryDelegate;
    }
  }
  return &PreFreezeNetSerializerRegistryDelegate;
}

