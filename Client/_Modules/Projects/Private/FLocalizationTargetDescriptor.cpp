// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 11

// FLocalizationTargetDescriptor @ 141e0cb40

FLocalizationTargetDescriptor * __thiscall
FLocalizationTargetDescriptor::FLocalizationTargetDescriptor
          (FLocalizationTargetDescriptor *this,FString *param_1,Type param_2,Type param_3)

{
  FScriptContainerElement *pFVar1;
  
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  this->LoadingPolicy = param_2;
  this->ConfigGenerationPolicy = param_3;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// Read @ 141e2d3a0

bool __thiscall
FLocalizationTargetDescriptor::Read
          (FLocalizationTargetDescriptor *this,FJsonObject *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FLocalizationTargetDescriptor>
                    (param_1,this,param_2);
  return bVar1;
}

// Read @ 141e2d3c0

bool __thiscall
FLocalizationTargetDescriptor::Read
          (FLocalizationTargetDescriptor *this,FJsonObject *param_1,FText *param_2)

{
  bool bVar1;
  
  bVar1 = UE::Projects::Private::ReadFromDefaultJson<FLocalizationTargetDescriptor>
                    (param_1,this,param_2);
  return bVar1;
}

// ReadArray @ 141e32800

bool __cdecl
FLocalizationTargetDescriptor::ReadArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FLocalizationTargetDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGStackX_10;
  TOptional<FText>_u_0 TStack_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  TStack_88;
  Data DStack_78;
  void *pvStack_60;
  void *pvStack_50;
  void *pvStack_48;
  char cStack_18;
  
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&DStack_78.s,param_1);
  if (cStack_18 != '\0') {
    UE::Json::GetRootObject
              (&TStack_88,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&DStack_78.s);
    if (TStack_88.bIsSet != false) {
      pGStackX_10 = TStack_88.TypedValue.value_;
      UE::Projects::Private::ReadArray<FLocalizationTargetDescriptor>
                ((TOptional<FText> *)&TStack_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &pGStackX_10,param_2,param_3);
      if (TStack_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&TStack_98.TypedValue);
        }
        if (TStack_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)TStack_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (cStack_18 == '\0') {
        return bVar1;
      }
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
      return bVar1;
    }
    if (cStack_18 != '\0') {
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
    }
  }
  return false;
}

// ReadArray @ 141e32810

bool __cdecl
FLocalizationTargetDescriptor::ReadArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FLocalizationTargetDescriptor,TSizedDefaultAllocator<32>_> *param_3,FText *param_4)

{
  bool bVar1;
  GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *pGStackX_10;
  TOptional<FText>_u_0 TStack_98;
  TOptional<rapidjson::GenericObject<1,rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>_>_>
  TStack_88;
  Data DStack_78;
  void *pvStack_60;
  void *pvStack_50;
  void *pvStack_48;
  char cStack_18;
  
  UE::Json::ConvertSharedJsonToRapidJsonDocument
            ((TOptional<rapidjson::GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>_>
              *)&DStack_78.s,param_1);
  if (cStack_18 != '\0') {
    UE::Json::GetRootObject
              (&TStack_88,
               (GenericDocument<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl,rapidjson::CrtAllocator>
                *)&DStack_78.s);
    if (TStack_88.bIsSet != false) {
      pGStackX_10 = TStack_88.TypedValue.value_;
      UE::Projects::Private::ReadArray<FLocalizationTargetDescriptor>
                ((TOptional<FText> *)&TStack_98.TypedValue,
                 (GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &pGStackX_10,param_2,param_3);
      if (TStack_98.TypedValue.TextData.Reference == (ITextData *)0x0) {
        bVar1 = true;
      }
      else {
        if (param_4 != (FText *)0x0) {
          FText::operator=(param_4,&TStack_98.TypedValue);
        }
        if (TStack_98.TypedValue.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)TStack_98.TypedValue.TextData.Reference + 0x10))();
        }
        bVar1 = false;
      }
      if (cStack_18 == '\0') {
        return bVar1;
      }
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
      return bVar1;
    }
    if (cStack_18 != '\0') {
      if (pvStack_60 != (void *)0x0) {
        rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
        ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                  ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                   &DStack_78.s);
        DStack_78.n.i64 = (Number)0x0;
        DStack_78.s.str = (wchar_t *)0x0;
      }
      ::operator_delete(pvStack_60,1);
      free(pvStack_48);
      ::operator_delete(pvStack_50,1);
      rapidjson::GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>::
      ~GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl>
                ((GenericValue<rapidjson::UTF16<wchar_t>,UE::Json::Private::FAllocatorImpl> *)
                 &DStack_78.s);
    }
  }
  return false;
}

// ShouldLoadLocalizationTarget @ 141e37920

bool __thiscall
FLocalizationTargetDescriptor::ShouldLoadLocalizationTarget(FLocalizationTargetDescriptor *this)

