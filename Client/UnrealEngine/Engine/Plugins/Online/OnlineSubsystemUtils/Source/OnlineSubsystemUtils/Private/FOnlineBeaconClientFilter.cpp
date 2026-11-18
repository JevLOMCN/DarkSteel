// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 5

// FOnlineBeaconClientFilter @ 14ec52080

FOnlineBeaconClientFilter * __thiscall
FOnlineBeaconClientFilter::FOnlineBeaconClientFilter
          (FOnlineBeaconClientFilter *this,FString *param_1,FString *param_2,
          FUniqueNetIdRepl *param_3,FOnlineBeaconClientFilterFlags param_4)

{
  bool bVar1;
  
  ::FString::FString(&this->Name,param_1);
  ::FString::FString(&this->Type,param_2);
  (this->UniqueId)._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
  ::
  TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
            ((TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&(this->UniqueId)._padding_,
             (TVariant<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>
              *)&param_3->_padding_);
  (this->UniqueId)._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->UniqueId).ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueId).ReplicationBytes.ArrayNum = 0;
  (this->UniqueId).ReplicationBytes.ArrayMax = 0;
  this->bIsWildcard = false;
  this->Flags = param_4;
  if ((param_4 & WildcardAllowed) != None) {
    if (((1 < (param_1->Data).ArrayNum) || (1 < (param_2->Data).ArrayNum)) ||
       (bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)param_3), bVar1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    this->bIsWildcard = bVar1;
    return this;
  }
  return this;
}

// operator() @ 14ec59770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FOnlineBeaconClientFilter::operator()(FOnlineBeaconClientFilter *this,AOnlineBeaconClient *param_1)

