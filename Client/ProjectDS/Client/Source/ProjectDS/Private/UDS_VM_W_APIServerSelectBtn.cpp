// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetOnChangeAPIServerEvent_WrapperImpl @ 14b70abc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_APIServerSelectBtn::SetOnChangeAPIServerEvent_WrapperImpl(void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_GameInstance *this;
  TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr> TVar3;
  UDS_SyncServer *pUVar4;
  FString *pFVar5;
  UDS_LoginState *this_00;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr FStack_150;
  FString FStack_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_LoginState::GetInst();
  bVar1 = TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr> *)&FStack_150,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_W_APIServerSelectBtn::OnChangeAPIServer",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x26,L"loginState is nullptr");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    this = UDS_GameInstance::GetInst();
    if (this != (UDS_GameInstance *)0x0) {
      TVar3 = UDS_GameInstance::GetServerInfoObject(this);
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)TVar3.WeakPtr);
      if (bVar1) {
        TVar3 = UDS_GameInstance::GetServerInfoObject(this);
        pUVar4 = (UDS_SyncServer *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar3.WeakPtr);
        UDS_SyncServer::SetSelectedChannel(pUVar4,*(int *)((longlong)param_1 + 0xc0));
        TVar3 = UDS_GameInstance::GetServerInfoObject(this);
        pUVar4 = (UDS_SyncServer *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar3.WeakPtr);
        pFVar5 = UDS_SyncServer::GetServerInfoURL(pUVar4,&FStack_148);
        UDS_GameInstance::LoadUrls(this,pFVar5);
        if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          TVar3 = UDS_GameInstance::GetServerInfoObject(this);
          pUVar4 = (UDS_SyncServer *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar3.WeakPtr);
          UDS_SyncServer::GetServerInfoURL(pUVar4,&FStack_148);
          TStack_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_138,"UDS_VM_W_APIServerSelectBtn::OnChangeAPIServer",0x2e,Yes);
          UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x35,L"====ButtonSelect %s");
          if ((void *)TStack_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_138._padding_);
          }
          if (FStack_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_148.Data.AllocatorInstance.Data);
          }
        }
        this_00 = (UDS_LoginState *)FWeakObjectPtr::Get(&FStack_150);
        UDS_LoginState::OnLogout(this_00);
      }
    }
  }
  return;
}

// SetAPIServerIndex_WrapperImpl @ 14b70abd0

void __cdecl UDS_VM_W_APIServerSelectBtn::SetAPIServerIndex_WrapperImpl(void *param_1,void *param_2)

{
  SetAPIServerIndex(param_1,*(int *)param_2);
  return;
}

// SetAPIServerName_WrapperImpl @ 14b70abe0

void __cdecl UDS_VM_W_APIServerSelectBtn::SetAPIServerName_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  ::FString::operator=((FString *)((longlong)param_1 + 200),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::APIServerName.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::APIServerName.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetAPIServerVisibility_WrapperImpl @ 14b70abf0

void __cdecl
UDS_VM_W_APIServerSelectBtn::SetAPIServerVisibility_WrapperImpl(void *param_1,void *param_2)

{
  SetAPIServerVisibility(param_1,*(ESlateVisibility *)param_2);
  return;
}

// StaticClass @ 14b70ac00

UClass * __cdecl UDS_VM_W_APIServerSelectBtn::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_APIServerSelectBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_APIServerSelectBtn",
               &Z_Registration_Info_UClass_UDS_VM_W_APIServerSelectBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_APIServerSelectBtn,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_APIServerSelectBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_W_APIServerSelectBtn>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_APIServerSelectBtn.InnerSingleton;
}

// UDS_VM_W_APIServerSelectBtn @ 14b710200

