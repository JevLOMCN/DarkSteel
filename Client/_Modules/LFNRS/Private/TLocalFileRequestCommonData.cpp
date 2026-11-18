// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 3

// ~TLocalFileRequestCommonData<FEnumerateEventsResult> @ 146c924f0

void __thiscall
TLocalFileRequestCommonData<FEnumerateEventsResult>::
~TLocalFileRequestCommonData<FEnumerateEventsResult>
          (TLocalFileRequestCommonData<FEnumerateEventsResult> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&this->ReplayInfo);
  (this->DelegateResult).ReplayEventList._padding_ = (longlong)&___7FReplayEventList__6B_;
  DestructItems<FReplayEventListItem,int>
            ((FReplayEventListItem *)
             (this->DelegateResult).ReplayEventList.ReplayEvents.AllocatorInstance.Data,
             (this->DelegateResult).ReplayEventList.ReplayEvents.ArrayNum);
  pFVar1 = (this->DelegateResult).ReplayEventList.ReplayEvents.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FJsonSerializable::~FJsonSerializable
            ((FJsonSerializable *)&(this->DelegateResult).ReplayEventList);
  (this->DelegateResult)._padding_ = (longlong)&___7FStreamingResultBase__6B_;
  return;
}

// ~TLocalFileRequestCommonData<FEnumerateStreamsResult> @ 146c92560

void __thiscall
TLocalFileRequestCommonData<FEnumerateStreamsResult>::
~TLocalFileRequestCommonData<FEnumerateStreamsResult>
          (TLocalFileRequestCommonData<FEnumerateStreamsResult> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&this->ReplayInfo);
  DestructItems<FString,int>
            ((FString *)(this->DelegateResult).CorruptedStreams.AllocatorInstance.Data,
             (this->DelegateResult).CorruptedStreams.ArrayNum);
  pFVar1 = (this->DelegateResult).CorruptedStreams.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNetworkReplayStreamInfo,int>
            ((FNetworkReplayStreamInfo *)(this->DelegateResult).FoundStreams.AllocatorInstance.Data,
             (this->DelegateResult).FoundStreams.ArrayNum);
  pFVar1 = (this->DelegateResult).FoundStreams.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DelegateResult)._padding_ = (longlong)&___7FStreamingResultBase__6B_;
  return;
}

// ~TLocalFileRequestCommonData<FRequestEventGroupDataResult> @ 146c925d0

void __thiscall
TLocalFileRequestCommonData<FRequestEventGroupDataResult>::
~TLocalFileRequestCommonData<FRequestEventGroupDataResult>
          (TLocalFileRequestCommonData<FRequestEventGroupDataResult> *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&this->ReplayInfo);
  DestructItems<FRequestEventDataResult,int>
            ((FRequestEventDataResult *)
             (this->DelegateResult).ReplayEventListResults.AllocatorInstance.Data,
             (this->DelegateResult).ReplayEventListResults.ArrayNum);
  pFVar1 = (this->DelegateResult).ReplayEventListResults.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FReplayEventListItem,int>
            ((FReplayEventListItem *)
             (this->DelegateResult).ReplayEventListItems.AllocatorInstance.Data,
             (this->DelegateResult).ReplayEventListItems.ArrayNum);
  pFVar1 = (this->DelegateResult).ReplayEventListItems.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->DelegateResult)._padding_ = (longlong)&___7FStreamingResultBase__6B_;
  return;
}

