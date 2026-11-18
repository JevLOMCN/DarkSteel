// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~TSharedInstanceProvider<IMessageRpcClient> @ 148b1e570

void __thiscall
TTypeContainer<1>::TSharedInstanceProvider<IMessageRpcClient>::
~TSharedInstanceProvider<IMessageRpcClient>(TSharedInstanceProvider<IMessageRpcClient> *this)

{
  this->_padding_ =
       (longlong)&___7__TSharedInstanceProvider_VIMessageRpcClient_____TTypeContainer__00__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Instance).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IInstanceProvider___TTypeContainer__00__6B_;
  return;
}

// GetInstance @ 148b41100

TSharedPtr<void,1> * __thiscall
TTypeContainer<1>::TSharedInstanceProvider<IMessageRpcClient>::GetInstance
          (TSharedInstanceProvider<IMessageRpcClient> *this,
          TSharedPtr<void,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->Instance).Object;
  pTVar1 = (this->Instance).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

