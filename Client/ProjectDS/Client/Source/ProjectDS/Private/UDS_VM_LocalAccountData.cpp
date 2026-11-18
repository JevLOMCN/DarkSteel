// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetAccountMemo_WrapperImpl @ 14b695790

void __cdecl UDS_VM_LocalAccountData::SetAccountMemo_WrapperImpl(void *param_1,void *param_2)

{
  FText *this;
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 auStackX_8 [8];
  
  this = (FText *)((longlong)param_1 + 0xd0);
  bVar3 = FText::EqualTo(this,param_2,Default);
  if (!bVar3) {
    pIVar1 = *(ITextData **)param_2;
    pIVar2 = (this->TextData).Reference;
    if (pIVar2 != pIVar1) {
      (this->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0xd8) = *(undefined4 *)((longlong)param_2 + 8);
  }
  return;
}

// StaticClass @ 14b6957a0

UClass * __cdecl UDS_VM_LocalAccountData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_LocalAccountData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_LocalAccountData",
               &Z_Registration_Info_UClass_UDS_VM_LocalAccountData.InnerSingleton,
               StaticRegisterNativesUDS_VM_LocalAccountData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_LocalAccountData>,
               InternalVTableHelperCtorCaller<UDS_VM_LocalAccountData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_LocalAccountData.InnerSingleton;
}

// UDS_VM_LocalAccountData @ 14b698bd0

UDS_VM_LocalAccountData * __thiscall
UDS_VM_LocalAccountData::UDS_VM_LocalAccountData
          (UDS_VM_LocalAccountData *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_LocalAccountData__6B_;
  ::FString::FString(&this->AccountID,"");
  FText::FromString(&this->AccountMemo,"");
  ::FString::FString(&this->ServerName,"");
  FText::FromString(&this->EditMemo,"");
  this->APIServerIndex = 0;
  *(undefined8 *)&this->AccountKey = 0;
  (this->AccountKey).AccountID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountKey).AccountID.Data.ArrayNum = 0;
  (this->AccountKey).AccountID.Data.ArrayMax = 0;
  ::FString::FString(&(this->AccountKey).AccountID,"");
  ::FString::FString(&this->APIServerName,"");
  *(undefined8 *)&this->LoginPlayerDelegate = 0;
  *(undefined8 *)&(this->LoginPlayerDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LoginPlayerDelegate).field_0x10 = 0;
  return this;
}

// UDS_VM_LocalAccountData @ 14b698cc0

UDS_VM_LocalAccountData * __thiscall
UDS_VM_LocalAccountData::UDS_VM_LocalAccountData
          (UDS_VM_LocalAccountData *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_LocalAccountData__6B_;
  ::FString::FString(&this->AccountID,"");
  FText::FromString(&this->AccountMemo,"");
  ::FString::FString(&this->ServerName,"");
  FText::FromString(&this->EditMemo,"");
  this->APIServerIndex = 0;
  *(undefined8 *)&this->AccountKey = 0;
  (this->AccountKey).AccountID.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AccountKey).AccountID.Data.ArrayNum = 0;
  (this->AccountKey).AccountID.Data.ArrayMax = 0;
  ::FString::FString(&(this->AccountKey).AccountID,"");
  ::FString::FString(&this->APIServerName,"");
  *(undefined8 *)&this->LoginPlayerDelegate = 0;
  *(undefined8 *)&(this->LoginPlayerDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->LoginPlayerDelegate).field_0x10 = 0;
  return this;
}

// ~UDS_VM_LocalAccountData @ 14b69aa30

void __thiscall UDS_VM_LocalAccountData::~UDS_VM_LocalAccountData(UDS_VM_LocalAccountData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_LocalAccountData__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->LoginPlayerDelegate);
  pvVar1 = *(void **)&(this->LoginPlayerDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LoginPlayerDelegate);
  pFVar2 = (this->APIServerName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->AccountKey).AccountID.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->EditMemo).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar2 = (this->ServerName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->AccountMemo).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  pFVar2 = (this->AccountID).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b69d250

