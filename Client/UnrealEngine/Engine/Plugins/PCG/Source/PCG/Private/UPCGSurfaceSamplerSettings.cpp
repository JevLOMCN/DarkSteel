// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149c3ac90

UClass * __cdecl UPCGSurfaceSamplerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSurfaceSamplerSettings",
               &Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGSurfaceSamplerSettings,0xf8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSurfaceSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGSurfaceSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.InnerSingleton;
}

// UPCGSurfaceSamplerSettings @ 149c4c200

UPCGSurfaceSamplerSettings * __thiscall
UPCGSurfaceSamplerSettings::UPCGSurfaceSamplerSettings
          (UPCGSurfaceSamplerSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->PointsPerSquaredMeter = 0.1;
  this->_padding_ = (longlong)&___7UPCGSurfaceSamplerSettings__6B_;
  (this->PointExtents).field0_0x0._s_0.X = 50.0;
  (this->PointExtents).field0_0x0._s_0.Y = 50.0;
  (this->PointExtents).field0_0x0._s_0.Z = 50.0;
  this->Looseness = 1.0;
  this->bUnbounded = false;
  this->bApplyDensityToPoints = true;
  this->PointSteepness = 0.5;
  this->bUseLegacyGridCreationMethod = false;
  return this;
}

// UPCGSurfaceSamplerSettings @ 149c4c280

UPCGSurfaceSamplerSettings * __thiscall
UPCGSurfaceSamplerSettings::UPCGSurfaceSamplerSettings(UPCGSurfaceSamplerSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->PointsPerSquaredMeter = 0.1;
  this->_padding_ = (longlong)&___7UPCGSurfaceSamplerSettings__6B_;
  this->Looseness = 1.0;
  (this->PointExtents).field0_0x0._s_0.X = 50.0;
  (this->PointExtents).field0_0x0._s_0.Y = 50.0;
  (this->PointExtents).field0_0x0._s_0.Z = 50.0;
  this->PointSteepness = 0.5;
  this->bUnbounded = false;
  this->bApplyDensityToPoints = true;
  this->bUseLegacyGridCreationMethod = false;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    this->PointSteepness = 1.0;
  }
  return this;
}

// ~UPCGSurfaceSamplerSettings @ 149c4de20

void __thiscall
UPCGSurfaceSamplerSettings::~UPCGSurfaceSamplerSettings(UPCGSurfaceSamplerSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGSurfaceSamplerSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c608c0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGSurfaceSamplerSettings::CreateElement
          (UPCGSurfaceSamplerSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGSurfaceSamplerElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGSurfaceSamplerElement__6B_;
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

// GetPrivateStaticClass @ 149c78b70

UClass * __cdecl UPCGSurfaceSamplerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSurfaceSamplerSettings",
               &Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGSurfaceSamplerSettings,0xf8,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UPCGSurfaceSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGSurfaceSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSurfaceSamplerSettings.InnerSingleton;
}

// InputPinProperties @ 149c80100

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSurfaceSamplerSettings::InputPinProperties
          (UPCGSurfaceSamplerSettings *this,
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
                     (&local_38,L"PCGSurfaceSamplerElement",L"SurfaceSamplerSurfacePinTooltip",
                      L"The surface to sample with points. Points will be generated in the two dimensional footprint of the combined bounds of the Surface and the Bounding Shape (if any) and then projected onto this surface. If this input is omitted then the network of shapes connected to the Bounding Shape pin will be inspected for a surface shape to use to project the points onto."
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Surface);
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGSurfaceSamplerConstants::SurfaceLabel,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))(local_38.TextData.Reference);
  }
  pFVar5->PinStatus = Required;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGSurfaceSamplerElement",L"SurfaceSamplerBoundingShapePinTooltip"
                      ,
                      L"All sampled points must be contained within this shape. If this input is omitted then bounds will be taken from the actor so that points are contained within actor bounds. The Unbounded property disables this and instead generates over the entire bounds of Surface."
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Spatial);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGSurfaceSamplerConstants::BoundingShapeLabel,pFVar4,false,false,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81680

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGSurfaceSamplerSettings::OutputPinProperties
          (UPCGSurfaceSamplerSettings *this,
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
  return __return_storage_ptr__;
}

// PostLoad @ 149c81c90

void __thiscall UPCGSurfaceSamplerSettings::PostLoad(UPCGSurfaceSamplerSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// Serialize @ 149c8c1d0

void __thiscall
UPCGSurfaceSamplerSettings::Serialize(UPCGSurfaceSamplerSettings *this,FArchive *param_1)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    iVar1 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xcf) {
      (this->PointExtents).field0_0x0._s_0.X = 100.0;
      (this->PointExtents).field0_0x0._s_0.Y = 100.0;
      (this->PointExtents).field0_0x0._s_0.Z = 100.0;
      this->bUseLegacyGridCreationMethod = true;
    }
  }
  UPCGSettings::Serialize((UPCGSettings *)this,param_1);
  return;
}

// Serialize @ 149c8c250

void __thiscall
UPCGSurfaceSamplerSettings::Serialize
          (UPCGSurfaceSamplerSettings *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFortniteMainBranchObjectVersion::GUID);
  if (this_00->ArIsLoading != 0) {
    iVar1 = FArchiveState::CustomVer(this_00,&FFortniteMainBranchObjectVersion::GUID);
    if (iVar1 < 0xcf) {
      (this->PointExtents).field0_0x0._s_0.X = 100.0;
      (this->PointExtents).field0_0x0._s_0.Y = 100.0;
      (this->PointExtents).field0_0x0._s_0.Z = 100.0;
      this->bUseLegacyGridCreationMethod = true;
    }
  }
  UPCGSettings::Serialize((UPCGSettings *)this,(FArchive *)this_00);
  return;
}

// StaticRegisterNativesUPCGSurfaceSamplerSettings @ 149c92060

void __cdecl UPCGSurfaceSamplerSettings::StaticRegisterNativesUPCGSurfaceSamplerSettings(void)

{
  return;
}

// UseSeed @ 149c936a0

bool __thiscall UPCGSurfaceSamplerSettings::UseSeed(UPCGSurfaceSamplerSettings *this)

{
  return true;
}

