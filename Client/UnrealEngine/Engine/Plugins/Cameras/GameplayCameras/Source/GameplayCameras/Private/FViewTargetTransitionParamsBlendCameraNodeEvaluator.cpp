// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetTypeID @ 14d61e770

FCameraObjectTypeID * __thiscall
UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator::GetTypeID
          (FViewTargetTransitionParamsBlendCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d621610

bool __thiscall
UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator::IsKindOf
          (FViewTargetTransitionParamsBlendCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator> TVar1;
  
  TVar1 = (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)param_1->ID;
  if ((((TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)PrivateTypeID) &&
       (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
                 FSimpleBlendCameraNodeEvaluator::PrivateTypeID)) &&
      (TVar1 != FBlendCameraNodeEvaluator::PrivateTypeID)) &&
     (TVar1 != (TCameraObjectTypeID<UE::Cameras::FBlendCameraNodeEvaluator>)
               FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnComputeBlendFactor @ 14d626170

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator::OnComputeBlendFactor
          (FViewTargetTransitionParamsBlendCameraNodeEvaluator *this,
          FCameraNodeEvaluationParams *param_1,FSimpleBlendCameraNodeEvaluationResult *param_2)

{
  char cVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if (this->_padding_ != 0) {
    pUVar3 = UViewTargetTransitionParamsBlendCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar4 = this->_padding_;
      goto LAB_14d6261ae;
    }
  }
  lVar4 = 0;
LAB_14d6261ae:
  fVar5 = __real_3f800000;
  fVar6 = __real_3f800000;
  if (0.0 < *(float *)(lVar4 + 0x38)) {
    fVar6 = this->CurrentTime / *(float *)(lVar4 + 0x38);
  }
  cVar1 = *(char *)(lVar4 + 0x3c);
  if (cVar1 == '\0') {
    param_2->BlendFactor = fVar6;
  }
  else if (cVar1 == '\x01') {
    param_2->BlendFactor = fVar6 * fVar6 * __real_40400000 - (fVar6 + fVar6) * fVar6 * fVar6;
  }
  else if (cVar1 == '\x02') {
    fVar5 = powf(fVar6,*(float *)(lVar4 + 0x40));
    param_2->BlendFactor = fVar5;
  }
  else if (cVar1 == '\x03') {
    if (__real_322bcc77 <
        (float)((uint)*(float *)(lVar4 + 0x40) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar5 = __real_3f800000 / *(float *)(lVar4 + 0x40);
    }
    fVar5 = powf(fVar6,fVar5);
    param_2->BlendFactor = fVar5;
  }
  else if (cVar1 == '\x04') {
    if (__real_3f000000 <= fVar6) {
      fVar6 = powf(__real_3f800000 - ((fVar6 + fVar6) - __real_3f800000),*(float *)(lVar4 + 0x40));
      param_2->BlendFactor = ((fVar5 - fVar6) + fVar5) * __real_3f000000;
    }
    else {
      fVar5 = powf(fVar6 + fVar6,*(float *)(lVar4 + 0x40));
      param_2->BlendFactor = fVar5 * __real_3f000000;
    }
  }
  else {
    param_2->BlendFactor = __real_3f800000;
  }
  return;
}

// OnRun @ 14d62d560

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator::OnRun
          (FViewTargetTransitionParamsBlendCameraNodeEvaluator *this,
          FCameraNodeEvaluationParams *param_1,FCameraNodeEvaluationResult *param_2)

{
  char cVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  float fVar5;
  float local_res8 [2];
  
  if (this->_padding_ != 0) {
    pUVar3 = UViewTargetTransitionParamsBlendCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar4 = this->_padding_;
      goto LAB_14d62d59e;
    }
  }
  lVar4 = 0;
LAB_14d62d59e:
  fVar5 = param_1->DeltaTime + this->CurrentTime;
  this->CurrentTime = fVar5;
  if (*(float *)(lVar4 + 0x38) <= fVar5) {
    this->CurrentTime = *(float *)(lVar4 + 0x38);
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  local_res8[0] = 0.0;
  (**(code **)(this->_padding_ + 0x90))(this,param_1,local_res8);
  fVar5 = __real_3f800000;
  cVar1 = *(char *)((longlong)&this->_padding_ + 5);
  if (__real_3f800000 <= local_res8[0]) {
    local_res8[0] = __real_3f800000;
  }
  if (local_res8[0] <= 0.0) {
    local_res8[0] = 0.0;
  }
  *(float *)&this->_padding_ = local_res8[0];
  if (cVar1 != '\0') {
    *(float *)&this->_padding_ = fVar5 - local_res8[0];
  }
  return;
}

// OnSerialize @ 14d62e020

void __thiscall
UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator::OnSerialize
          (FViewTargetTransitionParamsBlendCameraNodeEvaluator *this,
          FCameraNodeEvaluatorSerializeParams *param_1,FArchive *param_2)

{
  float *pfVar1;
  float *pfVar2;
  
  FSimpleBlendCameraNodeEvaluator::OnSerialize
            ((FSimpleBlendCameraNodeEvaluator *)this,param_1,param_2);
  pfVar1 = &this->CurrentTime;
  pfVar2 = (float *)**(undefined8 **)&param_2->field_0x8;
  if (pfVar2 + 1 <= (float *)(*(undefined8 **)&param_2->field_0x8)[1]) {
    *pfVar1 = *pfVar2;
    **(longlong **)&param_2->field_0x8 = **(longlong **)&param_2->field_0x8 + 4;
    return;
  }
  if ((param_2->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014d62e07e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_2 + 0x188))(param_2,pfVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_2,(uint *)pfVar1);
  return;
}

