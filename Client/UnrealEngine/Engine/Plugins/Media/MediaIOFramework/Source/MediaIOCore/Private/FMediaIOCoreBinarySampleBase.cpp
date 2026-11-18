// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 14

// FMediaIOCoreBinarySampleBase @ 14d789f30

FMediaIOCoreBinarySampleBase * __thiscall
FMediaIOCoreBinarySampleBase::FMediaIOCoreBinarySampleBase(FMediaIOCoreBinarySampleBase *this)

{
  this->_padding_ = (longlong)&_vftable__for__IMediaBinarySample__;
  this->_padding_ = (longlong)&_vftable__for__IMediaPoolable__;
  (this->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Buffer).ArrayNum = 0;
  (this->Buffer).ArrayMax = 0;
  (this->Duration).Ticks = 0;
  (this->Time).Ticks = 0;
  (this->Timecode).bIsSet = false;
  return this;
}

// FreeSample @ 14d7a7df0

void __thiscall FMediaIOCoreBinarySampleBase::FreeSample(FMediaIOCoreBinarySampleBase *this)

{
  (this->Buffer).ArrayNum = 0;
  if ((this->Buffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Buffer).AllocatorInstance,0,&(this->Buffer).ArrayMax);
  }
  return;
}

// GetData @ 14d7a9d10

void * __thiscall FMediaIOCoreBinarySampleBase::GetData(FMediaIOCoreBinarySampleBase *this)

{
  return (this->Buffer).AllocatorInstance.Data;
}

// GetDuration @ 14d7aa470

FTimespan __thiscall FMediaIOCoreBinarySampleBase::GetDuration(FMediaIOCoreBinarySampleBase *this)

{
  long64 *in_RDX;
  
  *in_RDX = (this->Duration).Ticks;
  return (FTimespan)(long64)in_RDX;
}

// GetSize @ 14d7adb40

uint __thiscall FMediaIOCoreBinarySampleBase::GetSize(FMediaIOCoreBinarySampleBase *this)

{
  return (this->Buffer).ArrayNum;
}

// GetTime @ 14d7ae650

FMediaTimeStamp * __thiscall
FMediaIOCoreBinarySampleBase::GetTime
          (FMediaIOCoreBinarySampleBase *this,FMediaTimeStamp *__return_storage_ptr__)

{
  (__return_storage_ptr__->Time).Ticks = (this->Time).Ticks;
  __return_storage_ptr__->SequenceIndex = 0;
  __return_storage_ptr__->LoopIndex = 0;
  return __return_storage_ptr__;
}

// GetTimecode @ 14d7ae6e0

TOptional<FTimecode> * __thiscall
FMediaIOCoreBinarySampleBase::GetTimecode
          (FMediaIOCoreBinarySampleBase *this,TOptional<FTimecode> *__return_storage_ptr__)

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

// Initialize @ 14d7af400

bool __thiscall
FMediaIOCoreBinarySampleBase::Initialize
          (FMediaIOCoreBinarySampleBase *this,uchar *param_1,uint param_2,FTimespan param_3,
          FFrameRate *param_4,TOptional<FTimecode> *param_5)

