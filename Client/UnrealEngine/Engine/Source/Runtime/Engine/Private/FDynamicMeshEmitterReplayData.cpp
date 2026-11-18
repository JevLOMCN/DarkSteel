// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Serialize @ 14812e640

void __thiscall
FDynamicMeshEmitterReplayData::Serialize(FDynamicMeshEmitterReplayData *this,FArchive *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  uchar *puVar4;
  
  FDynamicSpriteEmitterReplayDataBase::Serialize
            ((FDynamicSpriteEmitterReplayDataBase *)this,param_1);
  piVar1 = &this->SubUVInterpMethod;
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
  piVar1 = &this->SubUVDataOffset;
  puVar2 = &param_1->field_0x2a;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
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
  piVar1 = &this->SubImages_Horizontal;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
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
  piVar1 = &this->SubImages_Vertical;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
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
  ::operator<<(param_1,&this->bScaleUV);
  piVar1 = &this->MeshRotationOffset;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
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
  piVar1 = &this->MeshMotionBlurOffset;
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((*puVar2 & 1) == 0) {
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
  puVar4 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->MeshAlignment,1);
  }
  else {
    this->MeshAlignment = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  ::operator<<(param_1,&this->bMeshRotationActive);
  UE::Math::operator<<(param_1,&this->LockedAxis);
  return;
}

// operator= @ 148160c90

FDynamicMeshEmitterReplayData * __thiscall
FDynamicMeshEmitterReplayData::operator=
          (FDynamicMeshEmitterReplayData *this,FDynamicMeshEmitterReplayData *param_1)

{
  FDynamicSpriteEmitterReplayDataBase::operator=
            ((FDynamicSpriteEmitterReplayDataBase *)this,
             (FDynamicSpriteEmitterReplayDataBase *)param_1);
  this->SubUVInterpMethod = param_1->SubUVInterpMethod;
  this->SubUVDataOffset = param_1->SubUVDataOffset;
  this->SubImages_Horizontal = param_1->SubImages_Horizontal;
  this->SubImages_Vertical = param_1->SubImages_Vertical;
  this->bScaleUV = param_1->bScaleUV;
  this->MeshRotationOffset = param_1->MeshRotationOffset;
  this->MeshMotionBlurOffset = param_1->MeshMotionBlurOffset;
  this->MeshAlignment = param_1->MeshAlignment;
  this->bMeshRotationActive = param_1->bMeshRotationActive;
  *(undefined8 *)&(this->LockedAxis).field0_0x0 = *(undefined8 *)&(param_1->LockedAxis).field0_0x0;
  (this->LockedAxis).field0_0x0._s_0.Z = (param_1->LockedAxis).field0_0x0._s_0.Z;
  return this;
}

