// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 25

// FOnlineIdRegistryRegistry @ 144615ab0

FOnlineIdRegistryRegistry * __thiscall
UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryRegistry(FOnlineIdRegistryRegistry *this)

{
  FOnlineForeignAccountIdRegistry *pFVar1;
  FOnlineForeignAccountIdRegistry *pFVar2;
  
  pFVar2 = (FOnlineForeignAccountIdRegistry *)0x0;
  *(undefined8 *)&this->AccountIdRegistries = 0;
  *(undefined8 *)&(this->AccountIdRegistries).field_0x8 = 0;
  *(undefined8 *)&(this->AccountIdRegistries).field_0x20 = 0;
  *(undefined4 *)&(this->AccountIdRegistries).field_0x28 = 0;
  *(undefined4 *)&(this->AccountIdRegistries).field_0x2c = 0x80;
  *(undefined4 *)&(this->AccountIdRegistries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccountIdRegistries).field_0x34 = 0;
  *(undefined8 *)&(this->AccountIdRegistries).field_0x40 = 0;
  *(undefined4 *)&(this->AccountIdRegistries).field_0x48 = 0;
  pFVar1 = ::operator_new(0x50);
  if (pFVar1 != (FOnlineForeignAccountIdRegistry *)0x0) {
    *(undefined8 *)&(pFVar1->OnlineServicesToRepData).field_0x10 = 0;
    *(undefined8 *)&(pFVar1->OnlineServicesToRepData).field_0x18 = 0;
    *(undefined8 *)&(pFVar1->OnlineServicesToRepData).field_0x38 = 0;
    *(undefined8 *)&(pFVar1->OnlineServicesToRepData).field_0x48 = 0;
    *(undefined8 *)&pFVar1->OnlineServicesToRepData = 0;
    *(undefined8 *)&(pFVar1->OnlineServicesToRepData).field_0x8 = 0;
    *(undefined8 *)&(pFVar1->OnlineServicesToRepData).field_0x20 = 0;
    *(undefined4 *)&(pFVar1->OnlineServicesToRepData).field_0x28 = 0;
    *(undefined4 *)&(pFVar1->OnlineServicesToRepData).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar1->OnlineServicesToRepData).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar1->OnlineServicesToRepData).field_0x34 = 0;
    *(undefined8 *)&(pFVar1->OnlineServicesToRepData).field_0x40 = 0;
    pFVar2 = pFVar1;
  }
  (this->ForeignAccountIdRegistry).Ptr = pFVar2;
  *(undefined8 *)&this->SessionIdRegistries = 0;
  *(undefined8 *)&(this->SessionIdRegistries).field_0x8 = 0;
  *(undefined8 *)&(this->SessionIdRegistries).field_0x20 = 0;
  *(undefined4 *)&(this->SessionIdRegistries).field_0x28 = 0;
  *(undefined4 *)&(this->SessionIdRegistries).field_0x2c = 0x80;
  *(undefined4 *)&(this->SessionIdRegistries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SessionIdRegistries).field_0x34 = 0;
  *(undefined8 *)&(this->SessionIdRegistries).field_0x40 = 0;
  *(undefined4 *)&(this->SessionIdRegistries).field_0x48 = 0;
  *(undefined8 *)&this->SessionInviteIdRegistries = 0;
  *(undefined8 *)&(this->SessionInviteIdRegistries).field_0x8 = 0;
  *(undefined8 *)&(this->SessionInviteIdRegistries).field_0x20 = 0;
  *(undefined4 *)&(this->SessionInviteIdRegistries).field_0x28 = 0;
  *(undefined4 *)&(this->SessionInviteIdRegistries).field_0x2c = 0x80;
  *(undefined4 *)&(this->SessionInviteIdRegistries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SessionInviteIdRegistries).field_0x34 = 0;
  *(undefined8 *)&(this->SessionInviteIdRegistries).field_0x40 = 0;
  *(undefined4 *)&(this->SessionInviteIdRegistries).field_0x48 = 0;
  return this;
}

// ~FOnlineIdRegistryRegistry @ 1446160b0

void __thiscall
UE::Online::FOnlineIdRegistryRegistry::~FOnlineIdRegistryRegistry(FOnlineIdRegistryRegistry *this)

