// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 29

// StaticClass @ 14cf30080

UClass * __cdecl UARPin::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPin",
               &Z_Registration_Info_UClass_UARPin.InnerSingleton,StaticRegisterNativesUARPin,0x160,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UARPin>,
               InternalVTableHelperCtorCaller<UARPin>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPin.InnerSingleton;
}

// UARPin @ 14cf41f70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARPin * __thiscall UARPin::UARPin(UARPin *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARPin__6B_;
  (this->TrackedGeometry).field0_0x0.DebugPtr = (UARTrackedGeometry *)0x0;
  (this->PinnedComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->ARSystem).Object = (FARSupportInterface *)0x0;
  (this->ARSystem).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  *(undefined8 *)&this->OnARTrackingStateChanged = 0;
  *(undefined8 *)&(this->OnARTrackingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnARTrackingStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnARTransformUpdated = 0;
  *(undefined8 *)&(this->OnARTransformUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnARTransformUpdated).field_0x10 = 0;
  return this;
}

// UARPin @ 14cf42090

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARPin * __thiscall UARPin::UARPin(UARPin *this,FObjectInitializer *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARPin__6B_;
  (this->TrackedGeometry).field0_0x0.DebugPtr = (UARTrackedGeometry *)0x0;
  (this->PinnedComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->ARSystem).Object = (FARSupportInterface *)0x0;
  (this->ARSystem).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  *(undefined8 *)&this->OnARTrackingStateChanged = 0;
  *(undefined8 *)&(this->OnARTrackingStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnARTrackingStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnARTransformUpdated = 0;
  *(undefined8 *)&(this->OnARTransformUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnARTransformUpdated).field_0x10 = 0;
  return this;
}

// ~UARPin @ 14cf44560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARPin::~UARPin(UARPin *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  *(undefined ***)this = &___7UARPin__6B_;
  pvVar3 = *(void **)&(this->OnARTransformUpdated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARTransformUpdated);
  pvVar3 = *(void **)&(this->OnARTrackingStateChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnARTrackingStateChanged);
  pTVar4 = (this->ARSystem).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  UObject::~UObject((UObject *)this);
  return;
}

// DebugDraw @ 14cf4cc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UARPin::DebugDraw(UARPin *this,UWorld *param_1,FLinearColor *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TRotator<double> *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStackY_1b8 [32];
  FColor_u_0 local_178 [2];
  FName local_170;
  FString local_168;
  TVector<double>_u_0 local_158;
  TQuat<double> local_138;
  TRotator<double> local_118;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  GetLocalToWorldTransform(this,&local_f8);
  fVar3 = __real_437f0000;
  fVar2 = __real_3f000000;
  fVar1 = __real_3f800000;
  local_158._s_0.X = local_f8.Translation.XY.m128d_f64[0];
  local_158._s_0.Y = local_f8.Translation.XY.m128d_f64[1];
  fVar5 = (param_2->field0_0x0)._s_0.B;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  local_158._s_0.Z = local_f8.Translation.ZW.m128d_f64[0];
  fVar7 = (param_2->field0_0x0)._s_0.R;
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar7) {
    fVar7 = __real_3f800000;
  }
  fVar6 = (param_2->field0_0x0)._s_0.G;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_178[0]._0_1_ = (undefined1)(int)(fVar5 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar6) {
    fVar6 = __real_3f800000;
  }
  fVar5 = (param_2->field0_0x0)._s_0.A;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  local_178[0]._1_1_ = (undefined1)(int)(fVar6 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  local_178[0]._2_1_ = (undefined1)(int)(fVar7 * __real_437f0000 + __real_3f000000);
  local_138.Z = local_f8.Rotation.ZW.m128d_f64[0];
  local_138.W = local_f8.Rotation.ZW.m128d_f64[1];
  local_178[0]._3_1_ = (undefined1)(int)(fVar5 * __real_437f0000 + __real_3f000000);
  local_138.X = local_f8.Rotation.XY.m128d_f64[0];
  local_138.Y = local_f8.Rotation.XY.m128d_f64[1];
  pTVar4 = UE::Math::TRotator<double>::TRotator<double>(&local_118,&local_138);
  DrawDebugCrosshairs(param_1,(TVector<double> *)&local_158._s_0,pTVar4,param_3,
                      (FColor *)&local_178[0]._s_0,0.0 < param_4,param_4,'\0');
  local_170 = this->DebugName;
  ::FName::ToString(&local_170,&local_168);
  fVar5 = (param_2->field0_0x0)._s_0.B;
  fVar7 = (param_2->field0_0x0)._s_0.G;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (fVar1 <= fVar5) {
    fVar5 = fVar1;
  }
  if (fVar1 <= fVar7) {
    fVar7 = fVar1;
  }
  local_178[0]._0_1_ = (undefined1)(int)(fVar5 * fVar3 + fVar2);
  local_178[0]._1_1_ = (undefined1)(int)(fVar7 * fVar3 + fVar2);
  fVar5 = (param_2->field0_0x0)._s_0.R;
  fVar7 = (param_2->field0_0x0)._s_0.A;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  if (fVar1 <= fVar5) {
    fVar5 = fVar1;
  }
  if (fVar1 <= fVar7) {
    fVar7 = fVar1;
  }
  local_178[0]._2_1_ = (undefined1)(int)(fVar5 * fVar3 + fVar2);
  local_178[0]._3_1_ = (undefined1)(int)(fVar7 * fVar3 + fVar2);
  ARDebugHelpers::DrawDebugString
            (param_1,(TVector<double> *)&local_158._s_0,&local_168,param_3 * __real_3e800000,
             (FColor *)&local_178[0]._s_0,param_4,true);
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  return;
}

