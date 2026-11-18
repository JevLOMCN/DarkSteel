// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FScopedGatheringPause @ 142ad7470

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FScopedGatheringPause * __thiscall
FAssetDataGatherer::FScopedGatheringPause::FScopedGatheringPause
          (FScopedGatheringPause *this,FAssetDataGatherer *param_1)

{
  this->Owner = param_1;
  if (param_1->Thread != (FRunnableThread *)0x0) {
    LOCK();
    param_1->IsGatheringPaused = (atomic<unsigned_int>)((int)param_1->IsGatheringPaused + 1);
    UNLOCK();
  }
  return this;
}

// ~FScopedGatheringPause @ 142adae50

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FAssetDataGatherer::FScopedGatheringPause::~FScopedGatheringPause(FScopedGatheringPause *this)

{
  atomic<unsigned_int> *paVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->Owner->Thread != (FRunnableThread *)0x0) {
    if (this->Owner->IsGatheringPaused == (atomic<unsigned_int>)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner.IsGatheringPaused > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Private\\AssetDataGatherer.cpp"
                         ,0x106d,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    paVar1 = &this->Owner->IsGatheringPaused;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
  }
  return;
}

