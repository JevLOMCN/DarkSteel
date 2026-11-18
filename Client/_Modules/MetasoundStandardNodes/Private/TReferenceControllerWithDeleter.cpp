// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 21

// DestroyObject @ 14afcbd60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>,SharedPointerInternals::DefaultDeleter<Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>,SharedPointerInternals::DefaultDeleter<Metasound::TAudioDataChannel<Metasound::FMonoAudioFormat>_>,1>
                *this)

{
  TAudioDataChannel<Metasound::FMonoAudioFormat> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TAudioDataChannel<Metasound::FMonoAudioFormat> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014afcbd71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14afcc560

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>,SharedPointerInternals::DefaultDeleter<Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>,SharedPointerInternals::DefaultDeleter<Metasound::TAudioDataChannel<Metasound::FStereoAudioFormat>_>,1>
                *this)

{
  TAudioDataChannel<Metasound::FStereoAudioFormat> *pTVar1;
  
  pTVar1 = this->Object;
  if (pTVar1 != (TAudioDataChannel<Metasound::FStereoAudioFormat> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014afcc571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pTVar1->_padding_)(pTVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14afcccd0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014afccce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14afcd2d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014afcd2e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b042e10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b042e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b085e20

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b085e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b086520

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b086531. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b086fc0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EKneeMode,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b086fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b0873b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b0873c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b0eb8f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b0eb901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b0ecb10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ENoiseType,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b0ecb21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b0ee9d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b0ee9e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b0ef770

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b0ef781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b0f0670

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b0f0681. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b0f20b0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b0f20c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b0f2f60

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b0f2f71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b1b3f10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b1b3f21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b1b42f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EPanningLaw,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b1b4301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b2082f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b208301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b20a100

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b20a111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14b20b360

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>,SharedPointerInternals::DefaultDeleter<Metasound::TCopyableDataChannel<Metasound::TEnum<enum_Audio::EWaveShaperType,1>_>_>,1>
::DestroyObject(void *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)((longlong)this + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014b20b371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

