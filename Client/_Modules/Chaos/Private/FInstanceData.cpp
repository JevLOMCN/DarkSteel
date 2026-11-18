// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FInstanceData @ 14388ba10

FInstanceData * __thiscall
Chaos::Filter::FInstanceData::FInstanceData(FInstanceData *this,uint param_1,uint param_2)

{
  this->ActorId = param_1;
  this->ComponentId = param_2;
  this->BodyIndex = 0;
  return this;
}

// GetActorId @ 1438b9d10

uint __thiscall Chaos::Filter::FInstanceData::GetActorId(FInstanceData *this)

{
  return this->ActorId;
}

// GetComponentId @ 1438ba2f0

uint __thiscall Chaos::Filter::FInstanceData::GetComponentId(FInstanceData *this)

{
  return this->ComponentId;
}

// IsValid @ 1438c3cb0

bool __thiscall Chaos::Filter::FInstanceData::IsValid(FInstanceData *this)

{
  if (((this->ActorId == 0) && (this->ComponentId == 0)) && (this->BodyIndex == 0)) {
    return false;
  }
  return true;
}

// SetActorId @ 1438d1b20

void __thiscall Chaos::Filter::FInstanceData::SetActorId(FInstanceData *this,uint param_1)

{
  this->ActorId = param_1;
  return;
}

// SetComponentId @ 1438d1ba0

void __thiscall Chaos::Filter::FInstanceData::SetComponentId(FInstanceData *this,uint param_1)

{
  this->ComponentId = param_1;
  return;
}

