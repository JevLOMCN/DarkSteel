// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 13

// GatherDebugData @ 1463dc220

void __thiscall FAnimNode_Base::GatherDebugData(FAnimNode_Base *this,FNodeDebugData *param_1)

{
  UScriptStruct *pUVar1;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  pUVar1 = StaticStruct();
  local_res10 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_res10,&local_48);
  ::FString::PrintfImpl(&local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(local_28,L"Non Overriden GatherDebugData! (%s)");
  FNodeDebugData::AddDebugItem(param_1,local_28,false);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// CanUpdateInWorkerThread @ 1463dc330

bool __thiscall FAnimNode_Base::CanUpdateInWorkerThread(FAnimNode_Base *this)

{
  return true;
}

// HasPreUpdate @ 1463dc340

bool __thiscall FAnimNode_Base::HasPreUpdate(FAnimNode_Base *this)

{
  return false;
}

// PreUpdate @ 1463dc350

void __thiscall FAnimNode_Base::PreUpdate(FAnimNode_Base *this,UAnimInstance *param_1)

{
  return;
}

// NeedsDynamicReset @ 1463dc360

bool __thiscall FAnimNode_Base::NeedsDynamicReset(FAnimNode_Base *this)

{
  return false;
}

// PostCompile @ 1463dc370

void __thiscall FAnimNode_Base::PostCompile(FAnimNode_Base *this,USkeleton *param_1)

{
  return;
}

// NeedsOnInitializeAnimInstance @ 1463dc380

bool __thiscall FAnimNode_Base::NeedsOnInitializeAnimInstance(FAnimNode_Base *this)

{
  return false;
}

// ResetDynamics @ 1463dc390

void __thiscall FAnimNode_Base::ResetDynamics(FAnimNode_Base *this)

{
  return;
}

// WantsSkippedUpdates @ 1463dc3a0

bool __thiscall FAnimNode_Base::WantsSkippedUpdates(FAnimNode_Base *this)

{
  return false;
}

// OnUpdatesSkipped @ 1463dc3b0

void __thiscall
FAnimNode_Base::OnUpdatesSkipped
          (FAnimNode_Base *this,TArrayView<FAnimationUpdateContext_const_*,int> *param_1)

{
  return;
}

// OverrideAsset @ 1463dc3c0

void __thiscall FAnimNode_Base::OverrideAsset(FAnimNode_Base *this,UAnimationAsset *param_1)

{
  return;
}

// GetLODThreshold @ 1463dc490

int __thiscall FAnimNode_Base::GetLODThreshold(FAnimNode_Base *this)

{
  return -1;
}

// ~FAnimNode_Base @ 146408830

void __thiscall FAnimNode_Base::~FAnimNode_Base(FAnimNode_Base *this)

{
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

