// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b9ded0

UClass * __cdecl UPCGMatchAndSetAttributesSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetAttributesSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetAttributesSettings",
               &Z_Registration_Info_UClass_UPCGMatchAndSetAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetAttributesSettings,0x3b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMatchAndSetAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetAttributesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetAttributesSettings.InnerSingleton;
}

// UPCGMatchAndSetAttributesSettings @ 149be6e70

UPCGMatchAndSetAttributesSettings * __thiscall
UPCGMatchAndSetAttributesSettings::UPCGMatchAndSetAttributesSettings
          (UPCGMatchAndSetAttributesSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bMatchAttributes = false;
  *(undefined ***)this = &___7UPCGMatchAndSetAttributesSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->MatchAttribute);
  this->bKeepUnmatched = true;
  this->bFindNearest = false;
  this->MaxDistanceMode = NoMaxDistance;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            (&this->MaxDistanceForNearestMatch);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->MaxDistanceInputAttribute);
  this->bUseInputWeightAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->InputWeightAttribute);
  this->bUseWeightAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->WeightAttribute);
  this->bWarnIfNoMatchData = true;
  this->bWarnOnAttributeCast = true;
  return this;
}

// UPCGMatchAndSetAttributesSettings @ 149be6f10

UPCGMatchAndSetAttributesSettings * __thiscall
UPCGMatchAndSetAttributesSettings::UPCGMatchAndSetAttributesSettings
          (UPCGMatchAndSetAttributesSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  FName FVar3;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->bMatchAttributes = false;
  *(undefined ***)this = &___7UPCGMatchAndSetAttributesSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputAttribute);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->MatchAttribute);
  FVar3.ComparisonIndex.Value = 0;
  FVar3.Number = 0;
  this->bKeepUnmatched = true;
  this->bFindNearest = false;
  this->MaxDistanceMode = NoMaxDistance;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            (&this->MaxDistanceForNearestMatch);
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->MaxDistanceInputAttribute);
  this->bUseInputWeightAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->InputWeightAttribute);
  this->bUseWeightAttribute = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->WeightAttribute);
  this->bWarnIfNoMatchData = true;
  this->bWarnOnAttributeCast = true;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->WeightAttribute,(FName)0x0,true);
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    FVar3 = PCGMetadataAttributeConstants::LastAttributeName;
  }
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->MatchAttribute,FVar3,true);
  return this;
}

// ~UPCGMatchAndSetAttributesSettings @ 149be9b30

void __thiscall
UPCGMatchAndSetAttributesSettings::~UPCGMatchAndSetAttributesSettings
          (UPCGMatchAndSetAttributesSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined ***)this = &___7UPCGMatchAndSetAttributesSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->WeightAttribute).field_0x28,
             *(int *)&(this->WeightAttribute).field_0x30);
  pvVar1 = *(void **)&(this->WeightAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->InputWeightAttribute).field_0x28,
             *(int *)&(this->InputWeightAttribute).field_0x30);
  pvVar1 = *(void **)&(this->InputWeightAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->MaxDistanceInputAttribute).field_0x28,
             *(int *)&(this->MaxDistanceInputAttribute).field_0x30);
  pvVar1 = *(void **)&(this->MaxDistanceInputAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->MaxDistanceForNearestMatch).SoftObjectPathValue.SubPathString.Data.
           AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar1 = *(void **)&(this->MaxDistanceForNearestMatch).SoftClassPathValue.field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->MaxDistanceForNearestMatch).StringValue.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->MatchAttribute).field_0x28,
             *(int *)&(this->MatchAttribute).field_0x30);
  pvVar1 = *(void **)&(this->MatchAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->InputAttribute).field_0x28,
             *(int *)&(this->InputAttribute).field_0x30);
  pvVar1 = *(void **)&(this->InputAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05260

TSharedPtr<IPCGElement,1> * __thiscall
UPCGMatchAndSetAttributesSettings::CreateElement
          (UPCGMatchAndSetAttributesSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__
          )

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
         ___7__TIntrusiveReferenceController_VFPCGMatchAndSetAttributesElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGMatchAndSetAttributesElement__6B_;
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

// GetPrivateStaticClass @ 149c25910

UClass * __cdecl UPCGMatchAndSetAttributesSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGMatchAndSetAttributesSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGMatchAndSetAttributesSettings",
               &Z_Registration_Info_UClass_UPCGMatchAndSetAttributesSettings.InnerSingleton,
               StaticRegisterNativesUPCGMatchAndSetAttributesSettings,0x3b0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGMatchAndSetAttributesSettings>,
               InternalVTableHelperCtorCaller<UPCGMatchAndSetAttributesSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGMatchAndSetAttributesSettings.InnerSingleton;
}

// InputPinProperties @ 149c2c350

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMatchAndSetAttributesSettings::InputPinProperties
          (UPCGMatchAndSetAttributesSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FPCGDataTypeIdentifier local_38;
  FPCGDataTypeIdentifier local_20;
  
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_38,PointOrParam);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)&local_38,L"PCGMatchAndSetAttributes",L"MatchDataTooltip",
                      L"Input containing the data to match to, then copy the accompanying attribute values"
                     );
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_20,Param);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGMatchAndSetAttributesConstants::MatchDataLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    (**(code **)(*(longlong *)local_38.Ids.AllocatorInstance.Data + 0x10))();
  }
  if ((this->bFindNearest != false) && (this->MaxDistanceMode == AttributeMaxDistance)) {
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)&local_38,L"PCGMatchAndSetAttributes",L"MaxDistanceTooltip",
                        L"Input containing the maximum distance allowed for nearest search, selected by the Max Distance Attribute."
                       );
    iVar2 = __return_storage_ptr__->ArrayNum;
    if (iVar2 == __return_storage_ptr__->ArrayMax) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_20,PointOrParam);
    pFVar5 = FPCGPinProperties::FPCGPinProperties
                       ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                        &PCGMatchAndSetAttributesConstants::MaxDistanceLabel,pFVar4,true,true,pFVar3
                       );
    pFVar5->PinStatus = Required;
    if (local_38.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      (**(code **)(*(longlong *)local_38.Ids.AllocatorInstance.Data + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c2e4d0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGMatchAndSetAttributesSettings::OutputPinProperties
          (UPCGMatchAndSetAttributesSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGMatchAndSetAttributesSettings @ 149c35470

void __cdecl
UPCGMatchAndSetAttributesSettings::StaticRegisterNativesUPCGMatchAndSetAttributesSettings(void)

{
  return;
}

// UseSeed @ 149c36330

bool __thiscall UPCGMatchAndSetAttributesSettings::UseSeed(UPCGMatchAndSetAttributesSettings *this)

{
  return true;
}

