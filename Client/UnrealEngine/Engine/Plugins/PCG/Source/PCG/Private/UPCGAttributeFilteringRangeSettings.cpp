// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 14

// StaticClass @ 149a152b0

UClass * __cdecl UPCGAttributeFilteringRangeSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeFilteringRangeSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeFilteringRangeSettings",
               &Z_Registration_Info_UClass_UPCGAttributeFilteringRangeSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeFilteringRangeSettings,0x4a0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeFilteringRangeSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeFilteringRangeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeFilteringRangeSettings.InnerSingleton;
}

// UPCGAttributeFilteringRangeSettings @ 149ad0910

UPCGAttributeFilteringRangeSettings * __thiscall
UPCGAttributeFilteringRangeSettings::UPCGAttributeFilteringRangeSettings
          (UPCGAttributeFilteringRangeSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  *(undefined ***)this = &___7UPCGAttributeFilteringRangeSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->TargetAttribute);
  (this->MinThreshold).bInclusive = true;
  (this->MinThreshold).bUseConstantThreshold = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->MinThreshold).ThresholdAttribute);
  (this->MinThreshold).bUseSpatialQuery = true;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            (&(this->MinThreshold).AttributeTypes);
  (this->MaxThreshold).bInclusive = true;
  (this->MaxThreshold).bUseConstantThreshold = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->MaxThreshold).ThresholdAttribute);
  (this->MaxThreshold).bUseSpatialQuery = true;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            (&(this->MaxThreshold).AttributeTypes);
  this->bWarnOnDataMissingAttribute = true;
  this->bGenerateOutputDataEvenIfEmpty = true;
  this->bHasSpatialToPointDeprecation = false;
  return this;
}

// UPCGAttributeFilteringRangeSettings @ 149ad09b0

UPCGAttributeFilteringRangeSettings * __thiscall
UPCGAttributeFilteringRangeSettings::UPCGAttributeFilteringRangeSettings
          (UPCGAttributeFilteringRangeSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  *(undefined ***)this = &___7UPCGAttributeFilteringRangeSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->TargetAttribute);
  (this->MinThreshold).bInclusive = true;
  (this->MinThreshold).bUseConstantThreshold = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->MinThreshold).ThresholdAttribute);
  (this->MinThreshold).bUseSpatialQuery = true;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            (&(this->MinThreshold).AttributeTypes);
  (this->MaxThreshold).bInclusive = true;
  (this->MaxThreshold).bUseConstantThreshold = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&(this->MaxThreshold).ThresholdAttribute);
  (this->MaxThreshold).bUseSpatialQuery = true;
  FPCGMetadataTypesConstantStruct::FPCGMetadataTypesConstantStruct
            (&(this->MaxThreshold).AttributeTypes);
  this->bWarnOnDataMissingAttribute = true;
  this->bGenerateOutputDataEvenIfEmpty = true;
  this->bHasSpatialToPointDeprecation = false;
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&this->TargetAttribute,Density,true);
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&(this->MinThreshold).ThresholdAttribute,Density,true)
  ;
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&(this->MaxThreshold).ThresholdAttribute,Density,true)
  ;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    (this->MinThreshold).bUseSpatialQuery = false;
    (this->MaxThreshold).bUseSpatialQuery = false;
  }
  return this;
}

// ~UPCGAttributeFilteringRangeSettings @ 149ad30e0