{
  TOptional<FTimecode> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined3 uVar6;
  bool bVar7;
  int iVar8;
  
  (**(code **)(this->_padding_ + 0x40))();
  (this->Time).Ticks = param_3.Ticks;
  (this->Duration).Ticks =
       (longlong)
       (((double)param_4->Denominator / (double)param_4->Numerator) * __real_416312d000000000);
  pTVar1 = &this->Timecode;
  if (param_5 != pTVar1) {
    if (param_5->bIsSet == false) {
      if ((this->Timecode).bIsSet != false) {
        (this->Timecode).bIsSet = false;
      }
    }
    else {
      iVar8 = (param_5->TypedValue).Minutes;
      iVar4 = (param_5->TypedValue).Seconds;
      iVar5 = (param_5->TypedValue).Frames;
      (pTVar1->TypedValue).Hours = (param_5->TypedValue).Hours;
      (pTVar1->TypedValue).Minutes = iVar8;
      (this->Timecode).TypedValue.Seconds = iVar4;
      (this->Timecode).TypedValue.Frames = iVar5;
      bVar7 = (param_5->TypedValue).bDropFrameFormat;
      uVar6 = *(undefined3 *)&(param_5->TypedValue).field_0x15;
      (this->Timecode).TypedValue.Subframe = (param_5->TypedValue).Subframe;
      (this->Timecode).TypedValue.bDropFrameFormat = bVar7;
      *(undefined3 *)&(this->Timecode).TypedValue.field_0x15 = uVar6;
      (this->Timecode).bIsSet = true;
    }
  }
  if (param_1 == (uchar *)0x0) {
    bVar7 = false;
  }
  else {
    pTVar2 = &this->Buffer;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
    }
    piVar3 = &(this->Buffer).ArrayMax;
    (this->Buffer).ArrayNum = 0;
    if ((this->Buffer).ArrayMax < (int)param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_2,&pTVar2->AllocatorInstance,0,piVar3);
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_2,&pTVar2->AllocatorInstance,&(this->Buffer).ArrayNum,piVar3);
    if (param_2 != 0) {
      memcpy((pTVar2->AllocatorInstance).Data + iVar8,param_1,(longlong)(int)param_2);
    }
    bVar7 = true;
  }
  return bVar7;
}

// Initialize @ 14d7af530

bool __thiscall
FMediaIOCoreBinarySampleBase::Initialize
          (FMediaIOCoreBinarySampleBase *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1,FTimespan param_2,
          FFrameRate *param_3,TOptional<FTimecode> *param_4)

{
  TOptional<FTimecode> *pTVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int iVar5;
  undefined3 uVar6;
  bool bVar7;
  int iVar8;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  (**(code **)(this->_padding_ + 0x40))();
  (this->Time).Ticks = param_2.Ticks;
  (this->Duration).Ticks =
       (longlong)
       (((double)param_3->Denominator / (double)param_3->Numerator) * __real_416312d000000000);
  pTVar1 = &this->Timecode;
  if (param_4 != pTVar1) {
    if (param_4->bIsSet == false) {
      if ((this->Timecode).bIsSet != false) {
        (this->Timecode).bIsSet = false;
      }
    }
    else {
      iVar8 = (param_4->TypedValue).Minutes;
      iVar4 = (param_4->TypedValue).Seconds;
      iVar5 = (param_4->TypedValue).Frames;
      (pTVar1->TypedValue).Hours = (param_4->TypedValue).Hours;
      (pTVar1->TypedValue).Minutes = iVar8;
      (this->Timecode).TypedValue.Seconds = iVar4;
      (this->Timecode).TypedValue.Frames = iVar5;
      bVar7 = (param_4->TypedValue).bDropFrameFormat;
      uVar6 = *(undefined3 *)&(param_4->TypedValue).field_0x15;
      (this->Timecode).TypedValue.Subframe = (param_4->TypedValue).Subframe;
      (this->Timecode).TypedValue.bDropFrameFormat = bVar7;
      *(undefined3 *)&(this->Timecode).TypedValue.field_0x15 = uVar6;
      (this->Timecode).bIsSet = true;
    }
  }
  iVar8 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = CONCAT44(local_10._4_4_,iVar8);
  if (iVar8 == 0) {
    local_10 = 0;
    local_10._0_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar8,0,&local_18,iVar8,(int *)((longlong)&local_10 + 4));
    memcpy(local_18.Data,pFVar3,(longlong)iVar8);
  }
  if ((int)local_10 == 0) {
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
    bVar7 = false;
  }
  else {
    pTVar2 = &this->Buffer;
    if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_18) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      iVar8 = (int)local_10;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
        iVar8 = (int)local_10;
      }
      iVar4 = local_10._4_4_;
      (pTVar2->AllocatorInstance).Data = local_18.Data;
      local_18.Data = (FScriptContainerElement *)0x0;
      local_10 = 0;
      (this->Buffer).ArrayNum = iVar8;
      (this->Buffer).ArrayMax = iVar4;
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
    bVar7 = true;
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return bVar7;
}

// RequestBuffer @ 14d7bad00

