// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 6

// Read @ 141e2d850

bool __thiscall
FPluginDisallowedDescriptor::Read
          (FPluginDisallowedDescriptor *this,FJsonObject *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FPluginDisallowedDescriptor>
                    (param_1,this,param_2);
  return bVar1;
}

// ReadArray @ 141e32840

bool __cdecl
FPluginDisallowedDescriptor::ReadArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *local_res10;
  TOptional<FText>_u_0 local_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  local_88;
  Data local_78;
  void *local_60;
  void *local_50;
  void *local_48;
  char local_18;
  
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&local_78.s,param_1);
  if (local_18 != '\0') {
    UE::Json::GetRootObject
              (&local_88,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&local_78.s);
    if (local_88.bIsSet != false) {
      local_res10 = local_88.TypedValue.value_;
      UE::Projects::Private::ReadArray<FPluginDisallowedDescriptor>
                ((TOptional<FText> *)&local_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_res10,param_2,param_3);
      if (local_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&local_98.TypedValue);
        }
        if (local_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)local_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (local_18 == '\0') {
        return bVar1;
      }
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
      return bVar1;
    }
    if (local_18 != '\0') {
      if (local_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &local_78.s);
        local_78.n.i64 = (Number)0x0;
        local_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(local_60,1);
      free(local_48);
      ::operator_delete(local_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &local_78.s);
    }
  }
  return false;
}

// UpdateArray @ 141e3f010

void __cdecl
FPluginDisallowedDescriptor::UpdateArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  FDestructionSentinel local_a8;
  FDelegateAllocation *local_90;
  undefined1 local_88 [8];
  FDelegateAllocation local_80;
  undefined1 local_70 [8];
  FDelegateAllocation local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  TDelegate<void___cdecl(TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
  local_40;
  FString local_28;
  
  local_40._16_8_ = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_88 = (undefined1  [8])0x0;
  local_80.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_80.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_88,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_80;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_80);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFPluginDisallowedDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = PluginDisallowedDescriptor::UpdatePluginRefJsonObject;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_70 = (undefined1  [8])0x0;
  local_68.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_68.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_70,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_68;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_68);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_NAEBVFJsonObject__AEAVFString___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = PluginDisallowedDescriptor::TryGetPluginRefJsonObjectKey;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_a8);
  local_90 = &local_50;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFPluginDisallowedDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = PluginDisallowedDescriptor::GetPluginRefKey;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  ::FString::FString(&local_28,param_2);
  FJsonObjectArrayUpdater<FPluginDisallowedDescriptor,FString>::Execute
            (param_1,&local_28,param_3,
             (TDelegate<FString___cdecl(FPluginDisallowedDescriptor_const_&),FDefaultDelegateUserPolicy>
              *)local_58,
             (TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *)
             local_70,(TDelegate<void___cdecl(FPluginDisallowedDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                       *)local_88,&local_40);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateJson @ 141e42f60

void __thiscall
FPluginDisallowedDescriptor::UpdateJson(FPluginDisallowedDescriptor *this,FJsonObject *param_1)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"Name");
  FJsonObject::SetStringField(param_1,&local_18,&this->Name);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Write @ 141e45430

void __thiscall
FPluginDisallowedDescriptor::Write
          (FPluginDisallowedDescriptor *this,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FJsonObject *this_00;
  code *pcVar2;
  bool bVar3;
  TSharedRef<FJsonObject,1> *pTVar4;
  FString local_38;
  TSharedPtr<FJsonObject,1> local_28;
  TSharedRef<FJsonObject,1> local_18;
  
  pTVar4 = MakeShared<FJsonObject,1>(&local_18);
  pTVar1 = (pTVar4->SharedReferenceCount).ReferenceController;
  this_00 = pTVar4->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ::FString::FString(&local_38,L"Name");
  FJsonObject::SetStringField(this_00,&local_38,&this->Name);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this_00 == (FJsonObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = this_00;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_28,param_1,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// WriteArray @ 141e46b10

void __cdecl
FPluginDisallowedDescriptor::WriteArray
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1,wchar_t *param_2,
          TArray<FPluginDisallowedDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FJsonObject *this;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FJsonObject,1> *pTVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  wchar_t *local_res10;
  undefined1 local_res18 [8];
  FString local_58;
  TSharedPtr<FJsonObject,1> local_48;
  TSharedRef<FJsonObject,1> local_38;
  
  if (0 < param_3->ArrayNum) {
    local_res10 = param_2;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_*_&>
              (param_1,&local_res10);
    iVar1 = param_3->ArrayNum;
    pFVar7 = (param_3->AllocatorInstance).Data;
    pFVar6 = pFVar7 + (longlong)iVar1 * 0x10;
    while( true ) {
      if (param_3->ArrayNum != iVar1) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FPluginDisallowedDescriptor_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (pFVar7 == pFVar6) break;
      pTVar5 = MakeShared<FJsonObject,1>(&local_38);
      pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
      this = pTVar5->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      if (this == (FJsonObject *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      ::FString::FString(&local_58,L"Name");
      FJsonObject::SetStringField(this,&local_58,(FString *)pFVar7);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (this == (FJsonObject *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (this == (FJsonObject *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48.Object = this;
      local_48.SharedReferenceCount.ReferenceController = pTVar2;
      TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
      Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_48,param_1,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pFVar7 = pFVar7 + 0x10;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_1);
  }
  return;
}

