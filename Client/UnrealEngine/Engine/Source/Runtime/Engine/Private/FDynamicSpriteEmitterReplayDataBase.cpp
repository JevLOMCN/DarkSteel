// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FDynamicSpriteEmitterReplayDataBase @ 1480f2ef0

FDynamicSpriteEmitterReplayDataBase * __thiscall
FDynamicSpriteEmitterReplayDataBase::FDynamicSpriteEmitterReplayDataBase
          (FDynamicSpriteEmitterReplayDataBase *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FDynamicSpriteEmitterReplayDataBase__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->MaterialInterface = (UMaterialInterface *)0x0;
  this->RequiredModule = (FParticleRequiredModule *)0x0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  this->_padding_ = 0x3f800000;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  fVar3 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->NormalsSphereCenter).field0_0x0._s_0.Z =
       (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->NormalsSphereCenter).field0_0x0._s_0.Y = fVar3;
  (this->NormalsSphereCenter).field0_0x0._s_0.X = (float)(double)uVar1;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  fVar3 = (float)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->InvDeltaSeconds = 0.0;
  this->MaxDrawCount = 0;
  this->OrbitModuleOffset = 0;
  this->DynamicParameterDataOffset = 0;
  this->LightDataOffset = 0;
  this->LightVolumetricScatteringIntensity = 0.0;
  this->CameraPayloadOffset = 0;
  this->SubUVDataOffset = 0;
  this->SubImages_Horizontal = 1;
  this->SubImages_Vertical = 1;
  this->bUseLocalSpace = false;
  this->bLockAxis = false;
  this->ScreenAlignment = '\0';
  this->LockAxisFlag = '\0';
  this->EmitterRenderMode = '\0';
  this->EmitterNormalsMode = '\0';
  (this->PivotOffset).field0_0x0._s_0.X = -0.5;
  (this->PivotOffset).field0_0x0._s_0.Y = -0.5;
  this->bUseVelocityForMotionBlur = false;
  this->bRemoveHMDRoll = false;
  this->MinFacingCameraBlendDistance = 0.0;
  this->MaxFacingCameraBlendDistance = 0.0;
  (this->NormalsCylinderDirection).field0_0x0._s_0.Y = (float)(double)uVar2;
  (this->NormalsCylinderDirection).field0_0x0._s_0.X = (float)(double)uVar1;
  (this->NormalsCylinderDirection).field0_0x0._s_0.Z = fVar3;
  return this;
}

// ~FDynamicSpriteEmitterReplayDataBase @ 1480f65e0

void __thiscall
FDynamicSpriteEmitterReplayDataBase::~FDynamicSpriteEmitterReplayDataBase
          (FDynamicSpriteEmitterReplayDataBase *this)

{
  FParticleRequiredModule *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->RequiredModule;
  this->_padding_ = (longlong)&___7FDynamicSpriteEmitterReplayDataBase__6B_;
  if (pFVar1 != (FParticleRequiredModule *)0x0) {
    pFVar2 = (pFVar1->FrameData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x30);
  }
  this->_padding_ = (longlong)&___7FDynamicEmitterReplayDataBase__6B_;
  FParticleDataContainer::Free((FParticleDataContainer *)&this->_padding_);
  return;
}

// Serialize @ 14812e890

void __thiscall
FDynamicSpriteEmitterReplayDataBase::Serialize
          (FDynamicSpriteEmitterReplayDataBase *this,FArchive *param_1)

