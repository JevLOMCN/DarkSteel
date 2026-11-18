// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 9

// StaticClass @ 149c39470

UClass * __cdecl UPCGWorldRayHitSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldRayHitSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldRayHitSettings",
               &Z_Registration_Info_UClass_UPCGWorldRayHitSettings.InnerSingleton,
               StaticRegisterNativesUPCGWorldRayHitSettings,0x228,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGWorldRayHitSettings>,
               InternalVTableHelperCtorCaller<UPCGWorldRayHitSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldRayHitSettings.InnerSingleton;
}

// UPCGWorldRayHitSettings @ 149c4cbc0

UPCGWorldRayHitSettings * __thiscall
UPCGWorldRayHitSettings::UPCGWorldRayHitSettings
          (UPCGWorldRayHitSettings *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGWorldRayHitSettings__6B_;
  (this->CollisionShape).ShapeType = Line;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Y = (double)uVar1;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CollisionShape).SphereRadius = 100.0;
  (this->CollisionShape).CapsuleRadius = 100.0;
  (this->CollisionShape).CapsuleHalfHeight = 100.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CollisionShape).ShapeRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CollisionShape).ShapeRotation.Yaw = dVar2;
  (this->CollisionShape).ShapeRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams(&this->QueryParams);
  return this;
}

// UPCGWorldRayHitSettings @ 149c4cc60

UPCGWorldRayHitSettings * __thiscall
UPCGWorldRayHitSettings::UPCGWorldRayHitSettings
          (UPCGWorldRayHitSettings *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  double dVar2;
  
  UPCGSettings::UPCGSettings((UPCGSettings *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGWorldRayHitSettings__6B_;
  (this->CollisionShape).ShapeType = Line;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Y = (double)uVar1;
  (this->CollisionShape).BoxHalfExtent.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CollisionShape).SphereRadius = 100.0;
  (this->CollisionShape).CapsuleRadius = 100.0;
  (this->CollisionShape).CapsuleHalfHeight = 100.0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->CollisionShape).ShapeRotation.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->CollisionShape).ShapeRotation.Yaw = dVar2;
  (this->CollisionShape).ShapeRotation.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  FPCGWorldRayHitQueryParams::FPCGWorldRayHitQueryParams(&this->QueryParams);
  return this;
}

// ~UPCGWorldRayHitSettings @ 149c4dfa0

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

void __thiscall UPCGWorldRayHitSettings::~UPCGWorldRayHitSettings(UPCGWorldRayHitSettings *this)

{
  this->_padding_ = (longlong)&___7UPCGWorldRayHitSettings__6B_;
  FPCGWorldCommonQueryParams::~FPCGWorldCommonQueryParams
            ((FPCGWorldCommonQueryParams *)&this->QueryParams);
  UPCGSettings::~UPCGSettings((UPCGSettings *)this);
  return;
}

// CreateElement @ 149c60ec0

TSharedPtr<IPCGElement,1> * __thiscall
UPCGWorldRayHitSettings::CreateElement
          (UPCGWorldRayHitSettings *this,TSharedPtr<IPCGElement,1> *__return_storage_ptr__)

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
         ___7__TIntrusiveReferenceController_VFPCGWorldRayHitQueryElement___00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = (longlong)&___7FPCGWorldRayHitQueryElement__6B_;
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

// GetPrivateStaticClass @ 149c79170

UClass * __cdecl UPCGWorldRayHitSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGWorldRayHitSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGWorldRayHitSettings",
               &Z_Registration_Info_UClass_UPCGWorldRayHitSettings.InnerSingleton,
               StaticRegisterNativesUPCGWorldRayHitSettings,0x228,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UPCGWorldRayHitSettings>,
               InternalVTableHelperCtorCaller<UPCGWorldRayHitSettings>,local_res8,
               UPCGSettings::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGWorldRayHitSettings.InnerSingleton;
}

// InputPinProperties @ 149c80490

/* WARNING: Enum "EPCGWorldQueryFilter": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGWorldRayHitSettings::InputPinProperties
          (UPCGWorldRayHitSettings *this,
          TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  FPCGWorldCommonQueryParams::AddFilterPinIfNeeded
            ((FPCGWorldCommonQueryParams *)&this->QueryParams,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OutputPinProperties @ 149c81a90

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */

TArray<FPCGPinProperties,TSizedDefaultAllocator<32>_> * __thiscall
UPCGWorldRayHitSettings::OutputPinProperties
          (UPCGWorldRayHitSettings *this,
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
  pFVar4 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_28,Surface);
  FPCGPinProperties::FPCGPinProperties
            ((FPCGPinProperties *)(pFVar1 + (longlong)iVar2 * 0x30),
             &PCGPinConstants::DefaultOutputLabel,pFVar4,true,true,pFVar3);
  return __return_storage_ptr__;
}

// StaticRegisterNativesUPCGWorldRayHitSettings @ 149c92110

void __cdecl UPCGWorldRayHitSettings::StaticRegisterNativesUPCGWorldRayHitSettings(void)

{
  return;
}

