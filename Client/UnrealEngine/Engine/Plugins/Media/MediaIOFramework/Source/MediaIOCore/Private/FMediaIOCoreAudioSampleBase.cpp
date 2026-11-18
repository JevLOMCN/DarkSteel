// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 17

// FMediaIOCoreAudioSampleBase @ 14d789ee0

FMediaIOCoreAudioSampleBase * __thiscall
FMediaIOCoreAudioSampleBase::FMediaIOCoreAudioSampleBase(FMediaIOCoreAudioSampleBase *this)

{
  this->_padding_ = (longlong)&_vftable__for__IMediaAudioSample__;
  this->_padding_ = (longlong)&_vftable__for__IMediaPoolable__;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  (this->Duration).Ticks = 0;
  this->Channels = 0;
  this->SampleRate = 0;
  (this->Time).Ticks = -0x8000000000000000;
  (this->Timecode).bIsSet = false;
  return this;
}

// FreeSample @ 14d7a7db0

void __thiscall FMediaIOCoreAudioSampleBase::FreeSample(FMediaIOCoreAudioSampleBase *this)

{
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
  }
  return;
}

// GetBuffer @ 14d7a9330

void * __thiscall FMediaIOCoreAudioSampleBase::GetBuffer(FMediaIOCoreAudioSampleBase *this)

{
  return (this->Buffer).AllocatorInstance.Data;
}

// GetChannels @ 14d7a96c0

uint __thiscall FMediaIOCoreAudioSampleBase::GetChannels(FMediaIOCoreAudioSampleBase *this)

{
  return this->Channels;
}

// GetDuration @ 14d7aa450

FTimespan __thiscall FMediaIOCoreAudioSampleBase::GetDuration(FMediaIOCoreAudioSampleBase *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetFormat @ 14d7aa830

EMediaAudioSampleFormat __thiscall
FMediaIOCoreAudioSampleBase::GetFormat(FMediaIOCoreAudioSampleBase *this)

{
  return Int32;
}

// GetFrames @ 14d7aa9d0

uint __thiscall FMediaIOCoreAudioSampleBase::GetFrames(FMediaIOCoreAudioSampleBase *this)

{
  return (uint)(this->Buffer).ArrayNum / this->Channels;
}

// GetSampleRate @ 14d7ad830

uint __thiscall FMediaIOCoreAudioSampleBase::GetSampleRate(FMediaIOCoreAudioSampleBase *this)

{
  return this->SampleRate;
}

// GetTime @ 14d7ae630

FMediaTimeStamp * __thiscall
FMediaIOCoreAudioSampleBase::GetTime
          (FMediaIOCoreAudioSampleBase *this,FMediaTimeStamp *__return_storage_ptr__)

{
  (__return_storage_ptr__->Time).Ticks = (this->Time).Ticks;
  __return_storage_ptr__->SequenceIndex = 0;
  __return_storage_ptr__->LoopIndex = 0;
  return __return_storage_ptr__;
}

// GetTimecode @ 14d7ae6b0

TOptional<FTimecode> * __thiscall
FMediaIOCoreAudioSampleBase::GetTimecode
          (FMediaIOCoreAudioSampleBase *this,TOptional<FTimecode> *__return_storage_ptr__)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined3 uVar5;
  
  __return_storage_ptr__->bIsSet = false;
  bVar1 = (this->Timecode).bIsSet;
  __return_storage_ptr__->bIsSet = bVar1;
  if (bVar1 != false) {
    iVar2 = (this->Timecode).TypedValue.Minutes;
    iVar3 = (this->Timecode).TypedValue.Seconds;
    iVar4 = (this->Timecode).TypedValue.Frames;
    (__return_storage_ptr__->TypedValue).Hours = (this->Timecode).TypedValue.Hours;
    (__return_storage_ptr__->TypedValue).Minutes = iVar2;
    (__return_storage_ptr__->TypedValue).Seconds = iVar3;
    (__return_storage_ptr__->TypedValue).Frames = iVar4;
    bVar1 = (this->Timecode).TypedValue.bDropFrameFormat;
    uVar5 = *(undefined3 *)&(this->Timecode).TypedValue.field_0x15;
    (__return_storage_ptr__->TypedValue).Subframe = (this->Timecode).TypedValue.Subframe;
    (__return_storage_ptr__->TypedValue).bDropFrameFormat = bVar1;
    *(undefined3 *)&(__return_storage_ptr__->TypedValue).field_0x15 = uVar5;
  }
  return __return_storage_ptr__;
}

