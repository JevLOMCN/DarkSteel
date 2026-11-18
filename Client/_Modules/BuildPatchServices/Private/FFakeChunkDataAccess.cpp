// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 4

// ~FFakeChunkDataAccess @ 1432881d0

void __thiscall
BuildPatchServices::FFakeChunkDataAccess::~FFakeChunkDataAccess(FFakeChunkDataAccess *this)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FFakeChunkDataAccess_BuildPatchServices__6B_;
  if (*(void **)&this->OnDeleted != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->OnDeleted);
    pcVar1 = *(code **)&this->OnDeleted;
    plVar2 = *(longlong **)&(this->OnDeleted).field_0x28;
    plVar4 = (longlong *)&(this->OnDeleted).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3);
  }
  if (*(longlong *)&this->OnDeleted != 0) {
    plVar2 = *(longlong **)&(this->OnDeleted).field_0x28;
    plVar4 = (longlong *)&(this->OnDeleted).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  this->_padding_ = (longlong)&___7IChunkDataAccess_BuildPatchServices__6B_;
  return;
}

// GetDataLock @ 1432d6060

void __thiscall
BuildPatchServices::FFakeChunkDataAccess::GetDataLock
          (FFakeChunkDataAccess *this,uchar **param_1,FChunkHeader **param_2)

{
  *param_1 = this->ChunkData;
  *param_2 = &this->ChunkHeader;
  return;
}

// GetDataLock @ 1432d6080

void __thiscall
BuildPatchServices::FFakeChunkDataAccess::GetDataLock
          (FFakeChunkDataAccess *this,uchar **param_1,FChunkHeader **param_2)

{
  *param_1 = this->ChunkData;
  *param_2 = &this->ChunkHeader;
  return;
}

// ReleaseDataLock @ 1432e9150

void __thiscall
BuildPatchServices::FFakeChunkDataAccess::ReleaseDataLock(FFakeChunkDataAccess *this)

{
  return;
}

