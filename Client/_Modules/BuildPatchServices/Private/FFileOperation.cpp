// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// FFileOperation @ 14327fab0

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

FFileOperation * __thiscall
BuildPatchServices::FFileOperation::FFileOperation
          (FFileOperation *this,FString *param_1,FGuid *param_2,ulong64 param_3,ulong64 param_4,
          EFileOperationState param_5)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Filename).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  uVar2 = param_2->A;
  uVar3 = param_2->B;
  uVar4 = param_2->C;
  uVar5 = param_2->D;
  this->Size = param_4;
  (this->DataId).A = uVar2;
  (this->DataId).B = uVar3;
  (this->DataId).C = uVar4;
  (this->DataId).D = uVar5;
  this->Offest = param_3;
  this->CurrentState = param_5;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

// ~FFileOperation @ 143288310

/* WARNING: Enum "EFileOperationState": Some values do not have unique names */

void __thiscall BuildPatchServices::FFileOperation::~FFileOperation(FFileOperation *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->Filename).Data.AllocatorInstance.Data;
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