{
  void *pvVar1;
  FOnlineForeignAccountIdRegistry *this_00;
  
  *(undefined4 *)&(this->SessionInviteIdRegistries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SessionInviteIdRegistries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SessionInviteIdRegistries);
  *(undefined4 *)&(this->SessionIdRegistries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SessionIdRegistries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SessionIdRegistries);
  this_00 = (this->ForeignAccountIdRegistry).Ptr;
  if (this_00 != (FOnlineForeignAccountIdRegistry *)0x0) {
    *(undefined4 *)&(this_00->OnlineServicesToRepData).field_0x48 = 0;
    pvVar1 = *(void **)&(this_00->OnlineServicesToRepData).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (this_00);
    ::operator_delete(this_00,0x50);
  }
  *(undefined4 *)&(this->AccountIdRegistries).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AccountIdRegistries).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (this);
  return;
}

// Get @ 144616fb0

FOnlineIdRegistryRegistry * __cdecl UE::Online::FOnlineIdRegistryRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FOnlineIdRegistryRegistry *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FOnlineIdRegistryRegistry
              ((FOnlineIdRegistryRegistry *)
               &`private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_1550810a8 =
         &`private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FOnlineIdRegistryRegistry *)DAT_1550810a8 == (FOnlineIdRegistryRegistry *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnlineIdRegistryRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return (FOnlineIdRegistryRegistry *)DAT_1550810a8;
}

// GetAccountIdRegistry @ 144617070

IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> * __thiscall
UE::Online::FOnlineIdRegistryRegistry::GetAccountIdRegistry
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1)

{
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar1;
  
  pFVar1 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,param_1);
  if (pFVar1 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) {
    return pFVar1->Registry;
  }
  return (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0;
}

// GetSessionIdRegistry @ 1446170a0

IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> * __thiscall
UE::Online::FOnlineIdRegistryRegistry::GetSessionIdRegistry
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1)

{
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar1;
  
  pFVar1 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&this->SessionIdRegistries,param_1);
  if (pFVar1 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) {
    return pFVar1->Registry;
  }
  return (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0;
}

// GetSessionInviteIdRegistry @ 1446170d0

IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> * __thiscall
UE::Online::FOnlineIdRegistryRegistry::GetSessionInviteIdRegistry
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1)

{
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *pFVar1;
  
  pFVar1 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>_>
           ::Find(&this->SessionInviteIdRegistries,param_1);
  if (pFVar1 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0)
  {
    return pFVar1->Registry;
  }
  return (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0;
}

// RegisterAccountIdRegistry @ 144619170

void __thiscall
UE::Online::FOnlineIdRegistryRegistry::RegisterAccountIdRegistry
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,
          IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *param_2,int param_3)

{
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar1;
  TPairInitializer<UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_&&>
  local_res8;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> **local_38;
  undefined ***local_30;
  undefined **local_28;
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *local_20;
  int local_18;
  
  local_res8.Value._0_1_ = param_1;
  pFVar1 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,param_1);
  if ((pFVar1 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pFVar1->Priority < param_3)) {
    local_28 = &
               ___7__FOnlineIdRegistryAndPriority_UFAccount_OnlineIdHandleTags_Online_UE___FOnlineIdRegistryRegistry_Online_UE__6B_
    ;
    local_38 = &local_res8.Value;
    local_30 = &local_28;
    local_20 = param_2;
    local_18 = param_3;
    TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_&&>_>
              (this,&local_res8,(bool *)&local_38);
  }
  return;
}

// RegisterSessionIdRegistry @ 1446192a0

void __thiscall
UE::Online::FOnlineIdRegistryRegistry::RegisterSessionIdRegistry
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,
          IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *param_2,int param_3)

{
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar1;
  TPairInitializer<UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_&&>
  local_res8;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> **local_38;
  undefined ***local_30;
  undefined **local_28;
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *local_20;
  int local_18;
  
  local_res8.Value._0_1_ = param_1;
  pFVar1 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&this->SessionIdRegistries,param_1);
  if ((pFVar1 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) ||
     (pFVar1->Priority < param_3)) {
    local_28 = &
               ___7__FOnlineIdRegistryAndPriority_UFSession_OnlineIdHandleTags_Online_UE___FOnlineIdRegistryRegistry_Online_UE__6B_
    ;
    local_38 = &local_res8.Value;
    local_30 = &local_28;
    local_20 = param_2;
    local_18 = param_3;
    TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_&&>_>
              (&this->SessionIdRegistries,&local_res8,(bool *)&local_38);
  }
  return;
}

