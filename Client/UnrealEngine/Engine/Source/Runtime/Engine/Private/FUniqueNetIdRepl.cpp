// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// operator= @ 147bc03b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FUniqueNetIdRepl * __thiscall
FUniqueNetIdRepl::operator=(FUniqueNetIdRepl *this,FUniqueNetIdRepl *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  byte bVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  FUniqueNetIdRepl *pFVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  plVar1 = &this->_padding_;
  if (&param_1->_padding_ != plVar1) {
    bVar3 = (byte)param_1->_padding_;
    local_38 = CONCAT71(local_38._1_7_,bVar3);
    if (1 < (ulonglong)bVar3) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xec,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FUniqueNetIdRepl *)(*pcVar4)();
        return pFVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
                ::__l2::CopyConstructors)[bVar3])(&local_48,&param_1->_padding_);
    uVar2 = this->_padding_;
    lVar5 = *plVar1;
    lVar6 = this->_padding_;
    *plVar1 = local_48;
    this->_padding_ = lStack_40;
    this->_padding_ = local_38;
    local_48 = lVar5;
    lStack_40 = lVar6;
    local_38 = uVar2;
    if (1 < (uVar2 & 0xff)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FUniqueNetIdRepl *)(*pcVar4)();
        return pFVar8;
      }
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar2 & 0xff])(&local_48);
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&this->ReplicationBytes,&param_1->ReplicationBytes);
  return this;
}

// FUniqueNetIdRepl @ 148014d30

FUniqueNetIdRepl * __thiscall
FUniqueNetIdRepl::FUniqueNetIdRepl(FUniqueNetIdRepl *this,FUniqueNetIdRepl *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FUniqueNetIdRepl *pFVar4;
  
  this->_padding_ = (longlong)&___7FUniqueNetIdWrapper__6B_;
  bVar1 = (byte)param_1->_padding_;
  *(byte *)&this->_padding_ = bVar1;
  if (1 < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(CopyConstructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xec,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FUniqueNetIdRepl *)(*pcVar2)();
      return pFVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TCopyConstructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Construct(unsigned___int64,void*___ptr64,void_const*___ptr64)'
              ::__l2::CopyConstructors)[bVar1])(&this->_padding_,&param_1->_padding_);
  this->_padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
  (this->ReplicationBytes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReplicationBytes).ArrayNum = 0;
  (this->ReplicationBytes).ArrayMax = 0;
  return this;
}

// StaticStruct @ 148073710

UScriptStruct * __cdecl FUniqueNetIdRepl::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUniqueNetIdRepl.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FUniqueNetIdRepl.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUniqueNetIdRepl,(UObject *)pUVar1,
                         L"UniqueNetIdRepl");
  }
  return Z_Registration_Info_UScriptStruct_FUniqueNetIdRepl.OuterSingleton;
}

// ExportTextItem @ 1480a0e80

bool __thiscall
FUniqueNetIdRepl::ExportTextItem
          (FUniqueNetIdRepl *this,FString *param_1,FUniqueNetIdRepl *param_2,UObject *param_3,
          int param_4,UObject *param_5)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  undefined1 uVar5;
  UOnlineEngineInterface *pUVar6;
  FName *pFVar7;
  FString *pFVar8;
  int iVar9;
  ulonglong uVar10;
  FString local_88;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_38;
  FString local_28;
  FString local_18;
  
  bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)this);
  _Src = InvalidUniqueNetIdStr.Data.AllocatorInstance;
  if (!bVar4) {
    if (param_1 == &InvalidUniqueNetIdStr) {
      return true;
    }
    piVar1 = &(param_1->Data).ArrayMax;
    iVar9 = InvalidUniqueNetIdStr.Data.ArrayNum;
    (param_1->Data).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return true;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar9,*piVar1,(ForAnyElementType *)param_1,iVar9,piVar1);
    if (iVar9 == 0) {
      return true;
    }
    memcpy((param_1->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar9 * 2);
    return true;
  }
  uVar10 = (ulonglong)(byte)this->_padding_;
  if ((1 < uVar10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar10 + 4) == '\0') {
    pFVar8 = FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)this,&local_18);
    iVar2 = (pFVar8->Data).ArrayNum;
    iVar9 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)(pFVar8->Data).AllocatorInstance.Data,iVar9);
    if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return true;
    }
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
    return true;
  }
  FUniqueNetIdWrapper::GetType((FUniqueNetIdWrapper *)this);
  FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)this,&local_88);
  pUVar6 = UOnlineEngineInterface::Get();
  pFVar7 = (FName *)(**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6);
  if (local_78 == *pFVar7) {
    bVar4 = ShouldExportTextItemAsQuotedString(&local_88);
    if (!bVar4) {
      iVar9 = local_88.Data.ArrayNum + -1;
      if (local_88.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar9);
      goto LAB_1480a1088;
    }
    ::FString::PrintfImpl(&local_70,L"\"%s\"");
    iVar9 = local_70.Data.ArrayNum + -1;
    if (local_70.Data.ArrayNum == 0) {
      iVar9 = 0;
    }
    ::FString::AppendChars(param_1,(wchar_t *)local_70.Data.AllocatorInstance.Data,iVar9);
  }
  else {
    bVar4 = ShouldExportTextItemAsQuotedString(&local_88);
    if (bVar4) {
      ::FName::ToString(&local_78,&local_38);
      ::FString::PrintfImpl(&local_60,L"%s:\"%s\"");
      iVar9 = local_60.Data.ArrayNum + -1;
      if (local_60.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_60.Data.AllocatorInstance.Data,iVar9);
      local_70.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
        local_70.Data.AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      }
    }
    else {
      ::FName::ToString(&local_78,&local_28);
      ::FString::PrintfImpl(&local_50,L"%s:%s");
      iVar9 = local_50.Data.ArrayNum + -1;
      if (local_50.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AppendChars(param_1,(wchar_t *)local_50.Data.AllocatorInstance.Data,iVar9);
      local_70.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
        local_70.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      }
    }
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
LAB_1480a1088:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return true;
}

