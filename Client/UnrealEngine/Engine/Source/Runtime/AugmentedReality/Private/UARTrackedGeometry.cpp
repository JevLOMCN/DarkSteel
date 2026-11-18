// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 41

// StaticClass @ 14cf2d500

UClass * __cdecl UARTrackedGeometry::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedGeometry",
               &Z_Registration_Info_UClass_UARTrackedGeometry.InnerSingleton,
               StaticRegisterNativesUARTrackedGeometry,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedGeometry>,
               InternalVTableHelperCtorCaller<UARTrackedGeometry>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedGeometry.InnerSingleton;
}

// UARTrackedGeometry @ 14cf43180

UARTrackedGeometry * __thiscall
UARTrackedGeometry::UARTrackedGeometry(UARTrackedGeometry *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined ***)this = &___7UARTrackedGeometry__6B_;
  (this->UniqueId).A = 0;
  (this->UniqueId).B = 0;
  (this->UniqueId).C = 0;
  (this->UniqueId).D = 0;
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
  (this->NativeResource).Ptr = (IARRef *)0x0;
  (this->UnderlyingMesh).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  (this->ARSystem).Object = (FARSupportInterface *)0x0;
  (this->ARSystem).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  (this->AnchorName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnchorName).Data.ArrayNum = 0;
  (this->AnchorName).Data.ArrayMax = 0;
  return this;
}

// UARTrackedGeometry @ 14cf43290

UARTrackedGeometry * __thiscall UARTrackedGeometry::UARTrackedGeometry(UARTrackedGeometry *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UObject::UObject((UObject *)this);
  *(undefined ***)this = &___7UARTrackedGeometry__6B_;
  (this->UniqueId).A = 0;
  (this->UniqueId).B = 0;
  (this->UniqueId).C = 0;
  (this->UniqueId).D = 0;
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
  (this->NativeResource).Ptr = (IARRef *)0x0;
  (this->UnderlyingMesh).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  (this->ARSystem).Object = (FARSupportInterface *)0x0;
  (this->ARSystem).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->DebugName).ComparisonIndex = 0;
  (this->DebugName).Number = 0;
  (this->AnchorName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnchorName).Data.ArrayNum = 0;
  (this->AnchorName).Data.ArrayMax = 0;
  this->TrackingState = Tracking;
  return this;
}

// ~UARTrackedGeometry @ 14cf44c20

