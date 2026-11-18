// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 9

// DestroyObject @ 1464fb210

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FMixerSourceBuffer,SharedPointerInternals::DefaultDeleter<Audio::FMixerSourceBuffer>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::FMixerSourceBuffer,SharedPointerInternals::DefaultDeleter<Audio::FMixerSourceBuffer>,1>
                *this)

{
  FMixerSourceBuffer *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMixerSourceBuffer *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001464fb221. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1464fb230

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSoundEffectSource,SharedPointerInternals::DefaultDeleter<FSoundEffectSource>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSoundEffectSource,SharedPointerInternals::DefaultDeleter<FSoundEffectSource>,1>
                *this)

{
  FSoundEffectSource *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSoundEffectSource *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001464fb241. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1464fb250

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSoundEffectSubmix,SharedPointerInternals::DefaultDeleter<FSoundEffectSubmix>,1>
::DestroyObject(TReferenceControllerWithDeleter<FSoundEffectSubmix,SharedPointerInternals::DefaultDeleter<FSoundEffectSubmix>,1>
                *this)

{
  FSoundEffectSubmix *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSoundEffectSubmix *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001464fb261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1465527e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FQuantizedPlayCommand,SharedPointerInternals::DefaultDeleter<Audio::FQuantizedPlayCommand>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::FQuantizedPlayCommand,SharedPointerInternals::DefaultDeleter<Audio::FQuantizedPlayCommand>,1>
                *this)

{
  FQuantizedPlayCommand *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FQuantizedPlayCommand *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001465527f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146552800

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FSoundDataReader,SharedPointerInternals::DefaultDeleter<Audio::FSoundDataReader>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::FSoundDataReader,SharedPointerInternals::DefaultDeleter<Audio::FSoundDataReader>,1>
                *this)

{
  FSoundDataReader *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSoundDataReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146552811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146552820

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FSoundFileReader,SharedPointerInternals::DefaultDeleter<Audio::FSoundFileReader>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::FSoundFileReader,SharedPointerInternals::DefaultDeleter<Audio::FSoundFileReader>,1>
                *this)

{
  if (this->Object != (FSoundFileReader *)0x0) {
    Audio::FSoundFileReader::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

// DestroyObject @ 146552840

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FSoundFileWriter,SharedPointerInternals::DefaultDeleter<Audio::FSoundFileWriter>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::FSoundFileWriter,SharedPointerInternals::DefaultDeleter<Audio::FSoundFileWriter>,1>
                *this)

{
  FSoundFileWriter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSoundFileWriter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146552851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146552860

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FSoundWaveScrubberGenerator,SharedPointerInternals::DefaultDeleter<Audio::FSoundWaveScrubberGenerator>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::FSoundWaveScrubberGenerator,SharedPointerInternals::DefaultDeleter<Audio::FSoundWaveScrubberGenerator>,1>
                *this)

{
  FSoundWaveScrubberGenerator *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FSoundWaveScrubberGenerator *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146552871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 146586100

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Audio::FDecodingSoundSource,SharedPointerInternals::DefaultDeleter<Audio::FDecodingSoundSource>,1>
::DestroyObject(TReferenceControllerWithDeleter<Audio::FDecodingSoundSource,SharedPointerInternals::DefaultDeleter<Audio::FDecodingSoundSource>,1>
                *this)

{
  if (this->Object != (FDecodingSoundSource *)0x0) {
    Audio::FDecodingSoundSource::_scalar_deleting_destructor_(this->Object,1);
    return;
  }
  return;
}

