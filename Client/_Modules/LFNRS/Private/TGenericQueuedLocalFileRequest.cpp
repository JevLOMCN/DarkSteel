// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 59

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> @ 146c8f350

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> *
__thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
           *this,TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)>
          *param_3,TFunction<void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)>
                   *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  *(undefined8 *)&(this->Storage).DelegateResult.field_0x8 = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xb1 = 0;
  (this->Storage).field_0xb3 = 0;
  *(undefined ***)&(this->Storage).DelegateResult = &___7FDeleteFinishedStreamResult__6B_;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> @ 146c8f4d0

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *this
          ,TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FDownloadHeaderResult>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FDownloadHeaderResult>_&)> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  *(undefined8 *)&(this->Storage).DelegateResult.field_0x8 = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xb1 = 0;
  (this->Storage).field_0xb3 = 0;
  *(undefined ***)&(this->Storage).DelegateResult = &___7FDownloadHeaderResult__6B_;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> @ 146c8f650

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
           *this,TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  (this->Storage).DelegateResult._padding_ = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xc9 = 0;
  (this->Storage).field_0xcb = 0;
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FEnumerateEventsResult__6B_;
  (this->Storage).DelegateResult.ReplayEventList._padding_ = (longlong)&___7FReplayEventList__6B_;
  (this->Storage).DelegateResult.ReplayEventList.ReplayEvents.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).DelegateResult.ReplayEventList.ReplayEvents.ArrayNum = 0;
  (this->Storage).DelegateResult.ReplayEventList.ReplayEvents.ArrayMax = 0;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> @ 146c8f7f0

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
           *this,TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateStreamsResult>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FEnumerateStreamsResult>_&)> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  (this->Storage).DelegateResult._padding_ = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xd1 = 0;
  (this->Storage).field_0xd3 = 0;
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FEnumerateStreamsResult__6B_;
  (this->Storage).DelegateResult.FoundStreams.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).DelegateResult.FoundStreams.ArrayNum = 0;
  (this->Storage).DelegateResult.FoundStreams.ArrayMax = 0;
  (this->Storage).DelegateResult.CorruptedStreams.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).DelegateResult.CorruptedStreams.ArrayNum = 0;
  (this->Storage).DelegateResult.CorruptedStreams.ArrayMax = 0;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> @ 146c8f990

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *this,
          TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  (this->Storage).DelegateResult._padding_ = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xc1 = 0;
  (this->Storage).field_0xc3 = 0;
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FGotoResult__6B_;
  (this->Storage).DelegateResult.ExtraTimeMS = -1;
  (this->Storage).DelegateResult.CheckpointInfo.CheckpointStartTime = 0xfffffffe;
  (this->Storage).DelegateResult.CheckpointInfo.CheckpointIndex = 0xfffffffe;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> @ 146c8fb30

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *this,
          TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  (this->Storage).DelegateResult._padding_ = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xc9 = 0;
  (this->Storage).field_0xcb = 0;
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FKeepReplayResult__6B_;
  (this->Storage).DelegateResult.NewReplayName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).DelegateResult.NewReplayName.Data.ArrayNum = 0;
  (this->Storage).DelegateResult.NewReplayName.Data.ArrayMax = 0;
  (this->Storage).DelegateResult.RequiredSpace = 0;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> @ 146c8fcc0

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *this,
          TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  *(undefined8 *)&(this->Storage).DelegateResult.field_0x8 = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xb1 = 0;
  (this->Storage).field_0xb3 = 0;
  *(undefined ***)&(this->Storage).DelegateResult = &___7FRenameReplayResult__6B_;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> @ 146c8fe40

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
           *this,TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  (this->Storage).DelegateResult._padding_ = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xc1 = 0;
  (this->Storage).field_0xc3 = 0;
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FRequestEventDataResult__6B_;
  (this->Storage).DelegateResult.ReplayEventListItem.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).DelegateResult.ReplayEventListItem.ArrayNum = 0;
  (this->Storage).DelegateResult.ReplayEventListItem.ArrayMax = 0;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> @ 146c8ffd0

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> *
__thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
           *this,TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&)>
          *param_3,TFunction<void___cdecl(TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&)>
                   *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  (this->Storage).DelegateResult._padding_ = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xd1 = 0;
  (this->Storage).field_0xd3 = 0;
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FRequestEventGroupDataResult__6B_;
  (this->Storage).DelegateResult.ReplayEventListItems.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).DelegateResult.ReplayEventListItems.ArrayNum = 0;
  (this->Storage).DelegateResult.ReplayEventListItems.ArrayMax = 0;
  (this->Storage).DelegateResult.ReplayEventListResults.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).DelegateResult.ReplayEventListResults.ArrayNum = 0;
  (this->Storage).DelegateResult.ReplayEventListResults.ArrayMax = 0;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> @ 146c90170

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *this
          ,TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)((longlong)&(this->Storage).DelegateResult._padding_ + 4) = 0;
  *(undefined4 *)&(this->Storage).DelegateResult.field_0x11 = 0;
  *(undefined2 *)&(this->Storage).DelegateResult.field_0x15 = 0;
  (this->Storage).DelegateResult.field_0x17 = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xb9 = 0;
  (this->Storage).field_0xbb = 0;
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FStartStreamingResult__6B_;
  *(undefined4 *)&(this->Storage).DelegateResult._padding_ = 6;
  (this->Storage).DelegateResult.bRecording = false;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> @ 146c90300

TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> * __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *this,
          TSharedPtr<FLocalFileNetworkReplayStreamer,1> *param_1,Type param_2,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FStreamingResultBase>_&)> *param_3,
          TFunction<void___cdecl(TLocalFileRequestCommonData<FStreamingResultBase>_&)> *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  this->_padding_ = (longlong)param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  this->_padding_ = (longlong)pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  *(Type *)&this->_padding_ = param_2;
  this->_padding_ =
       (longlong)
       &
       ___7__TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Storage).ReplayInfo.Changelist = 0;
  (this->Storage).ReplayInfo.bIsLive = false;
  (this->Storage).ReplayInfo.bIsValid = false;
  (this->Storage).ReplayInfo.bCompressed = false;
  (this->Storage).ReplayInfo.bEncrypted = false;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x34 = 0;
  *(undefined8 *)&(this->Storage).DelegateResult.Result = 6;
  *(undefined4 *)&(this->Storage).ReplayInfo.field_0x4c = 0;
  *(undefined2 *)&(this->Storage).field_0xb1 = 0;
  (this->Storage).field_0xb3 = 0;
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FStreamingResultBase__6B_;
  (this->Storage).ReplayInfo.LengthInMS = 0;
  (this->Storage).ReplayInfo.NetworkVersion = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayNum = 0;
  (this->Storage).ReplayInfo.FriendlyName.Data.ArrayMax = 0;
  (this->Storage).ReplayInfo.Timestamp.Ticks = 0;
  (this->Storage).ReplayInfo.TotalDataSizeInBytes = 0;
  (this->Storage).ReplayInfo.EncryptionKey.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayNum = 0;
  (this->Storage).ReplayInfo.EncryptionKey.ArrayMax = 0;
  (this->Storage).ReplayInfo.HeaderChunkIndex = -1;
  (this->Storage).ReplayInfo.Chunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Chunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.Chunks.ArrayMax = 0;
  (this->Storage).ReplayInfo.Checkpoints.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayNum = 0;
  (this->Storage).ReplayInfo.Checkpoints.ArrayMax = 0;
  (this->Storage).ReplayInfo.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.Events.ArrayNum = 0;
  (this->Storage).ReplayInfo.Events.ArrayMax = 0;
  (this->Storage).ReplayInfo.DataChunks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).ReplayInfo.DataChunks.ArrayNum = 0;
  (this->Storage).ReplayInfo.DataChunks.ArrayMax = 0;
  (this->Storage).DataBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Storage).DataBuffer.ArrayNum = 0;
  (this->Storage).DataBuffer.ArrayMax = 0;
  (this->Storage).bAsyncError = false;
  (this->Storage).AsyncError = Success;
  *(undefined8 *)&this->RequestFunction = *(undefined8 *)param_3;
  *(undefined8 *)&(this->RequestFunction).field_0x28 = *(undefined8 *)&param_3->field_0x28;
  *(undefined8 *)&param_3->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_3->field_0x18;
  *(undefined8 *)&(this->RequestFunction).field_0x10 = *(undefined8 *)&param_3->field_0x10;
  *(undefined8 *)&(this->RequestFunction).field_0x18 = uVar2;
  *(undefined8 *)&(this->RequestFunction).field_0x20 = *(undefined8 *)&param_3->field_0x20;
  if (*(longlong *)&this->RequestFunction != 0) {
    *(undefined8 *)param_3 = 0;
  }
  *(undefined8 *)&this->CompletionCallback = *(undefined8 *)param_4;
  *(undefined8 *)&(this->CompletionCallback).field_0x28 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&param_4->field_0x28 = 0;
  uVar2 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->CompletionCallback).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->CompletionCallback).field_0x18 = uVar2;
  *(undefined8 *)&(this->CompletionCallback).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  if (*(longlong *)&this->CompletionCallback != 0) {
    *(undefined8 *)param_4 = 0;
  }
  return this;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> @ 146c91be0

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar5 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar5 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar4 = (this->Storage).DataBuffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&(this->Storage).ReplayInfo);
  *(undefined ***)&(this->Storage).DelegateResult = &___7FStreamingResultBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> @ 146c91ca0

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *this
          )

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar5 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar5 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar4 = (this->Storage).DataBuffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&(this->Storage).ReplayInfo);
  *(undefined ***)&(this->Storage).DelegateResult = &___7FStreamingResultBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> @ 146c91d60

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar4 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar4 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  TLocalFileRequestCommonData<FEnumerateEventsResult>::
  ~TLocalFileRequestCommonData<FEnumerateEventsResult>(&this->Storage);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> @ 146c91e00

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar4 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar4 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  TLocalFileRequestCommonData<FEnumerateStreamsResult>::
  ~TLocalFileRequestCommonData<FEnumerateStreamsResult>(&this->Storage);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> @ 146c91ea0

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar5 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar5 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar4 = (this->Storage).DataBuffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&(this->Storage).ReplayInfo);
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FStreamingResultBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> @ 146c91f60

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar5 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar5 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar4 = (this->Storage).DataBuffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&(this->Storage).ReplayInfo);
  pFVar4 = (this->Storage).DelegateResult.NewReplayName.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FStreamingResultBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> @ 146c92030

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar5 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar5 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar4 = (this->Storage).DataBuffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&(this->Storage).ReplayInfo);
  *(undefined ***)&(this->Storage).DelegateResult = &___7FStreamingResultBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> @ 146c920f0

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar5 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar5 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar4 = (this->Storage).DataBuffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&(this->Storage).ReplayInfo);
  pFVar4 = (this->Storage).DelegateResult.ReplayEventListItem.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FStreamingResultBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> @ 146c921c0

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
           *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar4 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar4 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  TLocalFileRequestCommonData<FRequestEventGroupDataResult>::
  ~TLocalFileRequestCommonData<FRequestEventGroupDataResult>(&this->Storage);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> @ 146c92260

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *this
          )

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar5 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar5 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar4 = (this->Storage).DataBuffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&(this->Storage).ReplayInfo);
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FStreamingResultBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> @ 146c92320

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::
~TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  
  if (*(longlong *)&this->CompletionCallback != 0) {
    plVar3 = *(longlong **)&(this->CompletionCallback).field_0x28;
    plVar5 = (longlong *)&(this->CompletionCallback).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->RequestFunction != 0) {
    plVar3 = *(longlong **)&(this->RequestFunction).field_0x28;
    plVar5 = (longlong *)&(this->RequestFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar4 = (this->Storage).DataBuffer.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FLocalFileReplayInfo::~FLocalFileReplayInfo(&(this->Storage).ReplayInfo);
  (this->Storage).DelegateResult._padding_ = (longlong)&___7FStreamingResultBase__6B_;
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  return;
}

// ~TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult> @ 146c923e0

void __thiscall
TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::
~TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)((longlong)this + 0x70) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x80);
    if (*(longlong **)((longlong)this + 0x98) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x98);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)((longlong)this + 0x40) != 0) {
    plVar3 = (longlong *)((longlong)this + 0x50);
    if (*(longlong **)((longlong)this + 0x68) != (longlong *)0x0) {
      plVar3 = *(longlong **)((longlong)this + 0x68);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)this = &___7FQueuedLocalFileRequest__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// operator() @ 146c9c290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::
IssueRequest'::__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c330

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'
::__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'
::__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::
IssueRequest'::__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::
<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::
__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::
__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::
IssueRequest'::__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::
IssueRequest'::__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'
::__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::
__l2::<lambda_2>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// operator() @ 146c9c970

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>::
operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *local_38 [2];
  undefined **local_28;
  undefined8 local_20;
  TReferenceControllerBase<1> *local_18;
  undefined8 local_10;
  
  if (*(int *)(*(longlong *)this + 0x1c) == 0) {
    local_20 = *(undefined8 *)this;
    pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__4___R<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ_QEBA_XZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>::operator()'::__l5::<lambda_1>,void>
                  ::Call;
    local_18 = pTVar1;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// FinishRequest @ 146ca9c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::
FinishRequest(TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
              *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146ca9d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::FinishRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *this
          )

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FDownloadHeaderResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FDownloadHeaderResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146ca9e80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::FinishRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
           *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FEnumerateEventsResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146ca9fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::FinishRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
           *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FEnumerateStreamsResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FEnumerateStreamsResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146caa0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::FinishRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1> *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1> local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FGotoResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *)0x0)
       && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146caa210

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::FinishRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FKeepReplayResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146caa340

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::FinishRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FRenameReplayResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146caa470

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::FinishRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
           *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FRequestEventDataResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146caa5a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::
