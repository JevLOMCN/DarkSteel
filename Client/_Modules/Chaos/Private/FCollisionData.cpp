// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// GetCombinedShapeFilterData @ 143c04c50

FCombinedShapeFilterData * __thiscall
Chaos::FCollisionData::GetCombinedShapeFilterData
          (FCollisionData *this,FCombinedShapeFilterData *__return_storage_ptr__)

{
  Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyShapeFilter
            (__return_storage_ptr__,&this->QueryData,&this->SimData);
  return __return_storage_ptr__;
}

// GetFilterInstanceData @ 143c04ca0

FInstanceData * __thiscall
Chaos::FCollisionData::GetFilterInstanceData
          (FCollisionData *this,FInstanceData *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  FInstanceData *pFVar3;
  FCombinedShapeFilterData local_28;
  
  Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyShapeFilter
            (&local_28,&this->QueryData,&this->SimData);
  pFVar3 = Chaos::Filter::FCombinedShapeFilterData::GetInstanceData(&local_28);
  uVar2 = pFVar3->ComponentId;
  uVar1 = pFVar3->BodyIndex;
  __return_storage_ptr__->ActorId = pFVar3->ActorId;
  __return_storage_ptr__->ComponentId = uVar2;
  __return_storage_ptr__->BodyIndex = uVar1;
  return __return_storage_ptr__;
}

// GetQueryData @ 143c07530

FCollisionFilterData * __thiscall Chaos::FCollisionData::GetQueryData(FCollisionData *this)

{
  return &this->QueryData;
}

// GetShapeFilterData @ 143c075a0

FShapeFilterData * __thiscall
Chaos::FCollisionData::GetShapeFilterData
          (FCollisionData *this,FShapeFilterData *__return_storage_ptr__)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  FShapeFilterData *pFVar5;
  FCombinedShapeFilterData local_28;
  
  Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyShapeFilter
            (&local_28,&this->QueryData,&this->SimData);
  pFVar5 = Chaos::Filter::FCombinedShapeFilterData::GetShapeFilterData(&local_28);
  uVar2 = pFVar5->QueryOverlapChannels;
  uVar3 = pFVar5->SimBlockChannels;
  uVar4 = pFVar5->Word3;
  uVar1 = pFVar5->SimWord3;
  __return_storage_ptr__->QueryBlockChannels = pFVar5->QueryBlockChannels;
  __return_storage_ptr__->QueryOverlapChannels = uVar2;
  __return_storage_ptr__->SimBlockChannels = uVar3;
  __return_storage_ptr__->Word3 = uVar4;
  __return_storage_ptr__->SimWord3 = uVar1;
  return __return_storage_ptr__;
}

// GetSimData @ 143c075e0

FCollisionFilterData * __thiscall Chaos::FCollisionData::GetSimData(FCollisionData *this)

{
  return &this->SimData;
}

// SetCombinedShapeFilterData @ 143c15600

void __thiscall
Chaos::FCollisionData::SetCombinedShapeFilterData
          (FCollisionData *this,FCombinedShapeFilterData *param_1)

{
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeFilter(param_1,&this->QueryData,&this->SimData);
  return;
}

// SetFilterInstanceData @ 143c15cf0

void __thiscall
Chaos::FCollisionData::SetFilterInstanceData(FCollisionData *this,FInstanceData *param_1)

{
  FCombinedShapeFilterData local_28;
  
  Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyShapeFilter
            (&local_28,&this->QueryData,&this->SimData);
  Chaos::Filter::FCombinedShapeFilterData::SetInstanceData(&local_28,param_1);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeFilter
            (&local_28,&this->QueryData,&this->SimData);
  return;
}

// SetQueryData @ 143c188b0

void __thiscall
Chaos::FCollisionData::SetQueryData(FCollisionData *this,FCollisionFilterData *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1->Word1;
  uVar2 = param_1->Word2;
  uVar3 = param_1->Word3;
  (this->QueryData).Word0 = param_1->Word0;
  (this->QueryData).Word1 = uVar1;
  (this->QueryData).Word2 = uVar2;
  (this->QueryData).Word3 = uVar3;
  return;
}

