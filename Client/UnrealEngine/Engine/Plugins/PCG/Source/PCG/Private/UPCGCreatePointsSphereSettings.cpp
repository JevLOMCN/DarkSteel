// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b32140

UClass * __cdecl UPCGCreatePointsSphereSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreatePointsSphereSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreatePointsSphereSettings",
               &Z_Registration_Info_UClass_UPCGCreatePointsSphereSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreatePointsSphereSettings,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreatePointsSphereSettings>,
               InternalVTableHelperCtorCaller<UPCGCreatePointsSphereSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreatePointsSphereSettings.InnerSingleton;
}

// UPCGCreatePointsSphereSettings @ 149b560a0

UPCGCreatePointsSphereSettings * __thiscall
UPCGCreatePointsSphereSettings::UPCGCreatePointsSphereSettings
          (UPCGCreatePointsSphereSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->SphereGeneration = Geodesic;
  this->CoordinateSpace = World;
  this->_padding_ = (longlong)&___7UPCGCreatePointsSphereSettings__6B_;
  this->PointOrientation = Radial;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Theta = 12.0;
  this->Phi = 12.0;
  this->LatitudinalStartAngle = -90.0;
  this->LatitudinalEndAngle = 90.0;
  this->LongitudinalStartAngle = -180.0;
  this->LongitudinalEndAngle = 180.0;
  (this->Origin).field0_0x0._s_0.Z = (double)uVar1;
  this->Radius = 100.0;
  this->GeodesicSubdivisions = 2;
  this->LatitudinalSegments = 0xf;
  this->LongitudinalSegments = 0x1e;
  this->SampleCount = 100;
  this->PoissonDistance = 100.0;
  this->PoissonMaxAttempts = 0x20;
  this->Jitter = 0.0;
  this->PointSteepness = 0.5;
  this->bCullPointsOutsideVolume = false;
  this->PointLimit = 1000000;
  return this;
}

// UPCGCreatePointsSphereSettings @ 149b561d0

UPCGCreatePointsSphereSettings * __thiscall
UPCGCreatePointsSphereSettings::UPCGCreatePointsSphereSettings(UPCGCreatePointsSphereSettings *this)

{
  undefined8 uVar1;
  bool bVar2;
  FObjectInitializer *pFVar3;
  
  pFVar3 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar3);
  this->SphereGeneration = Geodesic;
  this->CoordinateSpace = World;
  this->_padding_ = (longlong)&___7UPCGCreatePointsSphereSettings__6B_;
  this->PointOrientation = Radial;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->Theta = 12.0;
  this->Phi = 12.0;
  this->LatitudinalStartAngle = -90.0;
  this->LatitudinalEndAngle = 90.0;
  this->LongitudinalStartAngle = -180.0;
  this->Radius = 100.0;
  this->PoissonDistance = 100.0;
  this->LongitudinalEndAngle = 180.0;
  (this->Origin).field0_0x0._s_0.Z = (double)uVar1;
  this->GeodesicSubdivisions = 2;
  this->LatitudinalSegments = 0xf;
  this->LongitudinalSegments = 0x1e;
  this->SampleCount = 100;
  this->PoissonMaxAttempts = 0x20;
  this->Jitter = 0.0;
  this->PointSteepness = 0.5;
  this->bCullPointsOutsideVolume = false;
  this->PointLimit = 1000000;
  bVar2 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar2) {
    this->PointSteepness = 1.0;
  }
  return this;
}

// ~UPCGCreatePointsSphereSettings @ 149b58d60

void __thiscall
UPCGCreatePointsSphereSettings::~UPCGCreatePointsSphereSettings
          (UPCGCreatePointsSphereSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGCreatePointsSphereSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6a5d0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreatePointsSphereSettings::CreateElement
          (UPCGCreatePointsSphereSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGCreatePointsSphereElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreatePointsSphereElement__6B_;
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

// GetPrivateStaticClass @ 149b902c0

UClass * __cdecl UPCGCreatePointsSphereSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreatePointsSphereSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreatePointsSphereSettings",
               &Z_Registration_Info_UClass_UPCGCreatePointsSphereSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreatePointsSphereSettings,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreatePointsSphereSettings>,
               InternalVTableHelperCtorCaller<UPCGCreatePointsSphereSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreatePointsSphereSettings.InnerSingleton;
}

// InputPinProperties @ 149b92240

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreatePointsSphereSettings::InputPinProperties
          (UPCGCreatePointsSphereSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93f30

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreatePointsSphereSettings::OutputPinProperties
          (UPCGCreatePointsSphereSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGCreatePointsSphereSettings @ 149b983f0

void __cdecl
UPCGCreatePointsSphereSettings::StaticRegisterNativesUPCGCreatePointsSphereSettings(void)

{
  return;
}

// UseSeed @ 149b98d70

bool __thiscall UPCGCreatePointsSphereSettings::UseSeed(UPCGCreatePointsSphereSettings *this)

{
  return true;
}

