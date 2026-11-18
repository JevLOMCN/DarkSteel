// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 13

// operator() @ 146b4b3a0

bool __thiscall
`FJsonInternationalizationManifestSerializer::SortStructuredData'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FManifestEntry,1> *param_1,TSharedPtr<FManifestEntry,1> *param_2)

{
  FManifestEntry *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1->Object == (FManifestEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  pFVar1 = param_1->Object;
  if (param_2->Object == (FManifestEntry *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  bVar3 = FLocItem::operator<(&pFVar1->Source,&param_2->Object->Source);
  return bVar3;
}

// DeserializeInternal @ 146b55680

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationManifestSerializer::DeserializeInternal
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,TSharedRef<FInternationalizationManifest,1> *param_2,FName param_3)

{
  bool bVar1;
  Number local_res8;
  Number local_res20;
  FString local_28;
  TSharedRef<FInternationalizationManifest,1> local_18;
  
  local_res20 = ((param_1.value_)->data_).n;
  UE::Json::GetInt32Field
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_res8,(wchar_t *)&local_res20.i64);
  if (local_res8._4_1_ == '\0') {
    param_2->Object->FormatVersion = Initial;
  }
  else {
    if (1 < local_res8.i.i) goto LAB_146b5574d;
    param_2->Object->FormatVersion = (EFormatVersion)local_res8.i.i;
  }
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  local_res8 = ((param_1.value_)->data_).n;
  bVar1 = JsonObjToManifest((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                             *)&local_res8,&local_28,&local_18,param_3);
  if (bVar1) {
    param_2->Object->FormatVersion = EscapeFixes;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return true;
  }
LAB_146b5574d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return false;
}

// DeserializeManifestFromFile @ 146b55770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationManifestSerializer::DeserializeManifestFromFile
          (FString *param_1,TSharedRef<FInternationalizationManifest,1> *param_2,FName param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  undefined1 auStackY_168 [32];
  FString local_138;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_128;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_120;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TSharedRef<FInternationalizationManifest,1> local_e8;
  TArrayView<wchar_t,int> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FFileHelper::LoadFileToString(&local_138,pwVar7,None,0);
  FVar2.Data = local_138.Data.AllocatorInstance.Data;
  if (bVar4) {
    iVar3 = local_138.Data.ArrayNum;
    local_108 = local_138.Data.AllocatorInstance.Data;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    if ((iVar3 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    iStack_100 = iVar3;
    local_d8._12_4_ = uStack_fc;
    local_d8.ArrayNum = iVar3;
    local_d8.DataPtr = (wchar_t *)local_108;
    UE::Json::ParseInPlace(&local_a8,&local_d8);
    uVar8 = (ulonglong)local_a8.Variant.TypeIndex;
    if ((2 < uVar8) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar8) == '\0') {
      if ((local_a8.Variant.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      UE::Json::GetRootObject
                (&local_120,
                 (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  *)&local_a8);
      if (local_120.bIsSet != false) {
        local_e8.Object = param_2->Object;
        local_e8.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_120.bIsSet == false) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        local_128 = local_120.TypedValue.value_;
        bVar4 = DeserializeInternal((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                     *)&local_128,&local_e8,param_3);
        if ((2 < local_a8.Variant.TypeIndex) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
        if (FVar2.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar2.Data);
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_2->SharedReferenceCount).ReferenceController);
        return bVar4;
      }
      if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
      }
    }
    else {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar4 = FFileHelper::LoadFileToString(&local_138,pwVar7,None,0);
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<4084495941237735491>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\Serialization\\JsonInternationalizationManifestSerializer.cpp"
                             ,0x43,"FFileHelper::LoadFileToString(FileContents, *InJsonFile)"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
        if ((local_a8.Variant.TypeIndex != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        local_f8 = local_138.Data.AllocatorInstance.Data;
        iStack_f0 = local_138.Data.ArrayNum + -1;
        if (local_138.Data.ArrayNum == 0) {
          iStack_f0 = 0;
        }
        local_c8._12_4_ = uStack_ec;
        local_c8.Size = iStack_f0;
        local_c8.DataPtr = (wchar_t *)local_138.Data.AllocatorInstance.Data;
        UE::Json::FParseError::CreateMessage((FParseError *)&local_a8,&local_b8,&local_c8);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((2 < local_a8.Variant.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
  }
  else {
    if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
    }
    if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
  }
  return false;
}

// DeserializeManifestFromString @ 146b55ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationManifestSerializer::DeserializeManifestFromString
          (FString *param_1,TSharedRef<FInternationalizationManifest,1> *param_2,FName param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 auStack_138 [32];
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_118;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_110;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TSharedRef<FInternationalizationManifest,1> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_98;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_f8 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_f0 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_f0 = 0;
  }
  local_c8._12_4_ = uStack_ec;
  local_c8.Size = iStack_f0;
  local_c8.DataPtr = (wchar_t *)local_f8;
  UE::Json::Parse(&local_98,&local_c8);
  uVar6 = (ulonglong)local_98.Variant.TypeIndex;
  if ((2 < uVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x12f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar6) == '\0') {
    if ((local_98.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    UE::Json::GetRootObject
              (&local_110,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&local_98);
    if (local_110.bIsSet == false) {
      if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
      }
      if ((2 < local_98.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_98.Variant.TypeIndex])(&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      bVar3 = false;
    }
    else {
      local_d8.Object = param_2->Object;
      local_d8.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_110.bIsSet == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_118 = local_110.TypedValue.value_;
      bVar3 = DeserializeInternal((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                   *)&local_118,&local_d8,param_3);
      if ((2 < local_98.Variant.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_98.Variant.TypeIndex])(&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
    }
  }
  else {
    if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
      if ((local_98.Variant.TypeIndex != 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_e8 = (param_1->Data).AllocatorInstance.Data;
      iVar1 = (param_1->Data).ArrayNum;
      iStack_e0 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_e0 = 0;
      }
      local_b8._12_4_ = uStack_dc;
      local_b8.Size = iStack_e0;
      local_b8.DataPtr = (wchar_t *)local_e8;
      UE::Json::FParseError::CreateMessage((FParseError *)&local_98,&local_a8,&local_b8);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
    }
    if ((2 < local_98.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_98.Variant.TypeIndex])(&local_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    bVar3 = false;
  }
  return bVar3;
}

// GenerateStructuredData @ 146b6f3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __cdecl
FJsonInternationalizationManifestSerializer::GenerateStructuredData
          (TSharedRef<FInternationalizationManifest_const_,1> *param_1,
          TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> *param_2)

{
  int *piVar1;
  longlong lVar2;
  FString *this;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStructuredEntry *pFVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FStructuredEntry *pFVar15;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  FString *local_e8;
  TReferenceControllerBase<1> *local_e0;
  FStructuredEntry *local_d8;
  FSharedReferencer<1> local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  TReferenceControllerBase<1> *local_b8;
  TReferenceControllerBase<1> *pTStack_b0;
  FString *local_a8;
  TReferenceControllerBase<1> *local_a0;
  longlong *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  FScriptContainerElement *local_70;
  TReferenceControllerBase<1> **local_68;
  
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  FInternationalizationManifest::GetEntriesBySourceTextIterator
            (param_1->Object,(TConstIterator *)&local_98);
  pTVar5 = _UNK_150651568;
  pTVar4 = ___xmm_00000000000000000000000000000010;
  if (local_90.CurrentBitIndex < (local_90.Array)->NumBits) {
    do {
      local_a0 = *(TReferenceControllerBase<1> **)
                  (*local_98 + 0x18 + (longlong)local_90.CurrentBitIndex * 0x28);
      this = *(FString **)(*local_98 + 0x10 + (longlong)local_90.CurrentBitIndex * 0x28);
      if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a8 = this;
      if ((longlong)local_f8._8_8_ < 0) {
        DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
        bVar8 = local_f8.ArrayMax != 0;
        local_f8._8_8_ = (ulonglong)(uint)local_f8.ArrayMax << 0x20;
        if (bVar8) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,0,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
        }
      }
      else {
        DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
        local_f8._8_8_ = local_f8._8_8_ & 0xffffffff00000000;
      }
      pwVar16 = L"";
      if (NAMESPACE_DELIMITER.Data.ArrayNum != 0) {
        pwVar16 = (wchar_t *)NAMESPACE_DELIMITER.Data.AllocatorInstance.Data;
      }
      ::FString::ParseIntoArray(this,&local_f8,pwVar16,true);
      local_d0.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
      local_d8 = param_2->Object;
      if (local_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_d0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar11 = local_f8.ArrayNum;
      uVar12 = (ulonglong)local_f8.ArrayNum;
      pFVar17 = local_f8.AllocatorInstance.Data + uVar12 * 0x10;
      FVar18.Data = local_f8.AllocatorInstance.Data;
      while( true ) {
        pFVar6 = local_d8;
        if ((int)uVar12 != iVar11) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (FVar18.Data == pFVar17) break;
        if ((pFVar6 == (FStructuredEntry *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(FVar18.Data + 8) == 0) {
          pwVar16 = L"";
        }
        else {
          pwVar16 = *(wchar_t **)FVar18.Data;
        }
        uVar9 = FCrc::StrCrc32<wchar_t>(pwVar16,0);
        iVar10 = TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
                             *)&pFVar6->SubNamespaces,uVar9,(FString *)FVar18.Data);
        if ((iVar10 == -1) ||
           (lVar2 = *(longlong *)&pFVar6->SubNamespaces + (longlong)iVar10 * 0x28, lVar2 == 0)) {
          local_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_146b6f5c4:
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          if ((pFVar6 == (FStructuredEntry *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar13 = ::operator_new(0x80);
          if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
            local_b8 = pTVar4;
            pTStack_b0 = pTVar5;
          }
          else {
            pTVar13->SharedReferenceCount = (atomic<int>)0x1;
            pTVar13->WeakReferenceCount = (atomic<int>)0x1;
            pTVar13->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_UFStructuredEntry_FJsonInternationalizationManifestSerializer___00_SharedPointerInternals__6B_
            ;
            ::FString::FString((FString *)(pTVar13 + 1),(FString *)FVar18.Data);
            pTVar13[2]._padding_ = 0;
            pTVar13[4]._padding_ = 0;
            pTVar13[2].SharedReferenceCount = (atomic<int>)0x0;
            pTVar13[2].WeakReferenceCount = (atomic<int>)0x0;
            pTVar13[4].SharedReferenceCount = (atomic<int>)0x0;
            pTVar13[4].WeakReferenceCount = (atomic<int>)0x80;
            *(undefined4 *)((longlong)&pTVar13[5]._padding_ + 4) = 0;
            *(undefined4 *)&pTVar13[5]._padding_ = 0xffffffff;
            pTVar13[6]._padding_ = 0;
            pTVar13[6].SharedReferenceCount = (atomic<int>)0x0;
            pTVar13[7]._padding_ = 0;
            pTVar13[7].SharedReferenceCount = (atomic<int>)0x0;
            pTVar13[7].WeakReferenceCount = (atomic<int>)0x0;
            if ((pTVar13 + 1 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
            pTVar14 = pTVar13;
            local_b8 = pTVar13 + 1;
            pTStack_b0 = pTVar13;
          }
          local_68 = &local_b8;
          local_70 = FVar18.Data;
          TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FString_const_&,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_&&>_>
                    ((TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
                      *)&pFVar6->SubNamespaces,
                     (TPairInitializer<FString_const_&,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_&&>
                      *)&local_res20,(bool *)&local_70);
          FVar7.ReferenceController = local_c0.ReferenceController;
          lVar2 = *(longlong *)&(pFVar6->SubNamespaces).field_0x0;
          local_c0.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar2 + 0x18 + (longlong)local_res20 * 0x28);
          pFVar15 = *(FStructuredEntry **)(lVar2 + 0x10 + (longlong)local_res20 * 0x28);
          if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar7.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_b0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar14);
        }
        else {
          pFVar15 = *(FStructuredEntry **)(lVar2 + 0x10);
          local_c0.ReferenceController = *(TReferenceControllerBase<1> **)(lVar2 + 0x18);
          if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar15 == (FStructuredEntry *)0x0) goto LAB_146b6f5c4;
        }
        local_c8 = 0;
        local_d8 = pFVar15;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_c0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.ReferenceController);
        uVar12 = local_f8._8_8_ & 0xffffffff;
        FVar18.Data = FVar18.Data + 0x10;
      }
      if ((pFVar6 == (FStructuredEntry *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar14 = local_a0;
      local_e8 = local_a8;
      local_e0 = local_a0;
      if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar17 = (pFVar6->ManifestEntries).AllocatorInstance.Data;
      if (((pFVar17 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           pFVar17 + (longlong)(pFVar6->ManifestEntries).ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar11 = (pFVar6->ManifestEntries).ArrayNum;
      piVar1 = &(pFVar6->ManifestEntries).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar6->ManifestEntries).AllocatorInstance,piVar1);
      }
      (pFVar6->ManifestEntries).ArrayNum = iVar11 + 1;
      pFVar17 = (pFVar6->ManifestEntries).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
      *(FString **)pFVar17 = local_e8;
      *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_e0;
      local_e0 = (TReferenceControllerBase<1> *)0x0;
      local_e8 = (FString *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      local_90.UnvisitedBitMask = local_90.UnvisitedBitMask & ~local_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_90);
    } while (local_90.CurrentBitIndex < (local_90.Array)->NumBits);
  }
  DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// JsonObjToManifest @ 146b7bc40

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationManifestSerializer::JsonObjToManifest
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,FString *param_2,TSharedRef<FInternationalizationManifest,1> *param_3,
          FName param_4)

{
  FInternationalizationManifest *this;
  code *pcVar1;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar2;
  FLocMetadataObject *pFVar3;
  FSharedReferencer<1> FVar4;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar5;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar11;
  TSharedPtr<FLocMetadataValue,1> *pTVar12;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  **ppTVar13;
  FString *pFVar14;
  TOptional<TStringView<wchar_t>_> *pTVar15;
  FLocMetadataObject **ppFVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  FSharedReferencer<1> FVar19;
  FScriptContainerElement *pFVar20;
  TReferenceControllerBase<1> *pTVar21;
  longlong lVar22;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  *this_00;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  FString local_3b8;
  undefined1 local_3a8;
  char local_3a7;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  *local_3a0;
  FSharedReferencer<1> FStack_398;
  FString local_390;
  ForAnyElementType local_380;
  undefined8 local_378;
  FLocItem local_370;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_350;
  FLocKey local_348;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_330;
  FString local_320;
  FManifestContext local_308;
  FLocMetadataObject *local_2a8;
  FSharedReferencer<1> FStack_2a0;
  FLocMetadataObject *local_298;
  FSharedReferencer<1> FStack_290;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_288;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_278;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_270;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_268;
  ulonglong local_260;
  ulonglong local_258;
  ulonglong local_250;
  ulonglong local_248;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_240;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_238;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_230;
  Number local_228;
  ulonglong local_220;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_218;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_208;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_1f8;
  Number local_1e8;
  Number local_1e0;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_1d8;
  TOptional<TStringView<wchar_t>_> local_1d0;
  TOptional<TStringView<wchar_t>_> local_1b8;
  TSharedPtr<FLocMetadataObject,1> local_1a0;
  TSharedRef<FInternationalizationManifest,1> local_190;
  undefined1 local_180 [16];
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_170;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_160;
  TOptional<TStringView<wchar_t>_> local_150;
  TOptional<TStringView<wchar_t>_> local_138;
  TOptional<TStringView<wchar_t>_> local_120;
  undefined1 local_108 [8];
  TReferenceControllerBase<1> *local_100;
  TSharedPtr<FLocMetadataValue,1> local_f8;
  FString local_e8;
  undefined1 local_d8 [8];
  TReferenceControllerBase<1> *local_d0;
  TSharedPtr<FLocMetadataValue,1> local_c8;
  TReferenceControllerBase<1> *local_b0;
  TSharedPtr<FLocMetadataValue,1> local_a8;
  FString local_98;
  FString local_88;
  wchar_t *local_78;
  undefined8 uStack_70;
  FLocMetadataObject *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  FLocMetadataObject *local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_3b8.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar22 = (longlong)local_3b8.Data.ArrayNum;
  pFVar20 = (param_2->Data).AllocatorInstance.Data;
  local_3b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_3b8.Data.ArrayNum == 0) {
    local_3b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_3b8.Data.ArrayNum,0,(ForAnyElementType *)&local_3b8,local_3b8.Data.ArrayNum
               ,&local_3b8.Data.ArrayMax);
    memcpy(local_3b8.Data.AllocatorInstance.Data,pFVar20,lVar22 * 2);
  }
  pwVar23 = L"";
  local_1e8 = ((param_1.value_)->data_).n;
  if (TAG_NAMESPACE.Data.ArrayNum != 0) {
    pwVar23 = (wchar_t *)TAG_NAMESPACE.Data.AllocatorInstance.Data;
  }
  UE::Json::GetStringField
            (&local_1d0,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_1e8
             ,pwVar23);
  if (local_1d0.bIsSet == false) {
LAB_146b7caf5:
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    pFVar20 = (param_2->Data).AllocatorInstance.Data;
LAB_146b7cb08:
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    pTVar21 = (param_3->SharedReferenceCount).ReferenceController;
LAB_146b7cb16:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    bVar7 = false;
  }
  else {
    if (1 < local_3b8.Data.ArrayNum) {
      iVar27 = NAMESPACE_DELIMITER.Data.ArrayNum + -1;
      if (NAMESPACE_DELIMITER.Data.ArrayNum == 0) {
        iVar27 = 0;
      }
      ::FString::AppendChars
                (&local_3b8,(wchar_t *)NAMESPACE_DELIMITER.Data.AllocatorInstance.Data,iVar27);
    }
    if ((local_1d0.bIsSet == false) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar7)) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return (bool)uVar8;
    }
    ::FString::AppendChars(&local_3b8,local_1d0.TypedValue.DataPtr,local_1d0.TypedValue.Size);
    pwVar23 = L"";
    local_1e0 = ((param_1.value_)->data_).n;
    if (TAG_CHILDREN.Data.ArrayNum != 0) {
      pwVar23 = (wchar_t *)TAG_CHILDREN.Data.AllocatorInstance;
    }
    UE::Json::GetArrayField
              (&local_218,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_1e0,pwVar23);
    if (local_218.bIsSet != false) {
      pGVar11 = rapidjson::
                GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                ::begin(&local_218.TypedValue);
      local_350 = pGVar11;
      local_230 = rapidjson::
                  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                  ::end(&local_218.TypedValue);
      if (pGVar11 != local_230) {
        do {
          if ((pGVar11->data_).f.flags != 3) {
LAB_146b7c9cf:
            if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
            }
            pFVar20 = (param_2->Data).AllocatorInstance.Data;
            goto LAB_146b7cb08;
          }
          pwVar23 = L"";
          local_390.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (TAG_SOURCE.Data.ArrayNum != 0) {
            pwVar23 = (wchar_t *)TAG_SOURCE.Data.AllocatorInstance.Data;
          }
          local_390.Data.ArrayNum = 0;
          local_390.Data.ArrayMax = 0;
          local_3a0 = (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                       *)0x0;
          FStack_398.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_1d8 = pGVar11;
          UE::Json::GetObjectField
                    (&local_330,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_1d8,pwVar23);
          pwVar23 = L"";
          if (local_330.bIsSet != false) {
            if (TAG_SOURCE_TEXT.Data.ArrayNum != 0) {
              pwVar23 = (wchar_t *)TAG_SOURCE_TEXT.Data.AllocatorInstance;
            }
            local_278 = local_330.TypedValue.value_;
            UE::Json::GetStringField
                      (&local_150,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_278,pwVar23);
            if (local_150.bIsSet != false) {
              ::FString::AssignRange
                        (&local_390,local_150.TypedValue.DataPtr,local_150.TypedValue.Size);
              if ((local_330.bIsSet == false) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar7)) {
                pcVar1 = (code *)swi(3);
                uVar8 = (*pcVar1)();
                return (bool)uVar8;
              }
              GVar2.value_ = local_330.TypedValue.value_;
              if ((((local_330.TypedValue.value_)->data_).f.flags != 3) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsObject()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                     ,0x4b0,L""), bVar7)) {
                pcVar1 = (code *)swi(3);
                uVar8 = (*pcVar1)();
                return (bool)uVar8;
              }
              this_00 = local_3a0;
              if (1 < ((GVar2.value_)->data_).s.length) {
                if ((local_330.bIsSet == false) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsSet()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                       ,0x1bd,
                                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                      ), bVar7)) {
                  pcVar1 = (code *)swi(3);
                  uVar8 = (*pcVar1)();
                  return (bool)uVar8;
                }
                pTVar12 = JsonValueToLocMetaDataValue(&local_f8,local_330.TypedValue.value_);
                if ((pTVar12->Object == (FLocMetadataValue *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar1 = (code *)swi(3);
                  uVar8 = (*pcVar1)();
                  return (bool)uVar8;
                }
                ppTVar13 = (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                            **)(**(code **)((longlong)*pTVar12->Object + 0x28))
                                         (pTVar12->Object,local_108);
                if (&local_3a0 != ppTVar13) {
                  local_3a0 = *ppTVar13;
                  *ppTVar13 = (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                               *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            (&FStack_398,(FSharedReferencer<1> *)(ppTVar13 + 1));
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_100);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_f8.SharedReferenceCount.ReferenceController);
                this_00 = local_3a0;
                if (local_3a0 !=
                    (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                     *)0x0) {
                  if ((local_3a0 ==
                       (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                        *)0x0) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar7)) {
                    pcVar1 = (code *)swi(3);
                    uVar8 = (*pcVar1)();
                    return (bool)uVar8;
                  }
                  if (*(int *)&(this_00->Elements).field_0x8 !=
                      *(int *)&(this_00->Elements).field_0x34) {
                    iVar27 = TAG_SOURCE_TEXT.Data.ArrayNum + -1;
                    FVar18.Data = TAG_SOURCE_TEXT.Data.AllocatorInstance.Data;
                    if (TAG_SOURCE_TEXT.Data.ArrayNum == 0) {
                      iVar27 = 0;
                      FVar18.Data = (FScriptContainerElement *)L"";
                    }
                    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar27,(wchar_t *)FVar18.Data);
                    TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                    ::RemoveImpl<FString>(this_00,uVar9,&TAG_SOURCE_TEXT);
                  }
                }
              }
              goto LAB_146b7c0a8;
            }
LAB_146b7c9b9:
            FVar19.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_146b7c9bb:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar19.ReferenceController);
            if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_390.Data.AllocatorInstance.Data);
            }
            goto LAB_146b7c9cf;
          }
          if (TAG_DEPRECATED_DEFAULTTEXT.Data.ArrayNum != 0) {
            pwVar23 = (wchar_t *)TAG_DEPRECATED_DEFAULTTEXT.Data.AllocatorInstance;
          }
          local_270 = pGVar11;
          UE::Json::GetStringField
                    (&local_138,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_270,pwVar23);
          if (local_138.bIsSet == false) goto LAB_146b7c9b9;
          ::FString::AssignRange(&local_390,local_138.TypedValue.DataPtr,local_138.TypedValue.Size);
          this_00 = local_3a0;
LAB_146b7c0a8:
          FVar18.Data = local_390.Data.AllocatorInstance.Data;
          lVar22 = (longlong)local_390.Data.ArrayNum;
          local_380.Data = (FScriptContainerElement *)0x0;
          local_378._0_4_ = local_390.Data.ArrayNum;
          if (local_390.Data.ArrayNum == 0) {
            local_370.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_370.Text.Data.ArrayNum = local_390.Data.ArrayNum;
            local_370.Text.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_390.Data.ArrayNum,0,&local_380,local_390.Data.ArrayNum,
                       (int *)((longlong)&local_378 + 4));
            memcpy(local_380.Data,FVar18.Data,lVar22 * 2);
            local_370.Text.Data.AllocatorInstance.Data = local_380.Data;
            local_370.Text.Data.ArrayNum = (int)local_378;
            local_370.Text.Data.ArrayMax = local_378._4_4_;
          }
          FVar19.ReferenceController = FStack_398.ReferenceController;
          local_380.Data = (FScriptContainerElement *)0x0;
          local_378 = 0;
          if (FStack_398.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_398.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_398.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_48 = 0;
          uStack_40 = 0;
          local_370.MetadataObj.SharedReferenceCount.ReferenceController =
               FStack_398.ReferenceController;
          local_370.MetadataObj.Object = (FLocMetadataObject *)this_00;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          pGVar11 = local_350;
          pwVar23 = L"";
          if (TAG_KEYCOLLECTION.Data.ArrayNum != 0) {
            pwVar23 = (wchar_t *)TAG_KEYCOLLECTION.Data.AllocatorInstance;
          }
          local_268 = local_350;
          UE::Json::GetArrayField
                    (&local_208,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_268,pwVar23);
          GVar5.value_ = local_208.TypedValue.value_;
          if (local_208.bIsSet == false) {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_370.MetadataObj.SharedReferenceCount.ReferenceController);
            if (local_370.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_370.Text.Data.AllocatorInstance.Data);
            }
            goto LAB_146b7c9bb;
          }
          if ((((local_208.TypedValue.value_)->data_).f.flags != 4) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsArray()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                 ,0x696,L""), bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
          GVar6.value_ = local_208.TypedValue.value_;
          uVar25 = (ulonglong)((GVar5.value_)->data_).s.str & 0xffffffffffff;
          if ((((local_208.TypedValue.value_)->data_).f.flags != 4) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsArray()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                 ,0x699,L""), bVar7)) {
            pcVar1 = (code *)swi(3);
            uVar8 = (*pcVar1)();
            return (bool)uVar8;
          }
          pwVar23 = ((GVar6.value_)->data_).s.str;
          uVar9 = ((GVar6.value_)->data_).s.length;
          for (; uVar25 != ((ulonglong)pwVar23 & 0xffffffffffff) + (ulonglong)uVar9 * 0x10;
              uVar25 = uVar25 + 0x10) {
            if (*(short *)(uVar25 + 0xe) != 3) {
LAB_146b7c9ed:
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_370.MetadataObj.SharedReferenceCount.ReferenceController);
              FVar19.ReferenceController = FStack_398.ReferenceController;
              if (local_370.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_370.Text.Data.AllocatorInstance.Data);
                FVar19.ReferenceController = FStack_398.ReferenceController;
              }
              goto LAB_146b7c9bb;
            }
            FVar18.Data = (FScriptContainerElement *)L"";
            if (TAG_KEY.Data.ArrayNum != 0) {
              FVar18.Data = TAG_KEY.Data.AllocatorInstance.Data;
            }
            local_260 = uVar25;
            UE::Json::GetStringField
                      (&local_1b8,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_260,(wchar_t *)FVar18.Data);
            if (local_1b8.bIsSet == false) goto LAB_146b7c9ed;
            pwVar24 = L"";
            if (TAG_PATH.Data.ArrayNum != 0) {
              pwVar24 = (wchar_t *)TAG_PATH.Data.AllocatorInstance;
            }
            local_258 = uVar25;
            UE::Json::GetStringField
                      (&local_120,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_258,pwVar24);
            pFVar20 = (FScriptContainerElement *)0x0;
            local_308.SourceLocation.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_308.SourceLocation.Data.ArrayNum = 0;
            local_308.SourceLocation.Data.ArrayMax = 0;
            local_308.Key.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_308.Key.Str.Data.ArrayNum = 0;
            local_308.Key.Str.Data.ArrayMax = 0;
            iVar27 = 0;
            local_308.Key.Hash = 0;
            local_308.PlatformName.ComparisonIndex.Value = 0;
            local_308.PlatformName.Number = 0;
            local_308.bIsOptional = false;
            local_308.InfoMetadataObj.Object = (FLocMetadataObject *)0x0;
            local_308.InfoMetadataObj.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            local_308.KeyMetadataObj.Object = (FLocMetadataObject *)0x0;
            local_308.KeyMetadataObj.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)0x0;
            if ((local_1b8.bIsSet == false) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar7)) {
              pcVar1 = (code *)swi(3);
              uVar8 = (*pcVar1)();
              return (bool)uVar8;
            }
            pFVar14 = ::FString::ConstructFromPtrSize
                                (&local_e8,local_1b8.TypedValue.DataPtr,local_1b8.TypedValue.Size);
            iVar26 = 0;
            if (&local_88 != pFVar14) {
              pFVar20 = (pFVar14->Data).AllocatorInstance.Data;
              (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              iVar27 = (pFVar14->Data).ArrayNum;
              iVar26 = (pFVar14->Data).ArrayMax;
              (pFVar14->Data).ArrayNum = 0;
              (pFVar14->Data).ArrayMax = 0;
            }
            if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_e8.Data.AllocatorInstance.Data);
            }
            pFVar17 = (FScriptContainerElement *)L"";
            if (iVar27 != 0) {
              pFVar17 = pFVar20;
            }
            uVar10 = FCrc::StrCrc32<wchar_t>((wchar_t *)pFVar17,0);
            if (local_308.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Key.Str.Data.AllocatorInstance.Data);
            }
            pwVar24 = (wchar_t *)0x0;
            local_308.Key.Str.Data.ArrayMax = iVar26;
            local_308.Key.Str.Data.ArrayNum = iVar27;
            local_180._0_8_ = (wchar_t *)0x0;
            local_180._8_4_ = 0;
            if (local_120.bIsSet == false) {
              pTVar15 = (TOptional<TStringView<wchar_t>_> *)local_180;
            }
            else {
              pTVar15 = &local_120;
              pwVar24 = local_120.TypedValue.DataPtr;
            }
            local_78 = (pTVar15->TypedValue).DataPtr;
            uStack_70 = *(undefined8 *)&(pTVar15->TypedValue).Size;
            local_308.Key.Str.Data.AllocatorInstance.Data = pFVar20;
            local_308.Key.Hash = uVar10;
            ::FString::AssignRange
                      (&local_308.SourceLocation,pwVar24,
                       (int)*(undefined8 *)&(pTVar15->TypedValue).Size);
            local_308.PlatformName = param_4;
            local_250 = uVar25;
            UE::Json::GetBoolField
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_3a8,(wchar_t *)&local_250);
            pwVar24 = L"";
            if (local_3a7 != '\0') {
              local_308.bIsOptional = (bool)local_3a8;
            }
            if (TAG_METADATA.Data.ArrayNum != 0) {
              pwVar24 = (wchar_t *)TAG_METADATA.Data.AllocatorInstance;
            }
            local_248 = uVar25;
            UE::Json::GetObjectField
                      (&local_288,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_248,pwVar24);
            if (local_288.bIsSet != false) {
              pwVar24 = L"";
              if (TAG_METADATA_INFO.Data.ArrayNum != 0) {
                pwVar24 = (wchar_t *)TAG_METADATA_INFO.Data.AllocatorInstance;
              }
              local_240 = local_288.TypedValue.value_;
              UE::Json::GetObjectField
                        (&local_170,
                         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_240,pwVar24);
              if (local_170.bIsSet != false) {
                local_2a8 = (FLocMetadataObject *)0x0;
                FStack_2a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                pTVar12 = JsonValueToLocMetaDataValue(&local_c8,local_170.TypedValue.value_);
                if ((pTVar12->Object == (FLocMetadataValue *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar1 = (code *)swi(3);
                  uVar8 = (*pcVar1)();
                  return (bool)uVar8;
                }
                ppFVar16 = (FLocMetadataObject **)
                           (**(code **)((longlong)*pTVar12->Object + 0x28))
                                     (pTVar12->Object,local_d8);
                if (&local_2a8 != ppFVar16) {
                  local_2a8 = *ppFVar16;
                  *ppFVar16 = (FLocMetadataObject *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            (&FStack_2a0,(FSharedReferencer<1> *)(ppFVar16 + 1));
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_d0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_c8.SharedReferenceCount.ReferenceController);
                FVar4.ReferenceController = FStack_2a0.ReferenceController;
                FVar19.ReferenceController =
                     local_308.InfoMetadataObj.SharedReferenceCount.ReferenceController;
                pFVar3 = local_308.InfoMetadataObj.Object;
                if (local_2a8 != (FLocMetadataObject *)0x0) {
                  if (FStack_2a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (FStack_2a0.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(FStack_2a0.ReferenceController)->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_308.InfoMetadataObj.Object = local_2a8;
                  local_308.InfoMetadataObj.SharedReferenceCount.ReferenceController =
                       FStack_2a0.ReferenceController;
                  local_68 = pFVar3;
                  pTStack_60 = FVar19.ReferenceController;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(FVar19.ReferenceController);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar4.ReferenceController);
              }
              pwVar24 = L"";
              if (TAG_METADATA_KEY.Data.ArrayNum != 0) {
                pwVar24 = (wchar_t *)TAG_METADATA_KEY.Data.AllocatorInstance.Data;
              }
              if ((local_288.bIsSet == false) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar7)) {
                pcVar1 = (code *)swi(3);
                uVar8 = (*pcVar1)();
                return (bool)uVar8;
              }
              local_238 = local_288.TypedValue.value_;
              UE::Json::GetObjectField
                        (&local_160,
                         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_238,pwVar24);
              if (local_160.bIsSet != false) {
                local_298 = (FLocMetadataObject *)0x0;
                FStack_290.ReferenceController = (TReferenceControllerBase<1> *)0x0;
                pTVar12 = JsonValueToLocMetaDataValue(&local_a8,local_160.TypedValue.value_);
                if ((pTVar12->Object == (FLocMetadataValue *)0x0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar7)) {
                  pcVar1 = (code *)swi(3);
                  uVar8 = (*pcVar1)();
                  return (bool)uVar8;
                }
                ppFVar16 = (FLocMetadataObject **)(**(code **)((longlong)*pTVar12->Object + 0x28))()
                ;
                if (&local_298 != ppFVar16) {
                  local_298 = *ppFVar16;
                  *ppFVar16 = (FLocMetadataObject *)0x0;
                  SharedPointerInternals::FSharedReferencer<1>::operator=
                            (&FStack_290,(FSharedReferencer<1> *)(ppFVar16 + 1));
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_b0);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (local_a8.SharedReferenceCount.ReferenceController);
                FVar4.ReferenceController = FStack_290.ReferenceController;
                FVar19.ReferenceController =
                     local_308.KeyMetadataObj.SharedReferenceCount.ReferenceController;
                pFVar3 = local_308.KeyMetadataObj.Object;
                if (local_298 != (FLocMetadataObject *)0x0) {
                  if (FStack_290.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (FStack_290.ReferenceController)->SharedReferenceCount =
                         (atomic<int>)
                         ((int)(FStack_290.ReferenceController)->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_308.KeyMetadataObj.Object = local_298;
                  local_308.KeyMetadataObj.SharedReferenceCount.ReferenceController =
                       FStack_290.ReferenceController;
                  local_58 = pFVar3;
                  pTStack_50 = FVar19.ReferenceController;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(FVar19.ReferenceController);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (FVar4.ReferenceController);
              }
            }
            FVar18.Data = local_3b8.Data.AllocatorInstance.Data;
            lVar22 = (longlong)local_3b8.Data.ArrayNum;
            local_348.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_348.Str.Data.ArrayNum = local_3b8.Data.ArrayNum;
            this = param_3->Object;
            if (local_3b8.Data.ArrayNum == 0) {
              local_348.Str.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_3b8.Data.ArrayNum,0,(ForAnyElementType *)&local_348,
                         local_3b8.Data.ArrayNum,&local_348.Str.Data.ArrayMax);
              memcpy(local_348.Str.Data.AllocatorInstance.Data,FVar18.Data,lVar22 * 2);
            }
            FVar18.Data = (FScriptContainerElement *)L"";
            if (local_348.Str.Data.ArrayNum != 0) {
              FVar18.Data = local_348.Str.Data.AllocatorInstance.Data;
            }
            local_348.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar18.Data,0);
            bVar7 = FInternationalizationManifest::AddSource(this,&local_348,&local_370,&local_308);
            if (local_348.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.Str.Data.AllocatorInstance.Data);
            }
            if ((!bVar7) && (2 < (byte)LogInternationalizationManifestSerializer._0_1_)) {
              local_1a0.Object = local_370.MetadataObj.Object;
              local_1a0.SharedReferenceCount.ReferenceController =
                   local_370.MetadataObj.SharedReferenceCount.ReferenceController;
              if (local_370.MetadataObj.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_370.MetadataObj.SharedReferenceCount.ReferenceController)->
                SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_370.MetadataObj.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              FJsonInternationalizationMetaDataSerializer::MetadataToString(&local_98,&local_1a0);
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,
                         (FLogCategoryBase *)&LogInternationalizationManifestSerializer);
              if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_308.KeyMetadataObj.SharedReferenceCount.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_308.InfoMetadataObj.SharedReferenceCount.ReferenceController);
            if (local_308.SourceLocation.Data.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.SourceLocation.Data.AllocatorInstance.Data);
            }
            if (local_308.Key.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_308.Key.Str.Data.AllocatorInstance.Data);
            }
            FVar19.ReferenceController = FStack_398.ReferenceController;
            pGVar11 = local_350;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_370.MetadataObj.SharedReferenceCount.ReferenceController);
          if (local_370.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_370.Text.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar19.ReferenceController);
          if (local_390.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_390.Data.AllocatorInstance.Data);
          }
          pGVar11 = pGVar11 + 1;
          local_350 = pGVar11;
        } while (pGVar11 != local_230);
      }
    }
    pwVar23 = L"";
    local_228 = ((param_1.value_)->data_).n;
    if (TAG_SUBNAMESPACES.Data.ArrayNum != 0) {
      pwVar23 = (wchar_t *)TAG_SUBNAMESPACES.Data.AllocatorInstance.Data;
    }
    UE::Json::GetArrayField
              (&local_1f8,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_228,pwVar23);
    GVar5.value_ = local_1f8.TypedValue.value_;
    if (local_1f8.bIsSet != false) {
      if ((((local_1f8.TypedValue.value_)->data_).f.flags != 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsArray()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x696,L""), bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return (bool)uVar8;
      }
      uVar25 = (ulonglong)((GVar5.value_)->data_).s.str & 0xffffffffffff;
      if ((((local_1f8.TypedValue.value_)->data_).f.flags != 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsArray()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x699,L""), bVar7)) {
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return (bool)uVar8;
      }
      pwVar23 = ((local_1f8.TypedValue.value_)->data_).s.str;
      uVar9 = ((local_1f8.TypedValue.value_)->data_).s.length;
      FVar18.Data = local_3b8.Data.AllocatorInstance.Data;
      for (; local_3b8.Data.AllocatorInstance.Data = FVar18.Data,
          uVar25 != ((ulonglong)pwVar23 & 0xffffffffffff) + (ulonglong)uVar9 * 0x10;
          uVar25 = uVar25 + 0x10) {
        if (*(short *)(uVar25 + 0xe) != 3) goto LAB_146b7caf5;
        local_190.Object = param_3->Object;
        local_190.SharedReferenceCount.ReferenceController =
             (param_3->SharedReferenceCount).ReferenceController;
        if (local_190.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        lVar22 = (longlong)local_3b8.Data.ArrayNum;
        local_320.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_320.Data.ArrayNum = local_3b8.Data.ArrayNum;
        if (local_3b8.Data.ArrayNum == 0) {
          local_320.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_3b8.Data.ArrayNum,0,(ForAnyElementType *)&local_320,
                     local_3b8.Data.ArrayNum,&local_320.Data.ArrayMax);
          memcpy(local_320.Data.AllocatorInstance.Data,FVar18.Data,lVar22 * 2);
        }
        local_220 = uVar25;
        bVar7 = JsonObjToManifest((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                   *)&local_220,&local_320,&local_190,param_4);
        if (!bVar7) {
          if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
          }
          pFVar20 = (param_2->Data).AllocatorInstance.Data;
          if (pFVar20 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar20);
          }
          pTVar21 = (param_3->SharedReferenceCount).ReferenceController;
          goto LAB_146b7cb16;
        }
        FVar18.Data = local_3b8.Data.AllocatorInstance.Data;
      }
    }
    if (local_3b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3b8.Data.AllocatorInstance.Data);
    }
    pFVar20 = (param_2->Data).AllocatorInstance.Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    bVar7 = true;
  }
  return bVar7;
}

// SerializeInternal @ 146b88010

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationManifestSerializer::SerializeInternal
          (TSharedRef<FInternationalizationManifest_const_,1> *param_1,
          GenericObject<0,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_2,FAllocatorImpl *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FStructuredEntry *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar5;
  bool bVar6;
  undefined1 uVar7;
  TSharedRef<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> *pTVar8;
  atomic<int> *paVar9;
  atomic<int> *paVar10;
  Data local_c8;
  FString local_b8;
  Data local_a8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_98;
  Number local_90;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> local_88;
  TSharedRef<FInternationalizationManifest_const_,1> local_78;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> local_68;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1> local_58;
  TSharedRef<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> local_48;
  
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_98 = param_2.value_;
  pTVar8 = MakeShared<FJsonInternationalizationManifestSerializer::FStructuredEntry,1,FString>
                     (&local_48,&local_b8);
  pTVar1 = (pTVar8->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar8->Object;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar10 = &pTVar1->SharedReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  paVar9 = &pTVar1->SharedReferenceCount;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_78.Object = param_1->Object;
  local_78.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_88.Object = pFVar2;
  local_88.SharedReferenceCount.ReferenceController = pTVar1;
  GenerateStructuredData(&local_78,&local_88);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_68.Object = pFVar2;
  local_68.SharedReferenceCount.ReferenceController = pTVar1;
  SortStructuredData(&local_68);
  rapidjson::
  GenericObject<0,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::RemoveAllMembers((GenericObject<0,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                      *)param_2.value_);
  local_a8._1_7_ = 0;
  local_a8._0_1_ = param_1->Object->FormatVersion;
  local_a8.s.str = (wchar_t *)0x1f6000000000000;
  local_c8.s.length = TAG_FORMATVERSION.Data.ArrayNum - 1;
  if (TAG_FORMATVERSION.Data.ArrayNum == 0) {
    local_c8.s.length = 0;
  }
  FVar4 = TAG_FORMATVERSION.Data.AllocatorInstance;
  if (((TAG_FORMATVERSION.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
      (FVar4.Data = (FScriptContainerElement *)L"", local_c8.s.length != 0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("str != 0 || len == 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x1a1,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  pGVar5 = local_98;
  local_c8.s.hashcode = 0;
  local_c8.s.str = (wchar_t *)((ulonglong)FVar4.Data | 0x405000000000000);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::AddMember
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             (local_98->data_).n,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_c8.s,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_a8.s,param_3);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_c8.s);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_a8.s);
  local_90 = (pGVar5->data_).n;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_58.Object = pFVar2;
  local_58.SharedReferenceCount.ReferenceController = pTVar1;
  StructuredDataToJsonObj
            (&local_58,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_90,
             param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// SerializeManifestToFile @ 146b88210

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationManifestSerializer::SerializeManifestToFile
          (TSharedRef<FInternationalizationManifest_const_,1> *param_1,FString *param_2)

{
  ForAnyElementType FVar1;
  bool bVar2;
  IFileManager *pIVar3;
  int iVar4;
  wchar_t *pwVar5;
  FString local_28;
  undefined1 local_18 [16];
  
  local_18._0_8_ = param_1->Object;
  local_18._8_8_ = (param_1->SharedReferenceCount).ReferenceController;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if ((TReferenceControllerBase<1> *)local_18._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_18._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_18._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar2 = SerializeManifestToString
                    ((TSharedRef<FInternationalizationManifest_const_,1> *)local_18,&local_28);
  if (bVar2) {
    pIVar3 = IFileManager::Get();
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    if ((param_2->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
    }
    iVar4 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    local_18._8_4_ = iVar4;
    local_18._0_8_ = local_28.Data.AllocatorInstance.Data;
    bVar2 = FFileHelper::SaveStringToFile
                      ((TStringView<wchar_t> *)local_18,pwVar5,ForceUnicode,pIVar3,0);
    if (bVar2) {
      if (FVar1.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar1.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      bVar2 = true;
    }
    else {
      if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
      }
      if (FVar1.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar1.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      bVar2 = false;
    }
  }
  else {
    if (1 < (byte)LogInternationalizationManifestSerializer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationManifestSerializer);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar2 = false;
  }
  return bVar2;
}

// SerializeManifestToString @ 146b883a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationManifestSerializer::SerializeManifestToString
          (TSharedRef<FInternationalizationManifest_const_,1> *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FAllocatorImpl *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  undefined1 auStack_d8 [32];
  Data *local_b8;
  TSharedRef<FInternationalizationManifest_const_,1> local_b0;
  FString local_a0;
  Data local_88;
  FAllocatorImpl *local_78;
  FAllocatorImpl *local_70;
  undefined8 local_68;
  void *pvStack_60;
  void *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_88.n = (Number)0x0;
  local_68 = 0;
  pvStack_60 = (void *)0x0;
  local_48 = ___xmm_00000000000004000000000000000000;
  uStack_40 = _UNK_1507b1c88;
  local_88.s.str = (wchar_t *)0x3000000000000;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_38 = 0;
  local_30 = 0;
  local_78 = ::operator_new(1);
  local_70 = local_78;
  if (local_78 == (FAllocatorImpl *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("allocator_",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0xaf5,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pFVar3 = local_78;
  if (local_88.f.flags != 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x665,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  local_b8 = &local_88;
  local_b0.Object = param_1->Object;
  local_b0.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar4 = SerializeInternal(&local_b0,
                            (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                             *)&local_b8,pFVar3);
  if (bVar4) {
    pFVar6 = UE::Json::WritePretty
                       (&local_a0,
                        (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                         *)&local_88.s);
    if (param_2 != pFVar6) {
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_2->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (param_2->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (param_2->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (local_70 != (FAllocatorImpl *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_88.s);
      local_88.n.i64 = (Number)0x0;
      local_88.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_70,1);
    free(local_58);
    ::operator_delete(pvStack_60,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_88.s);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar4 = true;
  }
  else {
    if (local_70 != (FAllocatorImpl *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_88.s);
      local_88.n.i64 = (Number)0x0;
      local_88.s.str = (wchar_t *)0x0;
    }
    ::operator_delete(local_70,1);
    free(local_58);
    ::operator_delete(pvStack_60,1);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_88.s);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    bVar4 = false;
  }
  return bVar4;
}

// SortManifest @ 146b88d00

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __cdecl
FJsonInternationalizationManifestSerializer::SortManifest
          (TSharedRef<FInternationalizationManifest,1> *param_1)

{
  atomic<int> *paVar1;
  TSharedRef<FInternationalizationManifest_const_,1> local_38;
  TSharedRef<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> local_28 [2];
  
  local_38.Object = (FInternationalizationManifest *)0x0;
  local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  MakeShared<FJsonInternationalizationManifestSerializer::FStructuredEntry,1,FString>
            (local_28,(FString *)&local_38);
  if (local_38.Object != (FInternationalizationManifest *)0x0) {
    FMemory::Free(local_38.Object);
  }
  if (local_28[0].SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    paVar1 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar1 = &(local_28[0].SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  local_38.Object = param_1->Object;
  local_38.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  GenerateStructuredData
            (&local_38,
             (TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> *)local_28
            );
  if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  SortStructuredData((TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> *)
                     local_28);
  FInternationalizationManifest::ClearEntries(param_1->Object);
  if (local_28[0].SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  StructuredDataToManifest
            ((TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1> *)
             local_28,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  return;
}

// SortStructuredData @ 146b891f0

void __cdecl
FJsonInternationalizationManifestSerializer::SortStructuredData
          (TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> *param_1)

{
  FStructuredEntry *pFVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  TMap<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>
  *pTVar8;
  int iVar9;
  uint uVar10;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined4 local_res20;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1> local_c8;
  FKeyComparisonClass<_private:_static_void___cdecl_FJsonInternationalizationManifestSerializer::SortStructuredData(TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>)_::_2_::<lambda_3>_>
  local_b8 [2];
  longlong *local_a8;
  undefined1 auStack_a0 [16];
  uint uStack_90;
  uint uStack_8c;
  longlong local_88;
  TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
  *pTStack_80;
  TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
  *local_78;
  undefined2 local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
  *pTStack_40;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FStructuredEntry *)0x0) {
    AlgoImpl::
    IntroSortInternal<TSharedPtr<FManifestEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FManifestEntry,1>,_FJsonInternationalizationManifestSerializer::SortStructuredData_::__l2::<lambda_1>_>_>
              ((TSharedPtr<FManifestEntry,1> *)(pFVar1->ManifestEntries).AllocatorInstance.Data,
               (pFVar1->ManifestEntries).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
    if ((param_1->Object == (FStructuredEntry *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar1 = param_1->Object;
    for (iVar9 = 0; (-1 < iVar9 && (iVar9 < (pFVar1->ManifestEntries).ArrayNum)); iVar9 = iVar9 + 1)
    {
      if ((iVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (pFVar1->ManifestEntries).AllocatorInstance.Data;
      pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + (longlong)iVar9 * 0x10 + 8);
      lVar4 = *(longlong *)(pFVar2 + (longlong)iVar9 * 0x10);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar4 != 0) {
        AlgoImpl::
        IntroSortInternal<FManifestContext,int,FIdentityFunctor,TDereferenceWrapper<FManifestContext,_FJsonInternationalizationManifestSerializer::SortStructuredData_::__l10::<lambda_2>_>_>
                  (*(FManifestContext **)(lVar4 + 0x38),*(int *)(lVar4 + 0x40),local_res8[0],
                   (<lambda_2> *)local_res10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    if ((param_1->Object == (FStructuredEntry *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_b8[0].Predicate.Predicate =
         (TDereferenceWrapper<FString,_private:_static_void___cdecl_FJsonInternationalizationManifestSerializer::SortStructuredData(TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>)_::_2_::<lambda_3>_>
          )local_res18;
    TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>::FKeyComparisonClass<_FJsonInternationalizationManifestSerializer::SortStructuredData_::__l2::<lambda_3>_>_>
              ((TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
                *)&param_1->Object->SubNamespaces,local_b8);
    if ((param_1->Object == (FStructuredEntry *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar8 = &param_1->Object->SubNamespaces;
    TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_68,
               (TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
                *)pTVar8);
    local_70 = 0;
    stack0xffffffffffffff68 = local_68._16_16_;
    local_a8 = (longlong *)local_68._0_8_;
    auStack_a0._0_8_ = local_68._8_8_;
    local_88 = local_48;
    pTStack_80 = pTStack_40;
    uVar7 = local_68._24_8_ >> 0x20;
    local_78 = (TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
                *)pTVar8;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        local_c8.Object = *(FStructuredEntry **)(*local_a8 + 0x10 + (longlong)(int)uVar7 * 0x28);
        pTVar3 = *(TReferenceControllerBase<1> **)(*local_a8 + 0x18 + (longlong)(int)uVar7 * 0x28);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_c8.SharedReferenceCount.ReferenceController = pTVar3;
        SortStructuredData(&local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uStack_90 = uStack_90 & ~auStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_a0);
        uVar7 = (ulonglong)uStack_8c;
      } while ((int)uStack_8c < *(int *)(auStack_a0._8_8_ + 0x18));
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        uVar10 = *(int *)&(local_78->Elements).field_0x8 - *(int *)&(local_78->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar9 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_res20 = (undefined4)lVar4;
          iVar9 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_78->HashSize < iVar9)) || (iVar9 < local_78->HashSize)) {
          local_78->HashSize = iVar9;
          TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>,FDefaultSetAllocator>
          ::Rehash(local_78);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StructuredDataToJsonObj @ 146b8b280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146b8b8bc) */
/* WARNING: Removing unreachable block (ram,0x000146b8b8e1) */
/* WARNING: Removing unreachable block (ram,0x000146b8bca6) */
/* WARNING: Removing unreachable block (ram,0x000146b8bccb) */
/* WARNING: Removing unreachable block (ram,0x000146b8bf36) */
/* WARNING: Removing unreachable block (ram,0x000146b8bf5b) */

void __cdecl
FJsonInternationalizationManifestSerializer::StructuredDataToJsonObj
          (TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1>
           *param_1,
          GenericObject<0,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_2,FAllocatorImpl *param_3)

{
  TMap<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>
  *pTVar1;
  undefined1 *puVar2;
  Number *pNVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  undefined2 uVar6;
  int iVar7;
  FLocMetadataObject *pFVar8;
  code *pcVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  undefined8 uVar11;
  ForAnyElementType FVar12;
  undefined4 uVar13;
  FScriptContainerElement *pFVar14;
  TMap<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>
  *pTVar15;
  bool bVar16;
  FStructuredEntry *pFVar17;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar18;
  FString *pFVar19;
  Data *pDVar20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar21;
  ulonglong uVar22;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar23;
  void *pvVar24;
  undefined4 uVar25;
  uint uVar26;
  longlong lVar27;
  wchar_t *pwVar28;
  wchar_t *pwVar29;
  FAllocatorImpl *pFVar30;
  char acVar31 [4];
  undefined8 uVar32;
  longlong *plVar33;
  longlong *plVar34;
  FScriptContainerElement *pFVar35;
  longlong lVar36;
  undefined1 auStackY_3b8 [32];
  undefined1 local_378;
  undefined1 local_377;
  undefined1 local_376 [6];
  undefined8 local_370;
  undefined8 uStack_368;
  Data local_360;
  FAllocatorImpl *local_350;
  Data local_348;
  FString local_338;
  longlong local_328;
  Data local_320;
  Data local_310;
  uint local_300;
  Data local_2f8;
  Data local_2e8;
  Data local_2d8;
  Data local_2c8;
  Data local_2b8;
  Data local_2a8;
  Data local_298;
  Data local_288;
  Data local_278;
  Data local_268;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_258;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1> *local_250;
  FScriptContainerElement *local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_240;
  FScriptContainerElement *local_220;
  FStructuredEntry *local_218;
  undefined8 *local_210;
  undefined8 local_208;
  ulonglong uStack_200;
  TMap<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>
  *local_1f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f0;
  undefined8 uStack_1d0;
  FScriptContainerElement *local_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  TSharedRef<FLocMetadataObject,1> local_1b8;
  TSharedRef<FLocMetadataObject,1> local_1a8;
  TSharedRef<FLocMetadataObject,1> local_198;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1> local_188;
  undefined1 local_178 [40];
  int local_150;
  undefined4 uStack_14c;
  TStringView<wchar_t> local_148;
  FString local_138;
  longlong local_120;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  Data local_f8;
  Data local_e8;
  Data local_d8;
  Data local_c8;
  Data local_b8;
  Data local_a8;
  Data local_98;
  Data local_88;
  Data local_78;
  undefined8 local_68;
  ulonglong uStack_60;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_350 = param_3;
  local_258 = param_2.value_;
  local_250 = param_1;
  pFVar17 = TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1>::
            operator->(param_1);
  local_1c8 = (pFVar17->Namespace).Data.AllocatorInstance.Data;
  iVar7 = (pFVar17->Namespace).Data.ArrayNum;
  uStack_1c0 = iVar7 - 1;
  if (iVar7 == 0) {
    uStack_1c0 = 0;
  }
  local_148._12_4_ = uStack_1bc;
  local_148.Size = uStack_1c0;
  local_148.DataPtr = (wchar_t *)local_1c8;
  pGVar18 = UE::Json::MakeStringValue(&local_58,&local_148,param_3);
  local_2a8.s.length = TAG_NAMESPACE.Data.ArrayNum - 1;
  if (TAG_NAMESPACE.Data.ArrayNum == 0) {
    local_2a8.s.length = 0;
  }
  FVar12 = TAG_NAMESPACE.Data.AllocatorInstance;
  if (((TAG_NAMESPACE.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
      (FVar12.Data = (FScriptContainerElement *)L"", local_2a8.s.length != 0)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("str != 0 || len == 0u",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                          ,0x1a1,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_2a8.s.hashcode = 0;
  local_2a8.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::AddMember
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             ((param_2.value_)->data_).n,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_2a8.s,pGVar18,param_3);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_2a8.s);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(&local_58);
  local_348.n = (Number)0x0;
  local_348.s.str = (wchar_t *)0x4000000000000;
  local_218 = TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1>::
              operator->(param_1);
  local_300 = (local_218->ManifestEntries).ArrayNum;
  uVar22 = (ulonglong)(int)local_300;
  pFVar35 = (local_218->ManifestEntries).AllocatorInstance.Data;
  local_220 = pFVar35 + uVar22 * 0x10;
  do {
    pFVar14 = local_220;
    local_248 = pFVar35;
    if ((local_218->ManifestEntries).ArrayNum != (int)uVar22) {
      local_378 = 0;
      `TCheckedPointerIterator<TSharedPtr<FManifestEntry,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_378);
    }
    if (pFVar35 == pFVar14) {
      local_360.n = (Number)0x0;
      local_360.s.str = (wchar_t *)0x4000000000000;
      pFVar17 = TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1>::
                operator->(local_250);
      local_240._padding_._4_4_ = 1;
      local_240.UnvisitedBitMask = 0xffffffff;
      pTVar1 = &pFVar17->SubNamespaces;
      puVar2 = &(pFVar17->SubNamespaces).field_0x10;
      local_240._padding_._0_4_ = 0;
      local_240.CurrentBitIndex = 0;
      local_240.BaseBitIndex = 0;
      local_240.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if (*(int *)&(pFVar17->SubNamespaces).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_240);
      }
      TStack_1f0._padding_ = CONCAT44(local_240._padding_._4_4_,(undefined4)local_240._padding_);
      TStack_1f0.CurrentBitIndex = local_240.CurrentBitIndex;
      TStack_1f0.UnvisitedBitMask = local_240.UnvisitedBitMask;
      TStack_1f0._28_4_ = local_240._28_4_;
      TStack_1f0.BaseBitIndex = local_240.BaseBitIndex;
      local_150 = *(int *)&(pFVar17->SubNamespaces).field_0x8 -
                  *(int *)&(pFVar17->SubNamespaces).field_0x34;
      local_178._16_8_ = local_240.Array;
      uStack_1d0 = CONCAT44(uStack_14c,local_150);
      TStack_1f0.Array = local_240.Array;
      local_1f8 = pTVar1;
      local_178._0_8_ = pTVar1;
      local_178._8_8_ = TStack_1f0._padding_;
      local_178._24_8_ = TStack_1f0._16_8_;
      local_178._32_8_ = TStack_1f0._24_8_;
      pTVar21 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_178,
                           (TBitArray<FDefaultBitArrayAllocator> *)puVar2,
                           *(int *)&(pFVar17->SubNamespaces).field_0x28);
      local_120 = pTVar21->_padding_;
      pTVar10 = pTVar21->Array;
      uVar11._0_4_ = pTVar21->UnvisitedBitMask;
      uVar11._4_4_ = pTVar21->CurrentBitIndex;
      uStack_108 = *(undefined8 *)&pTVar21->BaseBitIndex;
      uVar32 = local_360.s.str;
      uVar25 = local_360.s.hashcode;
      pTStack_118 = pTVar10;
      local_110 = uVar11;
      do {
        pTVar15 = local_1f8;
        if (*(int *)&local_1f8->field_0x8 - *(int *)&local_1f8->field_0x34 != (int)uStack_1d0) {
          local_376[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_376);
        }
        if (((TStack_1f0.CurrentBitIndex == uVar11._4_4_) && (TStack_1f0.Array == pTVar10)) &&
           (pTVar15 == pTVar1)) {
          if ((local_348.f.flags != 4) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsArray()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x674,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pGVar18 = local_258;
          if (local_348.s.length != 0) {
            uVar26 = TAG_CHILDREN.Data.ArrayNum - 1;
            if (TAG_CHILDREN.Data.ArrayNum == 0) {
              uVar26 = 0;
            }
            FVar12.Data = TAG_CHILDREN.Data.AllocatorInstance.Data;
            if (((TAG_CHILDREN.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
                (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("str != 0 || len == 0u",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                    ,0x1a1,L""), bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pGVar18 = local_258;
            local_2c8.s.hashcode = 0;
            local_2c8.s.length = uVar26;
            local_2c8.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      (local_258->data_).n,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_2c8.s,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_348.s,param_3);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_2c8.s);
          }
          if ((local_360.f.flags != 4) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsArray()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x674,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (local_360.s.length != 0) {
            uVar26 = TAG_SUBNAMESPACES.Data.ArrayNum - 1;
            if (TAG_SUBNAMESPACES.Data.ArrayNum == 0) {
              uVar26 = 0;
            }
            FVar12.Data = TAG_SUBNAMESPACES.Data.AllocatorInstance.Data;
            if (((TAG_SUBNAMESPACES.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                && (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("str != 0 || len == 0u",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                    ,0x1a1,L""), bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            local_2b8.s.hashcode = 0;
            local_2b8.s.length = uVar26;
            local_2b8.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      (pGVar18->data_).n,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_2b8.s,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_360.s,param_3);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_2b8.s);
          }
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_360.s);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_348.s);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((local_250->SharedReferenceCount).ReferenceController);
          return;
        }
        lVar36 = *(longlong *)pTVar15;
        pFVar17 = *(FStructuredEntry **)
                   (lVar36 + 0x10 + (longlong)TStack_1f0.CurrentBitIndex * 0x28);
        if (pFVar17 != (FStructuredEntry *)0x0) {
          local_188.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)
                (lVar36 + 0x18 + (longlong)TStack_1f0.CurrentBitIndex * 0x28);
          local_68 = 0;
          uStack_60 = 0x3000000000000;
          local_210 = &local_68;
          if (local_188.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_188.Object = pFVar17;
          StructuredDataToJsonObj
                    (&local_188,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_210,param_3);
          if ((local_360.f.flags != 4) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsArray()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x6bb,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((uint)uVar25 <= local_360.s.length) {
            if (uVar25 == 0) {
              uVar26 = 0x10;
            }
            else {
              uVar26 = (uVar25 + 1 >> 1) + uVar25;
            }
            if ((local_360.f.flags != 4) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsArray()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                    ,0x6a8,L""), bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((uint)uVar25 < uVar26) {
              if (uVar26 == 0) {
                FMemory::Free((void *)(uVar32 & 0xffffffffffff));
                pvVar24 = (void *)0x0;
              }
              else {
                pvVar24 = FMemory::Realloc((void *)(uVar32 & 0xffffffffffff),(ulonglong)uVar26 << 4,
                                           0);
              }
              local_360.s.hashcode = uVar26;
              uVar32 = uVar32 & 0xffff000000000000 | (ulonglong)pvVar24;
              uVar25 = uVar26;
              local_360.s.str = (wchar_t *)uVar32;
            }
          }
          uVar22 = (ulonglong)local_360.n & 0xffffffff;
          local_360.s.length = local_360.s.length + 1;
          puVar4 = (undefined8 *)((uVar32 & 0xffffffffffff) + uVar22 * 0x10);
          *puVar4 = local_68;
          puVar4[1] = uStack_60;
          uStack_60 = uStack_60 & 0xffffffffffff;
        }
        TStack_1f0.UnvisitedBitMask = TStack_1f0.UnvisitedBitMask & ~TStack_1f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f0);
      } while( true );
    }
    local_f8.s.length = 0;
    local_f8.s.hashcode = 0;
    local_f8.s.str = (wchar_t *)0x3000000000000;
    local_98.n.i64 = (Number)0x0;
    local_98.s.str = (wchar_t *)0x3000000000000;
    if ((*(longlong *)pFVar35 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (*(longlong *)(*(longlong *)pFVar35 + 0x28) != 0) {
      if ((*(longlong *)pFVar35 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar36 = *(longlong *)pFVar35;
      if ((*(longlong *)(lVar36 + 0x28) == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_1b8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar36 + 0x30);
      local_1b8.Object = *(FLocMetadataObject **)(lVar36 + 0x28);
      if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_1b8.Object == (FLocMetadataObject *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FJsonInternationalizationMetaDataSerializer::SerializeMetadata
                (&local_1b8,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_98.s,param_3);
    }
    if ((*(longlong *)pFVar35 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pwVar28 = L"";
    local_d8.n.i64 = (Number)0x0;
    local_d8.s.str = (wchar_t *)0x0;
    iVar7 = *(int *)(*(longlong *)pFVar35 + 0x20);
    pwVar29 = *(wchar_t **)(*(longlong *)pFVar35 + 0x18);
    uVar22 = (ulonglong)(iVar7 - 1);
    if (iVar7 == 0) {
      uVar22 = 0;
    }
    uVar26 = (uint)uVar22;
    if (pwVar29 == (wchar_t *)0x0) {
      if (uVar26 != 0) {
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L"");
        pwVar29 = pwVar28;
        if (bVar16) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        goto LAB_146b8b5c4;
      }
LAB_146b8b5c9:
      pDVar20 = &local_d8;
      local_d8.ss.str[6] = 6 - (short)uVar22;
      local_d8.f.flags = 0x1c05;
    }
    else {
LAB_146b8b5c4:
      pwVar28 = pwVar29;
      if (uVar26 < 7) goto LAB_146b8b5c9;
      local_d8.s.length = uVar26;
      local_d8.f.flags = 0xc05;
      pDVar20 = FMemory::Malloc((ulonglong)(uVar26 + 1) * 2,0);
      local_d8.s.str =
           (wchar_t *)((ulonglong)local_d8.s.str & 0xffff000000000000 | (ulonglong)pDVar20);
    }
    memcpy(pDVar20,pwVar28,uVar22 * 2);
    *(undefined2 *)(uVar22 * 2 + (longlong)pDVar20) = 0;
    uVar26 = TAG_SOURCE_TEXT.Data.ArrayNum - 1;
    if (TAG_SOURCE_TEXT.Data.ArrayNum == 0) {
      uVar26 = 0;
    }
    FVar12 = TAG_SOURCE_TEXT.Data.AllocatorInstance;
    if (((TAG_SOURCE_TEXT.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
        (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_298.s.hashcode = 0;
    local_298.s.length = uVar26;
    local_298.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::AddMember
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_98.s,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_298.s,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_d8.s,param_3);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_298.s);
    uVar11 = local_d8.s.str;
    if (local_d8.f.flags == 3) {
      for (pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     ((ulonglong)local_d8.s.str & 0xffffffffffff);
          pGVar18 !=
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
          (((ulonglong)local_d8.n & 0xffffffff) * 0x20 + (uVar11 & 0xffffffffffff));
          pGVar18 = pGVar18 + 2) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18 + 1);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
      }
LAB_146b8b705:
      FMemory::Free((void *)(uVar11 & 0xffffffffffff));
    }
    else {
      if (local_d8.f.flags == 4) {
        pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_d8.s.str & 0xffffffffffff);
        pGVar23 = pGVar18 + ((ulonglong)local_d8.n & 0xffffffff);
        for (; pGVar18 != pGVar23; pGVar18 = pGVar18 + 1) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
        }
        goto LAB_146b8b705;
      }
      if (local_d8.f.flags == 0xc05) goto LAB_146b8b705;
    }
    uVar26 = TAG_SOURCE.Data.ArrayNum - 1;
    if (TAG_SOURCE.Data.ArrayNum == 0) {
      uVar26 = 0;
    }
    FVar12.Data = TAG_SOURCE.Data.AllocatorInstance.Data;
    if (((TAG_SOURCE.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
        (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_288.s.hashcode = 0;
    local_288.s.length = uVar26;
    local_288.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::AddMember
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_f8.s,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_288.s,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_98.s,param_3);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_288.s);
    if (local_98.f.flags == 3) {
      pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                ((ulonglong)local_98.s.str & 0xffffffffffff);
      uVar6 = 3;
      while( true ) {
        if ((uVar6 != 3) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObject()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x506,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_98.s.str & 0xffffffffffff);
        if (pGVar18 == pGVar23 + ((ulonglong)local_98.n & 0xffffffff) * 2) break;
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18 + 1);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
        pGVar18 = pGVar18 + 2;
        uVar6 = local_98.f.flags;
      }
LAB_146b8b7d4:
      FMemory::Free(pGVar23);
    }
    else {
      if (local_98.f.flags == 4) {
        pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_98.s.str & 0xffffffffffff);
        pGVar18 = pGVar23;
        if (pGVar23 != pGVar23 + ((ulonglong)local_98.n & 0xffffffff)) {
          do {
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
            pGVar18 = pGVar18 + 1;
          } while (pGVar18 != pGVar23 + ((ulonglong)local_98.n & 0xffffffff));
        }
        goto LAB_146b8b7d4;
      }
      if (local_98.f.flags == 0xc05) {
        pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_98.s.str & 0xffffffffffff);
        goto LAB_146b8b7d4;
      }
    }
    local_370 = 0;
    uStack_368 = 0x4000000000000;
    if ((*(longlong *)pFVar35 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar36 = *(longlong *)pFVar35;
    iVar7 = *(int *)(lVar36 + 0x40);
    plVar34 = *(longlong **)(lVar36 + 0x38);
    plVar33 = plVar34 + (longlong)iVar7 * 0xb;
    local_328 = lVar36;
    while( true ) {
      pwVar29 = L"";
      if (*(int *)(lVar36 + 0x40) != iVar7) {
        local_377 = 0;
        `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_377);
      }
      if (plVar34 == plVar33) break;
      local_338.Data.ArrayNum = (int)plVar34[4];
      lVar27 = (longlong)local_338.Data.ArrayNum;
      pvVar24 = (void *)plVar34[3];
      local_338.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_338.Data.ArrayNum == 0) {
        local_338.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_338.Data.ArrayNum,0,(ForAnyElementType *)&local_338,
                   local_338.Data.ArrayNum,&local_338.Data.ArrayMax);
        memcpy(local_338.Data.AllocatorInstance.Data,pvVar24,lVar27 * 2);
      }
      ::FString::ReplaceInline(&local_338,L"\\",L"/",IgnoreCase);
      pFVar19 = FPaths::RootDir(&local_138);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      ::FString::ReplaceInline(&local_338,pwVar28,L"/",IgnoreCase);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      local_e8.n.i64 = (Number)0x0;
      local_e8.s.str = (wchar_t *)0x3000000000000;
      local_c8.n.i64 = (Number)0x0;
      local_c8.s.str = (wchar_t *)0x0;
      uVar22 = (ulonglong)((int)plVar34[1] - 1);
      if ((int)plVar34[1] == 0) {
        uVar22 = 0;
      }
      uVar26 = (uint)uVar22;
      pwVar28 = (wchar_t *)*plVar34;
      if ((wchar_t *)*plVar34 == (wchar_t *)0x0) {
        if (uVar26 != 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("str != 0 || len == 0u",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x1a1,L"");
          pwVar28 = pwVar29;
          if (bVar16) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          goto LAB_146b8bade;
        }
LAB_146b8bae3:
        pDVar20 = &local_c8;
        local_c8.ss.str[6] = 6 - (short)uVar22;
        local_c8.f.flags = 0x1c05;
      }
      else {
LAB_146b8bade:
        pwVar29 = pwVar28;
        if (uVar26 < 7) goto LAB_146b8bae3;
        local_c8.s.length = uVar26;
        local_c8.f.flags = 0xc05;
        pDVar20 = FMemory::Malloc((ulonglong)(uVar26 + 1) * 2,0);
        local_c8.s.str =
             (wchar_t *)((ulonglong)local_c8.s.str & 0xffff000000000000 | (ulonglong)pDVar20);
      }
      memcpy(pDVar20,pwVar29,uVar22 * 2);
      *(undefined2 *)(uVar22 * 2 + (longlong)pDVar20) = 0;
      uVar26 = TAG_KEY.Data.ArrayNum - 1;
      if (TAG_KEY.Data.ArrayNum == 0) {
        uVar26 = 0;
      }
      FVar12 = TAG_KEY.Data.AllocatorInstance;
      if (((TAG_KEY.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
          (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("str != 0 || len == 0u",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x1a1,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_278.s.hashcode = 0;
      local_278.s.length = uVar26;
      local_278.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                &local_e8.s,
                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                &local_278.s,
                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                &local_c8.s,local_350);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_278.s);
      uVar11 = local_c8.s.str;
      if (local_c8.f.flags == 3) {
        for (pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       ((ulonglong)local_c8.s.str & 0xffffffffffff);
            pGVar18 !=
            (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
            (((ulonglong)local_c8.n & 0xffffffff) * 0x20 + (longlong)(uVar11 & 0xffffffffffff));
            pGVar18 = pGVar18 + 2) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18 + 1);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
        }
        FMemory::Free((void *)(uVar11 & 0xffffffffffff));
        lVar36 = local_328;
      }
      else if (local_c8.f.flags == 4) {
        uVar22 = (ulonglong)local_c8.n & 0xffffffff;
        pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_c8.s.str & 0xffffffffffff);
        for (pGVar18 = pGVar23; pGVar18 != pGVar23 + uVar22; pGVar18 = pGVar18 + 1) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
        }
        FMemory::Free(pGVar23);
      }
      else if (local_c8.f.flags == 0xc05) {
        FMemory::Free((void *)((ulonglong)local_c8.s.str & 0xffffffffffff));
      }
      pwVar29 = L"";
      local_b8.n.i64 = (Number)0x0;
      local_b8.s.str = (wchar_t *)0x0;
      uVar22 = (ulonglong)(local_338.Data.ArrayNum - 1);
      if (local_338.Data.ArrayNum == 0) {
        uVar22 = 0;
      }
      uVar26 = (uint)uVar22;
      FVar12.Data = local_338.Data.AllocatorInstance.Data;
      if (local_338.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        if (uVar26 != 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("str != 0 || len == 0u",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x1a1,L"");
          FVar12.Data = (FScriptContainerElement *)pwVar29;
          if (bVar16) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          goto LAB_146b8bd6c;
        }
LAB_146b8bd71:
        pDVar20 = &local_b8;
        local_b8.ss.str[6] = 6 - (short)uVar22;
        local_b8.f.flags = 0x1c05;
      }
      else {
LAB_146b8bd6c:
        pwVar29 = (wchar_t *)FVar12.Data;
        if (uVar26 < 7) goto LAB_146b8bd71;
        local_b8.s.length = uVar26;
        local_b8.f.flags = 0xc05;
        pDVar20 = FMemory::Malloc((ulonglong)(uVar26 + 1) * 2,0);
        local_b8.s.str =
             (wchar_t *)((ulonglong)local_b8.s.str & 0xffff000000000000 | (ulonglong)pDVar20);
      }
      memcpy(pDVar20,pwVar29,uVar22 * 2);
      *(undefined2 *)(uVar22 * 2 + (longlong)pDVar20) = 0;
      uVar26 = TAG_PATH.Data.ArrayNum - 1;
      if (TAG_PATH.Data.ArrayNum == 0) {
        uVar26 = 0;
      }
      FVar12 = TAG_PATH.Data.AllocatorInstance;
      if (((TAG_PATH.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
          (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("str != 0 || len == 0u",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x1a1,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_268.s.hashcode = 0;
      local_268.s.length = uVar26;
      local_268.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                &local_e8.s,
                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                &local_268.s,
                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                &local_b8.s,local_350);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_268.s);
      uVar11 = local_b8.s.str;
      if (local_b8.f.flags == 3) {
        for (pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       ((ulonglong)local_b8.s.str & 0xffffffffffff);
            pGVar18 !=
            (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
            (((ulonglong)local_b8.n & 0xffffffff) * 0x20 + (longlong)(uVar11 & 0xffffffffffff));
            pGVar18 = pGVar18 + 2) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18 + 1);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
        }
        FMemory::Free((void *)(uVar11 & 0xffffffffffff));
        lVar36 = local_328;
      }
      else if (local_b8.f.flags == 4) {
        uVar22 = (ulonglong)local_b8.n & 0xffffffff;
        pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_b8.s.str & 0xffffffffffff);
        for (pGVar18 = pGVar23; pGVar18 != pGVar23 + uVar22; pGVar18 = pGVar18 + 1) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
        }
        FMemory::Free(pGVar23);
      }
      else if (local_b8.f.flags == 0xc05) {
        FMemory::Free((void *)((ulonglong)local_b8.s.str & 0xffffffffffff));
      }
      if ((char)plVar34[6] != '\0') {
        local_208 = 0;
        uStack_200 = 0xa000000000000;
        uVar26 = TAG_OPTIONAL.Data.ArrayNum - 1;
        if (TAG_OPTIONAL.Data.ArrayNum == 0) {
          uVar26 = 0;
        }
        FVar12.Data = TAG_OPTIONAL.Data.AllocatorInstance.Data;
        if (((TAG_OPTIONAL.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
            (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("str != 0 || len == 0u",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x1a1,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_320.s.hashcode = 0;
        local_320.s.length = uVar26;
        local_320.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
        if ((local_e8.f.flags != 3) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObject()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x575,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((((ulonglong)local_320.s.str & 0x400000000000000) == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("name.IsString()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x576,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar25 = local_e8.s.length;
        if (local_e8.s.hashcode <= local_e8.s.length) {
          if (local_e8.s.hashcode == 0) {
            uVar26 = 0x10;
          }
          else {
            uVar26 = (local_e8.s.hashcode + 1 >> 1) + local_e8.s.hashcode;
            if (uVar26 <= local_e8.s.hashcode) goto LAB_146b8c0db;
          }
          if ((ulonglong)uVar26 == 0) {
            FMemory::Free((void *)((ulonglong)local_e8.s.str & 0xffffffffffff));
            pvVar24 = (void *)0x0;
          }
          else {
            pvVar24 = FMemory::Realloc((void *)((ulonglong)local_e8.s.str & 0xffffffffffff),
                                       (ulonglong)uVar26 << 5,0);
          }
          local_e8.s.hashcode = uVar26;
          local_e8.s.str =
               (wchar_t *)((ulonglong)local_e8.s.str & 0xffff000000000000 | (ulonglong)pvVar24);
          uVar25 = local_e8.s.length;
        }
LAB_146b8c0db:
        uVar22 = uStack_200;
        uVar11 = local_320.s.str;
        local_320.s.str = (wchar_t *)((ulonglong)local_320.s.str & 0xffffffffffff);
        pNVar3 = (Number *)
                 ((ulonglong)(uint)uVar25 * 0x20 + ((ulonglong)local_e8.s.str & 0xffffffffffff));
        *pNVar3 = local_320.n;
        pNVar3[1].u64 = uVar11;
        uStack_200 = uStack_200 & 0xffffffffffff;
        puVar4 = (undefined8 *)
                 ((ulonglong)(uint)uVar25 * 0x20 + 0x10 +
                 ((ulonglong)local_e8.s.str & 0xffffffffffff));
        *puVar4 = local_208;
        puVar4[1] = uVar22;
        local_e8.s.length = local_e8.s.length + 1;
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_320.s);
      }
      pFVar30 = local_350;
      pFVar8 = (FLocMetadataObject *)plVar34[7];
      local_a8.n.i64 = (Number)0x0;
      local_a8.s.str = (wchar_t *)0x3000000000000;
      if (pFVar8 != (FLocMetadataObject *)0x0) {
        local_1a8.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)plVar34[8];
        local_88.n.i64 = (Number)0x0;
        local_88.s.str = (wchar_t *)0x3000000000000;
        if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_1a8.Object = pFVar8;
        FJsonInternationalizationMetaDataSerializer::SerializeMetadata
                  (&local_1a8,
                   (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_88.s,local_350);
        if ((local_88.f.flags != 3) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObject()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x4b0,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar25 = 0;
        if (local_88.s.length != 0) {
          uVar26 = TAG_METADATA_INFO.Data.ArrayNum - 1;
          if (TAG_METADATA_INFO.Data.ArrayNum == 0) {
            uVar26 = 0;
          }
          FVar12.Data = TAG_METADATA_INFO.Data.AllocatorInstance.Data;
          if (((TAG_METADATA_INFO.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
              (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("str != 0 || len == 0u",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x1a1,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_2f8.s.hashcode = 0;
          local_2f8.s.length = uVar26;
          local_2f8.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    &local_a8.s,
                    (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    &local_2f8.s,
                    (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    &local_88.s,pFVar30);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_2f8.s);
          uVar25 = local_88.s.length;
        }
        uVar11 = local_88.s.str;
        if (local_88.f.flags == 3) {
          pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    ((ulonglong)local_88.s.str & 0xffffffffffff);
          while( true ) {
            if ((local_88.f.flags != 3) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsObject()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                    ,0x506,L""), bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (pGVar18 ==
                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                ((ulonglong)(uint)uVar25 * 0x20 + (longlong)(uVar11 & 0xffffffffffff))) break;
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18 + 1);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
            pGVar18 = pGVar18 + 2;
          }
          FMemory::Free((void *)(uVar11 & 0xffffffffffff));
          pFVar30 = local_350;
          lVar36 = local_328;
        }
        else if (local_88.f.flags == 4) {
          pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    ((ulonglong)local_88.s.str & 0xffffffffffff);
          for (pGVar18 = pGVar23; pGVar18 != pGVar23 + (uint)uVar25; pGVar18 = pGVar18 + 1) {
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
          }
          FMemory::Free(pGVar23);
          pFVar30 = local_350;
        }
        else if (local_88.f.flags == 0xc05) {
          FMemory::Free((void *)((ulonglong)local_88.s.str & 0xffffffffffff));
        }
      }
      pFVar8 = (FLocMetadataObject *)plVar34[9];
      if (pFVar8 != (FLocMetadataObject *)0x0) {
        local_198.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)plVar34[10];
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x3000000000000;
        if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_198.Object = pFVar8;
        FJsonInternationalizationMetaDataSerializer::SerializeMetadata
                  (&local_198,
                   (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s,pFVar30);
        if ((local_78.f.flags != 3) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObject()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x4b0,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar25 = 0;
        if (local_78.s.length != 0) {
          uVar26 = TAG_METADATA_KEY.Data.ArrayNum - 1;
          if (TAG_METADATA_KEY.Data.ArrayNum == 0) {
            uVar26 = 0;
          }
          FVar12.Data = TAG_METADATA_KEY.Data.AllocatorInstance.Data;
          if (((TAG_METADATA_KEY.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
              (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("str != 0 || len == 0u",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x1a1,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          local_2e8.s.hashcode = 0;
          local_2e8.s.length = uVar26;
          local_2e8.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    &local_a8.s,
                    (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    &local_2e8.s,
                    (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    &local_78.s,pFVar30);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_2e8.s);
          uVar25 = local_78.s.length;
        }
        uVar11 = local_78.s.str;
        if (local_78.f.flags == 3) {
          pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    ((ulonglong)local_78.s.str & 0xffffffffffff);
          while( true ) {
            if ((local_78.f.flags != 3) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsObject()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                    ,0x506,L""), bVar16)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (pGVar18 ==
                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                ((ulonglong)(uint)uVar25 * 0x20 + (longlong)(uVar11 & 0xffffffffffff))) break;
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18 + 1);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
            pGVar18 = pGVar18 + 2;
          }
          FMemory::Free((void *)(uVar11 & 0xffffffffffff));
          lVar36 = local_328;
        }
        else if (local_78.f.flags == 4) {
          pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    ((ulonglong)local_78.s.str & 0xffffffffffff);
          for (pGVar18 = pGVar23; pGVar18 != pGVar23 + (uint)uVar25; pGVar18 = pGVar18 + 1) {
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
          }
          FMemory::Free(pGVar23);
        }
        else if (local_78.f.flags == 0xc05) {
          FMemory::Free((void *)((ulonglong)local_78.s.str & 0xffffffffffff));
        }
      }
      if ((local_a8.f.flags != 3) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsObject()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x4b0,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_a8.s.length != 0) {
        uVar26 = TAG_METADATA.Data.ArrayNum - 1;
        if (TAG_METADATA.Data.ArrayNum == 0) {
          uVar26 = 0;
        }
        FVar12.Data = TAG_METADATA.Data.AllocatorInstance.Data;
        if (((TAG_METADATA.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
            (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("str != 0 || len == 0u",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x1a1,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_2d8.s.hashcode = 0;
        local_2d8.s.length = uVar26;
        local_2d8.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  &local_e8.s,
                  (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  &local_2d8.s,
                  (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  &local_a8.s,local_350);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_2d8.s);
      }
      if (local_a8.f.flags == 3) {
        pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_a8.s.str & 0xffffffffffff);
        while( true ) {
          if ((local_a8.f.flags != 3) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsObject()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x506,L""), bVar16)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pvVar24 = (void *)((ulonglong)local_a8.s.str & 0xffffffffffff);
          if (pGVar18 ==
              (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              (((ulonglong)local_a8.n & 0xffffffff) * 0x20 + (longlong)pvVar24)) break;
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18 + 1);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
          pGVar18 = pGVar18 + 2;
        }
LAB_146b8c746:
        FMemory::Free(pvVar24);
      }
      else if (local_a8.f.flags == 4) {
        pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_a8.s.str & 0xffffffffffff);
        pGVar18 = pGVar23;
        if (pGVar23 != pGVar23 + ((ulonglong)local_a8.n & 0xffffffff)) {
          do {
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
            pGVar18 = pGVar18 + 1;
          } while (pGVar18 != pGVar23 + ((ulonglong)local_a8.n & 0xffffffff));
        }
        FMemory::Free(pGVar23);
      }
      else if (local_a8.f.flags == 0xc05) {
        pvVar24 = (void *)((ulonglong)local_a8.s.str & 0xffffffffffff);
        goto LAB_146b8c746;
      }
      if ((uStack_368._6_2_ != 4) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsArray()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x6bb,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_370._4_4_ <= (uint)local_370) {
        if (local_370._4_4_ == 0) {
          uVar26 = 0x10;
        }
        else {
          uVar26 = (local_370._4_4_ + 1 >> 1) + local_370._4_4_;
        }
        if ((uStack_368._6_2_ != 4) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsArray()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x6a8,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (local_370._4_4_ < uVar26) {
          if (uVar26 == 0) {
            FMemory::Free((void *)(uStack_368 & 0xffffffffffff));
            pvVar24 = (void *)0x0;
          }
          else {
            pvVar24 = FMemory::Realloc((void *)(uStack_368 & 0xffffffffffff),(ulonglong)uVar26 << 4,
                                       0);
          }
          local_370 = CONCAT44(uVar26,(uint)local_370);
          uStack_368 = uStack_368 & 0xffff000000000000 | (ulonglong)pvVar24;
        }
      }
      uVar22 = local_370 & 0xffffffff;
      local_370 = CONCAT44(local_370._4_4_,(uint)local_370 + 1);
      pNVar3 = (Number *)((uStack_368 & 0xffffffffffff) + uVar22 * 0x10);
      *pNVar3 = local_e8.n;
      pNVar3[1].u64 = (ulong64)local_e8.s.str;
      local_e8.s.str = (wchar_t *)((ulonglong)local_e8.s.str & 0xffffffffffff);
      if (local_338.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data.AllocatorInstance.Data);
      }
      plVar34 = plVar34 + 0xb;
    }
    uVar26 = TAG_KEYCOLLECTION.Data.ArrayNum - 1;
    if (TAG_KEYCOLLECTION.Data.ArrayNum == 0) {
      uVar26 = 0;
    }
    FVar12.Data = TAG_KEYCOLLECTION.Data.AllocatorInstance.Data;
    if (((TAG_KEYCOLLECTION.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
        (FVar12.Data = (FScriptContainerElement *)L"", uVar26 != 0)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_310.s.hashcode = 0;
    local_310.s.length = uVar26;
    local_310.s.str = (wchar_t *)((ulonglong)FVar12.Data | 0x405000000000000);
    if ((local_f8.f.flags != 3) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsObject()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x575,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((((ulonglong)local_310.s.str & 0x400000000000000) == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("name.IsString()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x576,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (local_f8.s.hashcode <= local_f8.s.length) {
      if (local_f8.s.hashcode == 0) {
        uVar26 = 0x10;
      }
      else {
        uVar26 = (local_f8.s.hashcode + 1 >> 1) + local_f8.s.hashcode;
        if (uVar26 <= local_f8.s.hashcode) goto LAB_146b8ca54;
      }
      if ((ulonglong)uVar26 == 0) {
        FMemory::Free((void *)((ulonglong)local_f8.s.str & 0xffffffffffff));
        pvVar24 = (void *)0x0;
      }
      else {
        pvVar24 = FMemory::Realloc((void *)((ulonglong)local_f8.s.str & 0xffffffffffff),
                                   (ulonglong)uVar26 << 5,0);
      }
      local_f8.s.str =
           (wchar_t *)((ulonglong)local_f8.s.str & 0xffff000000000000 | (ulonglong)pvVar24);
      local_f8.s.hashcode = uVar26;
    }
LAB_146b8ca54:
    uVar11 = local_310.s.str;
    uVar22 = uStack_368;
    local_310.s.str = (wchar_t *)((ulonglong)local_310.s.str & 0xffffffffffff);
    pNVar3 = (Number *)
             ((ulonglong)local_f8.s.length * 0x20 + ((ulonglong)local_f8.s.str & 0xffffffffffff));
    *pNVar3 = local_310.n;
    pNVar3[1].u64 = uVar11;
    uStack_368 = uStack_368 & 0xffffffffffff;
    puVar5 = (ulonglong *)
             ((ulonglong)local_f8.s.length * 0x20 + 0x10 +
             ((ulonglong)local_f8.s.str & 0xffffffffffff));
    *puVar5 = local_370;
    puVar5[1] = uVar22;
    local_f8.s.length = local_f8.s.length + 1;
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_310.s);
    uVar6 = local_348.f.flags;
    if ((local_348.f.flags != 4) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsArray()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x6bb,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar11 = local_348.n;
    uVar25 = local_348.s.length;
    uVar13 = local_348.s.hashcode;
    if (local_348.s.length < local_348.s.hashcode) {
LAB_146b8cbbe:
    }
    else {
      if ((char  [4])local_348.s.hashcode == (char  [4])0x0) {
        acVar31[0] = '\x10';
        acVar31[1] = '\0';
        acVar31[2] = '\0';
        acVar31[3] = '\0';
      }
      else {
        acVar31 = (char  [4])((local_348.s.hashcode + 1 >> 1) + local_348.s.hashcode);
      }
      if ((uVar6 != 4) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsArray()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x6a8,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar32 = local_348.s.str;
      if ((uint)acVar31 <= (uint)uVar13) goto LAB_146b8cbbe;
      local_348.s.hashcode = (uint)acVar31;
      if (acVar31 == (char  [4])0x0) {
        FMemory::Free((void *)((ulonglong)local_348.s.str & 0xffffffffffff));
        local_348.s.str = (wchar_t *)(uVar32 & 0xffff000000000000);
      }
      else {
        pvVar24 = FMemory::Realloc((void *)((ulonglong)local_348.s.str & 0xffffffffffff),
                                   (ulonglong)(uint)acVar31 << 4,0);
        local_348.s.str = (wchar_t *)(uVar32 & 0xffff000000000000 | (ulonglong)pvVar24);
      }
    }
    uVar22 = uStack_368;
    local_348.s.length = uVar25 + 1;
    pNVar3 = (Number *)
             (((ulonglong)local_348.s.str & 0xffffffffffff) + (uVar11 & 0xffffffff) * 0x10);
    pNVar3->u64 = (ulong64)local_f8.n;
    pNVar3[1].u64 = (ulong64)local_f8.s.str;
    local_f8.s.str = (wchar_t *)((ulonglong)local_f8.s.str & 0xffffffffffff);
    if (uStack_368._6_2_ == 3) {
      pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                (uStack_368 & 0xffffffffffff);
      while( true ) {
        if ((uStack_368._6_2_ != 3) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObject()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x506,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (pGVar18 ==
            (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
            ((local_370 & 0xffffffff) * 0x20 + (uVar22 & 0xffffffffffff))) break;
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18 + 1);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
        pGVar18 = pGVar18 + 2;
      }
LAB_146b8cc0a:
      FMemory::Free((void *)(uVar22 & 0xffffffffffff));
    }
    else {
      if (uStack_368._6_2_ == 4) {
        pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  (uStack_368 & 0xffffffffffff);
        pGVar23 = pGVar18 + (local_370 & 0xffffffff);
        for (; pGVar18 != pGVar23; pGVar18 = pGVar18 + 1) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
        }
        goto LAB_146b8cc0a;
      }
      if (uStack_368._6_2_ == 0xc05) goto LAB_146b8cc0a;
    }
    if (local_f8.f.flags == 3) {
      pGVar18 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                ((ulonglong)local_f8.s.str & 0xffffffffffff);
      while( true ) {
        if ((local_f8.f.flags != 3) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObject()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x506,L""), bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_f8.s.str & 0xffffffffffff);
        if (pGVar18 == pGVar23 + ((ulonglong)local_f8.n & 0xffffffff) * 2) break;
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18 + 1);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
        pGVar18 = pGVar18 + 2;
      }
LAB_146b8cc3a:
      FMemory::Free(pGVar23);
    }
    else {
      if (local_f8.f.flags == 4) {
        pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_f8.s.str & 0xffffffffffff);
        pGVar18 = pGVar23;
        if (pGVar23 != pGVar23 + ((ulonglong)local_f8.n & 0xffffffff)) {
          do {
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar18);
            pGVar18 = pGVar18 + 1;
          } while (pGVar18 != pGVar23 + ((ulonglong)local_f8.n & 0xffffffff));
        }
        goto LAB_146b8cc3a;
      }
      if (local_f8.f.flags == 0xc05) {
        pGVar23 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_f8.s.str & 0xffffffffffff);
        goto LAB_146b8cc3a;
      }
    }
    pFVar35 = local_248 + 0x10;
    uVar22 = (ulonglong)local_300;
    param_3 = local_350;
  } while( true );
}

// StructuredDataToManifest @ 146b8d2a0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __cdecl
FJsonInternationalizationManifestSerializer::StructuredDataToManifest
          (TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1>
           *param_1,TSharedRef<FInternationalizationManifest,1> *param_2)

{
  undefined1 *puVar1;
  TMap<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>
  *pTVar2;
  int iVar3;
  uint uVar4;
  FInternationalizationManifest *this;
  longlong lVar5;
  FStructuredEntry *pFVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  TMap<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>
  *pTVar9;
  bool bVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  FManifestContext *pFVar17;
  undefined1 *puVar18;
  uint *puVar19;
  FManifestContext *pFVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8 [4];
  uint local_f4;
  int local_f0;
  FStructuredEntry *local_e8;
  FScriptContainerElement *local_e0;
  TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry_const_,1> local_d8;
  TMap<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TMap<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  local_e8 = param_1->Object;
  if (local_e8 != (FStructuredEntry *)0x0) {
    local_f4 = (local_e8->ManifestEntries).ArrayNum;
    uVar11 = (ulonglong)(int)local_f4;
    pFVar14 = (local_e8->ManifestEntries).AllocatorInstance.Data;
    local_e0 = pFVar14 + uVar11 * 0x10;
    while( true ) {
      pFVar8 = local_e0;
      if ((local_e8->ManifestEntries).ArrayNum != (int)uVar11) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FManifestEntry,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar14 == pFVar8) break;
      if ((*(longlong *)pFVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar12 = *(longlong *)pFVar14;
      iVar3 = *(int *)(lVar12 + 0x40);
      pFVar17 = *(FManifestContext **)(lVar12 + 0x38);
      pFVar20 = pFVar17 + iVar3;
      while( true ) {
        if (*(int *)(lVar12 + 0x40) != iVar3) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FManifestContext,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar17 == pFVar20) break;
        this = param_2->Object;
        if ((*(longlong *)pFVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)pFVar14;
        if ((lVar5 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FInternationalizationManifest::AddSource
                  (this,*(FLocKey **)pFVar14,(FLocItem *)(lVar5 + 0x18),pFVar17);
        pFVar17 = pFVar17 + 1;
      }
      pFVar14 = pFVar14 + 0x10;
      uVar11 = (ulonglong)local_f4;
    }
    if ((param_1->Object == (FStructuredEntry *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar6 = param_1->Object;
    iStack_c0 = 0;
    iVar3 = *(int *)&(pFVar6->SubNamespaces).field_0x28;
    puVar1 = &(pFVar6->SubNamespaces).field_0x10;
    uStack_bc = 1;
    local_a8 = 0;
    pTVar2 = &pFVar6->SubNamespaces;
    iStack_ac = 0;
    if (iVar3 != 0) {
      puVar19 = *(uint **)&(pFVar6->SubNamespaces).field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)puVar1;
      }
      uVar16 = *puVar19;
      while (uVar16 == 0) {
        lVar12 = (longlong)iStack_c0;
        local_a8 = local_a8 + 0x20;
        iStack_c0 = iStack_c0 + 1;
        iStack_ac = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_146b8d4ce;
        uVar16 = puVar19[lVar12 + 1];
      }
      uStack_bc = -uVar16 & uVar16;
      uVar11 = (ulonglong)uStack_bc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_f0 = (int)lVar12;
      iStack_ac = local_a8 + -1 + local_f0;
      if (iVar3 < iStack_ac) {
        iStack_ac = iVar3;
      }
    }
LAB_146b8d4ce:
    uStack_a4 = local_4c;
    iStack_a0 = *(int *)&(pFVar6->SubNamespaces).field_0x8 -
                *(int *)&(pFVar6->SubNamespaces).field_0x34;
    uVar16 = *(uint *)&(pFVar6->SubNamespaces).field_0x28;
    uStack_b0 = 0xffffffff;
    uVar15 = uVar16 & 0xffffffe0;
    TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
    TStack_90.CurrentBitIndex = iStack_ac;
    TStack_90.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_90._28_4_ = local_4c;
    TStack_90.BaseBitIndex = local_a8;
    uStack_70 = CONCAT44(uStack_9c,iStack_a0);
    local_c8 = pTVar2;
    local_b8 = puVar1;
    local_98 = pTVar2;
    TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar4 = *(uint *)&(pFVar6->SubNamespaces).field_0x28;
    if (uVar16 != uVar4) {
      puVar18 = *(undefined1 **)&(pFVar6->SubNamespaces).field_0x20;
      if (puVar18 == (undefined1 *)0x0) {
        puVar18 = puVar1;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar12 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_146b8d5d0;
        uVar16 = *(uint *)(puVar18 + lVar12 * 4 + 4);
      }
      uVar11 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar16 = (int)lVar12 + -1 + uVar15;
      if ((int)uVar4 < (int)uVar16) {
        uVar16 = uVar4;
      }
    }
LAB_146b8d5d0:
    while( true ) {
      pTVar9 = local_98;
      if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
        `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonInternationalizationManifestSerializer::FStructuredEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_f8);
      }
      if (((TStack_90.CurrentBitIndex == uVar16) &&
          (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar2)
         ) break;
      lVar12 = *(longlong *)pTVar9;
      local_d8.Object =
           *(FStructuredEntry **)(lVar12 + 0x10 + (longlong)TStack_90.CurrentBitIndex * 0x28);
      local_d8.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)
            (lVar12 + (longlong)TStack_90.CurrentBitIndex * 0x28 + 0x18);
      if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      StructuredDataToManifest(&local_d8,param_2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.SharedReferenceCount.ReferenceController);
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    }
  }
  return;
}

