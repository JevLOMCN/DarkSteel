// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TakeMovieScene
// Functions: 2

// operator= @ 14d0b9df0

FMovieSceneIntegerChannel * __thiscall
FMovieSceneIntegerChannel::operator=
          (FMovieSceneIntegerChannel *this,FMovieSceneIntegerChannel *param_1)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  if (&param_1->_padding_ != &this->_padding_) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    CopyFrom<IBaseDelegateInstance<void___cdecl(FMovieSceneChannel_*,TArray<FKeyMoveEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>_>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->_padding_,
               (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_);
  }
  (this->PreInfinityExtrap).Value = (param_1->PreInfinityExtrap).Value;
  pTVar1 = &this->Times;
  (this->PostInfinityExtrap).Value = (param_1->PostInfinityExtrap).Value;
  this->bInterpolateLinearKeys = param_1->bInterpolateLinearKeys;
  if (pTVar1 != &param_1->Times) {
    iVar4 = (param_1->Times).ArrayNum;
    piVar2 = &(this->Times).ArrayMax;
    pFVar5 = (param_1->Times).AllocatorInstance.Data;
    (this->Times).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
      }
    }
  }
  this->DefaultValue = param_1->DefaultValue;
  pTVar3 = &this->Values;
  this->bHasDefaultValue = param_1->bHasDefaultValue;
  if (pTVar3 != &param_1->Values) {
    iVar4 = (param_1->Values).ArrayNum;
    piVar2 = &(this->Values).ArrayMax;
    pFVar5 = (param_1->Values).AllocatorInstance.Data;
    (this->Values).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
      }
    }
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  return this;
}

// Set @ 14d0bb350

void __thiscall
FMovieSceneIntegerChannel::Set
          (FMovieSceneIntegerChannel *this,TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InTimes.Num() == InValues.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneIntegerChannel.h"
                         ,0x80,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar1 = &this->Times;
  iVar6 = 0;
  if (pTVar1 != param_1) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Times).ArrayNum = param_1->ArrayNum;
    (this->Times).ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  pTVar2 = &this->Values;
  if (pTVar2 != param_2) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->Values).ArrayNum = param_2->ArrayNum;
    (this->Values).ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  if (0 < (this->Times).ArrayNum) {
    do {
      FKeyHandleLookupTable::AllocateHandle
                ((FKeyHandleLookupTable *)&this->KeyHandles,(int)local_res8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (this->Times).ArrayNum);
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

