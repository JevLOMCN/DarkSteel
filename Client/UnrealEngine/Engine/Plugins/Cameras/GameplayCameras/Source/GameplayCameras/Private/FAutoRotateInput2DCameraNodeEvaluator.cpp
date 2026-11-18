// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 10

// FAutoRotateInput2DCameraNodeEvaluator @ 14d654f30

FAutoRotateInput2DCameraNodeEvaluator * __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::FAutoRotateInput2DCameraNodeEvaluator
          (FAutoRotateInput2DCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAutoRotateInput2DCameraNodeEvaluator_Cameras_UE__6B_;
  *(undefined4 *)&this->_padding_ = 7;
  (this->DirectionVectorReader).VariableID.Value = 0xffffffff;
  (this->WaitTimeReader).DefaultValuePtr = (float *)0x0;
  (this->WaitTimeReader).VariableID.Value = 0xffffffff;
  (this->DeactivationThresholdReader).DefaultValuePtr = (float *)0x0;
  (this->DeactivationThresholdReader).VariableID.Value = 0xffffffff;
  (this->FreezeControlRotationReader).DefaultValuePtr = (bool *)0x0;
  (this->FreezeControlRotationReader).VariableID.Value = 0xffffffff;
  (this->EnableAutoRotateReader).DefaultValuePtr = (bool *)0x0;
  (this->EnableAutoRotateReader).VariableID.Value = 0xffffffff;
  (this->AutoRotateYawReader).DefaultValuePtr = (bool *)0x0;
  (this->AutoRotateYawReader).VariableID.Value = 0xffffffff;
  (this->AutoRotatePitchReader).DefaultValuePtr = (bool *)0x0;
  (this->AutoRotatePitchReader).VariableID.Value = 0xffffffff;
  (this->Interpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  this->InputNodeEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  this->RemainingWaitTime = 0.0;
  this->bIsAutoRotating = false;
  return this;
}

// DeactivateAutoRotate @ 14d65e190

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::DeactivateAutoRotate
          (FAutoRotateInput2DCameraNodeEvaluator *this,FCameraNodeEvaluationResult *param_1)

{
  TCameraValueInterpolator<double> *pTVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  bool *pbVar5;
  FBuiltInCameraVariables *pFVar6;
  FEntry *pFVar7;
  FCameraVariableTable *this_00;
  FCameraVariableDefinition *local_res8;
  
  if (this->bIsAutoRotating != false) {
    this->bIsAutoRotating = false;
    pTVar1 = (this->Interpolator).Ptr;
    if (pTVar1 != (TCameraValueInterpolator<double> *)0x0) {
      (this->Interpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
      (**(code **)pTVar1->_padding_)(pTVar1,1);
    }
    this_00 = &param_1->VariableTable;
    pfVar4 = TCameraParameterReader<float>::Get(&this->WaitTimeReader,this_00);
    this->RemainingWaitTime = (double)*pfVar4;
    pbVar5 = TCameraParameterReader<bool>::Get(&this->FreezeControlRotationReader,this_00);
    if (*pbVar5 != false) {
      pFVar6 = FBuiltInCameraVariables::Get();
      pFVar7 = FCameraVariableTable::FindEntry
                         (this_00,(FCameraVariableID)
                                  (pFVar6->FreezeControlRotationDefinition).VariableID.Value);
      if (pFVar7 != (FEntry *)0x0) {
        if (pFVar7->Type != Boolean) {
          bVar3 = Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7269619262472323284>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                             ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        (param_1->VariableTable).Memory[pFVar7->Offset] = '\0';
        pFVar7->Flags = pFVar7->Flags | (WrittenThisFrame|Written);
        return;
      }
      local_res8 = &pFVar6->FreezeControlRotationDefinition;
      `UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l2::<lambda_1>::operator()(&local_res8)
      ;
    }
  }
  return;
}

// GetPlayerController @ 14d6600f0

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
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::GetPlayerController
          (FAutoRotateInput2DCameraNodeEvaluator *this,
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

// GetTypeID @ 14d661b20

FCameraObjectTypeID * __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::GetTypeID
          (FAutoRotateInput2DCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662cd0

bool __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::IsKindOf
          (FAutoRotateInput2DCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID;
  if (((TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)PrivateTypeID) &&
      (TVar1 != (TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)
                FInput2DCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnBuild @ 14d6636b0

void __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::OnBuild
          (FAutoRotateInput2DCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  FInput2DCameraNodeEvaluator *pFVar4;
  
  if (this->_padding_ != 0) {
    pUVar2 = UAutoRotateInput2DCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar2);
    if (bVar1) {
      lVar3 = this->_padding_;
      goto LAB_14d6636e9;
    }
  }
  lVar3 = 0;
LAB_14d6636e9:
  if (*(UCameraNode **)(lVar3 + 0xb8) != (UCameraNode *)0x0) {
    pFVar4 = FCameraNodeEvaluatorBuildParams::
             BuildEvaluatorAs<UE::Cameras::FInput2DCameraNodeEvaluator>
                       (param_1,*(UCameraNode **)(lVar3 + 0xb8));
    this->InputNodeEvaluator = pFVar4;
  }
  return;
}

// OnBuildDebugBlocks @ 14d664660

void __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::OnBuildDebugBlocks
          (FAutoRotateInput2DCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this_00;
  TCameraValueInterpolator<double> *pTVar1;
  FCameraDebugBlock *pFVar2;
  FScriptContainerElement *pFVar3;
  
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
  pFVar2->_padding_ = (longlong)&___7FAutoRotateInput2DCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(this_00,pFVar2);
  FCameraDebugBlockBuilder::OnAttachDebugBlock(param_2,pFVar2);
  pFVar2[1]._padding_ = (longlong)this->RemainingWaitTime;
  *(bool *)&pFVar2[1].Children.AllocatorInstance.Data = this->bIsAutoRotating;
  pTVar1 = (this->Interpolator).Ptr;
  if (pTVar1 == (TCameraValueInterpolator<double> *)0x0) {
    pFVar3 = (FScriptContainerElement *)0x0;
  }
  else {
    pFVar3 = (FScriptContainerElement *)pTVar1->CurrentValue;
  }
  pFVar2[1].Attachments.AllocatorInstance.Data = pFVar3;
  pTVar1 = (this->Interpolator).Ptr;
  if (pTVar1 == (TCameraValueInterpolator<double> *)0x0) {
    pFVar2[1].Attachments.ArrayNum = 0;
    pFVar2[1].Attachments.ArrayMax = 0;
  }
  else {
    *(double *)&pFVar2[1].Attachments.ArrayNum = pTVar1->TargetValue;
  }
  return;
}

// OnGetChildren @ 14d667120

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::OnGetChildren
          (FAutoRotateInput2DCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  FInput2DCameraNodeEvaluator *local_res8;
  FCameraNodeEvaluator *local_res10 [3];
  initializer_list<UE::Cameras::FCameraNodeEvaluator_*> local_18;
  
  local_res8 = this->InputNodeEvaluator;
  local_18._First = (FCameraNodeEvaluator **)&local_res8;
  local_18._Last = local_res10;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>(__return_storage_ptr__,&local_18);
  return __return_storage_ptr__;
}

// OnInitialize @ 14d6676c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::OnInitialize
          (FAutoRotateInput2DCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1
          ,FCameraNodeEvaluationResult *param_2)

{
  float fVar1;
  FCameraEvaluationContext *pFVar2;
  FInput2DCameraNodeEvaluator *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  FCameraVariableID FVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  undefined4 extraout_var;
  float *pfVar13;
  UObject *pUVar14;
  double local_48;
  double local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  uint *puVar12;
  
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this,None);
  if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (param_1->EvaluationContext).Object;
  pUVar14 = (UObject *)0x0;
  dVar7 = (pFVar2->InitialResult).CameraPose.Location.field0_0x0._s_0.Y;
  (this->LastContextLocation).field0_0x0._s_0.X =
       (pFVar2->InitialResult).CameraPose.Location.field0_0x0._s_0.X;
  (this->LastContextLocation).field0_0x0._s_0.Y = dVar7;
  pFVar3 = this->InputNodeEvaluator;
  (this->LastContextLocation).field0_0x0._s_0.Z =
       (pFVar2->InitialResult).CameraPose.Location.field0_0x0._s_0.Z;
  (this->LastInputValue).field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  if (pFVar3 == (FInput2DCameraNodeEvaluator *)0x0) {
    pFVar2 = (param_1->EvaluationContext).Object;
    pTVar4 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar10 = pUVar14;
    if (pFVar2 != (FCameraEvaluationContext *)0x0) {
      pUVar10 = FWeakObjectPtr::Get(&(pFVar2->WeakPlayerController).WeakPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pUVar10 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar10 + 0x7a8))(pUVar10,&local_48);
      (this->LastInputValue).field0_0x0._s_0.X = local_40;
      (this->LastInputValue).field0_0x0._s_0.Y = local_48;
    }
  }
  else {
    dVar7 = (pFVar3->InputValue).field0_0x0._s_0.Y;
    (this->LastInputValue).field0_0x0._s_0.X = (pFVar3->InputValue).field0_0x0._s_0.X;
    (this->LastInputValue).field0_0x0._s_0.Y = dVar7;
  }
  if (this->_padding_ != 0) {
    pUVar11 = UAutoRotateInput2DCameraNode::StaticClass();
    bVar8 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar11);
    if (bVar8) {
      pUVar14 = (UObject *)this->_padding_;
    }
  }
  puVar12 = (uint *)&pUVar14[1].field_0x18;
  local_20 = 0;
  lVar5 = *(longlong *)&pUVar14[1].field_0x20;
  local_30 = 0;
  uStack_28 = 0;
  if (lVar5 == 0) {
    (this->DirectionVectorReader).DefaultValue.field0_0x0._s_0.X = 0.0;
    (this->DirectionVectorReader).DefaultValue.field0_0x0._s_0.Y = 0.0;
    (this->DirectionVectorReader).DefaultValue.field0_0x0._s_0.Z = 0.0;
  }
  else {
    dVar7 = *(double *)(lVar5 + 0x48);
    (this->DirectionVectorReader).DefaultValue.field0_0x0._s_0.X = *(double *)(lVar5 + 0x40);
    (this->DirectionVectorReader).DefaultValue.field0_0x0._s_0.Y = dVar7;
    (this->DirectionVectorReader).DefaultValue.field0_0x0._s_0.Z = *(double *)(lVar5 + 0x50);
    FVar9 = UCameraVariableAsset::GetVariableID(*(UCameraVariableAsset **)&pUVar14[1].field_0x20);
    puVar12 = (uint *)CONCAT44(extraout_var,FVar9.Value);
  }
  (this->DirectionVectorReader).VariableID.Value = *puVar12;
  (this->WaitTimeReader).DefaultValuePtr = (float *)(pUVar14 + 2);
  (this->WaitTimeReader).VariableID.Value = *(uint *)&pUVar14[2].field_0x4;
  (this->DeactivationThresholdReader).DefaultValuePtr = (float *)&pUVar14[2].field_0x10;
  (this->DeactivationThresholdReader).VariableID.Value = *(uint *)&pUVar14[2].field_0x14;
  (this->FreezeControlRotationReader).DefaultValuePtr = (bool *)(pUVar14 + 3);
  (this->FreezeControlRotationReader).VariableID.Value = *(uint *)&pUVar14[3].field_0x4;
  (this->EnableAutoRotateReader).DefaultValuePtr = (bool *)&pUVar14[3].field_0x10;
  (this->EnableAutoRotateReader).VariableID.Value = *(uint *)&pUVar14[3].field_0x14;
  (this->AutoRotateYawReader).DefaultValuePtr = (bool *)&pUVar14[3].field_0x20;
  (this->AutoRotateYawReader).VariableID.Value = *(uint *)&pUVar14[3].field_0x24;
  (this->AutoRotatePitchReader).DefaultValuePtr = (bool *)&pUVar14[4].field_0x8;
  (this->AutoRotatePitchReader).VariableID.Value = *(uint *)&pUVar14[4].field_0xc;
  pfVar13 = TCameraParameterReader<float>::Get(&this->WaitTimeReader,&param_2->VariableTable);
  fVar1 = *pfVar13;
  this->bIsAutoRotating = false;
  this->RemainingWaitTime = (double)fVar1;
  return;
}

// OnRun @ 14d66ab10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator::OnRun
          (FAutoRotateInput2DCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FCameraVariableTable *this_00;
  float fVar1;
  double dVar2;
  double dVar3;
  FCameraVariableID FVar4;
  int iVar5;
  FCameraEvaluationContext *pFVar6;
  longlong *plVar7;
  FInput2DCameraNodeEvaluator *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  uchar *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined8 uVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  UClass *pUVar27;
  UObject *pUVar28;
  bool *pbVar29;
  float *pfVar30;
  FEntry *pFVar31;
  undefined1 (*pauVar32) [16];
  undefined8 *puVar33;
  TCameraValueInterpolator<double> *pTVar34;
  APlayerController *pAVar35;
  FBuiltInCameraVariables *pFVar36;
  ulonglong uVar37;
  TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
  *pTVar38;
  uint uVar43;
  double dVar39;
  double dVar40;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar45;
  uint uVar46;
  longlong local_res8;
  float local_res20;
  undefined1 local_res24;
  undefined8 local_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  TVector<double>_u_0 local_1b0;
  FCameraOperationParams local_198;
  TCameraValueInterpolator<double> *local_180;
  FCameraVariableTable *local_178;
  FCameraVariableDefinition *local_170;
  FCameraVariableDefinition *local_168;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_160;
  double local_150;
  double local_148;
  undefined8 local_140;
  FCameraOperation local_138 [2];
  double local_130;
  undefined8 uStack_128;
  double local_120;
  undefined8 uStack_118;
  double local_110;
  double local_108;
  longlong local_100;
  longlong local_f8;
  TVector<double>_u_0 local_e8;
  TRotator<double> local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint uVar44;
  
  uVar22 = uStack_1c0;
  if (this->_padding_ == 0) {
LAB_14d66ab61:
    local_res8 = 0;
  }
  else {
    pUVar27 = UAutoRotateInput2DCameraNode::StaticClass();
    bVar24 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar27);
    if (!bVar24) goto LAB_14d66ab61;
    local_res8 = this->_padding_;
  }
  if (this->InputNodeEvaluator == (FInput2DCameraNodeEvaluator *)0x0) {
    pTVar9 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    pFVar6 = (param_1->EvaluationContext).Object;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar6 == (FCameraEvaluationContext *)0x0) {
      pUVar28 = (UObject *)0x0;
    }
    else {
      pUVar28 = FWeakObjectPtr::Get(&(pFVar6->WeakPlayerController).WeakPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pUVar28 != (UObject *)0x0) {
      (**(code **)(*(longlong *)pUVar28 + 0x7a8))(pUVar28,&local_100);
      this->_padding_ = local_f8;
      this->_padding_ = local_100;
    }
  }
  else {
    FCameraNodeEvaluator::Run((FCameraNodeEvaluator *)this->InputNodeEvaluator,param_1,param_2);
    dVar2 = (this->InputNodeEvaluator->InputValue).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)(this->InputNodeEvaluator->InputValue).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar2;
  }
  if (((this->EnableAutoRotateReader).DefaultValuePtr == (bool *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar24)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((this->EnableAutoRotateReader).VariableID.Value == 0xffffffff) ||
     (pbVar29 = FCameraVariableTable::FindValue<bool>
                          (&param_2->VariableTable,
                           (FCameraVariableID)(this->EnableAutoRotateReader).VariableID.Value),
     pbVar29 == (bool *)0x0)) {
    pbVar29 = (this->EnableAutoRotateReader).DefaultValuePtr;
  }
  bVar24 = *pbVar29;
  this_00 = &param_2->VariableTable;
  if (((this->AutoRotateYawReader).DefaultValuePtr == (bool *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar25)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((this->AutoRotateYawReader).VariableID.Value == 0xffffffff) ||
     (pbVar29 = FCameraVariableTable::FindValue<bool>
                          (this_00,(FCameraVariableID)(this->AutoRotateYawReader).VariableID.Value),
     pbVar29 == (bool *)0x0)) {
    pbVar29 = (this->AutoRotateYawReader).DefaultValuePtr;
  }
  bVar25 = *pbVar29;
  if (((this->AutoRotatePitchReader).DefaultValuePtr == (bool *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("DefaultValuePtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraParameterReader.h"
                          ,0x31,L"Parameter reader has no value pointer!"), bVar26)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((this->AutoRotatePitchReader).VariableID.Value == 0xffffffff) ||
     (pbVar29 = FCameraVariableTable::FindValue<bool>
                          (this_00,(FCameraVariableID)(this->AutoRotatePitchReader).VariableID.Value
                          ), pbVar29 == (bool *)0x0)) {
    pbVar29 = (this->AutoRotatePitchReader).DefaultValuePtr;
  }
  bVar26 = *pbVar29;
  if ((bVar24 == false) || ((bVar25 == false && (bVar26 == false)))) goto LAB_14d66b51d;
  if (((param_1->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar24)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar21 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar20 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  pFVar6 = (param_1->EvaluationContext).Object;
  dVar2 = (pFVar6->InitialResult).CameraPose.Location.field0_0x0._s_0.Z;
  dVar39 = (pFVar6->InitialResult).CameraPose.Location.field0_0x0._s_0.X;
  dVar40 = (pFVar6->InitialResult).CameraPose.Location.field0_0x0._s_0.Y;
  uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  if ((param_1->bIsFirstFrame == false) && (0.0 < param_1->DeltaTime)) {
    uVar13 = dVar2 - (this->LastContextLocation).field0_0x0._s_0.Z;
    uVar12 = dVar40 - (this->LastContextLocation).field0_0x0._s_0.Y;
    uVar14 = dVar39 - (this->LastContextLocation).field0_0x0._s_0.X;
  }
  uVar46 = (uint)((ulonglong)uVar13 >> 0x20);
  dVar45 = (double)this->_padding_ - (this->LastInputValue).field0_0x0._s_0.X;
  dVar15 = (double)this->_padding_ - (this->LastInputValue).field0_0x0._s_0.Y;
  (this->LastContextLocation).field0_0x0._s_0.X = dVar39;
  (this->LastContextLocation).field0_0x0._s_0.Y = dVar40;
  (this->LastContextLocation).field0_0x0._s_0.Z = dVar2;
  pfVar30 = TCameraParameterReader<float>::Get(&this->DeactivationThresholdReader,this_00);
  dVar2 = (double)this->_padding_;
  fVar1 = *pfVar30;
  (this->LastInputValue).field0_0x0._s_0.X = (double)this->_padding_;
  (this->LastInputValue).field0_0x0._s_0.Y = dVar2;
  if (((bVar25 != false) &&
      ((double)fVar1 <=
       (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) & uVar21,SUB84(dVar45,0) & uVar20))) ||
     ((bVar26 != false &&
      ((double)fVar1 <=
       (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) & uVar21,SUB84(dVar15,0) & uVar20)))))
  goto LAB_14d66b51d;
  FCameraPose::GetAimDir(&(pFVar6->InitialResult).CameraPose,(TVector<double> *)&local_e8._s_0);
  dVar2 = __real_3ff0000000000000;
  FVar4.Value = (this->DirectionVectorReader).VariableID.Value;
  local_1b0._s_0.Z = local_e8._s_0.Z;
  local_1b0._8_8_ = local_e8._s_0.Y;
  local_1b0._s_0.X = local_e8._s_0.X;
  if (FVar4.Value == 0xffffffff) {
    iVar5 = *(int *)(local_res8 + 0x38);
    if (iVar5 != 0) {
      uVar43 = (uint)((ulonglong)uVar12 >> 0x20);
      uVar44 = (uint)((ulonglong)uVar14 >> 0x20);
      uVar18 = uVar12;
      uVar19 = uVar14;
      if (iVar5 == 1) {
        if ((((double)CONCAT44(uVar44 & uVar21,(uint)uVar14 & uVar20) <= __real_3f1a36e2e0000000) &&
            ((double)CONCAT44(uVar43 & uVar21,(uint)uVar12 & uVar20) <= __real_3f1a36e2e0000000)) &&
           ((double)CONCAT44(uVar46 & uVar21,(uint)uVar13 & uVar20) <= __real_3f1a36e2e0000000))
        goto LAB_14d66b51d;
        dVar39 = (double)uVar14 * (double)uVar14 + (double)uVar12 * (double)uVar12 +
                 (double)uVar13 * (double)uVar13;
        local_1b0._s_0.Z = (double)uVar13;
        if ((dVar39 != __real_3ff0000000000000) &&
           (local_1b0._s_0.Z = local_e8._s_0.Z, uVar18 = local_e8._s_0.Y, uVar19 = local_e8._s_0.X,
           __real_3e45798ee0000000 <= dVar39)) {
          dVar39 = __real_3ff0000000000000 / SQRT(dVar39);
          local_108 = dVar39;
          goto LAB_14d66b058;
        }
      }
      else {
        if ((iVar5 != 2) ||
           ((((double)CONCAT44(uVar44 & uVar21,(uint)uVar14 & uVar20) <= __real_3f1a36e2e0000000 &&
             ((double)CONCAT44(uVar43 & uVar21,(uint)uVar12 & uVar20) <= __real_3f1a36e2e0000000))
            && ((double)CONCAT44(uVar46 & uVar21,(uint)uVar13 & uVar20) <= __real_3f1a36e2e0000000))
           )) goto LAB_14d66b080;
        dVar39 = (double)uVar14 * (double)uVar14 + (double)uVar12 * (double)uVar12 +
                 (double)uVar13 * (double)uVar13;
        local_1b0._16_8_ = uVar13;
        if ((dVar39 != __real_3ff0000000000000) &&
           (local_1b0._s_0.Z = local_e8._s_0.Z, uVar18 = local_e8._s_0.Y, uVar19 = local_e8._s_0.X,
           __real_3e45798ee0000000 <= dVar39)) {
          dVar39 = __real_3ff0000000000000 / SQRT(dVar39);
          local_110 = dVar39;
LAB_14d66b058:
          local_1b0._s_0.Z = dVar39 * (double)uVar13;
          uVar18 = dVar39 * (double)uVar12;
          uVar19 = dVar39 * (double)uVar14;
        }
      }
      local_1b0._8_4_ = (int)uVar18;
      local_1b0._s_0.X = (double)uVar19;
      local_1b0._12_4_ = (int)((ulonglong)uVar18 >> 0x20);
    }
  }
  else {
    pFVar31 = FCameraVariableTable::FindEntry(this_00,FVar4);
    if (pFVar31 == (FEntry *)0x0) {
LAB_14d66aeff:
      pauVar32 = (undefined1 (*) [16])0x0;
    }
    else {
      if ((pFVar31->Type != Vector3d) &&
         (bVar24 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7269619262472323284>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                              ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar24)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((pFVar31->Flags & Written) == None) goto LAB_14d66aeff;
      pauVar32 = (undefined1 (*) [16])((param_2->VariableTable).Memory + pFVar31->Offset);
      if (pauVar32 != (undefined1 (*) [16])0x0) {
        local_1b0._0_16_ = *pauVar32;
        local_1b0._s_0.Z = (double)*(undefined8 *)pauVar32[1];
      }
    }
    if (pauVar32 == (undefined1 (*) [16])0x0) goto LAB_14d66b51d;
  }
LAB_14d66b080:
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_1b0._s_0,&local_d0);
  if (bVar25 == false) {
    local_d0.Yaw = 0.0;
  }
  else {
    local_d0.Yaw = local_d0.Yaw - (double)this->_padding_;
  }
  dVar39 = UE::Math::TRotator<double>::NormalizeAxis(local_d0.Yaw);
  if (bVar26 == false) {
    local_d0.Pitch = 0.0;
  }
  else {
    local_d0.Pitch = local_d0.Pitch - (double)this->_padding_;
  }
  dVar40 = UE::Math::TRotator<double>::NormalizeAxis(local_d0.Pitch);
  if (((double)GGameplayCamerasAutoRotateSnapThreshold <=
       (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) & uVar21,SUB84(dVar39,0) & uVar20)) ||
     ((double)GGameplayCamerasAutoRotateSnapThreshold <=
      (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) & uVar21,SUB84(dVar40,0) & uVar20))) {
    if ((0.0 < this->RemainingWaitTime) &&
       (dVar45 = this->RemainingWaitTime - (double)param_1->DeltaTime,
       this->RemainingWaitTime = dVar45, 0.0 < dVar45)) {
      return;
    }
    dVar45 = SQRT(dVar40 * dVar40 + dVar39 * dVar39);
    if (this->bIsAutoRotating == false) {
      plVar7 = *(longlong **)(local_res8 + 0x70);
      if (plVar7 == (longlong *)0x0) {
        pTVar34 = ::operator_new(0x28);
        if (pTVar34 != (TCameraValueInterpolator<double> *)0x0) {
          pTVar34->Parameters = (UCameraValueInterpolator *)0x0;
          pTVar34->CurrentValue = 0.0;
          pTVar34->TargetValue = 0.0;
          pTVar34->bIsFinished = false;
          pTVar34->_padding_ = (longlong)&___7__TPopValueInterpolator_N_Cameras_UE__6B_;
        }
        local_180 = (this->Interpolator).Ptr;
        (this->Interpolator).Ptr = pTVar34;
      }
      else {
        puVar33 = (undefined8 *)(**(code **)(*plVar7 + 0x2b0))(plVar7,&local_180);
        pTVar38 = &this->Interpolator;
        if (pTVar38 !=
            (TUniquePtr<UE::Cameras::TCameraValueInterpolator<double>,TDefaultDelete<UE::Cameras::TCameraValueInterpolator<double>_>_>
             *)puVar33) {
          pTVar34 = pTVar38->Ptr;
          pTVar38->Ptr = (TCameraValueInterpolator<double> *)*puVar33;
          *puVar33 = 0;
          if (pTVar34 != (TCameraValueInterpolator<double> *)0x0) {
            (**(code **)pTVar34->_padding_)(pTVar34,1);
          }
        }
      }
      if (local_180 != (TCameraValueInterpolator<double> *)0x0) {
        (**(code **)local_180->_padding_)(local_180,1);
      }
      pFVar8 = this->InputNodeEvaluator;
      (this->OriginalInputValue).field0_0x0._s_0 =
           (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
      if (pFVar8 != (FInput2DCameraNodeEvaluator *)0x0) {
        dVar15 = (pFVar8->InputValue).field0_0x0._s_0.Y;
        (this->OriginalInputValue).field0_0x0._s_0.X = (pFVar8->InputValue).field0_0x0._s_0.X;
        (this->OriginalInputValue).field0_0x0._s_0.Y = dVar15;
      }
      this->bIsAutoRotating = true;
    }
    pTVar38 = &this->Interpolator;
    if ((pTVar38->Ptr == (TCameraValueInterpolator<double> *)0x0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("Interpolator",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Nodes\\Input\\AutoRotateInput2DCameraNode.cpp"
                            ,0x110,L""), bVar24)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pTVar34 = pTVar38->Ptr;
    dVar15 = pTVar34->CurrentValue;
    dVar3 = pTVar34->TargetValue;
    pTVar34->CurrentValue = dVar45;
    pTVar34->TargetValue = 0.0;
    (**(code **)(pTVar34->_padding_ + 8))(pTVar34,dVar15,SUB84(dVar3,0));
    local_res20 = param_1->DeltaTime;
    pTVar34 = pTVar38->Ptr;
    local_res24 = 0;
    local_178 = this_00;
    if (local_res20 != 0.0) {
      (**(code **)(pTVar34->_padding_ + 0x10))(pTVar34,&local_res20,&local_178);
    }
    bVar24 = false;
    pFVar6 = (param_1->EvaluationContext).Object;
    pTVar9 = (param_1->EvaluationContext).SharedReferenceCount.ReferenceController;
    dVar2 = dVar2 - pTVar34->CurrentValue / dVar45;
    dVar40 = dVar2 * dVar40;
    dVar2 = dVar2 * dVar39;
    if (this->InputNodeEvaluator == (FInput2DCameraNodeEvaluator *)0x0) {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_160.Object = pFVar6;
      local_160.SharedReferenceCount.ReferenceController = pTVar9;
      pAVar35 = GetPlayerController(this,&local_160);
      if (pAVar35 != (APlayerController *)0x0) {
        dVar2 = dVar2 + (double)this->_padding_;
        dVar40 = dVar40 + (double)this->_padding_;
        local_140 = 0;
        local_150 = dVar40;
        local_148 = dVar2;
        (**(code **)(pAVar35->_padding_ + 0x7b0))(pAVar35,&local_150);
        (this->LastInputValue).field0_0x0._s_0.X = dVar2;
        (this->LastInputValue).field0_0x0._s_0.Y = dVar40;
      }
    }
    else {
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b8 = 0;
      uStack_b0 = 0;
      local_198.EvaluationContext.Object = pFVar6;
      local_198.EvaluationContext.SharedReferenceCount.ReferenceController = pTVar9;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      local_198.Evaluator = param_1->Evaluator;
      uStack_1c0 = CONCAT62(uStack_1c0._2_6_,0x101);
      uStack_1c0._4_4_ = SUB84(uVar22,4);
      uVar23 = uStack_1c0._4_4_;
      auVar16._4_8_ = extraout_XMM0_Qb;
      auVar16._0_4_ = uStack_1c4;
      auVar41._0_8_ = auVar16._0_8_ << 0x20;
      auVar41._8_4_ = (undefined4)uStack_1c0;
      auVar41._12_4_ = uStack_1c0._4_4_;
      local_138[0].OperationTypeID.Value = (FCameraOperationTypeID)0;
      uStack_128 = auVar41._8_8_;
      uStack_1c0._2_6_ = auVar41._10_6_;
      uStack_1c0 = CONCAT62(uStack_1c0._2_6_,0x101);
      uStack_1c4 = (undefined4)((ulonglong)dVar2 >> 0x20);
      auVar17._4_8_ = uStack_128;
      auVar17._0_4_ = uStack_1c4;
      auVar42._0_8_ = auVar17._0_8_ << 0x20;
      auVar42._8_4_ = (undefined4)uStack_1c0;
      auVar42._12_4_ = uVar23;
      uStack_118 = auVar42._8_8_;
      local_130 = dVar2;
      local_120 = dVar40;
      FCameraNodeEvaluator::ExecuteOperation
                ((FCameraNodeEvaluator *)this->InputNodeEvaluator,&local_198,local_138);
      dVar2 = (this->InputNodeEvaluator->InputValue).field0_0x0._s_0.X;
      dVar39 = (this->InputNodeEvaluator->InputValue).field0_0x0._s_0.Y;
      this->_padding_ = (longlong)dVar2;
      this->_padding_ = (longlong)dVar39;
      (this->LastInputValue).field0_0x0._s_0.X = dVar2;
      (this->LastInputValue).field0_0x0._s_0.Y = dVar39;
      if (((char)uStack_128 != '\0') || ((char)uStack_118 != '\0')) {
        bVar24 = true;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_198.EvaluationContext.SharedReferenceCount.ReferenceController);
    }
    if ((((this->Interpolator).Ptr)->bIsFinished == false) && (!bVar24)) {
      pbVar29 = TCameraParameterReader<bool>::Get
                          (&this->FreezeControlRotationReader,&param_2->VariableTable);
      if (*pbVar29 == false) {
        return;
      }
      pFVar36 = FBuiltInCameraVariables::Get();
      dVar2 = (this->OriginalInputValue).field0_0x0._s_0.Y;
      dVar39 = (this->OriginalInputValue).field0_0x0._s_0.X;
      pFVar31 = FCameraVariableTable::FindEntry
                          (&param_2->VariableTable,
                           (FCameraVariableID)(pFVar36->ControlRotationDefinition).VariableID.Value)
      ;
      if (pFVar31 == (FEntry *)0x0) {
        local_170 = &pFVar36->ControlRotationDefinition;
        `UE::Cameras::FCameraVariableTable::SetValue<UE::Math::TRotator<double>_>'::__l2::<lambda_1>
        ::operator()(&local_170);
      }
      else {
        if ((pFVar31->Type != Rotator3d) &&
           (bVar24 = Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<7269619262472323284>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                                ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar24))
        {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar37 = (ulonglong)pFVar31->Offset;
        puVar10 = (param_2->VariableTable).Memory;
        *(double *)(puVar10 + uVar37) = dVar2;
        *(double *)(puVar10 + uVar37 + 8) = dVar39;
        puVar10 = puVar10 + uVar37 + 0x10;
        puVar10[0] = '\0';
        puVar10[1] = '\0';
        puVar10[2] = '\0';
        puVar10[3] = '\0';
        puVar10[4] = '\0';
        puVar10[5] = '\0';
        puVar10[6] = '\0';
        puVar10[7] = '\0';
        pFVar31->Flags = pFVar31->Flags | (WrittenThisFrame|Written);
      }
      pFVar31 = FCameraVariableTable::FindEntry
                          (&param_2->VariableTable,
                           (FCameraVariableID)
                           (pFVar36->FreezeControlRotationDefinition).VariableID.Value);
      if (pFVar31 == (FEntry *)0x0) {
        local_168 = &pFVar36->FreezeControlRotationDefinition;
        `UE::Cameras::FCameraVariableTable::SetValue<bool>'::__l2::<lambda_1>::operator()
                  (&local_168);
        return;
      }
      if ((pFVar31->Type != Boolean) &&
         (bVar24 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7269619262472323284>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraVariableTable.h"
                              ,0xd4,"TCameraVariableTraits<ValueType>::Type == InType"), bVar24)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      (param_2->VariableTable).Memory[pFVar31->Offset] = '\x01';
      pFVar31->Flags = pFVar31->Flags | (WrittenThisFrame|Written);
      return;
    }
  }
LAB_14d66b51d:
  DeactivateAutoRotate(this,param_2);
  return;
}

