// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 26

// FromJsonStringView<char8_t> @ 141da73b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::JsonSerializable::Private::FromJsonStringView<char8_t>
          (FJsonSerializable *param_1,TStringView<char8_t> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringViewReader<char8_t> *pTVar2;
  bool bVar3;
  TSharedRef<TJsonStringViewReader<char8_t>,1> *pTVar4;
  FSharedReferencer<1> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TStringView<char8_t> local_78;
  TSharedRef<TJsonStringViewReader<char8_t>,1> local_68;
  TReferenceControllerBase<1> *local_58;
  StackState local_50;
  
  local_78.DataPtr = param_2->DataPtr;
  local_78.Size = param_2->Size;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = TJsonStringViewReader<char8_t>::Create(&local_68,&local_78);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_50.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Identifier.Data.ArrayNum = 0;
  local_50.Identifier.Data.ArrayMax = 0;
  local_50.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Array.ArrayNum = 0;
  local_50.Array.ArrayMax = 0;
  local_50.Object.Object = (FJsonObject *)0x0;
  local_50.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<char8_t>
                    ((TJsonReader<char8_t> *)pTVar2,&local_50,None);
  FVar5.ReferenceController = local_50.Object.SharedReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)local_50.Object.Object;
  if (bVar3) {
    if ((TReferenceControllerBase<1> *)local_50.Object.Object == (TReferenceControllerBase<1> *)0x0)
    {
      bVar3 = false;
      FVar5.ReferenceController = pTVar6;
      pTVar7 = pTVar6;
    }
    else {
      if (local_50.Object.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_50.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar3 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data,
               local_50.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_50.Array.AllocatorInstance.Data);
    }
    if (local_50.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (pTVar7 != (TReferenceControllerBase<1> *)0x0)) {
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar5.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar5.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = (TJsonStringViewReader<char8_t> *)&___7FJsonSerializerReader__6B_;
      local_68.SharedReferenceCount.ReferenceController = pTVar7;
      local_58 = FVar5.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      (**(code **)((longlong)*param_1 + 0x50))(param_1,&local_68,0);
      local_68.Object = (TJsonStringViewReader<char8_t> *)&___7FJsonSerializerReader__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
      bVar3 = true;
      goto LAB_141da7565;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data,
               local_50.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_50.Array.AllocatorInstance.Data);
    }
    FVar5.ReferenceController = pTVar6;
    if (local_50.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Identifier.Data.AllocatorInstance.Data);
      FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
  }
  if (2 < (byte)LogJson._0_1_) {
    Logging::Private::BasicLog<3>
              (&`bool___cdecl_UE::JsonSerializable::Private::FromJsonStringView<char8_t>(FJsonSerializable*___ptr64,TStringView<char8_t>)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogJson);
  }
  bVar3 = false;
LAB_141da7565:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return bVar3;
}

// FromJsonStringView<wchar_t> @ 141da75b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::JsonSerializable::Private::FromJsonStringView<wchar_t>
          (FJsonSerializable *param_1,TStringView<wchar_t> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringViewReader<wchar_t> *pTVar2;
  bool bVar3;
  TSharedRef<TJsonStringViewReader<wchar_t>,1> *pTVar4;
  FSharedReferencer<1> FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TStringView<wchar_t> local_78;
  TSharedRef<TJsonStringViewReader<wchar_t>,1> local_68;
  TReferenceControllerBase<1> *local_58;
  StackState local_50;
  
  local_78.DataPtr = param_2->DataPtr;
  local_78.Size = param_2->Size;
  local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar4 = TJsonStringViewReader<wchar_t>::Create(&local_68,&local_78);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  pTVar2 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  local_50.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Identifier.Data.ArrayNum = 0;
  local_50.Identifier.Data.ArrayMax = 0;
  local_50.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.Array.ArrayNum = 0;
  local_50.Array.ArrayMax = 0;
  local_50.Object.Object = (FJsonObject *)0x0;
  local_50.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                    ((TJsonReader<wchar_t> *)pTVar2,&local_50,None);
  FVar5.ReferenceController = local_50.Object.SharedReferenceCount.ReferenceController;
  pTVar7 = (TReferenceControllerBase<1> *)local_50.Object.Object;
  if (bVar3) {
    if ((TReferenceControllerBase<1> *)local_50.Object.Object == (TReferenceControllerBase<1> *)0x0)
    {
      bVar3 = false;
      FVar5.ReferenceController = pTVar6;
      pTVar7 = pTVar6;
    }
    else {
      if (local_50.Object.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_50.Object.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar3 = true;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data,
               local_50.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_50.Array.AllocatorInstance.Data);
    }
    if (local_50.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Identifier.Data.AllocatorInstance.Data);
    }
    if ((bVar3) && (pTVar7 != (TReferenceControllerBase<1> *)0x0)) {
      if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar5.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar5.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_68.Object = (TJsonStringViewReader<wchar_t> *)&___7FJsonSerializerReader__6B_;
      local_68.SharedReferenceCount.ReferenceController = pTVar7;
      local_58 = FVar5.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      (**(code **)((longlong)*param_1 + 0x50))(param_1,&local_68,0);
      local_68.Object = (TJsonStringViewReader<wchar_t> *)&___7FJsonSerializerReader__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
      bVar3 = true;
      goto LAB_141da7765;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data,
               local_50.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_50.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_50.Array.AllocatorInstance.Data);
    }
    FVar5.ReferenceController = pTVar6;
    if (local_50.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Identifier.Data.AllocatorInstance.Data);
      FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
  }
  if (2 < (byte)LogJson._0_1_) {
    Logging::Private::BasicLog<3>
              (&`bool___cdecl_UE::JsonSerializable::Private::FromJsonStringView<wchar_t>(FJsonSerializable*___ptr64,TStringView<wchar_t>)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogJson);
  }
  bVar3 = false;
LAB_141da7765:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return bVar3;
}