IClassDescriptor * __thiscall
UDS_VM_LocalAccountData::GetFieldNotificationDescriptor(UDS_VM_LocalAccountData *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_LocalAccountData::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b69dc60

UClass * __cdecl UDS_VM_LocalAccountData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_LocalAccountData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_LocalAccountData",
               &Z_Registration_Info_UClass_UDS_VM_LocalAccountData.InnerSingleton,
               StaticRegisterNativesUDS_VM_LocalAccountData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_LocalAccountData>,
               InternalVTableHelperCtorCaller<UDS_VM_LocalAccountData>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_LocalAccountData.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_LocalAccountData @ 14b69e6c0

void __cdecl UDS_VM_LocalAccountData::StaticRegisterNativesUDS_VM_LocalAccountData(void)

{
  return;
}

// OnSetViewModel @ 14be39720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_LocalAccountData::OnSetViewModel
          (UDS_VM_LocalAccountData *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_AccountInfo,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_AccountInfo>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_AccountInfo *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_LocalAccountData::OnSetViewModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x13,L"accountInfoContext.IsValid() == false");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (local_158.Object == (FDS_ViewModelContext_AccountInfo *)0x0) {
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
    SetAccountInfo(this,&(local_158.Object)->AccountInfo);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetAPIServerIndex @ 14be48740

void __thiscall
UDS_VM_LocalAccountData::SetAPIServerIndex(UDS_VM_LocalAccountData *this,int *param_1)

{
  if (this->APIServerIndex != *param_1) {
    this->APIServerIndex = *param_1;
    (this->AccountKey).APIServerIndex = *param_1;
  }
  return;
}

// SetAPIServerName @ 14be48760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_LocalAccountData::SetAPIServerName(UDS_VM_LocalAccountData *this,int *param_1)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  int iVar4;
  bool bVar5;
  int iVar6;
  UDS_GameInstance *this_00;
  UDS_LogManager *pUVar7;
  UDS_SyncServer *this_01;
  FDS_ServerInfo *pFVar8;
  undefined1 auStackY_228 [32];
  FName local_1e8;
  int local_1e0;
  FWeakObjectPtr local_1d8;
  FDS_ServerInfo local_1d0;
  ForAnyElementType local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this_00 = UDS_GameInstance::GetInst();
  if (this_00 == (UDS_GameInstance *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_VM_LocalAccountData::SetAPIServerName",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,0x4f,L"UDS_GaminInstance is nullptr.");
    if ((void *)local_158._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_158._padding_);
    return;
  }
  UDS_GameInstance::GetServerInfoObject(this_00);
  bVar5 = FWeakObjectPtr::IsValid(&local_1d8);
  if (!bVar5) {
    return;
  }
  this_01 = (UDS_SyncServer *)FWeakObjectPtr::Get(&local_1d8);
  pFVar8 = UDS_SyncServer::GetServerInfo(this_01,&local_1d0,*param_1);
  _Src = (pFVar8->ServerName).Data.AllocatorInstance.Data;
  (pFVar8->ServerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (pFVar8->ServerName).Data.ArrayNum;
  (pFVar8->ServerName).Data.ArrayNum = 0;
  (pFVar8->ServerName).Data.ArrayMax = 0;
  if (local_1d0.GameServerIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.GameServerIndex.AllocatorInstance.Data);
  }
  if (local_1d0.FrontEndServerIndex.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.FrontEndServerIndex.AllocatorInstance.Data);
  }
  if (local_1d0.ServerName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.ServerName.Data.AllocatorInstance.Data);
  }
  if (local_1d0.AiAddr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AiAddr.Data.AllocatorInstance.Data);
  }
  if (local_1d0.ServerAddr.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.ServerAddr.Data.AllocatorInstance.Data);
  }
  if (local_1d0.Urls.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.Urls.Data.AllocatorInstance.Data);
  }
  iVar4 = FFieldNotificationClassDescriptor::APIServerName.BitNumber;
  pFVar2 = &this->APIServerName;
  iVar6 = (this->APIServerName).Data.ArrayNum;
  local_1e8 = FFieldNotificationClassDescriptor::APIServerName.FieldName;
  if (iVar6 == iVar3) {
    if (iVar6 < 2) goto LAB_14be489a3;
    iVar6 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(pFVar2->Data).AllocatorInstance.Data,(wchar_t *)_Src);
    bVar5 = iVar6 == 0;
  }
  else {
    bVar5 = iVar6 + iVar3 == 1;
  }
  if (!bVar5) {
    if (pFVar2 != (FString *)local_168) {
      iVar6 = (this->APIServerName).Data.ArrayMax;
      piVar1 = &(this->APIServerName).Data.ArrayMax;
      (this->APIServerName).Data.ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar6 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar3,iVar6,(ForAnyElementType *)pFVar2,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pFVar2->Data).AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
        }
      }
    }
    local_1e0 = iVar4;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_1e8);
  }
