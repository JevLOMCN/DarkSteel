// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 13

// FPatchInput @ 1444f1840

FPatchInput * __thiscall Audio::FPatchInput::FPatchInput(FPatchInput *this,FPatchInput *param_1)

{
  int iVar1;
  
  (this->OutputHandle).Object = (param_1->OutputHandle).Object;
  (this->OutputHandle).SharedReferenceCount.ReferenceController =
       (param_1->OutputHandle).SharedReferenceCount.ReferenceController;
  iVar1 = param_1->PushCallsCounter;
  (param_1->OutputHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->OutputHandle).Object = (FPatchOutput *)0x0;
  this->PushCallsCounter = iVar1;
  param_1->PushCallsCounter = 0;
  return this;
}

// FPatchInput @ 1444f1870

FPatchInput * __thiscall Audio::FPatchInput::FPatchInput(FPatchInput *this,FPatchInput *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPatchOutput *pFVar3;
  
  (this->OutputHandle).Object = (param_1->OutputHandle).Object;
  pTVar2 = (param_1->OutputHandle).SharedReferenceCount.ReferenceController;
  (this->OutputHandle).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = (this->OutputHandle).Object;
  this->PushCallsCounter = 0;
  if (pFVar3 != (FPatchOutput *)0x0) {
    LOCK();
    paVar1 = &pFVar3->NumAliveInputs;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// FPatchInput @ 1444f18b0

FPatchInput * __thiscall
Audio::FPatchInput::FPatchInput(FPatchInput *this,TSharedPtr<Audio::FPatchOutput,1> *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPatchOutput *pFVar3;
  
  (this->OutputHandle).Object = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  (this->OutputHandle).SharedReferenceCount.ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar3 = (this->OutputHandle).Object;
  this->PushCallsCounter = 0;
  if (pFVar3 != (FPatchOutput *)0x0) {
    LOCK();
    paVar1 = &pFVar3->NumAliveInputs;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  return this;
}

// ~FPatchInput @ 1444f4230

void __thiscall Audio::FPatchInput::~FPatchInput(FPatchInput *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FPatchOutput *pFVar3;
  atomic<FEvent_*> aVar4;
  code *pcVar5;
  bool bVar6;
  FSharedReferencer<1> *this_00;
  FPatchOutput *local_18;
  FSharedReferencer<1> FStack_10;
  
  pFVar3 = (this->OutputHandle).Object;
  if (pFVar3 == (FPatchOutput *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->OutputHandle).SharedReferenceCount.ReferenceController);
    return;
  }
  LOCK();
  paVar1 = &pFVar3->NumAliveInputs;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    if ((this->OutputHandle).Object == (FPatchOutput *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    aVar4 = ((this->OutputHandle).Object)->SamplesPushedEvent;
    if (aVar4 != (atomic<FEvent_*>)0x0) {
      (**(code **)(*(longlong *)aVar4 + 0x10))();
    }
  }
  local_18 = (FPatchOutput *)0x0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != (FPatchInput *)&local_18) {
    (this->OutputHandle).Object = (FPatchOutput *)0x0;
    this_00 = &(this->OutputHandle).SharedReferenceCount;
    SharedPointerInternals::FSharedReferencer<1>::operator=(this_00,&FStack_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (this_00->ReferenceController);
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OutputHandle).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 1444f4ab0

FPatchInput * __thiscall Audio::FPatchInput::operator=(FPatchInput *this,FPatchInput *param_1)

{
  undefined8 uVar1;
  int iVar2;
  FPatchOutput *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FPatchInput local_28;
  
  pFVar3 = (param_1->OutputHandle).Object;
  pTVar4 = (param_1->OutputHandle).SharedReferenceCount.ReferenceController;
  (param_1->OutputHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->OutputHandle).Object = (FPatchOutput *)0x0;
  iVar2 = param_1->PushCallsCounter;
  param_1->PushCallsCounter = 0;
  local_28.OutputHandle.Object = (this->OutputHandle).Object;
  local_28.OutputHandle.SharedReferenceCount.ReferenceController =
       (this->OutputHandle).SharedReferenceCount.ReferenceController;
  uVar1._0_4_ = this->PushCallsCounter;
  uVar1._4_4_ = *(undefined4 *)&this->field_0x14;
  (this->OutputHandle).Object = pFVar3;
  (this->OutputHandle).SharedReferenceCount.ReferenceController = pTVar4;
  this->PushCallsCounter = iVar2;
  *(undefined4 *)&this->field_0x14 = local_28._20_4_;
  local_28._16_8_ = uVar1;
  ~FPatchInput(&local_28);
  return this;
}

// operator= @ 1444f4b20

FPatchInput * __thiscall Audio::FPatchInput::operator=(FPatchInput *this,FPatchInput *param_1)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FPatchOutput *pFVar3;
  FPatchInput local_28;
  
  pTVar2 = (param_1->OutputHandle).SharedReferenceCount.ReferenceController;
  pFVar3 = (param_1->OutputHandle).Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28._16_8_ = local_28._16_8_ & 0xffffffff00000000;
  if (pFVar3 != (FPatchOutput *)0x0) {
    LOCK();
    pFVar3->NumAliveInputs = (atomic<int>)((int)pFVar3->NumAliveInputs + 1);
    UNLOCK();
  }
  local_28.OutputHandle.Object = (this->OutputHandle).Object;
  local_28.OutputHandle.SharedReferenceCount.ReferenceController =
       (this->OutputHandle).SharedReferenceCount.ReferenceController;
  uVar1._0_4_ = this->PushCallsCounter;
  uVar1._4_4_ = *(undefined4 *)&this->field_0x14;
  (this->OutputHandle).Object = pFVar3;
  (this->OutputHandle).SharedReferenceCount.ReferenceController = pTVar2;
  this->PushCallsCounter = local_28.PushCallsCounter;
  *(undefined4 *)&this->field_0x14 = local_28._20_4_;
  local_28._16_8_ = uVar1;
  ~FPatchInput(&local_28);
  return this;
}

// ClearAudio @ 1444f7d10

void __thiscall Audio::FPatchInput::ClearAudio(FPatchInput *this)

{
  int iVar1;
  int iVar2;
  FPatchOutput *pFVar3;
  uint uVar4;
  
  pFVar3 = (this->OutputHandle).Object;
  if (pFVar3 != (FPatchOutput *)0x0) {
    iVar1 = (pFVar3->InternalBuffer).ReadCounter.Counter;
    iVar2 = (pFVar3->InternalBuffer).WriteCounter.Counter;
    uVar4 = iVar2 - iVar1;
    if (iVar2 < iVar1) {
      uVar4 = uVar4 + (pFVar3->InternalBuffer).Capacity;
    }
    TCircularAudioBuffer<float,16>::Pop(&pFVar3->InternalBuffer,uVar4);
    return;
  }
  return;
}

// GetNumSamplesAvailable @ 144504560

int __thiscall Audio::FPatchInput::GetNumSamplesAvailable(FPatchInput *this)

{
  int iVar1;
  int iVar2;
  FPatchOutput *pFVar3;
  int iVar4;
  
  pFVar3 = (this->OutputHandle).Object;
  if (pFVar3 == (FPatchOutput *)0x0) {
    return 0;
  }
  iVar1 = (pFVar3->InternalBuffer).ReadCounter.Counter;
  iVar2 = (pFVar3->InternalBuffer).WriteCounter.Counter;
  iVar4 = iVar2 - iVar1;
  if (iVar2 < iVar1) {
    iVar4 = iVar4 + (pFVar3->InternalBuffer).Capacity;
  }
  return iVar4;
}

// IsOutputStillActive @ 144509110

bool __thiscall Audio::FPatchInput::IsOutputStillActive(FPatchInput *this)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (((this->OutputHandle).Object != (FPatchOutput *)0x0) &&
     ((pTVar1 = (this->OutputHandle).SharedReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0 ||
      (pTVar1->SharedReferenceCount != (atomic<int>)0x1)))) {
    return true;
  }
  return false;
}

// IsValid @ 144509140

bool __thiscall Audio::FPatchInput::IsValid(FPatchInput *this)

{
  return (this->OutputHandle).Object != (FPatchOutput *)0x0;
}

// PushAudio @ 144514140

int __thiscall Audio::FPatchInput::PushAudio(FPatchInput *this,float *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  FPatchOutput *pFVar3;
  FScriptContainerElement *_Dst;
  TReferenceControllerBase<1> *pTVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  FPatchOutput *local_38;
  FSharedReferencer<1> FStack_30;
  
  pFVar3 = (this->OutputHandle).Object;
  if (pFVar3 == (FPatchOutput *)0x0) {
    return -1;
  }
  if (param_1 == (float *)0x0) {
    _Dst = (pFVar3->InternalBuffer).InternalBuffer.AllocatorInstance.Data;
    uVar1 = (pFVar3->InternalBuffer).WriteCounter.Counter;
    iVar5 = (pFVar3->InternalBuffer).ReadCounter.Counter;
    iVar7 = (pFVar3->InternalBuffer).WriteCounter.Counter;
    uVar6 = iVar7 - iVar5;
    if (iVar7 < iVar5) {
      uVar6 = uVar6 + (pFVar3->InternalBuffer).Capacity;
    }
    uVar2 = (pFVar3->InternalBuffer).Capacity;
    iVar5 = ~uVar6 + uVar2;
    if (param_2 < iVar5) {
      iVar5 = param_2;
    }
    iVar7 = uVar2 - uVar1;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
    memset(_Dst + (ulonglong)uVar1 * 4,0,(longlong)iVar7 << 2);
    memset(_Dst,0,(longlong)(iVar5 - iVar7) << 2);
    LOCK();
    (pFVar3->InternalBuffer).WriteCounter.Counter =
         (iVar5 + uVar1) % (pFVar3->InternalBuffer).Capacity;
    UNLOCK();
  }
  else {
    iVar5 = TCircularAudioBuffer<float,16>::Push(&pFVar3->InternalBuffer,param_1,param_2);
  }
  if (pFVar3->SamplesPushedEvent != (atomic<FEvent_*>)0x0) {
    (**(code **)(*(longlong *)pFVar3->SamplesPushedEvent + 0x10))();
  }
  iVar7 = MultithreadedPatchingPushCallsPerOutputCleanupCheckCVar;
  if (MultithreadedPatchingPushCallsPerOutputCleanupCheckCVar < 1) {
    iVar7 = 1;
  }
  iVar7 = (this->PushCallsCounter + 1) % iVar7;
  this->PushCallsCounter = iVar7;
  if ((iVar7 == 0) || (iVar5 == 0)) {
    pTVar4 = (this->OutputHandle).SharedReferenceCount.ReferenceController;
    if ((pTVar4 != (TReferenceControllerBase<1> *)0x0) &&
       (pTVar4->SharedReferenceCount == (atomic<int>)0x1)) {
      local_38 = (FPatchOutput *)0x0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (this != (FPatchInput *)&local_38) {
        (this->OutputHandle).Object = (FPatchOutput *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->OutputHandle).SharedReferenceCount,&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      iVar5 = -1;
    }
  }
  return iVar5;
}

// Reset @ 1445175b0

void __thiscall Audio::FPatchInput::Reset(FPatchInput *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FPatchOutput *pFVar3;
  atomic<FEvent_*> aVar4;
  code *pcVar5;
  bool bVar6;
  FPatchOutput *local_18;
  FSharedReferencer<1> FStack_10;
  
  pFVar3 = (this->OutputHandle).Object;
  if (pFVar3 == (FPatchOutput *)0x0) {
    return;
  }
  LOCK();
  paVar1 = &pFVar3->NumAliveInputs;
  aVar2 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + -1);
  UNLOCK();
  if (aVar2 == (atomic<int>)0x1) {
    if ((this->OutputHandle).Object == (FPatchOutput *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    aVar4 = ((this->OutputHandle).Object)->SamplesPushedEvent;
    if (aVar4 != (atomic<FEvent_*>)0x0) {
      (**(code **)(*(longlong *)aVar4 + 0x10))();
    }
  }
  local_18 = (FPatchOutput *)0x0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (this != (FPatchInput *)&local_18) {
    (this->OutputHandle).Object = (FPatchOutput *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->OutputHandle).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// SetGain @ 14451a3b0

void __thiscall Audio::FPatchInput::SetGain(FPatchInput *this,float param_1)

{
  FPatchOutput *pFVar1;
  
  pFVar1 = (this->OutputHandle).Object;
  if (pFVar1 != (FPatchOutput *)0x0) {
    LOCK();
    pFVar1->TargetGain = (TAtomic<float>)param_1;
    UNLOCK();
  }
  return;
}

