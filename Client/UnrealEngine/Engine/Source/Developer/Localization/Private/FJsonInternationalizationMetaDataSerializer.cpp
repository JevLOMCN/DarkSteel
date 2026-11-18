// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 3

// DeserializeMetadata @ 146b55ed0

void __cdecl
FJsonInternationalizationMetaDataSerializer::DeserializeMetadata
          (GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
           param_1,TSharedPtr<FLocMetadataObject,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FLocMetadataValue,1> *pTVar3;
  TSharedPtr<FLocMetadataObject,1> *pTVar4;
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  TSharedPtr<FLocMetadataValue,1> local_18;
  
  pTVar3 = JsonValueToLocMetaDataValue
                     (&local_18,
                      (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                      ((param_1.value_)->data_).n);
  if (pTVar3->Object == (FLocMetadataValue *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pTVar4 = (TSharedPtr<FLocMetadataObject,1> *)
           (**(code **)((longlong)*pTVar3->Object + 0x28))(pTVar3->Object,local_28);
  if (param_2 != pTVar4) {
    param_2->Object = pTVar4->Object;
    pTVar4->Object = (FLocMetadataObject *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&param_2->SharedReferenceCount,&pTVar4->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// MetadataToString @ 146b80af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
FJsonInternationalizationMetaDataSerializer::MetadataToString
          (FString *__return_storage_ptr__,TSharedPtr<FLocMetadataObject,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FAllocatorImpl *pFVar3;
  bool bVar4;
  FString *pFVar5;
  TSharedRef<FLocMetadataObject,1> *pTVar6;
  undefined1 auStack_c8 [32];
  FString local_a8;
  TSharedRef<FLocMetadataObject,1> local_98;
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1->Object != (FLocMetadataObject *)0x0) {
    local_88.n.i64 = (Number)0x0;
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
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    pFVar3 = local_78;
    pTVar6 = TSharedPtr<FLocMetadataObject,1>::ToSharedRef(param_1,&local_98);
    SerializeMetadata(pTVar6,(GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                              *)&local_88.s,pFVar3);
    if (local_88.f.flags != 3) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\ThirdParty\\RapidJSON\\1.1.0\\rapidjson\\document.h"
                         ,0x4b0,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    if (local_88.s.length != 0) {
      pFVar5 = UE::Json::WritePretty
                         (&local_a8,
                          (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                           *)&local_88.s);
      if (__return_storage_ptr__ != pFVar5) {
        pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      ::FString::ReplaceInline(__return_storage_ptr__,L"\t",L" ",IgnoreCase);
      ::FString::ReplaceInline(__return_storage_ptr__,L"\r\n",L" ",IgnoreCase);
      ::FString::ReplaceInline(__return_storage_ptr__,L"\n",L" ",IgnoreCase);
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
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// SerializeMetadata @ 146b885d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FJsonInternationalizationMetaDataSerializer::SerializeMetadata
          (TSharedRef<FLocMetadataObject,1> *param_1,
          GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *param_2,
          FAllocatorImpl *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  FLocMetadataObject *pFVar2;
  code *pcVar3;
  bool bVar4;
  TReferenceControllerBase<1> *pTVar5;
  TSharedRef<FLocMetadataValue,1> local_48;
  TOptional<rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>
  local_38;
  
  if ((param_2->data_).f.flags != 3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutJsonObj.IsObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\Serialization\\JsonInternationalizationMetadataSerializer.cpp"
                       ,0xa4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar5 = ::operator_new(0x28);
  if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    local_48.Object = (FLocMetadataValue *)___xmm_00000000000000000000000000000010;
    local_48.SharedReferenceCount.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar5->SharedReferenceCount = (atomic<int>)0x1;
    pTVar5->WeakReferenceCount = (atomic<int>)0x1;
    pTVar5->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLocMetadataValueObject___00_SharedPointerInternals__6B_
    ;
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      pTVar5[1]._padding_ = (longlong)&___7FLocMetadataValueObject__6B_;
      *(FLocMetadataObject **)&pTVar5[1].SharedReferenceCount = pFVar2;
      pTVar5[2]._padding_ = 0;
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      pTVar5[1]._padding_ = (longlong)&___7FLocMetadataValueObject__6B_;
      *(FLocMetadataObject **)&pTVar5[1].SharedReferenceCount = pFVar2;
      pTVar5[2]._padding_ = (longlong)pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_48.Object = (FLocMetadataValue *)(pTVar5 + 1);
    if ((TReferenceControllerBase<1> *)local_48.Object == (TReferenceControllerBase<1> *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    local_48.SharedReferenceCount.ReferenceController = pTVar5;
  }
  LocMetaDataValueToJsonValue(&local_38,&local_48,param_2,param_3);
  if (local_38.bIsSet != false) {
    rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
    ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>(&local_38.TypedValue)
    ;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