// FromJson @ 1480a2440

void __thiscall FUniqueNetIdRepl::FromJson(FUniqueNetIdRepl *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FName FVar5;
  ForAnyElementType FVar6;
  FName local_res10;
  TArray<FString,TSizedDefaultAllocator<32>_> local_28;
  undefined8 local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  local_18 = 0;
  pTStack_10 = (TReferenceControllerBase<1> *)0x0;
  (**(code **)(this->_padding_ + 8))(0,&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  if ((param_1->Data).ArrayNum < 2) {
    return;
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  iVar3 = ::FString::ParseIntoArray(param_1,&local_28,L":",true);
  if (iVar3 == 2) {
    if (local_28.ArrayNum < 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FVar6.Data = local_28.AllocatorInstance.Data + 0x10;
    if ((local_28.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(int *)(local_28.AllocatorInstance.Data + 8) == 0) {
      pFVar4 = ::FName::FName(&local_res10,L"");
      FVar5 = *pFVar4;
    }
    else {
      pFVar4 = ::FName::FName(&local_res10,*(wchar_t **)local_28.AllocatorInstance.Data);
      FVar5 = *pFVar4;
    }
  }
  else {
    if (iVar3 != 1) goto LAB_1480a25b6;
    if ((local_28.ArrayNum < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FVar5.ComparisonIndex.Value = 0;
    FVar5.Number = 0;
    FVar6.Data = local_28.AllocatorInstance.Data;
  }
  UniqueIdFromString(this,FVar5,(FString *)FVar6.Data);
LAB_1480a25b6:
  DestructItems<FString,int>((FString *)local_28.AllocatorInstance.Data,local_28.ArrayNum);
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// ImportTextItem @ 1480ac7b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FUniqueNetIdRepl::ImportTextItem
          (FUniqueNetIdRepl *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  UOnlineEngineInterface *pUVar7;
  wchar_t *pwVar8;
  FName *pFVar9;
  ForAnyElementType FVar10;
  FName local_res8;
  FName local_res10;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  undefined8 local_48;
  TReferenceControllerBase<1> *pTStack_40;
  FString local_38;
  
  local_48 = 0;
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  (**(code **)(this->_padding_ + 8))(0,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  pwVar8 = *param_1;
  bVar5 = true;
  if (pwVar8 == (wchar_t *)0x0) goto LAB_1480aca33;
  if (*pwVar8 == L'\0') {
    return true;
  }
  if ((*pwVar8 == L'(') && (pwVar8[1] == L')')) {
    *param_1 = pwVar8 + 2;
    return true;
  }
  pUVar7 = UOnlineEngineInterface::Get();
  if ((pUVar7 == (UOnlineEngineInterface *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("UOnlineEngineInterface::Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\OnlineReplStructs.cpp"
                         ,0x227,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  pwVar8 = FPropertyHelpers::ReadToken(*param_1,&local_78,false);
  if (pwVar8 != (wchar_t *)0x0) {
    *param_1 = pwVar8;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_88.Data.ArrayNum = 0;
    local_88.Data.ArrayMax = 0;
    if (*pwVar8 == L':') {
      *param_1 = pwVar8 + 1;
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_78.Data.ArrayNum != 0) {
        FVar10.Data = local_78.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::FName(&local_res10,(wchar_t *)FVar10.Data);
      local_res8 = *pFVar9;
      pwVar8 = FPropertyHelpers::ReadToken(*param_1,&local_88,false);
      if (pwVar8 != (wchar_t *)0x0) {
        *param_1 = pwVar8;
      }
    }
    else {
      iVar6 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        iVar6 = 0;
      }
      ::FString::AssignRange(&local_88,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar6);
    }
    if (local_88.Data.ArrayNum == InvalidUniqueNetIdStr.Data.ArrayNum) {
      if (1 < local_88.Data.ArrayNum) {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_88.Data.AllocatorInstance.Data,
                           (wchar_t *)InvalidUniqueNetIdStr.Data.AllocatorInstance.Data);
        bVar2 = iVar6 == 0;
        goto LAB_1480ac929;
      }
LAB_1480aca03:
      bVar5 = false;
    }
    else {
      bVar2 = local_88.Data.ArrayNum + InvalidUniqueNetIdStr.Data.ArrayNum == 1;
LAB_1480ac929:
      if (bVar2) goto LAB_1480aca03;
      pUVar7 = UOnlineEngineInterface::Get();
      cVar4 = (**(code **)(*(longlong *)pUVar7 + 0x2b0))(pUVar7,local_res8);
      if (cVar4 == '\0') {
        if ((4 < (byte)LogNet._0_1_) && (::bLogged == false)) {
          if (param_3 == (UObject *)0x0) {
            ::FString::FString(&local_68,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_3,&local_68,(UObject *)0x0);
          }
          ::FName::ToString(&local_res8,&local_38);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
          }
        }
        ::bLogged = true;
      }
      UniqueIdFromString(this,local_res8,&local_88);
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (!bVar5) {
    return true;
  }
LAB_1480aca33:
  bVar5 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)this);
  if (bVar5) {
    return true;
  }
  if (param_3 == (UObject *)0x0) {
    ::FString::FString(&local_58,L"None");
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_3,&local_58,(UObject *)0x0);
  }
  FOutputDevice::CategorizedLogfImpl
            (param_4,(FName *)&LogNet.field_0x4,Warning,
             L"Failed to import text to FUniqueNetIdRepl Parent:%s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return false;
}

// MakeReplicationData @ 1480b7cd0

void __thiscall FUniqueNetIdRepl::MakeReplicationData(FUniqueNetIdRepl *this)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_b8;
  
  bVar2 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)this);
  if (bVar2) {
    uVar3 = (ulonglong)(byte)this->_padding_;
    if (1 < uVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar3 + 4) == '\0') {
      MakeReplicationDataV2(this);
    }
    else {
      MakeReplicationDataV1(this);
    }
  }
  else {
    local_res10[0] = 3;
    (this->ReplicationBytes).ArrayNum = 0;
    if ((this->ReplicationBytes).ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,1,&(this->ReplicationBytes).AllocatorInstance,0,
                 &(this->ReplicationBytes).ArrayMax);
    }
    local_res18 = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    local_b8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_b8);
    local_b8._padding_ = 0;
    local_b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_b8.ArchiveName.ComparisonIndex.Value = 0;
    local_b8.ArchiveName.Number = 0;
    local_b8.Bytes = &this->ReplicationBytes;
    FArchiveState::SetIsSaving((FArchiveState *)&local_b8,true);
    (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
    local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(undefined1 **)(local_b8._padding_ + 8) < *(undefined1 **)local_b8._padding_ + 1) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_b8,local_res10,1);
    }
    else {
      local_res10[0] = **(undefined1 **)local_b8._padding_;
      *(longlong *)local_b8._padding_ = *(longlong *)local_b8._padding_ + 1;
    }
    FArchive::~FArchive((FArchive *)&local_b8);
  }
  return;
}

// MakeReplicationDataV1 @ 1480b7e50

void __thiscall FUniqueNetIdRepl::MakeReplicationDataV1(FUniqueNetIdRepl *this)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  UOnlineEngineInterface *pUVar12;
  byte bVar13;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar14;
  byte bVar15;
  ForAnyElementType FVar16;
  int iVar17;
  uint uVar18;
  uint local_res10 [2];
  byte local_res18 [8];
  undefined1 local_res20 [8];
  FName local_2d0;
  FString local_2c8;
  undefined8 local_2b8;
  FName local_2b0;
  FName local_2a8;
  TSharedPtr<FUniqueNetId_const_,1> local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_248;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_198;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_e8;
  
  bVar7 = false;
  bVar5 = false;
  local_res10[0]._0_1_ = 0;
  local_res10[0]._1_3_ = 0;
  FUniqueNetIdWrapper::GetV1((FUniqueNetIdWrapper *)this,&local_2a0);
  if ((local_2a0.Object == (FUniqueNetId *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (**(code **)(*(longlong *)local_2a0.Object + 0x30))(local_2a0.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a0.SharedReferenceCount.ReferenceController);
  iVar17 = local_2c8.Data.ArrayNum + -1;
  if (local_2c8.Data.ArrayNum == 0) {
    iVar17 = 0;
  }
  if (iVar17 < 1) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5542911803819819150>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\OnlineReplStructs.cpp"
                       ,0x8e,"Length > 0");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res20[0] = 3;
    (this->ReplicationBytes).ArrayNum = 0;
    if ((this->ReplicationBytes).ArrayMax != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,1,&(this->ReplicationBytes).AllocatorInstance,0,
                 &(this->ReplicationBytes).ArrayMax);
    }
    local_2b8 = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    local_e8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_e8);
    local_e8._padding_ = 0;
    local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_e8.ArchiveName.ComparisonIndex.Value = 0;
    local_e8.ArchiveName.Number = 0;
    local_e8.Bytes = &this->ReplicationBytes;
    FArchiveState::SetIsSaving((FArchiveState *)&local_e8,true);
    (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
    local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(undefined1 **)(local_e8._padding_ + 8) < *(undefined1 **)local_e8._padding_ + 1) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_e8,local_res20,1);
      this_00 = &local_e8;
    }
    else {
      local_res20[0] = **(undefined1 **)local_e8._padding_;
      *(longlong *)local_e8._padding_ = *(longlong *)local_e8._padding_ + 1;
      this_00 = &local_e8;
    }
    goto LAB_1480b857b;
  }
  bVar15 = ~(byte)iVar17 & 1;
  uVar11 = (longlong)iVar17 + 1U >> 1;
  bVar8 = ::FString::IsNumeric(&local_2c8);
  bVar6 = bVar5;
  if (bVar8) {
    ::FString::FString(&local_280,"+");
    bVar7 = false;
    bVar6 = true;
    iVar9 = local_280.Data.ArrayNum + -1;
    FVar16.Data = local_280.Data.AllocatorInstance.Data;
    if (local_280.Data.ArrayNum == 0) {
      iVar9 = 0;
      FVar16.Data = (FScriptContainerElement *)L"";
    }
    bVar8 = ::FString::StartsWith(&local_2c8,(wchar_t *)FVar16.Data,iVar9,IgnoreCase);
    if (!bVar8) {
      ::FString::FString(&local_290,"-");
      bVar7 = true;
      bVar6 = true;
      iVar9 = local_290.Data.ArrayNum + -1;
      FVar16.Data = local_290.Data.AllocatorInstance.Data;
      if (local_290.Data.ArrayNum == 0) {
        iVar9 = 0;
        FVar16.Data = (FScriptContainerElement *)L"";
      }
      bVar8 = ::FString::StartsWith(&local_2c8,(wchar_t *)FVar16.Data,iVar9,IgnoreCase);
      if (!bVar8) {
        bVar5 = true;
      }
    }
  }
  if ((bVar7) && (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_290.Data.AllocatorInstance.Data);
  }
  if ((bVar6) && (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_280.Data.AllocatorInstance.Data);
  }
  uVar18 = (uint)uVar11;
  if ((bVar5) && (bVar15 == 0)) {
    bVar7 = true;
LAB_1480b8138:
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,1);
    if (bVar7) {
      local_res10[0] = CONCAT31(local_res10[0]._1_3_,5);
    }
    if (!bVar5) {
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_2c8.Data.ArrayNum != 0) {
        FVar16.Data = local_2c8.Data.AllocatorInstance.Data;
      }
      if (0 < iVar17) {
        lVar14 = 0;
        do {
          iVar9 = iswxdigit(*(wint_t *)(FVar16.Data + lVar14 * 2));
          if ((iVar9 == 0) || (iVar9 = iswupper(*(wint_t *)(FVar16.Data + lVar14 * 2)), iVar9 != 0))
          {
            local_res10[0] = local_res10[0] & 0xffffff00;
            break;
          }
          lVar14 = lVar14 + 1;
        } while (lVar14 < iVar17);
      }
    }
  }
  else {
    bVar7 = false;
    if ((bVar5) || ((bVar15 != 0 && (bVar7 = false, (int)uVar18 < 0xff)))) goto LAB_1480b8138;
    local_res10[0] = (uint)local_res10[0]._1_3_ << 8;
  }
  FUniqueNetIdWrapper::GetType((FUniqueNetIdWrapper *)this);
  pUVar12 = UOnlineEngineInterface::Get();
  bVar15 = (**(code **)(*(longlong *)pUVar12 + 0x2e8))(pUVar12);
  if (bVar15 < 0x20) {
    if ((bVar15 == 0) && (local_2d0 != (FName)0x0)) {
      bVar15 = 0x1f;
    }
  }
  else {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5542911803819819183>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\OnlineReplStructs.cpp"
                       ,0xaf,"TypeHash < 32");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar1 = &this->ReplicationBytes;
  bVar13 = (byte)local_res10[0] | bVar15 << 3;
  local_res10[0]._0_1_ = bVar13;
  if ((local_res10[0] & 1) == 0) {
    uVar18 = iVar17 * 2 + 5;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    piVar2 = &(this->ReplicationBytes).ArrayMax;
    (this->ReplicationBytes).ArrayNum = 0;
    if (*piVar2 != uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar18,&pTVar1->AllocatorInstance,0,piVar2);
    }
    local_2a8.ComparisonIndex.Value = 0;
    local_2a8.Number = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    local_198._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_198);
    local_198._padding_ = 0;
    local_198._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_198.ArchiveName = local_2a8;
    local_198.Bytes = pTVar1;
    FArchiveState::SetIsSaving((FArchiveState *)&local_198,true);
    (**(code **)(local_198._padding_ + 0x108))(&local_198,0);
    local_198._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(byte **)(local_198._padding_ + 8) < *(byte **)local_198._padding_ + 1) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_198,local_res10,1);
    }
    else {
      local_res10[0]._0_1_ = **(byte **)local_198._padding_;
      *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 1;
    }
    if (bVar15 == 0x1f) {
      ::FName::ToString(&local_2d0,&local_260);
      ::operator<<((FArchive *)&local_198,&local_260);
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
    }
    ::operator<<((FArchive *)&local_198,&local_2c8);
    this_00 = &local_198;
  }
  else {
    piVar2 = &(this->ReplicationBytes).ArrayNum;
    piVar3 = &(this->ReplicationBytes).ArrayMax;
    local_res18[0] = (byte)uVar11;
    *piVar2 = 0;
    iVar17 = (uVar18 & 0xff) + 2;
    if (*piVar3 != iVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar17,&pTVar1->AllocatorInstance,0,piVar3);
    }
    local_2b0.ComparisonIndex.Value = 0;
    local_2b0.Number = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    local_248._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_248);
    local_248._padding_ = 0;
    local_248._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_248.ArchiveName = local_2b0;
    local_248.Bytes = pTVar1;
    FArchiveState::SetIsSaving((FArchiveState *)&local_248,true);
    (**(code **)(local_248._padding_ + 0x108))(&local_248,0);
    local_248._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(byte **)(local_248._padding_ + 8) < *(byte **)local_248._padding_ + 1) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_248,local_res10,1);
    }
    else {
      local_res10[0]._0_1_ = **(byte **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 1;
    }
    if (bVar15 == 0x1f) {
      ::FName::ToString(&local_2d0,&local_270);
      ::operator<<((FArchive *)&local_248,&local_270);
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
    }
    if (*(byte **)(local_248._padding_ + 8) < *(byte **)local_248._padding_ + 1) {
      if (*(code **)(local_248._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_248,local_res18,1);
      }
      else {
        (**(code **)(local_248._padding_ + 0x188))();
      }
    }
    else {
      local_res18[0] = **(byte **)local_248._padding_;
      *(longlong *)local_248._padding_ = *(longlong *)local_248._padding_ + 1;
    }
    lVar14 = (longlong)(int)local_248._padding_;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(uint)local_res18[0],&pTVar1->AllocatorInstance,piVar2,piVar3);
    uVar10 = HexToBytes(&local_2c8,(uchar *)((pTVar1->AllocatorInstance).Data + lVar14));
    if ((uVar10 != uVar18) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<5542911803819819208>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\OnlineReplStructs.cpp"
                           ,200,"HexEncodeLength == EncodedSize32"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_00 = &local_248;
  }
