// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// BuildPanningShotTransform @ 14d65cf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTransform<double> * __thiscall
UE::Cameras::FPanningFramingCameraNodeEvaluator::BuildPanningShotTransform
          (FPanningFramingCameraNodeEvaluator *this,TTransform<double> *__return_storage_ptr__,
          FCameraPose *param_1)

{
  TQuat<double> *pTVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_118 [32];
  TQuat<double> local_f8;
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  FCameraPose::GetTransform(param_1,__return_storage_ptr__);
  pTVar1 = UE::Math::TRotator<double>::Quaternion(&this->PanningRotation,&local_f8);
  local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_d8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_78.Rotation.ZW.m128d_f64[0] = pTVar1->Z;
  local_78.Rotation.ZW.m128d_f64[1] = pTVar1->W;
  local_78.Rotation.XY.m128d_f64[0] = pTVar1->X;
  local_78.Rotation.XY.m128d_f64[1] = pTVar1->Y;
  local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_d8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  uVar2 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar3 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_d8.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_d8.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_d8.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_d8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_d8.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar2;
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar3;
  local_d8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar2;
  local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_d8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar3;
  local_78.Translation.XY.m128d_f64[0] = local_d8.Translation.XY.m128d_f64[0];
  local_78.Translation.XY.m128d_f64[1] = local_d8.Translation.XY.m128d_f64[1];
  local_78.Translation.ZW.m128d_f64[0] = local_d8.Translation.ZW.m128d_f64[0];
  local_78.Translation.ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
  local_78.Scale3D.XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
  local_78.Scale3D.XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
  UE::Math::TTransform<double>::Multiply(&local_d8,&local_78,__return_storage_ptr__);
  (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_d8.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_d8.Rotation.XY.m128d_f64[1];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_d8.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_d8.Rotation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_d8.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_d8.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_d8.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = local_d8.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = local_d8.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = local_d8.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = local_d8.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = local_d8.Scale3D.ZW.m128d_f64[1];
  return __return_storage_ptr__;
}

// GetTypeID @ 14d661c80

FCameraObjectTypeID * __thiscall
UE::Cameras::FPanningFramingCameraNodeEvaluator::GetTypeID(FPanningFramingCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d663020

bool __thiscall
UE::Cameras::FPanningFramingCameraNodeEvaluator::IsKindOf
          (FPanningFramingCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FBaseFramingCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuildDebugBlocks @ 14d664f50

void __thiscall
UE::Cameras::FPanningFramingCameraNodeEvaluator::OnBuildDebugBlocks
          (FPanningFramingCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FScriptContainerElement *pFVar1;
  double dVar2;
  FCameraDebugBlock *pFVar3;
  
  FBaseFramingCameraNodeEvaluator::OnBuildDebugBlocks
            ((FBaseFramingCameraNodeEvaluator *)this,param_1,param_2);
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar3 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x58,8);
  pFVar3[1]._padding_ = 0;
  pFVar3[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3[1].Attachments.ArrayNum = 0;
  pFVar3[1].Attachments.ArrayMax = 0;
  pFVar3[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar3[1].Children.ArrayNum = 0;
  pFVar3[1].Children.ArrayMax = 0;
  pFVar3[2]._padding_ = 0;
  (pFVar3->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Attachments).ArrayNum = 0;
  (pFVar3->Attachments).ArrayMax = 0;
  (pFVar3->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar3->Children).ArrayNum = 0;
  (pFVar3->Children).ArrayMax = 0;
  pFVar3->_padding_ = (longlong)&___7FPanningFramingCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar3);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar3);
  pFVar1 = (FScriptContainerElement *)(this->PanningRotation).Yaw;
  pFVar3[1]._padding_ = (longlong)(this->PanningRotation).Pitch;
  pFVar3[1].Attachments.AllocatorInstance.Data = pFVar1;
  *(double *)&pFVar3[1].Attachments.ArrayNum = (this->PanningRotation).Roll;
  dVar2 = (this->DebugPanningCorrection).Yaw;
  pFVar3[1].Children.AllocatorInstance.Data =
       (FScriptContainerElement *)(this->DebugPanningCorrection).Pitch;
  *(double *)&pFVar3[1].Children.ArrayNum = dVar2;
  pFVar3[2]._padding_ = (longlong)(this->DebugPanningCorrection).Roll;
  return;
}

// OnInitialize @ 14d668450

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPanningFramingCameraNodeEvaluator::OnInitialize
          (FPanningFramingCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  double dVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  FBaseFramingCameraNodeEvaluator::OnInitialize
            ((FBaseFramingCameraNodeEvaluator *)this,param_1,param_2);
  if (this->_padding_ != 0) {
    pUVar3 = UPanningFramingCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar4 = this->_padding_;
      goto LAB_14d668486;
    }
  }
  lVar4 = 0;
LAB_14d668486:
  (this->CanPanLaterallyReader).DefaultValuePtr = (bool *)(lVar4 + 0x170);
  (this->CanPanLaterallyReader).VariableID.Value = *(uint *)(lVar4 + 0x174);
  (this->CanPanVerticallyReader).DefaultValuePtr = (bool *)(lVar4 + 0x180);
  (this->CanPanVerticallyReader).VariableID.Value = *(uint *)(lVar4 + 0x184);
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->PanningRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->PanningRotation).Yaw = dVar1;
  (this->PanningRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  return;
}

// OnRun @ 14d66d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FPanningFramingCameraNodeEvaluator::OnRun
          (FPanningFramingCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  double dVar1;
  FCameraFieldsOfView *pFVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_368 [32];
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_348;
  TVector2<double>_u_0 local_338;
  TVector2<double>_u_0 local_328;
  TVector<double>_u_0 local_318;
  TRotator<double> local_300;
  TRotator<double> local_2e8;
  TVector<double>_u_0 local_2d0;
  char local_2b8;
  TVector<double>_u_0 local_2a8;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  TVector<double> local_218;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  FCameraFieldsOfView local_138 [2];
  FCameraFieldsOfView local_110;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_368;
  if (param_1->bIsFirstFrame != false) {
    FBaseFramingCameraNodeEvaluator::GetInitialDesiredWorldTarget
              ((FBaseFramingCameraNodeEvaluator *)this,
               (TOptional<UE::Math::TVector<double>_> *)&local_2d0._s_0,param_1,param_2);
    if (local_2b8 != '\0') {
      local_318._s_0.X = local_2d0._s_0.X - (param_2->CameraPose).Location.field0_0x0._s_0.X;
      local_318._s_0.Y = local_2d0._s_0.Y - (param_2->CameraPose).Location.field0_0x0._s_0.Y;
      local_318._s_0.Z = local_2d0._s_0.Z - (param_2->CameraPose).Location.field0_0x0._s_0.Z;
      if (((__real_3f1a36e2e0000000 <
            (double)CONCAT44((uint)((ulonglong)local_318._s_0.X >> 0x20) &
                             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                             SUB84(local_318._s_0.X,0) &
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
          (__real_3f1a36e2e0000000 <
           (double)CONCAT44((uint)((ulonglong)local_318._s_0.Y >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(local_318._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                           ))) ||
         (uVar3 = SUB84(local_318._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar4 = (uint)((ulonglong)local_318._s_0.Z >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar4,uVar3) &&
         (double)CONCAT44(uVar4,uVar3) != __real_3f1a36e2e0000000)) {
        FCameraPose::GetAimDir(&param_2->CameraPose,&local_218);
        UE::Math::TVector<double>::ToOrientationRotator
                  ((TVector<double> *)&local_318._s_0,&local_300);
        UE::Math::TVector<double>::ToOrientationRotator(&local_218,&local_2e8);
        (this->PanningRotation).Pitch = local_300.Pitch - local_2e8.Pitch;
        (this->PanningRotation).Yaw = local_300.Yaw - local_2e8.Yaw;
        (this->PanningRotation).Roll = local_300.Roll - local_2e8.Roll;
      }
    }
  }
  BuildPanningShotTransform(this,&local_f8,&param_2->CameraPose);
  FBaseFramingCameraNodeEvaluator::UpdateFramingState
            ((FBaseFramingCameraNodeEvaluator *)this,param_1,param_2,&local_f8);
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  if ((char)this->_padding_ == '\0') {
    (this->DebugPanningCorrection).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    (this->DebugPanningCorrection).Yaw = dVar1;
    (this->DebugPanningCorrection).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  }
  else {
    local_2a8._s_0.X = (param_2->CameraPose).Location.field0_0x0._s_0.X;
    local_2a8._s_0.Y = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
    local_2a8._s_0.Z = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
    dStack_290 = (param_2->CameraPose).Rotation.Pitch;
    local_288 = (param_2->CameraPose).Rotation.Yaw;
    dStack_280 = (param_2->CameraPose).Rotation.Roll;
    local_278 = (param_2->CameraPose).TargetDistance;
    uStack_270._0_4_ = (param_2->CameraPose).FieldOfView;
    uStack_270._4_4_ = (param_2->CameraPose).FocalLength;
    local_268._0_4_ = (param_2->CameraPose).OrthographicWidth;
    local_268._4_4_ = (param_2->CameraPose).Aperture;
    uStack_260._0_4_ = (param_2->CameraPose).ShutterSpeed;
    uStack_260._4_4_ = (param_2->CameraPose).FocusDistance;
    local_258._0_4_ = (param_2->CameraPose).SensorWidth;
    local_258._4_4_ = (param_2->CameraPose).SensorHeight;
    uStack_250._0_4_ = (param_2->CameraPose).SensorHorizontalOffset;
    uStack_250._4_4_ = (param_2->CameraPose).SensorVerticalOffset;
    local_248._0_4_ = (param_2->CameraPose).ISO;
    local_248._4_4_ = (param_2->CameraPose).SqueezeFactor;
    uStack_240._0_4_ = (param_2->CameraPose).Overscan;
    uStack_240._4_4_ = (param_2->CameraPose).DiaphragmBladeCount;
    local_238._0_4_ = (param_2->CameraPose).NearClippingPlane;
    local_238._4_4_ = (param_2->CameraPose).FarClippingPlane;
    uStack_230._0_4_ = (param_2->CameraPose).PhysicalCameraBlendWeight;
    uStack_230._4_1_ = (param_2->CameraPose).EnablePhysicalCamera;
    uStack_230._5_1_ = (param_2->CameraPose).ConstrainAspectRatio;
    uStack_230._6_1_ = (param_2->CameraPose).OverrideAspectRatioAxisConstraint;
    uStack_230._7_1_ = (param_2->CameraPose).AspectRatioAxisConstraint;
    local_228._0_1_ = (param_2->CameraPose).ProjectionMode;
    local_228._1_4_ = (param_2->CameraPose).ChangedFlags;
    local_228._5_3_ = *(undefined3 *)&(param_2->CameraPose).field_0x85;
    local_1f8.Rotation.ZW.m128d_f64[0] = local_f8.Rotation.ZW.m128d_f64[0];
    local_1f8.Rotation.ZW.m128d_f64[1] = local_f8.Rotation.ZW.m128d_f64[1];
    local_1f8.Rotation.XY.m128d_f64[0] = local_f8.Rotation.XY.m128d_f64[0];
    local_1f8.Rotation.XY.m128d_f64[1] = local_f8.Rotation.XY.m128d_f64[1];
    local_1f8.Translation.ZW.m128d_f64[0] = local_f8.Translation.ZW.m128d_f64[0];
    local_1f8.Translation.ZW.m128d_f64[1] = local_f8.Translation.ZW.m128d_f64[1];
    local_1f8.Translation.XY.m128d_f64[0] = local_f8.Translation.XY.m128d_f64[0];
    local_1f8.Translation.XY.m128d_f64[1] = local_f8.Translation.XY.m128d_f64[1];
    local_1f8.Scale3D.ZW.m128d_f64[0] = local_f8.Scale3D.ZW.m128d_f64[0];
    local_1f8.Scale3D.ZW.m128d_f64[1] = local_f8.Scale3D.ZW.m128d_f64[1];
    local_1f8.Scale3D.XY.m128d_f64[0] = local_f8.Scale3D.XY.m128d_f64[0];
    local_1f8.Scale3D.XY.m128d_f64[1] = local_f8.Scale3D.XY.m128d_f64[1];
    FCameraPose::SetTransform((FCameraPose *)&local_2a8._s_0,&local_1f8,false);
    local_348.Object = (param_1->EvaluationContext).Object;
    local_348.SharedReferenceCount.ReferenceController =
         (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (local_348.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    dVar1 = FCameraPoseMath::GetEffectiveAspectRatio((FCameraPose *)&local_2a8._s_0,&local_348);
    pFVar2 = FCameraPoseMath::GetEffectiveFieldsOfView
                       (local_138,(FCameraPose *)&local_2a8._s_0,(double)(float)dVar1);
    local_110.HorizontalFieldOfView = pFVar2->HorizontalFieldOfView;
    local_110.VerticalFieldOfView = pFVar2->VerticalFieldOfView;
    FCameraFramingMath::GetTargetAngles
              ((TVector2<double> *)&local_338._s_0,(TVector2<double> *)&this->_padding_,&local_110);
    FCameraFramingMath::GetTargetAngles
              ((TVector2<double> *)&local_328._s_0,(TVector2<double> *)&this->_padding_,&local_110);
    (this->PanningRotation).Pitch =
         (local_328._s_0.Y - local_338._s_0.Y) + (this->PanningRotation).Pitch;
    (this->PanningRotation).Yaw =
         (local_338._s_0.X - local_328._s_0.X) + (this->PanningRotation).Yaw;
    (this->DebugPanningCorrection).Pitch = local_328._s_0.Y - local_338._s_0.Y;
    (this->DebugPanningCorrection).Yaw = local_338._s_0.X - local_328._s_0.X;
    (this->DebugPanningCorrection).Roll = 0.0;
  }
  BuildPanningShotTransform(this,&local_98,&param_2->CameraPose);
  local_198.Rotation.XY.m128d_f64[0] = local_98.Rotation.XY.m128d_f64[0];
  local_198.Rotation.XY.m128d_f64[1] = local_98.Rotation.XY.m128d_f64[1];
  local_198.Rotation.ZW.m128d_f64[0] = local_98.Rotation.ZW.m128d_f64[0];
  local_198.Rotation.ZW.m128d_f64[1] = local_98.Rotation.ZW.m128d_f64[1];
  local_198.Translation.XY.m128d_f64[0] = local_98.Translation.XY.m128d_f64[0];
  local_198.Translation.XY.m128d_f64[1] = local_98.Translation.XY.m128d_f64[1];
  local_198.Translation.ZW.m128d_f64[0] = local_98.Translation.ZW.m128d_f64[0];
  local_198.Translation.ZW.m128d_f64[1] = local_98.Translation.ZW.m128d_f64[1];
  local_198.Scale3D.XY.m128d_f64[0] = local_98.Scale3D.XY.m128d_f64[0];
  local_198.Scale3D.XY.m128d_f64[1] = local_98.Scale3D.XY.m128d_f64[1];
  local_198.Scale3D.ZW.m128d_f64[0] = local_98.Scale3D.ZW.m128d_f64[0];
  local_198.Scale3D.ZW.m128d_f64[1] = local_98.Scale3D.ZW.m128d_f64[1];
  FCameraPose::SetTransform(&param_2->CameraPose,&local_198,false);
  FBaseFramingCameraNodeEvaluator::EndFramingUpdate
            ((FBaseFramingCameraNodeEvaluator *)this,param_1,param_2);
  return;
}

