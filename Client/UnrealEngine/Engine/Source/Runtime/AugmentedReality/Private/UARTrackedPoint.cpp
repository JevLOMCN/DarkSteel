// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 9

// StaticClass @ 14cf2edb0

UClass * __cdecl UARTrackedPoint::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedPoint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedPoint",
               &Z_Registration_Info_UClass_UARTrackedPoint.InnerSingleton,
               StaticRegisterNativesUARTrackedPoint,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedPoint>,
               InternalVTableHelperCtorCaller<UARTrackedPoint>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedPoint.InnerSingleton;
}

// UARTrackedPoint @ 14cf434b0

UARTrackedPoint * __thiscall
UARTrackedPoint::UARTrackedPoint(UARTrackedPoint *this,FVTableHelper *param_1)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this,param_1);
  *(undefined ***)this = &___7UARTrackedPoint__6B_;
  return this;
}

// UARTrackedPoint @ 14cf434e0

UARTrackedPoint * __thiscall UARTrackedPoint::UARTrackedPoint(UARTrackedPoint *this)

{
  UARTrackedGeometry::UARTrackedGeometry((UARTrackedGeometry *)this);
  *(undefined ***)this = &___7UARTrackedPoint__6B_;
  return this;
}

// ~UARTrackedPoint @ 14cf44ce0

void __thiscall UARTrackedPoint::~UARTrackedPoint(UARTrackedPoint *this)

{
  *(undefined ***)this = &___7UARTrackedPoint__6B_;
  UARTrackedGeometry::~UARTrackedGeometry((UARTrackedGeometry *)this);
  return;
}

// DebugDraw @ 14cf4dba0

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
UARTrackedPoint::DebugDraw
          (UARTrackedPoint *this,UWorld *param_1,FLinearColor *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auStackY_138 [32];
  FColor_u_0 local_f8;
  FName local_f4;
  TVector<double>_u_0 local_e8;
  FString local_d0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&local_b8);
  local_f4.ComparisonIndex.Value = *(uint *)&this->field_0x140;
  local_f4.Number = *(uint *)&this->field_0x144;
  ::FName::ToString(&local_f4,&local_d0);
  fVar1 = __real_3f000000;
  fVar2 = (param_2->field0_0x0)._s_0.B;
  fVar4 = (param_2->field0_0x0)._s_0.R;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  fVar3 = (param_2->field0_0x0)._s_0.G;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  local_f8._s_0.B = (uchar)(int)(fVar2 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  fVar2 = (param_2->field0_0x0)._s_0.A;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  local_f8._s_0.G = (uchar)(int)(fVar3 * __real_437f0000 + __real_3f000000);
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  local_f8._s_0.R = (uchar)(int)(fVar4 * __real_437f0000 + __real_3f000000);
  local_e8._s_0.Z = local_b8.Translation.ZW.m128d_f64[0];
  local_f8._s_0.A = (uchar)(int)(fVar2 * __real_437f0000 + __real_3f000000);
  local_e8._s_0.X = local_b8.Translation.XY.m128d_f64[0];
  local_e8._s_0.Y = local_b8.Translation.XY.m128d_f64[1];
  ARDebugHelpers::DrawDebugString
            (param_1,(TVector<double> *)&local_e8._s_0,&local_d0,param_3 * __real_3e800000,
             (FColor *)&local_f8._s_0,param_4,true);
  local_e8._s_0.X = local_b8.Translation.XY.m128d_f64[0];
  local_e8._s_0.Y = local_b8.Translation.XY.m128d_f64[1];
  local_e8._s_0.Z = local_b8.Translation.ZW.m128d_f64[0];
  DrawDebugPoint(param_1,(TVector<double> *)&local_e8._s_0,fVar1,(FColor *)&local_f8._s_0,false,
                 param_4,'\0');
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  return;
}

// GetNetworkPayload @ 14cf52cd0

void __thiscall
UARTrackedPoint::GetNetworkPayload(UARTrackedPoint *this,FARPointUpdatePayload *param_1)

{
  return;
}

// GetPrivateStaticClass @ 14cf559c0

UClass * __cdecl UARTrackedPoint::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UARTrackedPoint.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AugmentedReality",L"ARTrackedPoint",
               &Z_Registration_Info_UClass_UARTrackedPoint.InnerSingleton,
               StaticRegisterNativesUARTrackedPoint,0x160,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UARTrackedPoint>,
               InternalVTableHelperCtorCaller<UARTrackedPoint>,local_res8,
               UARTrackedGeometry::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UARTrackedPoint.InnerSingleton;
}

// StaticRegisterNativesUARTrackedPoint @ 14cf61610

void __cdecl UARTrackedPoint::StaticRegisterNativesUARTrackedPoint(void)

