// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 3

// operator= @ 14a661670

TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *this,
          TArray<FRigUnit_RigLogic_IntArray,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<FRigUnit_RigLogic_IntArray,int>
              ((FRigUnit_RigLogic_IntArray *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FRigUnit_RigLogic_IntArray,FRigUnit_RigLogic_IntArray,int>
              ((this->AllocatorInstance).Data,(FRigUnit_RigLogic_IntArray *)pFVar3,iVar2);
  }
  return this;
}

// RemoveAtImpl @ 14a6819c0

void __thiscall
TArray<FAnimNode_RigLogic::FCachedJointMapping,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FAnimNode_RigLogic::FCachedJointMapping,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FCachedJointMapping *_Dst;
  
  _Dst = (FCachedJointMapping *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x38);
  DestructItems<FAnimNode_RigLogic::FCachedJointMapping,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x38);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14a681b50

void __thiscall
TArray<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,TSizedDefaultAllocator<32>_>
::Reset(TArray<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  int *piVar1;
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *pTVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &this->ArrayMax;
  pTVar2 = (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed> *)
           (this->AllocatorInstance).Data;
  if (param_1 <= *piVar1) {
    DestructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
              (pTVar2,this->ArrayNum);
    this->ArrayNum = 0;
    return;
  }
  DestructItems<TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElementIndexed>,int>
            (pTVar2,this->ArrayNum);
  this->ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,param_1,&this->AllocatorInstance,0,piVar1);
  }
  return;
}

