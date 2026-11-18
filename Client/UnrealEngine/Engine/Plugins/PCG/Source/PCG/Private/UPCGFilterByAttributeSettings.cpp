// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b30fa0

UClass * __cdecl UPCGFilterByAttributeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterByAttributeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterByAttributeSettings",
               &Z_Registration_Info_UClass_UPCGFilterByAttributeSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterByAttributeSettings,0x690,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGFilterByAttributeSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterByAttributeSettings>,local_res8,
               UPCGFilterDataBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterByAttributeSettings.InnerSingleton;
}

// UPCGFilterByAttributeSettings @ 149b57340

UPCGFilterByAttributeSettings * __thiscall
UPCGFilterByAttributeSettings::UPCGFilterByAttributeSettings
          (UPCGFilterByAttributeSettings *this,FVTableHelper *param_1)

{
  FName FVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGFilterByAttributeSettings__6B_;
  (this->Attribute).Number = 0;
  this->FilterMode = FilterByExistence;
  FVar1 = PCGDataConstants::DefaultDomainName;
  (this->Attribute).ComparisonIndex = 0;
  this->Operator = Equal;
  this->bIgnoreProperties = false;
  this->FilterByValueMode = AnyOf;
  this->MetadataDomain = FVar1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->TargetAttribute);
  this->FilterOperator = Greater;
  (this->Threshold).bUseConstantThreshold = true;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->Threshold).ThresholdAttribute);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            (&(this->Threshold).AttributeTypes);
  *(undefined1 *)&this->MinThreshold = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&(this->MinThreshold).field_0x8);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)&(this->MinThreshold).field_0x50);
  (this->MinThreshold).bInclusive = false;
  *(undefined1 *)&this->MaxThreshold = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&(this->MaxThreshold).field_0x8);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)&(this->MaxThreshold).field_0x50);
  (this->MaxThreshold).bInclusive = false;
  return this;
}

// UPCGFilterByAttributeSettings @ 149b57410

UPCGFilterByAttributeSettings * __thiscall
UPCGFilterByAttributeSettings::UPCGFilterByAttributeSettings
          (UPCGFilterByAttributeSettings *this,FObjectInitializer *param_1)

{
  FName FVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGFilterByAttributeSettings__6B_;
  (this->Attribute).Number = 0;
  this->FilterMode = FilterByExistence;
  FVar1 = PCGDataConstants::DefaultDomainName;
  (this->Attribute).ComparisonIndex = 0;
  this->Operator = Equal;
  this->bIgnoreProperties = false;
  this->FilterByValueMode = AnyOf;
  this->MetadataDomain = FVar1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->TargetAttribute);
  this->FilterOperator = Greater;
  (this->Threshold).bUseConstantThreshold = true;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->Threshold).ThresholdAttribute);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            (&(this->Threshold).AttributeTypes);
  *(undefined1 *)&this->MinThreshold = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&(this->MinThreshold).field_0x8);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)&(this->MinThreshold).field_0x50);
  (this->MinThreshold).bInclusive = false;
  *(undefined1 *)&this->MaxThreshold = 1;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&(this->MaxThreshold).field_0x8);
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            ((FPCGMetadataTypesConstantStruct *)&(this->MaxThreshold).field_0x50);
  (this->MaxThreshold).bInclusive = false;
  return this;
}

// ~UPCGFilterByAttributeSettings @ 149b59170