LAB_1480b857b:
  FArchive::~FArchive((FArchive *)this_00);
  if (local_2c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c8.Data.AllocatorInstance.Data);
  }
  return;
}

// MakeReplicationDataV2 @ 1480b85c0

void __thiscall FUniqueNetIdRepl::MakeReplicationDataV2(FUniqueNetIdRepl *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  FOnlineIdRegistryRegistry *this_00;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> local_res18 [2];
  undefined8 local_res20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_d8;
  
  uVar4 = (ulonglong)(byte)this->_padding_;
  local_res10[0] = 0xf1;
  local_res18[0].Value = 0;
  if (1 < uVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar4) == '\0') {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8098327459864248889>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreOnline\\Public\\Online\\CoreOnline.h"
                       ,0x239,"IsV2()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((char)this->_padding_ != '\x01') {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index == TypeIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                         ,0x97,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_res18[0].Value = (uint)this->_padding_;
  }
  local_res8[0] = (undefined1)(local_res18[0].Value >> 0x18);
  this_00 = UE::Online::FOnlineIdRegistryRegistry::Get();
  UE::Online::FOnlineIdRegistryRegistry::ToReplicationData(this_00,&local_e8,local_res18);
  uVar5 = local_e8.ArrayNum + 6;
  if (-1 < (int)uVar5) {
    piVar1 = &(this->ReplicationBytes).ArrayMax;
    (this->ReplicationBytes).ArrayNum = 0;
    if (*piVar1 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar5,&(this->ReplicationBytes).AllocatorInstance,0,piVar1);
    }
    local_res20 = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    local_d8._padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)&local_d8);
    local_d8._padding_ = 0;
    local_d8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_d8.ArchiveName.ComparisonIndex.Value = 0;
    local_d8.ArchiveName.Number = 0;
    local_d8.Bytes = &this->ReplicationBytes;
    FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    if (*(undefined1 **)(local_d8._padding_ + 8) < *(undefined1 **)local_d8._padding_ + 1) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,local_res10,1);
    }
    else {
      local_res10[0] = **(undefined1 **)local_d8._padding_;
      *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 1;
    }
    if (*(undefined1 **)(local_d8._padding_ + 8) < *(undefined1 **)local_d8._padding_ + 1) {
      if (*(code **)(local_d8._padding_ + 0x188) ==
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,local_res8,1);
      }
      else {
        (**(code **)(local_d8._padding_ + 0x188))();
      }
    }
    else {
      local_res8[0] = **(undefined1 **)local_d8._padding_;
      *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 1;
    }
    TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
              ((FArchive *)&local_d8,&local_e8);
    FArchive::~FArchive((FArchive *)&local_d8);
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
}

