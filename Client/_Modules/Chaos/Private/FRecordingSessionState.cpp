// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FRecordingSessionState @ 14373d4f0

FRecordingSessionState * __thiscall
Chaos::VD::FRecordingSessionState::FRecordingSessionState(FRecordingSessionState *this)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FCachedObjectTraceIDByPtr<unsigned_int> *pFVar3;
  FCachedObjectTraceIDByPtr<unsigned___int64> *pFVar4;
  longlong lVar5;
  longlong lVar6;
  
  pTVar2 = (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->ExternalParticleMetadataGenerator = 0;
  *(undefined8 *)&(this->ExternalParticleMetadataGenerator).field_0x8 = 0;
  *(undefined4 *)&(this->ExternalParticleMetadataGenerator).field_0x10 = 0;
  (this->RecordingStartedDelegateHandle).ID = 0;
  (this->RecordingStoppedDelegateHandle).ID = 0;
  (this->RecordingFullCaptureRequestedHandle).ID = 0;
  *(undefined8 *)&(this->SolverIDsForDeltaRecording).Elements = 0;
  *(undefined8 *)&(this->SolverIDsForDeltaRecording).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SolverIDsForDeltaRecording).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SolverIDsForDeltaRecording).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SolverIDsForDeltaRecording).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SolverIDsForDeltaRecording).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SolverIDsForDeltaRecording).Elements.field_0x34 = 0;
  (this->SolverIDsForDeltaRecording).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SolverIDsForDeltaRecording).HashSize = 0;
  *(undefined8 *)&(this->RequestedFullCaptureSolverIDs).Elements = 0;
  *(undefined8 *)&(this->RequestedFullCaptureSolverIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RequestedFullCaptureSolverIDs).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RequestedFullCaptureSolverIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RequestedFullCaptureSolverIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RequestedFullCaptureSolverIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequestedFullCaptureSolverIDs).Elements.field_0x34 = 0;
  (this->RequestedFullCaptureSolverIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RequestedFullCaptureSolverIDs).HashSize = 0;
  pTVar1 = ::operator_new(0x78);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFChaosVDSerializableNameTable_VisualDebugger_Chaos___00_SharedPointerInternals__6B_
    ;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[3]._padding_ = 0;
    pTVar1[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[1]._padding_ = 0;
    pTVar1[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[2]._padding_ = 0;
    pTVar1[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar1[4]._padding_ = 0;
    pTVar1[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar1[4].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)&pTVar1[5]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pTVar1[5]._padding_ + 4) = 0;
    pTVar1[6]._padding_ = 0;
    pTVar1[7]._padding_ = 0;
    pTVar2 = pTVar1;
  }
  TSharedRef<Chaos::VisualDebugger::FChaosVDSerializableNameTable,1>::
  TSharedRef<Chaos::VisualDebugger::FChaosVDSerializableNameTable,1>
            (&this->CVDNameTable,(FChaosVDSerializableNameTable *)(pTVar2 + 1),pTVar2);
  (this->TraceRelevancyVolume).Min.field0_0x0._s_0.X = 0.0;
  (this->TraceRelevancyVolume).Min.field0_0x0._s_0.Y = 0.0;
  lVar5 = 0x20;
  (this->TraceRelevancyVolume).Min.field0_0x0._s_0.Z = 0.0;
  lVar6 = 0x20;
  (this->TraceRelevancyVolume).Max.field0_0x0._s_0.X = 0.0;
  (this->TraceRelevancyVolume).Max.field0_0x0._s_0.Y = 0.0;
  (this->TraceRelevancyVolume).Max.field0_0x0._s_0.Z = 0.0;
  (this->TraceRelevancyVolume).IsValid = '\0';
  *(undefined8 *)(this->TraceRelevancyVolume).Pad = 0;
  pFVar3 = &this->TracedGeometryHashCache;
  do {
    *(undefined8 *)&pFVar3->CachedIDsByPtr = 0;
    *(undefined8 *)&(pFVar3->CachedIDsByPtr).field_0x8 = 0;
    *(undefined8 *)&(pFVar3->CachedIDsByPtr).field_0x10 = 0;
    *(undefined8 *)&(pFVar3->CachedIDsByPtr).field_0x28 = 0;
    *(undefined4 *)&(pFVar3->CachedIDsByPtr).field_0x30 = 0;
    *(undefined4 *)&(pFVar3->CachedIDsByPtr).field_0x34 = 0x80;
    *(undefined4 *)&(pFVar3->CachedIDsByPtr).field_0x38 = 0xffffffff;
    *(undefined4 *)&(pFVar3->CachedIDsByPtr).field_0x3c = 0;
    *(undefined8 *)&(pFVar3->CachedIDsByPtr).field_0x48 = 0;
    *(undefined4 *)&(pFVar3->CachedIDsByPtr).field_0x50 = 0;
    pFVar3 = (FCachedObjectTraceIDByPtr<unsigned_int> *)&(pFVar3->CachedIDsByPtr).field_0x58;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  pFVar4 = &this->ParticleMetadataIDsCache;
  do {
    *(undefined8 *)&pFVar4->CachedIDsByPtr = 0;
    *(undefined8 *)&(pFVar4->CachedIDsByPtr).field_0x8 = 0;
    *(undefined8 *)&(pFVar4->CachedIDsByPtr).field_0x10 = 0;
    *(undefined8 *)&(pFVar4->CachedIDsByPtr).field_0x28 = 0;
    *(undefined4 *)&(pFVar4->CachedIDsByPtr).field_0x30 = 0;
    *(undefined4 *)&(pFVar4->CachedIDsByPtr).field_0x34 = 0x80;
    *(undefined4 *)&(pFVar4->CachedIDsByPtr).field_0x38 = 0xffffffff;
    *(undefined4 *)&(pFVar4->CachedIDsByPtr).field_0x3c = 0;
    *(undefined8 *)&(pFVar4->CachedIDsByPtr).field_0x48 = 0;
    *(undefined4 *)&(pFVar4->CachedIDsByPtr).field_0x50 = 0;
    pFVar4 = (FCachedObjectTraceIDByPtr<unsigned___int64> *)&(pFVar4->CachedIDsByPtr).field_0x58;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  (this->DeltaRecordingStatesLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->InternalGenericIDCounter = (atomic<unsigned___int64>)0x0;
  return this;
}

