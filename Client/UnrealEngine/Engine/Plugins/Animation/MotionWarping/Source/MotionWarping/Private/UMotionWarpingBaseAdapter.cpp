// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 11

// StaticClass @ 14cefe2b0

UClass * __cdecl UMotionWarpingBaseAdapter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingBaseAdapter",
               &Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.InnerSingleton,
               StaticRegisterNativesUMotionWarpingBaseAdapter,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionWarpingBaseAdapter>,
               InternalVTableHelperCtorCaller<UMotionWarpingBaseAdapter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.InnerSingleton;
}

// UMotionWarpingBaseAdapter @ 14cf04200

UMotionWarpingBaseAdapter * __thiscall
UMotionWarpingBaseAdapter::UMotionWarpingBaseAdapter
          (UMotionWarpingBaseAdapter *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMotionWarpingBaseAdapter__6B_;
  *(undefined8 *)&this->WarpLocalRootMotionDelegate = 0;
  *(undefined8 *)&(this->WarpLocalRootMotionDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WarpLocalRootMotionDelegate).field_0x10 = 0;
  return this;
}

// UMotionWarpingBaseAdapter @ 14cf04240

UMotionWarpingBaseAdapter * __thiscall
UMotionWarpingBaseAdapter::UMotionWarpingBaseAdapter
          (UMotionWarpingBaseAdapter *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMotionWarpingBaseAdapter__6B_;
  *(undefined8 *)&this->WarpLocalRootMotionDelegate = 0;
  *(undefined8 *)&(this->WarpLocalRootMotionDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->WarpLocalRootMotionDelegate).field_0x10 = 0;
  return this;
}

// ~UMotionWarpingBaseAdapter @ 14cf05780

void __thiscall
UMotionWarpingBaseAdapter::~UMotionWarpingBaseAdapter(UMotionWarpingBaseAdapter *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UMotionWarpingBaseAdapter__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->WarpLocalRootMotionDelegate);
  pvVar1 = *(void **)&(this->WarpLocalRootMotionDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->WarpLocalRootMotionDelegate);
  UObject::~UObject((UObject *)this);
  return;
}

// GetActor @ 14cf0ef00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall UMotionWarpingBaseAdapter::GetActor(UMotionWarpingBaseAdapter *this)

{
  return (AActor *)0x0;
}

// GetBaseVisualRotationOffset @ 14cf0f170

TQuat<double> * __thiscall
UMotionWarpingBaseAdapter::GetBaseVisualRotationOffset
          (UMotionWarpingBaseAdapter *this,TQuat<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = UE::Math::TQuat<double>::Identity.W;
  dVar2 = UE::Math::TQuat<double>::Identity.Z;
  dVar1 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar1;
  __return_storage_ptr__->Z = dVar2;
  __return_storage_ptr__->W = dVar3;
  return __return_storage_ptr__;
}

// GetBaseVisualTranslationOffset @ 14cf0f1f0

TVector<double> * __thiscall
UMotionWarpingBaseAdapter::GetBaseVisualTranslationOffset
          (UMotionWarpingBaseAdapter *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetMesh @ 14cf0fa20

USkeletalMeshComponent * __thiscall
UMotionWarpingBaseAdapter::GetMesh(UMotionWarpingBaseAdapter *this)

{
  return (USkeletalMeshComponent *)0x0;
}

// GetPrivateStaticClass @ 14cf102f0

UClass * __cdecl UMotionWarpingBaseAdapter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingBaseAdapter",
               &Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.InnerSingleton,
               StaticRegisterNativesUMotionWarpingBaseAdapter,0x40,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMotionWarpingBaseAdapter>,
               InternalVTableHelperCtorCaller<UMotionWarpingBaseAdapter>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingBaseAdapter.InnerSingleton;
}

// GetVisualRootLocation @ 14cf11c10

TVector<double> * __thiscall
UMotionWarpingBaseAdapter::GetVisualRootLocation
          (UMotionWarpingBaseAdapter *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// StaticRegisterNativesUMotionWarpingBaseAdapter @ 14cf1bd50

void __cdecl UMotionWarpingBaseAdapter::StaticRegisterNativesUMotionWarpingBaseAdapter(void)

{
  return;
}

