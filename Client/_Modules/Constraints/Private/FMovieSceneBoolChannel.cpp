// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 1

// operator= @ 14649fe70

FMovieSceneBoolChannel * __thiscall
FMovieSceneBoolChannel::operator=(FMovieSceneBoolChannel *this,FMovieSceneBoolChannel *param_1)

{
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
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
  pTVar1 = &this->Times;
  (this->PreInfinityExtrap).Value = (param_1->PreInfinityExtrap).Value;
  (this->PostInfinityExtrap).Value = (param_1->PostInfinityExtrap).Value;
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
                (1,1,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4);
      }
    }
  }
  FKeyHandleLookupTable::Reset((FKeyHandleLookupTable *)&this->KeyHandles);
  return this;
}