void __thiscall UARTrackedGeometry::~UARTrackedGeometry(UARTrackedGeometry *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  IARRef *pIVar5;
  
  *(undefined ***)this = &___7UARTrackedGeometry__6B_;
  pFVar3 = (this->AnchorName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
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
  pIVar5 = (this->NativeResource).Ptr;
  if (pIVar5 != (IARRef *)0x0) {
    (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// DebugDraw @ 14cf4d690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UARTrackedGeometry::DebugDraw
          (UARTrackedGeometry *this,UWorld *param_1,FLinearColor *param_2,float param_3,
          float param_4)

{
  undefined1 auStackY_128 [32];
  TVector<double>_u_0 local_e8;
  TQuat<double> local_c8;
  TRotator<double> local_a8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  GetLocalToWorldTransform(this,&local_88);
  local_e8._s_0.X = local_88.Translation.XY.m128d_f64[0];
  local_e8._s_0.Y = local_88.Translation.XY.m128d_f64[1];
  local_e8._s_0.Z = local_88.Translation.ZW.m128d_f64[0];
  local_c8.X = local_88.Rotation.XY.m128d_f64[0];
  local_c8.Y = local_88.Rotation.XY.m128d_f64[1];
  local_c8.Z = local_88.Rotation.ZW.m128d_f64[0];
  local_c8.W = local_88.Rotation.ZW.m128d_f64[1];
  UE::Math::TRotator<double>::TRotator<double>(&local_a8,&local_c8);
  DrawDebugCoordinateSystem
            (param_1,(TVector<double> *)&local_e8._s_0,&local_a8,
             (float)local_88.Scale3D.XY.m128d_f64[0],true,param_4,'\0',param_3);
  return;
}

// GetARSystem @ 14cf4fb50

TSharedPtr<FARSupportInterface,1> * __thiscall
UARTrackedGeometry::GetARSystem
          (UARTrackedGeometry *this,TSharedPtr<FARSupportInterface,1> *__return_storage_ptr__)

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

// GetDebugName @ 14cf50b80

FName __thiscall UARTrackedGeometry::GetDebugName(UARTrackedGeometry *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = this->DebugName;
  return in_RDX;
}

// GetLastUpdateFrameNumber @ 14cf51370

int __thiscall UARTrackedGeometry::GetLastUpdateFrameNumber(UARTrackedGeometry *this)

{
  return this->LastUpdateFrameNumber;
}

// GetLastUpdateTimestamp @ 14cf51380

float __thiscall UARTrackedGeometry::GetLastUpdateTimestamp(UARTrackedGeometry *this)

{
  return (float)this->LastUpdateTimestamp;
}

// GetLocalToTrackingTransform @ 14cf51e90

TTransform<double> * __thiscall
UARTrackedGeometry::GetLocalToTrackingTransform
          (UARTrackedGeometry *this,TTransform<double> *__return_storage_ptr__)

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

// GetLocalToTrackingTransform_NoAlignment @ 14cf51f20

TTransform<double> * __thiscall
UARTrackedGeometry::GetLocalToTrackingTransform_NoAlignment
          (UARTrackedGeometry *this,TTransform<double> *__return_storage_ptr__)

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

// GetLocalToWorldTransform @ 14cf522a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTransform<double> * __thiscall
UARTrackedGeometry::GetLocalToWorldTransform
          (UARTrackedGeometry *this,TTransform<double> *__return_storage_ptr__)

{
  IXRTrackingSystem *pIVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  TTransform<double> *pTVar11;
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_d8.Rotation.XY.m128d_f64[0] =
       (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[0];
  local_d8.Rotation.XY.m128d_f64[1] =
       (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1];
  pIVar1 = (GEngine->XRSystem).Object;
  if (pIVar1 == (IXRTrackingSystem *)0x0) {
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
    dVar10 = (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
         (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar10;
    dVar10 = (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
         (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar10;
    dVar10 = (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar10;
    dVar10 = (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
         (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar10;
  }
  else {
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
    local_d8.Scale3D.XY.m128d_f64[0]._0_4_ =
         *(undefined4 *)(this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64;
    local_d8.Scale3D.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64 + 4)
    ;
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64 + 1);
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)
          ((longlong)(this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64 + 0xc);
    local_d8.Scale3D.ZW.m128d_f64[0]._0_4_ =
         *(undefined4 *)(this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64;
    local_d8.Scale3D.ZW.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)(this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64 + 4)
    ;
    local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)((this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64 + 1);
    local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)
          ((longlong)(this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64 + 0xc);
    pTVar11 = (TTransform<double> *)(**(code **)((longlong)*pIVar1 + 0x90))(pIVar1,local_78);
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
    UE::Math::TTransform<double>::Multiply(__return_storage_ptr__,&local_d8,pTVar11);
  }
  return __return_storage_ptr__;
}

// GetName @ 14cf52540

FString * __thiscall UARTrackedGeometry::GetName(UARTrackedGeometry *this)

{
  return &this->AnchorName;
}

// GetNativeResource @ 14cf52550

IARRef * __thiscall UARTrackedGeometry::GetNativeResource(UARTrackedGeometry *this)

{
  return (this->NativeResource).Ptr;
}

// GetNetworkPayload @ 14cf52b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UARTrackedGeometry::GetNetworkPayload(UARTrackedGeometry *this,FARMeshUpdatePayload *param_1)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar2 = GetLocalToWorldTransform(this,&local_78);
  dVar1 = (pTVar2->Rotation).XY.m128d_f64[1];
  (param_1->WorldTransform).Rotation.XY.m128d_f64[0] = (pTVar2->Rotation).XY.m128d_f64[0];
  (param_1->WorldTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Rotation).ZW.m128d_f64[1];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[0] = (pTVar2->Rotation).ZW.m128d_f64[0];
  (param_1->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).XY.m128d_f64[1];
  (param_1->WorldTransform).Translation.XY.m128d_f64[0] = (pTVar2->Translation).XY.m128d_f64[0];
  (param_1->WorldTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Translation).ZW.m128d_f64[1];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[0] = (pTVar2->Translation).ZW.m128d_f64[0];
  (param_1->WorldTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).XY.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[0] = (pTVar2->Scale3D).XY.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (pTVar2->Scale3D).ZW.m128d_f64[1];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[0] = (pTVar2->Scale3D).ZW.m128d_f64[0];
  (param_1->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  param_1->ObjectClassification = this->ObjectClassification;
  UpdateSessionPayload(this,&param_1->SessionPayload);
  return;
}

// GetPrivateStaticClass @ 14cf55790

UClass * __cdecl UARTrackedGeometry::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedGeometry.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedGeometry",
               &Z_Registration_Info_UClass_UARTrackedGeometry.InnerSingleton,
               StaticRegisterNativesUARTrackedGeometry,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedGeometry>,
               InternalVTableHelperCtorCaller<UARTrackedGeometry>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedGeometry.InnerSingleton;
}

// GetTrackingState @ 14cf56740

EARTrackingState __thiscall UARTrackedGeometry::GetTrackingState(UARTrackedGeometry *this)

{
  return this->TrackingState;
}

// GetUnderlyingMesh @ 14cf56780

UMRMeshComponent * __thiscall UARTrackedGeometry::GetUnderlyingMesh(UARTrackedGeometry *this)

{
  return (this->UnderlyingMesh).field0_0x0.DebugPtr;
}

// InitializeNativeResource @ 14cf57010

void __thiscall
UARTrackedGeometry::InitializeNativeResource(UARTrackedGeometry *this,IARRef *param_1)

{
  IARRef *pIVar1;
  
  pIVar1 = (this->NativeResource).Ptr;
  if ((pIVar1 != param_1) && ((this->NativeResource).Ptr = param_1, pIVar1 != (IARRef *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014cf57033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,1);
    return;
  }
  return;
}

// IsTracked @ 14cf57ae0

bool __thiscall UARTrackedGeometry::IsTracked(UARTrackedGeometry *this)

{
  return this->TrackingState == Tracking;
}

// SetDebugName @ 14cf5fb50

void __thiscall UARTrackedGeometry::SetDebugName(UARTrackedGeometry *this,FName param_1)

{
  this->DebugName = param_1;
  return;
}

// SetName @ 14cf605a0

void __thiscall UARTrackedGeometry::SetName(UARTrackedGeometry *this,FString *param_1)

{
  ::FString::operator=(&this->AnchorName,param_1);
  return;
}

// SetTrackingState @ 14cf608d0

void __thiscall
UARTrackedGeometry::SetTrackingState(UARTrackedGeometry *this,EARTrackingState param_1)

{
  IARRef *pIVar1;
  
  this->TrackingState = param_1;
  if ((param_1 == StoppedTracking) && (pIVar1 = (this->NativeResource).Ptr, pIVar1 != (IARRef *)0x0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x00014cf608ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 8))();
    return;
  }
  return;
}

// SetUnderlyingMesh @ 14cf60900

void __thiscall
UARTrackedGeometry::SetUnderlyingMesh(UARTrackedGeometry *this,UMRMeshComponent *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMRMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->UnderlyingMesh).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->UnderlyingMesh).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUARTrackedGeometry @ 14cf61550

void __cdecl UARTrackedGeometry::StaticRegisterNativesUARTrackedGeometry(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_UARTrackedGeometry_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateAlignmentTransform @ 14cf66210

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
UARTrackedGeometry::UpdateAlignmentTransform(UARTrackedGeometry *this,TTransform<double> *param_1)

{
  UMRMeshComponent *this_00;
  TTransform<double> *pTVar1;
  undefined1 auStack_a8 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_78,&this->LocalToTrackingTransform,param_1);
  this_00 = (this->UnderlyingMesh).field0_0x0.DebugPtr;
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[0] =
       local_78.Rotation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1] =
       local_78.Rotation.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0] =
       local_78.Rotation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1] =
       local_78.Rotation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0] =
       local_78.Translation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1] =
       local_78.Translation.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0] =
       local_78.Translation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1] =
       local_78.Translation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0]
  ;
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1]
  ;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0]
  ;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1]
  ;
  if (this_00 != (UMRMeshComponent *)0x0) {
    pTVar1 = GetLocalToWorldTransform(this,&local_78);
    USceneComponent::SetWorldTransform
              ((USceneComponent *)this_00,pTVar1,false,(FHitResult *)0x0,None);
  }
  return;
}

