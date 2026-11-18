// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 20

// TCircularAudioBuffer<float,16> @ 14aff2b70

TCircularAudioBuffer<float,16> * __thiscall
Audio::TCircularAudioBuffer<float,16>::TCircularAudioBuffer<float,16>
          (TCircularAudioBuffer<float,16> *this,uint param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TCircularAudioBuffer<float,16> *pTVar7;
  
  piVar1 = &(this->InternalBuffer).ArrayNum;
  (this->InternalBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InternalBuffer).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->ReadCounter).Counter = 0;
  (this->WriteCounter).Counter = 0;
  if (0x7ffffffe < param_1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCapacity < (uint32)TNumericLimits<int32>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x373,
                       L"Max capacity for this buffer is 2,147,483,647 samples. Otherwise our index arithmetic will not work."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TCircularAudioBuffer<float,16> *)(*pcVar4)();
      return pTVar7;
    }
  }
  this->Capacity = param_1 + 1;
  LOCK();
  (this->ReadCounter).Counter = 0;
  UNLOCK();
  LOCK();
  (this->WriteCounter).Counter = 0;
  UNLOCK();
  *piVar1 = 0;
  if (*piVar2 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,piVar2);
  }
  uVar3 = this->Capacity;
  iVar6 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar3,(ForAnyElementType *)this,piVar1,piVar2);
  memset((this->InternalBuffer).AllocatorInstance.Data + (longlong)iVar6 * 4,0,
         (longlong)(int)uVar3 << 2);
  return this;
}

// Pop @ 14b02d4f0

TEnum<Metasound::EBandSplitterFilterOrder,1> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EBandSplitterFilterOrder,1>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EBandSplitterFilterOrder EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EBandSplitterFilterOrder,1>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EBandSplitterFilterOrder,1>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::EBandSplitterFilterOrder,1>)(EBandSplitterFilterOrder)in_RDX;
}

// Pop @ 14b02d5c0

TEnum<Audio::EBiquadFilter::Type,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EBiquadFilter::Type,0>,16>::Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  Type TVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return (TEnum<Audio::EBiquadFilter::Type,0>)TVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar4 = (*pcVar2)();
      return (TEnum<Audio::EBiquadFilter::Type,0>)TVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Audio::EBiquadFilter::Type,0>)(Type)in_RDX;
}

// Pop @ 14b078ea0

TEnum<Audio::EDynamicFilterType,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EDynamicFilterType,0>,16>::Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EDynamicFilterType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Audio::EDynamicFilterType,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Audio::EDynamicFilterType,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Audio::EDynamicFilterType,0>)(EDynamicFilterType)in_RDX;
}

// Pop @ 14b0e3480

TEnum<Audio::Grain::EEnvelope,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::Grain::EEnvelope,0>,16>::Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EEnvelope EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Audio::Grain::EEnvelope,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Audio::Grain::EEnvelope,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Audio::Grain::EEnvelope,0>)(EEnvelope)in_RDX;
}

// Pop @ 14b0e3550

TEnum<Metasound::EEnvelopePeakMode,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EEnvelopePeakMode,0>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EEnvelopePeakMode EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EEnvelopePeakMode,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EEnvelopePeakMode,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::EEnvelopePeakMode,0>)(EEnvelopePeakMode)in_RDX;
}

// Pop @ 14b0e3620

TEnum<Metasound::EKneeMode,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EKneeMode,0>,16>::Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EKneeMode EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EKneeMode,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EKneeMode,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::EKneeMode,0>)(EKneeMode)in_RDX;
}

// Pop @ 14b0e36f0

TEnum<Metasound::ELowFrequencyNoiseInterpType,2> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ELowFrequencyNoiseInterpType,2>,16>::
Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ELowFrequencyNoiseInterpType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::ELowFrequencyNoiseInterpType,2>)(ELowFrequencyNoiseInterpType)in_RDX;
}

// Pop @ 14b1a1b90