void * __thiscall
FMediaIOCoreBinarySampleBase::RequestBuffer(FMediaIOCoreBinarySampleBase *this,uint param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  FScriptContainerElement *_Dst;
  uint uVar7;
  
  pTVar1 = &this->Buffer;
  (**(code **)(this->_padding_ + 0x40))();
  iVar5 = (this->Buffer).ArrayNum;
  piVar2 = &(this->Buffer).ArrayNum;
  if (iVar5 < (int)param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1 - iVar5,&pTVar1->AllocatorInstance,piVar2,&(this->Buffer).ArrayMax);
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
        _Dst = (pTVar1->AllocatorInstance).Data + (int)param_1;
        iVar5 = (*piVar2 - uVar7) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (int)uVar7,(longlong)iVar5);
        }
        *piVar2 = *piVar2 - uVar7;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,&pTVar1->AllocatorInstance,*piVar2,&(this->Buffer).ArrayMax);
      }
    }
  }
  return (pTVar1->AllocatorInstance).Data;
}

// SetBuffer @ 14d7bbaa0

bool __thiscall
FMediaIOCoreBinarySampleBase::SetBuffer
          (FMediaIOCoreBinarySampleBase *this,uchar *param_1,uint param_2)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == (uchar *)0x0) {
    return false;
  }
  pTVar1 = &this->Buffer;
  if (-1 < (int)param_2) {
    piVar2 = &(this->Buffer).ArrayMax;
    piVar3 = &(this->Buffer).ArrayNum;
    *piVar3 = 0;
    if ((this->Buffer).ArrayMax < (int)param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,param_2,&pTVar1->AllocatorInstance,0,piVar2);
    }
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,param_2,&pTVar1->AllocatorInstance,piVar3,piVar2);
    if (param_2 != 0) {
      memcpy((pTVar1->AllocatorInstance).Data + iVar4,param_1,(longlong)(int)param_2);
    }
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)param_2);
}

// SetBuffer @ 14d7bbb70

bool __thiscall
FMediaIOCoreBinarySampleBase::SetBuffer
          (FMediaIOCoreBinarySampleBase *this,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
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

// SetProperties @ 14d7bcf40

bool __thiscall
FMediaIOCoreBinarySampleBase::SetProperties
          (FMediaIOCoreBinarySampleBase *this,FTimespan param_1,FFrameRate *param_2,
          TOptional<FTimecode> *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined3 uVar5;
  TOptional<FTimecode> *pTVar6;
  
  (this->Time).Ticks = param_1.Ticks;
  (this->Duration).Ticks =
       (longlong)
       (((double)param_2->Denominator / (double)param_2->Numerator) * __real_416312d000000000);
  pTVar6 = &this->Timecode;
  if (param_3 != pTVar6) {
    if (param_3->bIsSet == false) {
      if ((this->Timecode).bIsSet != false) {
        (this->Timecode).bIsSet = false;
        return true;
      }
    }
    else {
      iVar1 = (param_3->TypedValue).Minutes;
      iVar2 = (param_3->TypedValue).Seconds;
      iVar3 = (param_3->TypedValue).Frames;
      (pTVar6->TypedValue).Hours = (param_3->TypedValue).Hours;
      (pTVar6->TypedValue).Minutes = iVar1;
      (this->Timecode).TypedValue.Seconds = iVar2;
      (this->Timecode).TypedValue.Frames = iVar3;
      bVar4 = (param_3->TypedValue).bDropFrameFormat;
      uVar5 = *(undefined3 *)&(param_3->TypedValue).field_0x15;
      (this->Timecode).TypedValue.Subframe = (param_3->TypedValue).Subframe;
      (this->Timecode).TypedValue.bDropFrameFormat = bVar4;
      *(undefined3 *)&(this->Timecode).TypedValue.field_0x15 = uVar5;
      (this->Timecode).bIsSet = true;
    }
  }
  return true;
}

// ShutdownPoolable @ 14d7bd580

void __thiscall FMediaIOCoreBinarySampleBase::ShutdownPoolable(FMediaIOCoreBinarySampleBase *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014d7bd588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this[-1].Timecode.bIsSet + 0x40))(&this[-1].Timecode.bIsSet);
  return;
}

