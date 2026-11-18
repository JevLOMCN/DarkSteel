// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 5

// ~TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>,0,1> @ 146585160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>,0,1>
::
~TFunction_OwnedObject<_Audio::FSoundSourceDecoder::InitDecodingSourceInternal_::__l5::<lambda_1>,0,1>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x40));
  return;
}

// `scalar_deleting_destructor' @ 146585550

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::__l5::<lambda_1>,0,1>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`Audio::FSoundSourceDecoder::InitDecodingSourceInternal'::`5'::<lambda_1>,0,1>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x40));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465855a0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FDecodingSoundSource,SharedPointerInternals::DefaultDeleter<Audio::FDecodingSoundSource>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<Audio::FDecodingSoundSource,SharedPointerInternals::DefaultDeleter<Audio::FDecodingSoundSource>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1465855e0

void * __thiscall
Audio::FDecodingSoundSource::_scalar_deleting_destructor_(FDecodingSoundSource *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FMixerSourceBuffer *this_00;
  FScriptContainerElement *pFVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  lpCriticalSection = &this->MixerSourceBufferCritSec;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = (this->MixerSourceBuffer).Object;
    if (this_00 != (FMixerSourceBuffer *)0x0) {
      FMixerSourceBuffer::OnEndGenerate(this_00);
      local_18 = 0;
      FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&this->MixerSourceBuffer != (TSharedPtr<Audio::FMixerSourceBuffer,1> *)&local_18) {
        (this->MixerSourceBuffer).Object = (FMixerSourceBuffer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->MixerSourceBuffer).SharedReferenceCount,&FStack_10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_10.ReferenceController);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->SourceInfo).CurrentPCMBuffer.SharedReferenceCount.ReferenceController);
    pFVar1 = (this->SourceInfo).NextFrameValues.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->SourceInfo).CurrentFrameValues.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (this->ScratchBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->MixerSourceBuffer).SharedReferenceCount.ReferenceController);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((param_1 & 1) != 0) {
      ::operator_delete(this,0x108);
    }
    return this;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// `scalar_deleting_destructor' @ 1465856f0

void * __thiscall
Audio::FSoundSourceDecoder::_scalar_deleting_destructor_(FSoundSourceDecoder *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSoundSourceDecoder_Audio__6B_;
  TQueue<TFunction<void___cdecl(void)>,1>::~TQueue<TFunction<void___cdecl(void)>,1>
            (&this->CommandQueue);
  *(undefined4 *)&(this->PrecachingSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PrecachingSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,Audio::FSourceDecodeInit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,Audio::FSourceDecodeInit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,Audio::FSourceDecodeInit>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrecachingSources);
  *(undefined4 *)&(this->DecodingSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DecodingSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DecodingSources);
  *(undefined4 *)&(this->InitializingDecodingSources).field_0x48 = 0;
  pvVar1 = *(void **)&(this->InitializingDecodingSources).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TSharedPtr<Audio::FDecodingSoundSource,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InitializingDecodingSources);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->DecodingSourcesCritSec);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x150);
  }
  return this;
}

