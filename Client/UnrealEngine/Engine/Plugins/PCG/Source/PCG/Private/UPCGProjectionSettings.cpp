// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149b9eda0

UClass * __cdecl UPCGProjectionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProjectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProjectionSettings",
               &Z_Registration_Info_UClass_UPCGProjectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGProjectionSettings,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGProjectionSettings>,
               InternalVTableHelperCtorCaller<UPCGProjectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProjectionSettings.InnerSingleton;
}

// UPCGProjectionSettings @ 149be7dc0

UPCGProjectionSettings * __thiscall
UPCGProjectionSettings::UPCGProjectionSettings(UPCGProjectionSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGProjectionSettings__6B_;
  (this->ProjectionParams).bProjectPositions = true;
  (this->ProjectionParams).bProjectRotations = true;
  (this->ProjectionParams).bProjectScales = false;
  (this->ProjectionParams).ColorBlendMode = SourceValue;
  ::FString::FString(&(this->ProjectionParams).AttributeList,L"");
  (this->ProjectionParams).AttributeMode = ExcludeAttributes;
  (this->ProjectionParams).AttributeMergeOperation = TargetValue;
  (this->ProjectionParams).TagMergeOperation = Source;
  this->bForceCollapseToPoint = false;
  this->bKeepZeroDensityPoints = false;
  return this;
}

// UPCGProjectionSettings @ 149be7e20

UPCGProjectionSettings * __thiscall
UPCGProjectionSettings::UPCGProjectionSettings
          (UPCGProjectionSettings *this,FObjectInitializer *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGProjectionSettings__6B_;
  (this->ProjectionParams).bProjectPositions = true;
  (this->ProjectionParams).bProjectRotations = true;
  (this->ProjectionParams).bProjectScales = false;
  (this->ProjectionParams).ColorBlendMode = SourceValue;
  ::FString::FString(&(this->ProjectionParams).AttributeList,L"");
  (this->ProjectionParams).AttributeMode = ExcludeAttributes;
  (this->ProjectionParams).AttributeMergeOperation = TargetValue;
  (this->ProjectionParams).TagMergeOperation = Source;
  this->bForceCollapseToPoint = false;
  this->bKeepZeroDensityPoints = false;
  return this;
}

// ~UPCGProjectionSettings @ 149bea080

void __thiscall UPCGProjectionSettings::~UPCGProjectionSettings(UPCGProjectionSettings *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGProjectionSettings__6B_;
  pFVar1 = (this->ProjectionParams).AttributeList.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c05da0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGProjectionSettings::CreateElement
          (UPCGProjectionSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGProjectionElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGProjectionElement__6B_;
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

// GetCurrentPinTypesID @ 149c23a30

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

FPCGDataTypeIdentifier * __thiscall
UPCGProjectionSettings::GetCurrentPinTypesID
          (UPCGProjectionSettings *this,FPCGDataTypeIdentifier *__return_storage_ptr__,
          UPCGPin *param_1)

{
  bool bVar1;
  FPCGDataTypeIdentifier *this_00;
  FPCGDataTypeIdentifier *pFVar2;
  bool bVar3;
  bool bVar4;
  FPCGDataTypeIdentifier local_48;
  FPCGDataTypeIdentifier local_30;
  
  bVar3 = false;
  bVar1 = UPCGPin::IsOutputPin(param_1);
  if (!bVar1) goto LAB_149c23af8;
  if (this->bForceCollapseToPoint == false) {
    this_00 = UPCGSettings::GetTypeUnionIDOfIncidentEdges
                        ((UPCGSettings *)this,&local_30,&PCGPinConstants::DefaultInputLabel);
    pFVar2 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_48,Point);
    bVar1 = FPCGDataTypeIdentifier::IsSameType(this_00,pFVar2);
    if (local_48.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Ids.AllocatorInstance.Data);
    }
    bVar3 = true;
    bVar4 = false;
    if (bVar1) goto LAB_149c23ab9;
  }
  else {
LAB_149c23ab9:
    bVar4 = true;
  }
  if ((bVar3) && (local_30.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_30.Ids.AllocatorInstance.Data);
  }
  if (bVar4) {
    FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(__return_storage_ptr__,Point);
    return __return_storage_ptr__;
  }
LAB_149c23af8:
  UPCGSettings::GetCurrentPinTypesID((UPCGSettings *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 149c26690

UClass * __cdecl UPCGProjectionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGProjectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGProjectionSettings",
               &Z_Registration_Info_UClass_UPCGProjectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGProjectionSettings,0xf0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGProjectionSettings>,
               InternalVTableHelperCtorCaller<UPCGProjectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGProjectionSettings.InnerSingleton;
}

// HasDynamicPins @ 149c273c0

bool __thiscall UPCGProjectionSettings::HasDynamicPins(UPCGProjectionSettings *this)

{
  return true;
}

// InputPinProperties @ 149c2cb60

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGProjectionSettings::InputPinProperties
          (UPCGProjectionSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  FPCGPinProperties *pFVar5;
  FText local_38;
  FPCGDataTypeIdentifier local_28;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGProjectionElement",L"ProjectionSourcePinTooltip",
                      L"The data to project.");
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Concrete);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))(local_38.TextData.Reference);
  }
  pFVar5->PinStatus = Required;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGProjectionElement",L"ProjectionTargetPinTooltip",
                      L"The projection target.");
  iVar2 = __return_storage_ptr__->ArrayNum;
  if (iVar2 == __return_storage_ptr__->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar2 + 1;
  pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Concrete);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGProjectionConstants::ProjectionTargetLabel,pFVar4,false,false,pFVar3);
  if (local_38.TextData.Reference == (ITextData *)0x0) {
    pFVar5->PinStatus = Required;
  }
  else {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// PostLoad @ 149c2f3c0

void __thiscall UPCGProjectionSettings::PostLoad(UPCGProjectionSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGProjectionSettings @ 149c355c0

void __cdecl UPCGProjectionSettings::StaticRegisterNativesUPCGProjectionSettings(void)

{
  return;
}

