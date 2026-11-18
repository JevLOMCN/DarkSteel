// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c3b220

UClass * __cdecl UPCGSplineIntersectionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineIntersectionSettings",
               &Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGSplineIntersectionSettings,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSplineIntersectionSettings>,
               InternalVTableHelperCtorCaller<UPCGSplineIntersectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.InnerSingleton;
}

// UPCGSplineIntersectionSettings @ 149c4bb80

UPCGSplineIntersectionSettings * __thiscall
UPCGSplineIntersectionSettings::UPCGSplineIntersectionSettings
          (UPCGSplineIntersectionSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->Type = AgainstOtherSplines;
  this->Output = OriginalSplinesWithIntersections;
  this->_padding_ = (longlong)&___7UPCGSplineIntersectionSettings__6B_;
  this->bOutputSplineIndices = false;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OriginatingSplineIndexAttribute);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->IntersectingSplineIndexAttribute);
  this->DistanceThreshold = 10.0;
  return this;
}

// UPCGSplineIntersectionSettings @ 149c4bbe0

UPCGSplineIntersectionSettings * __thiscall
UPCGSplineIntersectionSettings::UPCGSplineIntersectionSettings(UPCGSplineIntersectionSettings *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar1);
  this->Type = AgainstOtherSplines;
  this->Output = OriginalSplinesWithIntersections;
  this->_padding_ = (longlong)&___7UPCGSplineIntersectionSettings__6B_;
  this->bOutputSplineIndices = false;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->OriginatingSplineIndexAttribute);
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->IntersectingSplineIndexAttribute);
  this->DistanceThreshold = 10.0;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->OriginatingSplineIndexAttribute,
             PCGSplineIntersection::Constants::OriginatingSplineIndexAttributeName,true);
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->IntersectingSplineIndexAttribute,
             PCGSplineIntersection::Constants::IntersectingSplineIndexAttributeName,true);
  return this;
}

// ~UPCGSplineIntersectionSettings @ 149c4dc00

void __thiscall
UPCGSplineIntersectionSettings::~UPCGSplineIntersectionSettings
          (UPCGSplineIntersectionSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGSplineIntersectionSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->IntersectingSplineIndexAttribute).field_0x28,
             *(int *)&(this->IntersectingSplineIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->IntersectingSplineIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FString,int>
            (*(FString **)&(this->OriginatingSplineIndexAttribute).field_0x28,
             *(int *)&(this->OriginatingSplineIndexAttribute).field_0x30);
  pvVar1 = *(void **)&(this->OriginatingSplineIndexAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60500

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSplineIntersectionSettings::CreateElement
          (UPCGSplineIntersectionSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSplineIntersectionElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSplineIntersectionElement__6B_;
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

// GetPrivateStaticClass @ 149c786f0

UClass * __cdecl UPCGSplineIntersectionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSplineIntersectionSettings",
               &Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGSplineIntersectionSettings,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGSplineIntersectionSettings>,
               InternalVTableHelperCtorCaller<UPCGSplineIntersectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSplineIntersectionSettings.InnerSingleton;
}

// InputPinProperties @ 149c7fd40

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplineIntersectionSettings::InputPinProperties
          (UPCGSplineIntersectionSettings *this,
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
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81390

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSplineIntersectionSettings::OutputPinProperties
          (UPCGSplineIntersectionSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FText *pFVar3;
  FPCGDataTypeIdentifier *pFVar4;
  EPCGDataType EVar5;
  FPCGPinProperties *this_00;
  FPCGDataTypeIdentifier local_28;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (this->Output == IntersectionPointsOnly) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,piVar1);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    this_00 = (FPCGPinProperties *)
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
    pFVar3 = FText::GetEmpty();
    EVar5 = Point;
  }
  else {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,piVar1);
    __return_storage_ptr__->ArrayNum = iVar2 + 1;
    this_00 = (FPCGPinProperties *)
              ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar2 * 0x30);
    pFVar3 = FText::GetEmpty();
    EVar5 = Spline;
  }
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,EVar5);
  FPCGPinProperties::FPCGPinProperties
            (this_00,&PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGSplineIntersectionSettings @ 149c91fd0

void __cdecl
UPCGSplineIntersectionSettings::StaticRegisterNativesUPCGSplineIntersectionSettings(void)

{
  return;
}

