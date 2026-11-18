// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 11

// StaticClass @ 149c3ba50

UClass * __cdecl UPCGTransformPointsSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTransformPointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTransformPointsSettings",
               &Z_Registration_Info_UClass_UPCGTransformPointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGTransformPointsSettings,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTransformPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGTransformPointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsSettings.InnerSingleton;
}

// UPCGTransformPointsSettings @ 149c4c600

UPCGTransformPointsSettings * __thiscall
UPCGTransformPointsSettings::UPCGTransformPointsSettings
          (UPCGTransformPointsSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bApplyToAttribute = false;
  this->_padding_ = (longlong)&___7UPCGTransformPointsSettings__6B_;
  (this->AttributeName).ComparisonIndex = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AttributeName).Number = 0;
  (this->OffsetMin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OffsetMin).field0_0x0._s_0.Y = (double)uVar1;
  (this->OffsetMin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OffsetMax).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OffsetMax).field0_0x0._s_0.Y = (double)uVar1;
  (this->OffsetMax).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bAbsoluteOffset = false;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationMin).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationMin).Yaw = dVar2;
  (this->RotationMin).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationMax).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationMax).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bAbsoluteRotation = false;
  (this->RotationMax).Roll = dVar2;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ScaleMin).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ScaleMin).field0_0x0._s_0.Y = (double)uVar1;
  (this->ScaleMin).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ScaleMax).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ScaleMax).field0_0x0._s_0.Y = (double)uVar1;
  (this->ScaleMax).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bRecomputeSeed = false;
  this->bAbsoluteScale = false;
  this->bUniformScale = true;
  return this;
}

// UPCGTransformPointsSettings @ 149c4c710

UPCGTransformPointsSettings * __thiscall
UPCGTransformPointsSettings::UPCGTransformPointsSettings
          (UPCGTransformPointsSettings *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->bApplyToAttribute = false;
  this->_padding_ = (longlong)&___7UPCGTransformPointsSettings__6B_;
  (this->AttributeName).ComparisonIndex = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->AttributeName).Number = 0;
  (this->OffsetMin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OffsetMin).field0_0x0._s_0.Y = (double)uVar1;
  (this->OffsetMin).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->OffsetMax).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->OffsetMax).field0_0x0._s_0.Y = (double)uVar1;
  (this->OffsetMax).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bAbsoluteOffset = false;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationMin).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationMin).Yaw = dVar2;
  (this->RotationMin).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationMax).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationMax).Yaw = dVar2;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this->bAbsoluteRotation = false;
  (this->RotationMax).Roll = dVar2;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ScaleMin).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ScaleMin).field0_0x0._s_0.Y = (double)uVar1;
  (this->ScaleMin).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ScaleMax).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ScaleMax).field0_0x0._s_0.Y = (double)uVar1;
  (this->ScaleMax).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->bRecomputeSeed = false;
  this->bAbsoluteScale = false;
  this->bUniformScale = true;
  return this;
}

// ~UPCGTransformPointsSettings @ 149c4de80

void __thiscall
UPCGTransformPointsSettings::~UPCGTransformPointsSettings(UPCGTransformPointsSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGTransformPointsSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60a40

TSharedPtr<IPCGElement,1> * __thiscall
UPCGTransformPointsSettings::CreateElement
          (UPCGTransformPointsSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGTransformPointsElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGTransformPointsElement__6B_;
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

// GetPrivateStaticClass @ 149c78cf0

UClass * __cdecl UPCGTransformPointsSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGTransformPointsSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGTransformPointsSettings",
               &Z_Registration_Info_UClass_UPCGTransformPointsSettings.InnerSingleton,
               StaticRegisterNativesUPCGTransformPointsSettings,0x180,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGTransformPointsSettings>,
               InternalVTableHelperCtorCaller<UPCGTransformPointsSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGTransformPointsSettings.InnerSingleton;
}

// GetPropertiesToAllocate @ 149c792f0

EPCGPointNativeProperties __thiscall
UPCGTransformPointsSettings::GetPropertiesToAllocate(UPCGTransformPointsSettings *this)

{
  EPCGPointNativeProperties EVar1;
  
  if (this->bApplyToAttribute != false) {
    return MetadataEntry;
  }
  EVar1 = Transform;
  if (this->bRecomputeSeed != false) {
    EVar1 = Seed|Transform;
  }
  return EVar1;
}

// InputPinProperties @ 149c80290

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGTransformPointsSettings::InputPinProperties
          (UPCGTransformPointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointInputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c817a0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGTransformPointsSettings::OutputPinProperties
          (UPCGTransformPointsSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGTransformPointsSettings @ 149c920b0

void __cdecl UPCGTransformPointsSettings::StaticRegisterNativesUPCGTransformPointsSettings(void)

{
  return;
}

// UseSeed @ 149c936b0

bool __thiscall UPCGTransformPointsSettings::UseSeed(UPCGTransformPointsSettings *this)

{
  return true;
}

