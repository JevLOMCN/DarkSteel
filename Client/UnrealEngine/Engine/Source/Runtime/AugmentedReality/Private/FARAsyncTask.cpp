// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 4

// ~FARAsyncTask @ 14cf43de0

void __thiscall FARAsyncTask::~FARAsyncTask(FARAsyncTask *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FARAsyncTask__6B_;
  pFVar1 = (this->Error).Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetErrorString @ 14cf50cd0

FString * __thiscall
FARAsyncTask::GetErrorString(FARAsyncTask *this,FString *__return_storage_ptr__)

{
  if (this->bIsDone != (FThreadSafeBool)0x0) {
    ::FString::FString(__return_storage_ptr__,&this->Error);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// HadError @ 14cf569c0

bool __thiscall FARAsyncTask::HadError(FARAsyncTask *this)

{
  return this->bHadError != (FThreadSafeBool)0x0;
}

// IsDone @ 14cf57640

bool __thiscall FARAsyncTask::IsDone(FARAsyncTask *this)

{
  return this->bIsDone != (FThreadSafeBool)0x0;
}