UDS_VM_W_APIServerSelectBtn * __thiscall
UDS_VM_W_APIServerSelectBtn::UDS_VM_W_APIServerSelectBtn
          (UDS_VM_W_APIServerSelectBtn *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->APIServerIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->OnChangeAPIServerEvent)._padding_ = '\0';
  (this->OnChangeAPIServerEvent).bIsCustomSelected = false;
  (this->OnChangeAPIServerEvent).bIsLacked = false;
  (this->OnChangeAPIServerEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_APIServerSelectBtn__6B_;
  *(undefined8 *)&(this->OnChangeAPIServerEvent).Delegate = 0;
  *(undefined8 *)&(this->OnChangeAPIServerEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnChangeAPIServerEvent).Delegate.field_0x10 = 0;
  ::FString::FString(&this->APIServerName,L"ServerName");
  this->APIServerVisibility = Visible;
  return this;
}

// UDS_VM_W_APIServerSelectBtn @ 14b710290

UDS_VM_W_APIServerSelectBtn * __thiscall
UDS_VM_W_APIServerSelectBtn::UDS_VM_W_APIServerSelectBtn
          (UDS_VM_W_APIServerSelectBtn *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->APIServerIndex = -1;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->OnChangeAPIServerEvent)._padding_ = '\0';
  (this->OnChangeAPIServerEvent).bIsCustomSelected = false;
  (this->OnChangeAPIServerEvent).bIsLacked = false;
  (this->OnChangeAPIServerEvent).bIsCustomDisabled = false;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_APIServerSelectBtn__6B_;
  *(undefined8 *)&(this->OnChangeAPIServerEvent).Delegate = 0;
  *(undefined8 *)&(this->OnChangeAPIServerEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->OnChangeAPIServerEvent).Delegate.field_0x10 = 0;
  ::FString::FString(&this->APIServerName,L"ServerName");
  this->APIServerVisibility = Visible;
  return this;
}

// ~UDS_VM_W_APIServerSelectBtn @ 14b712d10

void __thiscall
UDS_VM_W_APIServerSelectBtn::~UDS_VM_W_APIServerSelectBtn(UDS_VM_W_APIServerSelectBtn *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_APIServerSelectBtn__6B_;
  pFVar1 = (this->APIServerName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->OnChangeAPIServerEvent).Delegate);
  pvVar2 = *(void **)&(this->OnChangeAPIServerEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->OnChangeAPIServerEvent).Delegate);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b716750

