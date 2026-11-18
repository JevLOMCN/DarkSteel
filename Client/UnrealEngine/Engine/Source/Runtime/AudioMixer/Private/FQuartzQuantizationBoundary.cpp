// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 3

// FQuartzQuantizationBoundary @ 1464d9820

FQuartzQuantizationBoundary * __thiscall
FQuartzQuantizationBoundary::FQuartzQuantizationBoundary
          (FQuartzQuantizationBoundary *this,FQuartzQuantizationBoundary *param_1)

{
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FQuartzGameThreadSubscriber *pFVar4;
  
  pTVar1 = &this->GameThreadSubscribers;
  this->Quantization = param_1->Quantization;
  this->Multiplier = param_1->Multiplier;
  this->CountingReferencePoint = param_1->CountingReferencePoint;
  this->bFireOnClockStart = param_1->bFireOnClockStart;
  this->bCancelCommandIfClockIsNotRunning = param_1->bCancelCommandIfClockIsNotRunning;
  this->bResetClockOnQueued = param_1->bResetClockOnQueued;
  this->bResumeClockOnQueued = param_1->bResumeClockOnQueued;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->GameThreadSubscribers).ArrayMax;
  iVar3 = (param_1->GameThreadSubscribers).ArrayNum;
  pFVar4 = (FQuartzGameThreadSubscriber *)(param_1->GameThreadSubscribers).AllocatorInstance.Data;
  (this->GameThreadSubscribers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

// ~FQuartzQuantizationBoundary @ 146540e30

void __thiscall
FQuartzQuantizationBoundary::~FQuartzQuantizationBoundary(FQuartzQuantizationBoundary *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Audio::FQuartzGameThreadSubscriber,int>
            ((FQuartzGameThreadSubscriber *)(this->GameThreadSubscribers).AllocatorInstance.Data,
             (this->GameThreadSubscribers).ArrayNum);
  pFVar1 = (this->GameThreadSubscribers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 146541bc0

FQuartzQuantizationBoundary * __thiscall
FQuartzQuantizationBoundary::operator=
          (FQuartzQuantizationBoundary *this,FQuartzQuantizationBoundary *param_1)

{
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FQuartzGameThreadSubscriber *pFVar4;
  
  this->Quantization = param_1->Quantization;
  pTVar1 = &this->GameThreadSubscribers;
  this->Multiplier = param_1->Multiplier;
  this->CountingReferencePoint = param_1->CountingReferencePoint;
  this->bFireOnClockStart = param_1->bFireOnClockStart;
  this->bCancelCommandIfClockIsNotRunning = param_1->bCancelCommandIfClockIsNotRunning;
  this->bResetClockOnQueued = param_1->bResetClockOnQueued;
  this->bResumeClockOnQueued = param_1->bResumeClockOnQueued;
  if (pTVar1 != &param_1->GameThreadSubscribers) {
    DestructItems<Audio::FQuartzGameThreadSubscriber,int>
              ((FQuartzGameThreadSubscriber *)(pTVar1->AllocatorInstance).Data,
               (this->GameThreadSubscribers).ArrayNum);
    iVar3 = (param_1->GameThreadSubscribers).ArrayNum;
    piVar2 = &(this->GameThreadSubscribers).ArrayMax;
    pFVar4 = (FQuartzGameThreadSubscriber *)(param_1->GameThreadSubscribers).AllocatorInstance.Data;
    (this->GameThreadSubscribers).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
                ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
    }
  }
  return this;
}