// NetSerialize @ 1480b8a30

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FUniqueNetIdRepl::NetSerialize
          (FUniqueNetIdRepl *this,FArchive *param_1,UPackageMap *param_2,bool *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FOnlineIdRegistryRegistry *this_00;
  ulonglong uVar5;
  EUniqueIdEncodingFlags local_res10 [16];
  undefined1 local_res20 [8];
  byte local_108 [4];
  undefined1 local_104 [4];
  undefined8 local_100;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8;
  TReferenceControllerBase<1> *pTStack_e0;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_d8;
  
  *param_3 = false;
  if ((param_1->field_0x28 & 4) != 0) {
    if ((this->ReplicationBytes).ArrayNum == 0) {
      bVar3 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)this);
      if (bVar3) {
        uVar5 = (ulonglong)(byte)this->_padding_;
        if (1 < uVar5) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        if (*(char *)((longlong)
                      &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<struct_UE::Online::OnlineIdHandleTags::FAccount>_>::IsSame(unsigned___int64)'
                       ::__l2::bIsSameType + uVar5 + 4) == '\0') {
          MakeReplicationDataV2(this);
        }
        else {
          MakeReplicationDataV1(this);
        }
      }
      else {
        local_res20[0] = 3;
        (this->ReplicationBytes).ArrayNum = 0;
        if ((this->ReplicationBytes).ArrayMax != 1) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,1,&(this->ReplicationBytes).AllocatorInstance,0,
                     &(this->ReplicationBytes).ArrayMax);
        }
        local_100 = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        local_d8._padding_ = 0;
        FArchiveState::FArchiveState((FArchiveState *)&local_d8);
        local_d8._padding_ = 0;
        local_d8._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_d8.ArchiveName.ComparisonIndex.Value = 0;
        local_d8.ArchiveName.Number = 0;
        local_d8.Bytes = &this->ReplicationBytes;
        FArchiveState::SetIsSaving((FArchiveState *)&local_d8,true);
        (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
        local_d8._padding_ = (longlong)&___7FMemoryWriter__6B_;
        if (*(undefined1 **)(local_d8._padding_ + 8) < *(undefined1 **)local_d8._padding_ + 1) {
          TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_d8,local_res20,1);
        }
        else {
          local_res20[0] = **(undefined1 **)local_d8._padding_;
          *(longlong *)local_d8._padding_ = *(longlong *)local_d8._padding_ + 1;
        }
        FArchive::~FArchive((FArchive *)&local_d8);
      }
    }
    (**(code **)(*(longlong *)param_1 + 0x188))
              (param_1,(this->ReplicationBytes).AllocatorInstance.Data,
               (longlong)(this->ReplicationBytes).ArrayNum);
    *param_3 = 0 < (this->ReplicationBytes).ArrayNum;
    return true;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    local_e8 = 0;
    pTStack_e0 = (TReferenceControllerBase<1> *)0x0;
    (**(code **)(this->_padding_ + 8))(0,&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e0);
    plVar1 = *(longlong **)&param_1->field_0x8;
    local_res10[0] = NotEncoded;
    if ((EUniqueIdEncodingFlags *)plVar1[1] < (EUniqueIdEncodingFlags *)*plVar1 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
    }
    else {
      local_res10[0] = *(EUniqueIdEncodingFlags *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    if ((param_1->field_0x29 & 2) == 0) {
      if ((local_res10[0] & IsEncoded) == NotEncoded) {
        NetSerializeLoadV1Unencoded(this,param_1,local_res10[0],param_3);
        return true;
      }
      if ((local_res10[0] & IsEmpty) != NotEncoded) {
        *param_3 = true;
        return true;
      }
      if ((local_res10[0] & TypeMask) != (Reserved5|Reserved4|Reserved3|Reserved2)) {
        NetSerializeLoadV1Encoded(this,param_1,local_res10[0],param_3);
        return true;
      }
      plVar1 = *(longlong **)&param_1->field_0x8;
      if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_108,1);
      }
      else {
        local_108[0] = *(byte *)*plVar1;
        *plVar1 = *plVar1 + 1;
      }
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_f8);
      this_00 = UE::Online::FOnlineIdRegistryRegistry::Get();
      UE::Online::FOnlineIdRegistryRegistry::ToAccountId
                (this_00,(EOnlineServices)local_104,
                 (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(ulonglong)local_108[0]);
      (**(code **)(this->_padding_ + 0x10))(this,local_104);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
        return true;
      }
    }
    else if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  return true;
}

