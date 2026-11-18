// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 16

// StaticClass @ 14cefe770

UClass * __cdecl UMotionWarpingSwitchOffCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton,
               StaticRegisterNativesUMotionWarpingSwitchOffCondition,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCondition>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton;
}

// UMotionWarpingSwitchOffCondition @ 14cf04650

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMotionWarpingSwitchOffCondition * __thiscall
UMotionWarpingSwitchOffCondition::UMotionWarpingSwitchOffCondition
          (UMotionWarpingSwitchOffCondition *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bUseWarpTargetAsTargetLocation = true;
  this->Effect = CancelWarping;
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
  (this->OwnerActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->TargetActor).field0_0x0.DebugPtr = (AActor *)0x0;
  this->MotionWarpingTarget = (FMotionWarpingTarget *)0x0;
  this->bIsInitialized = false;
  return this;
}

// UMotionWarpingSwitchOffCondition @ 14cf04690

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMotionWarpingSwitchOffCondition * __thiscall
UMotionWarpingSwitchOffCondition::UMotionWarpingSwitchOffCondition
          (UMotionWarpingSwitchOffCondition *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->bUseWarpTargetAsTargetLocation = true;
  this->Effect = CancelWarping;
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
  (this->OwnerActor).field0_0x0.DebugPtr = (AActor *)0x0;
  (this->TargetActor).field0_0x0.DebugPtr = (AActor *)0x0;
  this->MotionWarpingTarget = (FMotionWarpingTarget *)0x0;
  this->bIsInitialized = false;
  return this;
}

// ~UMotionWarpingSwitchOffCondition @ 14cf05950

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMotionWarpingSwitchOffCondition::~UMotionWarpingSwitchOffCondition
          (UMotionWarpingSwitchOffCondition *this)

{
  this->_padding_ = (longlong)&___7UMotionWarpingSwitchOffCondition__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Check @ 14cf0a5d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UMotionWarpingSwitchOffCondition::Check(UMotionWarpingSwitchOffCondition *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014cf0a5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0x2b8))();
  return (bool)uVar1;
}

// ExtraDebugInfo @ 14cf0ca50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UMotionWarpingSwitchOffCondition::ExtraDebugInfo
          (UMotionWarpingSwitchOffCondition *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14cf10820

UClass * __cdecl UMotionWarpingSwitchOffCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionWarping",L"MotionWarpingSwitchOffCondition",
               &Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton,
               StaticRegisterNativesUMotionWarpingSwitchOffCondition,0x48,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMotionWarpingSwitchOffCondition>,
               InternalVTableHelperCtorCaller<UMotionWarpingSwitchOffCondition>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMotionWarpingSwitchOffCondition.InnerSingleton;
}

// GetTargetLocation @ 14cf10ec0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UMotionWarpingSwitchOffCondition::GetTargetLocation
          (UMotionWarpingSwitchOffCondition *this,TVector<double> *__return_storage_ptr__)

{
  USceneComponent *pUVar1;
  TTransform<double> *pTVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  TTransform<double> local_68;
  
  if (this->bUseWarpTargetAsTargetLocation != false) {
    if (this->MotionWarpingTarget != (FMotionWarpingTarget *)0x0) {
      pTVar2 = FMotionWarpingTarget::GetTargetTrasform(this->MotionWarpingTarget,&local_68);
      local_88._0_4_ = *(undefined4 *)(pTVar2->Translation).XY.m128d_f64;
      local_88._4_4_ = *(undefined4 *)((longlong)(pTVar2->Translation).XY.m128d_f64 + 4);
      uStack_80._0_4_ = *(undefined4 *)((pTVar2->Translation).XY.m128d_f64 + 1);
      uStack_80._4_4_ = *(undefined4 *)((longlong)(pTVar2->Translation).XY.m128d_f64 + 0xc);
      local_78 = (pTVar2->Translation).ZW.m128d_f64[0];
      goto LAB_14cf10f64;
    }
    if (2 < (byte)LogMotionWarping._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    }
  }
  pUVar1 = (((this->TargetActor).field0_0x0.DebugPtr)->RootComponent).field0_0x0.DebugPtr;
  if (pUVar1 == (USceneComponent *)0x0) {
    local_88 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uStack_80 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_88 = (pUVar1->ComponentToWorld).Translation.XY.m128d_f64[0];
    uStack_80 = *(double *)((longlong)&(pUVar1->ComponentToWorld).Translation.XY + 8);
    local_78 = (pUVar1->ComponentToWorld).Translation.ZW.m128d_f64[0];
  }
LAB_14cf10f64:
  *(undefined4 *)&__return_storage_ptr__->field0_0x0 = (undefined4)local_88;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = local_88._4_4_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uStack_80._4_4_;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = local_78;
  return __return_storage_ptr__;
}

