// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 10

// StaticClass @ 149b31210

UClass * __cdecl UPCGCreatePointsGridSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreatePointsGridSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreatePointsGridSettings",
               &Z_Registration_Info_UClass_UPCGCreatePointsGridSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreatePointsGridSettings,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreatePointsGridSettings>,
               InternalVTableHelperCtorCaller<UPCGCreatePointsGridSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreatePointsGridSettings.InnerSingleton;
}

// UPCGCreatePointsGridSettings @ 149b55c90

UPCGCreatePointsGridSettings * __thiscall
UPCGCreatePointsGridSettings::UPCGCreatePointsGridSettings
          (UPCGCreatePointsGridSettings *this,FVTableHelper *param_1)

{
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->PointSteepness = 0.5;
  this->_padding_ = (longlong)&___7UPCGCreatePointsGridSettings__6B_;
  (this->GridExtents).field0_0x0._s_0.X = 500.0;
  (this->GridExtents).field0_0x0._s_0.Y = 500.0;
  (this->GridExtents).field0_0x0._s_0.Z = 50.0;
  (this->CellSize).field0_0x0._s_0.X = 100.0;
  (this->CellSize).field0_0x0._s_0.Y = 100.0;
  (this->CellSize).field0_0x0._s_0.Z = 100.0;
  this->CoordinateSpace = World;
  this->bSetPointsBounds = true;
  this->bCullPointsOutsideVolume = false;
  this->PointPosition = CellCenter;
  return this;
}

// UPCGCreatePointsGridSettings @ 149b55d20

UPCGCreatePointsGridSettings * __thiscall
UPCGCreatePointsGridSettings::UPCGCreatePointsGridSettings(UPCGCreatePointsGridSettings *this)

{
  bool bVar1;
  FObjectInitializer *pFVar2;
  
  pFVar2 = FObjectInitializer::Get();
  UPCGSettings::UPCGSettings((UPCGSettings *)this,pFVar2);
  this->CoordinateSpace = World;
  this->bSetPointsBounds = true;
  this->bCullPointsOutsideVolume = false;
  this->PointPosition = CellCenter;
  this->_padding_ = (longlong)&___7UPCGCreatePointsGridSettings__6B_;
  (this->GridExtents).field0_0x0._s_0.X = 500.0;
  (this->GridExtents).field0_0x0._s_0.Y = 500.0;
  (this->GridExtents).field0_0x0._s_0.Z = 50.0;
  (this->CellSize).field0_0x0._s_0.X = 100.0;
  (this->CellSize).field0_0x0._s_0.Y = 100.0;
  (this->CellSize).field0_0x0._s_0.Z = 100.0;
  this->PointSteepness = 0.5;
  bVar1 = PCGHelpers::IsNewObjectAndNotDefault((UObject *)this,false);
  if (bVar1) {
    this->PointSteepness = 1.0;
  }
  return this;
}

// ~UPCGCreatePointsGridSettings @ 149b58d00

void __thiscall
UPCGCreatePointsGridSettings::~UPCGCreatePointsGridSettings(UPCGCreatePointsGridSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGCreatePointsGridSettings__6B_;
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149b6a450

TSharedPtr<IPCGElement,1> * __thiscall
UPCGCreatePointsGridSettings::CreateElement
          (UPCGCreatePointsGridSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGCreatePointsGridElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGCreatePointsGridElement__6B_;
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

// GetPrivateStaticClass @ 149b90140

UClass * __cdecl UPCGCreatePointsGridSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGCreatePointsGridSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGCreatePointsGridSettings",
               &Z_Registration_Info_UClass_UPCGCreatePointsGridSettings.InnerSingleton,
               StaticRegisterNativesUPCGCreatePointsGridSettings,0x100,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UPCGCreatePointsGridSettings>,
               InternalVTableHelperCtorCaller<UPCGCreatePointsGridSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGCreatePointsGridSettings.InnerSingleton;
}

// InputPinProperties @ 149b92200

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreatePointsGridSettings::InputPinProperties
          (UPCGCreatePointsGridSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149b93ef0

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGCreatePointsGridSettings::OutputPinProperties
          (UPCGCreatePointsGridSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGSettings::DefaultPointOutputPinProperties((UPCGSettings *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// PostLoad @ 149b95960

void __thiscall UPCGCreatePointsGridSettings::PostLoad(UPCGCreatePointsGridSettings *this)

{
  UObject::PostLoad((UObject *)this);
  UPCGSettings::InitializeCachedOverridableParams((UPCGSettings *)this,false);
  UPCGSettings::InitializeOverriddenSettingsPropertyBag((UPCGSettings *)this);
  return;
}

// StaticRegisterNativesUPCGCreatePointsGridSettings @ 149b983d0

void __cdecl UPCGCreatePointsGridSettings::StaticRegisterNativesUPCGCreatePointsGridSettings(void)

{
  return;
}