// GetARSystem @ 14cf4fb00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TSharedPtr<FARSupportInterface,1> * __thiscall
UARPin::GetARSystem(UARPin *this,TSharedPtr<FARSupportInterface,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  bool bVar4;
  
  __return_storage_ptr__->Object = (FARSupportInterface *)0x0;
  pTVar1 = (this->ARSystem).WeakReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar1->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar3 = pTVar1->SharedReferenceCount;
      bVar4 = aVar2 == aVar3;
      if (bVar4) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar4);
  }
  if ((__return_storage_ptr__->SharedReferenceCount).ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (this->ARSystem).Object;
  }
  return __return_storage_ptr__;
}

// GetDebugName @ 14cf50b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FName __thiscall UARPin::GetDebugName(UARPin *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->DebugName;
  return in_RDX;
}

// GetLocalToTrackingTransform @ 14cf51e10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UARPin::GetLocalToTrackingTransform(UARPin *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1];
  dVar2 = (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0];
  dVar4 = (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0];
  dVar3 = (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetLocalToTrackingTransform_NoAlignment @ 14cf51ee0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UARPin::GetLocalToTrackingTransform_NoAlignment
          (UARPin *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[1];
  dVar2 = (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[0];
  dVar3 = (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
       (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
  dVar1 = (this->LocalToTrackingTransform).Translation.XY.m128d_f64[0];
  dVar4 = (this->LocalToTrackingTransform).Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[0];
  dVar3 = (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar4;
  dVar1 = (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[0];
  dVar4 = (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar3;
  dVar2 = (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[0];
  dVar3 = (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar1;
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar4;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar2;
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar3;
  return __return_storage_ptr__;
}

// GetLocalToWorldTransform @ 14cf520e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __thiscall
UARPin::GetLocalToWorldTransform(UARPin *this,TTransform<double> *__return_storage_ptr__)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  atomic<int> aVar10;
  atomic<int> aVar11;
  TTransform<double> *pTVar12;
  FARSupportInterface *pFVar13;
  FARSupportInterface *pFVar14;
  FARSupportInterface *pFVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8.Rotation.XY.m128d_f64[0] =
       (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[0];
  local_d8.Rotation.XY.m128d_f64[1] =
       (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1];
  pFVar14 = (FARSupportInterface *)(this->ARSystem).WeakReferenceCount.ReferenceController;
  pFVar15 = (FARSupportInterface *)0x0;
  local_d8.Rotation.ZW.m128d_f64[0] =
       (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0];
  local_d8.Rotation.ZW.m128d_f64[1] =
       (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1];
  local_d8.Translation.XY.m128d_f64[0] =
       (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0];
  local_d8.Translation.XY.m128d_f64[1] =
       (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1];
  local_d8.Translation.ZW.m128d_f64[0] =
       (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0];
  local_d8.Translation.ZW.m128d_f64[1] =
       (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1];
  local_d8.Scale3D.XY.m128d_f64[0] = (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0]
  ;
  local_d8.Scale3D.XY.m128d_f64[1] = (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1]
  ;
  local_d8.Scale3D.ZW.m128d_f64[0] = (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0]
  ;
  local_d8.Scale3D.ZW.m128d_f64[1] = (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1]
  ;
  pFVar13 = pFVar14;
  if (pFVar14 != (FARSupportInterface *)0x0) {
    aVar10 = *(atomic<int> *)&pFVar14->field_0x8;
    do {
      pFVar13 = pFVar15;
      if (aVar10 == (atomic<int>)0x0) goto LAB_14cf52185;
      LOCK();
      aVar11 = *(atomic<int> *)&pFVar14->field_0x8;
      bVar16 = aVar10 == aVar11;
      if (bVar16) {
        *(atomic<int> *)&pFVar14->field_0x8 = (atomic<int>)((int)aVar10 + 1);
        aVar11 = aVar10;
      }
      UNLOCK();
      aVar10 = aVar11;
    } while (!bVar16);
    pFVar15 = (this->ARSystem).Object;
    pFVar13 = pFVar14;
    if (pFVar15 != (FARSupportInterface *)0x0) goto LAB_14cf521ab;
  }
LAB_14cf52185:
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pFVar14 = pFVar13;
  if (bVar16) {
    pcVar1 = (code *)swi(3);
    pTVar12 = (TTransform<double> *)(*pcVar1)();
    return pTVar12;
  }
LAB_14cf521ab:
  pTVar12 = (TTransform<double> *)
            (**(code **)((longlong)*pFVar15->XRTrackingSystem + 0x90))
                      (pFVar15->XRTrackingSystem,local_78);
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Rotation).ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Translation).ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->Scale3D).ZW.m128d_f64 = auVar9;
  UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_d8,pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar14);
  return __return_storage_ptr__;
}

// GetPinnedComponent @ 14cf53490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall UARPin::GetPinnedComponent(UARPin *this)

{
  return (this->PinnedComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14cf54d30

UClass * __cdecl UARPin::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARPin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARPin",
               &Z_Registration_Info_UClass_UARPin.InnerSingleton,StaticRegisterNativesUARPin,0x160,
               0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UARPin>,
               InternalVTableHelperCtorCaller<UARPin>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARPin.InnerSingleton;
}

// GetTrackedGeometry @ 14cf564d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UARTrackedGeometry * __thiscall UARPin::GetTrackedGeometry(UARPin *this)

{
  return (this->TrackedGeometry).field0_0x0.DebugPtr;
}

// GetTrackingState @ 14cf56730

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EARTrackingState __thiscall UARPin::GetTrackingState(UARPin *this)

{
  return this->TrackingState;
}

// InitARPin @ 14cf56a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UARPin::InitARPin(UARPin *this,TSharedRef<FARSupportInterface,1> *param_1,USceneComponent *param_2,
                 TTransform<double> *param_3,UARTrackedGeometry *param_4,FName param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  double dVar5;
  FName *pFVar6;
  ForAnyElementType FVar7;
  undefined1 auStack_f8 [32];
  FName local_c8;
  FString local_c0;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c8.ComparisonIndex.Value = 0;
  (this->ARSystem).Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (this->ARSystem).WeakReferenceCount.ReferenceController) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = (this->ARSystem).WeakReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    (this->ARSystem).WeakReferenceCount.ReferenceController = pTVar3;
  }
  dVar5 = (param_3->Rotation).XY.m128d_f64[1];
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_3->Translation).XY.m128d_f64[1];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[0] =
       (param_3->Translation).XY.m128d_f64[0];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_3->Translation).ZW.m128d_f64[1];
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[0] =
       (param_3->Translation).ZW.m128d_f64[0];
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  local_a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_a8,&this->LocalToTrackingTransform,&param_1->Object->AlignmentTransform);
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[0] =
       local_a8.Rotation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1] =
       local_a8.Rotation.XY.m128d_f64[1];
  this->TrackingState = Tracking;
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0] =
       local_a8.Rotation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1] =
       local_a8.Rotation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0] =
       local_a8.Translation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1] =
       local_a8.Translation.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0] =
       local_a8.Translation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1] =
       local_a8.Translation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0] = local_a8.Scale3D.XY.m128d_f64[0]
  ;
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1] = local_a8.Scale3D.XY.m128d_f64[1]
  ;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0] = local_a8.Scale3D.ZW.m128d_f64[0]
  ;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1] = local_a8.Scale3D.ZW.m128d_f64[1]
  ;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UARTrackedGeometry *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  (this->TrackedGeometry).field0_0x0.DebugPtr = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->PinnedComponent).field0_0x0.DebugPtr = param_2;
  if (param_2 != (USceneComponent *)0x0) {
    GetLocalToWorldTransform(this,&local_a8);
    USceneComponent::SetWorldTransform
              ((this->PinnedComponent).field0_0x0.DebugPtr,&local_a8,false,(FHitResult *)0x0,None);
  }
  if (param_5 == (FName)0x0) {
    DebugPinId = DebugPinId + 1;
    ::FString::PrintfImpl(&local_c0,L"PIN %02d");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_c0.Data.ArrayNum != 0) {
      FVar7.Data = local_c0.Data.AllocatorInstance.Data;
    }
    pFVar6 = ::FName::FName(&local_c8,(wchar_t *)FVar7.Data);
    this->DebugName = *pFVar6;
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
  }
  else {
    this->DebugName = param_5;
  }
  return;
}

