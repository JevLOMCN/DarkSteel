// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FScopedBootTiming @ 141855800

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedBootTiming * __thiscall
FScopedBootTiming::FScopedBootTiming(FScopedBootTiming *this,char *param_1)

{
  char *local_res10 [3];
  
  (this->Message).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Message).Data.ArrayNum = 0;
  (this->Message).Data.ArrayMax = 0;
  if (5 < (byte)LogInit._0_1_) {
    local_res10[0] = param_1;
    UE::Logging::Private::LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&>
              ((FLogCategoryBase *)&LogInit,&::LOG_Static,local_res10);
  }
  return this;
}

// FScopedBootTiming @ 141855850

/* WARNING: Enum "Type": Some values do not have unique names */

FScopedBootTiming * __thiscall
FScopedBootTiming::FScopedBootTiming(FScopedBootTiming *this,char *param_1,FName param_2)

{
  char *local_res10;
  FName local_res18 [2];
  
  (this->Message).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Message).Data.ArrayNum = 0;
  (this->Message).Data.ArrayMax = 0;
  if (5 < (byte)LogInit._0_1_) {
    local_res10 = param_1;
    local_res18[0] = param_2;
    UE::Logging::Private::
    LogWithFields<UE::Logging::Private::FStaticLogRecord,char_const_*_&,FName_&>
              ((FLogCategoryBase *)&LogInit,&::LOG_Static,&local_res10,local_res18);
  }
  return this;
}

// ~FScopedBootTiming @ 141857990

void __thiscall FScopedBootTiming::~FScopedBootTiming(FScopedBootTiming *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Message).Data.AllocatorInstance.Data;
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

