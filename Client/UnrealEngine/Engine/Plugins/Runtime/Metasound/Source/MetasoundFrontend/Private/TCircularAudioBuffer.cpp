// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 19

// Pop @ 14adc9c70

float __thiscall Audio::TCircularAudioBuffer<float,16>::Pop(TCircularAudioBuffer<float,16> *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar7 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar7 = iVar7 + this->Capacity;
  }
  if (iVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
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
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  fVar8 = *(float *)((this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 4);
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return fVar8;
}

// Pop @ 14adc9d30

TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> * __thiscall
Audio::
TCircularAudioBuffer<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,16>::
Pop(TCircularAudioBuffer<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,16>
    *this,TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *pTVar7;
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
      pTVar7 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
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
      pTVar7 = (TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_> *)
               (*pcVar4)();
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

// Pop @ 14adc9e30

TEnum<Metasound::ESharedStateBehaviorType,1> __thiscall
Audio::TCircularAudioBuffer<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,16>::Pop
          (void *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ESharedStateBehaviorType EVar4;
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
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar4;
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
      return (TEnum<Metasound::ESharedStateBehaviorType,1>)EVar4;
    }
  }
  iVar6 = *(int *)((longlong)this + 0x14);
  *in_RDX = *(undefined4 *)(*(longlong *)this + (longlong)(int)uVar1 * 4);
  LOCK();
  *(uint *)((longlong)this + 0x14) = (iVar6 + 1U) % *(uint *)((longlong)this + 0x10);
  UNLOCK();
  return (TEnum<Metasound::ESharedStateBehaviorType,1>)(ESharedStateBehaviorType)in_RDX;
}

// Pop @ 14adc9f00

FAnalyzerAddress * __thiscall
Audio::TCircularAudioBuffer<Metasound::Frontend::FAnalyzerAddress,16>::Pop
          (TCircularAudioBuffer<Metasound::Frontend::FAnalyzerAddress,16> *this,
          FAnalyzerAddress *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  FAnalyzerAddress *pFVar10;
  int iVar11;
  
  iVar1 = (this->ReadCounter).Counter;
  iVar2 = (this->WriteCounter).Counter;
  iVar11 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar11 = iVar11 + this->Capacity;
  }
  if (iVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FAnalyzerAddress *)(*pcVar5)();
      return pFVar10;
    }
  }
  uVar3 = (this->ReadCounter).Counter;
  uVar9 = 0;
  if ((int)uVar3 < (this->InternalBuffer).ArrayNum) {
    uVar9 = ~uVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FAnalyzerAddress *)(*pcVar5)();
      return pFVar10;
    }
  }
  pFVar4 = (this->InternalBuffer).AllocatorInstance.Data;
  __return_storage_ptr__->_padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  __return_storage_ptr__->InstanceID = *(ulong64 *)(pFVar4 + (longlong)(int)uVar3 * 0x58 + 8);
  uVar6 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar3 * 0x58 + 0x10);
  uVar7 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar3 * 0x58 + 0x18);
  (__return_storage_ptr__->NodeID).A = (int)uVar6;
  (__return_storage_ptr__->NodeID).B = (int)((ulonglong)uVar6 >> 0x20);
  (__return_storage_ptr__->NodeID).C = (int)uVar7;
  (__return_storage_ptr__->NodeID).D = (int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->OutputName = *(FName *)(pFVar4 + (longlong)(int)uVar3 * 0x58 + 0x20);
  __return_storage_ptr__->DataType = *(FName *)(pFVar4 + (longlong)(int)uVar3 * 0x58 + 0x28);
  __return_storage_ptr__->AnalyzerName = *(FName *)(pFVar4 + (longlong)(int)uVar3 * 0x58 + 0x30);
  uVar6 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar3 * 0x58 + 0x38);
  uVar7 = *(undefined8 *)(pFVar4 + (longlong)(int)uVar3 * 0x58 + 0x40);
  (__return_storage_ptr__->AnalyzerInstanceID).A = (int)uVar6;
  (__return_storage_ptr__->AnalyzerInstanceID).B = (int)((ulonglong)uVar6 >> 0x20);
  (__return_storage_ptr__->AnalyzerInstanceID).C = (int)uVar7;
  (__return_storage_ptr__->AnalyzerInstanceID).D = (int)((ulonglong)uVar7 >> 0x20);
  __return_storage_ptr__->AnalyzerMemberName =
       *(FName *)(pFVar4 + (longlong)(int)uVar3 * 0x58 + 0x48);
  __return_storage_ptr__->UseDataTransmissionCenter =
       (bool)pFVar4[(longlong)(int)uVar3 * 0x58 + 0x50];
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14adca020