// OnTrackingStateChanged @ 14cf59980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARPin::OnTrackingStateChanged(UARPin *this,EARTrackingState param_1)

{
  FName *pFVar1;
  ForAnyElementType FVar2;
  FName local_res8;
  EARTrackingState local_res10 [8];
  FString local_38;
  FString local_28;
  
  if (param_1 == StoppedTracking) {
    (this->TrackedGeometry).field0_0x0.DebugPtr = (UARTrackedGeometry *)0x0;
    ::FName::ToString(&this->DebugName,&local_28);
    ::FString::PrintfImpl(&local_38,L"%s [ORPHAN]");
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar2.Data = local_38.Data.AllocatorInstance.Data;
    }
    pFVar1 = ::FName::FName(&local_res8,(wchar_t *)FVar2.Data);
    this->DebugName = *pFVar1;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  this->TrackingState = param_1;
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnARTrackingStateChanged
             ,local_res10);
  return;
}

// OnTransformUpdated @ 14cf59a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARPin::OnTransformUpdated(UARPin *this,TTransform<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FARSupportInterface *pFVar5;
  FARSupportInterface *pFVar6;
  FARSupportInterface *pFVar7;
  bool bVar8;
  undefined1 auStack_1d8 [32];
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  UE::Math::TTransform<double>::GetRelativeTransform
            (&this->LocalToTrackingTransform,&local_148,param_1);
  dVar2 = (param_1->Rotation).XY.m128d_f64[1];
  pFVar7 = (FARSupportInterface *)0x0;
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).XY.m128d_f64[1];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[0] =
       (param_1->Translation).XY.m128d_f64[0];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Translation).ZW.m128d_f64[1];
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[0] =
       (param_1->Translation).ZW.m128d_f64[0];
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[1] = dVar2;
  dVar2 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[1] = dVar2;
  pFVar6 = (FARSupportInterface *)(this->ARSystem).WeakReferenceCount.ReferenceController;
  pFVar5 = pFVar6;
  if (pFVar6 != (FARSupportInterface *)0x0) {
    aVar3 = *(atomic<int> *)&pFVar6->field_0x8;
    do {
      pFVar5 = pFVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14cf59b05;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar6->field_0x8;
      bVar8 = aVar3 == aVar4;
      if (bVar8) {
        *(atomic<int> *)&pFVar6->field_0x8 = (atomic<int>)((int)aVar3 + 1);
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar8);
    pFVar7 = (this->ARSystem).Object;
    pFVar5 = pFVar6;
    if (pFVar7 != (FARSupportInterface *)0x0) goto LAB_14cf59b2b;
  }
LAB_14cf59b05:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pFVar6 = pFVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14cf59b2b:
  local_1a8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_1a8.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_1a8.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply
            (&local_1a8,&this->LocalToTrackingTransform,&pFVar7->AlignmentTransform);
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[0] =
       local_1a8.Rotation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1] =
       local_1a8.Rotation.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0] =
       local_1a8.Rotation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1] =
       local_1a8.Rotation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0] =
       local_1a8.Translation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1] =
       local_1a8.Translation.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0] =
       local_1a8.Translation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1] =
       local_1a8.Translation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0] =
       local_1a8.Scale3D.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1] =
       local_1a8.Scale3D.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0] =
       local_1a8.Scale3D.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1] =
       local_1a8.Scale3D.ZW.m128d_f64[1];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar6);
  if ((this->PinnedComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
    GetLocalToWorldTransform(this,&local_88);
    USceneComponent::SetWorldTransform
              ((this->PinnedComponent).field0_0x0.DebugPtr,&local_88,false,(FHitResult *)0x0,None);
  }
  local_e8 = local_148.Rotation.XY.m128d_f64[0];
  dStack_e0 = local_148.Rotation.XY.m128d_f64[1];
  local_d8 = local_148.Rotation.ZW.m128d_f64[0];
  dStack_d0 = local_148.Rotation.ZW.m128d_f64[1];
  local_c8 = local_148.Translation.XY.m128d_f64[0];
  dStack_c0 = local_148.Translation.XY.m128d_f64[1];
  local_b8 = local_148.Translation.ZW.m128d_f64[0];
  dStack_b0 = local_148.Translation.ZW.m128d_f64[1];
  local_a8 = local_148.Scale3D.XY.m128d_f64[0];
  dStack_a0 = local_148.Scale3D.XY.m128d_f64[1];
  local_98 = local_148.Scale3D.ZW.m128d_f64[0];
  dStack_90 = local_148.Scale3D.ZW.m128d_f64[1];
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnARTransformUpdated,
             &local_e8);
  return;
}