void __thiscall
UPCGFilterByAttributeSettings::~UPCGFilterByAttributeSettings(UPCGFilterByAttributeSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGFilterByAttributeSettings__6B_;
  FPCGFilterByAttributeThresholdSettings::~FPCGFilterByAttributeThresholdSettings
            ((FPCGFilterByAttributeThresholdSettings *)&this->MaxThreshold);
  FPCGFilterByAttributeThresholdSettings::~FPCGFilterByAttributeThresholdSettings
            ((FPCGFilterByAttributeThresholdSettings *)&this->MinThreshold);
  FPCGFilterByAttributeThresholdSettings::~FPCGFilterByAttributeThresholdSettings(&this->Threshold);
  DestructItems<FString,int>
            (*(FString **)&(this->TargetAttribute).field_0x28,
             *(int *)&(this->TargetAttribute).field_0x30);
  pvVar1 = *(void **)&(this->TargetAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7UPCGFilterDataBaseSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6b350

TSharedPtr<IPCGElement,1> * __thiscall
UPCGFilterByAttributeSettings::CreateElement
          (UPCGFilterByAttributeSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<IPCGElement,1> *pTVar4;
  
  pTVar3 = ::operator_new(0x18);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Object = (IPCGElement *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFPCGFilterByAttributeElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGFilterByAttributeElement__6B_;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<IPCGElement,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IPCGElement *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// GetAdditionalTitleInformation @ 149b8d110

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FString * __thiscall
UPCGFilterByAttributeSettings::GetAdditionalTitleInformation
          (UPCGFilterByAttributeSettings *this,FString *__return_storage_ptr__)

{
  FText *pFVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  FString *pFVar4;
  int *piVar5;
  undefined1 local_res8 [8];
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FText local_38;
  FTextFormat local_28;
  
  if (this->FilterMode == FilterByExistence) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&Subtitle,L"PCGFilterByAttributeElement",L"FilterByExistence",L"By existence");
      atexit(`UPCGFilterByAttributeSettings::GetAdditionalTitleInformation'::__l5::
             _dynamic_atexit_destructor_for__Subtitle__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar1 = FText::FromName(&local_38,&this->Attribute);
    local_78.TextData.Reference = Subtitle.TextData.Reference;
    if (Subtitle.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*Subtitle.TextData.Reference + 8))
                (Subtitle.TextData.Reference,local_res8);
    }
    local_78.Flags = Subtitle.Flags;
    pFVar2 = FText::AsCultureInvariant(&local_58,L"{0}: {1}");
    pFVar3 = FTextFormat::FTextFormat((FTextFormat *)&local_48,pFVar2,Default);
    pFVar1 = FText::Format<FText,FText>(&local_68,pFVar3,&local_78,pFVar1);
    pFVar4 = FText::ToString(pFVar1);
    ::FString::FString(__return_storage_ptr__,pFVar4);
    local_38.TextData.Reference = local_58.TextData.Reference;
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      local_38.TextData.Reference = local_58.TextData.Reference;
    }
  }
  else {
    if (1 < this->FilterMode - FilterByValue) {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
      return __return_storage_ptr__;
    }
    piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar5 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&SubtitleValue,L"PCGFilterByAttributeElement",L"FilterByValue",L"By value");
      atexit(`UPCGFilterByAttributeSettings::GetAdditionalTitleInformation'::__l10::
             _dynamic_atexit_destructor_for__SubtitleValue__);
      _Init_thread_footer(&::_TSS1);
    }
    pFVar1 = &SubtitleValueRange;
    if ((*piVar5 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      FText::AsLocalizable_Advanced_LocText
                (&SubtitleValueRange,L"PCGFilterByAttributeElement",L"FilterByValueRange",
                 L"By value range");
      atexit(`UPCGFilterByAttributeSettings::GetAdditionalTitleInformation'::__l10::
             _dynamic_atexit_destructor_for__SubtitleValueRange__);
      _Init_thread_footer(&::_TSS2);
    }
    if (this->FilterMode == FilterByValue) {
      pFVar1 = &SubtitleValue;
    }
    pFVar4 = FPCGAttributePropertySelector::ToString
                       ((FPCGAttributePropertySelector *)&this->TargetAttribute,(FString *)&local_58
                        ,false);
    FText::FromString(&local_68,pFVar4);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_58.TextData.Reference);
    }
    local_78.TextData.Reference = (pFVar1->TextData).Reference;
    if (local_78.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_78.TextData.Reference + 8))
                (local_78.TextData.Reference,local_res8);
    }
    local_78.Flags = pFVar1->Flags;
    pFVar1 = FText::AsCultureInvariant(&local_38,L"{0}: {1}");
    pFVar3 = FTextFormat::FTextFormat(&local_28,pFVar1,Default);
    pFVar1 = FText::Format<FText,FText>(&local_48,pFVar3,&local_78,&local_68);
    pFVar4 = FText::ToString(pFVar1);
    ::FString::FString(__return_storage_ptr__,pFVar4);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b91040

UClass * __cdecl UPCGFilterByAttributeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGFilterByAttributeSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGFilterByAttributeSettings",
               &Z_Registration_Info_UClass_UPCGFilterByAttributeSettings.InnerSingleton,
               StaticRegisterNativesUPCGFilterByAttributeSettings,0x690,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGFilterByAttributeSettings>,
               InternalVTableHelperCtorCaller<UPCGFilterByAttributeSettings>,local_res8,
               UPCGFilterDataBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGFilterByAttributeSettings.InnerSingleton;
}

// InputPinProperties @ 149b92aa0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGFilterByAttributeSettings::InputPinProperties
          (UPCGFilterByAttributeSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FName *pFVar6;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar2 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x830,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar3 = FText::GetEmpty();
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if (this->FilterMode == FilterByValue) {
    if ((this->Threshold).bUseConstantThreshold != false) {
      return __return_storage_ptr__;
    }
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar5 = (FPCGPinProperties *)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    pFVar6 = &PCGAttributeFilterConstants::FilterLabel;
  }
  else {
    if (this->FilterMode != FilterByValueRange) {
      return __return_storage_ptr__;
    }
    if (*(char *)&this->MinThreshold == '\0') {
      iVar2 = __return_storage_ptr__->ArrayNum;
      if (iVar2 == __return_storage_ptr__->ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar2 + 1;
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar3 = FText::GetEmpty();
      pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
      pFVar5 = FPCGPinProperties::FPCGPinProperties
                         ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                          &PCGAttributeFilterConstants::FilterMinLabel,pFVar4,true,true,pFVar3);
      pFVar5->PinStatus = Required;
    }
    if (*(char *)&this->MaxThreshold != '\0') {
      return __return_storage_ptr__;
    }
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar5 = (FPCGPinProperties *)
             ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Any);
    pFVar6 = &PCGAttributeFilterConstants::FilterMaxLabel;
  }
  pFVar5 = FPCGPinProperties::FPCGPinProperties(pFVar5,pFVar6,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGFilterByAttributeSettings @ 149b98540

void __cdecl UPCGFilterByAttributeSettings::StaticRegisterNativesUPCGFilterByAttributeSettings(void)

{
  return;
}