{
  FLocalizationTargetDescriptor *local_res8 [4];
  
  switch(this->LoadingPolicy) {
  case Never:
  case Editor:
  case PropertyNames:
  case ToolTips:
    break;
  case Always:
  case Game:
    return true;
  default:
    local_res8[0] = this;
    `FLocalizationTargetDescriptor::ShouldLoadLocalizationTarget'::__l4::<lambda_1>::operator()
              (local_res8);
  }
  return false;
}

// UpdateArray @ 141e3ec10

void __cdecl
FLocalizationTargetDescriptor::UpdateArray
          (FJsonObject *param_1,wchar_t *param_2,
          TArray<FLocalizationTargetDescriptor,TSizedDefaultAllocator<32>_> *param_3)

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
              ___7__TCommonDelegateInstanceState___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBUFLocalizationTargetDescriptor__AEAVFJsonObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = LocalizationDescriptor::UpdateDescriptorJsonObject;
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
    puVar1[3] = LocalizationDescriptor::TryGetDescriptorJsonObjectKey;
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
              ___7__TCommonDelegateInstanceState___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6A_AVFString__AEBUFLocalizationTargetDescriptor___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = LocalizationDescriptor::GetDescriptorKey;
  }
  if (local_a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
  }
  ::FString::FString(&local_28,param_2);
  FJsonObjectArrayUpdater<FLocalizationTargetDescriptor,FString>::Execute
            (param_1,&local_28,param_3,
             (TDelegate<FString___cdecl(FLocalizationTargetDescriptor_const_&),FDefaultDelegateUserPolicy>
              *)local_58,
             (TDelegate<bool___cdecl(FJsonObject_const_&,FString_&),FDefaultDelegateUserPolicy> *)
             local_70,(TDelegate<void___cdecl(FLocalizationTargetDescriptor_const_&,FJsonObject_&),FDefaultDelegateUserPolicy>
                       *)local_88,&local_40);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// UpdateJson @ 141e3faa0

void __thiscall
FLocalizationTargetDescriptor::UpdateJson(FLocalizationTargetDescriptor *this,FJsonObject *param_1)

{
  wchar_t *pwVar1;
  FString *pFVar2;
  Type local_res8 [2];
  Type *local_res18;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_28,L"Name");
  FJsonObject::SetStringField(param_1,&local_28,&this->Name);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pwVar1 = ELocalizationTargetDescriptorLoadingPolicy::ToString(this->LoadingPolicy);
  pFVar2 = ::FString::FString(&local_18,pwVar1);
  ::FString::FString(&local_28,L"LoadingPolicy");
  FJsonObject::SetStringField(param_1,&local_28,pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  local_res8[0] = this->ConfigGenerationPolicy;
  if (local_res8[0] == Never) {
    pwVar1 = L"Never";
  }
  else if (local_res8[0] == User) {
    pwVar1 = L"User";
  }
  else if (local_res8[0] == Auto) {
    pwVar1 = L"Auto";
  }
  else {
    local_res18 = local_res8;
    `ELocalizationConfigGenerationPolicy::ToString'::__l4::<lambda_1>::operator()(&local_res18);
    pwVar1 = (wchar_t *)0x0;
  }
  pFVar2 = ::FString::FString(&local_18,pwVar1);
  ::FString::FString(&local_28,L"ConfigGenerationPolicy");
  FJsonObject::SetStringField(param_1,&local_28,pFVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// Write @ 141e45090

void __thiscall
FLocalizationTargetDescriptor::Write
          (FLocalizationTargetDescriptor *this,
          TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1)

{
  TSharedRef<FJsonObject,1> local_18;
  
  MakeShared<FJsonObject,1>(&local_18);
  UpdateJson(this,local_18.Object);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
            ((TSharedPtr<FJsonObject,1> *)&local_18,param_1,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// WriteArray @ 141e46930

void __cdecl
FLocalizationTargetDescriptor::WriteArray
          (TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *param_1,wchar_t *param_2,
          TArray<FLocalizationTargetDescriptor,TSizedDefaultAllocator<32>_> *param_3)

{
  FLocalizationTargetDescriptor *pFVar1;
  int iVar2;
  FSharedReferencer<1> FVar3;
  FLocalizationTargetDescriptor *this;
  wchar_t *local_res10;
  undefined1 local_res18 [16];
  TSharedRef<FJsonObject,1> local_48;
  TSharedPtr<FJsonObject,1> local_38;
  
  if (0 < param_3->ArrayNum) {
    local_res10 = param_2;
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart<wchar_t_const_*_&>
              (param_1,&local_res10);
    iVar2 = param_3->ArrayNum;
    this = (FLocalizationTargetDescriptor *)(param_3->AllocatorInstance).Data;
    pFVar1 = this + iVar2;
    while( true ) {
      if (param_3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FLocalizationTargetDescriptor_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (this == pFVar1) break;
      MakeShared<FJsonObject,1>(&local_48);
      UpdateJson(this,local_48.Object);
      FVar3.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      local_38.Object = local_48.Object;
      local_38.SharedReferenceCount.ReferenceController =
           local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
      Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(&local_38,param_1,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
      this = this + 1;
    }
    TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd(param_1);
  }
  return;
}

// operator() @ 150481140

bool __thiscall
`FLocalizationTargetDescriptor::ShouldLoadLocalizationTarget'::__l4::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5437594661646499599>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5437594661646499599>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