// SetOnARTrackingStateChanged @ 14cf60750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARPin::SetOnARTrackingStateChanged(UARPin *this,FOnARTrackingStateChanged *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnARTrackingStateChanged
             ,(TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// SetOnARTransformUpdated @ 14cf60770

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARPin::SetOnARTransformUpdated(UARPin *this,FOnARTransformUpdated *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::operator=
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnARTransformUpdated,
             (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// StaticRegisterNativesUARPin @ 14cf612c0

void __cdecl UARPin::StaticRegisterNativesUARPin(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UARPin_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAlignmentTransform @ 14cf66070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UARPin::UpdateAlignmentTransform(UARPin *this,TTransform<double> *param_1)

{
  TTransform<double> *pTVar1;
  USceneComponent *pUVar2;
  undefined1 auStack_168 [32];
  TTransform<double> local_138;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  pTVar1 = &this->LocalToAlignedTrackingTransform;
  local_d8.Rotation.XY.m128d_f64[0] = (pTVar1->Rotation).XY.m128d_f64[0];
  local_d8.Rotation.XY.m128d_f64[1] =
       (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1];
  local_d8.Rotation.ZW.m128d_f64[0] =
       (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0];
  local_d8.Rotation.ZW.m128d_f64[1] =
       (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1];
  local_d8.Translation.XY.m128d_f64[0] =
       (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0];
  local_d8.Translation.XY.m128d_f64[1] =
       (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1];
  local_d8.Translation.ZW.m128d_f64[0] =
       (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0];
  local_d8.Translation.ZW.m128d_f64[1] =
       (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1];
  local_d8.Scale3D.XY.m128d_f64[0] = (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0]
  ;
  local_d8.Scale3D.XY.m128d_f64[1] = (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1]
  ;
  local_d8.Scale3D.ZW.m128d_f64[0] = (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0]
  ;
  local_d8.Scale3D.ZW.m128d_f64[1] = (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1]
  ;
  local_138.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_138.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_138.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_138.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_138.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_138.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_138.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_138.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_138.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_138.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_138.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_138.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_138.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_138.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_138.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_138.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_138.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_138.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_138,&this->LocalToTrackingTransform,param_1);
  pUVar2 = (this->PinnedComponent).field0_0x0.DebugPtr;
  (pTVar1->Rotation).XY.m128d_f64[0] = local_138.Rotation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1] =
       local_138.Rotation.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0] =
       local_138.Rotation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1] =
       local_138.Rotation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0] =
       local_138.Translation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1] =
       local_138.Translation.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0] =
       local_138.Translation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1] =
       local_138.Translation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0] =
       local_138.Scale3D.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1] =
       local_138.Scale3D.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0] =
       local_138.Scale3D.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1] =
       local_138.Scale3D.ZW.m128d_f64[1];
  if (pUVar2 != (USceneComponent *)0x0) {
    GetLocalToWorldTransform(this,&local_138);
    USceneComponent::SetWorldTransform
              ((this->PinnedComponent).field0_0x0.DebugPtr,&local_138,false,(FHitResult *)0x0,None);
  }
  UE::Math::TTransform<double>::GetRelativeTransform(&local_d8,&local_78,pTVar1);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnARTransformUpdated,
             &local_138);
  return;
}