FinishRequest(TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
              *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> *pTVar4
  ;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FRequestEventGroupDataResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146caa6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::FinishRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *this
          )

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FStartStreamingResult>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146caa800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::FinishRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
  *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
  local_18;
  
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) && (this->_padding_ != 0)) {
    if (*(longlong *)&(this->CompletionCallback).field_0x0 != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FStreamingResultBase>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(TLocalFileRequestCommonData<FStreamingResultBase>_&)>
                    *)&this->CompletionCallback,&this->Storage);
    }
    if (this->_padding_ == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = this->_padding_;
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
             ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
                         *)&this->_padding_,&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>
                    *)0x0) && (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// FinishRequest @ 146caa930

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::FinishRequest(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *pTVar4;
  code *pcVar5;
  bool bVar6;
  TSharedRef<TGenericQueuedLocalFileRequest<ELocalFileReplayResult>,1> *pTVar7;
  longlong local_28;
  FSharedReferencer<1> FStack_20;
  TSharedRef<TGenericQueuedLocalFileRequest<ELocalFileReplayResult>,1> local_18;
  
  if ((*(int *)((longlong)this + 0x1c) == 0) && (*(longlong *)((longlong)this + 8) != 0)) {
    if (*(longlong *)((longlong)this + 0x70) != 0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_ELocalFileReplayResult_&)>
      ::operator()((longlong *)((longlong)this + 0x70),
                   (ELocalFileReplayResult *)((longlong)this + 0x30));
    }
    if (*(longlong *)((longlong)this + 8) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar2 = *(longlong *)((longlong)this + 8);
    pTVar7 = TSharedFromThis<TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>,1>::
             AsShared((void *)((longlong)this + 0x20),&local_18);
    pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
    pTVar4 = pTVar7->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar4 != (TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *)0x0) &&
       (plVar1 = (longlong *)(lVar2 + 0x198), *plVar1 != 0)) {
      if (5 < (byte)LogLocalFileReplay._0_1_) {
        EQueuedLocalFileRequestType::ToString((Type)pTVar4->_padding_);
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLocalFileReplay);
      }
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (plVar1 != &local_28) {
        *plVar1 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar2 + 0x1a0),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// IssueRequest @ 146cad3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::
IssueRequest(TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
             *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>
  *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDeleteFinishedStreamResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 0xb0;
  (this_01->TaskStorage).Pad[0x11] = '\v';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDeleteFinishedStreamResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450bc0)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146cad670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *this
          )

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFDownloadHeaderResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 0xd0;
  (this_01->TaskStorage).Pad[0x11] = '\n';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FDownloadHeaderResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450ae0)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146cad920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>
           *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateEventsResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 'p';
  (this_01->TaskStorage).Pad[0x11] = '\v';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateEventsResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450b80)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146cadbd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>
           *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFEnumerateStreamsResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 0x90;
  (this_01->TaskStorage).Pad[0x11] = '\v';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FEnumerateStreamsResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450ba0)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146cade80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1> local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>::
  AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>,1>
            *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFGotoResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 0x90;
  (this_01->TaskStorage).Pad[0x11] = '\n';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FGotoResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450aa0)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146cae130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFKeepReplayResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = '\x10';
  (this_01->TaskStorage).Pad[0x11] = '\v';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FKeepReplayResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450b20)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146cae3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRenameReplayResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 0xf0;
  (this_01->TaskStorage).Pad[0x11] = '\n';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRenameReplayResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450b00)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146cae690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>
           *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventDataResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 'P';
  (this_01->TaskStorage).Pad[0x11] = '\v';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventDataResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450b60)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146cae940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::