TEnum<Metasound::ELfoWaveshapeType,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ELfoWaveshapeType,0>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ELfoWaveshapeType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ELfoWaveshapeType,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::ELfoWaveshapeType,0>)(ELfoWaveshapeType)in_RDX;
}

// Pop @ 14b1a1c60

TEnum<Metasound::ENoiseType,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ENoiseType,0>,16>::Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ENoiseType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ENoiseType,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ENoiseType,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::ENoiseType,0>)(ENoiseType)in_RDX;
}

// Pop @ 14b1a1d30

TEnum<Metasound::ESawGenerationType,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESawGenerationType,0>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ESawGenerationType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ESawGenerationType,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ESawGenerationType,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::ESawGenerationType,0>)(ESawGenerationType)in_RDX;
}

// Pop @ 14b1a1e00

TEnum<Metasound::ESineGenerationType,3> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESineGenerationType,3>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ESineGenerationType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ESineGenerationType,3>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ESineGenerationType,3>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::ESineGenerationType,3>)(ESineGenerationType)in_RDX;
}

// Pop @ 14b1a1ed0

TEnum<Metasound::ESquareGenerationType,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESquareGenerationType,0>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ESquareGenerationType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ESquareGenerationType,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ESquareGenerationType,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::ESquareGenerationType,0>)(ESquareGenerationType)in_RDX;
}

// Pop @ 14b1a1fa0

TEnum<Metasound::ETriangleGenerationType,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ETriangleGenerationType,0>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ETriangleGenerationType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ETriangleGenerationType,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ETriangleGenerationType,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::ETriangleGenerationType,0>)(ETriangleGenerationType)in_RDX;
}

// Pop @ 14b1a2070

TEnum<Audio::EMusicalScale::Scale,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EMusicalScale::Scale,0>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  Scale SVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      SVar4 = (*pcVar2)();
      return (TEnum<Audio::EMusicalScale::Scale,0>)SVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      SVar4 = (*pcVar2)();
      return (TEnum<Audio::EMusicalScale::Scale,0>)SVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Audio::EMusicalScale::Scale,0>)(Scale)in_RDX;
}

// Pop @ 14b1e8a70

TEnum<Metasound::EPanningLaw,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EPanningLaw,0>,16>::Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EPanningLaw EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EPanningLaw,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EPanningLaw,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::EPanningLaw,0>)(EPanningLaw)in_RDX;
}

// Pop @ 14b1e8b40

TEnum<Metasound::EStereoDelayMode,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EStereoDelayMode,0>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EStereoDelayMode EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EStereoDelayMode,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EStereoDelayMode,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::EStereoDelayMode,0>)(EStereoDelayMode)in_RDX;
}

// Pop @ 14b2882d0

TEnum<Metasound::EBufferTriggerType,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::EBufferTriggerType,0>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EBufferTriggerType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EBufferTriggerType,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::EBufferTriggerType,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::EBufferTriggerType,0>)(EBufferTriggerType)in_RDX;
}

// Pop @ 14b2883a0

TEnum<Metasound::ETriggerComparisonType,0> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ETriggerComparisonType,0>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ETriggerComparisonType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ETriggerComparisonType,0>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Metasound::ETriggerComparisonType,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::ETriggerComparisonType,0>)(ETriggerComparisonType)in_RDX;
}

// Pop @ 14b288470

TEnum<Audio::EWaveShaperType,1> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Audio::EWaveShaperType,1>,16>::Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EWaveShaperType EVar4;
  uint uVar5;
  int iVar6;
  undefined4 *in_RDX;
  
  iVar6 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x14);
  if (*(int *)((longlong)this + 0x18) < *(int *)((longlong)this + 0x14)) {
    iVar6 = iVar6 + *(int *)((longlong)this + 0x10);
  }
  if (iVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Audio::EWaveShaperType,1>)EVar4;
    }
  }
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)((longlong)this + 8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return (TEnum<Audio::EWaveShaperType,1>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Audio::EWaveShaperType,1>)(EWaveShaperType)in_RDX;
}