// __VTableCtorCaller @ 14cf6a660

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UARPin::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined ***)pUVar4 = &___7UARPin__6B_;
    *(undefined8 *)(pUVar4 + 1) = 0;
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[1].field_0x18 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[1].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 2) = (double)fVar2;
    *(double *)&pUVar4[2].field_0x8 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[2].field_0x10 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[2].field_0x18 = (double)fVar1;
    *(double *)&pUVar4[2].field_0x20 = (double)fVar2;
    *(double *)(pUVar4 + 3) = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[3].field_0x8 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[3].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[3].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[3].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)(pUVar4 + 4) = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[4].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[4].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[4].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)&pUVar4[4].field_0x20 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)(pUVar4 + 5) = (double)fVar1;
    *(double *)&pUVar4[5].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[5].field_0x10 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[5].field_0x18 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)&pUVar4[5].field_0x20 = (double)fVar1;
    *(double *)(pUVar4 + 6) = (double)fVar2;
    *(double *)&pUVar4[6].field_0x8 = (double)fVar3;
    *(undefined8 *)&pUVar4[6].field_0x18 = 0;
    *(undefined8 *)&pUVar4[6].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 7) = 0;
    *(undefined8 *)&pUVar4[7].field_0x8 = 0;
    *(undefined8 *)&pUVar4[7].field_0x10 = 0;
    *(undefined8 *)&pUVar4[7].field_0x18 = 0;
    *(undefined8 *)&pUVar4[7].field_0x20 = 0;
    *(undefined8 *)(pUVar4 + 8) = 0;
    *(undefined8 *)&pUVar4[8].field_0x8 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