// SetShapeFilterData @ 143c18fd0

void __thiscall
Chaos::FCollisionData::SetShapeFilterData(FCollisionData *this,FShapeFilterData *param_1)

{
  FCombinedShapeFilterData local_28;
  
  Chaos::Filter::FShapeFilterBuilder::BuildFromLegacyShapeFilter
            (&local_28,&this->QueryData,&this->SimData);
  Chaos::Filter::FCombinedShapeFilterData::SetShapeFilterData(&local_28,param_1);
  Chaos::Filter::FShapeFilterBuilder::GetLegacyShapeFilter
            (&local_28,&this->QueryData,&this->SimData);
  return;
}

// SetSimData @ 143c19560

void __thiscall
Chaos::FCollisionData::SetSimData(FCollisionData *this,FCollisionFilterData *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1->Word1;
  uVar2 = param_1->Word2;
  uVar3 = param_1->Word3;
  (this->SimData).Word0 = param_1->Word0;
  (this->SimData).Word1 = uVar1;
  (this->SimData).Word2 = uVar2;
  (this->SimData).Word3 = uVar3;
  return;
}

// Serialize @ 143e4b4c0

void __thiscall Chaos::FCollisionData::Serialize(FCollisionData *this,FChaosArchive *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  int iVar3;
  uint local_res8 [2];
  byte local_res10 [8];
  
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))
            (param_1,&FExternalPhysicsMaterialCustomObjectVersion::GUID);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  ::operator<<(param_1,&this->QueryData);
  ::operator<<(param_1,&this->SimData);
  iVar3 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (iVar3 < 0x26) {
    iVar3 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    if (0x15 < iVar3) {
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,~this->bSimCollision) & 0xffffff01;
      ::operator<<((FArchive *)param_1,(bool *)local_res8);
      this->bSimCollision = local_res8[0]._0_1_ == false;
    }
  }
  else {
    local_res10[0] = this->bSimCollision;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,(byte)this->field_0x29 >> 1) & 0xffffff01;
    plVar2 = (longlong *)param_1->_padding_;
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res10,1);
    }
    else {
      local_res10[0] = *(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    plVar2 = (longlong *)param_1->_padding_;
    if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,*(undefined1 *)*plVar2);
      *plVar2 = *plVar2 + 1;
    }
    this->bSimCollision = '\0';
    this->bQueryCollision = '\0';
    this->field_0x29 = this->field_0x29 | (local_res8[0]._0_1_ & 1U) * '\x02' | local_res10[0] & 1;
  }
  iVar3 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0x19 < iVar3) {
    iVar3 = FArchiveState::CustomVer
                      ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
    if (iVar3 < 0x27) {
      local_res8[0] = CONCAT31(local_res8[0]._1_3_,this->field_0x29) & 0xffffff01;
      ::operator<<((FArchive *)param_1,(bool *)local_res8);
      this->bSimCollision = local_res8[0];
    }
  }
  iVar3 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0x22 < iVar3) {
    plVar2 = (longlong *)param_1->_padding_;
    local_res8[0] = (uint)(char)this->CollisionTraceType;
    if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
      if ((param_1->_padding_ & 0x10000) == 0) {
        (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)param_1,local_res8);
      }
    }
    else {
      local_res8[0] = *(uint *)*plVar2;
      *plVar2 = *plVar2 + 4;
    }
    this->CollisionTraceType = local_res8[0]._0_1_;
  }
  iVar3 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FFortniteSeasonBranchObjectVersion::GUID);
  if (7 < iVar3) {
    plVar2 = (longlong *)param_1->_padding_;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,(byte)this->field_0x29 >> 2) & 0xffffff01;
    if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
      (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = (uint)*(byte *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    this->bIsProbe = '\0';
    this->field_0x29 = this->field_0x29 | (local_res8[0]._0_1_ & 1U) << 2;
  }
  return;
}

