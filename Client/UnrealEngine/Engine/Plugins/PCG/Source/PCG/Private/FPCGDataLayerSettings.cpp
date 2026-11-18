// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 4

// ~FPCGDataLayerSettings @ 149b58800

void __thiscall FPCGDataLayerSettings::~FPCGDataLayerSettings(FPCGDataLayerSettings *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<TSoftObjectPtr<UDataLayerAsset>,int>
            ((TSoftObjectPtr<UDataLayerAsset> *)
             (this->AddDataLayers).DataLayers.AllocatorInstance.Data,
             (this->AddDataLayers).DataLayers.ArrayNum);
  pFVar1 = (this->AddDataLayers).DataLayers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->AddDataLayers).Attribute.field_0x28,
             *(int *)&(this->AddDataLayers).Attribute.field_0x30);
  pvVar2 = *(void **)&(this->AddDataLayers).Attribute.field_0x28;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
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
    return;
  }
  return;
}

// StaticStruct @ 149ce4e50

UScriptStruct * __cdecl FPCGDataLayerSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataLayerSettings.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataLayerSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataLayerSettings,(UObject *)pUVar1,
                         L"PCGDataLayerSettings");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataLayerSettings.OuterSingleton;
}

// FPCGDataLayerSettings @ 149d339a0

FPCGDataLayerSettings * __thiscall
FPCGDataLayerSettings::FPCGDataLayerSettings(FPCGDataLayerSettings *this)

{
  this->DataLayerSourceType = Self;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
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
  (this->AddDataLayers).bAsInput = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->AddDataLayers).Attribute);
  (this->AddDataLayers).DataLayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AddDataLayers).DataLayers.ArrayNum = 0;
  (this->AddDataLayers).DataLayers.ArrayMax = 0;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->DataLayerReferenceAttribute,
             PCGDataLayerHelpers::Constants::DataLayerReferenceAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&(this->IncludedDataLayers).Attribute,
             PCGDataLayerHelpers::Constants::IncludedDataLayersAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&(this->ExcludedDataLayers).Attribute,
             PCGDataLayerHelpers::Constants::ExcludedDataLayersAttribute,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&(this->AddDataLayers).Attribute,
             PCGDataLayerHelpers::Constants::AddDataLayersAttribute,true);
  return this;
}

// InputPinProperties @ 149d57a50

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataLayerSettings::InputPinProperties
          (FPCGDataLayerSettings *this,
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
  if (this->DataLayerSourceType == DataLayerReferences) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar3 = FText::GetEmpty();
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGDataLayerHelpers::Constants::DataLayerReferenceAttribute,pFVar4,true,
                        true,pFVar3);
    pFVar5->PinStatus = Required;
  }
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
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Param);
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
  if ((this->AddDataLayers).bAsInput != false) {
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
                        &PCGDataLayerHelpers::Constants::AddDataLayersAttribute,pFVar4,true,true,
                        pFVar3);
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