// execDebugDraw @ 14cf6c5d0

void __cdecl UARPin::execDebugDraw(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_res20;
  uchar local_28 [16];
  
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res10[0] = 0;
  puVar2 = local_28;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))
            (param_1,local_res20,puVar2,local_res10[0],local_res8[0]);
  return;
}

// execGetDebugName @ 14cf6dd80

void __cdecl UARPin::execGetDebugName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 7);
  return;
}

// execGetLocalToTrackingTransform @ 14cf6e600

void __cdecl UARPin::execGetLocalToTrackingTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[4].field_0x8;
  uVar2 = *(undefined8 *)&param_1[4].field_0x10;
  uVar3 = *(undefined8 *)&param_1[4].field_0x18;
  uVar4 = *(undefined8 *)&param_1[4].field_0x20;
  uVar5 = *(undefined8 *)(param_1 + 5);
  uVar6 = *(undefined8 *)&param_1[5].field_0x8;
  uVar7 = *(undefined8 *)&param_1[5].field_0x10;
  uVar8 = *(undefined8 *)&param_1[5].field_0x18;
  uVar9 = *(undefined8 *)&param_1[5].field_0x20;
  uVar10 = *(undefined8 *)(param_1 + 6);
  uVar11 = *(undefined8 *)&param_1[6].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar3;
  *(undefined8 *)((longlong)param_3 + 0x20) = uVar4;
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar5;
  *(undefined8 *)((longlong)param_3 + 0x30) = uVar6;
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar7;
  *(undefined8 *)((longlong)param_3 + 0x40) = uVar8;
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar9;
  *(undefined8 *)((longlong)param_3 + 0x50) = uVar10;
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar11;
  return;
}

// execGetLocalToWorldTransform @ 14cf6e8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UARPin::execGetLocalToWorldTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetLocalToWorldTransform((UARPin *)param_1,&local_78);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  *(double *)param_3 = (pTVar2->Rotation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 8) = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x10) = (pTVar2->Rotation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x18) = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x20) = (pTVar2->Translation).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x28) = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x30) = (pTVar2->Translation).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x38) = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x40) = (pTVar2->Scale3D).XY.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x48) = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  *(double *)((longlong)param_3 + 0x50) = (pTVar2->Scale3D).ZW.m128d_f64[0];
  *(double *)((longlong)param_3 + 0x58) = dVar1;
  return;
}

// execGetPinnedComponent @ 14cf6f3f0

void __cdecl UARPin::execGetPinnedComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  return;
}

// execGetTrackedGeometry @ 14cf6f8e0

void __cdecl UARPin::execGetTrackedGeometry(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 1);
  return;
}

// execGetTrackingState @ 14cf6fd40

void __cdecl UARPin::execGetTrackingState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[6].field_0x10;
  return;
}

