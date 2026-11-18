// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 7

// DestroyObject @ 14ea932c0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWmfMediaPlayer,SharedPointerInternals::DefaultDeleter<FWmfMediaPlayer>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWmfMediaPlayer,SharedPointerInternals::DefaultDeleter<FWmfMediaPlayer>,1>
                *this)

{
  FWmfMediaPlayer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWmfMediaPlayer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ea932d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0xd8))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14eaa7dc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWmfMediaAudioSample,TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TDeleter,1>
::DestroyObject(TReferenceControllerWithDeleter<FWmfMediaAudioSample,TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TDeleter,1>
                *this)

{
  TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::
  TDeleter::operator()((TDeleter *)&this->_padding_,this->Object);
  return;
}

// DestroyObject @ 14eaa7de0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWmfMediaHardwareVideoDecodingTextureSample,TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TDeleter,1>
::DestroyObject(TReferenceControllerWithDeleter<FWmfMediaHardwareVideoDecodingTextureSample,TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TDeleter,1>
                *this)

{
  TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>
  ::TDeleter::operator()((TDeleter *)&this->_padding_,this->Object);
  return;
}

// DestroyObject @ 14eaa7e00

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWmfMediaTextureSample,TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TDeleter,1>
::DestroyObject(TReferenceControllerWithDeleter<FWmfMediaTextureSample,TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TDeleter,1>
                *this)

{
  TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>
  ::TDeleter::operator()((TDeleter *)&this->_padding_,this->Object);
  return;
}

// DestroyObject @ 14eaa7e20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TStorage>,1>
::DestroyObject(TReferenceControllerWithDeleter<TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::TStorage>,1>
                *this)

{
  if (this->Object != (TStorage *)0x0) {
    TMediaObjectPool<FWmfMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWmfMediaAudioSample>_>::
    TStorage::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 14eaa7e40

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TStorage>,1>
::DestroyObject(TReferenceControllerWithDeleter<TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>::TStorage>,1>
                *this)

{
  if (this->Object != (TStorage *)0x0) {
    TMediaObjectPool<FWmfMediaHardwareVideoDecodingTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaHardwareVideoDecodingTextureSample>_>
    ::TStorage::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 14eaa7e60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TStorage>,1>
::DestroyObject(TReferenceControllerWithDeleter<TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>::TStorage>,1>
                *this)

{
  if (this->Object != (TStorage *)0x0) {
    TMediaObjectPool<FWmfMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWmfMediaTextureSample>_>
    ::TStorage::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

