// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// CaptureInheritedContext @ 14148bc00

void __thiscall UE::FInheritedContextBase::CaptureInheritedContext(FInheritedContextBase *this)

{
  int iVar1;
  uint uVar2;
  FLowLevelMemTracker *pFVar3;
  FTagData *pFVar4;
  FTagData *pFVar5;
  
  pFVar5 = (FTagData *)0x0;
  pFVar4 = pFVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar4 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,None);
  }
  (this->InheritedLLMTags).LLMTags[0] = pFVar4;
  pFVar4 = pFVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar4 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,Assets);
  }
  (this->InheritedLLMTags).LLMTags[1] = pFVar4;
  pFVar4 = pFVar5;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar4 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,AssetClasses);
  }
  (this->InheritedLLMTags).LLMTags[2] = pFVar4;
  if (FLowLevelMemTracker::EnabledState != Disabled) {
    pFVar3 = FLowLevelMemTracker::TrackerInstance;
    if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
      pFVar3 = FLowLevelMemTracker::Construct();
    }
    pFVar5 = FLowLevelMemTracker::GetActiveTagData(pFVar3,Default,UObjectClasses);
  }
  (this->InheritedLLMTags).LLMTags[3] = pFVar5;
  iVar1 = MemoryTrace_GetActiveTag();
  this->InheritedMemTag = iVar1;
  uVar2 = FMetadataTrace::SaveStack();
  this->InheritedMetadataId = uVar2;
  return;
}

// RestoreInheritedContext @ 1414af390

FInheritedContextScope * __thiscall
UE::FInheritedContextBase::RestoreInheritedContext
          (FInheritedContextBase *this,FInheritedContextScope *__return_storage_ptr__)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = this->InheritedMetadataId;
  iVar2 = this->InheritedMemTag;
  (__return_storage_ptr__->LLMScopes).LLMScopes.ArrayNum = 0;
  (__return_storage_ptr__->LLMScopes).LLMScopes.ArrayMax = 4;
  FLLMActiveTagsScope::CaptureLLMScopes(&__return_storage_ptr__->LLMScopes,&this->InheritedLLMTags);
  FMemScope::FMemScope(&__return_storage_ptr__->MemScope,iVar2,true);
  FMetadataRestoreScope::FMetadataRestoreScope(&__return_storage_ptr__->MetaScope,uVar1);
  return __return_storage_ptr__;
}

