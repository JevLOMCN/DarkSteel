// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// HasDynamicPins @ 149727970

bool __thiscall UPCGCopyAttributesSettings::HasDynamicPins(UPCGCopyAttributesSettings *this)

{
  return true;
}

// StaticClass @ 149727f30

UClass * __cdecl UPCGCopyAttributesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyAttributesSettings.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyAttributesSettings",
               &Z_Registration_Info_UClass_UPCGCopyAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGCopyAttributesSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGCopyAttributesSettings>,aFStackX_8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyAttributesSettings.InnerSingleton;
}

// UPCGCopyAttributesSettings @ 149b557f0

UPCGCopyAttributesSettings * __thiscall
UPCGCopyAttributesSettings::UPCGCopyAttributesSettings
          (UPCGCopyAttributesSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGCopyAttributesSettings__6B_;
  this->Operation = CopyEachSourceToEachTargetRespectively;
  this->bCopyAllAttributes = false;
  this->bCopyAllDomains = false;
  *(undefined8 *)&this->MetadataDomainsMapping = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x20 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x48 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  return this;
}

// UPCGCopyAttributesSettings @ 149b55880

UPCGCopyAttributesSettings * __thiscall
UPCGCopyAttributesSettings::UPCGCopyAttributesSettings(UPCGCopyAttributesSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  FName FVar3;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  this->_padding_ = (longlong)&___7UPCGCopyAttributesSettings__6B_;
  *(undefined8 *)&this->MetadataDomainsMapping = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x8 = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x20 = 0;
  this->Operation = CopyEachSourceToEachTargetRespectively;
  this->bCopyAllAttributes = false;
  this->bCopyAllDomains = false;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x28 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x34 = 0;
  *(undefined8 *)&(this->MetadataDomainsMapping).field_0x40 = 0;
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x48 = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)&this->InputSource,
               PCGMetadataAttributeConstants::LastAttributeName,true);
    FVar3 = PCGMetadataAttributeConstants::SourceAttributeName;
  }
  else {
    FPCGAttributePropertySelector::SetPointProperty
              ((FPCGAttributePropertySelector *)&this->InputSource,Density,true);
  }
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->OutputTarget,FVar3,true);
  return this;
}

// ~UPCGCopyAttributesSettings @ 149b58b30

void __thiscall
UPCGCopyAttributesSettings::~UPCGCopyAttributesSettings(UPCGCopyAttributesSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGCopyAttributesSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->OutputTarget).field_0x28,*(int *)&(this->OutputTarget).field_0x30)
  ;
  pvVar1 = *(void **)&(this->OutputTarget).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->InputSource).field_0x28,*(int *)&(this->InputSource).field_0x30);
  pvVar1 = *(void **)&(this->InputSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->MetadataDomainsMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MetadataDomainsMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MetadataDomainsMapping);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6a150

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCopyAttributesSettings::CreateElement
          (UPCGCopyAttributesSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGCopyAttributesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCopyAttributesElement__6B_;
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

// GetAdditionalTitleInformation @ 149b8c740

FString * __thiscall
UPCGCopyAttributesSettings::GetAdditionalTitleInformation
          (UPCGCopyAttributesSettings *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FText local_38;
  FText local_28;
  FString local_18;
  
  pFVar1 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)&this->OutputTarget,&local_18,false);
  FText::FromString(&local_28,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_28);
  pFVar1 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)&this->InputSource,&local_18,false);
  FText::FromString(&local_38,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  FText::ToString(&local_38);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s -> %s");
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b8fcc0

UClass * __cdecl UPCGCopyAttributesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCopyAttributesSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCopyAttributesSettings",
               &Z_Registration_Info_UClass_UPCGCopyAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGCopyAttributesSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCopyAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGCopyAttributesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCopyAttributesSettings.InnerSingleton;
}

// InputPinProperties @ 149b91f90

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCopyAttributesSettings::InputPinProperties
          (UPCGCopyAttributesSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
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
                      &PCGCopyPointsConstants::TargetPointsLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
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
                      &PCGCopyPointsConstants::SourcePointsLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93d00

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCopyAttributesSettings::OutputPinProperties
          (UPCGCopyAttributesSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
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
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGCopyAttributesSettings @ 149b98370

void __cdecl UPCGCopyAttributesSettings::StaticRegisterNativesUPCGCopyAttributesSettings(void)

{
  return;
}

