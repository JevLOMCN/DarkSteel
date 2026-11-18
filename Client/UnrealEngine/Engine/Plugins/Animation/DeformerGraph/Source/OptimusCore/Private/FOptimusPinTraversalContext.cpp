// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 4

// FOptimusPinTraversalContext @ 14e155b70

FOptimusPinTraversalContext * __thiscall
FOptimusPinTraversalContext::FOptimusPinTraversalContext
          (FOptimusPinTraversalContext *this,FOptimusPinTraversalContext *param_1)

{
  ForElementType<IOptimusNodePinRouter_const_*> FVar1;
  
  (this->ReferenceNesting).AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  if ((param_1->ReferenceNesting).AllocatorInstance.SecondaryData ==
      (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    memmove(this,param_1,0x20);
  }
  FVar1 = (this->ReferenceNesting).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->ReferenceNesting).AllocatorInstance.SecondaryData =
       (param_1->ReferenceNesting).AllocatorInstance.SecondaryData;
  (param_1->ReferenceNesting).AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  (this->ReferenceNesting).ArrayNum = (param_1->ReferenceNesting).ArrayNum;
  (this->ReferenceNesting).ArrayMax = (param_1->ReferenceNesting).ArrayMax;
  (param_1->ReferenceNesting).ArrayNum = 0;
  (param_1->ReferenceNesting).ArrayMax = 4;
  return this;
}

// FOptimusPinTraversalContext @ 14e155bf0

FOptimusPinTraversalContext * __thiscall
FOptimusPinTraversalContext::FOptimusPinTraversalContext
          (FOptimusPinTraversalContext *this,FOptimusPinTraversalContext *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<IOptimusNodePinRouter_const_*> FVar3;
  ForElementType<IOptimusNodePinRouter_const_*> _Dst;
  
  (this->ReferenceNesting).AllocatorInstance.SecondaryData =
       (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
  FVar3 = (param_1->ReferenceNesting).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->ReferenceNesting).ArrayNum;
  (this->ReferenceNesting).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    param_1 = (FOptimusPinTraversalContext *)FVar3;
  }
  piVar1 = &(this->ReferenceNesting).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
            (8,8,iVar2,0,(ForElementType<IOptimusNodePinRouter_const_*> *)this,iVar2,piVar1);
  FVar3 = (this->ReferenceNesting).AllocatorInstance.SecondaryData;
  _Dst = (ForElementType<IOptimusNodePinRouter_const_*>)this;
  if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
    _Dst = FVar3;
  }
  memcpy((void *)_Dst,param_1,(longlong)iVar2 << 3);
  return this;
}

// operator= @ 14e165840

FOptimusPinTraversalContext * __thiscall
FOptimusPinTraversalContext::operator=
          (FOptimusPinTraversalContext *this,FOptimusPinTraversalContext *param_1)

{
  ForElementType<IOptimusNodePinRouter_const_*> FVar1;
  
  if (this != param_1) {
    if ((param_1->ReferenceNesting).AllocatorInstance.SecondaryData ==
        (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      memmove(this,param_1,0x20);
    }
    FVar1 = (this->ReferenceNesting).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->ReferenceNesting).AllocatorInstance.SecondaryData =
         (param_1->ReferenceNesting).AllocatorInstance.SecondaryData;
    (param_1->ReferenceNesting).AllocatorInstance.SecondaryData =
         (ForElementType<IOptimusNodePinRouter_const_*>)0x0;
    (this->ReferenceNesting).ArrayNum = (param_1->ReferenceNesting).ArrayNum;
    (this->ReferenceNesting).ArrayMax = (param_1->ReferenceNesting).ArrayMax;
    (param_1->ReferenceNesting).ArrayNum = 0;
    (param_1->ReferenceNesting).ArrayMax = 4;
  }
  return this;
}

// operator= @ 14e1658b0

FOptimusPinTraversalContext * __thiscall
FOptimusPinTraversalContext::operator=
          (FOptimusPinTraversalContext *this,FOptimusPinTraversalContext *param_1)

{
  int iVar1;
  ForElementType<IOptimusNodePinRouter_const_*> FVar2;
  int *piVar3;
  ForElementType<IOptimusNodePinRouter_const_*> _Dst;
  
  if (this != param_1) {
    FVar2 = (param_1->ReferenceNesting).AllocatorInstance.SecondaryData;
    piVar3 = &(this->ReferenceNesting).ArrayMax;
    iVar1 = (param_1->ReferenceNesting).ArrayNum;
    if (FVar2 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      param_1 = (FOptimusPinTraversalContext *)FVar2;
    }
    (this->ReferenceNesting).ArrayNum = iVar1;
    if ((iVar1 == 0) && (*piVar3 == 0)) {
      *piVar3 = 4;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<IOptimusNodePinRouter_const_*>_>
              (8,8,iVar1,*piVar3,(ForElementType<IOptimusNodePinRouter_const_*> *)this,iVar1,piVar3)
    ;
    FVar2 = (this->ReferenceNesting).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<IOptimusNodePinRouter_const_*>)this;
    if (FVar2 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
      _Dst = FVar2;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,param_1,(longlong)iVar1 << 3);
    }
  }
  return this;
}