// Initialize @ 14d7af1f0

bool __thiscall
FMediaIOCoreAudioSampleBase::Initialize
          (FMediaIOCoreAudioSampleBase *this,int *param_1,uint param_2,uint param_3,uint param_4,
          FTimespan param_5,TOptional<FTimecode> *param_6)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  
  (**(code **)(this->_padding_ + 0x50))();
  bVar3 = SetProperties(this,param_2,param_3,param_4,param_5,param_6);
  if ((bVar3) && (param_1 != (int *)0x0)) {
    pTVar1 = &this->Buffer;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
    piVar2 = &(this->Buffer).ArrayMax;
    (this->Buffer).ArrayNum = 0;
    if ((this->Buffer).ArrayMax < (int)param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_2,&pTVar1->AllocatorInstance,0,piVar2);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_2,&pTVar1->AllocatorInstance,&(this->Buffer).ArrayNum,piVar2);
    if (param_2 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1,
             (longlong)(int)param_2 << 2);
    }
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

// Initialize @ 14d7af2f0

bool __thiscall
FMediaIOCoreAudioSampleBase::Initialize
          (FMediaIOCoreAudioSampleBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          uint param_2,uint param_3,FTimespan param_4,TOptional<FTimecode> *param_5)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined8 local_28 [2];
  
  (**(code **)(this->_padding_ + 0x50))();
  bVar6 = SetProperties(this,param_1->ArrayNum,param_2,param_3,param_4,param_5);
  if (!bVar6) {
    pFVar4 = (param_1->AllocatorInstance).Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    return false;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = param_1->ArrayNum;
  iVar3 = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  if (iVar2 == 0) {
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    bVar6 = false;
  }
  else {
    pTVar1 = &this->Buffer;
    if (pTVar1 == (TArray<int,TSizedDefaultAllocator<32>_> *)local_28) {
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
    }
    else {
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (pFVar5 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar5);
      }
      (pTVar1->AllocatorInstance).Data = pFVar4;
      (this->Buffer).ArrayNum = iVar2;
      (this->Buffer).ArrayMax = iVar3;
    }
    bVar6 = true;
  }
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return bVar6;
}

// RequestBuffer @ 14d7babe0

void * __thiscall
FMediaIOCoreAudioSampleBase::RequestBuffer(FMediaIOCoreAudioSampleBase *this,uint param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  
  pTVar1 = &this->Buffer;
  (**(code **)(this->_padding_ + 0x50))();
  iVar5 = (this->Buffer).ArrayNum;
  piVar2 = &(this->Buffer).ArrayNum;
  if (iVar5 < (int)param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1 - iVar5,&pTVar1->AllocatorInstance,piVar2,&(this->Buffer).ArrayMax);
  }
  else {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if ((int)param_1 < iVar5) {
      uVar7 = iVar5 - param_1;
      if ((int)(uVar7 | param_1) < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pvVar6 = (void *)(*pcVar3)();
          return pvVar6;
        }
      }
      if (uVar7 != 0) {
        _Dst = (pTVar1->AllocatorInstance).Data + (longlong)(int)param_1 * 4;
        iVar5 = (*piVar2 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar7 * 4,(longlong)iVar5 << 2);
        }
        *piVar2 = *piVar2 - uVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,*piVar2,&(this->Buffer).ArrayMax);
      }
    }
  }
  return (pTVar1->AllocatorInstance).Data;
}

// SetBuffer @ 14d7bb950