{
  bool bVar1;
  int iVar2;
  FUniqueNetIdRepl *pFVar3;
  bool bVar4;
  bool bVar5;
  FName local_res10;
  FString local_28;
  
  bVar1 = false;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  if ((param_1 == (AOnlineBeaconClient *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    return false;
  }
  if ((this->Name).Data.ArrayNum < 2) {
LAB_14ec597fa:
    bVar4 = true;
  }
  else {
    local_res10 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res10,&local_28);
    iVar2 = (this->Name).Data.ArrayNum;
    if (iVar2 == local_28.Data.ArrayNum) {
      if (iVar2 < 2) {
        bVar1 = true;
        goto LAB_14ec597fa;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Name).Data.AllocatorInstance.Data,
                         (wchar_t *)local_28.Data.AllocatorInstance.Data);
      bVar4 = iVar2 == 0;
    }
    else {
      bVar4 = iVar2 + local_28.Data.ArrayNum == 1;
    }
    bVar1 = true;
    if (bVar4) goto LAB_14ec597fa;
    bVar4 = false;
  }
  if (bVar1) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  bVar1 = false;
  if ((this->Type).Data.ArrayNum < 2) {
LAB_14ec59872:
    bVar5 = true;
  }
  else {
    bVar1 = true;
    local_res10 = *(FName *)(param_1->_padding_ + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    iVar2 = (this->Type).Data.ArrayNum;
    if (iVar2 == local_28.Data.ArrayNum) {
      if (iVar2 < 2) goto LAB_14ec59872;
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->Type).Data.AllocatorInstance.Data,
                         (wchar_t *)local_28.Data.AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = iVar2 + local_28.Data.ArrayNum == 1;
    }
    if (bVar5) goto LAB_14ec59872;
    bVar5 = false;
  }
  if ((bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  bVar1 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&this->UniqueId);
  if (bVar1) {
    pFVar3 = AOnlineBeaconClient::GetUniqueId(param_1);
    bVar1 = ::operator==((FUniqueNetIdWrapper *)&this->UniqueId,(FUniqueNetIdWrapper *)pFVar3);
    if (!bVar1) goto LAB_14ec598b0;
  }
  bVar1 = true;
LAB_14ec598b0:
  if ((this->bIsWildcard == false) && (((!bVar4 || (!bVar5)) || (bVar1 == false)))) {
    return false;
  }
  return true;
}

// operator() @ 14ec59900

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FOnlineBeaconClientFilter::operator()(FOnlineBeaconClientFilter *this,UObject *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (param_1 != (UObject *)0x0) {
    pUVar3 = AOnlineBeaconClient::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14ec5993a;
  }
  param_1 = (UObject *)0x0;
LAB_14ec5993a:
  bVar2 = operator()(this,(AOnlineBeaconClient *)param_1);
  return bVar2;
}

// Parse @ 14ec8d440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FOnlineBeaconClientFilter::Parse
          (wchar_t *param_1,FOnlineBeaconClientFilter *param_2,
          FOnlineBeaconClientFilterFlags param_3)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStackY_138 [32];
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FOnlineBeaconClientFilter local_c8;
  FUniqueNetIdRepl local_70;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar7 = true;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  FParse::Value(param_1,L"Name=",&local_e8,true,(wchar_t **)0x0);
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  FParse::Value(param_1,L"Type=",&local_f8,true,(wchar_t **)0x0);
  local_70._padding_._0_1_ = 0;
  local_70.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  local_70.ReplicationBytes.ArrayNum = 0;
  local_70.ReplicationBytes.ArrayMax = 0;
  local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.Data.ArrayNum = 0;
  local_d8.Data.ArrayMax = 0;
  local_70._padding_ = 0;
  local_70._padding_ = 0;
  bVar5 = FParse::Value(param_1,L"UniqueId=",&local_d8,true,(wchar_t **)0x0);
  if (bVar5) {
    FUniqueNetIdRepl::FromJson(&local_70,&local_d8);
    bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_70);
    if (!bVar5) {
      if (2 < (byte)LogBeacon._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
      }
      bVar7 = false;
    }
  }
  if ((local_e8.Data.ArrayNum < 2) && (local_f8.Data.ArrayNum < 2)) {
    bVar6 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_70);
    bVar5 = false;
    if (bVar6) goto LAB_14ec8d570;
  }
  else {
LAB_14ec8d570:
    bVar5 = true;
  }
  FVar4.Data = local_e8.Data.AllocatorInstance.Data;
  if (((param_3 & WildcardAllowed) != None) || (bVar5)) {
    if (bVar7) {
      lVar10 = (longlong)local_e8.Data.ArrayNum;
      local_c8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Name.Data.ArrayNum = local_e8.Data.ArrayNum;
      if (local_e8.Data.ArrayNum == 0) {
        local_c8.Name.Data._8_8_ = local_e8.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8,
                   local_e8.Data.ArrayNum,&local_c8.Name.Data.ArrayMax);
        memcpy(local_c8.Name.Data.AllocatorInstance.Data,FVar4.Data,lVar10 * 2);
      }
      FVar4.Data = local_f8.Data.AllocatorInstance.Data;
      lVar10 = (longlong)local_f8.Data.ArrayNum;
      local_c8.Type.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.Type.Data.ArrayNum = local_f8.Data.ArrayNum;
      if (local_f8.Data.ArrayNum == 0) {
        local_c8.Type.Data._8_8_ = local_f8.Data._8_8_ & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_c8.Type,
                   local_f8.Data.ArrayNum,&local_c8.Type.Data.ArrayMax);
        memcpy(local_c8.Type.Data.AllocatorInstance.Data,FVar4.Data,lVar10 * 2);
      }
      uVar9 = (ulonglong)(byte)local_70._padding_;
      local_c8.UniqueId._padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
      local_c8.UniqueId._padding_._0_1_ = (byte)local_70._padding_;
      if ((1 < (byte)local_70._padding_) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xec,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar9] ==
          UE::Core::Private::TCopyConstructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Construct)
      {
        local_c8.UniqueId._padding_ = local_70._padding_;
        local_c8.UniqueId._padding_ = local_70._padding_;
        if ((TReferenceControllerBase<1> *)local_70._padding_ != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          *(atomic<int> *)(local_70._padding_ + 8) =
               (atomic<int>)((int)*(atomic<int> *)(local_70._padding_ + 8) + 1);
          UNLOCK();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                    ::__l2::CopyConstructors)[uVar9])
                  (&local_c8.UniqueId._padding_,&local_70._padding_);
      }
      local_c8.UniqueId.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.UniqueId._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
      local_c8.UniqueId.ReplicationBytes.ArrayNum = 0;
      local_c8.UniqueId.ReplicationBytes.ArrayMax = 0;
      local_c8.bIsWildcard = false;
      local_c8.Flags = param_3;
      if ((param_3 & WildcardAllowed) != None) {
        if ((local_e8.Data.ArrayNum < 2) && (local_f8.Data.ArrayNum < 2)) {
          bVar7 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)&local_70);
          local_c8.bIsWildcard = true;
          if (!bVar7) goto LAB_14ec8d733;
        }
        local_c8.bIsWildcard = false;
      }