// NetSerializeLoadV1Encoded @ 1480b8da0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUniqueNetIdRepl::NetSerializeLoadV1Encoded
          (FUniqueNetIdRepl *this,FArchive *param_1,EUniqueIdEncodingFlags param_2,bool *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  UOnlineEngineInterface *pUVar4;
  UOnlineEngineInterface *pUVar5;
  undefined8 *puVar6;
  FName *pFVar7;
  ulonglong uVar8;
  int iVar9;
  FStaticBasicLogRecord *pFVar10;
  ForAnyElementType FVar11;
  byte bVar12;
  FName FVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  bool bVar16;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  byte local_58 [8];
  FString local_50;
  FString local_40;
  ulonglong local_30;
  
  puVar15 = auStack_78;
  puVar14 = auStack_78;
  local_30 = __security_cookie.value ^ (ulonglong)local_58;
  bVar12 = param_2 >> 3;
  bVar16 = false;
  if (param_2 >> 3 == 0) {
    uStack_80 = 0x1480b8dea;
    pUVar4 = UOnlineEngineInterface::Get();
    pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x2e8);
    uStack_80 = 0x1480b8dfc;
    pUVar5 = UOnlineEngineInterface::Get();
    uStack_80 = 0x1480b8e0c;
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5,&local_50);
    uStack_80 = 0x1480b8e14;
    bVar12 = (*pcVar1)(pUVar4,*puVar6);
    bVar16 = bVar12 == 0;
  }
  bVar16 = !bVar16;
  if (bVar12 == 0x1f) {
    local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.Data.ArrayNum = 0;
    local_40.Data.ArrayMax = 0;
    uStack_80 = 0x1480b8e39;
    ::operator<<(param_1,&local_40);
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar11.Data = local_40.Data.AllocatorInstance.Data;
    }
    uStack_80 = 0x1480b8e52;
    pFVar7 = ::FName::FName((FName *)&local_50,(wchar_t *)FVar11.Data);
    FVar13 = *pFVar7;
    if (((param_1->field_0x29 & 2) != 0) || (FVar13 == (FName)0x0)) {
      bVar16 = false;
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      uStack_80 = 0x1480b8e71;
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
  }
  else {
    uStack_80 = 0x1480b8e78;
    pUVar4 = UOnlineEngineInterface::Get();
    uStack_80 = 0x1480b8e90;
    pFVar7 = (FName *)(**(code **)(*(longlong *)pUVar4 + 0x2f0))(pUVar4,&local_50,bVar12);
    FVar13 = *pFVar7;
  }
  if (bVar16) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    local_58[0] = 0;
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      uStack_80 = 0x1480b8ed2;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_58,1);
    }
    else {
      local_58[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    bVar12 = local_58[0];
    if ((param_1->field_0x29 & 2) == 0) {
      if (local_58[0] == 0) {
        if (2 < (byte)LogNet._0_1_) {
          pFVar10 = &::LOG_Static;
          puVar14 = auStack_78;
LAB_1480b8fe6:
          *(undefined8 *)(puVar14 + -8) = 0x1480b8ff2;
          UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogNet);
        }
      }
      else {
        uVar8 = (ulonglong)(local_58[0] + 0xf) + 0xf;
        if (uVar8 <= local_58[0] + 0xf) {
          uVar8 = 0xffffffffffffff0;
        }
        uStack_80 = 0x1480b8f09;
        lVar3 = -(uVar8 & 0xfffffffffffffff0);
        puVar14 = auStack_78 + lVar3;
        pcVar1 = *(code **)(*(longlong *)param_1 + 0x188);
        *(undefined8 *)(auStack_78 + lVar3 + -8) = 0x1480b8f2d;
        (*pcVar1)(param_1,(uchar *)((longlong)&local_50 + lVar3),bVar12);
        bVar12 = local_58[0];
        if ((param_1->field_0x29 & 2) == 0) {
          local_50.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_50.Data.ArrayNum = 0;
          local_50.Data.ArrayMax = 0;
          *(undefined8 *)(auStack_78 + lVar3 + -8) = 0x1480b8f4f;
          BytesToHex((uchar *)((longlong)&local_50 + lVar3),(uint)bVar12,&local_50);
          iVar9 = local_50.Data.ArrayNum + -1;
          if (local_50.Data.ArrayNum == 0) {
            iVar9 = 0;
          }
          if (0 < iVar9) {
            if (FVar13 == (FName)0x0) {
              if (2 < (byte)LogNet._0_1_) {
                *(undefined8 *)(auStack_78 + lVar3 + -8) = 0x1480b8fb4;
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              }
            }
            else {
              *(undefined8 *)(auStack_78 + lVar3 + -8) = 0x1480b8f6d;
              ::FString::ToLowerInline(&local_50);
              if ((param_2 & IsPadded) != NotEncoded) {
                *(undefined8 *)(auStack_78 + lVar3 + -8) = 0x1480b8f87;
                ::FString::RemoveAt(&local_50,0,1,Default);
              }
              *(undefined8 *)(auStack_78 + lVar3 + -8) = 0x1480b8f96;
              UniqueIdFromString(this,FVar13,&local_50);
            }
          }
          FVar11.Data = local_50.Data.AllocatorInstance.Data;
          puVar14 = auStack_78 + lVar3;
          if ((FName)local_50.Data.AllocatorInstance.Data != (FName)0x0) {
            *(undefined8 *)(auStack_78 + lVar3 + -8) = 0x1480b8fc2;
            FMemory::Free(FVar11.Data);
            puVar14 = auStack_78 + lVar3;
          }
        }
        else if (2 < (byte)LogNet._0_1_) {
          pFVar10 = &::LOG_Static;
          puVar14 = auStack_78 + lVar3;
          goto LAB_1480b8fe6;
        }
      }
      puVar15 = puVar14;
      if (local_58[0] != 0) {
        *(undefined8 *)(puVar14 + -8) = 0x1480b9000;
        bVar16 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)this);
        if (!bVar16) {
          *param_3 = false;
          goto LAB_1480b9040;
        }
      }
      *param_3 = true;
      goto LAB_1480b9040;
    }
    puVar15 = auStack_78;
    if ((byte)LogNet._0_1_ < 3) goto LAB_1480b9040;
    pFVar10 = &::LOG_Static;
  }
  else {
    if ((byte)LogNet._0_1_ < 3) goto LAB_1480b9040;
    pFVar10 = &::LOG_Static;
  }
  uStack_80 = 0x1480b9040;
  UE::Logging::Private::BasicLog<3>(pFVar10,(FLogCategoryBase *)&LogNet);
  puVar15 = auStack_78;
