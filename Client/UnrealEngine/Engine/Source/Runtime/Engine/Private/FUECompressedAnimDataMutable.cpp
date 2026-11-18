// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// BuildFinalBuffer @ 1473ef0f0

void __thiscall
FUECompressedAnimDataMutable::BuildFinalBuffer
          (FUECompressedAnimDataMutable *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_b8;
  
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
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
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_b8);
  local_b8._padding_ = 0;
  local_b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_b8.ArchiveName.ComparisonIndex.Value = 0;
  local_b8.ArchiveName.Number = 0;
  local_b8.Bytes = param_1;
  FArchiveState::SetIsSaving((FArchiveState *)&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
            (&local_b8,*(void **)&this->field_0x10,(ulonglong)(uint)(*(int *)&this->field_0x18 << 2)
            );
  if (*(code **)(local_b8._padding_ + 0x188) ==
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
              (&local_b8,*(void **)&this->field_0x20,
               (ulonglong)(uint)(*(int *)&this->field_0x28 << 2));
  }
  else {
    (**(code **)(local_b8._padding_ + 0x188))();
  }
  if (*(code **)(local_b8._padding_ + 0x188) ==
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
    TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize
              (&local_b8,*(void **)&this->field_0x38,(ulonglong)*(uint *)&this->field_0x40);
  }
  else {
    (**(code **)(local_b8._padding_ + 0x188))();
  }
  FArchive::~FArchive((FArchive *)&local_b8);
  return;
}

// Bind @ 147544700

void __thiscall
FUECompressedAnimDataMutable::Bind
          (FUECompressedAnimDataMutable *this,TArrayView<unsigned_char,int> *param_1)

{
  return;
}

// GetApproxCompressedSize @ 14755a4d0

long64 __thiscall
FUECompressedAnimDataMutable::GetApproxCompressedSize(FUECompressedAnimDataMutable *this)

{
  return (longlong)(*(int *)&this->field_0x28 * 4 + 4) + (longlong)*(int *)&this->field_0x18 * 4 +
         (longlong)*(int *)&this->field_0x40;
}

// IsValid @ 14756b4b0

bool __thiscall FUECompressedAnimDataMutable::IsValid(FUECompressedAnimDataMutable *this)

{
  if ((*(int *)&this->field_0x40 < 1) &&
     (((*(int *)&this->field_0x64 != 6 || (*(int *)&this->field_0x68 != 6)) ||
      (*(int *)&this->field_0x6c != 6)))) {
    return false;
  }
  return true;
}

