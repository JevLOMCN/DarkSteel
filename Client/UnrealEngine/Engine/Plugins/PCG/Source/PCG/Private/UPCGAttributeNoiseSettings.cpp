// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149a17790

UClass * __cdecl UPCGAttributeNoiseSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeNoiseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeNoiseSettings",
               &Z_Registration_Info_UClass_UPCGAttributeNoiseSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeNoiseSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeNoiseSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeNoiseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeNoiseSettings.InnerSingleton;
}

// UPCGAttributeNoiseSettings @ 149ad0d90

UPCGAttributeNoiseSettings * __thiscall
UPCGAttributeNoiseSettings::UPCGAttributeNoiseSettings
          (UPCGAttributeNoiseSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGAttributeNoiseSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  this->Mode = Set;
  this->NoiseMin = 0.0;
  this->NoiseMax = 1.0;
  this->bInvertSource = false;
  this->bClampResult = false;
  this->bHasCustomSeedSource = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CustomSeedSource);
  this->bHasSpatialToPointDeprecation = false;
  return this;
}

// UPCGAttributeNoiseSettings @ 149ad0e10

UPCGAttributeNoiseSettings * __thiscall
UPCGAttributeNoiseSettings::UPCGAttributeNoiseSettings(UPCGAttributeNoiseSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->_padding_ = (longlong)&___7UPCGAttributeNoiseSettings__6B_;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->InputSource);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector(&this->OutputTarget);
  this->Mode = Set;
  this->NoiseMin = 0.0;
  this->NoiseMax = 1.0;
  this->bInvertSource = false;
  this->bClampResult = false;
  this->bHasCustomSeedSource = false;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector(&this->CustomSeedSource);
  this->bHasSpatialToPointDeprecation = false;
  FPCGAttributePropertySelector::SetPointProperty
            ((FPCGAttributePropertySelector *)&this->InputSource,Density,true);
  return this;
}

// ~UPCGAttributeNoiseSettings @ 149ad3280

void __thiscall
UPCGAttributeNoiseSettings::~UPCGAttributeNoiseSettings(UPCGAttributeNoiseSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGAttributeNoiseSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->CustomSeedSource).field_0x28,
             *(int *)&(this->CustomSeedSource).field_0x30);
  pvVar1 = *(void **)&(this->CustomSeedSource).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
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
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// ApplyPreconfiguredSettings @ 149af4a40

void __thiscall
UPCGAttributeNoiseSettings::ApplyPreconfiguredSettings
          (UPCGAttributeNoiseSettings *this,FPCGPreConfiguredSettingsInfo *param_1)

{
  if (*(int *)param_1 == 0) {
    FPCGAttributePropertySelector::SetAttributeName
              ((FPCGAttributePropertySelector *)&this->InputSource,
               PCGMetadataAttributeConstants::LastAttributeName,true);
    return;
  }
  return;
}

// CreateElement @ 149afc230

TSharedPtr<IPCGElement,1> * __thiscall
UPCGAttributeNoiseSettings::CreateElement
          (UPCGAttributeNoiseSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGAttributeNoiseElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGAttributeNoiseElement__6B_;
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

// GetPrivateStaticClass @ 149b17670

UClass * __cdecl UPCGAttributeNoiseSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGAttributeNoiseSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGAttributeNoiseSettings",
               &Z_Registration_Info_UClass_UPCGAttributeNoiseSettings.InnerSingleton,
               StaticRegisterNativesUPCGAttributeNoiseSettings,0x1a0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGAttributeNoiseSettings>,
               InternalVTableHelperCtorCaller<UPCGAttributeNoiseSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGAttributeNoiseSettings.InnerSingleton;
}

// HasDynamicPins @ 149b1a700

bool __thiscall UPCGAttributeNoiseSettings::HasDynamicPins(UPCGAttributeNoiseSettings *this)

{
  return true;
}

// InputPinProperties @ 149b1c200

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeNoiseSettings::InputPinProperties
          (UPCGAttributeNoiseSettings *this,
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
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b1ff70

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGAttributeNoiseSettings::OutputPinProperties
          (UPCGAttributeNoiseSettings *this,
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

// PostLoad @ 149b20b60

void __thiscall UPCGAttributeNoiseSettings::PostLoad(UPCGAttributeNoiseSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGAttributeNoiseSettings @ 149b2ced0

void __cdecl UPCGAttributeNoiseSettings::StaticRegisterNativesUPCGAttributeNoiseSettings(void)

{
  return;
}

// UseSeed @ 149b2d920

bool __thiscall UPCGAttributeNoiseSettings::UseSeed(UPCGAttributeNoiseSettings *this)

{
  return true;
}

