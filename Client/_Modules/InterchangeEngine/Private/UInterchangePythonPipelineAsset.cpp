// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 9

// StaticClass @ 14e4cb930

UClass * __cdecl UInterchangePythonPipelineAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePythonPipelineAsset",
               &Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.InnerSingleton,
               StaticRegisterNativesUInterchangePythonPipelineAsset,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePythonPipelineAsset>,
               InternalVTableHelperCtorCaller<UInterchangePythonPipelineAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.InnerSingleton;
}

// UInterchangePythonPipelineAsset @ 14e4d9060

UInterchangePythonPipelineAsset * __thiscall
UInterchangePythonPipelineAsset::UInterchangePythonPipelineAsset
          (UInterchangePythonPipelineAsset *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->PythonClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UInterchangePythonPipelineAsset__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PythonClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PythonClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PythonClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PythonClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->GeneratedPipeline).field0_0x0.DebugPtr = (UInterchangePythonPipelineBase *)0x0;
  (this->JsonDefaultProperties).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JsonDefaultProperties).Data.ArrayNum = 0;
  (this->JsonDefaultProperties).Data.ArrayMax = 0;
  return this;
}

// UInterchangePythonPipelineAsset @ 14e4d90c0

UInterchangePythonPipelineAsset * __thiscall
UInterchangePythonPipelineAsset::UInterchangePythonPipelineAsset
          (UInterchangePythonPipelineAsset *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->PythonClass).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UInterchangePythonPipelineAsset__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->PythonClass).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->PythonClass).SoftObjectPtr = 0;
  *(undefined8 *)&(this->PythonClass).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->PythonClass).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->GeneratedPipeline).field0_0x0.DebugPtr = (UInterchangePythonPipelineBase *)0x0;
  (this->JsonDefaultProperties).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->JsonDefaultProperties).Data.ArrayNum = 0;
  (this->JsonDefaultProperties).Data.ArrayMax = 0;
  return this;
}

// ~UInterchangePythonPipelineAsset @ 14e4db220

void __thiscall
UInterchangePythonPipelineAsset::~UInterchangePythonPipelineAsset
          (UInterchangePythonPipelineAsset *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UInterchangePythonPipelineAsset__6B_;
  pFVar1 = (this->JsonDefaultProperties).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->PythonClass).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GeneratePipeline @ 14e4f4e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UInterchangePythonPipelineAsset::GeneratePipeline(UInterchangePythonPipelineAsset *this)

