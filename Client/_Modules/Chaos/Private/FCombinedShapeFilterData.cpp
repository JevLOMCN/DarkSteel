// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FCombinedShapeFilterData @ 14388acb0

FCombinedShapeFilterData * __thiscall
Chaos::Filter::FCombinedShapeFilterData::FCombinedShapeFilterData
          (FCombinedShapeFilterData *this,FShapeFilterData *param_1,FInstanceData *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1->QueryOverlapChannels;
  uVar2 = param_1->SimBlockChannels;
  uVar3 = param_1->Word3;
  (this->ShapeFilterData).QueryBlockChannels = param_1->QueryBlockChannels;
  (this->ShapeFilterData).QueryOverlapChannels = uVar1;
  (this->ShapeFilterData).SimBlockChannels = uVar2;
  (this->ShapeFilterData).Word3 = uVar3;
  (this->ShapeFilterData).SimWord3 = param_1->SimWord3;
  uVar1 = param_2->ComponentId;
  (this->InstanceData).ActorId = param_2->ActorId;
  (this->InstanceData).ComponentId = uVar1;
  (this->InstanceData).BodyIndex = param_2->BodyIndex;
  return this;
}

// GetInstanceData @ 1438ba7a0

FInstanceData * __thiscall
Chaos::Filter::FCombinedShapeFilterData::GetInstanceData(FCombinedShapeFilterData *this)

{
  return &this->InstanceData;
}

// GetShapeFilterData @ 1438bc7a0

FShapeFilterData * __thiscall
Chaos::Filter::FCombinedShapeFilterData::GetShapeFilterData(FCombinedShapeFilterData *this)

{
  return &this->ShapeFilterData;
}

// IsValid @ 1438c3bd0

bool __thiscall Chaos::Filter::FCombinedShapeFilterData::IsValid(FCombinedShapeFilterData *this)

{
  if ((((((this->ShapeFilterData).QueryBlockChannels == 0) &&
        ((this->ShapeFilterData).QueryOverlapChannels == 0)) &&
       ((this->ShapeFilterData).SimBlockChannels == 0)) &&
      (((this->ShapeFilterData).Word3 == 0 && ((this->ShapeFilterData).SimWord3 == 0)))) &&
     (((this->InstanceData).ActorId == 0 &&
      (((this->InstanceData).ComponentId == 0 && ((this->InstanceData).BodyIndex == 0)))))) {
    return false;
  }
  return true;
}

// SetInstanceData @ 1438d2ce0

void __thiscall
Chaos::Filter::FCombinedShapeFilterData::SetInstanceData
          (FCombinedShapeFilterData *this,FInstanceData *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->ComponentId;
  (this->InstanceData).ActorId = param_1->ActorId;
  (this->InstanceData).ComponentId = uVar1;
  (this->InstanceData).BodyIndex = param_1->BodyIndex;
  return;
}

// SetShapeFilterData @ 1438d4800

void __thiscall
Chaos::Filter::FCombinedShapeFilterData::SetShapeFilterData
          (FCombinedShapeFilterData *this,FShapeFilterData *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_1->QueryOverlapChannels;
  uVar2 = param_1->SimBlockChannels;
  uVar3 = param_1->Word3;
  (this->ShapeFilterData).QueryBlockChannels = param_1->QueryBlockChannels;
  (this->ShapeFilterData).QueryOverlapChannels = uVar1;
  (this->ShapeFilterData).SimBlockChannels = uVar2;
  (this->ShapeFilterData).Word3 = uVar3;
  (this->ShapeFilterData).SimWord3 = param_1->SimWord3;
  return;
}

