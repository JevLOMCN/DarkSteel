// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 23

// TSharedPtr<Audio::FMixerSourceBuffer,1><Audio::FMixerSourceBuffer> @ 1464d0900

TSharedPtr<Audio::FMixerSourceBuffer,1> * __thiscall
TSharedPtr<Audio::FMixerSourceBuffer,1>::
TSharedPtr<Audio::FMixerSourceBuffer,1><Audio::FMixerSourceBuffer>
          (TSharedPtr<Audio::FMixerSourceBuffer,1> *this,
          TRawPtrProxy<Audio::FMixerSourceBuffer> *param_1)

{
  FMixerSourceBuffer *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMixerSourceBuffer_Audio__U__DefaultDeleter_VFMixerSourceBuffer_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)pFVar1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<Audio::FMixerSubmix,1><Audio::FMixerSubmix> @ 1464d0970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

TSharedPtr<Audio::FMixerSubmix,1> * __thiscall
TSharedPtr<Audio::FMixerSubmix,1>::TSharedPtr<Audio::FMixerSubmix,1><Audio::FMixerSubmix>
          (TSharedPtr<Audio::FMixerSubmix,1> *this,TWeakPtr<Audio::FMixerSubmix,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  atomic<int> aVar4;
  bool bVar5;
  
  this->Object = (FMixerSubmix *)0x0;
  pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar3->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        break;
      }
      LOCK();
      aVar4 = pTVar3->SharedReferenceCount;
      bVar5 = aVar2 == aVar4;
      if (bVar5) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar5);
    pTVar3 = (param_1->WeakReferenceCount).ReferenceController;
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if ((aVar2 == (atomic<int>)0x1) && (pTVar3 != (TReferenceControllerBase<1> *)0x0)) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  if ((this->SharedReferenceCount).ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    this->Object = param_1->Object;
    param_1->Object = (FMixerSubmix *)0x0;
  }
  return this;
}

