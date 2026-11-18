// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 11

// operator() @ 146b4b050

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
`FJsonInternationalizationArchiveSerializer::SortStructuredData'::__l2::<lambda_1>::operator()
          (void *this,TSharedPtr<FArchiveEntry,1> *param_1,TSharedPtr<FArchiveEntry,1> *param_2)

{
  FArchiveEntry *pFVar1;
  FLocMetadataObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FArchiveEntry *pFVar7;
  wchar_t *_Str1;
  wchar_t *pwVar8;
  wchar_t *_Str1_00;
  
  _Str1_00 = L"";
  if ((param_1->Object == (FArchiveEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar7 = param_1->Object;
  if ((param_2->Object == (FArchiveEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  bVar4 = FLocItem::operator==(&pFVar7->Source,&param_2->Object->Source);
  if (!bVar4) {
    if ((param_1->Object == (FArchiveEntry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    pFVar7 = param_1->Object;
    if ((param_2->Object == (FArchiveEntry *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    bVar4 = FLocItem::operator<(&pFVar7->Source,&param_2->Object->Source);
    return bVar4;
  }
  if ((param_1->Object == (FArchiveEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar7 = param_1->Object;
  if ((param_2->Object == (FArchiveEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar1 = param_2->Object;
  if ((pFVar7->Key).Hash == (pFVar1->Key).Hash) {
    if ((pFVar1->Key).Str.Data.ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar1->Key).Str.Data.AllocatorInstance.Data;
    }
    if ((pFVar7->Key).Str.Data.ArrayNum == 0) {
      _Str1 = L"";
    }
    else {
      _Str1 = (wchar_t *)(pFVar7->Key).Str.Data.AllocatorInstance.Data;
    }
    iVar6 = wcscmp(_Str1,pwVar8);
    if (iVar6 == 0) {
      if ((param_1->Object == (FArchiveEntry *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (param_1->Object->KeyMetadataObj).Object;
      if ((param_2->Object == (FArchiveEntry *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      if ((pFVar2 != (FLocMetadataObject *)0x0) !=
          ((param_2->Object->KeyMetadataObj).Object != (FLocMetadataObject *)0x0)) {
        pFVar7 = TSharedPtr<FArchiveEntry,1>::operator->(param_2);
        return (pFVar7->KeyMetadataObj).Object != (FLocMetadataObject *)0x0;
      }
      pFVar7 = TSharedPtr<FArchiveEntry,1>::operator->(param_1);
      if (((pFVar7->KeyMetadataObj).Object != (FLocMetadataObject *)0x0) &&
         (pFVar7 = TSharedPtr<FArchiveEntry,1>::operator->(param_2),
         (pFVar7->KeyMetadataObj).Object != (FLocMetadataObject *)0x0)) {
        pFVar7 = TSharedPtr<FArchiveEntry,1>::operator->(param_1);
        if (((pFVar7->KeyMetadataObj).Object == (FLocMetadataObject *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (pFVar7->KeyMetadataObj).Object;
        pFVar7 = TSharedPtr<FArchiveEntry,1>::operator->(param_2);
        if (((pFVar7->KeyMetadataObj).Object == (FLocMetadataObject *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x44d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        bVar4 = FLocMetadataObject::operator<(pFVar2,(pFVar7->KeyMetadataObj).Object);
        return bVar4;
      }
    }
  }
  if ((param_1->Object == (FArchiveEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar7 = param_1->Object;
  if ((param_2->Object == (FArchiveEntry *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if ((param_2->Object->Key).Str.Data.ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_2->Object->Key).Str.Data.AllocatorInstance.Data;
  }
  if ((pFVar7->Key).Str.Data.ArrayNum != 0) {
    _Str1_00 = (wchar_t *)(pFVar7->Key).Str.Data.AllocatorInstance.Data;
  }
  iVar6 = wcscmp(_Str1_00,pwVar8);
  return SUB41((uint)iVar6 >> 0x1f,0);
}

// DeserializeArchiveFromFile @ 146b54c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationArchiveSerializer::DeserializeArchiveFromFile
          (FString *param_1,TSharedRef<FInternationalizationArchive,1> *param_2,
          TSharedPtr<FInternationalizationManifest_const_,1> *param_3,
          TSharedPtr<FInternationalizationArchive_const_,1> *param_4)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  undefined1 auStackY_198 [32];
  FString local_168;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_158;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_150;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  TSharedPtr<FInternationalizationArchive_const_,1> local_118;
  TSharedPtr<FInternationalizationManifest_const_,1> local_108;
  TSharedRef<FInternationalizationArchive,1> local_f8;
  TArrayView<wchar_t,int> local_e8;
  TStringView<wchar_t> local_d8;
  FString local_c8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_b8;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.Data.ArrayNum = 0;
  local_168.Data.ArrayMax = 0;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar4 = FFileHelper::LoadFileToString(&local_168,pwVar7,None,0);
  FVar2.Data = local_168.Data.AllocatorInstance.Data;
  if (bVar4) {
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = local_168.Data.ArrayNum;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    local_138 = FVar2.Data;
    if ((iVar3 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    iStack_130 = iVar3;
    local_e8._12_4_ = uStack_12c;
    local_e8.ArrayNum = iVar3;
    local_e8.DataPtr = (wchar_t *)local_138;
    UE::Json::ParseInPlace(&local_b8,&local_e8);
    uVar8 = (ulonglong)local_b8.Variant.TypeIndex;
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
      if ((local_b8.Variant.TypeIndex != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      UE::Json::GetRootObject
                (&local_150,
                 (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  *)&local_b8);
      if (local_150.bIsSet != false) {
        local_118.Object = param_4->Object;
        local_118.SharedReferenceCount.ReferenceController =
             (param_4->SharedReferenceCount).ReferenceController;
        if (local_118.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_118.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_108.Object = param_3->Object;
        local_108.SharedReferenceCount.ReferenceController =
             (param_3->SharedReferenceCount).ReferenceController;
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_f8.Object = param_2->Object;
        local_f8.SharedReferenceCount.ReferenceController =
             (param_2->SharedReferenceCount).ReferenceController;
        if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((local_150.bIsSet == false) &&
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
        local_158 = local_150.TypedValue.value_;
        bVar4 = DeserializeInternal((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                     *)&local_158,&local_f8,&local_108,&local_118);
        if ((2 < local_b8.Variant.TypeIndex) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[local_b8.Variant.TypeIndex])(&local_b8);
        if (FVar2.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar2.Data);
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_2->SharedReferenceCount).ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_4->SharedReferenceCount).ReferenceController);
        return bVar4;
      }
      if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
      }
    }
    else {
      if ((param_1->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar4 = FFileHelper::LoadFileToString(&local_168,pwVar7,None,0);
      if ((!bVar4) &&
         (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7928318133004140612>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\Serialization\\JsonInternationalizationArchiveSerializer.cpp"
                             ,0x44,"FFileHelper::LoadFileToString(FileContents, *InJsonFile)"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return (bool)uVar5;
      }
      if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
        if ((local_b8.Variant.TypeIndex != 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index == TypeIndex",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                               ,0x97,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return (bool)uVar5;
        }
        local_128 = local_168.Data.AllocatorInstance.Data;
        iStack_120 = local_168.Data.ArrayNum + -1;
        if (local_168.Data.ArrayNum == 0) {
          iStack_120 = 0;
        }
        local_d8._12_4_ = uStack_11c;
        local_d8.Size = iStack_120;
        local_d8.DataPtr = (wchar_t *)local_168.Data.AllocatorInstance.Data;
        UE::Json::FParseError::CreateMessage((FParseError *)&local_b8,&local_c8,&local_d8);
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
      }
    }
    if ((2 < local_b8.Variant.TypeIndex) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_b8.Variant.TypeIndex])(&local_b8);
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
  }
  else {
    if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
  }
  return false;
}

// DeserializeArchiveFromString @ 146b55120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationArchiveSerializer::DeserializeArchiveFromString
          (FString *param_1,TSharedRef<FInternationalizationArchive,1> *param_2,
          TSharedPtr<FInternationalizationManifest_const_,1> *param_3,
          TSharedPtr<FInternationalizationArchive_const_,1> *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  ulonglong uVar6;
  undefined1 auStack_168 [32];
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_148;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_140;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TSharedPtr<FInternationalizationArchive_const_,1> local_108;
  TSharedPtr<FInternationalizationManifest_const_,1> local_f8;
  TSharedRef<FInternationalizationArchive,1> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  FString local_b8;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_128 = (param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iStack_120 = iVar1 + -1;
  if (iVar1 == 0) {
    iStack_120 = 0;
  }
  local_d8._12_4_ = uStack_11c;
  local_d8.Size = iStack_120;
  local_d8.DataPtr = (wchar_t *)local_128;
  UE::Json::Parse(&local_a8,&local_d8);
  uVar6 = (ulonglong)local_a8.Variant.TypeIndex;
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
    if ((local_a8.Variant.TypeIndex != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index == TypeIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                           ,0x97,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    UE::Json::GetRootObject
              (&local_140,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&local_a8);
    if (local_140.bIsSet == false) {
      if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
      }
      if ((2 < local_a8.Variant.TypeIndex) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
      bVar3 = false;
    }
    else {
      local_108.Object = param_4->Object;
      local_108.SharedReferenceCount.ReferenceController =
           (param_4->SharedReferenceCount).ReferenceController;
      if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_f8.Object = param_3->Object;
      local_f8.SharedReferenceCount.ReferenceController =
           (param_3->SharedReferenceCount).ReferenceController;
      if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_e8.Object = param_2->Object;
      local_e8.SharedReferenceCount.ReferenceController =
           (param_2->SharedReferenceCount).ReferenceController;
      if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_140.bIsSet == false) &&
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
      local_148 = local_140.TypedValue.value_;
      bVar3 = DeserializeInternal((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                   *)&local_148,&local_e8,&local_f8,&local_108);
      if ((2 < local_a8.Variant.TypeIndex) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
    }
  }
  else {
    if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
      if ((local_a8.Variant.TypeIndex != 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      local_118 = (param_1->Data).AllocatorInstance.Data;
      iVar1 = (param_1->Data).ArrayNum;
      iStack_110 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_110 = 0;
      }
      local_c8._12_4_ = uStack_10c;
      local_c8.Size = iStack_110;
      local_c8.DataPtr = (wchar_t *)local_118;
      UE::Json::FParseError::CreateMessage((FParseError *)&local_a8,&local_b8,&local_c8);
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
    if ((2 < local_a8.Variant.TypeIndex) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>::FWrapErrorType,TValueOrError<class_rapidjson::GenericDocument<struct_rapidjson::UTF16<wchar_t>,class_UE::Json::Private::FAllocatorImpl,class_rapidjson::CrtAllocator>,struct_UE::Json::FParseError>::FEmptyType>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[local_a8.Variant.TypeIndex])(&local_a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    bVar3 = false;
  }
  return bVar3;
}

// DeserializeInternal @ 146b554b0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationArchiveSerializer::DeserializeInternal
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,TSharedRef<FInternationalizationArchive,1> *param_2,
          TSharedPtr<FInternationalizationManifest_const_,1> *param_3,
          TSharedPtr<FInternationalizationArchive_const_,1> *param_4)

{
  bool bVar1;
  Number local_res8;
  Number local_58;
  undefined8 local_50;
  TSharedPtr<FInternationalizationArchive_const_,1> local_48;
  TSharedPtr<FInternationalizationManifest_const_,1> local_38;
  TSharedRef<FInternationalizationArchive,1> local_28;
  
  local_58 = ((param_1.value_)->data_).n;
  UE::Json::GetInt32Field
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_res8,(wchar_t *)&local_58.i64);
  if (local_res8._4_1_ == '\0') {
    param_2->Object->FormatVersion = Initial;
  }
  else {
    if (2 < local_res8._0_4_) goto LAB_146b5550d;
    param_2->Object->FormatVersion = local_res8._0_1_;
  }
  if ((EscapeFixes < param_2->Object->FormatVersion) ||
     (param_3->Object != (FInternationalizationManifest *)0x0)) {
    local_48.Object = param_4->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Object = param_3->Object;
    local_38.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_28.Object = param_2->Object;
    local_28.SharedReferenceCount.ReferenceController =
         (param_2->SharedReferenceCount).ReferenceController;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.i64 = 0;
    local_50 = 0;
    local_res8 = ((param_1.value_)->data_).n;
    bVar1 = JsonObjToArchive((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                              *)&local_res8,(FString *)&local_58.i,&local_28,&local_38,&local_48);
    if ((void *)local_58.i64 != (void *)0x0) {
      FMemory::Free((void *)local_58);
    }
    if (!bVar1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
    }
    else {
      param_2->Object->FormatVersion = AddedKeys;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_4->SharedReferenceCount).ReferenceController);
    }
    return bVar1;
  }
LAB_146b5550d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return false;
}

// GenerateStructuredData @ 146b6ee80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

void __cdecl
FJsonInternationalizationArchiveSerializer::GenerateStructuredData
          (TSharedRef<FInternationalizationArchive_const_,1> *param_1,
          TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1> *param_2
          )

{
  int *piVar1;
  longlong lVar2;
  FString *this;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  FStructuredArchiveEntry *pFVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  FStructuredArchiveEntry *pFVar15;
  wchar_t *pwVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  undefined1 local_res18 [8];
  int local_res20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  FString *local_e8;
  TReferenceControllerBase<1> *local_e0;
  FStructuredArchiveEntry *local_d8;
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
  FInternationalizationArchive::GetEntriesBySourceTextIterator
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
        if ((pFVar6 == (FStructuredArchiveEntry *)0x0) &&
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
        iVar10 = TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
                 ::FindIndexByHash<FString>
                           ((TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
                             *)&pFVar6->SubNamespaces,uVar9,(FString *)FVar18.Data);
        if ((iVar10 == -1) ||
           (lVar2 = *(longlong *)&pFVar6->SubNamespaces + (longlong)iVar10 * 0x28, lVar2 == 0)) {
          local_c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_146b6f084:
          pTVar14 = (TReferenceControllerBase<1> *)0x0;
          if ((pFVar6 == (FStructuredArchiveEntry *)0x0) &&
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
                 ___7__TIntrusiveReferenceController_UFStructuredArchiveEntry_FJsonInternationalizationArchiveSerializer___00_SharedPointerInternals__6B_
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
          TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FString_const_&,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_&&>_>
                    ((TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
                      *)&pFVar6->SubNamespaces,
                     (TPairInitializer<FString_const_&,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_&&>
                      *)&local_res20,(bool *)&local_70);
          FVar7.ReferenceController = local_c0.ReferenceController;
          lVar2 = *(longlong *)&(pFVar6->SubNamespaces).field_0x0;
          local_c0.ReferenceController =
               *(TReferenceControllerBase<1> **)(lVar2 + 0x18 + (longlong)local_res20 * 0x28);
          pFVar15 = *(FStructuredArchiveEntry **)(lVar2 + 0x10 + (longlong)local_res20 * 0x28);
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
          pFVar15 = *(FStructuredArchiveEntry **)(lVar2 + 0x10);
          local_c0.ReferenceController = *(TReferenceControllerBase<1> **)(lVar2 + 0x18);
          if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c0.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (pFVar15 == (FStructuredArchiveEntry *)0x0) goto LAB_146b6f084;
        }
        local_c8 = 0;
        local_d8 = pFVar15;
        SharedPointerInternals::FSharedReferencer<1>::operator=(&local_d0,&local_c0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c0.ReferenceController);
        uVar12 = local_f8._8_8_ & 0xffffffff;
        FVar18.Data = FVar18.Data + 0x10;
      }
      if ((pFVar6 == (FStructuredArchiveEntry *)0x0) &&
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
      pFVar17 = (pFVar6->ArchiveEntries).AllocatorInstance.Data;
      if (((pFVar17 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           pFVar17 + (longlong)(pFVar6->ArchiveEntries).ArrayMax * 0x10)) &&
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
      iVar11 = (pFVar6->ArchiveEntries).ArrayNum;
      piVar1 = &(pFVar6->ArchiveEntries).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar6->ArchiveEntries).AllocatorInstance,piVar1);
      }
      (pFVar6->ArchiveEntries).ArrayNum = iVar11 + 1;
      pFVar17 = (pFVar6->ArchiveEntries).AllocatorInstance.Data + (longlong)iVar11 * 0x10;
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

// JsonObjToArchive @ 146b7aac0

/* WARNING: Removing unreachable block (ram,0x000146b7b687) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationArchiveSerializer::JsonObjToArchive
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,FString *param_2,TSharedRef<FInternationalizationArchive,1> *param_3,
          TSharedPtr<FInternationalizationManifest_const_,1> *param_4,
          TSharedPtr<FInternationalizationArchive_const_,1> *param_5)

{
  FLocKey *pFVar1;
  FInternationalizationArchive *this;
  code *pcVar2;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  *this_00;
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar3;
  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  GVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar9;
  TSharedPtr<FLocMetadataValue,1> *pTVar10;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  **ppTVar11;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
  **ppTVar12;
  ForAnyElementType FVar13;
  FString *pFVar14;
  int iVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  FSharedReferencer<1> FVar18;
  TReferenceControllerBase<1> *pTVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  FScriptContainerElement *pFVar23;
  TSharedRef<FInternationalizationArchive,1> *pTVar24;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
  *this_01;
  wchar_t *pwVar25;
  FLocMetadataObject *pFVar26;
  undefined1 local_res10 [8];
  TSharedRef<FInternationalizationArchive,1> *local_res18;
  TSharedPtr<FInternationalizationManifest_const_,1> *local_res20;
  byte local_408;
  char local_407;
  FString local_400;
  TArray<FLocKey,TSizedDefaultAllocator<32>_> local_3f0;
  FString local_3e0;
  ForAnyElementType local_3d0;
  undefined8 local_3c8;
  ForAnyElementType local_3c0;
  undefined8 local_3b8;
  TSharedPtr<FLocMetadataObject,1> local_3a8;
  TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
  *local_398;
  FSharedReferencer<1> FStack_390;
  FLocKey local_388;
  TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
  *local_370;
  FSharedReferencer<1> FStack_368;
  FString local_360;
  uint local_350;
  FLocKey local_348;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_330;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_320;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_310;
  FLocItem local_308;
  FLocItem local_2e8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_2c8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_2c0;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_2b8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_2b0;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_2a8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_2a0;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_298;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_290;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_288;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_280;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_278;
  Number local_270;
  ulonglong local_268;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_260;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_258;
  TSharedRef<FInternationalizationManifest_const_,1> local_248;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_238;
  Number local_228;
  Number local_220;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_218;
  FLocKey local_210;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_1f8;
  TOptional<TStringView<wchar_t>_> local_1f0;
  TSharedRef<FInternationalizationArchive,1> local_1d8;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_1c8;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_1b8;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_1a8;
  TSharedPtr<FInternationalizationArchive_const_,1> local_198;
  TSharedPtr<FInternationalizationManifest_const_,1> local_188;
  TOptional<TStringView<wchar_t>_> local_178;
  TOptional<TStringView<wchar_t>_> local_160;
  TOptional<TStringView<wchar_t>_> local_148;
  TOptional<TStringView<wchar_t>_> local_130;
  TOptional<TStringView<wchar_t>_> local_118;
  undefined1 local_100 [8];
  TReferenceControllerBase<1> *local_f8;
  TSharedPtr<FLocMetadataValue,1> local_f0;
  undefined1 local_e0 [8];
  TReferenceControllerBase<1> *local_d8;
  TSharedPtr<FLocMetadataValue,1> local_d0;
  TSharedPtr<FLocMetadataObject,1> local_b8;
  FString local_a8;
  TSharedPtr<FLocMetadataObject,1> local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  FString local_68 [2];
  
  local_400.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar22 = (longlong)local_400.Data.ArrayNum;
  pFVar23 = (param_2->Data).AllocatorInstance.Data;
  local_400.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18 = param_3;
  local_res20 = param_4;
  if (local_400.Data.ArrayNum == 0) {
    local_400.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_400.Data.ArrayNum,0,(ForAnyElementType *)&local_400,local_400.Data.ArrayNum
               ,&local_400.Data.ArrayMax);
    memcpy(local_400.Data.AllocatorInstance.Data,pFVar23,lVar22 * 2);
  }
  pwVar25 = L"";
  local_228 = ((param_1.value_)->data_).n;
  if (TAG_NAMESPACE.Data.ArrayNum != 0) {
    pwVar25 = (wchar_t *)TAG_NAMESPACE.Data.AllocatorInstance.Data;
  }
  UE::Json::GetStringField
            (&local_1f0,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_228
             ,pwVar25);
  if (local_1f0.bIsSet == false) {
    if (2 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
    }
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_3->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
    bVar5 = false;
  }
  else {
    if (1 < local_400.Data.ArrayNum) {
      iVar8 = NAMESPACE_DELIMITER.Data.ArrayNum + -1;
      if (NAMESPACE_DELIMITER.Data.ArrayNum == 0) {
        iVar8 = 0;
      }
      ::FString::AppendChars
                (&local_400,(wchar_t *)NAMESPACE_DELIMITER.Data.AllocatorInstance.Data,iVar8);
    }
    if ((local_1f0.bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
    ::FString::AppendChars(&local_400,local_1f0.TypedValue.DataPtr,local_1f0.TypedValue.Size);
    pwVar25 = L"";
    local_220 = ((param_1.value_)->data_).n;
    if (TAG_CHILDREN.Data.ArrayNum != 0) {
      pwVar25 = (wchar_t *)TAG_CHILDREN.Data.AllocatorInstance;
    }
    UE::Json::GetArrayField
              (&local_258,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_220,pwVar25);
    if (local_258.bIsSet != false) {
      pGVar9 = rapidjson::
               GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
               ::begin(&local_258.TypedValue);
      local_310 = pGVar9;
      local_278 = rapidjson::
                  GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                  ::end(&local_258.TypedValue);
      if (pGVar9 != local_278) {
        do {
          pFVar23 = (FScriptContainerElement *)0x0;
          if ((pGVar9->data_).f.flags != 3) {
LAB_146b7b98a:
            if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_400.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((param_3->SharedReferenceCount).ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((param_4->SharedReferenceCount).ReferenceController);
            pTVar19 = (param_5->SharedReferenceCount).ReferenceController;
            goto LAB_146b7bb75;
          }
          pwVar25 = L"";
          local_3e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (TAG_SOURCE.Data.ArrayNum != 0) {
            pwVar25 = (wchar_t *)TAG_SOURCE.Data.AllocatorInstance.Data;
          }
          local_3e0.Data.ArrayNum = 0;
          local_3e0.Data.ArrayMax = 0;
          local_398 = (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                       *)0x0;
          FStack_390.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_218 = pGVar9;
          UE::Json::GetObjectField
                    (&local_320,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_218,pwVar25);
          pwVar25 = L"";
          iVar8 = 0;
          if (local_320.bIsSet == false) {
            if (TAG_DEPRECATED_DEFAULTTEXT.Data.ArrayNum != 0) {
              pwVar25 = (wchar_t *)TAG_DEPRECATED_DEFAULTTEXT.Data.AllocatorInstance;
            }
            local_260 = pGVar9;
            UE::Json::GetStringField
                      (&local_160,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_260,pwVar25);
            if (local_160.bIsSet != false) {
              ::FString::AssignRange
                        (&local_3e0,local_160.TypedValue.DataPtr,local_160.TypedValue.Size);
              goto LAB_146b7af1b;
            }
LAB_146b7b974:
            FVar18.ReferenceController = (TReferenceControllerBase<1> *)0x0;
LAB_146b7b976:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar18.ReferenceController);
            if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
            }
            goto LAB_146b7b98a;
          }
          if (TAG_SOURCE_TEXT.Data.ArrayNum != 0) {
            pwVar25 = (wchar_t *)TAG_SOURCE_TEXT.Data.AllocatorInstance;
          }
          local_1f8 = local_320.TypedValue.value_;
          UE::Json::GetStringField
                    (&local_178,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_1f8,pwVar25);
          if (local_178.bIsSet == false) goto LAB_146b7b974;
          ::FString::AssignRange(&local_3e0,local_178.TypedValue.DataPtr,local_178.TypedValue.Size);
          if ((local_320.bIsSet == false) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0x1bd,
                                 L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                ), bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          GVar3.value_ = local_320.TypedValue.value_;
          if ((((local_320.TypedValue.value_)->data_).f.flags != 3) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsObject()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                 ,0x4b0,L""), bVar5)) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return (bool)uVar6;
          }
          if (1 < ((GVar3.value_)->data_).s.length) {
            if ((local_320.bIsSet == false) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            pTVar10 = JsonValueToLocMetaDataValue(&local_f0,local_320.TypedValue.value_);
            if ((pTVar10->Object == (FLocMetadataValue *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            ppTVar11 = (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                        **)(**(code **)((longlong)*pTVar10->Object + 0x28))
                                     (pTVar10->Object,local_100);
            if (&local_398 != ppTVar11) {
              local_398 = *ppTVar11;
              *ppTVar11 = (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                           *)0x0;
              SharedPointerInternals::FSharedReferencer<1>::operator=
                        (&FStack_390,(FSharedReferencer<1> *)(ppTVar11 + 1));
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_f0.SharedReferenceCount.ReferenceController);
            if (local_398 !=
                (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                 *)0x0) {
              if ((local_398 ==
                   (TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                    *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              this_00 = local_398;
              if (*(int *)&(local_398->Elements).field_0x8 !=
                  *(int *)&(local_398->Elements).field_0x34) {
                iVar15 = TAG_SOURCE_TEXT.Data.ArrayNum + -1;
                FVar16.Data = TAG_SOURCE_TEXT.Data.AllocatorInstance.Data;
                if (TAG_SOURCE_TEXT.Data.ArrayNum == 0) {
                  iVar15 = iVar8;
                  FVar16.Data = (FScriptContainerElement *)L"";
                }
                uVar7 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar15,(wchar_t *)FVar16.Data);
                TSet<TTuple<FString,TSharedPtr<FLocMetadataValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>,FDefaultSetAllocator>
                ::RemoveImpl<FString>(this_00,uVar7,&TAG_SOURCE_TEXT);
              }
            }
          }
LAB_146b7af1b:
          pwVar25 = L"";
          local_360.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (TAG_TRANSLATION.Data.ArrayNum != 0) {
            pwVar25 = (wchar_t *)TAG_TRANSLATION.Data.AllocatorInstance.Data;
          }
          local_360.Data.ArrayNum = 0;
          local_360.Data.ArrayMax = 0;
          local_370 = (TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
                       *)0x0;
          FStack_368.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_2c8 = pGVar9;
          UE::Json::GetObjectField
                    (&local_330,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_2c8,pwVar25);
          if (local_330.bIsSet == false) {
LAB_146b7b959:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            FVar18.ReferenceController = FStack_390.ReferenceController;
            if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_360.Data.AllocatorInstance.Data);
              FVar18.ReferenceController = FStack_390.ReferenceController;
            }
            goto LAB_146b7b976;
          }
          pwVar25 = L"";
          if (TAG_TRANSLATION_TEXT.Data.ArrayNum != 0) {
            pwVar25 = (wchar_t *)TAG_TRANSLATION_TEXT.Data.AllocatorInstance;
          }
          local_2c0 = local_330.TypedValue.value_;
          UE::Json::GetStringField
                    (&local_148,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_2c0,pwVar25);
          if (local_148.bIsSet == false) {
            pwVar25 = L"";
            if (TAG_DEPRECATED_TRANSLATEDTEXT.Data.ArrayNum != 0) {
              pwVar25 = (wchar_t *)TAG_DEPRECATED_TRANSLATEDTEXT.Data.AllocatorInstance;
            }
            local_2b8 = pGVar9;
            UE::Json::GetStringField
                      (&local_130,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_2b8,pwVar25);
            if (local_130.bIsSet == false) goto LAB_146b7b959;
            ::FString::AssignRange
                      (&local_360,local_130.TypedValue.DataPtr,local_130.TypedValue.Size);
            this_01 = local_370;
          }
          else {
            ::FString::AssignRange
                      (&local_360,local_148.TypedValue.DataPtr,local_148.TypedValue.Size);
            if ((local_330.bIsSet == false) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            GVar3.value_ = local_330.TypedValue.value_;
            if ((((local_330.TypedValue.value_)->data_).f.flags != 3) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsObject()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                   ,0x4b0,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              uVar6 = (*pcVar2)();
              return (bool)uVar6;
            }
            this_01 = local_370;
            if (1 < ((GVar3.value_)->data_).s.length) {
              if ((local_330.bIsSet == false) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              pTVar10 = JsonValueToLocMetaDataValue(&local_d0,local_330.TypedValue.value_);
              if ((pTVar10->Object == (FLocMetadataValue *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              ppTVar12 = (TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
                          **)(**(code **)((longlong)*pTVar10->Object + 0x28))
                                       (pTVar10->Object,local_e0);
              if (&local_370 != ppTVar12) {
                local_370 = *ppTVar12;
                *ppTVar12 = (TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
                             *)0x0;
                SharedPointerInternals::FSharedReferencer<1>::operator=
                          (&FStack_368,(FSharedReferencer<1> *)(ppTVar12 + 1));
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_d8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_d0.SharedReferenceCount.ReferenceController);
              this_01 = local_370;
              if (local_370 !=
                  (TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
                   *)0x0) {
                if ((local_370 ==
                     (TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
                      *)0x0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("IsValid()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                       ,0x458,L""), bVar5)) {
                  pcVar2 = (code *)swi(3);
                  uVar6 = (*pcVar2)();
                  return (bool)uVar6;
                }
                TMapBase<FString,TSharedPtr<FLocMetadataValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FLocMetadataValue,1>,0>_>
                ::Remove(this_01,&TAG_TRANSLATION_TEXT);
              }
            }
          }
          FVar16.Data = local_3e0.Data.AllocatorInstance.Data;
          lVar22 = (longlong)local_3e0.Data.ArrayNum;
          local_3d0.Data = (FScriptContainerElement *)0x0;
          local_3c8._0_4_ = local_3e0.Data.ArrayNum;
          FVar13.Data = pFVar23;
          iVar15 = iVar8;
          iVar21 = local_3e0.Data.ArrayNum;
          if (local_3e0.Data.ArrayNum != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_3e0.Data.ArrayNum,0,&local_3d0,local_3e0.Data.ArrayNum,
                       (int *)((longlong)&local_3c8 + 4));
            memcpy(local_3d0.Data,FVar16.Data,lVar22 * 2);
            FVar13.Data = local_3d0.Data;
            iVar15 = local_3c8._4_4_;
            iVar21 = (int)local_3c8;
          }
          local_3d0.Data = (FScriptContainerElement *)0x0;
          local_3c8 = 0;
          if (FStack_390.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_390.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_390.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_88 = 0;
          uStack_80 = 0;
          local_308.MetadataObj.SharedReferenceCount.ReferenceController =
               FStack_390.ReferenceController;
          local_308.MetadataObj.Object = (FLocMetadataObject *)local_398;
          local_308.Text.Data.AllocatorInstance.Data = FVar13.Data;
          local_308.Text.Data.ArrayNum = iVar21;
          local_308.Text.Data.ArrayMax = iVar15;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          FVar16.Data = local_360.Data.AllocatorInstance.Data;
          lVar22 = (longlong)local_360.Data.ArrayNum;
          local_3c0.Data = (FScriptContainerElement *)0x0;
          local_3b8._0_4_ = local_360.Data.ArrayNum;
          FVar13.Data = pFVar23;
          iVar15 = local_360.Data.ArrayNum;
          iVar21 = iVar8;
          if (local_360.Data.ArrayNum != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_360.Data.ArrayNum,0,&local_3c0,local_360.Data.ArrayNum,
                       (int *)((longlong)&local_3b8 + 4));
            memcpy(local_3c0.Data,FVar16.Data,lVar22 * 2);
            FVar13.Data = local_3c0.Data;
            iVar15 = (int)local_3b8;
            iVar21 = local_3b8._4_4_;
          }
          local_3c0.Data = (FScriptContainerElement *)0x0;
          local_3b8 = 0;
          if (FStack_368.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FStack_368.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FStack_368.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_78 = 0;
          uStack_70 = 0;
          local_2e8.MetadataObj.SharedReferenceCount.ReferenceController =
               FStack_368.ReferenceController;
          local_2e8.Text.Data.AllocatorInstance.Data = FVar13.Data;
          local_2e8.Text.Data.ArrayNum = iVar15;
          local_2e8.Text.Data.ArrayMax = iVar21;
          local_2e8.MetadataObj.Object = (FLocMetadataObject *)this_01;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          local_2b0 = pGVar9;
          UE::Json::GetBoolField
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_408,(wchar_t *)&local_2b0);
          param_3 = local_res18;
          pwVar25 = L"";
          pFVar26 = (FLocMetadataObject *)0x0;
          FVar18.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_350 = 0;
          if (local_407 != '\0') {
            local_350 = (uint)local_408;
          }
          local_3f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3f0.ArrayNum = 0;
          local_3f0.ArrayMax = 0;
          local_3a8.Object = (FLocMetadataObject *)0x0;
          local_3a8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (local_res18->Object->FormatVersion < AddedKeys) {
            if (TAG_METADATA_KEY.Data.ArrayNum != 0) {
              pwVar25 = (wchar_t *)TAG_METADATA_KEY.Data.AllocatorInstance;
            }
            local_2a8 = pGVar9;
            UE::Json::GetObjectField
                      (&local_1c8,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_2a8,pwVar25);
            if (local_1c8.bIsSet != false) {
              local_2a0 = local_1c8.TypedValue.value_;
              FJsonInternationalizationMetaDataSerializer::DeserializeMetadata
                        ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_2a0,&local_3a8);
              pFVar26 = local_3a8.Object;
              FVar18.ReferenceController = local_3a8.SharedReferenceCount.ReferenceController;
            }
            if (param_4->Object != (FInternationalizationManifest *)0x0) {
              if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (FVar18.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_b8.Object = pFVar26;
              local_b8.SharedReferenceCount.ReferenceController = FVar18.ReferenceController;
              ::FString::FString(&local_210.Str,&local_400);
              FVar16.Data = (FScriptContainerElement *)L"";
              if (local_210.Str.Data.ArrayNum != 0) {
                FVar16.Data = local_210.Str.Data.AllocatorInstance.Data;
              }
              local_210.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar16.Data,0);
              if ((param_4->Object == (FInternationalizationManifest *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x408,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              pTVar19 = (param_4->SharedReferenceCount).ReferenceController;
              local_248.Object = param_4->Object;
              if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar19->SharedReferenceCount =
                     (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_248.SharedReferenceCount.ReferenceController = pTVar19;
              if ((local_248.Object == (FInternationalizationManifest *)0x0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x25d,L""), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              FLocTextHelper::FindKeysForLegacyTranslation
                        (&local_248,param_5,&local_210,&local_3e0,&local_b8,&local_3f0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar19);
              if (local_210.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_210.Str.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            if (TAG_KEY.Data.ArrayNum != 0) {
              pwVar25 = (wchar_t *)TAG_KEY.Data.AllocatorInstance;
            }
            local_298 = pGVar9;
            UE::Json::GetStringField
                      (&local_118,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_298,pwVar25);
            if (local_118.bIsSet != false) {
              pFVar14 = ::FString::ConstructFromPtrSize
                                  (&local_a8,local_118.TypedValue.DataPtr,local_118.TypedValue.Size)
              ;
              iVar15 = iVar8;
              if (local_68 != pFVar14) {
                pFVar23 = (pFVar14->Data).AllocatorInstance.Data;
                (pFVar14->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                iVar8 = (pFVar14->Data).ArrayNum;
                iVar15 = (pFVar14->Data).ArrayMax;
                (pFVar14->Data).ArrayNum = 0;
                (pFVar14->Data).ArrayMax = 0;
              }
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
              pFVar17 = (FScriptContainerElement *)L"";
              if (iVar8 != 0) {
                pFVar17 = pFVar23;
              }
              local_388.Str.Data.ArrayMax = iVar15;
              local_388.Str.Data.ArrayNum = iVar8;
              local_388.Str.Data.AllocatorInstance.Data = pFVar23;
              local_388.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)pFVar17,0);
              if (((local_3f0.AllocatorInstance.Data <= &local_388) &&
                  (&local_388 <
                   (FLocKey *)
                   (local_3f0.AllocatorInstance.Data + (longlong)local_3f0.ArrayMax * 0x18))) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar5)) {
                pcVar2 = (code *)swi(3);
                uVar6 = (*pcVar2)();
                return (bool)uVar6;
              }
              iVar8 = local_3f0.ArrayNum;
              if (local_3f0.ArrayNum == local_3f0.ArrayMax) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_3f0.AllocatorInstance,&local_3f0.ArrayMax);
              }
              lVar22 = (longlong)iVar8;
              local_3f0.ArrayNum = iVar8 + 1;
              *(undefined8 *)&local_3f0.AllocatorInstance.Data[lVar22 * 0x18].field_0x0 = 0;
              *(FScriptContainerElement **)
               &local_3f0.AllocatorInstance.Data[lVar22 * 0x18].field_0x0 =
                   local_388.Str.Data.AllocatorInstance.Data;
              *(int *)(local_3f0.AllocatorInstance.Data + lVar22 * 0x18 + 8) =
                   local_388.Str.Data.ArrayNum;
              *(int *)(local_3f0.AllocatorInstance.Data + lVar22 * 0x18 + 0xc) =
                   local_388.Str.Data.ArrayMax;
              *(uint *)(local_3f0.AllocatorInstance.Data + lVar22 * 0x18 + 0x10) = local_388.Hash;
              local_388.Hash = 0;
              local_388.Str.Data.ArrayNum = 0;
              local_388.Str.Data.ArrayMax = 0;
              local_388.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              param_3 = local_res18;
            }
            pwVar25 = L"";
            if (TAG_METADATA.Data.ArrayNum != 0) {
              pwVar25 = (wchar_t *)TAG_METADATA.Data.AllocatorInstance.Data;
            }
            local_290 = pGVar9;
            UE::Json::GetObjectField
                      (&local_1b8,
                       (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_290,pwVar25);
            if (local_1b8.bIsSet != false) {
              pwVar25 = L"";
              if (TAG_METADATA_KEY.Data.ArrayNum != 0) {
                pwVar25 = (wchar_t *)TAG_METADATA_KEY.Data.AllocatorInstance;
              }
              local_288 = local_1b8.TypedValue.value_;
              UE::Json::GetObjectField
                        (&local_1a8,
                         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                          *)&local_288,pwVar25);
              if (local_1a8.bIsSet != false) {
                local_280 = local_1a8.TypedValue.value_;
                FJsonInternationalizationMetaDataSerializer::DeserializeMetadata
                          ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                            *)&local_280,&local_3a8);
                pFVar26 = local_3a8.Object;
                FVar18.ReferenceController = local_3a8.SharedReferenceCount.ReferenceController;
              }
            }
          }
          iVar8 = local_3f0.ArrayNum;
          uVar20 = (ulonglong)local_3f0.ArrayNum;
          pFVar1 = (FLocKey *)(local_3f0.AllocatorInstance.Data + uVar20 * 0x18);
          FVar16.Data = local_3f0.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar20 != iVar8) {
              local_res10[0] = 0;
              `TCheckedPointerIterator<FLocKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res10);
            }
            FVar13.Data = local_400.Data.AllocatorInstance.Data;
            if ((FLocKey *)FVar16.Data == pFVar1) break;
            this = param_3->Object;
            if (FVar18.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (FVar18.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(FVar18.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            lVar22 = (longlong)local_400.Data.ArrayNum;
            local_348.Str.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_348.Str.Data.ArrayNum = local_400.Data.ArrayNum;
            local_98.Object = pFVar26;
            local_98.SharedReferenceCount.ReferenceController = FVar18.ReferenceController;
            if (local_400.Data.ArrayNum == 0) {
              local_348.Str.Data.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_400.Data.ArrayNum,0,(ForAnyElementType *)&local_348,
                         local_400.Data.ArrayNum,&local_348.Str.Data.ArrayMax);
              memcpy(local_348.Str.Data.AllocatorInstance.Data,FVar13.Data,lVar22 * 2);
            }
            FVar13.Data = (FScriptContainerElement *)L"";
            if (local_348.Str.Data.ArrayNum != 0) {
              FVar13.Data = local_348.Str.Data.AllocatorInstance.Data;
            }
            local_348.Hash = FCrc::StrCrc32<wchar_t>((wchar_t *)FVar13.Data,0);
            bVar5 = FInternationalizationArchive::AddEntry
                              (this,&local_348,(FLocKey *)FVar16.Data,&local_308,&local_2e8,
                               &local_98,SUB41(local_350,0));
            if (local_348.Str.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_348.Str.Data.AllocatorInstance.Data);
            }
            if ((!bVar5) && (2 < (byte)LogInternationalizationArchiveSerializer._0_1_)) {
              UE::Logging::Private::BasicLog<3>
                        (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer
                        );
            }
            uVar20 = local_3f0._8_8_ & 0xffffffff;
            FVar16.Data = FVar16.Data + 0x18;
            param_3 = local_res18;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar18.ReferenceController);
          DestructItems<FLocKey,int>((FLocKey *)local_3f0.AllocatorInstance.Data,local_3f0.ArrayNum)
          ;
          if ((FLocKey *)local_3f0.AllocatorInstance.Data != (FLocKey *)0x0) {
            FMemory::Free(local_3f0.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2e8.MetadataObj.SharedReferenceCount.ReferenceController);
          if (local_2e8.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Text.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_308.MetadataObj.SharedReferenceCount.ReferenceController);
          if (local_308.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Text.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_368.ReferenceController);
          if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_360.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_390.ReferenceController);
          if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
          }
          pGVar9 = local_310 + 1;
          param_4 = local_res20;
          local_310 = pGVar9;
        } while (pGVar9 != local_278);
      }
    }
    pwVar25 = L"";
    local_270 = ((param_1.value_)->data_).n;
    if (TAG_SUBNAMESPACES.Data.ArrayNum != 0) {
      pwVar25 = (wchar_t *)TAG_SUBNAMESPACES.Data.AllocatorInstance.Data;
    }
    UE::Json::GetArrayField
              (&local_238,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_270,pwVar25);
    GVar4.value_ = local_238.TypedValue.value_;
    pTVar24 = local_res18;
    if (local_238.bIsSet != false) {
      if ((((local_238.TypedValue.value_)->data_).f.flags != 4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsArray()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x696,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      uVar20 = (ulonglong)((GVar4.value_)->data_).s.str & 0xffffffffffff;
      if ((((local_238.TypedValue.value_)->data_).f.flags != 4) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsArray()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x699,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
      pTVar24 = local_res18;
      uVar7 = ((local_238.TypedValue.value_)->data_).s.length;
      pwVar25 = ((local_238.TypedValue.value_)->data_).s.str;
      for (; uVar20 != (ulonglong)uVar7 * 0x10 + ((ulonglong)pwVar25 & 0xffffffffffff);
          uVar20 = uVar20 + 0x10) {
        if (*(short *)(uVar20 + 0xe) != 3) {
LAB_146b7bb4f:
          if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_400.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pTVar24->SharedReferenceCount).ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((param_4->SharedReferenceCount).ReferenceController);
          pTVar19 = (param_5->SharedReferenceCount).ReferenceController;
LAB_146b7bb75:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar19);
          return false;
        }
        local_198.Object = param_5->Object;
        local_198.SharedReferenceCount.ReferenceController =
             (param_5->SharedReferenceCount).ReferenceController;
        if (local_198.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_198.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_188.Object = param_4->Object;
        local_188.SharedReferenceCount.ReferenceController =
             (param_4->SharedReferenceCount).ReferenceController;
        if (local_188.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_1d8.Object = pTVar24->Object;
        local_1d8.SharedReferenceCount.ReferenceController =
             (pTVar24->SharedReferenceCount).ReferenceController;
        if (local_1d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_268 = uVar20;
        bVar5 = JsonObjToArchive((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                  *)&local_268,&local_400,&local_1d8,&local_188,&local_198);
        if (!bVar5) goto LAB_146b7bb4f;
      }
    }
    if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_400.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar24->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_5->SharedReferenceCount).ReferenceController);
    bVar5 = true;
  }
  return bVar5;
}

