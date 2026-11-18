// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149b9bbf0

UClass * __cdecl UPCGPartitionByActorDataLayersSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPartitionByActorDataLayersSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPartitionByActorDataLayersSettings",
               &Z_Registration_Info_UClass_UPCGPartitionByActorDataLayersSettings.InnerSingleton,
               StaticRegisterNativesUPCGPartitionByActorDataLayersSettings,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPartitionByActorDataLayersSettings>,
               InternalVTableHelperCtorCaller<UPCGPartitionByActorDataLayersSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPartitionByActorDataLayersSettings.InnerSingleton;
}

// UPCGPartitionByActorDataLayersSettings @ 149be7520

UPCGPartitionByActorDataLayersSettings * __thiscall
UPCGPartitionByActorDataLayersSettings::UPCGPartitionByActorDataLayersSettings
          (UPCGPartitionByActorDataLayersSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->_padding_ = (longlong)&___7UPCGPartitionByActorDataLayersSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ActorReferenceAttribute);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->DataLayerReferenceAttribute);
  (this->IncludedDataLayers).bAsInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->IncludedDataLayers).Attribute);
  (this->IncludedDataLayers).DataLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludedDataLayers).DataLayers.ArrayNum = 0;
  (this->IncludedDataLayers).DataLayers.ArrayMax = 0;
  (this->ExcludedDataLayers).bAsInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->ExcludedDataLayers).Attribute);
  (this->ExcludedDataLayers).DataLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludedDataLayers).DataLayers.ArrayNum = 0;
  (this->ExcludedDataLayers).DataLayers.ArrayMax = 0;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->ActorReferenceAttribute,
             PCGPointDataConstants::ActorReferenceAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&(this->IncludedDataLayers).Attribute,
             PCGDataLayerHelpers::Constants::IncludedDataLayersAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&(this->ExcludedDataLayers).Attribute,
             PCGDataLayerHelpers::Constants::ExcludedDataLayersAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->DataLayerReferenceAttribute,
             PCGDataLayerHelpers::Constants::DataLayerReferenceAttribute,true);
  return this;
}

// UPCGPartitionByActorDataLayersSettings @ 149be7630

UPCGPartitionByActorDataLayersSettings * __thiscall
UPCGPartitionByActorDataLayersSettings::UPCGPartitionByActorDataLayersSettings
          (UPCGPartitionByActorDataLayersSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPartitionByActorDataLayersSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ActorReferenceAttribute);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->DataLayerReferenceAttribute);
  (this->IncludedDataLayers).bAsInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->IncludedDataLayers).Attribute);
  (this->IncludedDataLayers).DataLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IncludedDataLayers).DataLayers.ArrayNum = 0;
  (this->IncludedDataLayers).DataLayers.ArrayMax = 0;
  (this->ExcludedDataLayers).bAsInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->ExcludedDataLayers).Attribute);
  (this->ExcludedDataLayers).DataLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExcludedDataLayers).DataLayers.ArrayNum = 0;
  (this->ExcludedDataLayers).DataLayers.ArrayMax = 0;
  return this;
}

// ~UPCGPartitionByActorDataLayersSettings @ 149be9dc0

void __thiscall
UPCGPartitionByActorDataLayersSettings::~UPCGPartitionByActorDataLayersSettings
          (UPCGPartitionByActorDataLayersSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UPCGPartitionByActorDataLayersSettings__6B_;
  DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
            ((TSoftObjectPtr<UDataLayerAsset> *)
             (this->ExcludedDataLayers).DataLayers.AllocatorInstance.Data,
             (this->ExcludedDataLayers).DataLayers.ArrayNum);
  pFVar1 = (this->ExcludedDataLayers).DataLayers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ExcludedDataLayers).Attribute.field_0x28,
             *(int *)&(this->ExcludedDataLayers).Attribute.field_0x30);
  pvVar2 = *(void **)&(this->ExcludedDataLayers).Attribute.field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
            ((TSoftObjectPtr<UDataLayerAsset> *)
             (this->IncludedDataLayers).DataLayers.AllocatorInstance.Data,
             (this->IncludedDataLayers).DataLayers.ArrayNum);
  pFVar1 = (this->IncludedDataLayers).DataLayers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->IncludedDataLayers).Attribute.field_0x28,
             *(int *)&(this->IncludedDataLayers).Attribute.field_0x30);
  pvVar2 = *(void **)&(this->IncludedDataLayers).Attribute.field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->DataLayerReferenceAttribute).field_0x28,
             *(int *)&(this->DataLayerReferenceAttribute).field_0x30);
  pvVar2 = *(void **)&(this->DataLayerReferenceAttribute).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->ActorReferenceAttribute).field_0x28,
             *(int *)&(this->ActorReferenceAttribute).field_0x30);
  pvVar2 = *(void **)&(this->ActorReferenceAttribute).field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05860

TSharedPtr<IPCGElement,1> * __thiscall
UPCGPartitionByActorDataLayersSettings::CreateElement
          (UPCGPartitionByActorDataLayersSettings *this,
          TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGPartitionByActorDataLayersElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGPartitionByActorDataLayersElement__6B_;
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

// GetPrivateStaticClass @ 149c26150

UClass * __cdecl UPCGPartitionByActorDataLayersSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPartitionByActorDataLayersSettings.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGPartitionByActorDataLayersSettings",
               &Z_Registration_Info_UClass_UPCGPartitionByActorDataLayersSettings.InnerSingleton,
               StaticRegisterNativesUPCGPartitionByActorDataLayersSettings,0x1f8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPartitionByActorDataLayersSettings>,
               InternalVTableHelperCtorCaller<UPCGPartitionByActorDataLayersSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPartitionByActorDataLayersSettings.InnerSingleton;
}

// InputPinProperties @ 149c2c720

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPartitionByActorDataLayersSettings::InputPinProperties
          (UPCGPartitionByActorDataLayersSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if ((this->IncludedDataLayers).bAsInput != false) {
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGDataLayerHelpers::Constants::IncludedDataLayersAttribute,pFVar4,true,
                        true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  if ((this->ExcludedDataLayers).bAsInput != false) {
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGDataLayerHelpers::Constants::ExcludedDataLayersAttribute,pFVar4,true,
                        true,pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2e8e0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPartitionByActorDataLayersSettings::OutputPinProperties
          (UPCGPartitionByActorDataLayersSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Point);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPartitionByActorDataLayers::Constants::DataLayerPartitionsLabel,pFVar4,true,true,
             pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGPartitionByActorDataLayersSettings @ 149c35520

void __cdecl
UPCGPartitionByActorDataLayersSettings::StaticRegisterNativesUPCGPartitionByActorDataLayersSettings
          (void)

{
  return;
}

