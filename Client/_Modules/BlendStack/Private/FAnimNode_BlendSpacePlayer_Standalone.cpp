// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 1

// operator= @ 14a862830

FAnimNode_BlendSpacePlayer_Standalone * __thiscall
FAnimNode_BlendSpacePlayer_Standalone::operator=
          (FAnimNode_BlendSpacePlayer_Standalone *this,
          FAnimNode_BlendSpacePlayer_Standalone *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FFIRFilterTimeBased *pFVar5;
  FBlendSampleData *pFVar6;
  UBlendSpace *pUVar7;
  longlong lVar8;
  
  this->_padding_ = param_1->_padding_;
  lVar8 = param_1->_padding_;
  plVar1 = &this->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar8;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  if (plVar1 != &param_1->_padding_) {
    DestructItems<FFIRFilterTimeBased,int>((FFIRFilterTimeBased *)*plVar1,(int)this->_padding_);
    iVar3 = (int)param_1->_padding_;
    piVar2 = (int *)((longlong)&this->_padding_ + 4);
    pFVar5 = (FFIRFilterTimeBased *)param_1->_padding_;
    iVar4 = *piVar2;
    *(int *)&this->_padding_ = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar3,iVar4,(ForAnyElementType *)plVar1,iVar3,piVar2);
      ConstructItems<FFIRFilterTimeBased,FFIRFilterTimeBased,int>((void *)*plVar1,pFVar5,iVar3);
    }
  }
  plVar1 = &this->_padding_;
  if (plVar1 != &param_1->_padding_) {
    DestructItems<FBlendSampleData,int>((FBlendSampleData *)*plVar1,(int)this->_padding_);
    iVar3 = (int)param_1->_padding_;
    piVar2 = (int *)((longlong)&this->_padding_ + 4);
    pFVar6 = (FBlendSampleData *)param_1->_padding_;
    iVar4 = *piVar2;
    *(int *)&this->_padding_ = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,iVar3,iVar4,(ForAnyElementType *)plVar1,iVar3,piVar2);
      ConstructItems<FBlendSampleData,FBlendSampleData,int>((void *)*plVar1,pFVar6,iVar3);
    }
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)param_1->_padding_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1->_padding_);
  }
  this->_padding_ = param_1->_padding_;
  this->GroupName = param_1->GroupName;
  (this->GroupRole).Value = (param_1->GroupRole).Value;
  this->bOverridePositionWhenJoiningSyncGroupAsLeader =
       param_1->bOverridePositionWhenJoiningSyncGroupAsLeader;
  this->Method = param_1->Method;
  this->bIgnoreForRelevancyTest = param_1->bIgnoreForRelevancyTest;
  this->X = param_1->X;
  this->Y = param_1->Y;
  this->PlayRate = param_1->PlayRate;
  this->bLoop = param_1->bLoop;
  this->bResetPlayTimeWhenBlendSpaceChanges = param_1->bResetPlayTimeWhenBlendSpaceChanges;
  this->StartPosition = param_1->StartPosition;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 = (param_1->BlendSpace).field0_0x0.DebugPtr, pUVar7 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->BlendSpace).field0_0x0 = (param_1->BlendSpace).field0_0x0;
  return this;
}