LAB_1480b9040:
  *(undefined8 *)(puVar15 + -8) = 0x1480b904c;
  return;
}

// NetSerializeLoadV1Unencoded @ 1480b9070

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FUniqueNetIdRepl::NetSerializeLoadV1Unencoded
          (FUniqueNetIdRepl *this,FArchive *param_1,EUniqueIdEncodingFlags param_2,bool *param_3)

{
  code *pcVar1;
  UOnlineEngineInterface *pUVar2;
  UOnlineEngineInterface *pUVar3;
  undefined8 *puVar4;
  FName *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  ForAnyElementType FVar7;
  byte bVar8;
  FName FVar9;
  bool bVar10;
  FName local_38;
  FString local_30;
  
  bVar8 = param_2 >> 3;
  bVar10 = false;
  if (param_2 >> 3 == 0) {
    pUVar2 = UOnlineEngineInterface::Get();
    pcVar1 = *(code **)(*(longlong *)pUVar2 + 0x2e8);
    pUVar3 = UOnlineEngineInterface::Get();
    puVar4 = (undefined8 *)(**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3,&local_38);
    bVar8 = (*pcVar1)(pUVar2,*puVar4);
    bVar10 = bVar8 == 0;
  }
  bVar10 = !bVar10;
  if (bVar8 == 0x1f) {
    local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.Data.ArrayNum = 0;
    local_30.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_30);
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_30.Data.ArrayNum != 0) {
      FVar7.Data = local_30.Data.AllocatorInstance.Data;
    }
    pFVar5 = ::FName::FName(&local_38,(wchar_t *)FVar7.Data);
    FVar9 = *pFVar5;
    if (((param_1->field_0x29 & 2) != 0) || (FVar9 == (FName)0x0)) {
      bVar10 = false;
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  else {
    pUVar2 = UOnlineEngineInterface::Get();
    pFVar5 = (FName *)(**(code **)(*(longlong *)pUVar2 + 0x2f0))(pUVar2,&local_38,bVar8);
    FVar9 = *pFVar5;
  }
  if (!bVar10) {
    if ((byte)LogNet._0_1_ < 3) {
      return;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    return;
  }
  local_30.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.Data.ArrayNum = 0;
  local_30.Data.ArrayMax = 0;
  ::operator<<(param_1,&local_30);
  if ((param_1->field_0x29 & 2) == 0) {
    if (FVar9 != (FName)0x0) {
      UniqueIdFromString(this,FVar9,&local_30);
      *param_3 = 1 < local_30.Data.ArrayNum;
      goto LAB_1480b91c5;
    }
    if ((byte)LogNet._0_1_ < 3) goto LAB_1480b91c5;
    pFVar6 = &::LOG_Static;
  }
  else {
    if ((byte)LogNet._0_1_ < 3) goto LAB_1480b91c5;
    pFVar6 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogNet);
LAB_1480b91c5:
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return;
}

// NetSerializeLoadV2 @ 1480b9220

void __thiscall
FUniqueNetIdRepl::NetSerializeLoadV2
          (FUniqueNetIdRepl *this,FArchive *param_1,EUniqueIdEncodingFlags param_2,bool *param_3)

{
  longlong *plVar1;
  FOnlineIdRegistryRegistry *this_00;
  byte local_res8 [8];
  undefined1 local_res10 [8];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(byte *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  TArrayPrivateFriend::Serialize<unsigned_char,TSizedDefaultAllocator<32>_>(param_1,&local_18);
  this_00 = UE::Online::FOnlineIdRegistryRegistry::Get();
  UE::Online::FOnlineIdRegistryRegistry::ToAccountId
            (this_00,(EOnlineServices)local_res10,
             (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(ulonglong)local_res8[0]);
  (**(code **)(this->_padding_ + 0x10))(this,local_res10);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// Serialize @ 1480cea00

bool __thiscall FUniqueNetIdRepl::Serialize(FUniqueNetIdRepl *this,FArchive *param_1)

{
  ::operator<<(param_1,this);
  return true;
}

// ShouldExportTextItemAsQuotedString @ 1480d3cb0

bool __cdecl FUniqueNetIdRepl::ShouldExportTextItemAsQuotedString(FString *param_1)

{
  wchar_t awVar1 [1];
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  ulonglong uVar6;
  uint uVar7;
  wchar_t *pwVar8;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 < 2) {
    return false;
  }
  if ((iVar2 + -1 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidIndex(Index)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                         ,0x113,
                         L"String index out of bounds: Index %i from a string with a length of %i"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  uVar6 = 0;
  awVar1[0] = *pwVar8;
  if ((ushort)awVar1[0] >> 6 == 0) {
    uVar6 = 0x3ff000000000000;
  }
  if ((((uVar6 | (ulonglong)((ushort)awVar1[0] >> 6 != 1) - 1) & 1L << ((byte)awVar1[0] & 0x3f) &
       0x7fffffe07fffffe) == 0) && ((ushort)awVar1[0] < 0x100)) {
    return true;
  }
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
    awVar1[0] = u_[0];
  }
  uVar7 = (uint)(ushort)awVar1[0];
  uVar6 = 0;
  if ((uVar7 & 0xffc0) == 0x40) {
    uVar6 = 0x7fffffe87fffffe;
  }
  for (uVar6 = (uVar6 | -(ulonglong)(uVar7 < 0x40) & 0x3ff280000000000) >> (uVar7 & 0x3f);
      (uVar6 & 1) != 0;
      uVar6 = (uVar6 | -(ulonglong)(uVar7 < 0x40) & 0x3ff280000000000) >> (uVar7 & 0x3f)) {
    awVar1[0] = *(wchar_t *)((longlong)pwVar8 + 2);
    uVar7 = (uint)(ushort)awVar1[0];
    pwVar8 = (wchar_t *)((longlong)pwVar8 + 2);
    uVar6 = 0;
    if ((uVar7 & 0xffffffc0) == 0x40) {
      uVar6 = 0x7fffffe87fffffe;
    }
  }
  return awVar1[0] != L'\0';
}

// ToJson @ 1480dc2c0

TSharedRef<FJsonValue,1> * __thiscall
FUniqueNetIdRepl::ToJson(FUniqueNetIdRepl *this,TSharedRef<FJsonValue,1> *__return_storage_ptr__)

{
  FString *pFVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FName this_00;
  TJsonValueString<wchar_t> *pTVar5;
  int iVar6;
  TRawPtrProxy<TJsonValueString<wchar_t>_> local_res18 [2];
  FString local_48;
  FString local_38;
  FString local_28;
  
  bVar4 = FUniqueNetIdWrapper::IsValid((FUniqueNetIdWrapper *)this);
  if (bVar4) {
    FUniqueNetIdWrapper::ToString((FUniqueNetIdWrapper *)this,&local_28);
    this_00 = FUniqueNetIdWrapper::GetType((FUniqueNetIdWrapper *)this);
    ::FName::ToString((FName *)this_00,&local_38);
    ::FString::PrintfImpl(&local_48,L"%s:%s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pTVar5 = ::operator_new(0x20);
    if (pTVar5 == (TJsonValueString<wchar_t> *)0x0) {
      pTVar5 = (TJsonValueString<wchar_t> *)0x0;
    }
    else {
      FJsonValue::FJsonValue((FJsonValue *)pTVar5);
      FVar3.Data = local_48.Data.AllocatorInstance.Data;
      pFVar1 = &pTVar5->Value;
      pTVar5->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
      piVar2 = &(pTVar5->Value).Data.ArrayMax;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar5->Value).Data.ArrayNum = local_48.Data.ArrayNum;
      if (local_48.Data.ArrayNum == 0) {
        *piVar2 = 0;
        *(EJson *)&pTVar5->_padding_ = String;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_48.Data.ArrayNum,
                   piVar2);
        memcpy((pFVar1->Data).AllocatorInstance.Data,FVar3.Data,(longlong)local_48.Data.ArrayNum * 2
              );
        *(EJson *)&pTVar5->_padding_ = String;
      }
    }
    local_res18[0].Object = pTVar5;
    TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><TJsonValueString<wchar_t>_>
              (__return_storage_ptr__,local_res18);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    pTVar5 = ::operator_new(0x20);
    if (pTVar5 == (TJsonValueString<wchar_t> *)0x0) {
      pTVar5 = (TJsonValueString<wchar_t> *)0x0;
    }
    else {
      FJsonValue::FJsonValue((FJsonValue *)pTVar5);
      pFVar1 = &pTVar5->Value;
      pTVar5->_padding_ = (longlong)&___7__TJsonValueString__W__6B_;
      piVar2 = &(pTVar5->Value).Data.ArrayMax;
      (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar3 = InvalidUniqueNetIdStr.Data.AllocatorInstance;
      iVar6 = InvalidUniqueNetIdStr.Data.ArrayNum;
      (pTVar5->Value).Data.ArrayNum = iVar6;
      if (iVar6 == 0) {
        *piVar2 = 0;
        *(EJson *)&pTVar5->_padding_ = String;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,0,(ForAnyElementType *)pFVar1,iVar6,piVar2);
        memcpy((pFVar1->Data).AllocatorInstance.Data,FVar3.Data,(longlong)iVar6 * 2);
        *(EJson *)&pTVar5->_padding_ = String;
      }
    }
    local_res18[0].Object = pTVar5;
    TSharedRef<FJsonValue,1>::TSharedRef<FJsonValue,1><TJsonValueString<wchar_t>_>
              (__return_storage_ptr__,local_res18);
  }
  return __return_storage_ptr__;
}

// UniqueIdFromString @ 1480e0170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FUniqueNetIdRepl::UniqueIdFromString(FUniqueNetIdRepl *this,FName param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  UOnlineEngineInterface *pUVar3;
  undefined1 auStack_68 [32];
  TSharedPtr<FUniqueNetId_const_,1> local_48;
  FUniqueNetIdWrapper local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  pUVar3 = UOnlineEngineInterface::Get();
  (**(code **)(*(longlong *)pUVar3 + 0x2f8))(pUVar3,&local_38,param_2,param_1);
  pcVar1 = *(code **)(this->_padding_ + 8);
  FUniqueNetIdWrapper::GetV1(&local_38,&local_48);
  (*pcVar1)(this,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (1 < local_38.Variant.TypeIndex) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TSharedPtr<FUniqueNetId_const_,1>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_38.Variant.TypeIndex])(&local_38.Variant);
  return;
}

