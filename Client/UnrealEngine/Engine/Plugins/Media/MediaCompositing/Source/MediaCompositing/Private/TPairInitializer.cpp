// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 1

// operator<FName,FVariant>_TTuple<FName,FVariant> @ 14ea63d50

TTuple<FName,FVariant> * __thiscall
TPairInitializer<FName_const_&,FName_const_&>::operator<FName,FVariant>_TTuple<FName,FVariant>
          (TPairInitializer<FName_const_&,FName_const_&> *this,
          TTuple<FName,FVariant> *__return_storage_ptr__)

{
  FName *pFVar1;
  uint uVar2;
  TTuple<FName,FVariant> *pTVar3;
  undefined7 uVar4;
  FName local_res10;
  FMemoryArchive local_b8;
  undefined1 *local_20;
  undefined8 local_18;
  
  pFVar1 = this->Value;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  local_res10 = *pFVar1;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  pTVar3 = __return_storage_ptr__;
  FArchiveState::FArchiveState((FArchiveState *)&local_b8);
  local_b8.Offset = 0;
  local_b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  uVar4 = (undefined7)((ulonglong)pTVar3 >> 8);
  local_18 = 0;
  local_20 = &__return_storage_ptr__->field_0x10;
  FArchiveState::SetIsSaving((FArchiveState *)&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,CONCAT71(uVar4,1));
  local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  FMemoryArchive::operator<<(&local_b8,&local_res10);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0x13;
  FArchive::~FArchive((FArchive *)&local_b8);
  return __return_storage_ptr__;
}