FAudioBuffer * __thiscall
Audio::TCircularAudioBuffer<Metasound::FAudioBuffer,16>::Pop
          (TCircularAudioBuffer<Metasound::FAudioBuffer,16> *this,
          FAudioBuffer *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FAudioBuffer *pFVar9;
  int iVar10;
  
  iVar2 = (this->ReadCounter).Counter;
  iVar3 = (this->WriteCounter).Counter;
  iVar10 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    iVar10 = iVar10 + this->Capacity;
  }
  if (iVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FAudioBuffer *)(*pcVar6)();
      return pFVar9;
    }
  }
  uVar4 = (this->ReadCounter).Counter;
  uVar8 = 0;
  if ((int)uVar4 < (this->InternalBuffer).ArrayNum) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FAudioBuffer *)(*pcVar6)();
      return pFVar9;
    }
  }
  pFVar5 = (this->InternalBuffer).AllocatorInstance.Data;
  (__return_storage_ptr__->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = pFVar5 + (longlong)(int)uVar4 * 0x18;
  (__return_storage_ptr__->Buffer).AllocatorInstance.Data =
       *(FScriptContainerElement **)(pFVar5 + (longlong)(int)uVar4 * 0x18);
  *(undefined8 *)pFVar1 = 0;
  (__return_storage_ptr__->Buffer).ArrayNum = *(int *)(pFVar1 + 8);
  (__return_storage_ptr__->Buffer).ArrayMax = *(int *)(pFVar1 + 0xc);
  *(undefined8 *)(pFVar1 + 8) = 0;
  __return_storage_ptr__->InitialNum = *(int *)(pFVar1 + 0x10);
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14adca130

FTime __thiscall
Audio::TCircularAudioBuffer<Metasound::FTime,16>::Pop
          (TCircularAudioBuffer<Metasound::FTime,16> *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FTime FVar7;
  int iVar8;
  undefined8 *in_RDX;
  
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
      FVar7.Time = (double)(*pcVar4)();
      return (FTime)FVar7.Time;
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
      FVar7.Time = (double)(*pcVar4)();
      return (FTime)FVar7.Time;
    }
  }
  iVar1 = (this->ReadCounter).Counter;
  *in_RDX = *(undefined8 *)
             ((this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 8);
  LOCK();
  (this->ReadCounter).Counter = (iVar1 + 1U) % this->Capacity;
  UNLOCK();
  return (FTime)(double)in_RDX;
}

// Pop @ 14afb0560

