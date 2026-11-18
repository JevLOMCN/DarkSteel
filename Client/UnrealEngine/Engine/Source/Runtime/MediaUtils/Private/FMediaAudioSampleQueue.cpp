// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 3

// GetAudioTime @ 146bfd5d0

FMediaTimeStampSample * __thiscall
FMediaAudioSampleQueue::GetAudioTime
          (FMediaAudioSampleQueue *this,FMediaTimeStampSample *__return_storage_ptr__)

{
  longlong *lpCriticalSection;
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar2 = *(undefined4 *)((longlong)&(this->AudioTime).TimeStamp.Time.Ticks + 4);
    iVar3 = (this->AudioTime).TimeStamp.SequenceIndex;
    iVar4 = (this->AudioTime).TimeStamp.LoopIndex;
    dVar1 = (this->AudioTime).SampledAtTime;
    *(int *)&(__return_storage_ptr__->TimeStamp).Time.Ticks =
         (int)(this->AudioTime).TimeStamp.Time.Ticks;
    *(undefined4 *)((longlong)&(__return_storage_ptr__->TimeStamp).Time.Ticks + 4) = uVar2;
    (__return_storage_ptr__->TimeStamp).SequenceIndex = iVar3;
    (__return_storage_ptr__->TimeStamp).LoopIndex = iVar4;
    __return_storage_ptr__->SampledAtTime = dVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// InvalidateAudioTime @ 146c01fb0

void __thiscall FMediaAudioSampleQueue::InvalidateAudioTime(FMediaAudioSampleQueue *this)

{
  longlong *lpCriticalSection;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->AudioTime).TimeStamp.Time.Ticks = -0x8000000000000000;
    (this->AudioTime).SampledAtTime = -1.0;
                    /* WARNING: Could not recover jumptable at 0x000146c01ffb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// RequestFlush @ 146c0b870

void __thiscall FMediaAudioSampleQueue::RequestFlush(FMediaAudioSampleQueue *this)

{
  longlong *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this->_padding_;
  if (lpCriticalSection != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    DestructItems<TSharedPtr<IMediaAudioSample,1>,int>
              ((TSharedPtr<IMediaAudioSample,1> *)this->_padding_,(int)this->_padding_);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    *piVar1 = *piVar1 + 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->AudioTime).TimeStamp.Time.Ticks = -0x8000000000000000;
    (this->AudioTime).SampledAtTime = -1.0;
                    /* WARNING: Could not recover jumptable at 0x000146c0b916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

