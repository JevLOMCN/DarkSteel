// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 8

// FChunkDbChunkSourceStatistics @ 14327e560

FChunkDbChunkSourceStatistics * __thiscall
BuildPatchServices::FChunkDbChunkSourceStatistics::FChunkDbChunkSourceStatistics
          (FChunkDbChunkSourceStatistics *this,ISpeedRecorder *param_1,
          IFileOperationTracker *param_2)

{
  this->SpeedRecorder = param_1;
  this->_padding_ = (longlong)&___7FChunkDbChunkSourceStatistics_BuildPatchServices__6B_;
  this->FileOperationTracker = param_2;
  (this->NumSuccessfulLoads).Counter = 0;
  (this->NumFailedLoads).Counter = 0;
  this->bIsReading = (atomic<bool>)0x0;
  return this;
}

// ~FChunkDbChunkSourceStatistics @ 1432877f0

void __thiscall
BuildPatchServices::FChunkDbChunkSourceStatistics::~FChunkDbChunkSourceStatistics
          (FChunkDbChunkSourceStatistics *this)

{
  this->_padding_ = (longlong)&___7IChunkDbChunkSourceStat_BuildPatchServices__6B_;
  return;
}

// GetNumFailedLoads @ 1432d8570

int __thiscall
BuildPatchServices::FChunkDbChunkSourceStatistics::GetNumFailedLoads
          (FChunkDbChunkSourceStatistics *this)

{
  return (this->NumFailedLoads).Counter;
}

// GetNumSuccessfulLoads @ 1432d85c0

int __thiscall
BuildPatchServices::FChunkDbChunkSourceStatistics::GetNumSuccessfulLoads
          (FChunkDbChunkSourceStatistics *this)

{
  return (this->NumSuccessfulLoads).Counter;
}

// IsCurrentlyReading @ 1432dbb40

bool __thiscall
BuildPatchServices::FChunkDbChunkSourceStatistics::IsCurrentlyReading
          (FChunkDbChunkSourceStatistics *this)

{
  return (bool)this->bIsReading;
}

// OnLoadComplete @ 1432e0190

void __thiscall
BuildPatchServices::FChunkDbChunkSourceStatistics::OnLoadComplete
          (FChunkDbChunkSourceStatistics *this,FGuid *param_1,ELoadResult param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = 0x18;
  if (param_2 != Success) {
    lVar2 = 0x1c;
  }
  LOCK();
  piVar1 = (int *)((longlong)&this->_padding_ + lVar2);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return;
}

// OnLoadStarted @ 1432e0390

void __thiscall
BuildPatchServices::FChunkDbChunkSourceStatistics::OnLoadStarted
          (FChunkDbChunkSourceStatistics *this,FGuid *param_1)

{
  (**(code **)((longlong)*this->FileOperationTracker + 0x28))(this->FileOperationTracker,param_1,2);
  this->bIsReading = (atomic<bool>)0x1;
  return;
}

// OnReadComplete @ 1432e0fc0

void __thiscall
BuildPatchServices::FChunkDbChunkSourceStatistics::OnReadComplete
          (FChunkDbChunkSourceStatistics *this,FRecord *param_1)

{
  (**(code **)((longlong)*this->SpeedRecorder + 8))();
  this->bIsReading = (atomic<bool>)0x0;
  return;
}

