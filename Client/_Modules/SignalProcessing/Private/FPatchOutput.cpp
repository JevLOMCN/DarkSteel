// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 10

// FPatchOutput @ 1444f18f0

FPatchOutput * __thiscall
Audio::FPatchOutput::FPatchOutput(FPatchOutput *this,int param_1,float param_2)

{
  int iVar1;
  
  (this->InternalBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FPatchOutput_Audio__6B_;
  (this->InternalBuffer).InternalBuffer.ArrayNum = 0;
  (this->InternalBuffer).InternalBuffer.ArrayMax = 0;
  (this->InternalBuffer).ReadCounter.Counter = 0;
  (this->InternalBuffer).WriteCounter.Counter = 0;
  TCircularAudioBuffer<float,16>::SetCapacity(&this->InternalBuffer,param_1);
  this->TargetGain = (TAtomic<float>)param_2;
  this->PreviousGain = param_2;
  (this->MixingBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MixingBuffer).ArrayNum = 0;
  (this->MixingBuffer).ArrayMax = 0;
  LOCK();
  UNLOCK();
  iVar1 = (int)PatchIDCounter + 1;
  PatchIDCounter = (TAtomic<int>)((int)PatchIDCounter + 1);
  this->PatchID = iVar1;
  this->NumAliveInputs = (atomic<int>)0x0;
  this->SamplesPushedEvent = (atomic<FEvent_*>)0x0;
  return this;
}

// FPatchOutput @ 1444f1970

FPatchOutput * __thiscall Audio::FPatchOutput::FPatchOutput(FPatchOutput *this)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar1 = &(this->InternalBuffer).InternalBuffer.ArrayNum;
  (this->InternalBuffer).InternalBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->InternalBuffer).InternalBuffer.ArrayMax;
  *piVar1 = 0;
  this->_padding_ = (longlong)&___7FPatchOutput_Audio__6B_;
  *piVar2 = 0;
  (this->InternalBuffer).ReadCounter.Counter = 0;
  (this->InternalBuffer).WriteCounter.Counter = 0;
  (this->InternalBuffer).Capacity = 1;
  LOCK();
  (this->InternalBuffer).ReadCounter.Counter = 0;
  UNLOCK();
  LOCK();
  (this->InternalBuffer).WriteCounter.Counter = 0;
  UNLOCK();
  iVar4 = *piVar2;
  *piVar1 = 0;
  if (iVar4 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)&this->InternalBuffer,0,piVar2);
  }
  uVar3 = (this->InternalBuffer).Capacity;
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar3,(ForAnyElementType *)&this->InternalBuffer,piVar1,piVar2);
  memset((this->InternalBuffer).InternalBuffer.AllocatorInstance.Data + (longlong)iVar4 * 4,0,
         (longlong)(int)uVar3 << 2);
  (this->MixingBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MixingBuffer).ArrayNum = 0;
  (this->MixingBuffer).ArrayMax = 0;
  this->TargetGain = (TAtomic<float>)0x0;
  this->PreviousGain = 0.0;
  this->NumAliveInputs = (atomic<int>)0x0;
  this->SamplesPushedEvent = (atomic<FEvent_*>)0x0;
  this->PatchID = -1;
  return this;
}

// ~FPatchOutput @ 1444f4310

void __thiscall Audio::FPatchOutput::~FPatchOutput(FPatchOutput *this)

{
  atomic<FEvent_*> aVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FPatchOutput_Audio__6B_;
  LOCK();
  aVar1 = this->SamplesPushedEvent;
  this->SamplesPushedEvent = (atomic<FEvent_*>)0x0;
  UNLOCK();
  if (aVar1 != (atomic<FEvent_*>)0x0) {
    FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)aVar1);
  }
  pFVar2 = (this->MixingBuffer).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->InternalBuffer).InternalBuffer.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// EmptyInternalBuffer @ 1444fa300

void __thiscall Audio::FPatchOutput::EmptyInternalBuffer(FPatchOutput *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (this->InternalBuffer).ReadCounter.Counter;
  iVar2 = (this->InternalBuffer).WriteCounter.Counter;
  uVar3 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    uVar3 = uVar3 + (this->InternalBuffer).Capacity;
  }
  TCircularAudioBuffer<float,16>::Pop(&this->InternalBuffer,uVar3);
  return;
}

// GetNumSamplesAvailable @ 144504590

int __thiscall Audio::FPatchOutput::GetNumSamplesAvailable(FPatchOutput *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (this->InternalBuffer).ReadCounter.Counter;
  iVar2 = (this->InternalBuffer).WriteCounter.Counter;
  iVar3 = iVar2 - iVar1;
  if (iVar1 <= iVar2) {
    return iVar3;
  }
  return (this->InternalBuffer).Capacity + iVar3;
}

// IsInputStale @ 144509100