// RegisterSessionInviteIdRegistry @ 144619330

void __thiscall
UE::Online::FOnlineIdRegistryRegistry::RegisterSessionInviteIdRegistry
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,
          IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *param_2,int param_3)

{
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *pFVar1;
  TPairInitializer<UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_&&>
  local_res8;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> **local_38;
  undefined ***local_30;
  undefined **local_28;
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *local_20;
  int local_18;
  
  local_res8.Value._0_1_ = param_1;
  pFVar1 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>_>
           ::Find(&this->SessionInviteIdRegistries,param_1);
  if ((pFVar1 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0
      ) || (pFVar1->Priority < param_3)) {
    local_28 = &
               ___7__FOnlineIdRegistryAndPriority_UFSessionInvite_OnlineIdHandleTags_Online_UE___FOnlineIdRegistryRegistry_Online_UE__6B_
    ;
    local_38 = &local_res8.Value;
    local_30 = &local_28;
    local_20 = param_2;
    local_18 = param_3;
    TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_&,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_&&>_>
              (&this->SessionInviteIdRegistries,&local_res8,(bool *)&local_38);
  }
  return;
}

// TearDown @ 144619fe0

void __cdecl UE::Online::FOnlineIdRegistryRegistry::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_1550810a8 = (FOnlineIdRegistryRegistry *)0x0;
      atexit(`TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineIdRegistryRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineIdRegistryRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_1550810a8 != (FOnlineIdRegistryRegistry *)0x0) {
    ~FOnlineIdRegistryRegistry(DAT_1550810a8);
    DAT_1550810a8 = (FOnlineIdRegistryRegistry *)0x0;
  }
  return;
}

// ToAccountId @ 14461a070

TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToAccountId
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar1;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> TVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar3;
  undefined4 *puVar4;
  undefined4 extraout_var;
  undefined7 in_register_00000011;
  undefined4 *puVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  puVar5 = (undefined4 *)CONCAT71(in_register_00000011,param_1);
  *puVar5 = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,(EOnlineServices)param_2);
  if ((pFVar3 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pIVar1 = pFVar3->Registry,
     pIVar1 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    TVar2 = FOnlineForeignAccountIdRegistry::FromReplicationData
                      ((this->ForeignAccountIdRegistry).Ptr,(EOnlineServices)local_res10,
                       (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                       ((ulonglong)param_2 & 0xff));
    puVar4 = (undefined4 *)CONCAT44(extraout_var,TVar2.Value);
  }
  else {
    puVar4 = (undefined4 *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_res8);
  }
  *puVar5 = *puVar4;
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)(uint)puVar5;
}

// ToAccountId @ 14461a0f0

TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToAccountId
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,FString *param_2)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar1;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar2;
  undefined4 *puVar3;
  undefined7 in_register_00000011;
  undefined4 *puVar4;
  undefined1 local_res8 [8];
  
  puVar4 = (undefined4 *)CONCAT71(in_register_00000011,param_1);
  *puVar4 = 0;
  pFVar2 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,(EOnlineServices)param_2);
  if ((pFVar2 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) &&
     (pIVar1 = pFVar2->Registry,
     pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    puVar3 = (undefined4 *)(**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,local_res8);
    *puVar4 = *puVar3;
  }
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)(uint)puVar4;
}

// ToLogString @ 14461a7a0

FString * __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToLogString
          (FOnlineIdRegistryRegistry *this,FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pIVar1 = pFVar3->Registry,
     pIVar1 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    pFVar4 = FOnlineForeignAccountIdRegistry::ToLogString
                       ((this->ForeignAccountIdRegistry).Ptr,&local_18,param_1);
  }
  else {
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,&local_18,param_1);
  }
  if (__return_storage_ptr__ != pFVar4) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToLogString @ 14461a860

FString * __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToLogString
          (FOnlineIdRegistryRegistry *this,FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar3;
  FString *pFVar4;
  void *local_18 [2];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&this->SessionIdRegistries,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (pIVar1 = pFVar3->Registry,
     pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0)) {
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_18,param_1);
    if (__return_storage_ptr__ != pFVar4) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return __return_storage_ptr__;
}

// ToLogString @ 14461a900

FString * __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToLogString
          (FOnlineIdRegistryRegistry *this,FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *pFVar3;
  FString *pFVar4;
  void *local_18 [2];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>_>
           ::Find(&this->SessionInviteIdRegistries,
                  *(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0
      ) && (pIVar1 = pFVar3->Registry,
           pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0)) {
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,local_18,param_1);
    if (__return_storage_ptr__ != pFVar4) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return __return_storage_ptr__;
}

// ToReplicationData @ 14461afb0

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToReplicationData
          (FOnlineIdRegistryRegistry *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pIVar1 = pFVar3->Registry,
     pIVar1 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    pTVar4 = FOnlineForeignAccountIdRegistry::ToReplicationData
                       ((this->ForeignAccountIdRegistry).Ptr,&local_18,param_1);
  }
  else {
    pTVar4 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,&local_18,param_1);
  }
  if (__return_storage_ptr__ != pTVar4) {
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
    (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = pTVar4->ArrayNum;
    __return_storage_ptr__->ArrayMax = pTVar4->ArrayMax;
    pTVar4->ArrayNum = 0;
    pTVar4->ArrayMax = 0;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToReplicationData @ 14461b070

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToReplicationData
          (FOnlineIdRegistryRegistry *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  void *local_18 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&this->SessionIdRegistries,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (pIVar1 = pFVar3->Registry,
     pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0)) {
    pTVar4 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,local_18,param_1);
    if (__return_storage_ptr__ != pTVar4) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
      (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar4->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar4->ArrayMax;
      pTVar4->ArrayNum = 0;
      pTVar4->ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return __return_storage_ptr__;
}

// ToReplicationData @ 14461b110

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToReplicationData
          (FOnlineIdRegistryRegistry *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *pFVar3;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar4;
  void *local_18 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>_>
           ::Find(&this->SessionInviteIdRegistries,
                  *(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0
      ) && (pIVar1 = pFVar3->Registry,
           pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0)) {
    pTVar4 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,local_18,param_1);
    if (__return_storage_ptr__ != pTVar4) {
      pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar4->AllocatorInstance).Data;
      (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar4->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar4->ArrayMax;
      pTVar4->ArrayNum = 0;
      pTVar4->ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return __return_storage_ptr__;
}

// ToSessionId @ 14461b1c0

TOnlineId<UE::Online::OnlineIdHandleTags::FSession> __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToSessionId
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar1;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar2;
  undefined4 *puVar3;
  undefined7 in_register_00000011;
  undefined4 *puVar4;
  undefined1 local_res8 [8];
  
  puVar4 = (undefined4 *)CONCAT71(in_register_00000011,param_1);
  *puVar4 = 0;
  pFVar2 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&this->SessionIdRegistries,(EOnlineServices)param_2);
  if ((pFVar2 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (pIVar1 = pFVar2->Registry,
     pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0)) {
    puVar3 = (undefined4 *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_res8);
    *puVar4 = *puVar3;
  }
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)(uint)puVar4;
}

// ToSessionInviteId @ 14461b220

TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite> __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToSessionInviteId
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *pIVar1;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *pFVar2;
  undefined4 *puVar3;
  undefined7 in_register_00000011;
  undefined4 *puVar4;
  undefined1 local_res8 [8];
  
  puVar4 = (undefined4 *)CONCAT71(in_register_00000011,param_1);
  *puVar4 = 0;
  pFVar2 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>_>
           ::Find(&this->SessionInviteIdRegistries,(EOnlineServices)param_2);
  if ((pFVar2 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0
      ) && (pIVar1 = pFVar2->Registry,
           pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSessionInvite> *)0x0)) {
    puVar3 = (undefined4 *)(**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,local_res8);
    *puVar4 = *puVar3;
  }
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>)(uint)puVar4;
}

// ToString @ 14461b430

FString * __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToString
          (FOnlineIdRegistryRegistry *this,FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar3;
  FString *pFVar4;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 == (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) ||
     (pIVar1 = pFVar3->Registry,
     pIVar1 == (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FAccount> *)0x0)) {
    pFVar4 = FOnlineForeignAccountIdRegistry::ToString
                       ((this->ForeignAccountIdRegistry).Ptr,&local_18,param_1);
  }
  else {
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18,param_1);
  }
  if (__return_storage_ptr__ != pFVar4) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 14461b4f0

FString * __thiscall
UE::Online::FOnlineIdRegistryRegistry::ToString
          (FOnlineIdRegistryRegistry *this,FString *__return_storage_ptr__,
          TOnlineId<UE::Online::OnlineIdHandleTags::FSession> *param_1)

{
  IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *pIVar1;
  FScriptContainerElement *pFVar2;
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar3;
  FString *pFVar4;
  void *local_18 [2];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar3 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&this->SessionIdRegistries,*(EOnlineServices *)((longlong)&param_1->Value + 3));
  if ((pFVar3 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
     (pIVar1 = pFVar3->Registry,
     pIVar1 != (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *)0x0)) {
    pFVar4 = (FString *)(**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_18,param_1);
    if (__return_storage_ptr__ != pFVar4) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar4->Data).AllocatorInstance.Data;
      (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar4->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar4->Data).ArrayMax;
      (pFVar4->Data).ArrayNum = 0;
      (pFVar4->Data).ArrayMax = 0;
    }
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
  }
  return __return_storage_ptr__;
}

// UnregisterAccountIdRegistry @ 14461c030

void __thiscall
UE::Online::FOnlineIdRegistryRegistry::UnregisterAccountIdRegistry
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,int param_2)

{
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *pFVar1;
  EOnlineServices local_res8 [8];
  
  pFVar1 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>_>
           ::Find(this,param_1);
  if (((pFVar1 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount> *)0x0) &&
      (pFVar1->Priority == param_2)) &&
     (*(int *)&(this->AccountIdRegistries).field_0x8 !=
      *(int *)&(this->AccountIdRegistries).field_0x34)) {
    local_res8[0] = param_1;
    TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_UE::Online::EOnlineServices>(this,(uint)param_1,local_res8);
  }
  return;
}

// UnregisterSessionIdRegistry @ 14461c090

void __thiscall
UE::Online::FOnlineIdRegistryRegistry::UnregisterSessionIdRegistry
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,int param_2)

{
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *pFVar1;
  EOnlineServices local_res8 [8];
  
  pFVar1 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>_>
           ::Find(&this->SessionIdRegistries,param_1);
  if (((pFVar1 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession> *)0x0) &&
      (pFVar1->Priority == param_2)) &&
     (*(int *)&(this->SessionIdRegistries).field_0x8 !=
      *(int *)&(this->SessionIdRegistries).field_0x34)) {
    local_res8[0] = param_1;
    TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSession>,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_UE::Online::EOnlineServices>
              (&this->SessionIdRegistries,(uint)param_1,local_res8);
  }
  return;
}

// UnregisterSessionInviteIdRegistry @ 14461c100

void __thiscall
UE::Online::FOnlineIdRegistryRegistry::UnregisterSessionInviteIdRegistry
          (FOnlineIdRegistryRegistry *this,EOnlineServices param_1,int param_2)

{
  FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *pFVar1;
  EOnlineServices local_res8 [8];
  
  pFVar1 = TMapBase<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>_>
           ::Find(&this->SessionInviteIdRegistries,param_1);
  if (((pFVar1 != (FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite> *)
                  0x0) && (pFVar1->Priority == param_2)) &&
     (*(int *)&(this->SessionInviteIdRegistries).field_0x8 !=
      *(int *)&(this->SessionInviteIdRegistries).field_0x34)) {
    local_res8[0] = param_1;
    TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineIdRegistryRegistry::FOnlineIdRegistryAndPriority<UE::Online::OnlineIdHandleTags::FSessionInvite>,0>,FDefaultSetAllocator>
    ::RemoveImpl<enum_UE::Online::EOnlineServices>
              (&this->SessionInviteIdRegistries,(uint)param_1,local_res8);
  }
  return;
}