{
  return;
}

// UpdateTrackedGeometry @ 14cf675d0

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
UARTrackedPoint::UpdateTrackedGeometry
          (UARTrackedPoint *this,TSharedRef<FARSupportInterface,1> *param_1,uint param_2,
          double param_3,TTransform<double> *param_4,TTransform<double> *param_5)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong *plVar4;
  USceneComponent *this_00;
  double dVar5;
  TTransform<double> *pTVar6;
  undefined1 auStack_c8 [32];
  TTransform<double> TStack_98;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  *(FARSupportInterface **)&this->field_0x120 = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != *(TReferenceControllerBase<1> **)&this->field_0x128) {
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->WeakReferenceCount = (atomic<int>)((int)pTVar3->WeakReferenceCount + 1);
      UNLOCK();
    }
    plVar4 = *(longlong **)&this->field_0x128;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
    *(TReferenceControllerBase<1> **)&this->field_0x128 = pTVar3;
  }
  dVar5 = (param_4->Rotation).XY.m128d_f64[1];
  *(double *)&this->field_0x40 = (param_4->Rotation).XY.m128d_f64[0];
  *(double *)&this->field_0x48 = dVar5;
  dVar5 = (param_4->Rotation).ZW.m128d_f64[1];
  *(double *)&this->field_0x50 = (param_4->Rotation).ZW.m128d_f64[0];
  *(double *)&this->field_0x58 = dVar5;
  dVar5 = (param_4->Translation).XY.m128d_f64[1];
  *(double *)&this->field_0x60 = (param_4->Translation).XY.m128d_f64[0];
  *(double *)&this->field_0x68 = dVar5;
  dVar5 = (param_4->Translation).ZW.m128d_f64[1];
  *(double *)&this->field_0x70 = (param_4->Translation).ZW.m128d_f64[0];
  *(double *)&this->field_0x78 = dVar5;
  dVar5 = (param_4->Scale3D).XY.m128d_f64[1];
  *(double *)&this->field_0x80 = (param_4->Scale3D).XY.m128d_f64[0];
  *(double *)&this->field_0x88 = dVar5;
  dVar5 = (param_4->Scale3D).ZW.m128d_f64[1];
  *(double *)&this->field_0x90 = (param_4->Scale3D).ZW.m128d_f64[0];
  *(double *)&this->field_0x98 = dVar5;
  *(uint *)&this->field_0x130 = param_2;
  *(double *)&this->field_0x138 = param_3;
  TStack_98.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  TStack_98.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  TStack_98.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  TStack_98.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  TStack_98.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  TStack_98.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  TStack_98.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  TStack_98.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  TStack_98.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  TStack_98.Translation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
  TStack_98.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  TStack_98.Translation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
  TStack_98.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  TStack_98.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  TStack_98.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  TStack_98.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  TStack_98.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  TStack_98.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  UE::Math::TTransform<double>::Multiply(&TStack_98,(TTransform<double> *)&this->field_0x40,param_5)
  ;
  this_00 = *(USceneComponent **)&this->field_0x110;
  *(double *)&this->field_0xa0 = TStack_98.Rotation.XY.m128d_f64[0];
  *(double *)&this->field_0xa8 = TStack_98.Rotation.XY.m128d_f64[1];
  *(double *)&this->field_0xb0 = TStack_98.Rotation.ZW.m128d_f64[0];
  *(double *)&this->field_0xb8 = TStack_98.Rotation.ZW.m128d_f64[1];
  *(double *)&this->field_0xc0 = TStack_98.Translation.XY.m128d_f64[0];
  *(double *)&this->field_0xc8 = TStack_98.Translation.XY.m128d_f64[1];
  *(double *)&this->field_0xd0 = TStack_98.Translation.ZW.m128d_f64[0];
  *(double *)&this->field_0xd8 = TStack_98.Translation.ZW.m128d_f64[1];
  *(double *)&this->field_0xe0 = TStack_98.Scale3D.XY.m128d_f64[0];
  *(double *)&this->field_0xe8 = TStack_98.Scale3D.XY.m128d_f64[1];
  *(double *)&this->field_0xf0 = TStack_98.Scale3D.ZW.m128d_f64[0];
  *(double *)&this->field_0xf8 = TStack_98.Scale3D.ZW.m128d_f64[1];
  if (this_00 != (USceneComponent *)0x0) {
    pTVar6 = UARTrackedGeometry::GetLocalToWorldTransform((UARTrackedGeometry *)this,&TStack_98);
    USceneComponent::SetWorldTransform(this_00,pTVar6,false,(FHitResult *)0x0,None);
  }
  this->field_0x100 = 1;
  return;
}

