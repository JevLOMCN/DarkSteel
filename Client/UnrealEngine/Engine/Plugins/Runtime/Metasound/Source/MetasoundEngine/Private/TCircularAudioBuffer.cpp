// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundEngine
// Functions: 9

// Pop @ 14b3cb7d0

FWaveTable * __thiscall
Audio::TCircularAudioBuffer<WaveTable::FWaveTable,16>::Pop
          (TCircularAudioBuffer<WaveTable::FWaveTable,16> *this,FWaveTable *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FWaveTable *pFVar8;
  int iVar9;
  longlong lVar10;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar9 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar9 = iVar9 + this->Capacity;
  }
  if (iVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FWaveTable *)(*pcVar5)();
      return pFVar8;
    }
  }
  uVar3 = (this->ReadCounter).Counter;
  lVar10 = (longlong)(int)uVar3;
  uVar7 = 0;
  if ((int)uVar3 < (this->InternalBuffer).ArrayNum) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FWaveTable *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar4 = (this->InternalBuffer).AllocatorInstance.Data;
  (__return_storage_ptr__->Samples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Samples).AllocatorInstance.Data =
       *(FScriptContainerElement **)(pFVar4 + lVar10 * 0x18);
  *(undefined8 *)(pFVar4 + lVar10 * 0x18) = 0;
  (__return_storage_ptr__->Samples).ArrayNum = *(int *)(pFVar4 + lVar10 * 0x18 + 8);
  (__return_storage_ptr__->Samples).ArrayMax = *(int *)(pFVar4 + lVar10 * 0x18 + 0xc);
  *(undefined8 *)(pFVar4 + lVar10 * 0x18 + 8) = 0;
  __return_storage_ptr__->FinalValue = *(float *)(pFVar4 + lVar10 * 0x18 + 0x10);
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14b3cb8e0

TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> * __thiscall
Audio::TCircularAudioBuffer<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,16>::Pop
          (TCircularAudioBuffer<TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>,16>
           *this,TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar8 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar8 = iVar8 + this->Capacity;
  }
  if (iVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  uVar3 = (this->ReadCounter).Counter;
  uVar6 = 0;
  if ((int)uVar3 < (this->InternalBuffer).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<Metasound::FAudioBusAsset,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar9 = (this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = *(FScriptContainerElement **)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  __return_storage_ptr__->ArrayNum = *(int *)(pFVar9 + 8);
  __return_storage_ptr__->ArrayMax = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14b3cb9e0

TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> * __thiscall
Audio::TCircularAudioBuffer<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,16>::Pop
          (TCircularAudioBuffer<TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_>,16> *this,
          TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar8 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar8 = iVar8 + this->Capacity;
  }
  if (iVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  uVar3 = (this->ReadCounter).Counter;
  uVar6 = 0;
  if ((int)uVar3 < (this->InternalBuffer).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<Metasound::FWaveAsset,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar9 = (this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = *(FScriptContainerElement **)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  __return_storage_ptr__->ArrayNum = *(int *)(pFVar9 + 8);
  __return_storage_ptr__->ArrayMax = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14b3cbae0

TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> * __thiscall
Audio::TCircularAudioBuffer<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,16>::
Pop(TCircularAudioBuffer<TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_>,16>
    *this,TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
   )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar8 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar8 = iVar8 + this->Capacity;
  }
  if (iVar8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  uVar3 = (this->ReadCounter).Counter;
  uVar6 = 0;
  if ((int)uVar3 < (this->InternalBuffer).ArrayNum) {
    uVar6 = ~uVar3 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TArray<Metasound::FWaveTableBankAsset,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar7;
    }
  }
  pFVar9 = (this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->AllocatorInstance).Data = *(FScriptContainerElement **)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  __return_storage_ptr__->ArrayNum = *(int *)(pFVar9 + 8);
  __return_storage_ptr__->ArrayMax = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14b3cbbe0

TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1> __thiscall
Audio::
TCircularAudioBuffer<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::EInterpolationMode,1>,16>::
Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  EInterpolationMode EVar4;
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
      return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)EVar4;
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
      return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<WaveTable::FWaveTableSampler::EInterpolationMode,1>)(EInterpolationMode)in_RDX;
}

// Pop @ 14b3cbcb0

TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0> __thiscall
Audio::
TCircularAudioBuffer<Metasound::TEnum<enum_WaveTable::FWaveTableSampler::ESingleSampleMode,0>,16>::
Pop(void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ESingleSampleMode EVar4;
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
      return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)EVar4;
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
      return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<WaveTable::FWaveTableSampler::ESingleSampleMode,0>)(ESingleSampleMode)in_RDX;
}

// Pop @ 14b3cbd80

FAudioBusAsset * __thiscall
Audio::TCircularAudioBuffer<Metasound::FAudioBusAsset,16>::Pop
          (TCircularAudioBuffer<Metasound::FAudioBusAsset,16> *this,
          FAudioBusAsset *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FAudioBusAsset *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar9 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar9 = iVar9 + this->Capacity;
  }
  if ((iVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                         ,0x44c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FAudioBusAsset *)(*pcVar5)();
    return pFVar8;
  }
  uVar3 = (this->ReadCounter).Counter;
  uVar7 = 0;
  if ((int)uVar3 < (this->InternalBuffer).ArrayNum) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FAudioBusAsset *)(*pcVar5)();
    return pFVar8;
  }
  pFVar10 = (this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
  (__return_storage_ptr__->AudioBusProxy).Object = *(FAudioBusProxy **)pFVar10;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
  (__return_storage_ptr__->AudioBusProxy).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14b3cbe80

FWaveAsset * __thiscall
Audio::TCircularAudioBuffer<Metasound::FWaveAsset,16>::Pop
          (TCircularAudioBuffer<Metasound::FWaveAsset,16> *this,FWaveAsset *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FWaveAsset *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar9 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar9 = iVar9 + this->Capacity;
  }
  if ((iVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                         ,0x44c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FWaveAsset *)(*pcVar5)();
    return pFVar8;
  }
  uVar3 = (this->ReadCounter).Counter;
  uVar7 = 0;
  if ((int)uVar3 < (this->InternalBuffer).ArrayNum) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FWaveAsset *)(*pcVar5)();
    return pFVar8;
  }
  pFVar10 = (this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
  (__return_storage_ptr__->SoundWaveProxy).Object = *(FSoundWaveProxy **)pFVar10;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
  (__return_storage_ptr__->SoundWaveProxy).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14b3cbf80

FWaveTableBankAsset * __thiscall
Audio::TCircularAudioBuffer<Metasound::FWaveTableBankAsset,16>::Pop
          (TCircularAudioBuffer<Metasound::FWaveTableBankAsset,16> *this,
          FWaveTableBankAsset *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FWaveTableBankAsset *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar9 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar9 = iVar9 + this->Capacity;
  }
  if ((iVar9 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                         ,0x44c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FWaveTableBankAsset *)(*pcVar5)();
    return pFVar8;
  }
  uVar3 = (this->ReadCounter).Counter;
  uVar7 = 0;
  if ((int)uVar3 < (this->InternalBuffer).ArrayNum) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FWaveTableBankAsset *)(*pcVar5)();
    return pFVar8;
  }
  pFVar10 = (this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
  (__return_storage_ptr__->Proxy).Object = *(FWaveTableBankAssetProxy **)pFVar10;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
  (__return_storage_ptr__->Proxy).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