void __thiscall
UPCGAttributeFilteringRangeSettings::~UPCGAttributeFilteringRangeSettings
          (UPCGAttributeFilteringRangeSettings *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7UPCGAttributeFilteringRangeSettings__6B_;
  FPCGAttributeFilterThresholdSettings::~FPCGAttributeFilterThresholdSettings(&this->MaxThreshold);
  FPCGAttributeFilterThresholdSettings::~FPCGAttributeFilterThresholdSettings(&this->MinThreshold);
  DestructItems<FString,int>
            (*(FString **)&(this->TargetAttribute).field_0x28,
             *(int *)&(this->TargetAttribute).field_0x30);
  pvVar1 = *(void **)&(this->TargetAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149af4980

void __thiscall
UPCGAttributeFilteringRangeSettings::ApplyPreconfiguredSettings
          (UPCGAttributeFilteringRangeSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  if (*(int *)param_1 != 1) {
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)&this->TargetAttribute,
               PCGMetadataAttributeConstants::LastAttributeName,true);
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)&(this->MinThreshold).ThresholdAttribute,
               PCGMetadataAttributeConstants::LastAttributeName,true);
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)&(this->MaxThreshold).ThresholdAttribute,
               PCGMetadataAttributeConstants::LastAttributeName,true);
    return;
  }
  return;
}

// CreateElement @ 149afbf30

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAttributeFilteringRangeSettings::CreateElement
          (UPCGAttributeFilteringRangeSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGAttributeFilterRangeElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAttributeFilterRangeElement__6B_;
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

// GetAdditionalTitleInformation @ 149b13aa0

FString * __thiscall
UPCGAttributeFilteringRangeSettings::GetAdditionalTitleInformation
          (UPCGAttributeFilteringRangeSettings *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FText local_28;
  FString local_18;
  
  pFVar1 = FPCGAttributePropertySelector::ToString
                     ((FPCGAttributePropertySelector *)&this->TargetAttribute,&local_18,false);
  FText::FromString(&local_28,pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pFVar1 = FText::ToString(&local_28);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetCurrentPinTypesID @ 149b157f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGAttributeFilteringRangeSettings::GetCurrentPinTypesID
          (UPCGAttributeFilteringRangeSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  bool bVar5;
  FPCGDataTypeIdentifier *pFVar6;
  int iVar7;
  int iVar8;
  ForAnyElementType FVar9;
  undefined4 local_res18 [2];
  undefined1 local_res20 [8];
  FPCGDataTypeIdentifier local_88;
  FPCGDataTypeIdentifier local_70;
  FPCGDataTypeIdentifier local_58;
  FPCGDataTypeIdentifier local_40;
  
  bVar5 = false;
  local_res18[0] = 0;
  if ((param_1 == (UPCGPin *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPin",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\Elements\\PCGAttributeFilter.cpp"
                         ,0x19e,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FPCGDataTypeIdentifier *)(*pcVar2)();
    return pFVar6;
  }
  bVar4 = UPCGPin::IsOutputPin(param_1);
  if (bVar4) {
    UPCGSettings::GetTypeUnionIDOfIncidentEdges
              ((UPCGSettings *)this,&local_88,&PCGPinConstants::DefaultInputLabel);
    iVar7 = local_88.Ids.ArrayNum;
    if (iVar7 != 0) {
      pFVar1 = local_88.Ids.AllocatorInstance.Data + (longlong)iVar7 * 8;
      FVar9.Data = local_88.Ids.AllocatorInstance.Data;
      while( true ) {
        if (local_88.Ids.ArrayNum != iVar7) {
          `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (FVar9.Data == pFVar1) break;
        bVar4 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)FVar9.Data);
        if (!bVar4) goto LAB_149b158ef;
        FVar9.Data = FVar9.Data + 8;
      }
      pFVar6 = FPCGDataTypeIdentifier::operator&(&local_88,&local_58,Spatial);
      bVar5 = true;
      bVar4 = FPCGDataTypeIdentifier::IsIdentical(pFVar6,&local_88);
      if (bVar4) {
        bVar4 = true;
        goto LAB_149b158f2;
      }
    }
LAB_149b158ef:
    bVar4 = false;
LAB_149b158f2:
    if ((bVar5) && (local_58.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_58.Ids.AllocatorInstance.Data);
    }
    if (bVar4) {
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,Point);
    }
    else {
      iVar7 = local_88.Ids.ArrayNum;
      if (iVar7 != 0) {
        pFVar1 = local_88.Ids.AllocatorInstance.Data + (longlong)iVar7 * 8;
        FVar9.Data = local_88.Ids.AllocatorInstance.Data;
        while( true ) {
          iVar8 = local_88.Ids.ArrayNum;
          if (iVar8 != iVar7) {
            `TCheckedPointerIterator<FPCGDataTypeBaseId_const_,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res20);
            iVar8 = local_88.Ids.ArrayNum;
          }
          FVar3.Data = local_88.Ids.AllocatorInstance.Data;
          if (FVar9.Data == pFVar1) {
            bVar4 = true;
            bVar5 = false;
            local_70.Ids.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_70.Ids.ArrayNum = iVar8;
            if (iVar8 == 0) {
              local_70.CustomSubtype = local_88.CustomSubtype;
              pFVar6 = &local_70;
              local_70.Ids.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar8,0,(ForAnyElementType *)&local_70,iVar8,&local_70.Ids.ArrayMax);
              ConstructItems<FPCGDataTypeBaseId,FPCGDataTypeBaseId,int>
                        (local_70.Ids.AllocatorInstance.Data,(FPCGDataTypeBaseId *)FVar3.Data,iVar8)
              ;
              local_70.CustomSubtype = local_88.CustomSubtype;
              pFVar6 = &local_70;
            }
            goto LAB_149b159dd;
          }
          bVar5 = FPCGDataTypeBaseId::IsValid((FPCGDataTypeBaseId *)FVar9.Data);
          if (!bVar5) break;
          FVar9.Data = FVar9.Data + 8;
        }
      }
      bVar4 = false;
      bVar5 = true;
      pFVar6 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_40,Any);
LAB_149b159dd:
      FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,pFVar6);
      if ((bVar5) && (local_40.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_40.Ids.AllocatorInstance.Data);
      }
      if ((bVar4) && (local_70.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_70.Ids.AllocatorInstance.Data);
      }
    }
    if (local_88.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Ids.AllocatorInstance.Data);
    }
  }
  else {
    UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149b17370

UClass * __cdecl UPCGAttributeFilteringRangeSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeFilteringRangeSettings.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeFilteringRangeSettings",
               &Z_Registration_Info_UClass_UPCGAttributeFilteringRangeSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeFilteringRangeSettings,0x4a0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeFilteringRangeSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeFilteringRangeSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeFilteringRangeSettings.InnerSingleton;
}