{
  TReferenceControllerBase<1> *pTVar1;
  TJsonStringReader<wchar_t> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UInterchangePythonPipelineBase *pUVar8;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar9;
  TSharedPtr<FJsonObject,1> *pTVar10;
  longlong *plVar11;
  undefined1 auStackY_188 [32];
  StackState local_140;
  TSharedRef<FJsonObject,1> local_108;
  TSharedPtr<FJsonObject,1> local_f8;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_d8;
  TStringView<wchar_t> local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  (this->GeneratedPipeline).field0_0x0.DebugPtr = (UInterchangePythonPipelineBase *)0x0;
  pUVar6 = TSoftClassPtr<UInterchangePythonPipelineBase>::LoadSynchronous(&this->PythonClass);
  if (pUVar6 != (UClass *)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar7 = UInterchangePythonPipelineBase::StaticClass();
    CheckIsClassChildOf_Internal(pUVar7,pUVar6);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar6);
    local_b8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_b8._56_8_ = (UPackage *)0x0;
    local_b8._16_4_ = 0;
    local_b8._20_4_ = 0;
    local_b8._24_4_ = RF_NoFlags;
    local_b8._40_8_ = (UObject *)0x0;
    local_b8[0x20] = false;
    local_b8._8_8_ = this;
    pUVar8 = (UInterchangePythonPipelineBase *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar11 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar11 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UInterchangePythonPipelineBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->GeneratedPipeline).field0_0x0.DebugPtr = pUVar8;
    local_f8.Object = (FJsonObject *)0x0;
    local_f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar9 = TJsonStringReader<wchar_t>::Create(&local_d8,&this->JsonDefaultProperties);
    pTVar1 = (pTVar9->SharedReferenceCount).ReferenceController;
    pTVar2 = pTVar9->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.SharedReferenceCount.ReferenceController);
    local_140.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Identifier.Data.ArrayNum = 0;
    local_140.Identifier.Data.ArrayMax = 0;
    local_140.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_140.Array.ArrayNum = 0;
    local_140.Array.ArrayMax = 0;
    local_140.Object.Object = (FJsonObject *)0x0;
    local_140.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    bVar5 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      ((TJsonReader<wchar_t> *)pTVar2,&local_140,None);
    if (bVar5) {
      bVar5 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_140,&local_f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_140.Array.AllocatorInstance.Data,
                 local_140.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_140.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_140.Array.AllocatorInstance.Data);
      }
      if (local_140.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Identifier.Data.AllocatorInstance.Data);
      }
      if (bVar5) {
        if ((local_f8.Object == (FJsonObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_e8 = L"GeneratedPipeline";
        uStack_e0 = 0x11;
        local_c8._12_4_ = uStack_dc;
        local_c8.Size = 0x11;
        local_c8.DataPtr = L"GeneratedPipeline";
        pTVar10 = FJsonObject::GetObjectField(local_f8.Object,&local_c8);
        pTVar3 = (pTVar10->SharedReferenceCount).ReferenceController;
        local_108.Object = pTVar10->Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        pUVar8 = (this->GeneratedPipeline).field0_0x0.DebugPtr;
        if ((local_108.Object == (FJsonObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_108.SharedReferenceCount.ReferenceController = pTVar3;
        if ((local_108.Object == (FJsonObject *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FJsonObjectConverter::JsonObjectToUStruct
                  (&local_108,(UStruct *)pUVar6,pUVar8,0,0,false,(FText *)0x0,
                   (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                    *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_140.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_140.Array.AllocatorInstance.Data,
                 local_140.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_140.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_140.Array.AllocatorInstance.Data);
      }
      if (local_140.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Identifier.Data.AllocatorInstance.Data);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GetPrivateStaticClass @ 14e4f8350

UClass * __cdecl UInterchangePythonPipelineAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeEngine",L"InterchangePythonPipelineAsset",
               &Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.InnerSingleton,
               StaticRegisterNativesUInterchangePythonPipelineAsset,0x68,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UInterchangePythonPipelineAsset>,
               InternalVTableHelperCtorCaller<UInterchangePythonPipelineAsset>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangePythonPipelineAsset.InnerSingleton;
}

// PostLoad @ 14e4ff9f0

void __thiscall UInterchangePythonPipelineAsset::PostLoad(UInterchangePythonPipelineAsset *this)

{
  UPackage *pUVar1;
  
  pUVar1 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
  if ((atomic<unsigned_int>)((uint)pUVar1->PackageFlagsPrivate | 0x40) !=
      pUVar1->PackageFlagsPrivate) {
    LOCK();
    pUVar1->PackageFlagsPrivate = (atomic<unsigned_int>)((uint)pUVar1->PackageFlagsPrivate | 0x40);
    UNLOCK();
  }
  UObject::PostLoad((UObject *)this);
  GeneratePipeline(this);
  return;
}

// SetupFromPipeline @ 14e508870

void __thiscall
UInterchangePythonPipelineAsset::SetupFromPipeline
          (UInterchangePythonPipelineAsset *this,UInterchangePythonPipelineBase *param_1,
          bool param_2)

{
  FSharedReferencer<1> FVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  FJsonValueObject *this_00;
  UObject *pUVar5;
  atomic<int> *paVar6;
  int iVar7;
  TRawPtrProxy<FJsonValueObject> local_res10;
  FString local_88;
  FString local_78;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_68;
  TSharedRef<FJsonObject,1> local_58;
  TSharedPtr<FJsonObject,1> local_48 [2];
  
  if (param_1 != (UInterchangePythonPipelineBase *)0x0) {
    local_res10.Object = *(FJsonValueObject **)&param_1->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       ((UObject *)local_res10.Object != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res10.Object);
    }
    FSoftObjectPtr::operator=(&(this->PythonClass).SoftObjectPtr,(FObjectPtr)&local_res10);
    ::FString::Empty(&this->JsonDefaultProperties);
    pUVar3 = TSoftClassPtr<UInterchangePythonPipelineBase>::LoadSynchronous(&this->PythonClass);
    if (pUVar3 != (UClass *)0x0) {
      pUVar4 = ::operator_new(0x50);
      pUVar5 = (UObject *)0x0;
      local_res10.Object = (FJsonValueObject *)pUVar5;
      if (pUVar4 != (UObject *)0x0) {
        *(undefined8 *)pUVar4 = 0;
        *(undefined8 *)&pUVar4->field_0x8 = 0;
        *(undefined8 *)&pUVar4->field_0x20 = 0;
        *(undefined4 *)(pUVar4 + 1) = 0;
        *(undefined4 *)&pUVar4[1].field_0x4 = 0x80;
        *(undefined4 *)&pUVar4[1].field_0x8 = 0xffffffff;
        *(undefined4 *)&pUVar4[1].field_0xc = 0;
        *(undefined8 *)&pUVar4[1].field_0x18 = 0;
        *(undefined4 *)&pUVar4[1].field_0x20 = 0;
        local_res10.Object = (FJsonValueObject *)pUVar4;
      }
      TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
                (&local_58,(TRawPtrProxy<FJsonObject> *)&local_res10);
      pUVar4 = ::operator_new(0x50);
      local_res10.Object = (FJsonValueObject *)pUVar5;
      if (pUVar4 != (UObject *)0x0) {
        *(undefined8 *)pUVar4 = 0;
        *(undefined8 *)&pUVar4->field_0x8 = 0;
        *(undefined8 *)&pUVar4->field_0x20 = 0;
        *(undefined4 *)(pUVar4 + 1) = 0;
        *(undefined4 *)&pUVar4[1].field_0x4 = 0x80;
        *(undefined4 *)&pUVar4[1].field_0x8 = 0xffffffff;
        *(undefined4 *)&pUVar4[1].field_0xc = 0;
        *(undefined8 *)&pUVar4[1].field_0x18 = 0;
        *(undefined4 *)&pUVar4[1].field_0x20 = 0;
        local_res10.Object = (FJsonValueObject *)pUVar4;
      }
      TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>
                ((TSharedRef<FJsonObject,1> *)&local_68,(TRawPtrProxy<FJsonObject> *)&local_res10);
      FVar1.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        paVar6 = (atomic<int> *)&DAT_00000008;
      }
      else {
        paVar6 = &(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        LOCK();
        *paVar6 = (atomic<int>)((int)*paVar6 + 1);
        UNLOCK();
      }
      bVar2 = FJsonObjectConverter::UStructToJsonObject
                        ((UStruct *)pUVar3,param_1,(TSharedRef<FJsonObject,1> *)&local_68,0,0,
                         (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                          *)0x0,None);
      if (bVar2) {
        this_00 = ::operator_new(0x20);
        if (this_00 != (FJsonValueObject *)0x0) {
          local_48[0].Object = (FJsonObject *)local_68.Object;
          local_48[0].SharedReferenceCount.ReferenceController = FVar1.ReferenceController;
          if (FVar1.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            *paVar6 = (atomic<int>)((int)*paVar6 + 1);
            UNLOCK();
          }
          pUVar5 = (UObject *)FJsonValueObject::FJsonValueObject(this_00,local_48);
        }
        local_res10.Object = (FJsonValueObject *)pUVar5;
        TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>
                  ((TSharedPtr<FJsonValue,1> *)&local_68,&local_res10);
        ::FString::FString(&local_78,L"GeneratedPipeline");
        FJsonObject::SetField(local_58.Object,&local_78,(TSharedPtr<FJsonValue,1> *)&local_68);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
      }
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_68,&local_88,0);
      local_48[0].Object = local_58.Object;
      local_48[0].SharedReferenceCount.ReferenceController =
           local_58.SharedReferenceCount.ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
              Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>(local_48,&local_68,true);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
      if (bVar2) {
        iVar7 = local_88.Data.ArrayNum + -1;
        if (local_88.Data.ArrayNum == 0) {
          iVar7 = 0;
        }
        ::FString::AssignRange
                  (&this->JsonDefaultProperties,(wchar_t *)local_88.Data.AllocatorInstance.Data,
                   iVar7);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar1.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_58.SharedReferenceCount.ReferenceController);
    }
    if (param_2) {
      GeneratePipeline(this);
    }
  }
  return;
}

// StaticRegisterNativesUInterchangePythonPipelineAsset @ 14e50abf0

void __cdecl
UInterchangePythonPipelineAsset::StaticRegisterNativesUInterchangePythonPipelineAsset(void)

{
  return;
}

