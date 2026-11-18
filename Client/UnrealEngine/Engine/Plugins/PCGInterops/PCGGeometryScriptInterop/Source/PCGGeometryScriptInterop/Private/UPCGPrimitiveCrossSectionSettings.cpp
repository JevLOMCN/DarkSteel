// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 9

// StaticClass @ 14cedd110

UClass * __cdecl UPCGPrimitiveCrossSectionSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGPrimitiveCrossSectionSettings",
               &Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGPrimitiveCrossSectionSettings,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPrimitiveCrossSectionSettings>,
               InternalVTableHelperCtorCaller<UPCGPrimitiveCrossSectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.InnerSingleton;
}

// UPCGPrimitiveCrossSectionSettings @ 14cee3eb0

UPCGPrimitiveCrossSectionSettings * __thiscall
UPCGPrimitiveCrossSectionSettings::UPCGPrimitiveCrossSectionSettings
          (UPCGPrimitiveCrossSectionSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGPrimitiveCrossSectionSettings__6B_;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->SliceDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->SliceDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->SliceDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->ExtrusionVectorAttribute);
  this->MinimumCoplanarVertices = 3;
  this->MinAreaCullingThreshold = 100.0;
  this->MaxMeshVertexCount = 0x800;
  this->bEnableTierMerging = false;
  this->TierMergingThreshold = 1.0;
  this->bEnableMinAreaCulling = false;
  this->bEnableMinHeightCulling = true;
  this->MinHeightCullingThreshold = 1.0;
  this->bRemoveRedundantSections = true;
  return this;
}

// UPCGPrimitiveCrossSectionSettings @ 14cee3f60

UPCGPrimitiveCrossSectionSettings * __thiscall
UPCGPrimitiveCrossSectionSettings::UPCGPrimitiveCrossSectionSettings
          (UPCGPrimitiveCrossSectionSettings *this)

{
  undefined8 uVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->_padding_ = (longlong)&___7UPCGPrimitiveCrossSectionSettings__6B_;
  uVar1 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  (this->SliceDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  (this->SliceDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->SliceDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  FPCGAttributePropertyOutputSelector::FPCGAttributePropertyOutputSelector
            (&this->ExtrusionVectorAttribute);
  this->MinimumCoplanarVertices = 3;
  this->TierMergingThreshold = 1.0;
  this->MinHeightCullingThreshold = 1.0;
  this->MinAreaCullingThreshold = 100.0;
  this->MaxMeshVertexCount = 0x800;
  this->bEnableTierMerging = false;
  this->bEnableMinAreaCulling = false;
  this->bEnableMinHeightCulling = true;
  this->bRemoveRedundantSections = true;
  FPCGAttributePropertySelector::SetAttributeName
            ((FPCGAttributePropertySelector *)&this->ExtrusionVectorAttribute,
             PCGPrimitiveCrossSection::Constants::DefaultExtrusionVectorAttributeName,true);
  return this;
}

// ~UPCGPrimitiveCrossSectionSettings @ 14cee4be0

void __thiscall
UPCGPrimitiveCrossSectionSettings::~UPCGPrimitiveCrossSectionSettings
          (UPCGPrimitiveCrossSectionSettings *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UPCGPrimitiveCrossSectionSettings__6B_;
  DestructItems<FString,int>
            (*(FString **)&(this->ExtrusionVectorAttribute).field_0x28,
             *(int *)&(this->ExtrusionVectorAttribute).field_0x30);
  pvVar1 = *(void **)&(this->ExtrusionVectorAttribute).field_0x28;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 14ceea8e0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGPrimitiveCrossSectionSettings::CreateElement
          (UPCGPrimitiveCrossSectionSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__
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
         ___7__TIntrusiveReferenceController_VFPCGPrimitiveCrossSectionElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGPrimitiveCrossSectionElement__6B_;
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

// GetPrivateStaticClass @ 14cef37a0

UClass * __cdecl UPCGPrimitiveCrossSectionSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCGGeometryScriptInterop",L"PCGPrimitiveCrossSectionSettings",
               &Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.InnerSingleton,
               StaticRegisterNativesUPCGPrimitiveCrossSectionSettings,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGPrimitiveCrossSectionSettings>,
               InternalVTableHelperCtorCaller<UPCGPrimitiveCrossSectionSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGPrimitiveCrossSectionSettings.InnerSingleton;
}

// InputPinProperties @ 14cef3f90

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPrimitiveCrossSectionSettings::InputPinProperties
          (UPCGPrimitiveCrossSectionSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,VolumeOrPrimitiveOrDynamicMesh);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultInputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 14cef4650

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGPrimitiveCrossSectionSettings::OutputPinProperties
          (UPCGPrimitiveCrossSectionSettings *this,
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

// StaticRegisterNativesUPCGPrimitiveCrossSectionSettings @ 14cef9c50

void __cdecl
UPCGPrimitiveCrossSectionSettings::StaticRegisterNativesUPCGPrimitiveCrossSectionSettings(void)

{
  return;
}