// HasDynamicPins @ 149b1a6e0

bool __thiscall
UPCGAttributeFilteringRangeSettings::HasDynamicPins(UPCGAttributeFilteringRangeSettings *this)

{
  return true;
}

// InputPinProperties @ 149b1be20

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeFilteringRangeSettings::InputPinProperties
          (UPCGAttributeFilteringRangeSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,PointOrParam);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if ((this->MinThreshold).bUseConstantThreshold == false) {
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
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGAttributeFilterConstants::FilterMinLabel,pFVar4,false,true,pFVar3);
  }
  if ((this->MaxThreshold).bUseConstantThreshold == false) {
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
    FPCGPinProperties::FPCGPinProperties
              ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
               &PCGAttributeFilterConstants::FilterMaxLabel,pFVar4,false,true,pFVar3);
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b1fbe0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeFilteringRangeSettings::OutputPinProperties
          (UPCGAttributeFilteringRangeSettings *this,
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
             &PCGPinConstants::DefaultInFilterLabel,pFVar4,true,true,pFVar3);
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
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutFilterLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149b20b30

void __thiscall
UPCGAttributeFilteringRangeSettings::PostLoad(UPCGAttributeFilteringRangeSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGAttributeFilteringRangeSettings @ 149b2ce90

void __cdecl
UPCGAttributeFilteringRangeSettings::StaticRegisterNativesUPCGAttributeFilteringRangeSettings(void)

{
  return;
}

