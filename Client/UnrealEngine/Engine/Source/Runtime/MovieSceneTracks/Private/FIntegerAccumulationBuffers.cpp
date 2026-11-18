// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// IsEmpty @ 14683f000

bool __thiscall
UE::MovieScene::FIntegerAccumulationBuffers::IsEmpty(FIntegerAccumulationBuffers *this)

{
  if (((((this->Absolute).ArrayNum == 0) && ((this->Relative).ArrayNum == 0)) &&
      ((this->Additive).ArrayNum == 0)) && ((this->AdditiveFromBase).ArrayNum == 0)) {
    return true;
  }
  return false;
}

// Reset @ 1468604a0

void __thiscall
UE::MovieScene::FIntegerAccumulationBuffers::Reset(FIntegerAccumulationBuffers *this)

{
  (this->Absolute).ArrayNum = 0;
  if ((this->Absolute).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,&(this->Absolute).ArrayMax);
  }
  (this->Relative).ArrayNum = 0;
  if ((this->Relative).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Relative).AllocatorInstance,0,&(this->Relative).ArrayMax);
  }
  (this->Additive).ArrayNum = 0;
  if ((this->Additive).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Additive).AllocatorInstance,0,&(this->Additive).ArrayMax);
  }
  (this->AdditiveFromBase).ArrayNum = 0;
  if ((this->AdditiveFromBase).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->AdditiveFromBase).AllocatorInstance,0,
               &(this->AdditiveFromBase).ArrayMax);
  }
  return;
}