LAB_14ec8d733:
      if (param_2 != &local_c8) {
        pFVar2 = (param_2->Name).Data.AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (param_2->Name).Data.AllocatorInstance.Data = local_c8.Name.Data.AllocatorInstance.Data;
        (param_2->Name).Data.ArrayNum = local_c8.Name.Data.ArrayNum;
        (param_2->Name).Data.ArrayMax = local_c8.Name.Data.ArrayMax;
        local_c8.Name.Data.ArrayNum = 0;
        local_c8.Name.Data.ArrayMax = 0;
        local_c8.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      pFVar1 = &param_2->Type;
      if (pFVar1 != &local_c8.Type) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = local_c8.Type.Data.AllocatorInstance.Data;
        (param_2->Type).Data.ArrayNum = local_c8.Type.Data.ArrayNum;
        (param_2->Type).Data.ArrayMax = local_c8.Type.Data.ArrayMax;
        local_c8.Type.Data.ArrayNum = 0;
        local_c8.Type.Data.ArrayMax = 0;
        local_c8.Type.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      FUniqueNetIdRepl::operator=(&param_2->UniqueId,&local_c8.UniqueId);
      param_2->bIsWildcard = local_c8.bIsWildcard;
      param_2->Flags = local_c8.Flags;
      local_c8.UniqueId._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
      if (local_c8.UniqueId.ReplicationBytes.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.UniqueId.ReplicationBytes.AllocatorInstance.Data);
      }
      uVar9 = (ulonglong)(byte)local_c8.UniqueId._padding_;
      if ((1 < (byte)local_c8.UniqueId._padding_) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_c8.UniqueId._padding_);
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(&local_c8.UniqueId._padding_);
      }
      if (local_c8.Type.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Type.Data.AllocatorInstance.Data);
      }
      if (local_c8.Name.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Name.Data.AllocatorInstance.Data);
      }
      bVar7 = true;
      goto LAB_14ec8d838;
    }
  }
  else if (2 < (byte)LogBeacon._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBeacon);
  }
  bVar7 = false;
LAB_14ec8d838:
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  local_70._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  if (local_70.ReplicationBytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.ReplicationBytes.AllocatorInstance.Data);
  }
  uVar9 = (ulonglong)(byte)local_70._padding_;
  if ((1 < (byte)local_70._padding_) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar8 = (*pcVar3)();
    return (bool)uVar8;
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9] ==
      UE::Core::Private::TDestructorCaller<TSharedPtr<FUniqueNetId_const_,1>_>::Destruct) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_70._padding_);
  }
  else {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar9])(&local_70._padding_);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

// ToString @ 14ec9bc20

FString * __thiscall
FOnlineBeaconClientFilter::ToString(FOnlineBeaconClientFilter *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  if (this->bIsWildcard != false) {
    ::FString::FString(__return_storage_ptr__,L"Wildcard");
    return __return_storage_ptr__;
  }
  FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)&this->UniqueId,&local_18);
  ::FString::PrintfImpl(__return_storage_ptr__,L"Name: %s, Type: %s, UniqueId: %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

