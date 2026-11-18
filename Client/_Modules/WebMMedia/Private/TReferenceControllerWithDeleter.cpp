// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebMMedia
// Functions: 4

// DestroyObject @ 14f11db10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWebMMediaAudioSample,TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TDeleter,1>
::DestroyObject(TReferenceControllerWithDeleter<FWebMMediaAudioSample,TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TDeleter,1>
                *this)

{
  TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::
  TDeleter::operator()((TDeleter *)&this->_padding_,this->Object);
  return;
}

// DestroyObject @ 14f11db30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWebMMediaTextureSample,TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TDeleter,1>
::DestroyObject(TReferenceControllerWithDeleter<FWebMMediaTextureSample,TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TDeleter,1>
                *this)

{
  TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>
  ::TDeleter::operator()((TDeleter *)&this->_padding_,this->Object);
  return;
}

// DestroyObject @ 14f11db50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>,1>
::DestroyObject(TReferenceControllerWithDeleter<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>::TStorage>,1>
                *this)

{
  if (this->Object != (TStorage *)0x0) {
    TMediaObjectPool<FWebMMediaAudioSample,TMediaPoolDefaultObjectAllocator<FWebMMediaAudioSample>_>
    ::TStorage::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 14f11db70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>,1>
::DestroyObject(TReferenceControllerWithDeleter<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage,SharedPointerInternals::DefaultDeleter<TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>::TStorage>,1>
                *this)

{
  if (this->Object != (TStorage *)0x0) {
    TMediaObjectPool<FWebMMediaTextureSample,TMediaPoolDefaultObjectAllocator<FWebMMediaTextureSample>_>
    ::TStorage::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

