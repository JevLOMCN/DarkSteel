// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149902ee0

UClass * __cdecl UPCGDuplicateCrossSectionsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDuplicateCrossSectionsSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDuplicateCrossSectionsSettings",
               &Z_Registration_Info_UClass_UPCGDuplicateCrossSectionsSettings.InnerSingleton,
               StaticRegisterNativesUPCGDuplicateCrossSectionsSettings,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDuplicateCrossSectionsSettings>,
               InternalVTableHelperCtorCaller<UPCGDuplicateCrossSectionsSettings>,local_res8,
               UPCGSubdivisionBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDuplicateCrossSectionsSettings.InnerSingleton;
}

// UPCGDuplicateCrossSectionsSettings @ 1499c3660

UPCGDuplicateCrossSectionsSettings * __thiscall
UPCGDuplicateCrossSectionsSettings::UPCGDuplicateCrossSectionsSettings
          (UPCGDuplicateCrossSectionsSettings *this,FVTableHelper *param_1)

{
  UPCGSubdivisionBaseSettings::UPCGSubdivisionBaseSettings
            ((UPCGSubdivisionBaseSettings *)this,param_1);
  this->bExtrudeVectorAsAttribute = false;
  this->_padding_ = (longlong)&___7UPCGDuplicateCrossSectionsSettings__6B_;
  (this->ExtrudeVector).field0_0x0._s_0.X = 0.0;
  (this->ExtrudeVector).field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeVector).field0_0x0._s_0.Z = 1000.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ExtrudeVectorAttribute);
  this->bExtraOutputAttributesOnDataDomain = true;
  this->bOutputSplineIndexAttribute = true;
  ::FName::FName(&this->SplineIndexAttributeName,L"SplineIndex");
  return this;
}

// UPCGDuplicateCrossSectionsSettings @ 1499c36e0

UPCGDuplicateCrossSectionsSettings * __thiscall
UPCGDuplicateCrossSectionsSettings::UPCGDuplicateCrossSectionsSettings
          (UPCGDuplicateCrossSectionsSettings *this,FObjectInitializer *param_1)

{
  UPCGSubdivisionBaseSettings::UPCGSubdivisionBaseSettings
            ((UPCGSubdivisionBaseSettings *)this,param_1);
  this->bExtrudeVectorAsAttribute = false;
  this->_padding_ = (longlong)&___7UPCGDuplicateCrossSectionsSettings__6B_;
  (this->ExtrudeVector).field0_0x0._s_0.X = 0.0;
  (this->ExtrudeVector).field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeVector).field0_0x0._s_0.Z = 1000.0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            (&this->ExtrudeVectorAttribute);
  this->bExtraOutputAttributesOnDataDomain = true;
  this->bOutputSplineIndexAttribute = true;
  ::FName::FName(&this->SplineIndexAttributeName,L"SplineIndex");
  return this;
}

// ~UPCGDuplicateCrossSectionsSettings @ 1499c6480

void __thiscall
UPCGDuplicateCrossSectionsSettings::~UPCGDuplicateCrossSectionsSettings
          (UPCGDuplicateCrossSectionsSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGDuplicateCrossSectionsSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->ExtrudeVectorAttribute).field_0x28,
             *(int *)&(this->ExtrudeVectorAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ExtrudeVectorAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSubdivisionBaseSettings::~UPCGSubdivisionBaseSettings((UPCGSubdivisionBaseSettings *)this);
  return;
}

// CreateElement @ 1499db3d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGDuplicateCrossSectionsSettings::CreateElement
          (UPCGDuplicateCrossSectionsSettings *this,
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
         ___7__TIntrusiveReferenceController_VFPCGDuplicateCrossSectionsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGDuplicateCrossSectionsElement__6B_;
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

// GetPrivateStaticClass @ 1499fb090

UClass * __cdecl UPCGDuplicateCrossSectionsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGDuplicateCrossSectionsSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGDuplicateCrossSectionsSettings",
               &Z_Registration_Info_UClass_UPCGDuplicateCrossSectionsSettings.InnerSingleton,
               StaticRegisterNativesUPCGDuplicateCrossSectionsSettings,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGDuplicateCrossSectionsSettings>,
               InternalVTableHelperCtorCaller<UPCGDuplicateCrossSectionsSettings>,local_res8,
               UPCGSubdivisionBaseSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGDuplicateCrossSectionsSettings.InnerSingleton;
}

// InputPinProperties @ 1499fef40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDuplicateCrossSectionsSettings::InputPinProperties
          (UPCGDuplicateCrossSectionsSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spline);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  pFVar5->PinStatus = Required;
  if ((char)this->_padding_ != '\0') {
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
                        &PCGSubdivisionBase::Constants::ModulesInfoPinLabel,pFVar4,true,true,pFVar3)
    ;
    pFVar5->PinStatus = Required;
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149a03380

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGDuplicateCrossSectionsSettings::OutputPinProperties
          (UPCGDuplicateCrossSectionsSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spline);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// PostLoad @ 149a04bb0

void __thiscall
UPCGDuplicateCrossSectionsSettings::PostLoad(UPCGDuplicateCrossSectionsSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGDuplicateCrossSectionsSettings @ 149a0ffd0

void __cdecl
UPCGDuplicateCrossSectionsSettings::StaticRegisterNativesUPCGDuplicateCrossSectionsSettings(void)

{
  return;
}