// ConvertRapidJsonToSharedJsonObject @ 141dcf2b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FJsonObject,1> * __cdecl
UE::Json::ConvertRapidJsonToSharedJsonObject
          (TSharedPtr<FJsonObject,1> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FJsonObject,1> *pTVar4;
  undefined8 *puVar5;
  TSharedPtr<FJsonValue,1> local_18;
  
  ConvertRapidJsonToSharedJsonValue
            (&local_18,
             (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             ((param_1.value_)->data_).n);
  if (local_18.Object != (FJsonValue *)0x0) {
    if (local_18.Object == (FJsonValue *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FJsonObject,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
    if ((local_18.Object)->Type == Object) {
      puVar5 = (undefined8 *)(**(code **)(local_18.Object)->_padding_)(local_18.Object);
      __return_storage_ptr__->Object = (FJsonObject *)*puVar5;
      pTVar1 = (TReferenceControllerBase<1> *)puVar5[1];
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      goto LAB_141dcf355;
    }
  }
  if (1 < (byte)LogJsonConversion._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogJsonConversion);
  }
  __return_storage_ptr__->Object = (FJsonObject *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
LAB_141dcf355:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ConvertRapidJsonToSharedJsonValue @ 141dcf380

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FJsonValue,1> * __cdecl
UE::Json::ConvertRapidJsonToSharedJsonValue
          (TSharedPtr<FJsonValue,1> *__return_storage_ptr__,
          GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *param_1)

{
  ushort uVar1;
  uint uVar2;
  TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
  *this;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSharedRef<FJsonValueNull,1> *pTVar7;
  TSharedRef<FJsonValueBoolean,1> *pTVar8;
  TSharedRef<FJsonObject,1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  wchar_t *pwVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedPtr<FJsonValue,1> *pTVar13;
  TSharedRef<FJsonValueNumber,1> *pTVar14;
  long64 lVar15;
  ulong64 uVar16;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar17;
  bool local_res10 [8];
  bool local_res18 [16];
  ForAnyElementType local_128;
  undefined8 local_120;
  TSharedPtr<FJsonValue,1> local_118;
  FString local_108;
  double local_f8;
  double local_f0;
  double local_e8;
  TSharedPtr<FJsonValue,1> local_e0;
  FString *local_d0;
  TSharedPtr<FJsonValue,1> *local_c8;
  FString local_c0;
  TSharedRef<FJsonValueNull,1> local_b0;
  TSharedRef<FJsonValueBoolean,1> local_a0;
  TSharedRef<FJsonValueBoolean,1> local_90;
  TSharedRef<FJsonObject,1> local_80;
  TSharedRef<FJsonValueNumber,1> local_70;
  TSharedRef<FJsonValueNumber,1> local_60;
  TSharedRef<FJsonValueNumber,1> local_50;
  
  uVar1 = (param_1->data_).f.flags;
  switch(uVar1 & 7) {
  case 0:
    pTVar7 = MakeShared<FJsonValueNull,1>(&local_b0);
    __return_storage_ptr__->Object = (FJsonValue *)pTVar7->Object;
    pTVar12 = (pTVar7->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.SharedReferenceCount.ReferenceController);
    break;
  case 1:
    local_res10[0] = false;
    pTVar8 = MakeShared<FJsonValueBoolean,1,bool>(&local_a0,local_res10);
    __return_storage_ptr__->Object = (FJsonValue *)pTVar8->Object;
    pTVar12 = (pTVar8->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.SharedReferenceCount.ReferenceController);
    break;
  case 2:
    local_res18[0] = true;
    pTVar8 = MakeShared<FJsonValueBoolean,1,bool>(&local_90,local_res18);
    __return_storage_ptr__->Object = (FJsonValue *)pTVar8->Object;
    pTVar12 = (pTVar8->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    break;
  case 3:
    pTVar9 = MakeShared<FJsonObject,1>(&local_80);
    pTVar12 = (pTVar9->SharedReferenceCount).ReferenceController;
    this = (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
            *)pTVar9->Object;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.SharedReferenceCount.ReferenceController);
    if ((param_1->data_).f.flags != 3) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x667,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
        return pTVar13;
      }
      if (((param_1->data_).f.flags != 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x4fd,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
        return pTVar13;
      }
    }
    pGVar17 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              ((ulonglong)(param_1->data_).s.str & 0xffffffffffff);
    while( true ) {
      if (((param_1->data_).f.flags != 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsObject()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                             ,0x500,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
        return pTVar13;
      }
      if (pGVar17 ==
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
          ((ulonglong)(param_1->data_).s.length * 0x20 +
          ((ulonglong)(param_1->data_).s.str & 0xffffffffffff))) break;
      ConvertRapidJsonToSharedJsonValue(&local_e0,pGVar17 + 1);
      if (local_e0.Object != (FJsonValue *)0x0) {
        if ((this == (TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                      *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
          return pTVar13;
        }
        pwVar11 = rapidjson::
                  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
                  GetString(pGVar17);
        ::FString::FString(&local_c0,pwVar11);
        local_d0 = &local_c0;
        local_c8 = &local_e0;
        TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&>_>
                  (this,(TPairInitializer<FString_&&,TSharedPtr<FJsonValue,1>_const_&> *)
                        (local_res18 + 8),(bool *)&local_d0);
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e0.SharedReferenceCount.ReferenceController);
      pGVar17 = pGVar17 + 2;
    }
    pTVar10 = ::operator_new(0x30);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
      __return_storage_ptr__->Object = (FJsonValue *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_;
      pTVar10[1]._padding_ = (longlong)&___7FJsonValueObject__6B_;
      pTVar10[2]._padding_ = (longlong)this;
      *(TReferenceControllerBase<1> **)&pTVar10[2].SharedReferenceCount = pTVar12;
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x6;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pTVar12 = (TReferenceControllerBase<1> *)0x0;
      if ((pTVar10 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
        return pTVar13;
      }
      __return_storage_ptr__->Object = (FJsonValue *)(pTVar10 + 1);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    break;
  case 4:
    pTVar12 = (TReferenceControllerBase<1> *)0x0;
    local_128.Data = (FScriptContainerElement *)0x0;
    local_120 = 0;
    if ((uVar1 != 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x71b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
      return pTVar13;
    }
    if (((param_1->data_).f.flags != 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x696,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
      return pTVar13;
    }
    uVar3 = *(ulonglong *)((longlong)&param_1->data_ + 8);
    pGVar17 = (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
              (uVar3 & 0xffffffffffff);
    if (((short)(uVar3 >> 0x30) != 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsArray()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                           ,0x699,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
      return pTVar13;
    }
    uVar2 = (param_1->data_).s.length;
    pwVar11 = (param_1->data_).s.str;
    for (; pGVar17 !=
           (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
           ((ulonglong)uVar2 * 0x10 + ((ulonglong)pwVar11 & 0xffffffffffff)); pGVar17 = pGVar17 + 1)
    {
      ConvertRapidJsonToSharedJsonValue(&local_118,pGVar17);
      if (local_118.Object != (FJsonValue *)0x0) {
        if (((local_128.Data <= &local_118) &&
            (&local_118 <
             (TSharedPtr<FJsonValue,1> *)(local_128.Data + (longlong)(int)local_120._4_4_ * 0x10)))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
          return pTVar13;
        }
        iVar6 = (int)local_120._0_4_;
        if (local_120._0_4_ == local_120._4_4_) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_128,(int *)((longlong)&local_120 + 4));
        }
        local_120 = CONCAT44(local_120._4_4_,iVar6 + 1);
        *(FJsonValue **)&local_128.Data[(longlong)iVar6 * 0x10].field_0x0 = local_118.Object;
        *(TReferenceControllerBase<1> **)(local_128.Data + (longlong)iVar6 * 0x10 + 8) =
             local_118.SharedReferenceCount.ReferenceController;
        local_118.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_118.Object = (FJsonValue *)0x0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
    }
    pTVar10 = ::operator_new(0x30);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (FJsonValue *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      pTVar10->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFJsonValueArray___00_SharedPointerInternals__6B_;
      pTVar10[1]._padding_ = (longlong)&___7FJsonValueArray__6B_;
      pTVar10[2]._padding_ = (longlong)local_128.Data;
      local_128.Data = (FScriptContainerElement *)0x0;
      pTVar10[2].SharedReferenceCount = local_120._0_4_;
      pTVar10[2].WeakReferenceCount = local_120._4_4_;
      local_120 = 0;
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x5;
      if ((pTVar10 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
        return pTVar13;
      }
      __return_storage_ptr__->Object = (FJsonValue *)(pTVar10 + 1);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar10;
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
      pTVar12 = pTVar10;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_128.Data,(int)local_120._0_4_);
    if ((TSharedPtr<FJsonValue,1> *)local_128.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_128.Data);
    }
    break;
  case 5:
    pwVar11 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
              GetString(param_1);
    pTVar12 = ::operator_new(0x30);
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      __return_storage_ptr__->Object = (FJsonValue *)0x10;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar12->SharedReferenceCount = (atomic<int>)0x1;
      pTVar12->WeakReferenceCount = (atomic<int>)0x1;
      pTVar12->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_V__TJsonValueString__W___00_SharedPointerInternals__6B_
      ;
      ::FString::FString(&local_108,pwVar11);
      pTVar12[1]._padding_ = (longlong)&___7__TJsonValueString__W__6B_;
      pTVar12[2]._padding_ = (longlong)local_108.Data.AllocatorInstance.Data;
      pTVar12[2].SharedReferenceCount = (atomic<int>)local_108.Data.ArrayNum;
      pTVar12[2].WeakReferenceCount = (atomic<int>)local_108.Data.ArrayMax;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pTVar12[1].SharedReferenceCount = (atomic<int>)0x2;
      if ((pTVar12 + 1 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar13 = (TSharedPtr<FJsonValue,1> *)(*pcVar4)();
        return pTVar13;
      }
      __return_storage_ptr__->Object = (FJsonValue *)(pTVar12 + 1);
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
      LOCK();
      pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    break;
  case 6:
    if ((uVar1 >> 9 & 1) != 0) {
      local_f8 = rapidjson::
                 GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
                 GetDouble(param_1);
      pTVar14 = MakeShared<FJsonValueNumber,1,double>(&local_70,&local_f8);
      __return_storage_ptr__->Object = (FJsonValue *)pTVar14->Object;
      pTVar12 = (pTVar14->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    if ((char)uVar1 < '\0') {
      lVar15 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
               ::GetInt64(param_1);
      local_f0 = (double)lVar15;
      pTVar14 = MakeShared<FJsonValueNumber,1,double>(&local_60,&local_f0);
      __return_storage_ptr__->Object = (FJsonValue *)pTVar14->Object;
      pTVar12 = (pTVar14->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
    if ((uVar1 >> 8 & 1) != 0) {
      uVar16 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
               ::GetUint64(param_1);
      local_e8 = (double)uVar16;
      pTVar14 = MakeShared<FJsonValueNumber,1,double>(&local_50,&local_e8);
      __return_storage_ptr__->Object = (FJsonValue *)pTVar14->Object;
      pTVar12 = (pTVar14->SharedReferenceCount).ReferenceController;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar12;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.SharedReferenceCount.ReferenceController);
      return __return_storage_ptr__;
    }
  default:
    if (2 < (byte)LogJsonConversion._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJsonConversion);
    }
    __return_storage_ptr__->Object = (FJsonValue *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// ConvertSharedJsonToRapidJsonDocument @ 141dcfb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000141dd00be) */
/* WARNING: Removing unreachable block (ram,0x000141dd00d7) */
/* WARNING: Removing unreachable block (ram,0x000141dd00f2) */
/* WARNING: Removing unreachable block (ram,0x000141dd00fa) */
/* WARNING: Removing unreachable block (ram,0x000141dd0101) */
/* WARNING: Removing unreachable block (ram,0x000141dd0107) */
/* WARNING: Removing unreachable block (ram,0x000141dd012c) */
/* WARNING: Removing unreachable block (ram,0x000141dd012d) */
/* WARNING: Removing unreachable block (ram,0x000141dd0147) */
/* WARNING: Removing unreachable block (ram,0x000141dd0038) */
/* WARNING: Removing unreachable block (ram,0x000141dd003f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
* __cdecl UE::Json::ConvertSharedJsonToRapidJsonDocument
                    (TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                     *__return_storage_ptr__,FJsonObject *param_1)

{
  longlong *plVar1;
  Number *pNVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  Number NVar8;
  Number NVar9;
  FJsonObject *pFVar10;
  bool bVar11;
  TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
  *pTVar12;
  size_t sVar13;
  Data *_Dst;
  GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  wchar_t *_Str;
  int iVar21;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  Data local_170;
  char local_160;
  int local_158;
  int local_154;
  Number local_150;
  Number *local_148;
  FJsonObject *local_140;
  int iStack_138;
  uint uStack_134;
  undefined1 *local_130;
  undefined4 uStack_128;
  int iStack_124;
  int local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  FJsonObject *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined8 uStack_d8;
  undefined4 local_b4;
  Data local_b0;
  Data local_98;
  Number local_88;
  Number NStack_80;
  Number local_78;
  Number NStack_70;
  Number local_68;
  Number NStack_60;
  Number local_58;
  Number NStack_50;
  Number local_48;
  Number NStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_78.i64 = 0;
  NStack_70.i64 = 0;
  local_58 = ___xmm_00000000000004000000000000000000;
  NStack_50 = _UNK_1507b1c88;
  local_68.i64 = 0;
  NStack_60.i64 = 0;
  local_98.n = (Number)0x0;
  local_98.s.str = (wchar_t *)0x0;
  iVar21 = 0;
  local_48.i = local_48.i & 0xffffffff00000000;
  NStack_40.i64 = 0;
  local_148 = (Number *)__return_storage_ptr__;
  local_88 = (Number)::operator_new(1);
  NStack_80 = local_88;
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_98.s);
  local_98.n = (Number)0x0;
  local_98.s.str = (wchar_t *)0x3000000000000;
  if (((FAllocatorImpl *)local_88.i64 == (FAllocatorImpl *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("allocator_",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                          ,0xaf5,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
               *)(*pcVar7)();
    return pTVar12;
  }
  iVar5 = *(int *)&(param_1->Values).field_0x28;
  puVar4 = &(param_1->Values).field_0x10;
  local_150.i = local_88.i;
  uStack_134 = 1;
  local_120 = 0;
  iStack_124 = local_120;
  if (iVar5 != 0) {
    puVar23 = *(uint **)&(param_1->Values).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar4;
    }
    uVar20 = *puVar23;
    local_120 = 0;
    iVar21 = 0;
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar21;
      local_120 = local_120 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_124 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_141dcfcbe;
      uVar20 = puVar23[lVar16 + 1];
    }
    uStack_134 = -uVar20 & uVar20;
    uVar3 = (ulonglong)uStack_134 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_158 = (int)lVar16;
    iStack_124 = local_120 + -1 + local_158;
    if (iVar5 < iStack_124) {
      iStack_124 = iVar5;
    }
  }
LAB_141dcfcbe:
  uVar20 = *(uint *)&(param_1->Values).field_0x28;
  uStack_11c = local_b4;
  uVar19 = uVar20 & 0xffffffe0;
  iStack_118 = *(int *)&(param_1->Values).field_0x8 - *(int *)&(param_1->Values).field_0x34;
  uStack_128 = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uStack_134,iVar21);
  TStack_108.CurrentBitIndex = iStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar20 >> 5;
  TStack_108._28_4_ = local_b4;
  TStack_108.BaseBitIndex = local_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  local_140 = param_1;
  iStack_138 = iVar21;
  local_130 = puVar4;
  local_110 = param_1;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar4;
  if ((((int)uVar20 < 0) || (iVar5 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
               *)(*pcVar7)();
    return pTVar12;
  }
  NVar9 = local_150;
  uVar6 = *(uint *)&(param_1->Values).field_0x28;
  if (uVar20 != uVar6) {
    puVar22 = *(undefined1 **)&(param_1->Values).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar4;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      lVar16 = (longlong)iVar18;
      uVar19 = uVar19 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = uVar6;
      if ((int)(((int)(uVar6 - 1) >> 0x1f & 0x1fU) + (uVar6 - 1)) >> 5 < iVar18) goto LAB_141dcfde0;
      uVar20 = *(uint *)(puVar22 + lVar16 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_154 = (int)lVar16;
    uVar20 = local_154 + -1 + uVar19;
    if ((int)uVar6 < (int)uVar20) {
      uVar20 = uVar6;
    }
  }
LAB_141dcfde0:
  do {
    pFVar10 = local_110;
    if (*(int *)&(local_110->Values).field_0x8 - *(int *)&(local_110->Values).field_0x34 !=
        (int)uStack_e8) {
      local_178[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
    }
    pNVar2 = local_148;
    if (((TStack_108.CurrentBitIndex == uVar20) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar4)) &&
       (pFVar10 == param_1)) {
      local_e0 = 0;
      *local_148 = local_98.n;
      local_148[1].u64 = (ulong64)local_98.s.str;
      local_148[2] = local_88;
      local_148[3] = NStack_80;
      local_148[4] = local_78;
      local_148[5] = NStack_70;
      local_148[6] = local_68;
      local_148[7] = NStack_60;
      local_148[8] = local_58;
      local_148[9] = NStack_50;
      local_58 = (Number)0x0;
      NStack_50 = (Number)0x0;
      local_78 = (Number)0x0;
      NStack_70 = (Number)0x0;
      local_88 = (Number)0x0;
      NStack_80 = (Number)0x0;
      local_68 = (Number)0x0;
      NStack_60 = (Number)0x0;
      local_148[10] = local_48;
      local_148[0xb] = NStack_40;
      uStack_d8 = 0;
      local_48.u64 = (ulonglong)uStack_dc << 0x20;
      local_98.s.str = (wchar_t *)((ulonglong)local_98.s.str & 0xffffffffffff);
      *(bool *)(local_148 + 0xc) = true;
      NStack_40 = (Number)0x0;
      ::operator_delete((void *)0x0,1);
      free((void *)local_68);
      ::operator_delete((void *)NStack_70,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_98.s);
      return (TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)pNVar2;
    }
    lVar16 = *(longlong *)&pFVar10->Values;
    plVar1 = (longlong *)(lVar16 + (longlong)TStack_108.CurrentBitIndex * 0x28);
    if ((*(longlong *)(lVar16 + 0x10 + (longlong)TStack_108.CurrentBitIndex * 0x28) == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                 *)(*pcVar7)();
      return pTVar12;
    }
    Private::ConvertToRapidJsonValueInternal
              ((TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)&local_170.s,(FJsonValue *)plVar1[2],(FAllocatorImpl *)NVar9);
    if (local_160 != '\0') {
      local_b0.n.i64 = (Number)0x0;
      local_b0.s.str = (wchar_t *)0x1c05000600000000;
      if ((int)plVar1[1] == 0) {
        _Str = L"";
      }
      else {
        _Str = (wchar_t *)*plVar1;
        if ((_Str == (wchar_t *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("str != 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x1ad,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                     *)(*pcVar7)();
          return pTVar12;
        }
      }
      sVar13 = wcslen(_Str);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_b0.s);
      uVar19 = (uint)sVar13;
      if (uVar19 < 7) {
        _Dst = &local_b0;
        local_b0.ss.str[6] = 6 - (short)sVar13;
        local_b0.f.flags = 0x1c05;
      }
      else {
        local_b0.s.length = uVar19;
        local_b0.f.flags = 0xc05;
        _Dst = FMemory::Malloc((ulonglong)(uVar19 + 1) * 2,0);
        local_b0.s.str =
             (wchar_t *)((ulonglong)local_b0.s.str & 0xffff000000000000 | (ulonglong)_Dst);
      }
      memcpy(_Dst,_Str,(sVar13 & 0xffffffff) * 2);
      *(undefined2 *)((longlong)_Dst + (sVar13 & 0xffffffff) * 2) = 0;
      if ((local_160 == '\0') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsSet()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                              ,0x1bd,
                              L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      if ((local_98.f.flags != 3) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsObject()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x575,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      if ((((ulonglong)local_b0.s.str & 0x400000000000000) == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("name.IsString()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                              ,0x576,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      uVar17 = local_98.s.length;
      if (local_98.s.hashcode <= local_98.s.length) {
        if (local_98.s.hashcode == 0) {
          uVar19 = 0x10;
          uVar15 = 0;
        }
        else {
          uVar19 = (local_98.s.hashcode + 1 >> 1) + local_98.s.hashcode;
          uVar15 = local_98.s.hashcode;
          if (uVar19 <= local_98.s.hashcode) goto LAB_141dcfff1;
        }
        pGVar14 = rapidjson::
                  Realloc<rapidjson::GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,UE::Json::Private::FAllocatorImpl>
                            ((FAllocatorImpl *)NVar9,
                             (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                              *)((ulonglong)local_98.s.str & 0xffffffffffff),(ulonglong)(uint)uVar15
                             ,(ulonglong)uVar19);
        local_98.s.hashcode = uVar19;
        local_98.s.str =
             (wchar_t *)((ulonglong)local_98.s.str & 0xffff000000000000 | (ulonglong)pGVar14);
        uVar17 = local_98.s.length;
      }
LAB_141dcfff1:
      pNVar2 = (Number *)
               ((ulonglong)(uint)uVar17 * 0x20 + ((ulonglong)local_98.s.str & 0xffffffffffff));
      *pNVar2 = local_b0.n;
      pNVar2[1].u64 = (ulong64)local_b0.s.str;
      local_b0.s.str = (wchar_t *)((ulonglong)local_b0.s.str & 0xffffffffffff);
      NVar8.i64._6_2_ = local_170.f.flags;
      NVar8.i64._0_6_ = local_170._8_6_;
      pNVar2 = (Number *)
               ((ulonglong)(uint)uVar17 * 0x20 + 0x10 + ((ulonglong)local_98.s.str & 0xffffffffffff)
               );
      *pNVar2 = local_170.n;
      pNVar2[1] = NVar8;
      local_98.s.length = local_98.s.length + 1;
      local_170.f.flags = 0;
      if (local_160 != '\0') {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_170.s);
      }
    }
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  } while( true );
}

// ConvertToRapidJsonValueInternal @ 141dd0250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_> *
__cdecl UE::Json::Private::ConvertToRapidJsonValueInternal
                  (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                   *__return_storage_ptr__,FJsonValue *param_1,FAllocatorImpl *param_2)

{
  undefined1 *puVar1;
  Number *pNVar2;
  longlong lVar3;
  code *pcVar4;
  Number NVar5;
  Number NVar6;
  undefined8 uVar7;
  I IVar8;
  char acVar9 [4];
  longlong *plVar10;
  char cVar11;
  bool bVar12;
  ulonglong uVar13;
  void *pvVar14;
  FJsonObject *pFVar15;
  TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  *pTVar16;
  size_t sVar17;
  Data *pDVar18;
  GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGVar19;
  byte bVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  longlong *plVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  wchar_t *pwVar28;
  undefined1 *puVar29;
  uint *puVar30;
  longlong *plVar31;
  uint uVar32;
  undefined1 auStackY_1c8 [32];
  undefined1 local_197;
  undefined1 local_196 [2];
  uint local_194;
  Data local_190;
  Data local_180;
  FAllocatorImpl *local_170;
  wchar_t *local_168;
  undefined8 local_160;
  I local_158;
  longlong *local_150;
  TSharedPtr<FJsonObject,1> *local_148;
  Data local_140;
  Data local_130;
  char local_120;
  FJsonObject *local_118;
  uint uStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  uint uStack_fc;
  uint local_f8;
  uint uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  int local_e8;
  int local_e4;
  FJsonObject *local_e0;
  Data local_d8;
  char local_c8;
  FJsonObject *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  Data local_90;
  Data local_80;
  Data local_70;
  Data local_60;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_170 = param_2;
  switch(param_1->Type) {
  case None:
    break;
  case Null:
    (__return_storage_ptr__->TypedValue).data_.n = (Number)0x0;
    (__return_storage_ptr__->TypedValue).data_.s.str = (wchar_t *)0x0;
    __return_storage_ptr__->bIsSet = true;
    local_90.n = (Number)0x0;
    local_90.s.str = (wchar_t *)0x0;
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
              ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
               &local_90.s);
    return __return_storage_ptr__;
  case String:
    local_168 = (wchar_t *)0x0;
    local_160 = 0;
    cVar11 = (**(code **)(param_1->_padding_ + 0x58))(param_1);
    pwVar28 = local_168;
    if (cVar11 != '\0') {
      local_70.n = (Number)0x0;
      local_70.s.str = (wchar_t *)0x1c05000600000000;
      if ((int)local_160 == 0) {
        pwVar28 = L"";
      }
      else if ((local_168 == (wchar_t *)0x0) &&
              (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("str != 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                   ,0x1ad,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                   *)(*pcVar4)();
        return pTVar16;
      }
      sVar17 = wcslen(pwVar28);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_70.s);
      uVar27 = (uint)sVar17;
      if (uVar27 < 7) {
        local_70.ss.str[6] = 6 - (short)sVar17;
        local_70.f.flags = 0x1c05;
        pDVar18 = &local_70;
      }
      else {
        local_70.s.length = uVar27;
        local_70.f.flags = 0xc05;
        pDVar18 = FMemory::Malloc((ulonglong)(uVar27 + 1) * 2,0);
        local_70.s.str =
             (wchar_t *)((ulonglong)local_70.s.str & 0xffff000000000000 | (ulonglong)pDVar18);
      }
      memcpy(pDVar18,pwVar28,(sVar17 & 0xffffffff) * 2);
      *(undefined2 *)((longlong)pDVar18 + (sVar17 & 0xffffffff) * 2) = 0;
      uVar7 = local_70.s.str;
      local_70.s.str = (wchar_t *)((ulonglong)local_70.s.str & 0xffffffffffff);
      *(Number *)&(__return_storage_ptr__->TypedValue).data_ = local_70.n;
      (__return_storage_ptr__->TypedValue).data_.s.str = (wchar_t *)uVar7;
      __return_storage_ptr__->bIsSet = true;
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_70.s);
      if (local_168 == (wchar_t *)0x0) {
        return __return_storage_ptr__;
      }
      FMemory::Free(local_168);
      return __return_storage_ptr__;
    }
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4570888338831048673>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\JsonUtils\\JsonConversion.cpp"
                        ,0x1f,"SrcValue.TryGetString(SrcString)");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                 *)(*pcVar4)();
      return pTVar16;
    }
    if (local_168 != (wchar_t *)0x0) {
      FMemory::Free(local_168);
    }
    break;
  case Number:
    local_158.i = 0;
    local_158.padding[0] = '\0';
    local_158.padding[1] = '\0';
    local_158.padding[2] = '\0';
    local_158.padding[3] = '\0';
    cVar11 = (**(code **)(param_1->_padding_ + 0x50))(param_1);
    IVar8 = local_158;
    if (cVar11 != '\0') {
      iVar22 = local_158.i;
      acVar9 = local_158.padding;
      local_60.n = (Number)0x0;
      local_60.s.str = (wchar_t *)0x3f6000000000000;
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_60.s);
      local_60.n = (Number)IVar8;
      local_60.s.str = (wchar_t *)0x0;
      (__return_storage_ptr__->TypedValue).data_.s.length = iVar22;
      (__return_storage_ptr__->TypedValue).data_.s.hashcode = (uint)acVar9;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).data_ + 8) = 0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->TypedValue).data_ + 0xc) = 0x2160000;
      __return_storage_ptr__->bIsSet = true;
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_60.s);
      return __return_storage_ptr__;
    }
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4570888338831048657>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\JsonUtils\\JsonConversion.cpp"
                        ,0x2f,"SrcValue.TryGetNumber(SrcNumber)");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                 *)(*pcVar4)();
      return pTVar16;
    }
    break;
  case Boolean:
    cVar11 = (**(code **)(param_1->_padding_ + 0x68))(param_1);
    if (cVar11 != '\0') {
      local_140.n = (Number)0x0;
      local_140.s.str = (wchar_t *)0x0;
      (__return_storage_ptr__->TypedValue).data_.n = (Number)0x0;
      (__return_storage_ptr__->TypedValue).data_.s.str = (wchar_t *)0x9000000000000;
      __return_storage_ptr__->bIsSet = true;
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_140.s);
      return __return_storage_ptr__;
    }
    bVar12 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4570888338831048644>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Json\\Private\\JsonUtils\\JsonConversion.cpp"
                        ,0x3c,"SrcValue.TryGetBool(SrcBool)");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                 *)(*pcVar4)();
      return pTVar16;
    }
    break;
  case Array:
    local_150 = (longlong *)0x0;
    cVar11 = (**(code **)(param_1->_padding_ + 0x78))(param_1,&local_150);
    plVar10 = local_150;
    if (cVar11 != '\0') {
      local_190.n = (Number)0x0;
      local_190.s.hashcode = 0;
      plVar24 = (longlong *)*local_150;
      local_190.s.str = (wchar_t *)0x4000000000000;
      local_194 = *(uint *)(local_150 + 1);
      uVar13 = (ulonglong)(int)local_194;
      plVar31 = plVar24 + uVar13 * 2;
      uVar25 = local_190.s.hashcode;
      while( true ) {
        if ((int)plVar10[1] != (int)uVar13) {
          local_197 = 0;
          `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_197);
        }
        uVar7 = local_190.s.str;
        if (plVar24 == plVar31) {
          local_190.s.str = (wchar_t *)((ulonglong)local_190.s.str & 0xffffffffffff);
          *(Number *)&(__return_storage_ptr__->TypedValue).data_ = local_190.n;
          *(undefined8 *)((longlong)&(__return_storage_ptr__->TypedValue).data_ + 8) = uVar7;
          __return_storage_ptr__->bIsSet = true;
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_190.s);
          return __return_storage_ptr__;
        }
        if ((*plVar24 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                     *)(*pcVar4)();
          return pTVar16;
        }
        ConvertToRapidJsonValueInternal
                  ((TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                    *)&local_d8.s,(FJsonValue *)*plVar24,param_2);
        if (local_c8 == '\0') {
          __return_storage_ptr__->bIsSet = false;
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_190.s);
          return __return_storage_ptr__;
        }
        if ((local_190.f.flags != 4) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsArray()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x6bb,L""), bVar12)) break;
        if ((uint)uVar25 <= local_190.s.length) {
          if (uVar25 == 0) {
            uVar27 = 0x10;
          }
          else {
            uVar27 = (uVar25 + 1 >> 1) + uVar25;
          }
          if ((local_190.f.flags != 4) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsArray()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x6a8,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                       *)(*pcVar4)();
            return pTVar16;
          }
          param_2 = local_170;
          if ((uint)uVar25 < uVar27) {
            if (uVar27 == 0) {
              FMemory::Free((void *)((ulonglong)local_190.s.str & 0xffffffffffff));
              pvVar14 = (void *)0x0;
            }
            else {
              pvVar14 = FMemory::Realloc((void *)((ulonglong)local_190.s.str & 0xffffffffffff),
                                         (ulonglong)uVar27 << 4,0);
            }
            local_190.s.hashcode = uVar27;
            local_190.s.str =
                 (wchar_t *)((ulonglong)local_190.s.str & 0xffff000000000000 | (ulonglong)pvVar14);
            param_2 = local_170;
            uVar25 = uVar27;
          }
        }
        NVar6.i64._6_2_ = local_d8.f.flags;
        NVar6.i64._0_6_ = local_d8._8_6_;
        uVar13 = (ulonglong)local_190.n & 0xffffffff;
        local_190.s.length = local_190.s.length + 1;
        pNVar2 = (Number *)(((ulonglong)local_190.s.str & 0xffffffffffff) + uVar13 * 0x10);
        *pNVar2 = local_d8.n;
        pNVar2[1] = NVar6;
        local_d8.f.flags = 0;
        if (local_c8 != '\0') {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_d8.s);
        }
        uVar13 = (ulonglong)local_194;
        plVar24 = plVar24 + 2;
      }
      pcVar4 = (code *)swi(3);
      pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                 *)(*pcVar4)();
      return pTVar16;
    }
    break;
  case Object:
    local_148 = (TSharedPtr<FJsonObject,1> *)0x0;
    cVar11 = (**(code **)(param_1->_padding_ + 0x88))(param_1,&local_148);
    if (cVar11 != '\0') {
      local_180.n.i64 = (Number)0x0;
      local_180.s.str = (wchar_t *)0x3000000000000;
      pFVar15 = TSharedPtr<FJsonObject,1>::operator->(local_148);
      uVar27 = *(uint *)&(pFVar15->Values).field_0x28;
      uVar32 = 0;
      uStack_10c = 1;
      puVar1 = &(pFVar15->Values).field_0x10;
      uStack_fc = uVar32;
      uStack_110 = uVar32;
      local_f8 = uVar32;
      if (uVar27 != 0) {
        puVar30 = *(uint **)&(pFVar15->Values).field_0x20;
        if (puVar30 == (uint *)0x0) {
          puVar30 = (uint *)puVar1;
        }
        uVar23 = *puVar30;
        local_f8 = 0;
        uStack_110 = 0;
        while (uVar23 == 0) {
          lVar21 = (longlong)(int)uStack_110;
          local_f8 = local_f8 + 0x20;
          uStack_110 = uStack_110 + 1;
          uStack_fc = uVar27;
          if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_110)
          goto LAB_141dd084d;
          uVar23 = puVar30[lVar21 + 1];
        }
        uStack_10c = -uVar23 & uVar23;
        uVar13 = (ulonglong)uStack_10c * 2 + 1;
        lVar21 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_e8 = (int)lVar21;
        uStack_fc = (local_f8 - 1) + local_e8;
        if ((int)uVar27 < (int)uStack_fc) {
          uStack_fc = uVar27;
        }
      }
LAB_141dd084d:
      local_194 = *(uint *)&(pFVar15->Values).field_0x28;
      iStack_f0 = *(int *)&(pFVar15->Values).field_0x8 - *(int *)&(pFVar15->Values).field_0x34;
      uVar23 = local_194 & 0xffffffe0;
      TStack_b8._padding_ = CONCAT44(uStack_10c,uStack_110);
      uStack_100 = 0xffffffff;
      TStack_b8.CurrentBitIndex = uStack_fc;
      TStack_b8.UnvisitedBitMask = 0xffffffff;
      iVar22 = (int)local_194 >> 5;
      TStack_b8._28_4_ = uStack_fc;
      TStack_b8.BaseBitIndex = local_f8;
      uStack_98 = CONCAT44(uStack_ec,iStack_f0);
      bVar20 = (byte)local_194;
      local_118 = pFVar15;
      local_108 = puVar1;
      uStack_f4 = uStack_fc;
      local_e0 = pFVar15;
      local_c0 = pFVar15;
      TStack_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)local_194 < 0) || ((int)uVar27 < (int)local_194)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                   *)(*pcVar4)();
        return pTVar16;
      }
      uVar27 = *(uint *)&(pFVar15->Values).field_0x28;
      if (local_194 != uVar27) {
        puVar29 = *(undefined1 **)&(pFVar15->Values).field_0x20;
        if (puVar29 == (undefined1 *)0x0) {
          puVar29 = puVar1;
        }
        uVar26 = -1 << (bVar20 & 0x1f) & *(uint *)(puVar29 + (longlong)iVar22 * 4);
        while (uVar26 == 0) {
          lVar21 = (longlong)iVar22;
          uVar23 = uVar23 + 0x20;
          iVar22 = iVar22 + 1;
          local_194 = uVar27;
          if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar22)
          goto LAB_141dd095a;
          uVar26 = *(uint *)(puVar29 + lVar21 * 4 + 4);
        }
        uVar13 = (ulonglong)(-uVar26 & uVar26) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_e4 = (int)lVar21;
        local_194 = local_e4 + -1 + uVar23;
        if ((int)uVar27 < (int)local_194) {
          local_194 = uVar27;
        }
      }
LAB_141dd095a:
      do {
        pFVar15 = local_c0;
        if (*(int *)&(local_c0->Values).field_0x8 - *(int *)&(local_c0->Values).field_0x34 !=
            (int)uStack_98) {
          local_196[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_196);
        }
        uVar7 = local_180.s.str;
        lVar21 = (longlong)TStack_b8.CurrentBitIndex;
        if (((TStack_b8.CurrentBitIndex == local_194) &&
            (TStack_b8.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&(local_e0->Values).field_0x10)) &&
           (pFVar15 == local_e0)) {
          local_180.s.str = (wchar_t *)((ulonglong)local_180.s.str & 0xffffffffffff);
          (__return_storage_ptr__->TypedValue).data_.n = local_180.n;
          (__return_storage_ptr__->TypedValue).data_.s.str = (wchar_t *)uVar7;
          __return_storage_ptr__->bIsSet = true;
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_180.s);
          return __return_storage_ptr__;
        }
        lVar3 = *(longlong *)&pFVar15->Values;
        if ((*(longlong *)(lVar3 + 0x10 + lVar21 * 0x28) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                     *)(*pcVar4)();
          return pTVar16;
        }
        ConvertToRapidJsonValueInternal
                  ((TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                    *)&local_130.s,*(FJsonValue **)(lVar3 + 0x10 + lVar21 * 0x28),local_170);
        if (local_120 == '\0') {
          __return_storage_ptr__->bIsSet = false;
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_180.s);
          return __return_storage_ptr__;
        }
        local_80.n.i64 = (Number)0x0;
        local_80.s.str = (wchar_t *)0x1c05000600000000;
        if (*(int *)(lVar3 + 8 + lVar21 * 0x28) == 0) {
          pwVar28 = L"";
        }
        else {
          pwVar28 = *(wchar_t **)(lVar3 + lVar21 * 0x28);
          if ((pwVar28 == (wchar_t *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("str != 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                  ,0x1ad,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                       *)(*pcVar4)();
            return pTVar16;
          }
        }
        sVar17 = wcslen(pwVar28);
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_80.s);
        uVar27 = (uint)sVar17;
        if (uVar27 < 7) {
          pDVar18 = &local_80;
          local_80.ss.str[6] = 6 - (short)sVar17;
          local_80.f.flags = 0x1c05;
        }
        else {
          local_80.f.flags = 0xc05;
          local_80.s.length = uVar27;
          pDVar18 = FMemory::Malloc((ulonglong)(uVar27 + 1) * 2,0);
          local_80.s.str =
               (wchar_t *)((ulonglong)local_80.s.str & 0xffff000000000000 | (ulonglong)pDVar18);
        }
        memcpy(pDVar18,pwVar28,(sVar17 & 0xffffffff) * 2);
        *(undefined2 *)((longlong)pDVar18 + (sVar17 & 0xffffffff) * 2) = 0;
        if ((local_120 == '\0') &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar12)) {
          pcVar4 = (code *)swi(3);
          pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                     *)(*pcVar4)();
          return pTVar16;
        }
        if ((local_180.f.flags != 3) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsObject()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x575,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                     *)(*pcVar4)();
          return pTVar16;
        }
        if ((((ulonglong)local_80.s.str & 0x400000000000000) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("name.IsString()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                                ,0x576,L""), bVar12)) {
          pcVar4 = (code *)swi(3);
          pTVar16 = (TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                     *)(*pcVar4)();
          return pTVar16;
        }
        uVar7 = local_180.s.str;
        if (local_180.s.hashcode <= local_180.s.length) {
          if (local_180.s.hashcode == 0) {
            uVar27 = 0x10;
            uVar25 = uVar32;
          }
          else {
            uVar27 = (local_180.s.hashcode + 1 >> 1) + local_180.s.hashcode;
            uVar25 = local_180.s.hashcode;
            if (uVar27 <= local_180.s.hashcode) goto LAB_141dd0ba0;
          }
          pGVar19 = rapidjson::
                    Realloc<rapidjson::GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,UE::Json::Private::FAllocatorImpl>
                              (local_170,
                               (GenericMember<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                                *)((ulonglong)local_180.s.str & 0xffffffffffff),
                               (ulonglong)(uint)uVar25,(ulonglong)uVar27);
          local_180.s.hashcode = uVar27;
          local_180.s.str = (wchar_t *)((ulonglong)pGVar19 | uVar7 & 0xffff000000000000);
        }
LAB_141dd0ba0:
        uVar13 = (ulonglong)local_180.n & 0xffffffff;
        local_180.s.length = local_180.s.length + 1;
        lVar21 = uVar13 * 0x20;
        pNVar2 = (Number *)(lVar21 + ((ulonglong)local_180.s.str & 0xffffffffffff));
        *pNVar2 = local_80.n;
        pNVar2[1].u64 = (ulong64)local_80.s.str;
        local_80.s.str = (wchar_t *)((ulonglong)local_80.s.str & 0xffffffffffff);
        NVar5.i64._6_2_ = local_130.f.flags;
        NVar5.i64._0_6_ = local_130._8_6_;
        pNVar2 = (Number *)(lVar21 + 0x10 + ((ulonglong)local_180.s.str & 0xffffffffffff));
        *pNVar2 = local_130.n;
        pNVar2[1] = NVar5;
        local_130.f.flags = 0;
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_80.s);
        if (local_120 != '\0') {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_130.s);
        }
        TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
      } while( true );
    }
    break;
  default:
    if (1 < (byte)LogJsonConversion._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogJsonConversion);
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// FindLineNumber @ 141dd4520

int __cdecl UE::Json::FindLineNumber(TStringView<wchar_t> *param_1,uint param_2)

{
  wchar_t *pwVar1;
  uint uVar2;
  wchar_t *pwVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 1;
  pwVar3 = param_1->DataPtr;
  iVar5 = 1;
  uVar2 = param_1->Size;
  if ((int)param_2 < param_1->Size) {
    uVar2 = param_2;
  }
  uVar4 = 0;
  if (0 < (int)uVar2) {
    uVar4 = uVar2;
  }
  pwVar1 = pwVar3 + (int)uVar4;
  for (; pwVar3 != pwVar1; pwVar3 = pwVar3 + 1) {
    if (*pwVar3 == L'\n') {
      iVar6 = iVar6 + 1;
    }
    else if (*pwVar3 == L'\r') {
      iVar5 = iVar5 + 1;
    }
  }
  if (iVar5 < iVar6) {
    iVar5 = iVar6;
  }
  return iVar5;
}

// FindPartInJsonValue @ 141dd46d0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FJsonValue,1> * __cdecl
UE::Json::FindPartInJsonValue(TSharedPtr<FJsonValue,1> *param_1,FString *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  TSharedPtr<FJsonValue,1> *pTVar6;
  TTuple<FString,TSharedPtr<FJsonValue,1>_> *pTVar7;
  wchar_t *_Str;
  longlong *local_res8;
  longlong *local_res18 [2];
  
  _Str = L"";
  local_res8 = (longlong *)0x0;
  if ((param_1->Object == (FJsonValue *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
    return pTVar6;
  }
  cVar4 = (**(code **)(param_1->Object->_padding_ + 0x70))(param_1->Object,&local_res8);
  if (cVar4 != '\0') {
    bVar3 = ::FString::IsNumeric(param_2);
    if (bVar3) {
      if ((param_2->Data).ArrayNum != 0) {
        _Str = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      iVar5 = _wtoi(_Str);
      plVar2 = local_res8;
      if ((-1 < iVar5) && (iVar5 < (int)local_res8[1])) {
        if ((iVar5 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
          return pTVar6;
        }
        return (TSharedPtr<FJsonValue,1> *)((longlong)iVar5 * 0x10 + *plVar2);
      }
      if (2 < (byte)LogJson._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
        return (TSharedPtr<FJsonValue,1> *)0x0;
      }
    }
    else if (2 < (byte)LogJson._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
      return (TSharedPtr<FJsonValue,1> *)0x0;
    }
    return (TSharedPtr<FJsonValue,1> *)0x0;
  }
  if ((param_1->Object == (FJsonValue *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
    return pTVar6;
  }
  cVar4 = (**(code **)(param_1->Object->_padding_ + 0x88))(param_1->Object,local_res18);
  if (cVar4 != '\0') {
    if ((*local_res18[0] == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FJsonValue,1> *)(*pcVar1)();
      return pTVar6;
    }
    pTVar7 = TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FString,TSharedPtr<FJsonValue,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>,FDefaultSetAllocator>
                     *)*local_res18[0],param_2);
    param_1 = (TSharedPtr<FJsonValue,1> *)&pTVar7->field_0x10;
    if (pTVar7 == (TTuple<FString,TSharedPtr<FJsonValue,1>_> *)0x0) {
      param_1 = (TSharedPtr<FJsonValue,1> *)0x0;
    }
    if (param_1 == (TSharedPtr<FJsonValue,1> *)0x0) {
      if ((byte)LogJson._0_1_ < 3) {
        return (TSharedPtr<FJsonValue,1> *)0x0;
      }
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogJson);
      return (TSharedPtr<FJsonValue,1> *)0x0;
    }
  }
  return param_1;
}

// GetArrayField @ 141dd5230

TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
* __cdecl UE::Json::GetArrayField
                    (TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
                     *__return_storage_ptr__,
                    GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                    param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  *pTVar4;
  longlong local_res10 [3];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)local_res10);
  puVar1 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOptional<rapidjson::GenericArray<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((local_res10[0] != (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff) + (ulonglong)*puVar1 * 0x20)
     && (*(short *)(local_res10[0] + 0x1e) == 4)) {
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).value_ =
         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
         (local_res10[0] + 0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetBoolField @ 141dd5470

TOptional<bool> __cdecl
UE::Json::GetBoolField
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2)

{
  short sVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  TOptional<bool> TVar5;
  longlong local_res10 [3];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_2,(wchar_t *)local_res10);
  puVar2 = *(uint **)param_2;
  if (*(short *)((longlong)puVar2 + 0xe) != 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TOptional<bool>)(*pcVar3)();
      return TVar5;
    }
  }
  if ((local_res10[0] != (ulonglong)*puVar2 * 0x20 + (*(ulonglong *)(puVar2 + 2) & 0xffffffffffff))
     && ((*(byte *)(local_res10[0] + 0x1e) & 8) != 0)) {
    sVar1 = *(short *)(local_res10[0] + 0x1e);
    ((param_1.value_)->data_).f.payload[1] = '\x01';
    ((param_1.value_)->data_).f.payload[0] = sVar1 == 10;
    return SUB82(param_1.value_,0);
  }
  ((param_1.value_)->data_).f.payload[1] = '\0';
  return SUB82(param_1.value_,0);
}

// GetDoubleField @ 141dd5b10

TOptional<double> * __cdecl
UE::Json::GetDoubleField
          (TOptional<double> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<double> *pTVar4;
  double dVar5;
  longlong local_res10 [3];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)local_res10);
  puVar1 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOptional<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((local_res10[0] != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff))
     && ((*(ushort *)(local_res10[0] + 0x1e) & 0x200) != 0)) {
    dVar5 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            GetDouble((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      (local_res10[0] + 0x10));
    __return_storage_ptr__->TypedValue = dVar5;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetInt32Field @ 141dd64d0

TOptional<int> __cdecl
UE::Json::GetInt32Field
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<int> TVar4;
  longlong local_res10 [3];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_2,(wchar_t *)local_res10);
  puVar1 = *(uint **)param_2;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TOptional<int>)(*pcVar2)();
      return TVar4;
    }
  }
  if ((local_res10[0] != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff))
     && ((*(ushort *)(local_res10[0] + 0x1e) & 0x20) != 0)) {
    ((param_1.value_)->data_).s.length = *(uint *)(local_res10[0] + 0x10);
    ((param_1.value_)->data_).f.payload[4] = '\x01';
    return (TOptional<int>)param_1.value_;
  }
  ((param_1.value_)->data_).f.payload[4] = '\0';
  return (TOptional<int>)param_1.value_;
}

// GetInt64Field @ 141dd65d0

TOptional<__int64> * __cdecl
UE::Json::GetInt64Field
          (TOptional<__int64> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<__int64> *pTVar4;
  longlong local_res10 [3];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)local_res10);
  puVar1 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOptional<__int64> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((local_res10[0] != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff))
     && ((char)*(undefined2 *)(local_res10[0] + 0x1e) < '\0')) {
    __return_storage_ptr__->TypedValue = *(long64 *)(local_res10[0] + 0x10);
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetObjectField @ 141dd6ac0

TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
* __cdecl UE::Json::GetObjectField
                    (TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
                     *__return_storage_ptr__,
                    GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                    param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  *pTVar4;
  longlong local_res10 [3];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)local_res10);
  puVar1 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((local_res10[0] != (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff) + (ulonglong)*puVar1 * 0x20)
     && (*(short *)(local_res10[0] + 0x1e) == 3)) {
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).value_ =
         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
         (local_res10[0] + 0x10);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetRootObject @ 141dd6b70

TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
* __cdecl UE::Json::GetRootObject
                    (TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
                     *__return_storage_ptr__,
                    GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                    *param_1)

{
  if (*(short *)((longlong)&param_1->_padding_ + 6) == 3) {
    (__return_storage_ptr__->TypedValue).value_ =
         (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)param_1;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetStringField @ 141dd6ef0

TOptional<TStringView<wchar_t>_> * __cdecl
UE::Json::GetStringField
          (TOptional<TStringView<wchar_t>_> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TOptional<TStringView<wchar_t>_> *pTVar5;
  wchar_t *pwVar6;
  longlong local_res10;
  undefined4 uStack_c;
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)&local_res10);
  puVar1 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TOptional<TStringView<wchar_t>_> *)(*pcVar2)();
      return pTVar5;
    }
  }
  if ((local_res10 != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff)) &&
     ((*(ushort *)(local_res10 + 0x1e) & 0x400) != 0)) {
    uVar4 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            GetStringLength((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                             *)(local_res10 + 0x10));
    pwVar6 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
             GetString((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                       (local_res10 + 0x10));
    __return_storage_ptr__->bIsSet = true;
    (__return_storage_ptr__->TypedValue).DataPtr = pwVar6;
    *(ulonglong *)&(__return_storage_ptr__->TypedValue).Size = CONCAT44(uStack_c,uVar4);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetUint32Field @ 141dd7460

TOptional<unsigned_int> __cdecl
UE::Json::GetUint32Field
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<unsigned_int> TVar4;
  longlong local_res10 [3];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_2,(wchar_t *)local_res10);
  puVar1 = *(uint **)param_2;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (TOptional<unsigned_int>)(*pcVar2)();
      return TVar4;
    }
  }
  if ((local_res10[0] != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff))
     && ((*(ushort *)(local_res10[0] + 0x1e) & 0x40) != 0)) {
    ((param_1.value_)->data_).s.length = *(uint *)(local_res10[0] + 0x10);
    ((param_1.value_)->data_).f.payload[4] = '\x01';
    return (TOptional<unsigned_int>)param_1.value_;
  }
  ((param_1.value_)->data_).f.payload[4] = '\0';
  return (TOptional<unsigned_int>)param_1.value_;
}

// GetUint64Field @ 141dd7570

TOptional<unsigned___int64> * __cdecl
UE::Json::GetUint64Field
          (TOptional<unsigned___int64> *__return_storage_ptr__,
          GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
          param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<unsigned___int64> *pTVar4;
  ulong64 uVar5;
  longlong local_res10 [3];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)local_res10);
  puVar1 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOptional<unsigned___int64> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((local_res10[0] != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff))
     && ((*(ushort *)(local_res10[0] + 0x1e) & 0x100) != 0)) {
    uVar5 = rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
            GetUint64((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      (local_res10[0] + 0x10));
    __return_storage_ptr__->TypedValue = uVar5;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetValueTypeName @ 141dd7a70

wchar_t * __cdecl
UE::Json::GetValueTypeName
          (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *param_1)

{
  switch((param_1->data_).f.flags & 7) {
  case 0:
    return L"Null";
  case 1:
  case 2:
    return L"Bool";
  case 3:
    return L"Object";
  case 4:
    return L"Array";
  case 5:
    return L"String";
  case 6:
    return L"Number";
  default:
    return L"Unknown";
  }
}

// HasField @ 141dd7d20

bool __cdecl
UE::Json::HasField(GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                   param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong local_res8 [4];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)local_res8);
  puVar1 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return local_res8[0] != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff);
}

// HasNullField @ 141dd7da0

bool __cdecl
UE::Json::HasNullField
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,wchar_t *param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong local_res8 [4];
  
  rapidjson::
  GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  ::FindMember((GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
                *)param_1.value_,(wchar_t *)local_res8);
  puVar1 = *(uint **)&(param_1.value_)->data_;
  if (*(short *)((longlong)puVar1 + 0xe) != 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                       ,0x500,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((local_res8[0] != (ulonglong)*puVar1 * 0x20 + (*(ulonglong *)(puVar1 + 2) & 0xffffffffffff))
     && ((*(byte *)(local_res8[0] + 0x1e) & 7) == 0)) {
    return true;
  }
  return false;
}

// Parse @ 141dd9b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
* __cdecl UE::Json::Parse(TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
                          *__return_storage_ptr__,TStringView<wchar_t> *param_1)

{
  undefined1 uVar1;
  wchar_t wVar2;
  undefined1 uVar3;
  undefined1 auStack_c8 [32];
  EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream> local_a8;
  MemoryStream local_98;
  Data local_78;
  void *local_68;
  void *pvStack_60;
  longlong local_58;
  void *pvStack_50;
  void *local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  MemoryStream *local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_38 = ___xmm_00000000000004000000000000000000;
  lStack_30 = _UNK_1507b1c88;
  local_48 = (void *)0x0;
  lStack_40 = 0;
  local_78.n = (Number)0x0;
  local_78.s.str = (wchar_t *)0x0;
  local_28 = (MemoryStream *)((ulonglong)local_28 & 0xffffffff00000000);
  uStack_20 = 0;
  local_68 = ::operator_new(1);
  local_98.begin_ = (char *)param_1->DataPtr;
  local_98.size_ = (longlong)param_1->Size * 2;
  local_98.end_ = (char *)((longlong)local_98.begin_ + (longlong)param_1->Size * 2);
  local_a8.is_ = &local_98;
  if (local_98.begin_ == local_98.end_) {
    uVar3 = 0;
    uVar1 = 0;
    local_98.src_ = local_98.begin_;
  }
  else {
    uVar3 = (undefined1)*(wchar_t *)local_98.begin_;
    local_98.src_ = (char *)((longlong)local_98.begin_ + 1);
    if (local_98.src_ == local_98.end_) {
      uVar1 = 0;
    }
    else {
      uVar1 = *local_98.src_;
      local_98.src_ = (char *)((longlong)local_98.begin_ + 2);
    }
  }
  wVar2 = CONCAT11(uVar1,uVar3);
  pvStack_60 = local_68;
  if (wVar2 == L'\xfeff') {
    wVar2 = rapidjson::UTF16LE<wchar_t>::Take<rapidjson::MemoryStream>(&local_98);
  }
  local_a8.current_ = wVar2;
  rapidjson::
  GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
  ::
  ParseStream<128,rapidjson::UTF16LE<wchar_t>,rapidjson::EncodedInputStream<rapidjson::UTF16LE<wchar_t>,rapidjson::MemoryStream>_>
            ((GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
              *)&local_78.s,&local_a8);
  if ((int)local_28 == 0) {
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_78.n;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_78.s.str;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_68;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)pvStack_60;
    (__return_storage_ptr__->Variant)._padding_ = local_58;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)pvStack_50;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_48;
    (__return_storage_ptr__->Variant)._padding_ = lStack_40;
    (__return_storage_ptr__->Variant)._padding_ = local_38;
    (__return_storage_ptr__->Variant)._padding_ = lStack_30;
    local_38 = 0;
    lStack_30 = 0;
    local_58 = 0;
    pvStack_50 = (void *)0x0;
    local_68 = (void *)0x0;
    pvStack_60 = (void *)0x0;
    local_a8.is_ = (MemoryStream *)((ulonglong)local_a8.is_._4_4_ << 0x20);
    local_a8._8_8_ = 0;
    local_78.s.str = (wchar_t *)((ulonglong)local_78.s.str & 0xffffffffffff);
    local_48 = (void *)0x0;
    lStack_40 = 0;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_28;
    (__return_storage_ptr__->Variant)._padding_ = uStack_20;
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
    local_28 = local_a8.is_;
    uStack_20 = 0;
  }
  else {
    local_a8.is_ = (MemoryStream *)CONCAT44(local_a8.is_._4_4_,(int)local_28);
    local_a8._8_8_ = uStack_20 >> 1;
    (__return_storage_ptr__->Variant)._padding_ = (longlong)local_a8.is_;
    (__return_storage_ptr__->Variant)._padding_ = local_a8._8_8_;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    if (pvStack_60 != (void *)0x0) {
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      local_78.n.i64 = (Number)0x0;
      local_78.s.str = (wchar_t *)0x0;
    }
  }
  ::operator_delete(pvStack_60,1);
  free(local_48);
  ::operator_delete(pvStack_50,1);
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
             &local_78.s);
  return __return_storage_ptr__;
}

// ParseInPlace @ 141dd9d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
* __cdecl UE::Json::ParseInPlace
                    (TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
                     *__return_storage_ptr__,TArrayView<wchar_t,int> *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
  *pTVar6;
  uint uVar7;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined4 uStack_e4;
  uint uStack_d4;
  int local_c8;
  undefined4 uStack_c4;
  ulonglong uStack_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined8 uStack_b0;
  GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_> local_a8;
  Data local_88;
  void *local_78;
  void *pvStack_70;
  longlong local_68;
  void *pvStack_60;
  void *local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  iVar1 = param_1->ArrayNum;
  if (iVar1 == 0) {
    (__return_storage_ptr__->Variant)._padding_ = CONCAT44(uStack_e4,1);
    (__return_storage_ptr__->Variant)._padding_ = 0;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  else {
    uVar7 = iVar1 - 1;
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_f8 = (longlong)(int)uVar7;
      local_f0 = (longlong)iVar1;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TValueOrError<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>,UE::Json::FParseError>
                  *)(*pcVar3)();
        return pTVar6;
      }
    }
    pwVar2 = param_1->DataPtr;
    if (pwVar2[(int)uVar7] == L'\0') {
      local_38 = (ulonglong)local_38._4_4_ << 0x20;
      local_68 = 0;
      pvStack_60 = (void *)0x0;
      local_48 = ___xmm_00000000000004000000000000000000;
      lStack_40 = _UNK_1507b1c88;
      local_88.n = (Number)0x0;
      local_88.s.str = (wchar_t *)0x0;
      uStack_30 = 0;
      local_58 = (void *)0x0;
      lStack_50 = 0;
      local_78 = ::operator_new(1);
      local_a8.dst_ = (wchar_t *)0x0;
      local_a8.src_ = pwVar2;
      local_a8.head_ = pwVar2;
      pvStack_70 = local_78;
      rapidjson::
      GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
      ::
      ParseStream<129,rapidjson::UTF16<wchar_t>,rapidjson::GenericInsituStringStream<rapidjson::UTF16LE<wchar_t>_>_>
                ((GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                  *)&local_88.s,&local_a8);
      if ((int)local_38 == 0) {
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_88.n;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_88.s.str;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_78;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)pvStack_70;
        (__return_storage_ptr__->Variant)._padding_ = local_68;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)pvStack_60;
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_58;
        (__return_storage_ptr__->Variant)._padding_ = lStack_50;
        (__return_storage_ptr__->Variant)._padding_ = local_48;
        (__return_storage_ptr__->Variant)._padding_ = lStack_40;
        local_48 = 0;
        lStack_40 = 0;
        local_68 = 0;
        pvStack_60 = (void *)0x0;
        local_78 = (void *)0x0;
        pvStack_70 = (void *)0x0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_88.s.str = (wchar_t *)((ulonglong)local_88.s.str & 0xffffffffffff);
        local_58 = (void *)0x0;
        lStack_50 = 0;
        (__return_storage_ptr__->Variant)._padding_ = local_38;
        (__return_storage_ptr__->Variant)._padding_ = uStack_30;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        uStack_30 = 0;
        local_38 = (ulonglong)uStack_b4 << 0x20;
      }
      else {
        local_c8 = (int)local_38;
        uStack_c0 = uStack_30 >> 1;
        (__return_storage_ptr__->Variant)._padding_ = CONCAT44(uStack_c4,(int)local_38);
        (__return_storage_ptr__->Variant)._padding_ = uStack_c0;
        (__return_storage_ptr__->Variant).TypeIndex = '\x01';
        if (pvStack_70 != (void *)0x0) {
          rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
          ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                    ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                     &local_88.s);
          local_88.n.i64 = (Number)0x0;
          local_88.s.str = (wchar_t *)0x0;
        }
      }
      ::operator_delete(pvStack_70,1);
      free(local_58);
      ::operator_delete(pvStack_60,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_88.s);
    }
    else {
      (__return_storage_ptr__->Variant)._padding_ = (ulonglong)uStack_d4 << 0x20;
      (__return_storage_ptr__->Variant)._padding_ = 1;
      (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    }
  }
  return __return_storage_ptr__;
}

// ToSimpleJsonVariant @ 141df93c0

TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString> * __cdecl
UE::Json::ToSimpleJsonVariant
          (TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>
           *__return_storage_ptr__,FJsonValue *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  FString *this;
  double dVar4;
  longlong local_38;
  undefined8 local_30;
  FString local_28 [2];
  
  cVar1 = (**(code **)(param_1->_padding_ + 0x90))();
  if (cVar1 == '\0') {
    if (param_1->Type == Boolean) {
      bVar2 = FJsonValue::AsBool(param_1);
      *(bool *)&__return_storage_ptr__->_padding_ = bVar2;
      __return_storage_ptr__->TypeIndex = '\0';
      return __return_storage_ptr__;
    }
    if (param_1->Type == Number) {
      dVar4 = FJsonValue::AsNumber(param_1);
      this = ::FString::SanitizeFloat(local_28,dVar4,0);
      iVar3 = ::FString::Find(this,L".",1,IgnoreCase,FromStart,-1);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      if (iVar3 == -1) {
        *(undefined1 *)&__return_storage_ptr__->_padding_ = 2;
        __return_storage_ptr__->_padding_ =
             (longlong)ROUND(dVar4 + dVar4 + __real_3fe0000000000000) >> 1;
      }
      else {
        *(undefined1 *)&__return_storage_ptr__->_padding_ = 4;
        __return_storage_ptr__->_padding_ = (longlong)dVar4;
      }
      __return_storage_ptr__->TypeIndex = '\x01';
      return __return_storage_ptr__;
    }
  }
  local_38 = 0;
  local_30 = 0;
  cVar1 = (**(code **)(param_1->_padding_ + 0x58))(param_1,&local_38);
  if (cVar1 == '\0') {
    ::FString::FString(local_28,L"String");
    FJsonValue::ErrorMessage(param_1,local_28);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
  }
  __return_storage_ptr__->_padding_ = local_38;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = (undefined4)local_30;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_30._4_4_;
  __return_storage_ptr__->TypeIndex = '\x02';
  return __return_storage_ptr__;
}

// WriteCompact @ 141dfdda0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
UE::Json::WriteCompact
          (FString *__return_storage_ptr__,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_1)

{
  wchar_t *pwVar1;
  GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> local_78;
  Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
  local_48;
  
  local_48.level_stack_.allocator_ = (FAllocatorImpl *)0x0;
  local_78.stack_.allocator_ = (FAllocatorImpl *)0x0;
  local_78.stack_.ownAllocator_ = (FAllocatorImpl *)0x0;
  local_48.os_ = &local_78;
  local_48.level_stack_.stackTop_ = (char *)0x0;
  local_48.level_stack_.stackEnd_ = (char *)0x0;
  local_78.stack_.stackEnd_ = ___xmm_00000000000001000000000000000000;
  local_78.stack_.initialCapacity_ = _UNK_1507b1c78;
  local_48.level_stack_.ownAllocator_ = (FAllocatorImpl *)0x0;
  local_48.level_stack_.stack_ = (char *)0x0;
  local_48.level_stack_.initialCapacity_ = 0x200;
  local_48.maxDecimalPlaces_ = 0x144;
  local_48.hasRoot_ = false;
  local_78.stack_.stack_ = (char *)0x0;
  local_78.stack_.stackTop_ = (char *)0x0;
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)param_1,
             &local_48);
  pwVar1 = rapidjson::
           GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
           GetString(&local_78);
  ::FString::FString(__return_storage_ptr__,pwVar1);
  FMemory::Free(local_48.level_stack_.stack_);
  ::operator_delete(local_48.level_stack_.ownAllocator_,1);
  FMemory::Free(local_78.stack_.stack_);
  ::operator_delete(local_78.stack_.ownAllocator_,1);
  return __return_storage_ptr__;
}

// WritePretty @ 141e00170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
UE::Json::WritePretty
          (FString *__return_storage_ptr__,
          GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
          *param_1)

{
  wchar_t *pwVar1;
  GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> local_88;
  PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>
  local_58;
  
  local_88.stack_.allocator_ = (FAllocatorImpl *)0x0;
  local_88.stack_.ownAllocator_ = (FAllocatorImpl *)0x0;
  local_58._padding_ = (longlong)&local_88;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_88.stack_.stackEnd_ = ___xmm_00000000000001000000000000000000;
  local_88.stack_.initialCapacity_ = _UNK_1507b1c78;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58._padding_._4_1_ = 0;
  local_58.indentChar_ = L'\t';
  local_88.stack_.stack_ = (char *)0x0;
  local_88.stack_.stackTop_ = (char *)0x0;
  local_58._padding_ = 0x200;
  local_58._padding_._0_4_ = 0x144;
  local_58.indentCharCount_ = 1;
  local_58.formatOptions_ = kFormatDefault;
  rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
  Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>,rapidjson::UTF16<wchar_t>,rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,0>_>
            ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)param_1,
             &local_58);
  pwVar1 = rapidjson::
           GenericStringBuffer<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
           GetString(&local_88);
  ::FString::FString(__return_storage_ptr__,pwVar1);
  FMemory::Free((void *)local_58._padding_);
  ::operator_delete((void *)local_58._padding_,1);
  FMemory::Free(local_88.stack_.stack_);
  ::operator_delete(local_88.stack_.ownAllocator_,1);
  return __return_storage_ptr__;
}