// GetTargetRotation @ 14cf10f90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
UMotionWarpingSwitchOffCondition::GetTargetRotation
          (UMotionWarpingSwitchOffCondition *this,TRotator<double> *__return_storage_ptr__)

{
  TTransform<double> *pTVar1;
  TQuat<double> local_88;
  TTransform<double> local_68;
  
  if (this->bUseWarpTargetAsTargetLocation != false) {
    if (this->MotionWarpingTarget != (FMotionWarpingTarget *)0x0) {
      pTVar1 = FMotionWarpingTarget::GetTargetTrasform(this->MotionWarpingTarget,&local_68);
      local_88.X = (pTVar1->Rotation).XY.m128d_f64[0];
      local_88.Y = (pTVar1->Rotation).XY.m128d_f64[1];
      local_88.Z = (pTVar1->Rotation).ZW.m128d_f64[0];
      local_88.W = (pTVar1->Rotation).ZW.m128d_f64[1];
      UE::Math::TQuat<double>::Rotator(&local_88,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    if (2 < (byte)LogMotionWarping._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    }
  }
  AActor::GetActorRotation((this->TargetActor).field0_0x0.DebugPtr,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsConditionValid @ 14cf123f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMotionWarpingSwitchOffCondition::IsConditionValid(UMotionWarpingSwitchOffCondition *this)

{
  AActor *pAVar1;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  pAVar1 = (this->OwnerActor).field0_0x0.DebugPtr;
  if ((pAVar1 == (AActor *)0x0) || (((uint)pAVar1->_padding_ >> 0x1e & 1) != 0)) {
    if ((byte)LogMotionWarping._0_1_ < 4) {
      return false;
    }
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
  }
  else if (this->bUseWarpTargetAsTargetLocation == false) {
    pAVar1 = (this->TargetActor).field0_0x0.DebugPtr;
    if ((pAVar1 != (AActor *)0x0) && (((uint)pAVar1->_padding_ >> 0x1e & 1) == 0)) {
      return true;
    }
    if ((byte)LogMotionWarping._0_1_ < 4) {
      return false;
    }
    local_res8 = (FName)((this->OwnerActor).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    if (this->MotionWarpingTarget != (FMotionWarpingTarget *)0x0) {
      return true;
    }
    if ((byte)LogMotionWarping._0_1_ < 4) {
      return false;
    }
    local_res8 = *(FName *)(this->_padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_28);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return false;
}

// OnCheck @ 14cf12d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UMotionWarpingSwitchOffCondition::OnCheck(UMotionWarpingSwitchOffCondition *this)

{
  return false;
}

// SetMotionWarpingTarget @ 14cf1bab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMotionWarpingSwitchOffCondition::SetMotionWarpingTarget
          (UMotionWarpingSwitchOffCondition *this,FMotionWarpingTarget *param_1)

{
  this->MotionWarpingTarget = param_1;
  return;
}

// SetOwnerActor @ 14cf1bb20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMotionWarpingSwitchOffCondition::SetOwnerActor
          (UMotionWarpingSwitchOffCondition *this,AActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->OwnerActor).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->OwnerActor).field0_0x0.DebugPtr = param_1;
  return;
}

// SetTargetActor @ 14cf1bc00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMotionWarpingSwitchOffCondition::SetTargetActor
          (UMotionWarpingSwitchOffCondition *this,AActor *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->TargetActor).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->TargetActor).field0_0x0.DebugPtr = param_1;
  return;
}

// SetWarpTargetForDestination @ 14cf1bce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMotionWarpingSwitchOffCondition::SetWarpTargetForDestination
          (UMotionWarpingSwitchOffCondition *this,FMotionWarpingTarget *param_1)

{
  this->MotionWarpingTarget = param_1;
  return;
}

// StaticRegisterNativesUMotionWarpingSwitchOffCondition @ 14cf1beb0

void __cdecl
UMotionWarpingSwitchOffCondition::StaticRegisterNativesUMotionWarpingSwitchOffCondition(void)

{
  return;
}

