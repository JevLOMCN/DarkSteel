// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FQuartzQuantizedCommandInitInfo @ 14733f950

/* WARNING: Enum "Type": Some values do not have unique names */

FQuartzQuantizedCommandInitInfo * __thiscall
Audio::FQuartzQuantizedCommandInitInfo::FQuartzQuantizedCommandInitInfo
          (FQuartzQuantizedCommandInitInfo *this,FQuartzQuantizedRequestData *param_1,float param_2,
          int param_3)

{
  TArray<Audio::FQuartzGameThreadSubscriber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  FQuartzGameThreadSubscriber *pFVar5;
  
  this->ClockName = param_1->ClockName;
  this->OtherClockName = param_1->OtherClockName;
  (this->QuantizedCommandPtr).Object = (param_1->QuantizedCommandPtr).Object;
  pTVar4 = (param_1->QuantizedCommandPtr).SharedReferenceCount.ReferenceController;
  (this->QuantizedCommandPtr).SharedReferenceCount.ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  FQuartzQuantizationBoundary::FQuartzQuantizationBoundary
            (&this->QuantizationBoundary,&param_1->QuantizationBoundary);
  pTVar1 = &this->GameThreadSubscribers;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->GameThreadSubscribers).ArrayMax;
  iVar3 = (param_1->GameThreadSubscribers).ArrayNum;
  pFVar5 = (FQuartzGameThreadSubscriber *)(param_1->GameThreadSubscribers).AllocatorInstance.Data;
  (this->GameThreadSubscribers).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<Audio::FQuartzGameThreadSubscriber,Audio::FQuartzGameThreadSubscriber,int>
              ((pTVar1->AllocatorInstance).Data,pFVar5,iVar3);
  }
  this->GameThreadDelegateID = param_1->GameThreadDelegateID;
  this->SampleRate = param_2;
  (this->OwningClockPointer).Object = (FQuartzClock *)0x0;
  (this->OwningClockPointer).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SourceID = param_3;
  this->FrameOverrideAmount = 0;
  return this;
}