// SerializeArchiveToFile @ 146b879e0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationArchiveSerializer::SerializeArchiveToFile
          (TSharedRef<FInternationalizationArchive_const_,1> *param_1,FString *param_2)

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
  bVar2 = SerializeArchiveToString
                    ((TSharedRef<FInternationalizationArchive_const_,1> *)local_18,&local_28);
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
      if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
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
    if (1 < (byte)LogInternationalizationArchiveSerializer._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&::LOG_Static,(FLogCategoryBase *)&LogInternationalizationArchiveSerializer);
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

// SerializeArchiveToString @ 146b87b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationArchiveSerializer::SerializeArchiveToString
          (TSharedRef<FInternationalizationArchive_const_,1> *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FAllocatorImpl *pFVar3;
  bool bVar4;
  undefined1 uVar5;
  FString *pFVar6;
  undefined1 auStack_d8 [32];
  Data *local_b8;
  TSharedRef<FInternationalizationArchive_const_,1> local_b0;
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

// SerializeInternal @ 146b87da0

/* WARNING: Enum "EFormatVersion": Some values do not have unique names */

bool __cdecl
FJsonInternationalizationArchiveSerializer::SerializeInternal
          (TSharedRef<FInternationalizationArchive_const_,1> *param_1,
          GenericObject<0,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_2,FAllocatorImpl *param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  undefined1 uVar6;
  TReferenceControllerBase<1> *pTVar7;
  atomic<int> *paVar8;
  FStructuredArchiveEntry *pFVar9;
  Data local_a8;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_98;
  TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1> local_90;
  Data local_80;
  Number local_70;
  TSharedRef<FInternationalizationArchive_const_,1> local_68;
  TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1> local_58;
  TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry_const_,1> local_48;
  
  local_98 = param_2.value_;
  pTVar7 = ::operator_new(0x80);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
    pFVar9 = (FStructuredArchiveEntry *)&DAT_00000010;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_90.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pFVar9 = (FStructuredArchiveEntry *)(pTVar7 + 1);
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFStructuredArchiveEntry_FJsonInternationalizationArchiveSerializer___00_SharedPointerInternals__6B_
    ;
    pTVar7[1]._padding_ = 0;
    pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[2]._padding_ = 0;
    pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar7[4]._padding_ = 0;
    pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar7[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0;
    pTVar7[6]._padding_ = 0;
    pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7]._padding_ = 0;
    pTVar7[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar7[7].WeakReferenceCount = (atomic<int>)0x0;
    if ((pFVar9 == (FStructuredArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar1 = (code *)swi(3);
      uVar6 = (*pcVar1)();
      return (bool)uVar6;
    }
    paVar8 = &pTVar7->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
    local_90.SharedReferenceCount.ReferenceController = pTVar7;
  }
  FVar4.ReferenceController = local_90.SharedReferenceCount.ReferenceController;
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90.Object = pFVar9;
  GenerateStructuredData(&local_68,&local_90);
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_58.Object = pFVar9;
  local_58.SharedReferenceCount.ReferenceController = FVar4.ReferenceController;
  SortStructuredData(&local_58);
  rapidjson::
  GenericObject<0,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::RemoveAllMembers((GenericObject<0,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                      *)local_98);
  local_80._1_7_ = 0;
  local_80._0_1_ = param_1->Object->FormatVersion;
  local_80.s.str = (wchar_t *)0x1f6000000000000;
  local_a8.s.length = TAG_FORMATVERSION.Data.ArrayNum - 1;
  if (TAG_FORMATVERSION.Data.ArrayNum == 0) {
    local_a8.s.length = 0;
  }
  FVar2 = TAG_FORMATVERSION.Data.AllocatorInstance;
  if (((TAG_FORMATVERSION.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
      (FVar2.Data = (FScriptContainerElement *)L"", local_a8.s.length != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("str != 0 || len == 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x1a1,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return (bool)uVar6;
  }
  pGVar3 = local_98;
  local_a8.s.hashcode = 0;
  local_a8.s.str = (wchar_t *)((ulonglong)FVar2.Data | 0x405000000000000);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::AddMember
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             (local_98->data_).n,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_a8.s,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_80.s,param_3);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_a8.s);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_80.s);
  local_70 = (pGVar3->data_).n;
  if (FVar4.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_48.Object = pFVar9;
  local_48.SharedReferenceCount.ReferenceController = FVar4.ReferenceController;
  StructuredDataToJsonObj
            (&local_48,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)&local_70,
             param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return true;
}

// SortStructuredData @ 146b89000

void __cdecl
FJsonInternationalizationArchiveSerializer::SortStructuredData
          (TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>
           *param_1)

{
  FStructuredArchiveEntry *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  TMap<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>_>
  *pTVar8;
  uint uVar9;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18;
  FKeyComparisonClass<_private:_static_void___cdecl_FJsonInternationalizationArchiveSerializer::SortStructuredData(TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>)_::_2_::<lambda_2>_>
  local_res20;
  TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1> local_98;
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  pFVar1 = param_1->Object;
  if (pFVar1 != (FStructuredArchiveEntry *)0x0) {
    AlgoImpl::
    IntroSortInternal<TSharedPtr<FArchiveEntry,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedPtr<FArchiveEntry,1>,_FJsonInternationalizationArchiveSerializer::SortStructuredData_::__l2::<lambda_1>_>_>
              ((TSharedPtr<FArchiveEntry,1> *)(pFVar1->ArchiveEntries).AllocatorInstance.Data,
               (pFVar1->ArchiveEntries).ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
    if ((param_1->Object == (FStructuredArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res20.Predicate.Predicate =
         (TDereferenceWrapper<FString,_private:_static_void___cdecl_FJsonInternationalizationArchiveSerializer::SortStructuredData(TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>)_::_2_::<lambda_2>_>
          )local_res10;
    TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
    ::
    Sort<TSortableMapBase<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>_>::FKeyComparisonClass<_FJsonInternationalizationArchiveSerializer::SortStructuredData_::__l2::<lambda_2>_>_>
              ((TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
                *)&param_1->Object->SubNamespaces,&local_res20);
    if ((param_1->Object == (FStructuredArchiveEntry *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = &param_1->Object->SubNamespaces;
    TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_88,
               (TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
                *)pTVar8);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar7 = local_88._24_8_ >> 0x20;
    local_28 = (TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
                *)pTVar8;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        pTVar2 = *(TReferenceControllerBase<1> **)(*local_58 + 0x18 + (longlong)(int)uVar7 * 0x28);
        local_98.Object =
             *(FStructuredArchiveEntry **)(*local_58 + 0x10 + (longlong)(int)uVar7 * 0x28);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98.SharedReferenceCount.ReferenceController = pTVar2;
        SortStructuredData(&local_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar7 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar9 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar9 < 4) {
          iVar6 = 1;
        }
        else {
          uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          local_res18 = (undefined4)lVar3;
          iVar6 = 1 << ((byte)lVar3 & 0x1f);
        }
        if (((0 < (int)uVar9) && (local_28->HashSize < iVar6)) || (iVar6 < local_28->HashSize)) {
          local_28->HashSize = iVar6;
          TSet<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StructuredDataToJsonObj @ 146b89520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000146b89a0e) */
/* WARNING: Removing unreachable block (ram,0x000146b89a33) */
/* WARNING: Removing unreachable block (ram,0x000146b8a4d6) */
/* WARNING: Removing unreachable block (ram,0x000146b8a4fb) */
/* WARNING: Removing unreachable block (ram,0x000146b8abfc) */
/* WARNING: Removing unreachable block (ram,0x000146b8ac21) */

void __cdecl
FJsonInternationalizationArchiveSerializer::StructuredDataToJsonObj
          (TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry_const_,1>
           *param_1,
          GenericObject<0,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_2,FAllocatorImpl *param_3)

{
  TMap<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>_>
  *pTVar1;
  Number *pNVar2;
  undefined2 uVar3;
  int iVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  undefined8 uVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  TMap<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>_>
  *pTVar10;
  bool bVar11;
  FStructuredArchiveEntry *pFVar12;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar13;
  undefined8 *puVar14;
  longlong lVar15;
  Data *pDVar16;
  byte bVar17;
  ulonglong uVar18;
  void *pvVar19;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar20;
  ulonglong uVar21;
  uint uVar22;
  undefined4 uVar23;
  wchar_t *pwVar24;
  undefined8 uVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined1 auStack_338 [32];
  undefined1 local_318;
  undefined1 local_317 [7];
  Data local_310;
  Data local_300;
  Data local_2f0;
  FScriptContainerElement *local_2e0;
  Data local_2d8;
  Data local_2c8;
  Data local_2b8;
  uint local_2a8;
  Data local_2a0;
  Data local_290;
  Data local_280;
  Data local_270;
  Data local_260;
  Data local_250;
  Data local_240;
  Data local_230;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_220;
  TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry_const_,1>
  *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined4 uStack_1e4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  FStructuredArchiveEntry *local_1c0;
  undefined8 *local_1b8;
  TMap<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMapFuncs<TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>_>
  *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  undefined8 uStack_188;
  FScriptContainerElement *local_178;
  uint uStack_170;
  undefined4 uStack_16c;
  TSharedRef<FLocMetadataObject,1> local_168;
  TSharedRef<FLocMetadataObject,1> local_158;
  TSharedRef<FLocMetadataObject,1> local_148;
  TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry_const_,1> local_138
  ;
  TStringView<wchar_t> local_128;
  longlong local_110;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_108;
  uint local_100;
  int iStack_fc;
  ulonglong uStack_f8;
  Data local_e8;
  Data local_d8;
  Data local_c8;
  Data local_b8;
  Data local_a8;
  Data local_98;
  Data local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong uStack_60;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_338;
  local_220 = param_2.value_;
  local_218 = param_1;
  pFVar12 = TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry_const_,1>
            ::operator->(param_1);
  local_178 = (pFVar12->Namespace).Data.AllocatorInstance.Data;
  iVar4 = (pFVar12->Namespace).Data.ArrayNum;
  uStack_170 = iVar4 - 1;
  if (iVar4 == 0) {
    uStack_170 = 0;
  }
  local_128._12_4_ = uStack_16c;
  local_128.Size = uStack_170;
  local_128.DataPtr = (wchar_t *)local_178;
  pGVar13 = UE::Json::MakeStringValue(&local_58,&local_128,param_3);
  local_260.s.length = TAG_NAMESPACE.Data.ArrayNum - 1;
  if (TAG_NAMESPACE.Data.ArrayNum == 0) {
    local_260.s.length = 0;
  }
  FVar7 = TAG_NAMESPACE.Data.AllocatorInstance;
  if (((TAG_NAMESPACE.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
      (FVar7.Data = (FScriptContainerElement *)L"", local_260.s.length != 0)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("str != 0 || len == 0u",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                          ,0x1a1,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_260.s.hashcode = 0;
  local_260.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::AddMember
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             ((param_2.value_)->data_).n,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_260.s,pGVar13,param_3);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_260.s);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(&local_58);
  local_310.n = (Number)0x0;
  local_310.s.str = (wchar_t *)0x4000000000000;
  local_1c0 = TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry_const_,1>
              ::operator->(param_1);
  local_2a8 = (local_1c0->ArchiveEntries).ArrayNum;
  uVar18 = (ulonglong)(int)local_2a8;
  pFVar27 = (local_1c0->ArchiveEntries).AllocatorInstance.Data;
  pFVar26 = pFVar27 + uVar18 * 0x10;
  local_2e0 = pFVar26;
  do {
    if ((local_1c0->ArchiveEntries).ArrayNum != (int)uVar18) {
      local_318 = 0;
      `TCheckedPointerIterator<TSharedPtr<FArchiveEntry,1>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_318);
    }
    if (pFVar27 == pFVar26) {
      local_300.n = (Number)0x0;
      local_300.s.str = (wchar_t *)0x4000000000000;
      pFVar12 = TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry_const_,1>
                ::operator->(local_218);
      local_1e0._padding_._4_4_ = 1;
      local_1e0.UnvisitedBitMask = 0xffffffff;
      pTVar1 = &pFVar12->SubNamespaces;
      local_210.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar12->SubNamespaces).field_0x10
      ;
      local_1e0._padding_._0_4_ = 0;
      local_1e0.CurrentBitIndex = 0;
      local_1e0.BaseBitIndex = 0;
      local_1e0.Array = local_210.Array;
      if (*(int *)&(pFVar12->SubNamespaces).field_0x28 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
      }
      local_1e8 = *(int *)&(pFVar12->SubNamespaces).field_0x8 -
                  *(int *)&(pFVar12->SubNamespaces).field_0x34;
      iVar4 = *(int *)&(pFVar12->SubNamespaces).field_0x28;
      TStack_1a8._padding_ = CONCAT44(local_1e0._padding_._4_4_,(undefined4)local_1e0._padding_);
      bVar17 = (byte)iVar4 & 0x1f;
      TStack_1a8.CurrentBitIndex = local_1e0.CurrentBitIndex;
      TStack_1a8.UnvisitedBitMask = local_1e0.UnvisitedBitMask;
      uStack_1f0._4_4_ = local_1e0._28_4_;
      uStack_1f0._0_4_ = local_1e0.BaseBitIndex;
      local_210._padding_ = CONCAT44(1 << bVar17,iVar4 >> 5);
      local_210.CurrentBitIndex = iVar4;
      local_210.UnvisitedBitMask = -1 << bVar17;
      local_210._24_8_ = CONCAT44(local_1e0.CurrentBitIndex,iVar4) & 0xffffffffffffffe0;
      uStack_188 = CONCAT44(uStack_1e4,local_1e8);
      TStack_1a8.Array = local_1e0.Array;
      local_1b0 = pTVar1;
      TStack_1a8._24_8_ = uStack_1f0;
      if ((iVar4 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (iVar4 != *(int *)&(pFVar12->SubNamespaces).field_0x28) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
      }
      pTVar9 = local_210.Array;
      local_110 = local_210._padding_;
      pTStack_108 = local_210.Array;
      local_100 = local_210.UnvisitedBitMask;
      iStack_fc = local_210.CurrentBitIndex;
      uVar8 = _local_100;
      uStack_f8 = local_210._24_8_;
      iStack_fc = local_210.CurrentBitIndex;
      iVar4 = iStack_fc;
      uVar25 = local_300.s.str;
      uVar23 = local_300.s.hashcode;
      _local_100 = uVar8;
      do {
        pTVar10 = local_1b0;
        if (*(int *)&local_1b0->field_0x8 - *(int *)&local_1b0->field_0x34 != (int)uStack_188) {
          local_317[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonInternationalizationArchiveSerializer::FStructuredArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_317);
        }
        if (((TStack_1a8.CurrentBitIndex == iVar4) && (TStack_1a8.Array == pTVar9)) &&
           (pTVar10 == pTVar1)) {
          if ((local_310.f.flags != 4) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsArray()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x674,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pGVar13 = local_220;
          if (local_310.s.length != 0) {
            uVar22 = TAG_CHILDREN.Data.ArrayNum - 1;
            if (TAG_CHILDREN.Data.ArrayNum == 0) {
              uVar22 = 0;
            }
            FVar7.Data = TAG_CHILDREN.Data.AllocatorInstance.Data;
            if (((TAG_CHILDREN.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
                (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("str != 0 || len == 0u",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                    ,0x1a1,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pGVar13 = local_220;
            local_290.s.hashcode = 0;
            local_290.s.length = uVar22;
            local_290.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      (local_220->data_).n,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_290.s,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_310.s,param_3);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_290.s);
          }
          if ((local_300.f.flags != 4) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsArray()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x674,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (local_300.s.length != 0) {
            uVar22 = TAG_SUBNAMESPACES.Data.ArrayNum - 1;
            if (TAG_SUBNAMESPACES.Data.ArrayNum == 0) {
              uVar22 = 0;
            }
            FVar7.Data = TAG_SUBNAMESPACES.Data.AllocatorInstance.Data;
            if (((TAG_SUBNAMESPACES.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
                && (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("str != 0 || len == 0u",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                    ,0x1a1,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_280.s.hashcode = 0;
            local_280.s.length = uVar22;
            local_280.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      (pGVar13->data_).n,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_280.s,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      &local_300.s,param_3);
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                      ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       &local_280.s);
          }
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_300.s);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_310.s);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((local_218->SharedReferenceCount).ReferenceController);
          return;
        }
        lVar15 = *(longlong *)pTVar10;
        pFVar12 = *(FStructuredArchiveEntry **)
                   (lVar15 + 0x10 + (longlong)TStack_1a8.CurrentBitIndex * 0x28);
        if (pFVar12 != (FStructuredArchiveEntry *)0x0) {
          local_138.SharedReferenceCount.ReferenceController =
               *(TReferenceControllerBase<1> **)
                (lVar15 + 0x18 + (longlong)TStack_1a8.CurrentBitIndex * 0x28);
          local_68 = 0;
          uStack_60 = 0x3000000000000;
          local_1b8 = &local_68;
          if (local_138.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          local_138.Object = pFVar12;
          StructuredDataToJsonObj
                    (&local_138,
                     (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_1b8,param_3);
          if ((local_300.f.flags != 4) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsArray()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x6bb,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((uint)uVar23 <= local_300.s.length) {
            if (uVar23 == 0) {
              uVar22 = 0x10;
            }
            else {
              uVar22 = (uVar23 + 1 >> 1) + uVar23;
            }
            if ((local_300.f.flags != 4) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsArray()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                    ,0x6a8,L""), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((uint)uVar23 < uVar22) {
              if (uVar22 == 0) {
                FMemory::Free((void *)(uVar25 & 0xffffffffffff));
                pvVar19 = (void *)0x0;
              }
              else {
                pvVar19 = FMemory::Realloc((void *)(uVar25 & 0xffffffffffff),(ulonglong)uVar22 << 4,
                                           0);
              }
              local_300.s.hashcode = uVar22;
              uVar25 = uVar25 & 0xffff000000000000 | (ulonglong)pvVar19;
              uVar23 = uVar22;
              local_300.s.str = (wchar_t *)uVar25;
            }
          }
          uVar18 = (ulonglong)local_300.n & 0xffffffff;
          local_300.s.length = local_300.s.length + 1;
          puVar14 = (undefined8 *)((uVar25 & 0xffffffffffff) + uVar18 * 0x10);
          *puVar14 = local_68;
          puVar14[1] = uStack_60;
          uStack_60 = uStack_60 & 0xffffffffffff;
        }
        TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
      } while( true );
    }
    local_e8.s.length = 0;
    local_e8.s.hashcode = 0;
    local_e8.s.str = (wchar_t *)0x3000000000000;
    local_b8.n.i64 = (Number)0x0;
    local_b8.s.str = (wchar_t *)0x3000000000000;
    if ((*(longlong *)pFVar27 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)(*(longlong *)pFVar27 + 0x40) != 0) {
      if ((*(longlong *)pFVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = *(longlong *)pFVar27;
      if ((*(longlong *)(lVar15 + 0x40) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_168.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar15 + 0x48);
      local_168.Object = *(FLocMetadataObject **)(lVar15 + 0x40);
      if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_168.Object == (FLocMetadataObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FJsonInternationalizationMetaDataSerializer::SerializeMetadata
                (&local_168,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_b8.s,param_3);
    }
    if ((*(longlong *)pFVar27 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pwVar24 = L"";
    local_d8.n.i64 = (Number)0x0;
    local_d8.s.str = (wchar_t *)0x0;
    iVar4 = *(int *)(*(longlong *)pFVar27 + 0x38);
    pwVar5 = *(wchar_t **)(*(longlong *)pFVar27 + 0x30);
    uVar18 = (ulonglong)(iVar4 - 1);
    if (iVar4 == 0) {
      uVar18 = 0;
    }
    uVar22 = (uint)uVar18;
    if (pwVar5 == (wchar_t *)0x0) {
      if (uVar22 != 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L"");
        pwVar5 = pwVar24;
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_146b8984f;
      }
LAB_146b89854:
      pDVar16 = &local_d8;
      local_d8.ss.str[6] = 6 - (short)uVar18;
      local_d8.f.flags = 0x1c05;
    }
    else {
LAB_146b8984f:
      pwVar24 = pwVar5;
      if (uVar22 < 7) goto LAB_146b89854;
      local_d8.s.length = uVar22;
      local_d8.f.flags = 0xc05;
      pDVar16 = FMemory::Malloc((ulonglong)(uVar22 + 1) * 2,0);
      local_d8.s.str =
           (wchar_t *)((ulonglong)local_d8.s.str & 0xffff000000000000 | (ulonglong)pDVar16);
    }
    memcpy(pDVar16,pwVar24,uVar18 * 2);
    *(undefined2 *)((longlong)pDVar16 + uVar18 * 2) = 0;
    uVar22 = TAG_SOURCE_TEXT.Data.ArrayNum - 1;
    if (TAG_SOURCE_TEXT.Data.ArrayNum == 0) {
      uVar22 = 0;
    }
    FVar7 = TAG_SOURCE_TEXT.Data.AllocatorInstance;
    if (((TAG_SOURCE_TEXT.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
        (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_250.s.hashcode = 0;
    local_250.s.length = uVar22;
    local_250.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::AddMember
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_b8.s,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_250.s,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_d8.s,param_3);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_250.s);
    uVar8 = local_d8.s.str;
    if (local_d8.f.flags == 3) {
      for (pGVar13 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     ((ulonglong)local_d8.s.str & 0xffffffffffff);
          pGVar13 !=
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
          (((ulonglong)local_d8.n & 0xffffffff) * 0x20 + (longlong)(uVar8 & 0xffffffffffff));
          pGVar13 = pGVar13 + 2) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13 + 1);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
      }
      FMemory::Free((void *)(uVar8 & 0xffffffffffff));
      pFVar26 = local_2e0;
    }
    else if (local_d8.f.flags == 4) {
      uVar18 = (ulonglong)local_d8.n & 0xffffffff;
      pGVar20 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                ((ulonglong)local_d8.s.str & 0xffffffffffff);
      for (pGVar13 = pGVar20; pGVar13 != pGVar20 + uVar18; pGVar13 = pGVar13 + 1) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
      }
      FMemory::Free(pGVar20);
    }
    else if (local_d8.f.flags == 0xc05) {
      FMemory::Free((void *)((ulonglong)local_d8.s.str & 0xffffffffffff));
    }
    uVar22 = TAG_SOURCE.Data.ArrayNum - 1;
    if (TAG_SOURCE.Data.ArrayNum == 0) {
      uVar22 = 0;
    }
    FVar7.Data = TAG_SOURCE.Data.AllocatorInstance.Data;
    if (((TAG_SOURCE.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
        (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_2c8.s.hashcode = 0;
    local_2c8.s.length = uVar22;
    local_2c8.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
    if ((local_e8.f.flags != 3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsObject()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x575,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((((ulonglong)local_2c8.s.str & 0x400000000000000) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("name.IsString()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x576,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_e8.s.hashcode <= local_e8.s.length) {
      if (local_e8.s.hashcode == 0) {
        uVar22 = 0x10;
      }
      else {
        uVar22 = (local_e8.s.hashcode + 1 >> 1) + local_e8.s.hashcode;
        if (uVar22 <= local_e8.s.hashcode) goto LAB_146b89b95;
      }
      if ((ulonglong)uVar22 == 0) {
        FMemory::Free((void *)((ulonglong)local_e8.s.str & 0xffffffffffff));
        pvVar19 = (void *)0x0;
      }
      else {
        pvVar19 = FMemory::Realloc((void *)((ulonglong)local_e8.s.str & 0xffffffffffff),
                                   (ulonglong)uVar22 << 5,0);
      }
      local_e8.s.str =
           (wchar_t *)((ulonglong)local_e8.s.str & 0xffff000000000000 | (ulonglong)pvVar19);
      local_e8.s.hashcode = uVar22;
    }
LAB_146b89b95:
    uVar8 = local_2c8.s.str;
    local_2c8.s.str = (wchar_t *)((ulonglong)local_2c8.s.str & 0xffffffffffff);
    pNVar2 = (Number *)
             ((ulonglong)local_e8.s.length * 0x20 + ((ulonglong)local_e8.s.str & 0xffffffffffff));
    *pNVar2 = local_2c8.n;
    pNVar2[1].u64 = uVar8;
    pNVar2 = (Number *)
             ((ulonglong)local_e8.s.length * 0x20 + 0x10 +
             ((ulonglong)local_e8.s.str & 0xffffffffffff));
    pNVar2->u64 = (ulong64)local_b8.n;
    pNVar2[1].u64 = (ulong64)local_b8.s.str;
    local_e8.s.length = local_e8.s.length + 1;
    local_b8.s.str = (wchar_t *)((ulonglong)local_b8.s.str & 0xffffffffffff);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_2c8.s);
    if (local_b8.f.flags == 3) {
      pGVar13 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                ((ulonglong)local_b8.s.str & 0xffffffffffff);
      uVar3 = 3;
      while( true ) {
        if ((uVar3 != 3) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObject()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x506,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pvVar19 = (void *)((ulonglong)local_b8.s.str & 0xffffffffffff);
        if (pGVar13 ==
            (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
            (((ulonglong)local_b8.n & 0xffffffff) * 0x20 + (longlong)pvVar19)) break;
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13 + 1);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
        pGVar13 = pGVar13 + 2;
        uVar3 = local_b8.f.flags;
      }
LAB_146b89bfe:
      FMemory::Free(pvVar19);
    }
    else if (local_b8.f.flags == 4) {
      pGVar20 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                ((ulonglong)local_b8.s.str & 0xffffffffffff);
      pGVar13 = pGVar20;
      if (pGVar20 != pGVar20 + ((ulonglong)local_b8.n & 0xffffffff)) {
        do {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
          pGVar13 = pGVar13 + 1;
        } while (pGVar13 != pGVar20 + ((ulonglong)local_b8.n & 0xffffffff));
      }
      FMemory::Free(pGVar20);
    }
    else if (local_b8.f.flags == 0xc05) {
      pvVar19 = (void *)((ulonglong)local_b8.s.str & 0xffffffffffff);
      goto LAB_146b89bfe;
    }
    local_88.n = (Number)0x0;
    local_88.s.str = (wchar_t *)0x3000000000000;
    if ((*(longlong *)pFVar27 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)(*(longlong *)pFVar27 + 0x60) != 0) {
      if ((*(longlong *)pFVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = *(longlong *)pFVar27;
      if ((*(longlong *)(lVar15 + 0x60) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_158.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar15 + 0x68);
      local_158.Object = *(FLocMetadataObject **)(lVar15 + 0x60);
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_158.Object == (FLocMetadataObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FJsonInternationalizationMetaDataSerializer::SerializeMetadata
                (&local_158,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_88.s,param_3);
    }
    if ((*(longlong *)pFVar27 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pwVar24 = L"";
    local_78 = 0;
    uStack_70 = 0;
    iVar4 = *(int *)(*(longlong *)pFVar27 + 0x58);
    pwVar5 = *(wchar_t **)(*(longlong *)pFVar27 + 0x50);
    uVar18 = (ulonglong)(iVar4 - 1);
    if (iVar4 == 0) {
      uVar18 = 0;
    }
    uVar22 = (uint)uVar18;
    if (pwVar5 == (wchar_t *)0x0) {
      if (uVar22 != 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L"");
        pwVar5 = pwVar24;
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_146b89d8c;
      }
LAB_146b89d95:
      puVar14 = &local_78;
      uStack_70._0_6_ = CONCAT24(6 - (short)uVar18,(undefined4)uStack_70);
      uStack_70 = CONCAT26(0x1c05,(undefined6)uStack_70);
    }
    else {
LAB_146b89d8c:
      pwVar24 = pwVar5;
      if (uVar22 < 7) goto LAB_146b89d95;
      local_78 = CONCAT44(local_78._4_4_,uVar22);
      uStack_70 = CONCAT26(0xc05,(undefined6)uStack_70);
      puVar14 = FMemory::Malloc((ulonglong)(uVar22 + 1) * 2,0);
      uStack_70 = uStack_70 & 0xffff000000000000 | (ulonglong)puVar14;
    }
    memcpy(puVar14,pwVar24,uVar18 * 2);
    *(undefined2 *)(uVar18 * 2 + (longlong)puVar14) = 0;
    uVar22 = TAG_TRANSLATION_TEXT.Data.ArrayNum - 1;
    if (TAG_TRANSLATION_TEXT.Data.ArrayNum == 0) {
      uVar22 = 0;
    }
    FVar7 = TAG_TRANSLATION_TEXT.Data.AllocatorInstance;
    if (((TAG_TRANSLATION_TEXT.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
        (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_2d8.s.hashcode = 0;
    local_2d8.s.length = uVar22;
    local_2d8.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
    if ((local_88.f.flags != 3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsObject()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x575,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((((ulonglong)local_2d8.s.str & 0x400000000000000) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("name.IsString()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x576,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar8 = local_88.s.str;
    uVar23 = local_88.s.length;
    uVar18 = (ulonglong)local_88.n & 0xffffffff;
    if (local_88.s.hashcode <= local_88.s.length) {
      if (local_88.s.hashcode == 0) {
        uVar22 = 0x10;
      }
      else {
        uVar22 = (local_88.s.hashcode + 1 >> 1) + local_88.s.hashcode;
        if (uVar22 <= local_88.s.hashcode) goto LAB_146b8a03c;
      }
      if ((ulonglong)uVar22 == 0) {
        FMemory::Free((void *)((ulonglong)local_88.s.str & 0xffffffffffff));
        pvVar19 = (void *)0x0;
      }
      else {
        pvVar19 = FMemory::Realloc((void *)((ulonglong)local_88.s.str & 0xffffffffffff),
                                   (ulonglong)uVar22 << 5,0);
      }
      local_88.n = (Number)((ulonglong)uVar22 << 0x20);
      local_88.s.str = (wchar_t *)(uVar8 & 0xffff000000000000 | (ulonglong)pvVar19);
    }
LAB_146b8a03c:
    uVar21 = uStack_70;
    uVar8 = local_2d8.s.str;
    lVar15 = uVar18 * 0x20;
    local_2d8.s.str = (wchar_t *)((ulonglong)local_2d8.s.str & 0xffffffffffff);
    local_88.s.length = uVar23 + 1;
    pNVar2 = (Number *)(lVar15 + ((ulonglong)local_88.s.str & 0xffffffffffff));
    *pNVar2 = local_2d8.n;
    pNVar2[1].u64 = uVar8;
    uStack_70 = uStack_70 & 0xffffffffffff;
    puVar14 = (undefined8 *)(lVar15 + 0x10 + ((ulonglong)local_88.s.str & 0xffffffffffff));
    *puVar14 = local_78;
    puVar14[1] = uVar21;
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_2d8.s);
    uVar22 = TAG_TRANSLATION.Data.ArrayNum - 1;
    if (TAG_TRANSLATION.Data.ArrayNum == 0) {
      uVar22 = 0;
    }
    FVar7 = TAG_TRANSLATION.Data.AllocatorInstance;
    if (((TAG_TRANSLATION.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
        (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_2b8.s.hashcode = 0;
    local_2b8.s.length = uVar22;
    local_2b8.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
    if ((local_e8.f.flags != 3) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsObject()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x575,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((((ulonglong)local_2b8.s.str & 0x400000000000000) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("name.IsString()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x576,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_e8.s.hashcode <= local_e8.s.length) {
      if (local_e8.s.hashcode == 0) {
        uVar22 = 0x10;
      }
      else {
        uVar22 = (local_e8.s.hashcode + 1 >> 1) + local_e8.s.hashcode;
        if (uVar22 <= local_e8.s.hashcode) goto LAB_146b8a18f;
      }
      if ((ulonglong)uVar22 == 0) {
        FMemory::Free((void *)((ulonglong)local_e8.s.str & 0xffffffffffff));
        pvVar19 = (void *)0x0;
      }
      else {
        pvVar19 = FMemory::Realloc((void *)((ulonglong)local_e8.s.str & 0xffffffffffff),
                                   (ulonglong)uVar22 << 5,0);
      }
      local_e8.s.str =
           (wchar_t *)((ulonglong)local_e8.s.str & 0xffff000000000000 | (ulonglong)pvVar19);
      local_e8.s.hashcode = uVar22;
    }
LAB_146b8a18f:
    uVar25 = local_88.s.str;
    uVar8 = local_2b8.s.str;
    local_2b8.s.str = (wchar_t *)((ulonglong)local_2b8.s.str & 0xffffffffffff);
    pNVar2 = (Number *)
             ((ulonglong)local_e8.s.length * 0x20 + ((ulonglong)local_e8.s.str & 0xffffffffffff));
    *pNVar2 = local_2b8.n;
    pNVar2[1].u64 = uVar8;
    local_88.s.str = (wchar_t *)((ulonglong)local_88.s.str & 0xffffffffffff);
    pNVar2 = (Number *)
             ((ulonglong)local_e8.s.length * 0x20 + 0x10 +
             ((ulonglong)local_e8.s.str & 0xffffffffffff));
    *pNVar2 = local_88.n;
    pNVar2[1].u64 = uVar25;
    local_e8.s.length = local_e8.s.length + 1;
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_2b8.s);
    if ((*(longlong *)pFVar27 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_c8.n.i64 = (Number)0x0;
    local_c8.s.str = (wchar_t *)0x0;
    iVar4 = *(int *)(*(longlong *)pFVar27 + 0x20);
    pwVar5 = *(wchar_t **)(*(longlong *)pFVar27 + 0x18);
    uVar18 = (ulonglong)(iVar4 - 1);
    if (iVar4 == 0) {
      uVar18 = 0;
    }
    pwVar24 = L"";
    uVar22 = (uint)uVar18;
    if (pwVar5 == (wchar_t *)0x0) {
      if (uVar22 != 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L"");
        pwVar5 = pwVar24;
        if (bVar11) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        goto LAB_146b8a24d;
      }
LAB_146b8a256:
      pDVar16 = &local_c8;
      local_c8.ss.str[6] = 6 - (short)uVar18;
      local_c8.f.flags = 0x1c05;
    }
    else {
LAB_146b8a24d:
      pwVar24 = pwVar5;
      if (uVar22 < 7) goto LAB_146b8a256;
      local_c8.s.length = uVar22;
      local_c8.f.flags = 0xc05;
      pDVar16 = FMemory::Malloc((ulonglong)(uVar22 + 1) * 2,0);
      local_c8.s.str =
           (wchar_t *)((ulonglong)local_c8.s.str & 0xffff000000000000 | (ulonglong)pDVar16);
    }
    memcpy(pDVar16,pwVar24,uVar18 * 2);
    *(undefined2 *)((longlong)pDVar16 + uVar18 * 2) = 0;
    uVar22 = TAG_KEY.Data.ArrayNum - 1;
    if (TAG_KEY.Data.ArrayNum == 0) {
      uVar22 = 0;
    }
    FVar7 = TAG_KEY.Data.AllocatorInstance;
    if (((TAG_KEY.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
        (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("str != 0 || len == 0u",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x1a1,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_240.s.hashcode = 0;
    local_240.s.length = uVar22;
    local_240.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::AddMember
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_e8.s,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_240.s,
               (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_c8.s,param_3);
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_240.s);
    uVar8 = local_c8.s.str;
    if (local_c8.f.flags == 3) {
      for (pGVar13 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     ((ulonglong)local_c8.s.str & 0xffffffffffff);
          pGVar13 !=
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
          (((ulonglong)local_c8.n & 0xffffffff) * 0x20 + (longlong)(uVar8 & 0xffffffffffff));
          pGVar13 = pGVar13 + 2) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13 + 1);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
      }
      FMemory::Free((void *)(uVar8 & 0xffffffffffff));
      pFVar26 = local_2e0;
    }
    else if (local_c8.f.flags == 4) {
      uVar18 = (ulonglong)local_c8.n & 0xffffffff;
      pGVar20 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                ((ulonglong)local_c8.s.str & 0xffffffffffff);
      for (pGVar13 = pGVar20; pGVar13 != pGVar20 + uVar18; pGVar13 = pGVar13 + 1) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
      }
      FMemory::Free(pGVar20);
    }
    else if (local_c8.f.flags == 0xc05) {
      FMemory::Free((void *)((ulonglong)local_c8.s.str & 0xffffffffffff));
    }
    if ((*(longlong *)pFVar27 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(longlong *)(*(longlong *)pFVar27 + 0x78) != 0) {
      local_a8.n.i64 = (Number)0x0;
      local_a8.s.str = (wchar_t *)0x3000000000000;
      local_98.n.i64 = (Number)0x0;
      local_98.s.str = (wchar_t *)0x3000000000000;
      if ((*(longlong *)pFVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar15 = *(longlong *)pFVar27;
      if ((*(longlong *)(lVar15 + 0x78) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_148.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(lVar15 + 0x80);
      local_148.Object = *(FLocMetadataObject **)(lVar15 + 0x78);
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_148.Object == (FLocMetadataObject *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FJsonInternationalizationMetaDataSerializer::SerializeMetadata
                (&local_148,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_98.s,param_3);
      if ((local_98.f.flags != 3) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsObject()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x4b0,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar23 = 0;
      if (local_98.s.length != 0) {
        uVar22 = TAG_METADATA_KEY.Data.ArrayNum - 1;
        if (TAG_METADATA_KEY.Data.ArrayNum == 0) {
          uVar22 = 0;
        }
        FVar7.Data = TAG_METADATA_KEY.Data.AllocatorInstance.Data;
        if (((TAG_METADATA_KEY.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
            (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("str != 0 || len == 0u",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x1a1,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_230.s.hashcode = 0;
        local_230.s.length = uVar22;
        local_230.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  &local_a8.s,
                  (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  &local_230.s,
                  (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  &local_98.s,param_3);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_230.s);
        uVar23 = local_98.s.length;
      }
      uVar8 = local_98.s.str;
      if (local_98.f.flags == 3) {
        pGVar13 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_98.s.str & 0xffffffffffff);
        while( true ) {
          if ((local_98.f.flags != 3) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsObject()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x506,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if (pGVar13 ==
              (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              ((ulonglong)(uint)uVar23 * 0x20 + (longlong)(uVar8 & 0xffffffffffff))) break;
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13 + 1);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
          pGVar13 = pGVar13 + 2;
        }
        FMemory::Free((void *)(uVar8 & 0xffffffffffff));
        pFVar26 = local_2e0;
      }
      else if (local_98.f.flags == 4) {
        pGVar20 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_98.s.str & 0xffffffffffff);
        for (pGVar13 = pGVar20; pGVar13 != pGVar20 + (uint)uVar23; pGVar13 = pGVar13 + 1) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
        }
        FMemory::Free(pGVar20);
      }
      else if (local_98.f.flags == 0xc05) {
        FMemory::Free((void *)((ulonglong)local_98.s.str & 0xffffffffffff));
      }
      if ((local_a8.f.flags != 3) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsObject()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x4b0,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_a8.s.length != 0) {
        uVar22 = TAG_METADATA.Data.ArrayNum - 1;
        if (TAG_METADATA.Data.ArrayNum == 0) {
          uVar22 = 0;
        }
        FVar7.Data = TAG_METADATA.Data.AllocatorInstance.Data;
        if (((TAG_METADATA.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
            (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("str != 0 || len == 0u",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x1a1,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_270.s.hashcode = 0;
        local_270.s.length = uVar22;
        local_270.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  &local_e8.s,
                  (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  &local_270.s,
                  (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  &local_a8.s,param_3);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_270.s);
      }
      if (local_a8.f.flags == 3) {
        pGVar13 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_a8.s.str & 0xffffffffffff);
        while( true ) {
          if ((local_a8.f.flags != 3) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsObject()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x506,L""), bVar11)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pGVar20 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                    ((ulonglong)local_a8.s.str & 0xffffffffffff);
          if (pGVar13 == pGVar20 + ((ulonglong)local_a8.n & 0xffffffff) * 2) break;
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13 + 1);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
          pGVar13 = pGVar13 + 2;
        }
      }
      else if (local_a8.f.flags == 4) {
        pGVar20 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_a8.s.str & 0xffffffffffff);
        pGVar13 = pGVar20;
        if (pGVar20 != pGVar20 + ((ulonglong)local_a8.n & 0xffffffff)) {
          do {
            rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
            pGVar13 = pGVar13 + 1;
          } while (pGVar13 != pGVar20 + ((ulonglong)local_a8.n & 0xffffffff));
        }
      }
      else {
        if (local_a8.f.flags != 0xc05) goto LAB_146b8a967;
        pGVar20 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_a8.s.str & 0xffffffffffff);
      }
      FMemory::Free(pGVar20);
    }
LAB_146b8a967:
    if ((*(longlong *)pFVar27 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(char *)(*(longlong *)pFVar27 + 0x70) != '\0') {
      if ((*(longlong *)pFVar27 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_2f0.n.i64 = (Number)0x0;
      local_2f0.s.str =
           (wchar_t *)
           ((ulonglong)(ushort)((*(char *)(*(longlong *)pFVar27 + 0x70) != '\0') + 9) << 0x30);
      uVar22 = TAG_OPTIONAL.Data.ArrayNum - 1;
      if (TAG_OPTIONAL.Data.ArrayNum == 0) {
        uVar22 = 0;
      }
      FVar7.Data = TAG_OPTIONAL.Data.AllocatorInstance.Data;
      if (((TAG_OPTIONAL.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) &&
          (FVar7.Data = (FScriptContainerElement *)L"", uVar22 != 0)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("str != 0 || len == 0u",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x1a1,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_2a0.s.hashcode = 0;
      local_2a0.s.length = uVar22;
      local_2a0.s.str = (wchar_t *)((ulonglong)FVar7.Data | 0x405000000000000);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      AddMember((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                &local_e8.s,
                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                &local_2a0.s,
                (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                &local_2f0.s,param_3);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_2a0.s);
      uVar8 = local_2f0.s.str;
      if (local_2f0.f.flags == 3) {
        for (pGVar13 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       ((ulonglong)local_2f0.s.str & 0xffffffffffff);
            pGVar13 !=
            (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
            (((ulonglong)local_2f0.n & 0xffffffff) * 0x20 + (longlong)(uVar8 & 0xffffffffffff));
            pGVar13 = pGVar13 + 2) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13 + 1);
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
        }
        FMemory::Free((void *)(uVar8 & 0xffffffffffff));
        pFVar26 = local_2e0;
      }
      else if (local_2f0.f.flags == 4) {
        uVar18 = (ulonglong)local_2f0.n & 0xffffffff;
        pGVar20 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                  ((ulonglong)local_2f0.s.str & 0xffffffffffff);
        for (pGVar13 = pGVar20; pGVar13 != pGVar20 + uVar18; pGVar13 = pGVar13 + 1) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(pGVar13);
        }
        FMemory::Free(pGVar20);
      }
      else if (local_2f0.f.flags == 0xc05) {
        FMemory::Free((void *)((ulonglong)local_2f0.s.str & 0xffffffffffff));
      }
    }
    if ((local_310.f.flags != 4) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsArray()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                            ,0x6bb,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_310.s.hashcode <= local_310.s.length) {
      if (local_310.s.hashcode == 0) {
        uVar22 = 0x10;
      }
      else {
        uVar22 = (local_310.s.hashcode + 1 >> 1) + local_310.s.hashcode;
      }
      if ((local_310.f.flags != 4) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsArray()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x6a8,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_310.s.hashcode < uVar22) {
        if (uVar22 == 0) {
          FMemory::Free((void *)((ulonglong)local_310.s.str & 0xffffffffffff));
          pvVar19 = (void *)0x0;
        }
        else {
          pvVar19 = FMemory::Realloc((void *)((ulonglong)local_310.s.str & 0xffffffffffff),
                                     (ulonglong)uVar22 << 4,0);
        }
        local_310.s.hashcode = uVar22;
        local_310.s.str =
             (wchar_t *)((ulonglong)local_310.s.str & 0xffff000000000000 | (ulonglong)pvVar19);
      }
    }
    uVar21 = (ulonglong)local_310.n & 0xffffffff;
    uVar18 = (ulonglong)local_2a8;
    local_310.s.length = local_310.s.length + 1;
    pNVar2 = (Number *)(((ulonglong)local_310.s.str & 0xffffffffffff) + uVar21 * 0x10);
    *pNVar2 = local_e8.n;
    pNVar2[1].u64 = (ulong64)local_e8.s.str;
    local_e8.s.str = (wchar_t *)((ulonglong)local_e8.s.str & 0xffffffffffff);
    pFVar27 = pFVar27 + 0x10;
  } while( true );
}

