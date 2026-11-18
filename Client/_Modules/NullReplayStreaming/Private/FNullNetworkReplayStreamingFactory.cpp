// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullReplayStreaming
// Functions: 1

// CreateReplayStreamer @ 146c85b90

TSharedPtr<INetworkReplayStreamer,1> * __thiscall
FNullNetworkReplayStreamingFactory::CreateReplayStreamer
          (FNullNetworkReplayStreamingFactory *this,
          TSharedPtr<INetworkReplayStreamer,1> *__return_storage_ptr__)

{
  INetworkReplayStreamer *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  this_00 = ::operator_new(0x88);
  if (this_00 == (INetworkReplayStreamer *)0x0) {
    this_00 = (INetworkReplayStreamer *)0x0;
  }
  else {
    INetworkReplayStreamer::INetworkReplayStreamer(this_00);
    FTickableGameObject::FTickableGameObject((FTickableGameObject *)(this_00 + 1),NewObject);
    this_00->_padding_ =
         (longlong)&FNullNetworkReplayStreamer::_vftable__for__INetworkReplayStreamer__;
    this_00[1]._padding_ =
         (longlong)&FNullNetworkReplayStreamer::_vftable__for__FTickableGameObject__;
    this_00[5]._padding_ = (longlong)&___7FNullReplayInfo__6B_;
    this_00[1].ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    this_00[2]._padding_ = 0;
    this_00[2].ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    *(undefined1 *)&this_00[3]._padding_ = 0;
    this_00[3].ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    this_00[4]._padding_ = 0;
    *(undefined4 *)&this_00[4].ExtendedError = 0;
    this_00[5].ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    *(undefined4 *)&this_00[6]._padding_ = 0;
    this_00[6].ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    this_00[7]._padding_ = 0;
    *(undefined4 *)&this_00[7].ExtendedError = 0;
    this_00[7].ExtendedError.field_0x4 = 0;
    this_00[8]._padding_ = 0;
  }
  __return_storage_ptr__->Object = this_00;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFNullNetworkReplayStreamer__U__DefaultDeleter_VFNullNetworkReplayStreamer___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[1]._padding_ = (longlong)this_00;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