IssueRequest(TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
             *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_> *pTVar4
  ;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>
  *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFRequestEventGroupDataResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = '0';
  (this_01->TaskStorage).Pad[0x11] = '\v';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FRequestEventGroupDataResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450b40)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146caebf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *this
          )

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStartStreamingResult______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 0xd0;
  (this_01->TaskStorage).Pad[0x11] = '\v';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStartStreamingResult>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450be0)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146caeea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest
          (TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
  local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
  ::AsShared((TSharedFromThis<TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>,1>
              *)&this->_padding_,&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_V__TLocalFileRequestCommonData_UFStreamingResultBase______UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 'p';
  (this_01->TaskStorage).Pad[0x11] = '\n';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<TLocalFileRequestCommonData<FStreamingResultBase>_>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450a80)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

// IssueRequest @ 146caf150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *pTVar4;
  bool bVar5;
  TPromise<void> *pTVar6;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_00;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *this_01;
  undefined ***pppuVar7;
  atomic<int> *paVar8;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_c8;
  ETaskPriority local_c7 [7];
  TSharedRef<TGenericQueuedLocalFileRequest<ELocalFileReplayResult>,1> local_c0;
  TPromise<void> local_b0;
  code *local_98 [2];
  undefined **local_88;
  TGenericQueuedLocalFileRequest<ELocalFileReplayResult> *local_80;
  TReferenceControllerBase<1> *local_78;
  undefined ***local_70;
  TGraphTask<TLocalFileAsyncGraphTask<void>_> *local_68;
  undefined **local_58;
  undefined8 uStack_50;
  TReferenceControllerBase<1> *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  TSharedFromThis<TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>,1>::AsShared
            ((void *)((longlong)this + 0x20),&local_c0);
  if (local_c0.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    local_70 = (undefined ***)0x0;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_70 = (undefined ***)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_V<lambda_2>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_80 = local_c0.Object;
    local_78 = local_c0.SharedReferenceCount.ReferenceController;
    LOCK();
    (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    local_98[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_2>,void>
                  ::Call;
    pTVar6 = TPromise<void>::TPromise<void>
                       (&local_b0,(TUniqueFunction<void___cdecl(void)> *)local_98);
    paVar8 = &(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  this_01 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  if (this_00 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    this_01 = TGraphTask<TLocalFileAsyncGraphTask<void>_>::
              TGraphTask<TLocalFileAsyncGraphTask<void>_>
                        (this_00,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                  *)0x0);
  }
  uStack_50 = local_c0.Object;
  pTVar4 = uStack_50;
  local_40 = 0;
  local_58 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__IssueRequest___TGenericQueuedLocalFileRequest_W4ELocalFileReplayResult____UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = local_c0.SharedReferenceCount.ReferenceController;
  if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  uStack_50._0_4_ = SUB84(local_c0.Object,0);
  uStack_50._4_4_ = (undefined4)((ulonglong)local_c0.Object >> 0x20);
  *(code **)(this_01->TaskStorage).Pad =
       UE::Core::Private::Function::
       TFunctionRefCaller<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_1>,void>
       ::Call;
  (this_01->TaskStorage).Pad[0x28] = '\0';
  (this_01->TaskStorage).Pad[0x29] = '\0';
  (this_01->TaskStorage).Pad[0x2a] = '\0';
  (this_01->TaskStorage).Pad[0x2b] = '\0';
  (this_01->TaskStorage).Pad[0x2c] = '\0';
  (this_01->TaskStorage).Pad[0x2d] = '\0';
  (this_01->TaskStorage).Pad[0x2e] = '\0';
  (this_01->TaskStorage).Pad[0x2f] = '\0';
  (this_01->TaskStorage).Pad[0x10] = 0xb0;
  (this_01->TaskStorage).Pad[0x11] = '\n';
  (this_01->TaskStorage).Pad[0x12] = 'E';
  (this_01->TaskStorage).Pad[0x13] = 'Q';
  (this_01->TaskStorage).Pad[0x14] = '\x01';
  (this_01->TaskStorage).Pad[0x15] = '\0';
  (this_01->TaskStorage).Pad[0x16] = '\0';
  (this_01->TaskStorage).Pad[0x17] = '\0';
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x18) = (undefined4)uStack_50;
  *(undefined4 *)((this_01->TaskStorage).Pad + 0x1c) = uStack_50._4_4_;
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x20) =
       local_c0.SharedReferenceCount.ReferenceController;
  lVar2 = *(longlong *)(this_01->TaskStorage).Pad;
  *(TFutureState<void> **)((this_01->TaskStorage).Pad + 0x30) = (pTVar6->State).Object;
  local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)
             UE::Core::Private::Function::
             TFunctionRefCaller<`TGenericQueuedLocalFileRequest<enum_ELocalFileReplayResult>::IssueRequest'::__l2::<lambda_1>,void>
             ::Call;
  if (lVar2 != 0) {
    local_68 = (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0;
  }
  *(TReferenceControllerBase<1> **)((this_01->TaskStorage).Pad + 0x38) =
       (pTVar6->State).SharedReferenceCount.ReferenceController;
  (pTVar6->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (pTVar6->State).Object = (TFutureState<void> *)0x0;
  (this_01->TaskStorage).Pad[0x40] = pTVar6->bFutureRetrieved;
  uStack_50 = pTVar4;
  if (local_68 != (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    (*(code *)PTR_Destroy_151450ac0)(&local_58);
  }
  UE::Tasks::Private::TranslatePriority(AnyBackgroundThreadNormalTask,local_c7,&local_c8);
  UE::Tasks::Private::FTaskBase::Init((FTaskBase *)this_01,L"GraphTask",local_c7[0],local_c8,None);
  if (this_01 == (TGraphTask<TLocalFileAsyncGraphTask<void>_> *)0x0) {
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)0x0,0x130);
  }
  else {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0x130);
    LOCK();
    plVar1 = &this_01->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)this_01->_padding_)(this_01,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  if (((local_b0.State.Object != (TFutureState<void> *)0x0) &&
      ((local_b0.State.Object)->field_0x68 == '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("State->IsComplete()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                         ,0x242,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b0.State.SharedReferenceCount.ReferenceController);
  if (local_98[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar7 = local_70;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c0.SharedReferenceCount.ReferenceController);
  return;
}