{
  int *piVar1;
  uchar *puVar2;
  int *piVar3;
  longlong *plVar4;
  float *pfVar5;
  float *pfVar6;
  uint local_res8 [2];
  
  FDynamicEmitterReplayDataBase::Serialize((FDynamicEmitterReplayDataBase *)this,param_1);
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ScreenAlignment,1);
  }
  else {
    this->ScreenAlignment = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  ::operator<<(param_1,&this->bUseLocalSpace);
  ::operator<<(param_1,&this->bLockAxis);
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->LockAxisFlag,1);
  }
  else {
    this->LockAxisFlag = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  piVar1 = &this->MaxDrawCount;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  plVar4 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = (uint)this->EmitterRenderMode;
  if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  piVar1 = &this->OrbitModuleOffset;
  this->EmitterRenderMode = (uchar)local_res8[0];
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->DynamicParameterDataOffset;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->LightDataOffset;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar6 = &this->LightVolumetricScatteringIntensity;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar6);
    }
  }
  else {
    *pfVar6 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  piVar1 = &this->CameraPayloadOffset;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->EmitterNormalsMode,1);
  }
  else {
    this->EmitterNormalsMode = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  UE::Math::operator<<(param_1,&this->NormalsSphereCenter);
  UE::Math::operator<<(param_1,&this->NormalsCylinderDirection);
  (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&this->MaterialInterface);
  pfVar6 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar6 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->PivotOffset,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->PivotOffset);
    }
  }
  else {
    (this->PivotOffset).field0_0x0._s_0.X = *pfVar6;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar6 = &(this->PivotOffset).field0_0x0._s_0.Y;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar6);
    }
  }
  else {
    *pfVar6 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  ::operator<<(param_1,&this->bUseVelocityForMotionBlur);
  ::operator<<(param_1,&this->bRemoveHMDRoll);
  pfVar6 = &this->MinFacingCameraBlendDistance;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if ((float *)(*(undefined8 **)&param_1->field_0x8)[1] < pfVar5 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar6,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar6);
    }
  }
  else {
    *pfVar6 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pfVar6 = &this->MaxFacingCameraBlendDistance;
  pfVar5 = (float *)**(undefined8 **)&param_1->field_0x8;
  if (pfVar5 + 1 <= (float *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *pfVar6 = *pfVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pfVar6,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pfVar6);
  return;
}

// operator= @ 148160d50

FDynamicSpriteEmitterReplayDataBase * __thiscall
FDynamicSpriteEmitterReplayDataBase::operator=
          (FDynamicSpriteEmitterReplayDataBase *this,FDynamicSpriteEmitterReplayDataBase *param_1)

{
  longlong lVar1;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar1 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar1;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  this->MaterialInterface = param_1->MaterialInterface;
  this->RequiredModule = param_1->RequiredModule;
  *(undefined8 *)&(this->NormalsSphereCenter).field0_0x0 =
       *(undefined8 *)&(param_1->NormalsSphereCenter).field0_0x0;
  (this->NormalsSphereCenter).field0_0x0._s_0.Z = (param_1->NormalsSphereCenter).field0_0x0._s_0.Z;
  *(undefined8 *)&(this->NormalsCylinderDirection).field0_0x0 =
       *(undefined8 *)&(param_1->NormalsCylinderDirection).field0_0x0;
  (this->NormalsCylinderDirection).field0_0x0._s_0.Z =
       (param_1->NormalsCylinderDirection).field0_0x0._s_0.Z;
  this->InvDeltaSeconds = param_1->InvDeltaSeconds;
  *(undefined8 *)&(this->LWCTile).field0_0x0 = *(undefined8 *)&(param_1->LWCTile).field0_0x0;
  (this->LWCTile).field0_0x0._s_0.Z = (param_1->LWCTile).field0_0x0._s_0.Z;
  this->MaxDrawCount = param_1->MaxDrawCount;
  this->OrbitModuleOffset = param_1->OrbitModuleOffset;
  this->DynamicParameterDataOffset = param_1->DynamicParameterDataOffset;
  this->LightDataOffset = param_1->LightDataOffset;
  this->LightVolumetricScatteringIntensity = param_1->LightVolumetricScatteringIntensity;
  this->CameraPayloadOffset = param_1->CameraPayloadOffset;
  this->SubUVDataOffset = param_1->SubUVDataOffset;
  this->SubImages_Horizontal = param_1->SubImages_Horizontal;
  this->SubImages_Vertical = param_1->SubImages_Vertical;
  this->bUseLocalSpace = param_1->bUseLocalSpace;
  this->bLockAxis = param_1->bLockAxis;
  this->ScreenAlignment = param_1->ScreenAlignment;
  this->LockAxisFlag = param_1->LockAxisFlag;
  this->EmitterRenderMode = param_1->EmitterRenderMode;
  this->EmitterNormalsMode = param_1->EmitterNormalsMode;
  (this->PivotOffset).field0_0x0 = (param_1->PivotOffset).field0_0x0;
  this->bUseVelocityForMotionBlur = param_1->bUseVelocityForMotionBlur;
  this->bRemoveHMDRoll = param_1->bRemoveHMDRoll;
  this->MinFacingCameraBlendDistance = param_1->MinFacingCameraBlendDistance;
  this->MaxFacingCameraBlendDistance = param_1->MaxFacingCameraBlendDistance;
  return this;
}

