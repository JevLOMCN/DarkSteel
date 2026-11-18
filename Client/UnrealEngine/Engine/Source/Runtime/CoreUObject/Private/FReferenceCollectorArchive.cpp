// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FReferenceCollectorArchive @ 1422585e0

FReferenceCollectorArchive * __thiscall
FReferenceCollectorArchive::FReferenceCollectorArchive
          (FReferenceCollectorArchive *this,UObject *param_1,FReferenceCollector *param_2)

{
  byte *pbVar1;
  bool bVar2;
  char cVar3;
  
  FArchiveState::FArchiveState((FArchiveState *)this);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  this->_padding_ = (longlong)&___7FReferenceCollectorArchive__6B_;
  this->SerializingObject = param_1;
  this->SerializedDataContainer = (UObject *)0x0;
  this->Collector = param_2;
  bVar2 = (bool)(**(code **)(param_2->_padding_ + 0x48))(param_2);
  FArchiveState::SetIsPersistent((FArchiveState *)this,bVar2);
  cVar3 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 ^ (cVar3 * '\x02' ^ *(byte *)((longlong)&this->_padding_ + 2)) & 2;
  return this;
}

// operator<< @ 14225a400

FArchive * __thiscall
FReferenceCollectorArchive::operator<<(FReferenceCollectorArchive *this,UObject **param_1)

{
  (**(code **)(this->Collector->_padding_ + 0x88))(this->Collector,param_1,0,0);
  return (FArchive *)this;
}

// operator<< @ 14225a430

FArchive * __thiscall
FReferenceCollectorArchive::operator<<(FReferenceCollectorArchive *this,FObjectPtr *param_1)

{
  (**(code **)(this->Collector->_padding_ + 0x88))(this->Collector,param_1,0,0);
  return (FArchive *)this;
}