bool __thiscall
FMediaIOCoreAudioSampleBase::SetBuffer(FMediaIOCoreAudioSampleBase *this,int *param_1,uint param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
    return false;
  }
  pTVar1 = &this->Buffer;
  if (-1 < (int)param_2) {
    piVar2 = &(this->Buffer).ArrayMax;
    piVar3 = &(this->Buffer).ArrayNum;
    *piVar3 = 0;
    if ((this->Buffer).ArrayMax < (int)param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_2,&pTVar1->AllocatorInstance,0,piVar2);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_2,&pTVar1->AllocatorInstance,piVar3,piVar2);
    if (param_2 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 4,param_1,
             (longlong)(int)param_2 << 2);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
}

// SetBuffer @ 14d7bba20

bool __thiscall
FMediaIOCoreAudioSampleBase::SetBuffer
          (FMediaIOCoreAudioSampleBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  
  if (param_1->ArrayNum == 0) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    return false;
  }
  pTVar1 = &this->Buffer;
  if (pTVar1 != param_1) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Buffer).ArrayNum = param_1->ArrayNum;
    (this->Buffer).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return true;
}

// SetProperties @ 14d7bcdb0

bool __thiscall
FMediaIOCoreAudioSampleBase::SetProperties
          (FMediaIOCoreAudioSampleBase *this,uint param_1,uint param_2,uint param_3,
          FTimespan param_4,TOptional<FTimecode> *param_5)

{
  TOptional<FTimecode> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *_Dst;
  code *pcVar4;
  int iVar5;
  undefined3 uVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  if (param_2 * param_3 == 0) {
    return false;
  }
  (this->Time).Ticks = param_4.Ticks;
  pTVar1 = &this->Timecode;
  if (param_5 != pTVar1) {
    if (param_5->bIsSet == false) {
      if ((this->Timecode).bIsSet != false) {
        (this->Timecode).bIsSet = false;
      }
    }
    else {
      iVar10 = (param_5->TypedValue).Minutes;
      iVar9 = (param_5->TypedValue).Seconds;
      iVar5 = (param_5->TypedValue).Frames;
      (pTVar1->TypedValue).Hours = (param_5->TypedValue).Hours;
      (pTVar1->TypedValue).Minutes = iVar10;
      (this->Timecode).TypedValue.Seconds = iVar9;
      (this->Timecode).TypedValue.Frames = iVar5;
      bVar7 = (param_5->TypedValue).bDropFrameFormat;
      uVar6 = *(undefined3 *)&(param_5->TypedValue).field_0x15;
      (this->Timecode).TypedValue.Subframe = (param_5->TypedValue).Subframe;
      (this->Timecode).TypedValue.bDropFrameFormat = bVar7;
      *(undefined3 *)&(this->Timecode).TypedValue.field_0x15 = uVar6;
      (this->Timecode).bIsSet = true;
    }
  }
  pTVar2 = &this->Buffer;
  this->Channels = param_2;
  piVar3 = &(this->Buffer).ArrayNum;
  this->SampleRate = param_3;
  (this->Duration).Ticks = ((ulonglong)param_1 * 10000000) / (ulonglong)(param_2 * param_3);
  iVar10 = *piVar3;
  if ((int)param_1 <= iVar10) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
    if ((int)param_1 < iVar10) {
      uVar11 = iVar10 - param_1;
      if (((int)(uVar11 | param_1) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        uVar8 = (*pcVar4)();
        return (bool)uVar8;
      }
      if (uVar11 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)param_1 * 4;
        iVar10 = (*piVar3 - uVar11) - param_1;
        if (iVar10 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar11 * 4,(longlong)iVar10 << 2);
        }
        *piVar3 = *piVar3 - uVar11;
      }
    }
    return true;
  }
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,param_1 - iVar10,&pTVar2->AllocatorInstance,piVar3,&(this->Buffer).ArrayMax
                    );
  memset((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4,0,
         (longlong)(int)(param_1 - iVar10) << 2);
  return true;
}

// ShutdownPoolable @ 14d7bd560

void __thiscall FMediaIOCoreAudioSampleBase::ShutdownPoolable(FMediaIOCoreAudioSampleBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d7bd568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].Timecode.bIsSet + 0x50))(&this[-1].Timecode.bIsSet);
  return;
}