// UpdateSessionPayload @ 14cf66cf0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UARTrackedGeometry::UpdateSessionPayload(UARTrackedGeometry *this,FARSessionPayload *param_1)

{
  FARSupportInterface *pFVar1;
  UARSessionConfig *pUVar2;
  UMaterialInterface *pUVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  pTVar7 = (this->ARSystem).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar7->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar7 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14cf66d30;
      }
      LOCK();
      aVar6 = pTVar7->SharedReferenceCount;
      bVar8 = aVar5 == aVar6;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar8);
    pFVar1 = (this->ARSystem).Object;
    if (pFVar1 != (FARSupportInterface *)0x0) {
      if (((pFVar1->ARSettings).field0_0x0.DebugPtr == (UARSessionConfig *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ARSettings != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARSupportInterface.cpp"
                             ,0x32,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar2 = (pFVar1->ARSettings).field0_0x0.DebugPtr;
      if (pUVar2->bGenerateMeshDataFromTrackedGeometry != false) {
        param_1->ConfigFlags = param_1->ConfigFlags | 1;
      }
      if (pUVar2->bGenerateCollisionForMeshData != false) {
        param_1->ConfigFlags = param_1->ConfigFlags | 4;
      }
      if (pUVar2->bGenerateNavMeshForMeshData != false) {
        param_1->ConfigFlags = param_1->ConfigFlags | 8;
      }
      if (pUVar2->bUseMeshDataForOcclusion != false) {
        param_1->ConfigFlags = param_1->ConfigFlags | 0x10;
      }
      if (pUVar2->bRenderMeshDataInWireframe != false) {
        param_1->ConfigFlags = param_1->ConfigFlags | 2;
      }
      pUVar3 = (pUVar2->DefaultMeshMaterial).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (param_1->DefaultMeshMaterial).field0_0x0.DebugPtr = pUVar3;
      pUVar3 = (pUVar2->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (param_1->DefaultWireframeMeshMaterial).field0_0x0.DebugPtr = pUVar3;
    }
  }
LAB_14cf66d30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// UpdateTrackedGeometry @ 14cf672c0

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
UARTrackedGeometry::UpdateTrackedGeometry
          (UARTrackedGeometry *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  UMRMeshComponent *this_00;
  double dVar5;
  TTransform<double> *pTVar6;
  undefined1 auStack_c8 [32];
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
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
  dVar5 = (param_4->Rotation).XY.m128d_f64[1];
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[0] = (param_4->Rotation).XY.m128d_f64[0];
  (this->LocalToTrackingTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_4->Rotation).ZW.m128d_f64[1];
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[0] = (param_4->Rotation).ZW.m128d_f64[0];
  (this->LocalToTrackingTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_4->Translation).XY.m128d_f64[1];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[0] =
       (param_4->Translation).XY.m128d_f64[0];
  (this->LocalToTrackingTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_4->Translation).ZW.m128d_f64[1];
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[0] =
       (param_4->Translation).ZW.m128d_f64[0];
  (this->LocalToTrackingTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (param_4->Scale3D).XY.m128d_f64[1];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[0] = (param_4->Scale3D).XY.m128d_f64[0];
  (this->LocalToTrackingTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (param_4->Scale3D).ZW.m128d_f64[1];
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[0] = (param_4->Scale3D).ZW.m128d_f64[0];
  (this->LocalToTrackingTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  this->LastUpdateFrameNumber = param_2;
  this->LastUpdateTimestamp = param_3;
  local_98.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_98.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_98.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_98.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_98.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  local_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_98.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  local_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&local_98,&this->LocalToTrackingTransform,param_5);
  this_00 = (this->UnderlyingMesh).field0_0x0.DebugPtr;
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[0] =
       local_98.Rotation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.XY.m128d_f64[1] =
       local_98.Rotation.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[0] =
       local_98.Rotation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Rotation.ZW.m128d_f64[1] =
       local_98.Rotation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[0] =
       local_98.Translation.XY.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.XY.m128d_f64[1] =
       local_98.Translation.XY.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[0] =
       local_98.Translation.ZW.m128d_f64[0];
  (this->LocalToAlignedTrackingTransform).Translation.ZW.m128d_f64[1] =
       local_98.Translation.ZW.m128d_f64[1];
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0]
  ;
  (this->LocalToAlignedTrackingTransform).Scale3D.XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1]
  ;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[0] = local_98.Scale3D.ZW.m128d_f64[0]
  ;
  (this->LocalToAlignedTrackingTransform).Scale3D.ZW.m128d_f64[1] = local_98.Scale3D.ZW.m128d_f64[1]
  ;
  if (this_00 != (UMRMeshComponent *)0x0) {
    pTVar6 = GetLocalToWorldTransform(this,&local_98);
    USceneComponent::SetWorldTransform
              ((USceneComponent *)this_00,pTVar6,false,(FHitResult *)0x0,None);
  }
  this->TrackingState = Tracking;
  return;
}

// UpdateTrackedGeometryNoMove @ 14cf67650

void __thiscall
UARTrackedGeometry::UpdateTrackedGeometryNoMove
          (UARTrackedGeometry *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  
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
  this->LastUpdateTimestamp = param_3;
  this->LastUpdateFrameNumber = param_2;
  this->TrackingState = Tracking;
  return;
}

// UpdateTrackingState @ 14cf67770

void __thiscall
UARTrackedGeometry::UpdateTrackingState(UARTrackedGeometry *this,EARTrackingState param_1)

{
  IARRef *pIVar1;
  
  this->TrackingState = param_1;
  if ((param_1 == StoppedTracking) && (pIVar1 = (this->NativeResource).Ptr, pIVar1 != (IARRef *)0x0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x00014cf6778a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 8))();
    return;
  }
  return;
}

// execGetDebugName @ 14cf6ddb0

void __cdecl UARTrackedGeometry::execGetDebugName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 8);
  return;
}

