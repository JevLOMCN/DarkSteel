// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FAudioPlayerInterface_InstanceData @ 1490b0a80

FAudioPlayerInterface_InstanceData * __thiscall
FAudioPlayerInterface_InstanceData::FAudioPlayerInterface_InstanceData
          (FAudioPlayerInterface_InstanceData *this)

{
  int iVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  TVector<double>_u_0 local_28;
  
  pTVar2 = ::operator_new(0x48);
  if (pTVar2 == (TNode *)0x0) {
    pTVar2 = (TNode *)0x0;
  }
  else {
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Position.field0_0x0._s_0.X = 0.0;
    (pTVar2->Item).Position.field0_0x0._s_0.Y = 0.0;
    (pTVar2->Item).Position.field0_0x0._s_0.Z = 0.0;
    (pTVar2->Item).Rotation.Pitch = 0.0;
    (pTVar2->Item).Rotation.Yaw = 0.0;
    (pTVar2->Item).Rotation.Roll = 0.0;
    (pTVar2->Item).Volume = 0.0;
    (pTVar2->Item).Pitch = 0.0;
    (pTVar2->Item).StartTime = 0.0;
    (pTVar2->Item).ParticleID = 0;
    pTVar2->NextNode = (TNode *)0x0;
    (pTVar2->Item).Volume = 1.0;
    (pTVar2->Item).Pitch = 1.0;
    (pTVar2->Item).StartTime = 1.0;
    (pTVar2->Item).ParticleID = -1;
  }
  pTVar5 = (TNode *)0x0;
  (this->PlayAudioQueue).Tail = pTVar2;
  (this->PlayAudioQueue).Head = pTVar2;
  pTVar3 = ::operator_new(0x30);
  pTVar4 = pTVar5;
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar3->_padding_ = 0;
    *(undefined8 *)&pTVar3->Item = 0;
    (pTVar3->Item)._padding_ = 0;
    *(undefined8 *)&(pTVar3->Item).UpdateCallback = 0;
    *(undefined8 *)&(pTVar3->Item).UpdateCallback.field_0x8 = 0;
    pTVar3->NextNode = (TNode *)0x0;
    ((FAudioInitialParamData *)&pTVar3->_padding_)->ParticleID = -1;
    *(undefined8 *)&pTVar3->Item = 0;
    iVar1 = FNiagaraTypeDefinitionHandle::Register
                      ((FNiagaraTypeDefinitionHandle *)&(pTVar3->Item)._padding_,
                       &FNiagaraTypeDefinition::Vec4Def);
    *(int *)&(pTVar3->Item)._padding_ = iVar1;
    *(undefined8 *)&(pTVar3->Item).UpdateCallback = 0;
    *(undefined8 *)&(pTVar3->Item).UpdateCallback.field_0x8 = 0;
    pTVar4 = pTVar3;
  }
  (this->InitialParamDataQueue).Tail = (TNode *)pTVar4;
  (this->InitialParamDataQueue).Head = (TNode *)pTVar4;
  pTVar4 = ::operator_new(0x50);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar4->_padding_ = 0;
    *(undefined8 *)&pTVar4->Item = 0;
    (pTVar4->Item)._padding_ = 0;
    *(undefined8 *)&(pTVar4->Item).UpdateCallback = 0;
    *(undefined8 *)&(pTVar4->Item).UpdateCallback.field_0x8 = 0;
    *(undefined8 *)&(pTVar4->Item).UpdateCallback.field_0x10 = 0;
    *(undefined8 *)&(pTVar4->Item).UpdateCallback.field_0x18 = 0;
    *(undefined8 *)&(pTVar4->Item).UpdateCallback.field_0x20 = 0;
    *(undefined8 *)&(pTVar4->Item).UpdateCallback.field_0x28 = 0;
    pTVar4->NextNode = (TNode *)0x0;
    (pTVar4->Item).AudioHandle = 0;
    *(undefined8 *)&(pTVar4->Item).UpdateCallback = 0;
    *(undefined8 *)&(pTVar4->Item).UpdateCallback.field_0x28 = 0;
    pTVar5 = pTVar4;
  }
  (this->PersistentAudioActionQueue).Tail = pTVar5;
  (this->PersistentAudioActionQueue).Head = pTVar5;
  (this->HandleCount).Counter = 0;
  this->ParamCountEstimate = 0;
  (this->PersistentAudioMapping).Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PersistentAudioMapping).Pairs.ArrayNum = 0;
  (this->PersistentAudioMapping).Pairs.ArrayMax = 0;
  (this->SoundToPlay).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Attenuation).WeakPtr = (FWeakObjectPtr)0x0;
  (this->Concurrency).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CachedUserParam).WeakPtr = (FWeakObjectPtr)0x0;
  (this->ParameterNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterNames).ArrayNum = 0;
  (this->ParameterNames).ArrayMax = 0;
  *(undefined8 *)&(this->GlobalInitialParameterValues).Elements = 0;
  *(undefined8 *)&(this->GlobalInitialParameterValues).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->GlobalInitialParameterValues).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->GlobalInitialParameterValues).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->GlobalInitialParameterValues).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->GlobalInitialParameterValues).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GlobalInitialParameterValues).Elements.field_0x34 = 0;
  (this->GlobalInitialParameterValues).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->GlobalInitialParameterValues).HashSize = 0;
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FNiagaraLWCConverter::FNiagaraLWCConverter(&this->LWCConverter,(TVector<double> *)&local_28._s_0);
  this->MaxPlaysPerTick = 0;
  this->bStopWhenComponentIsDestroyed = true;
  this->bValidOneShotSound = false;
  this->bSoundToPlayIsLooping = false;
  (this->UserParamBinding).UObjectOffset = -1;
  (this->UserParamBinding).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->UserParamBinding).BoundVariable._padding_ = 0;
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->UserParamBinding).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->UserParamBinding).BoundVariable._padding_ = iVar1;
  (this->UserParamBinding).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UserParamBinding).BoundVariable.VarData.ArrayNum = 0;
  (this->UserParamBinding).BoundVariable.VarData.ArrayMax = 0;
  return this;
}