IClassDescriptor * __thiscall
UDS_VM_W_APIServerSelectBtn::GetFieldNotificationDescriptor(UDS_VM_W_APIServerSelectBtn *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_APIServerSelectBtn::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b717290

UClass * __cdecl UDS_VM_W_APIServerSelectBtn::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_APIServerSelectBtn.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_APIServerSelectBtn",
               &Z_Registration_Info_UClass_UDS_VM_W_APIServerSelectBtn.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_APIServerSelectBtn,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_APIServerSelectBtn>,
               InternalVTableHelperCtorCaller<UDS_VM_W_APIServerSelectBtn>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_APIServerSelectBtn.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_APIServerSelectBtn @ 14b7188b0

void __cdecl UDS_VM_W_APIServerSelectBtn::StaticRegisterNativesUDS_VM_W_APIServerSelectBtn(void)

{
  return;
}

// OnChangeAPIServer @ 14bfb4ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_APIServerSelectBtn::OnChangeAPIServer
          (UDS_VM_W_APIServerSelectBtn *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_GameInstance *this_00;
  TWeakObjectPtr<UDS_SyncServer,FWeakObjectPtr> TVar3;
  UDS_SyncServer *pUVar4;
  FString *pFVar5;
  UDS_LoginState *this_01;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_150;
  FString local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_LoginState::GetInst();
  bVar1 = TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_LoginState,FWeakObjectPtr> *)&local_150,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_APIServerSelectBtn::OnChangeAPIServer",0x2e,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x26,L"loginState is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = UDS_GameInstance::GetInst();
    if (this_00 != (UDS_GameInstance *)0x0) {
      TVar3 = UDS_GameInstance::GetServerInfoObject(this_00);
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)TVar3.WeakPtr);
      if (bVar1) {
        TVar3 = UDS_GameInstance::GetServerInfoObject(this_00);
        pUVar4 = (UDS_SyncServer *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar3.WeakPtr);
        UDS_SyncServer::SetSelectedChannel(pUVar4,this->APIServerIndex);
        TVar3 = UDS_GameInstance::GetServerInfoObject(this_00);
        pUVar4 = (UDS_SyncServer *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar3.WeakPtr);
        pFVar5 = UDS_SyncServer::GetServerInfoURL(pUVar4,&local_148);
        UDS_GameInstance::LoadUrls(this_00,pFVar5);
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
        }
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          TVar3 = UDS_GameInstance::GetServerInfoObject(this_00);
          pUVar4 = (UDS_SyncServer *)FWeakObjectPtr::Get((FWeakObjectPtr *)TVar3.WeakPtr);
          UDS_SyncServer::GetServerInfoURL(pUVar4,&local_148);
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_VM_W_APIServerSelectBtn::OnChangeAPIServer",0x2e,Yes);
          UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x35,L"====ButtonSelect %s");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
        }
        this_01 = (UDS_LoginState *)FWeakObjectPtr::Get(&local_150);
        UDS_LoginState::OnLogout(this_01);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bfc30e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_APIServerSelectBtn::OnSetViewModel
          (UDS_VM_W_APIServerSelectBtn *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1c8 [32];
  TSharedPtr<FDS_ViewModelContext_ServerInfo,1> local_198;
  FName local_188;
  int local_180;
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_158.Object = param_1->Object;
  local_158.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_ServerInfo>(&local_198,&local_158);
  if (local_198.Object == (FDS_ViewModelContext_ServerInfo *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)local_198.Object;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_VM_W_APIServerSelectBtn::OnSetViewModel",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x16,L"serverInfoContext.IsValid() == false");
      if ((FDS_ViewModelContext_ServerInfo *)local_148._padding_ !=
          (FDS_ViewModelContext_ServerInfo *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    if (local_198.Object == (FDS_ViewModelContext_ServerInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this->APIServerIndex = ((local_198.Object)->ServerInfo).ID;
    local_180 = FFieldNotificationClassDescriptor::APIServerIndex.BitNumber;
    local_188 = FFieldNotificationClassDescriptor::APIServerIndex.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_188);
    ::FString::operator=(&this->APIServerName,&((local_198.Object)->ServerInfo).ServerName);
    local_170 = FFieldNotificationClassDescriptor::APIServerName.BitNumber;
    local_178 = FFieldNotificationClassDescriptor::APIServerName.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    this->APIServerVisibility = Visible;
    local_160 = FFieldNotificationClassDescriptor::APIServerVisibility.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::APIServerVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_198.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAPIServerIndex @ 14bfd5920

void __thiscall
UDS_VM_W_APIServerSelectBtn::SetAPIServerIndex(UDS_VM_W_APIServerSelectBtn *this,int param_1)

{
  FName local_18;
  int local_10;
  
  this->APIServerIndex = param_1;
  local_10 = FFieldNotificationClassDescriptor::APIServerIndex.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::APIServerIndex.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetAPIServerName @ 14bfd5960

void __thiscall
UDS_VM_W_APIServerSelectBtn::SetAPIServerName(UDS_VM_W_APIServerSelectBtn *this,FString *param_1)

{
  FName local_18;
  int local_10;
  
  ::FString::operator=(&this->APIServerName,param_1);
  local_10 = FFieldNotificationClassDescriptor::APIServerName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::APIServerName.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetAPIServerVisibility @ 14bfd59b0

void __thiscall
UDS_VM_W_APIServerSelectBtn::SetAPIServerVisibility
          (UDS_VM_W_APIServerSelectBtn *this,ESlateVisibility param_1)

{
  FName local_18;
  int local_10;
  
  this->APIServerVisibility = param_1;
  local_10 = FFieldNotificationClassDescriptor::APIServerVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::APIServerVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