LAB_14be489a3:
  if (_Src != (FScriptContainerElement *)0x0) {
    FMemory::Free(_Src);
  }
  return;
}

// SetAccountID @ 14be48a90

void __thiscall
UDS_VM_LocalAccountData::SetAccountID(UDS_VM_LocalAccountData *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar4 = (this->AccountID).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar4 == iVar1) {
    if (iVar4 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->AccountID).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar4 + iVar1 == 1;
  }
  if (!bVar5) {
    ::FString::operator=(&(this->AccountKey).AccountID,param_1);
    iVar3 = FFieldNotificationClassDescriptor::AccountID.BitNumber;
    FVar2 = FFieldNotificationClassDescriptor::AccountID.FieldName;
    iVar4 = (this->AccountID).Data.ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar4 == iVar1) {
      if (iVar4 < 2) {
        return;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->AccountID).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar4 == 0;
    }
    else {
      bVar5 = iVar4 + iVar1 == 1;
    }
    if (!bVar5) {
      ::FString::operator=(&this->AccountID,param_1);
      local_18 = FVar2;
      local_10 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

// SetAccountInfo @ 14be48b80

void __thiscall
UDS_VM_LocalAccountData::SetAccountInfo(UDS_VM_LocalAccountData *this,FDS_AccountInfo *param_1)

{
  int iVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  FName local_res8;
  FFieldId local_28;
  
  if (this->APIServerIndex != param_1->APIServerIndex) {
    this->APIServerIndex = param_1->APIServerIndex;
    (this->AccountKey).APIServerIndex = param_1->APIServerIndex;
  }
  SetAPIServerName(this,&param_1->APIServerIndex);
  iVar4 = (this->AccountID).Data.ArrayNum;
  iVar5 = (param_1->AccountID).Data.ArrayNum;
  if (iVar4 == iVar5) {
    if (iVar4 < 2) goto LAB_14be48c75;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->AccountID).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->AccountID).Data.AllocatorInstance.Data);
    bVar6 = iVar4 == 0;
  }
  else {
    bVar6 = iVar4 + iVar5 == 1;
  }
  if (!bVar6) {
    ::FString::operator=(&(this->AccountKey).AccountID,&param_1->AccountID);
    iVar1 = FFieldNotificationClassDescriptor::AccountID.BitNumber;
    iVar4 = (this->AccountID).Data.ArrayNum;
    iVar5 = (param_1->AccountID).Data.ArrayNum;
    local_res8 = FFieldNotificationClassDescriptor::AccountID.FieldName;
    if (iVar4 == iVar5) {
      if (iVar4 < 2) goto LAB_14be48c75;
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->AccountID).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->AccountID).Data.AllocatorInstance.Data);
      bVar6 = iVar4 == 0;
    }
    else {
      bVar6 = iVar4 + iVar5 == 1;
    }
    if (!bVar6) {
      ::FString::operator=(&this->AccountID,&param_1->AccountID);
      local_28.FieldName = local_res8;
      local_28.BitNumber = iVar1;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
  }
