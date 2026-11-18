// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// GetPlayerController @ 14d61b070

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

APlayerController * __thiscall
UE::Cameras::FBoomArmCameraNodeEvaluator::GetPlayerController
          (FBoomArmCameraNodeEvaluator *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> *param_1)

{
  APlayerController *pAVar1;
  
  if (param_1->Object != (FCameraEvaluationContext *)0x0) {
    pAVar1 = (APlayerController *)
             FWeakObjectPtr::Get(&(param_1->Object->WeakPlayerController).WeakPtr);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return pAVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (APlayerController *)0x0;
}

// GetTypeID @ 14d61e520

FCameraObjectTypeID * __thiscall
UE::Cameras::FBoomArmCameraNodeEvaluator::GetTypeID(FBoomArmCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d6210c0

bool __thiscall
UE::Cameras::FBoomArmCameraNodeEvaluator::IsKindOf
          (FBoomArmCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBoomArmCameraNodeEvaluator>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
         FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d623dd0

void __thiscall
UE::Cameras::FBoomArmCameraNodeEvaluator::OnBuild
          (FBoomArmCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
  *pTVar1;
  longlong *plVar2;
  TCameraValueInterpolator<double> *pTVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  UClass *pUVar7;
  FInput2DCameraNodeEvaluator *pFVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *local_res8;
  
  if (this->_padding_ != 0) {
    pUVar7 = UBoomArmCameraNode::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar7);
    if (bVar5) {
      lVar10 = this->_padding_;
      goto LAB_14d623e09;
    }
  }
  lVar10 = 0;
LAB_14d623e09:
  pFVar8 = (FInput2DCameraNodeEvaluator *)
           FCameraNodeEvaluatorBuildParams::BuildEvaluator(param_1,*(UCameraNode **)(lVar10 + 0x98))
  ;
  if (pFVar8 == (FInput2DCameraNodeEvaluator *)0x0) {
    pFVar8 = (FInput2DCameraNodeEvaluator *)0x0;
  }
  else {
    cVar6 = (**(code **)(pFVar8->_padding_ + 8))(pFVar8,&FInput2DCameraNodeEvaluator::PrivateTypeID)
    ;
    if (cVar6 == '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsKindOf<Type>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraNodeEvaluator.h"
                         ,0x123,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  this->InputSlotEvaluator = pFVar8;
  plVar2 = *(longlong **)(lVar10 + 0x60);
  if (plVar2 != (longlong *)0x0) {
    puVar9 = (undefined8 *)(**(code **)(*plVar2 + 0x2b0))(plVar2,&local_res8);
    pTVar1 = &this->BoomLengthInterpolator;
    if (pTVar1 != (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
                   *)puVar9) {
      pTVar3 = pTVar1->Ptr;
      pTVar1->Ptr = (TCameraValueInterpolator<double> *)*puVar9;
      *puVar9 = 0;
      if (pTVar3 != (TCameraValueInterpolator<double> *)0x0) {
        (**(code **)pTVar3->_padding_)(pTVar3,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// OnBuildDebugBlocks @ 14d6244f0

void __thiscall
UE::Cameras::FBoomArmCameraNodeEvaluator::OnBuildDebugBlocks
          (FBoomArmCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  FScriptContainerElement *pFVar1;
  FCameraDebugBlock *pFVar2;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  pFVar2 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (this_00,0x48,8);
  pFVar2[1]._padding_ = 0;
  pFVar2[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar2[1].Attachments.ArrayNum = 0;
  pFVar2[1].Attachments.ArrayMax = 0;
  pFVar2[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Attachments).ArrayNum = 0;
  (pFVar2->Attachments).ArrayMax = 0;
  (pFVar2->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->Children).ArrayNum = 0;
  (pFVar2->Children).ArrayMax = 0;
  pFVar2->_padding_ = (longlong)&___7FBoomArmCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar2);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar2);
  pFVar1 = (FScriptContainerElement *)(this->DebugYawPitch).field0_0x0._s_0.Y;
  pFVar2[1]._padding_ = (longlong)(this->DebugYawPitch).field0_0x0._s_0.X;
  pFVar2[1].Attachments.AllocatorInstance.Data = pFVar1;
  *(double *)&pFVar2[1].Attachments.ArrayNum = this->CumulativePull;
  *(bool *)&pFVar2[1].Children.AllocatorInstance.Data = this->bDebugDidClampPull;
  *(bool *)((longlong)&pFVar2[1].Children.AllocatorInstance.Data + 1) =
       (this->BoomLengthInterpolator).Ptr != (TCameraValueInterpolator<double> *)0x0;
  return;
}

// OnExecuteOperation @ 14d627360

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBoomArmCameraNodeEvaluator::OnExecuteOperation
          (FBoomArmCameraNodeEvaluator *this,FCameraOperationParams *param_1,
          FCameraOperation *param_2)

{
  FCameraEvaluationContext *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  UObject *pUVar3;
  double dVar4;
  double dVar5;
  double local_28;
  double local_20;
  
  if (this->InputSlotEvaluator == (FInput2DCameraNodeEvaluator *)0x0) {
    pUVar3 = (UObject *)0x0;
    if ((param_2->OperationTypeID).Value != 0) {
      param_2 = (FCameraOperation *)pUVar3;
    }
    if ((UObject *)param_2 != (UObject *)0x0) {
      pFVar1 = (param_1->EvaluationContext).Object;
      pTVar2 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar1 != (FCameraEvaluationContext *)0x0) {
        pUVar3 = FWeakObjectPtr::Get(&(pFVar1->WeakPlayerController).WeakPtr);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pUVar3 != (UObject *)0x0) {
        (**(code **)(*(longlong *)pUVar3 + 0x7a8))(pUVar3,&local_28);
        dVar4 = local_20;
        if (((UObject *)param_2)->field_0x10 != '\0') {
          dVar4 = *(double *)&((UObject *)param_2)->field_0x8;
          *(undefined8 *)&((UObject *)param_2)->field_0x8 = 0;
          ((UObject *)param_2)->field_0x10 = 0;
          if (((UObject *)param_2)->field_0x11 != '\0') {
            dVar4 = local_20 + dVar4;
          }
        }
        dVar5 = local_28;
        if (((UObject *)param_2)->field_0x20 != '\0') {
          dVar5 = *(double *)&((UObject *)param_2)->field_0x18;
          *(undefined8 *)&((UObject *)param_2)->field_0x18 = 0;
          ((UObject *)param_2)->field_0x20 = 0;
          if (((UObject *)param_2)->field_0x21 != '\0') {
            dVar5 = local_28 + dVar5;
          }
        }
        local_28 = dVar5;
        local_20 = dVar4;
        (**(code **)(*(longlong *)pUVar3 + 0x7b0))(pUVar3,&local_28);
      }
    }
  }
  return;
}

// OnGetChildren @ 14d6275f0

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FBoomArmCameraNodeEvaluator::OnGetChildren
          (FBoomArmCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FInput2DCameraNodeEvaluator *local_res8;
  FCameraNodeEvaluator *local_res10 [3];
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_18;
  
  local_res8 = this->InputSlotEvaluator;
  local_18._First = (FCameraNodeEvaluator **)&local_res8;
  local_18._Last = local_res10;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// OnInitialize @ 14d627e70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBoomArmCameraNodeEvaluator::OnInitialize
          (FBoomArmCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,SupportsOperations);
  if (this->_padding_ != 0) {
    pUVar3 = UBoomArmCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar4 = this->_padding_;
      goto LAB_14d627eab;
    }
  }
  lVar4 = 0;
LAB_14d627eab:
  (this->BoomOffsetReader).DefaultValuePtr = (TVector<double> *)(lVar4 + 0x38);
  (this->BoomOffsetReader).VariableID.Value = *(uint *)(lVar4 + 0x50);
  (this->MaxForwardInterpolationFactorReader).DefaultValuePtr = (double *)(lVar4 + 0x68);
  (this->MaxForwardInterpolationFactorReader).VariableID.Value = *(uint *)(lVar4 + 0x70);
  (this->MaxBackwardInterpolationFactorReader).DefaultValuePtr = (double *)(lVar4 + 0x80);
  (this->MaxBackwardInterpolationFactorReader).VariableID.Value = *(uint *)(lVar4 + 0x88);
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastPivotLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastPivotLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LastPivotLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->CumulativePull = 0.0;
  return;
}

// OnRun @ 14d629d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBoomArmCameraNodeEvaluator::OnRun
          (FBoomArmCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraVariableTable *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TReferenceControllerBase<1> *pTVar5;
  FCameraEvaluationContext *pFVar6;
  TCameraValueInterpolator<double> *pTVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  TQuat<double> *pTVar15;
  TVector<double> *pTVar16;
  double *pdVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_388 [32];
  TRotator<double> local_368;
  float local_350;
  undefined1 local_34c;
  TVector<double>_u_0 local_348;
  FCameraVariableTable *local_330;
  double local_328;
  double dStack_320;
  double local_318;
  TVector<double>_u_0 local_310;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  double local_2e8;
  TTransform<double> local_2d8;
  double local_278;
  double dStack_270;
  double local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  TQuat<double> local_1c8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_388;
  local_368.Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  local_368.Yaw = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_368.Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  if (this->InputSlotEvaluator == (FInput2DCameraNodeEvaluator *)0x0) {
    pTVar5 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    pFVar6 = (param_1->EvaluationContext).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar6 == (FCameraEvaluationContext *)0x0) {
      pUVar13 = (UObject *)0x0;
    }
    else {
      pUVar13 = FWeakObjectPtr::Get(&(pFVar6->WeakPlayerController).WeakPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if (pUVar13 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar13 + 0x7a8))(pUVar13,&local_328);
      local_368.Pitch = local_328;
      local_368.Yaw = dStack_320;
      local_368.Roll = local_318;
    }
  }
  else {
    FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->InputSlotEvaluator,param_1,param_2);
    local_368.Yaw = (this->InputSlotEvaluator->InputValue).field0_0x0._s_0.X;
    local_368.Pitch = (this->InputSlotEvaluator->InputValue).field0_0x0._s_0.Y;
    local_368.Roll = 0.0;
  }
  if (this->_padding_ != 0) {
    pUVar14 = UBoomArmCameraNode::StaticClass();
    FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar14);
  }
  uVar18 = *(undefined4 *)&(param_2->CameraPose).Location.field0_0x0;
  uVar19 = *(undefined4 *)((longlong)&(param_2->CameraPose).Location.field0_0x0 + 4);
  uVar20 = *(undefined4 *)((longlong)&(param_2->CameraPose).Location.field0_0x0 + 8);
  uVar21 = *(undefined4 *)((longlong)&(param_2->CameraPose).Location.field0_0x0 + 0xc);
  dVar2 = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
  local_2f8 = uVar18;
  uStack_2f4 = uVar19;
  uStack_2f0 = uVar20;
  uStack_2ec = uVar21;
  pTVar15 = UE::Math::TRotator<double>::Quaternion(&local_368,&local_1c8);
  local_268 = pTVar15->Z;
  uStack_260 = *(undefined4 *)&pTVar15->W;
  uStack_25c = *(undefined4 *)((longlong)&pTVar15->W + 4);
  local_278 = pTVar15->X;
  dStack_270 = pTVar15->Y;
  local_148.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_148.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_148.Translation.ZW.m128d_f64[1] = 0.0;
  local_148.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_148.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_2e8 = dVar2;
  local_148.Rotation.XY.m128d_f64[0] = local_278;
  local_148.Rotation.XY.m128d_f64[1] = dStack_270;
  local_148.Rotation.ZW.m128d_f64[0] = local_268;
  local_148.Rotation.ZW.m128d_f64[1]._0_4_ = uStack_260;
  local_148.Rotation.ZW.m128d_f64[1]._4_4_ = uStack_25c;
  local_148.Translation.XY.m128d_f64[0]._0_4_ = uVar18;
  local_148.Translation.XY.m128d_f64[0]._4_4_ = uVar19;
  local_148.Translation.XY.m128d_f64[1]._0_4_ = uVar20;
  local_148.Translation.XY.m128d_f64[1]._4_4_ = uVar21;
  local_148.Translation.ZW.m128d_f64[0] = dVar2;
  if (((this->BoomOffsetReader).DefaultValuePtr == (TVector<double> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->BoomOffsetReader).VariableID.Value == 0xffffffff) ||
     (pTVar16 = FCameraVariableTable::FindValue<UE::Math::TVector<double>_>
                          (&param_2->VariableTable,
                           (FCameraVariableID)(this->BoomOffsetReader).VariableID.Value),
     pTVar16 == (TVector<double> *)0x0)) {
    pTVar16 = (this->BoomOffsetReader).DefaultValuePtr;
  }
  dVar3 = (pTVar16->field0_0x0)._s_0.X;
  dVar4 = (pTVar16->field0_0x0)._s_0.Y;
  dVar2 = (pTVar16->field0_0x0)._s_0.Z;
  uVar24 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar25 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  pFVar1 = &param_2->VariableTable;
  uVar22 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  uVar23 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar24;
  local_e8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar25;
  uVar20 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  uVar21 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  uVar18 = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  uVar19 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_1a8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_1a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_1a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_1a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar22;
  local_e8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar23;
  local_e8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar20;
  local_e8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_e8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar21;
  local_e8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar18;
  local_e8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_e8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar19;
  local_1a8.Rotation.XY.m128d_f64[1]._0_4_ = uVar24;
  local_1a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_1a8.Rotation.XY.m128d_f64[1]._4_4_ = uVar25;
  local_1a8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar22;
  local_1a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_1a8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar23;
  local_1a8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar20;
  local_1a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_1a8.Scale3D.XY.m128d_f64[1]._4_4_ = uVar21;
  local_1a8.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar18;
  local_1a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_1a8.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar19;
  local_e8.Translation.XY.m128d_f64[0] = dVar3;
  local_e8.Translation.XY.m128d_f64[1] = dVar4;
  local_e8.Translation.ZW.m128d_f64[0] = dVar2;
  UE::Math::TTransform<double>::Multiply(&local_1a8,&local_e8,&local_148);
  (this->DebugYawPitch).field0_0x0._s_0.X = local_368.Yaw;
  (this->DebugYawPitch).field0_0x0._s_0.Y = local_368.Pitch;
  pTVar7 = (this->BoomLengthInterpolator).Ptr;
  this->bDebugDidClampPull = false;
  dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2);
  if ((pTVar7 != (TCameraValueInterpolator<double> *)0x0) && (0.0 < dVar2)) {
    if (param_1->bIsFirstFrame == false) {
      if (param_2->bIsCameraCut == false) {
        dVar10 = (double)CONCAT44(local_148.Translation.XY.m128d_f64[0]._4_4_,
                                  local_148.Translation.XY.m128d_f64[0]._0_4_);
        dVar11 = (double)CONCAT44(local_148.Translation.XY.m128d_f64[1]._4_4_,
                                  local_148.Translation.XY.m128d_f64[1]._0_4_);
        dVar3 = (this->LastPivotLocation).field0_0x0._s_0.X;
        dVar9 = local_148.Translation.ZW.m128d_f64[0] - (this->LastPivotLocation).field0_0x0._s_0.Z;
        dVar4 = (this->LastPivotLocation).field0_0x0._s_0.Y;
        UE::Math::TRotator<double>::RotateVector
                  (&local_368,(TVector<double> *)&local_348._s_0,
                   &UE::Math::TVector<double>::ForwardVector);
        pTVar7 = (this->BoomLengthInterpolator).Ptr;
        dVar9 = (dVar11 - dVar4) * local_348._s_0.Y + local_348._s_0.X * (dVar10 - dVar3) +
                local_348._s_0.Z * dVar9 + this->CumulativePull;
        this->CumulativePull = dVar9;
        dVar3 = pTVar7->CurrentValue;
        dVar4 = pTVar7->TargetValue;
        pTVar7->CurrentValue = dVar9;
        pTVar7->TargetValue = 0.0;
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,dVar3,SUB84(dVar4,0));
        local_350 = param_1->DeltaTime;
        pTVar7 = (this->BoomLengthInterpolator).Ptr;
        local_34c = 0;
        local_330 = pFVar1;
        if (local_350 != 0.0) {
          (**(code **)(pTVar7->_padding_ + 0x10))(pTVar7,&local_350);
        }
        dVar3 = pTVar7->CurrentValue;
        dVar4 = dVar3;
        if (0.0 <= dVar3) {
          if (0.0 < dVar3) {
            pdVar17 = TCameraParameterReader<double>::Get
                                (&this->MaxBackwardInterpolationFactorReader,pFVar1);
            if ((0.0 < *pdVar17) && (dVar4 = *pdVar17 * dVar2, dVar3 <= dVar4)) {
              dVar4 = dVar3;
            }
          }
        }
        else {
          pdVar17 = TCameraParameterReader<double>::Get
                              (&this->MaxForwardInterpolationFactorReader,pFVar1);
          if ((0.0 < *pdVar17) &&
             (dVar2 = *pdVar17 * dVar2,
             dVar4 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^
                                      __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(dVar2,0) ^ (uint)__xmm_80000000000000008000000000000000)
             , dVar4 <= dVar3)) {
            dVar4 = dVar3;
          }
        }
        dVar2 = local_1a8.Translation.XY.m128d_f64[1] - local_348._s_0.Y * dVar4;
        local_1a8.Translation.ZW.m128d_f64[0] =
             local_1a8.Translation.ZW.m128d_f64[0] - local_348._s_0.Z * dVar4;
        local_1a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
        local_1a8.Translation.XY.m128d_f64[0] =
             local_1a8.Translation.XY.m128d_f64[0] - local_348._s_0.X * dVar4;
        local_1a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
        if (dVar4 == dVar3) {
          this->CumulativePull = dVar4;
          this->bDebugDidClampPull = false;
        }
        else {
          this->CumulativePull = dVar4;
          this->bDebugDidClampPull = true;
        }
      }
      else {
        UE::Math::TRotator<double>::RotateVector
                  (&local_368,(TVector<double> *)&local_310._s_0,
                   &UE::Math::TVector<double>::ForwardVector);
        dVar2 = this->CumulativePull;
        dVar3 = local_1a8.Translation.XY.m128d_f64[1] - local_310._s_0.Y * dVar2;
        local_1a8.Translation.ZW.m128d_f64[0] =
             local_1a8.Translation.ZW.m128d_f64[0] - local_310._s_0.Z * dVar2;
        local_1a8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
        local_1a8.Translation.XY.m128d_f64[0] =
             local_1a8.Translation.XY.m128d_f64[0] - local_310._s_0.X * dVar2;
        local_1a8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_1a8.Translation.ZW.m128d_f64[1] = 0.0;
      }
    }
    else {
      this->CumulativePull = 0.0;
    }
    (this->LastPivotLocation).field0_0x0._s_0.X =
         (double)CONCAT44(local_148.Translation.XY.m128d_f64[0]._4_4_,
                          local_148.Translation.XY.m128d_f64[0]._0_4_);
    (this->LastPivotLocation).field0_0x0._s_0.Y =
         (double)CONCAT44(local_148.Translation.XY.m128d_f64[1]._4_4_,
                          local_148.Translation.XY.m128d_f64[1]._0_4_);
    (this->LastPivotLocation).field0_0x0._s_0.Z = local_148.Translation.ZW.m128d_f64[0];
  }
  local_2d8.Rotation.XY.m128d_f64[0] = local_1a8.Rotation.XY.m128d_f64[0];
  local_2d8.Rotation.XY.m128d_f64[1] = local_1a8.Rotation.XY.m128d_f64[1];
  local_2d8.Rotation.ZW.m128d_f64[0] = local_1a8.Rotation.ZW.m128d_f64[0];
  local_2d8.Rotation.ZW.m128d_f64[1] = local_1a8.Rotation.ZW.m128d_f64[1];
  local_2d8.Translation.XY.m128d_f64[0] = local_1a8.Translation.XY.m128d_f64[0];
  local_2d8.Translation.XY.m128d_f64[1] = local_1a8.Translation.XY.m128d_f64[1];
  local_2d8.Translation.ZW.m128d_f64[0] = local_1a8.Translation.ZW.m128d_f64[0];
  local_2d8.Translation.ZW.m128d_f64[1] = local_1a8.Translation.ZW.m128d_f64[1];
  local_2d8.Scale3D.XY.m128d_f64[0] = local_1a8.Scale3D.XY.m128d_f64[0];
  local_2d8.Scale3D.XY.m128d_f64[1] = local_1a8.Scale3D.XY.m128d_f64[1];
  local_2d8.Scale3D.ZW.m128d_f64[0] = local_1a8.Scale3D.ZW.m128d_f64[0];
  local_2d8.Scale3D.ZW.m128d_f64[1] = local_1a8.Scale3D.ZW.m128d_f64[1];
  FCameraPose::SetTransform(&param_2->CameraPose,&local_2d8,false);
  FCameraRigJoints::AddYawPitchJoint(&param_2->CameraRigJoints,&local_148);
  return;
}