bool __thiscall Audio::FPatchOutput::IsInputStale(FPatchOutput *this)

{
  return this->NumAliveInputs == (atomic<int>)0x0;
}

// MixInAudio @ 144509ca0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
Audio::FPatchOutput::MixInAudio(FPatchOutput *this,float *param_1,int param_2,bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  if (this->NumAliveInputs == (atomic<int>)0x0) {
    return -1;
  }
  TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(&this->MixingBuffer,param_2,No);
  if (param_3) {
    iVar5 = (this->InternalBuffer).ReadCounter.Counter;
    iVar1 = (this->InternalBuffer).WriteCounter.Counter;
    uVar6 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      uVar6 = uVar6 + (this->InternalBuffer).Capacity;
    }
    if ((uint)param_2 < uVar6) {
      if (((this->InternalBuffer).Capacity <= (uint)param_2) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumSamples < Capacity",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                             ,0x45b,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
      iVar5 = (this->InternalBuffer).WriteCounter.Counter - param_2;
      if (iVar5 < 0) {
        iVar5 = iVar5 + (this->InternalBuffer).Capacity;
      }
      LOCK();
      (this->InternalBuffer).ReadCounter.Counter = iVar5;
      UNLOCK();
      iVar5 = TCircularAudioBuffer<float,16>::Peek
                        (&this->InternalBuffer,(float *)(this->MixingBuffer).AllocatorInstance.Data,
                         param_2);
      goto LAB_144509d69;
    }
  }
  iVar5 = TCircularAudioBuffer<float,16>::Pop
                    (&this->InternalBuffer,(float *)(this->MixingBuffer).AllocatorInstance.Data,
                     param_2);
LAB_144509d69:
  pFVar2 = (this->MixingBuffer).AllocatorInstance.Data;
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  if ((iVar5 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  local_48._12_4_ = uStack_5c;
  local_48.ArrayNum = iVar5;
  local_58._12_4_ = uStack_6c;
  local_58.ArrayNum = iVar5;
  if (__real_322bcc77 <
      (float)((uint)((float)this->TargetGain - this->PreviousGain) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_38.DataPtr = param_1;
    local_38._8_8_ = local_58._8_8_;
    local_28.DataPtr = (float *)pFVar2;
    local_28._8_8_ = local_48._8_8_;
    ArrayMixIn(&local_28,&local_38,this->PreviousGain,(float)this->TargetGain);
    this->PreviousGain = (float)this->TargetGain;
  }
  else {
    local_58.DataPtr = param_1;
    local_48.DataPtr = (float *)pFVar2;
    ArrayMixIn(&local_48,&local_58,this->PreviousGain);
  }
  return iVar5;
}

// PopAudio @ 14450c850

int __thiscall
Audio::FPatchOutput::PopAudio(FPatchOutput *this,float *param_1,int param_2,bool param_3)

{
  uint *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uStack_2c;
  TArrayView<float,int> local_28;
  TArrayView<float,int> local_18;
  
  if (this->NumAliveInputs == (atomic<int>)0x0) {
    return -1;
  }
  if (param_3) {
    iVar5 = (this->InternalBuffer).ReadCounter.Counter;
    puVar1 = &(this->InternalBuffer).Capacity;
    iVar2 = (this->InternalBuffer).WriteCounter.Counter;
    uVar6 = iVar2 - iVar5;
    if (iVar2 < iVar5) {
      uVar6 = uVar6 + *puVar1;
    }
    if ((uint)param_2 < uVar6) {
      if (*puVar1 <= (uint)param_2) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSamples < Capacity",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                           ,0x45b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
      }
      iVar5 = (this->InternalBuffer).WriteCounter.Counter - param_2;
      if (iVar5 < 0) {
        iVar5 = iVar5 + *puVar1;
      }
      LOCK();
      (this->InternalBuffer).ReadCounter.Counter = iVar5;
      UNLOCK();
    }
  }
  iVar5 = TCircularAudioBuffer<float,16>::Pop(&this->InternalBuffer,param_1,param_2);
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = iVar5;
  if (__real_322bcc77 <
      (float)((uint)((float)this->TargetGain - this->PreviousGain) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    local_18.DataPtr = param_1;
    local_18._8_8_ = local_28._8_8_;
    ArrayFade(&local_18,this->PreviousGain,(float)this->TargetGain);
    this->PreviousGain = (float)this->TargetGain;
  }
  else {
    local_28.DataPtr = param_1;
    ArrayMultiplyByConstantInPlace(&local_28,this->PreviousGain);
  }
  return iVar5;
}

// PushAudioToInternalBuffer @ 1445145a0

int __thiscall
Audio::FPatchOutput::PushAudioToInternalBuffer(FPatchOutput *this,float *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  FScriptContainerElement *_Dst;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == (float *)0x0) {
    _Dst = (this->InternalBuffer).InternalBuffer.AllocatorInstance.Data;
    uVar1 = (this->InternalBuffer).WriteCounter.Counter;
    iVar3 = (this->InternalBuffer).ReadCounter.Counter;
    iVar5 = (this->InternalBuffer).WriteCounter.Counter;
    uVar4 = iVar5 - iVar3;
    if (iVar5 < iVar3) {
      uVar4 = uVar4 + (this->InternalBuffer).Capacity;
    }
    uVar2 = (this->InternalBuffer).Capacity;
    iVar3 = ~uVar4 + uVar2;
    if (param_2 < iVar3) {
      iVar3 = param_2;
    }
    iVar5 = uVar2 - uVar1;
    if (iVar3 < iVar5) {
      iVar5 = iVar3;
    }
    memset(_Dst + (ulonglong)uVar1 * 4,0,(longlong)iVar5 << 2);
    memset(_Dst,0,(longlong)(iVar3 - iVar5) << 2);
    LOCK();
    (this->InternalBuffer).WriteCounter.Counter = (iVar3 + uVar1) % (this->InternalBuffer).Capacity;
    UNLOCK();
  }
  else {
    iVar3 = TCircularAudioBuffer<float,16>::Push(&this->InternalBuffer,param_1,param_2);
  }
  if (this->SamplesPushedEvent != (atomic<FEvent_*>)0x0) {
    (**(code **)(*(longlong *)this->SamplesPushedEvent + 0x10))();
  }
  return iVar3;
}

// WaitUntilNumSamplesAvailable @ 144520a90

bool __thiscall
Audio::FPatchOutput::WaitUntilNumSamplesAvailable(FPatchOutput *this,int param_1,uint param_2)

{
  int iVar1;
  atomic<int> aVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  atomic<FEvent_*> aVar6;
  atomic<FEvent_*> aVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  LARGE_INTEGER local_res8;
  
  uVar9 = (ulonglong)param_2;
  if (this->NumAliveInputs != (atomic<int>)0x0) {
    iVar5 = (this->InternalBuffer).ReadCounter.Counter;
    iVar1 = (this->InternalBuffer).WriteCounter.Counter;
    iVar8 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar8 = iVar8 + (this->InternalBuffer).Capacity;
    }
    if (iVar8 < param_1) {
      if ((param_2 == 0) || ((this->InternalBuffer).Capacity < (uint)param_1)) {
        return false;
      }
      aVar6 = this->SamplesPushedEvent;
      if (this->SamplesPushedEvent == (atomic<FEvent_*>)0x0) {
        aVar6 = (atomic<FEvent_*>)FGenericPlatformProcess::GetSynchEventFromPool(false);
        LOCK();
        aVar7 = this->SamplesPushedEvent;
        bVar10 = aVar7 == (atomic<FEvent_*>)0x0;
        if (bVar10) {
          this->SamplesPushedEvent = aVar6;
          aVar7 = (atomic<FEvent_*>)0x0;
        }
        UNLOCK();
        if (!bVar10) {
          FGenericPlatformProcess::ReturnSynchEventToPool((FEvent *)aVar6);
          aVar6 = aVar7;
        }
      }
      dVar11 = FWindowsPlatformTime::Seconds();
      dVar4 = __real_4170000000000000;
      dVar3 = __real_408f400000000000;
      dVar12 = (double)uVar9 * __real_3f50624dd2f1a9fc;
      aVar2 = this->NumAliveInputs;
      while (aVar2 != (atomic<int>)0x0) {
        iVar5 = (this->InternalBuffer).ReadCounter.Counter;
        iVar1 = (this->InternalBuffer).WriteCounter.Counter;
        if (iVar1 < iVar5) {
          iVar5 = (this->InternalBuffer).Capacity - iVar5;
        }
        else {
          iVar5 = -iVar5;
        }
        if (param_1 <= iVar1 + iVar5) {
          return true;
        }
        (**(code **)(*(longlong *)aVar6 + 0x20))(aVar6,uVar9 & 0xffffffff,0);
        if ((int)uVar9 != -1) {
          QueryPerformanceCounter(&local_res8);
          dVar13 = ((dVar11 + dVar12) -
                   ((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4)) *
                   dVar3;
          if (dVar13 <= 0.0) {
            if (this->NumAliveInputs == (atomic<int>)0x0) {
              return true;
            }
            iVar5 = (this->InternalBuffer).ReadCounter.Counter;
            iVar1 = (this->InternalBuffer).WriteCounter.Counter;
            iVar8 = iVar1 - iVar5;
            if (iVar1 < iVar5) {
              iVar8 = iVar8 + (this->InternalBuffer).Capacity;
            }
            if (param_1 <= iVar8) {
              return true;
            }
            return false;
          }
          uVar9 = (ulonglong)dVar13;
        }
        aVar2 = this->NumAliveInputs;
      }
    }
  }
  return true;
}