LAB_14be48c75:
  bVar6 = FText::EqualTo(&this->AccountMemo,&param_1->AccountMemo,Default);
  if (!bVar6) {
    pIVar2 = (this->AccountMemo).TextData.Reference;
    pIVar3 = (this->EditMemo).TextData.Reference;
    if (pIVar3 != pIVar2) {
      (this->EditMemo).TextData.Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    (this->EditMemo).Flags = (this->AccountMemo).Flags;
    local_28.FieldName = FFieldNotificationClassDescriptor::AccountMemo.FieldName;
    local_28.BitNumber = FFieldNotificationClassDescriptor::AccountMemo.BitNumber;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->AccountMemo,&param_1->AccountMemo,&local_28);
  }
  iVar4 = (this->ServerName).Data.ArrayNum;
  iVar5 = (param_1->ServerName).Data.ArrayNum;
  if (iVar4 == iVar5) {
    if (iVar4 < 2) {
      return;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ServerName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->ServerName).Data.AllocatorInstance.Data);
    bVar6 = iVar4 == 0;
  }
  else {
    bVar6 = iVar4 + iVar5 == 1;
  }
  iVar4 = FFieldNotificationClassDescriptor::ServerName.BitNumber;
  if (!bVar6) {
    iVar5 = (this->ServerName).Data.ArrayNum;
    iVar1 = (param_1->ServerName).Data.ArrayNum;
    local_res8 = FFieldNotificationClassDescriptor::ServerName.FieldName;
    if (iVar5 == iVar1) {
      if (iVar5 < 2) {
        return;
      }
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->ServerName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->ServerName).Data.AllocatorInstance.Data);
      bVar6 = iVar5 == 0;
    }
    else {
      bVar6 = iVar5 + iVar1 == 1;
    }
    if (!bVar6) {
      ::FString::operator=(&this->ServerName,&param_1->ServerName);
      local_28.FieldName = local_res8;
      local_28.BitNumber = iVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
    }
  }
  return;
}

// SetAccountMemo @ 14be48dd0

void __thiscall
UDS_VM_LocalAccountData::SetAccountMemo(UDS_VM_LocalAccountData *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  FFieldId local_18;
  
  bVar3 = FText::EqualTo(&this->AccountMemo,param_1,Default);
  if (!bVar3) {
    pIVar1 = (this->AccountMemo).TextData.Reference;
    pIVar2 = (this->EditMemo).TextData.Reference;
    if (pIVar2 != pIVar1) {
      (this->EditMemo).TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->EditMemo).Flags = (this->AccountMemo).Flags;
    local_18.FieldName = FFieldNotificationClassDescriptor::AccountMemo.FieldName;
    local_18.BitNumber = FFieldNotificationClassDescriptor::AccountMemo.BitNumber;
    UMVVMViewModelBase::SetPropertyValue
              ((UMVVMViewModelBase *)this,&this->AccountMemo,param_1,&local_18);
  }
  return;
}

// SetEditMemo @ 14be4b270

void __thiscall UDS_VM_LocalAccountData::SetEditMemo(UDS_VM_LocalAccountData *this,FText *param_1)

{
  FText *this_00;
  ITextData *pIVar1;
  ITextData *pIVar2;
  bool bVar3;
  undefined1 local_res8 [8];
  
  this_00 = &this->EditMemo;
  bVar3 = FText::EqualTo(this_00,param_1,Default);
  if (!bVar3) {
    pIVar1 = (param_1->TextData).Reference;
    pIVar2 = (this_00->TextData).Reference;
    if (pIVar2 != pIVar1) {
      (this_00->TextData).Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
      }
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (this->EditMemo).Flags = param_1->Flags;
  }
  return;
}

// SetServerName @ 14be519f0

void __thiscall
UDS_VM_LocalAccountData::SetServerName(UDS_VM_LocalAccountData *this,FString *param_1)

{
  int iVar1;
  FName FVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  FName local_18;
  int local_10;
  
  iVar3 = (this->ServerName).Data.ArrayNum;
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar3 == iVar4) {
    if (iVar3 < 2) {
      return;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ServerName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar5 = iVar3 == 0;
  }
  else {
    bVar5 = iVar3 + iVar4 == 1;
  }
  iVar3 = FFieldNotificationClassDescriptor::ServerName.BitNumber;
  FVar2 = FFieldNotificationClassDescriptor::ServerName.FieldName;
  if (!bVar5) {
    iVar4 = (this->ServerName).Data.ArrayNum;
    iVar1 = (param_1->Data).ArrayNum;
    if (iVar4 == iVar1) {
      if (iVar4 < 2) {
        return;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->ServerName).Data.AllocatorInstance.Data,
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
      bVar5 = iVar4 == 0;
    }
    else {
      bVar5 = iVar4 + iVar1 == 1;
    }
    if (!bVar5) {
      ::FString::operator=(&this->ServerName,param_1);
      local_18 = FVar2;
      local_10 = iVar3;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    }
  }
  return;
}

