// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 3

// ~TRawPtrProxyWithDeleter<FWmfMediaAudioSample,TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TDeleter> @ 14ea96b60

void __thiscall
SharedPointerInternals::
TRawPtrProxyWithDeleter<FWmfMediaAudioSample,TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TDeleter>
::
~TRawPtrProxyWithDeleter<FWmfMediaAudioSample,TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TDeleter>
          (TRawPtrProxyWithDeleter<FWmfMediaAudioSample,TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TDeleter>
           *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->Deleter).StoragePtr.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea96b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~TRawPtrProxyWithDeleter<FWmfMediaHardwareVideoDecodingTextureSample,TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TDeleter> @ 14ea96b90

void __thiscall
SharedPointerInternals::
TRawPtrProxyWithDeleter<FWmfMediaHardwareVideoDecodingTextureSample,TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TDeleter>
::
~TRawPtrProxyWithDeleter<FWmfMediaHardwareVideoDecodingTextureSample,TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TDeleter>
          (TRawPtrProxyWithDeleter<FWmfMediaHardwareVideoDecodingTextureSample,TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TDeleter>
           *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->Deleter).StoragePtr.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea96bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// ~TRawPtrProxyWithDeleter<FWmfMediaTextureSample,TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TDeleter> @ 14ea96bc0

void __thiscall
SharedPointerInternals::
TRawPtrProxyWithDeleter<FWmfMediaTextureSample,TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TDeleter>
::
~TRawPtrProxyWithDeleter<FWmfMediaTextureSample,TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TDeleter>
          (TRawPtrProxyWithDeleter<FWmfMediaTextureSample,TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TDeleter>
           *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->Deleter).StoragePtr.WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014ea96be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

