// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c3ad60

UClass * __cdecl UPCGVolumeSamplerSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVolumeSamplerSettings",
               &Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGVolumeSamplerSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGVolumeSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGVolumeSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.InnerSingleton;
}

// UPCGVolumeSamplerSettings @ 149c4ca40

UPCGVolumeSamplerSettings * __thiscall
UPCGVolumeSamplerSettings::UPCGVolumeSamplerSettings
          (UPCGVolumeSamplerSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGVolumeSamplerSettings__6B_;
  uVar1 = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Y;
  (this->VoxelSize).field0_0x0._s_0.X = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.X;
  (this->VoxelSize).field0_0x0._s_0.Y = (double)uVar1;
  (this->VoxelSize).field0_0x0._s_0.Z = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Z;
  this->bUnbounded = false;
  this->PointSteepness = 0.5;
  return this;
}

// UPCGVolumeSamplerSettings @ 149c4caa0

UPCGVolumeSamplerSettings * __thiscall
UPCGVolumeSamplerSettings::UPCGVolumeSamplerSettings(UPCGVolumeSamplerSettings *this)

{
  undefined8 uVar1;
  bool bVar2;
  FObjectInitializer *pFVar3;
  
  pFVar3 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar3);
  this->_padding_ = (longlong)&___7UPCGVolumeSamplerSettings__6B_;
  uVar1 = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Y;
  (this->VoxelSize).field0_0x0._s_0.X = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.X;
  (this->VoxelSize).field0_0x0._s_0.Y = (double)uVar1;
  (this->VoxelSize).field0_0x0._s_0.Z = PCGVolumeSampler::DefaultVoxelSize.field0_0x0._s_0.Z;
  this->bUnbounded = false;
  this->PointSteepness = 0.5;
  bVar2 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar2) {
    this->PointSteepness = 1.0;
  }
  return this;
}

// ~UPCGVolumeSamplerSettings @ 149c4df40

void __thiscall
UPCGVolumeSamplerSettings::~UPCGVolumeSamplerSettings(UPCGVolumeSamplerSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGVolumeSamplerSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60d40

TSharedPtr<IPCGElement,1> * __thiscall
UPCGVolumeSamplerSettings::CreateElement
          (UPCGVolumeSamplerSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGVolumeSamplerElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGVolumeSamplerElement__6B_;
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

// GetPrivateStaticClass @ 149c78ff0

UClass * __cdecl UPCGVolumeSamplerSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGVolumeSamplerSettings",
               &Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.InnerSingleton,
               StaticRegisterNativesUPCGVolumeSamplerSettings,0xe8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGVolumeSamplerSettings>,
               InternalVTableHelperCtorCaller<UPCGVolumeSamplerSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGVolumeSamplerSettings.InnerSingleton;
}

// InputPinProperties @ 149c802f0

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGVolumeSamplerSettings::InputPinProperties
          (UPCGVolumeSamplerSettings *this,
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
                     (&local_38,L"PCGVolumeSamplerElement",L"VolumeSamplerVolumePinTooltip",
                      L"The volume to sample with points. Can be any spatial data that can provide bounds."
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
  pFVar5 = FPCGPinProperties::FPCGPinProperties
                     ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
                      &PCGVolumeSamplerConstants::VolumeLabel,pFVar4,true,true,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))(local_38.TextData.Reference);
  }
  pFVar5->PinStatus = Required;
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"PCGVolumeSamplerElement",L"VolumeSamplerBoundingShapePinTooltip",
                      L"Optional. All sampled points must be contained within this shape.");
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
             &PCGVolumeSamplerConstants::BoundingShapeLabel,pFVar4,false,false,pFVar3);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c819e0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGVolumeSamplerSettings::OutputPinProperties
          (UPCGVolumeSamplerSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGVolumeSamplerSettings @ 149c920f0

void __cdecl UPCGVolumeSamplerSettings::StaticRegisterNativesUPCGVolumeSamplerSettings(void)

{
  return;
}