// operator*<TArray<float,TAlignedHeapAllocator<16>_>_> @ 1464d0b30

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>::
operator*<TArray<float,TAlignedHeapAllocator<16>_>_>
          (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  
  if (this->Object != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x44d,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator= @ 1464dd6c0

TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> * __thiscall
TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>::operator=
          (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *this,FNullTag *param_1)

{
  TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> local_18;
  
  local_18.Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != &local_18) {
    this->Object = (TArray<float,TAlignedHeapAllocator<16>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator= @ 1464dd710

TSharedPtr<IAudioLinkSettingsProxy,1> * __thiscall
TSharedPtr<IAudioLinkSettingsProxy,1>::operator=
          (TSharedPtr<IAudioLinkSettingsProxy,1> *this,
          TSharedPtr<IAudioLinkSettingsProxy,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IAudioLinkSettingsProxy *pIVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->SharedReferenceCount).ReferenceController;
  this->Object = pIVar2;
  (this->SharedReferenceCount).ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return this;
}

// operator= @ 1464dd760

TSharedPtr<IAudioLinkSourcePushed,1> * __thiscall
TSharedPtr<IAudioLinkSourcePushed,1>::operator=
          (TSharedPtr<IAudioLinkSourcePushed,1> *this,TSharedPtr<IAudioLinkSourcePushed,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (IAudioLinkSourcePushed *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 1464dda10

TArray<float,TAlignedHeapAllocator<16>_> * __thiscall
TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1>::operator->
          (TSharedPtr<TArray<float,TAlignedHeapAllocator<16>_>,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  
  if (this->Object != (TArray<float,TAlignedHeapAllocator<16>_> *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TArray<float,TAlignedHeapAllocator<16>_> *)(*pcVar1)();
    return pTVar3;
  }
  return this->Object;
}

// operator-> @ 1464dda60

FMixerSourceBuffer * __thiscall
TSharedPtr<Audio::FMixerSourceBuffer,1>::operator->(TSharedPtr<Audio::FMixerSourceBuffer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMixerSourceBuffer *pFVar3;
  
  if (this->Object != (FMixerSourceBuffer *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMixerSourceBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1464ddab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EFFTSize": Some values do not have unique names */

FMixerSubmix * __thiscall
TSharedPtr<Audio::FMixerSubmix,1>::operator->(TSharedPtr<Audio::FMixerSubmix,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMixerSubmix *pFVar3;
  
  if (this->Object != (FMixerSubmix *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMixerSubmix *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1464ddb00

IAudioLinkSourcePushed * __thiscall
TSharedPtr<IAudioLinkSourcePushed,1>::operator->(TSharedPtr<IAudioLinkSourcePushed,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IAudioLinkSourcePushed *pIVar3;
  
  if (this->Object != (IAudioLinkSourcePushed *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAudioLinkSourcePushed *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1464ddb50

IAudioReverb * __thiscall TSharedPtr<IAudioReverb,1>::operator->(TSharedPtr<IAudioReverb,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IAudioReverb *pIVar3;
  
  if (this->Object != (IAudioReverb *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAudioReverb *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1464ddba0

IAudioSourceDataOverride * __thiscall
TSharedPtr<IAudioSourceDataOverride,1>::operator->(TSharedPtr<IAudioSourceDataOverride,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IAudioSourceDataOverride *pIVar3;
  
  if (this->Object != (IAudioSourceDataOverride *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IAudioSourceDataOverride *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1464ddbf0

ISoundGenerator * __thiscall
TSharedPtr<ISoundGenerator,1>::operator->(TSharedPtr<ISoundGenerator,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ISoundGenerator *pIVar3;
  
  if (this->Object != (ISoundGenerator *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISoundGenerator *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// TSharedPtr<Audio::IQuartzQuantizedCommand,1><Audio::FQuantizedPlayCommand> @ 1465368b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<Audio::IQuartzQuantizedCommand,1> * __thiscall
TSharedPtr<Audio::IQuartzQuantizedCommand,1>::
TSharedPtr<Audio::IQuartzQuantizedCommand,1><Audio::FQuantizedPlayCommand>
          (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *this,FQuantizedPlayCommand *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = (IQuartzQuantizedCommand *)param_1;
  pTVar1 = ::operator_new(0x18);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    pTVar1->SharedReferenceCount = (atomic<int>)0x1;
    pTVar1->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFQuantizedPlayCommand_Audio__U__DefaultDeleter_VFQuantizedPlayCommand_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar1->WeakReferenceCount = (atomic<int>)0x1;
    pTVar1[1]._padding_ = (longlong)param_1;
    (this->SharedReferenceCount).ReferenceController = pTVar1;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundDataReader> @ 146536920

TSharedPtr<Audio::ISoundFileReader,1> * __thiscall
TSharedPtr<Audio::ISoundFileReader,1>::
TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundDataReader>
          (TSharedPtr<Audio::ISoundFileReader,1> *this,FSoundDataReader *param_1)

{
  ISoundFileReader *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pIVar1 = (ISoundFileReader *)&param_1->_padding_;
  if (param_1 == (FSoundDataReader *)0x0) {
    pIVar1 = (ISoundFileReader *)0x0;
  }
  this->Object = pIVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSoundDataReader_Audio__U__DefaultDeleter_VFSoundDataReader_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)param_1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundFileReader> @ 1465369b0

TSharedPtr<Audio::ISoundFileReader,1> * __thiscall
TSharedPtr<Audio::ISoundFileReader,1>::
TSharedPtr<Audio::ISoundFileReader,1><Audio::FSoundFileReader>
          (TSharedPtr<Audio::ISoundFileReader,1> *this,FSoundFileReader *param_1)

{
  ISoundFileReader *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pIVar1 = (ISoundFileReader *)&param_1->_padding_;
  if (param_1 == (FSoundFileReader *)0x0) {
    pIVar1 = (ISoundFileReader *)0x0;
  }
  this->Object = pIVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSoundFileReader_Audio__U__DefaultDeleter_VFSoundFileReader_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)param_1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// TSharedPtr<Audio::ISoundFileWriter,1><Audio::FSoundFileWriter> @ 146536a40

TSharedPtr<Audio::ISoundFileWriter,1> * __thiscall
TSharedPtr<Audio::ISoundFileWriter,1>::
TSharedPtr<Audio::ISoundFileWriter,1><Audio::FSoundFileWriter>
          (TSharedPtr<Audio::ISoundFileWriter,1> *this,FSoundFileWriter *param_1)

{
  ISoundFileWriter *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pIVar1 = (ISoundFileWriter *)&param_1->_padding_;
  if (param_1 == (FSoundFileWriter *)0x0) {
    pIVar1 = (ISoundFileWriter *)0x0;
  }
  this->Object = pIVar1;
  pTVar2 = ::operator_new(0x18);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    pTVar2->SharedReferenceCount = (atomic<int>)0x1;
    pTVar2->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFSoundFileWriter_Audio__U__DefaultDeleter_VFSoundFileWriter_Audio___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar2->WeakReferenceCount = (atomic<int>)0x1;
    pTVar2[1]._padding_ = (longlong)param_1;
    (this->SharedReferenceCount).ReferenceController = pTVar2;
    return this;
  }
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// operator= @ 146541b40

TSharedPtr<Audio::FPatchOutput,1> * __thiscall
TSharedPtr<Audio::FPatchOutput,1>::operator=
          (TSharedPtr<Audio::FPatchOutput,1> *this,TSharedPtr<Audio::FPatchOutput,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 146542580

FPatchOutput * __thiscall
TSharedPtr<Audio::FPatchOutput,1>::operator->(TSharedPtr<Audio::FPatchOutput,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPatchOutput *pFVar3;
  
  if (this->Object != (FPatchOutput *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPatchOutput *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1465425d0

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzClock * __thiscall
TSharedPtr<Audio::FQuartzClock,1>::operator->(TSharedPtr<Audio::FQuartzClock,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FQuartzClock *pFVar3;
  
  if (this->Object != (FQuartzClock *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FQuartzClock *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146542620

FSoundWaveProxy * __thiscall
TSharedPtr<FSoundWaveProxy,1>::operator->(TSharedPtr<FSoundWaveProxy,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSoundWaveProxy *pFVar3;
  
  if (this->Object != (FSoundWaveProxy *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSoundWaveProxy *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146542670

IQuartzQuantizedCommand * __thiscall
TSharedPtr<Audio::IQuartzQuantizedCommand,1>::operator->
          (TSharedPtr<Audio::IQuartzQuantizedCommand,1> *this)

{
  code *pcVar1;
  bool bVar2;
  IQuartzQuantizedCommand *pIVar3;
  
  if (this->Object != (IQuartzQuantizedCommand *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IQuartzQuantizedCommand *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

// operator-> @ 1465426c0

ISoundFile * __thiscall
TSharedPtr<Audio::ISoundFile,1>::operator->(TSharedPtr<Audio::ISoundFile,1> *this)

{
  code *pcVar1;
  bool bVar2;
  ISoundFile *pIVar3;
  
  if (this->Object != (ISoundFile *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (ISoundFile *)(*pcVar1)();
    return pIVar3;
  }
  return this->Object;
}

