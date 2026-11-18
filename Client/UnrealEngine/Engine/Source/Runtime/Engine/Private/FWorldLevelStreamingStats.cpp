// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FWorldLevelStreamingStats @ 1483e76d0

FWorldLevelStreamingStats * __thiscall
ULevelStreamingProfilingSubsystem::FWorldLevelStreamingStats::FWorldLevelStreamingStats
          (FWorldLevelStreamingStats *this)

{
  *(undefined8 *)&(this->LevelsLoading).Elements = 0;
  *(undefined8 *)&(this->LevelsLoading).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LevelsLoading).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LevelsLoading).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LevelsLoading).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelsLoading).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LevelsLoading).Elements.field_0x30 = 0xffffffff;
  (this->LevelsLoading).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LevelsLoading).HashSize = 0;
  *(undefined8 *)&(this->LevelsMakingVisible).Elements = 0;
  *(undefined8 *)&(this->LevelsMakingVisible).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LevelsMakingVisible).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LevelsMakingVisible).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LevelsMakingVisible).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelsMakingVisible).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LevelsMakingVisible).Elements.field_0x30 = 0xffffffff;
  (this->LevelsMakingVisible).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LevelsMakingVisible).HashSize = 0;
  *(undefined8 *)&(this->LevelsMakingInvisible).Elements = 0;
  *(undefined8 *)&(this->LevelsMakingInvisible).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LevelsMakingInvisible).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->LevelsMakingInvisible).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LevelsMakingInvisible).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LevelsMakingInvisible).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->LevelsMakingInvisible).Elements.field_0x30 = 0xffffffff;
  (this->LevelsMakingInvisible).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LevelsMakingInvisible).HashSize = 0;
  return this;
}

// ~FWorldLevelStreamingStats @ 1483e8f50

void __thiscall
ULevelStreamingProfilingSubsystem::FWorldLevelStreamingStats::~FWorldLevelStreamingStats
          (FWorldLevelStreamingStats *this)

{
  ForElementType<FSetElementId> FVar1;
  
  (this->LevelsMakingInvisible).HashSize = 0;
  FVar1 = (this->LevelsMakingInvisible).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<ULevelStreaming_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULevelStreaming_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LevelsMakingInvisible).Elements);
  (this->LevelsMakingVisible).HashSize = 0;
  FVar1 = (this->LevelsMakingVisible).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<ULevelStreaming_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULevelStreaming_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LevelsMakingVisible).Elements);
  (this->LevelsLoading).HashSize = 0;
  FVar1 = (this->LevelsLoading).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<ULevelStreaming_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<ULevelStreaming_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<ULevelStreaming_const_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