int __thiscall Audio::TCircularAudioBuffer<int,16>::Pop(TCircularAudioBuffer<int,16> *this)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = (this->ReadCounter).Counter;
  iVar1 = (this->WriteCounter).Counter;
  iVar7 = iVar1 - iVar5;
  if (iVar1 < iVar5) {
    iVar7 = iVar7 + this->Capacity;
  }
  if (iVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar2 = (this->ReadCounter).Counter;
  uVar6 = 0;
  if ((int)uVar2 < (this->InternalBuffer).ArrayNum) {
    uVar6 = ~uVar2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = *(int *)((this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar2 * 4);
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return iVar5;
}

// Pop @ 14afb0620

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Audio::TCircularAudioBuffer<TArray<int,TSizedDefaultAllocator<32>_>,16>::Pop
          (TCircularAudioBuffer<TArray<int,TSizedDefaultAllocator<32>_>,16> *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
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
      pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
      pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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

// Pop @ 14afb0720

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
Audio::TCircularAudioBuffer<TArray<float,TSizedDefaultAllocator<32>_>,16>::Pop
          (TCircularAudioBuffer<TArray<float,TSizedDefaultAllocator<32>_>,16> *this,
          TArray<float,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar7;
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
      pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
      pTVar7 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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

// Pop @ 14afb0820

TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> * __thiscall
Audio::
TCircularAudioBuffer<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,16>::Pop
          (TCircularAudioBuffer<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,16>
           *this,TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *pTVar7;
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
      pTVar7 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
      pTVar7 = (TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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

// Pop @ 14afb0920

TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> * __thiscall
Audio::TCircularAudioBuffer<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,16>::Pop
          (TCircularAudioBuffer<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,16>
           *this,TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *__return_storage_ptr__
          )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *pTVar7;
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
      pTVar7 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
      pTVar7 = (TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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

// Pop @ 14afb0a20

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
Audio::TCircularAudioBuffer<TArray<FString,TSizedDefaultAllocator<32>_>,16>::Pop
          (TCircularAudioBuffer<TArray<FString,TSizedDefaultAllocator<32>_>,16> *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
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
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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

// Pop @ 14afb0b20

TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> * __thiscall
Audio::TCircularAudioBuffer<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,16>::Pop
          (TCircularAudioBuffer<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,16> *this,
          TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *pTVar7;
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
      pTVar7 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
      pTVar7 = (TArray<Metasound::FTime,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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

// Pop @ 14afb0c20

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
Audio::TCircularAudioBuffer<TArray<bool,TSizedDefaultAllocator<32>_>,16>::Pop
          (TCircularAudioBuffer<TArray<bool,TSizedDefaultAllocator<32>_>,16> *this,
          TArray<bool,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar7;
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
      pTVar7 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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
      pTVar7 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
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

// Pop @ 14afb0d20

FMetasoundParameterStorageWrapper * __thiscall
Audio::TCircularAudioBuffer<FMetasoundParameterStorageWrapper,16>::Pop
          (TCircularAudioBuffer<FMetasoundParameterStorageWrapper,16> *this,
          FMetasoundParameterStorageWrapper *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FMetasoundParameterStorageWrapper *pFVar8;
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
    pFVar8 = (FMetasoundParameterStorageWrapper *)(*pcVar5)();
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
    pFVar8 = (FMetasoundParameterStorageWrapper *)(*pcVar5)();
    return pFVar8;
  }
  pFVar10 = (this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
  (__return_storage_ptr__->ParameterStoragePtr).Object = *(FMetasoundParameterPackStorage **)pFVar10
  ;
  pTVar4 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
  (__return_storage_ptr__->ParameterStoragePtr).SharedReferenceCount.ReferenceController = pTVar4;
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

// Pop @ 14afb0e20

FSendAddress * __thiscall
Audio::TCircularAudioBuffer<Metasound::FSendAddress,16>::Pop
          (TCircularAudioBuffer<Metasound::FSendAddress,16> *this,
          FSendAddress *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FSendAddress *pFVar8;
  int iVar9;
  
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
      pFVar8 = (FSendAddress *)(*pcVar5)();
      return pFVar8;
    }
  }
  uVar3 = (this->ReadCounter).Counter;
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
      pFVar8 = (FSendAddress *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar4 = (this->InternalBuffer).AllocatorInstance.Data;
  __return_storage_ptr__->_padding_ = (longlong)&___7FSendAddress_Metasound__6B_;
  __return_storage_ptr__->ChannelName = *(FName *)(pFVar4 + (longlong)(int)uVar3 * 0x20 + 8);
  __return_storage_ptr__->DataType = *(FName *)(pFVar4 + (longlong)(int)uVar3 * 0x20 + 0x10);
  __return_storage_ptr__->InstanceID = *(ulong64 *)(pFVar4 + (longlong)(int)uVar3 * 0x20 + 0x18);
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14afb0f20

FString * __thiscall
Audio::TCircularAudioBuffer<FString,16>::Pop
          (TCircularAudioBuffer<FString,16> *this,FString *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
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
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
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
      pFVar7 = (FString *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar9 = (this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x10;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = *(FScriptContainerElement **)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  (__return_storage_ptr__->Data).ArrayNum = *(int *)(pFVar9 + 8);
  (__return_storage_ptr__->Data).ArrayMax = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14afb1020

FTrigger * __thiscall
Audio::TCircularAudioBuffer<Metasound::FTrigger,16>::Pop
          (TCircularAudioBuffer<Metasound::FTrigger,16> *this,FTrigger *__return_storage_ptr__)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FTrigger *pFVar7;
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
      pFVar7 = (FTrigger *)(*pcVar4)();
      return pFVar7;
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
      pFVar7 = (FTrigger *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar9 = (this->InternalBuffer).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x20;
  (__return_storage_ptr__->TriggeredFrames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->TriggeredFrames).AllocatorInstance.Data =
       *(FScriptContainerElement **)pFVar9;
  *(undefined8 *)pFVar9 = 0;
  (__return_storage_ptr__->TriggeredFrames).ArrayNum = *(int *)(pFVar9 + 8);
  (__return_storage_ptr__->TriggeredFrames).ArrayMax = *(int *)(pFVar9 + 0xc);
  *(undefined8 *)(pFVar9 + 8) = 0;
  __return_storage_ptr__->bHasAdvanced = (bool)pFVar9[0x10];
  __return_storage_ptr__->bTriggeredFromInit = (bool)pFVar9[0x11];
  __return_storage_ptr__->bHasTrigger = (bool)pFVar9[0x12];
  __return_storage_ptr__->NumFramesPerBlock = *(int *)(pFVar9 + 0x14);
  __return_storage_ptr__->SampleRate = *(int *)(pFVar9 + 0x18);
  __return_storage_ptr__->LastTriggerIndexInBlock = *(int *)(pFVar9 + 0x1c);
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return __return_storage_ptr__;
}

// Pop @ 14afb1140

bool __thiscall Audio::TCircularAudioBuffer<bool,16>::Pop(TCircularAudioBuffer<bool,16> *this)

{
  FScriptContainerElement FVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = (this->ReadCounter).Counter;
  iVar3 = (this->WriteCounter).Counter;
  iVar9 = iVar3 - iVar2;
  if (iVar3 < iVar2) {
    iVar9 = iVar9 + this->Capacity;
  }
  if (iVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                       ,0x44c,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  uVar4 = (this->ReadCounter).Counter;
  uVar8 = 0;
  if ((int)uVar4 < (this->InternalBuffer).ArrayNum) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  FVar1 = (this->InternalBuffer).AllocatorInstance.Data[(int)uVar4];
  LOCK();
  (this->ReadCounter).Counter = ((this->ReadCounter).Counter + 1U) % this->Capacity;
  UNLOCK();
  return (bool)FVar1;
}

