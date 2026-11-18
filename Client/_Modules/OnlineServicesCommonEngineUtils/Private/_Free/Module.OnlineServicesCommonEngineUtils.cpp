// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 21

// `dynamic_initializer_for_'CONNECT_STRING_TAG'' @ 14144f920

void __cdecl UE::Online::_dynamic_initializer_for__CONNECT_STRING_TAG__(void)

{
  ::FName::FName(&CONNECT_STRING_TAG,L"CONNECT_STRING");
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOnlineServicesCommonEngineUtils'' @ 14144f940

void __cdecl _dynamic_initializer_for__ModuleRegistrantOnlineServicesCommonEngineUtils__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OnlineServicesCommonEngineUtils";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OnlineServicesCommonEngineUtils",0x1f);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FOnlineServicesCommonEngineUtilsModule>::
             InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14f003dc0

void * __thiscall
FOnlineServicesCommonEngineUtilsModule::_scalar_deleting_destructor_
          (FOnlineServicesCommonEngineUtilsModule *this,uint param_1)

{
  *this = (FOnlineServicesCommonEngineUtilsModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// MakeShared<FLANSession,1> @ 14f0045b0

TSharedRef<FLANSession,1> * __cdecl
MakeShared<FLANSession,1>(TSharedRef<FLANSession,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<FLANSession,1> *pTVar4;
  
  pTVar3 = operator_new(0x120);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FLANSession *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    *(undefined4 *)&pTVar3[2]._padding_ = 0xffffffff;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFLANSession___00_SharedPointerInternals__6B_;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x36b1;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x270f;
    pTVar3[1]._padding_ = (longlong)&___7FLANSession__6B_;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[9]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar3[2]._padding_ + 4) = 0x40a00000;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x3f800000;
    pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[9].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[10]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[10]._padding_ + 4) = 0;
    pTVar3[0xb]._padding_ = 0;
    pTVar3[0xb].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xd]._padding_ = 0;
    pTVar3[0xd].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xe]._padding_ = 0;
    pTVar3[0xe].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xe].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf]._padding_ = 0;
    pTVar3[0xf].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[0xf].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x10]._padding_ = 0;
    pTVar3[0x10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0x11]._padding_ = 0;
    pTVar3[0x11].SharedReferenceCount = (atomic<int>)0x2;
    pTVar3[0x11].WeakReferenceCount = (atomic<int>)0x0;
    bVar2 = FConfigCacheIni::GetInt
                      (GConfig,L"LANSession",L"LanAnnouncePort",
                       (int *)&pTVar3[1].SharedReferenceCount,&GEngineIni);
    if (!bVar2) {
      pTVar3[1].SharedReferenceCount = (atomic<int>)0x36b1;
    }
    bVar2 = FConfigCacheIni::GetInt
                      (GConfig,L"LANSession",L"LanGameUniqueId",(int *)&pTVar3[1].WeakReferenceCount
                       ,&GEngineIni);
    if (!bVar2) {
      pTVar3[1].WeakReferenceCount = (atomic<int>)0x270f;
    }
    __return_storage_ptr__->Object = (FLANSession *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    if ((FLANSession *)(pTVar3 + 1) == (FLANSession *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<FLANSession,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeShared<UE::Online::FSessionLAN,1> @ 14f0047c0

TSharedRef<UE::Online::FSessionLAN,1> * __cdecl
MakeShared<UE::Online::FSessionLAN,1>(TSharedRef<UE::Online::FSessionLAN,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedRef<UE::Online::FSessionLAN,1> *pTVar4;
  
  pTVar3 = operator_new(0x100);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FSessionLAN *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSessionLAN_Online_UE___00_SharedPointerInternals__6B_
    ;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar3[3]._padding_ = 0x10000;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined2 *)&pTVar3[4].WeakReferenceCount = 0x100;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[8]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[8]._padding_ + 4) = 0;
    pTVar3[9]._padding_ = 0;
    pTVar3[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[10]._padding_ = 0;
    pTVar3[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc]._padding_ = 0;
    pTVar3[0xc].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xc].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar3[0xd]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar3[0xd]._padding_ + 4) = 0;
    pTVar3[0xe]._padding_ = 0;
    pTVar3[0xe].SharedReferenceCount = (atomic<int>)0x0;
    ((FSessionLAN *)(pTVar3 + 1))->_padding_ = (longlong)&___7FSessionLAN_Online_UE__6B_;
    pTVar3[0xf]._padding_ = 0;
    pTVar3[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[0xf].WeakReferenceCount = (atomic<int>)0x0;
    UE::Online::FSessionLAN::Initialize((FSessionLAN *)(pTVar3 + 1));
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    __return_storage_ptr__->Object = (FSessionLAN *)(pTVar3 + 1);
    if ((FSessionLAN *)(pTVar3 + 1) == (FSessionLAN *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedRef<UE::Online::FSessionLAN,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
  }
  return __return_storage_ptr__;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14f0050e8

/* [thunk]:public: virtual void * __ptr64 __cdecl UE::Online::FSessionsLAN::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
UE::Online::FSessionsLAN::_vector_deleting_destructor__adjustor_8__(FSessionsLAN *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSessionsLAN *)&this[-1].LANSessionManager.SharedReferenceCount,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14f005100

void * __thiscall
UE::Online::IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession>::
_scalar_deleting_destructor_
          (IOnlineIdRegistry<UE::Online::OnlineIdHandleTags::FSession> *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f005130

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f005190

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(unsigned_char_*,int,unsigned___int64),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0051f0

void * __thiscall
TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,UE::Online::FSessionsLAN,1,void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f005250

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(unsigned_char_*,int),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f005280

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0052b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLANSession,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLANSession,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x120);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0052f0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FSessionLAN,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::FSessionLAN,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f005330

void * __thiscall
UE::Online::TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::
_scalar_deleting_destructor_
          (TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString> *this,
          uint param_1)

{
  ~TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f005370

void * __thiscall
UE::Online::FOnlineSessionIdRegistryLAN::_scalar_deleting_destructor_
          (FOnlineSessionIdRegistryLAN *this,uint param_1)

{
  TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::
  ~TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>
            ((TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString> *)
             &this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0053b0

void * __thiscall
UE::Online::FOnlineSessionIdStringRegistry::_scalar_deleting_destructor_
          (FOnlineSessionIdStringRegistry *this,uint param_1)

{
  TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>::
  ~TOnlineBasicIdRegistry<UE::Online::OnlineIdHandleTags::FSession,FString>(&this->BasicRegistry);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f0053f0

void * __thiscall
UE::Online::FSessionCommon::_scalar_deleting_destructor_(FSessionCommon *this,uint param_1)

{
  ~FSessionCommon(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f005430

void * __thiscall
UE::Online::FSessionLAN::_scalar_deleting_destructor_(FSessionLAN *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OwnerInternetAddr).SharedReferenceCount.ReferenceController);
  FSessionCommon::~FSessionCommon((FSessionCommon *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14f005480

void * __thiscall
UE::Online::FSessionsLAN::_scalar_deleting_destructor_(FSessionsLAN *this,uint param_1)

{
  TSharedPtr<UE::Online::FSessionLAN,1> *pTVar1;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&_vftable__for__UE__Online__ISessions__;
  this->_padding_ = (longlong)&_vftable__for__UE__Online__IOnlineComponent__;
  pTVar1 = &this->HostedLANSession;
  if (pTVar1->Object != (FSessionLAN *)0x0) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<UE::Online::FSessionLAN,1> *)&local_18) {
      pTVar1->Object = (FSessionLAN *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->HostedLANSession).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    FLANSession::StopLANSession((this->LANSessionManager).Object);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LANSessionManager).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostedLANSession).SharedReferenceCount.ReferenceController);
  FSessionsCommon::~FSessionsCommon((FSessionsCommon *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x410);
  }
  return this;
}

// IMPLEMENT_MODULE_OnlineServicesCommonEngineUtils @ 14f00b230

void __cdecl IMPLEMENT_MODULE_OnlineServicesCommonEngineUtils(void)

{
  return;
}