// execGetLastUpdateFrameNumber @ 14cf6e470

void __cdecl
UARTrackedGeometry::execGetLastUpdateFrameNumber(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[7].field_0x18;
  return;
}

// execGetLastUpdateTimestamp @ 14cf6e4a0

void __cdecl
UARTrackedGeometry::execGetLastUpdateTimestamp(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)param_3 = (float)*(double *)&param_1[7].field_0x20;
  return;
}

// execGetLocalToTrackingTransform @ 14cf6e870

void __cdecl
UARTrackedGeometry::execGetLocalToTrackingTransform(UObject *param_1,FFrame *param_2,void *param_3)

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

// execGetLocalToWorldTransform @ 14cf6eb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UARTrackedGeometry::execGetLocalToWorldTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TTransform<double> *pTVar2;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetLocalToWorldTransform((UARTrackedGeometry *)param_1,&local_78);
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

// execGetName @ 14cf6ed90

void __cdecl UARTrackedGeometry::execGetName(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::operator=(param_3,(FString *)&param_1[8].field_0x8);
  return;
}

// execGetObjectClassification @ 14cf6eed0

void __cdecl
UARTrackedGeometry::execGetObjectClassification(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 7);
  return;
}

// execGetTrackingState @ 14cf6fd70

void __cdecl
UARTrackedGeometry::execGetTrackingState(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[6].field_0x10;
  return;
}

// execGetUnderlyingMesh @ 14cf6fda0

void __cdecl
UARTrackedGeometry::execGetUnderlyingMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[6].field_0x20;
  return;
}

// execHasSpatialMeshUsageFlag @ 14cf700d0

void __cdecl
UARTrackedGeometry::execHasSpatialMeshUsageFlag(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = (local_res8[0] & param_1[7].field_0x1) != 0;
  return;
}

// execIsTracked @ 14cf70b80

void __cdecl UARTrackedGeometry::execIsTracked(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = param_1[6].field_0x10 == '\x01';
  return;
}

