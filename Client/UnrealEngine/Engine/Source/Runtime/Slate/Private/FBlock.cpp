// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FBlock @ 1427b0750

FBlock * __thiscall
UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock::FBlock(FBlock *this,FBlock *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<int> _Dst;
  ForElementType<int> _Src;
  
  this->SequentialIndex = param_1->SequentialIndex;
  this->WrapPriority = param_1->WrapPriority;
  this->bCanWrap = param_1->bCanWrap;
  this->bForceNewLine = param_1->bForceNewLine;
  this->bHasVerticalExpansion = param_1->bHasVerticalExpansion;
  this->bCanVerticallyExpand = param_1->bCanVerticallyExpand;
  (this->DesiredSize).field0_0x0 = (param_1->DesiredSize).field0_0x0;
  (this->AdjustedSize).field0_0x0 = (param_1->AdjustedSize).field0_0x0;
  this->MinLength = param_1->MinLength;
  this->ReserveLength = param_1->ReserveLength;
  this->Area = param_1->Area;
  (this->SlotIndices).AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  _Src = (param_1->SlotIndices).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->SlotIndices).ArrayNum;
  (this->SlotIndices).ArrayNum = iVar2;
  if (_Src == (ForElementType<int>)0x0) {
    _Src = (ForElementType<int>)&param_1->SlotIndices;
  }
  piVar1 = &(this->SlotIndices).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0x10;
  }
  else {
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,iVar2,0,&(this->SlotIndices).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->SlotIndices).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<int>)0x0) {
      _Dst = (ForElementType<int>)&this->SlotIndices;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 2);
  }
  return this;
}

// ResetToDefault @ 142832fd0

void __thiscall UE::Slate::PrioritizedWrapBox::FChildArranger::FBlock::ResetToDefault(FBlock *this)

{
  int *piVar1;
  
  this->SequentialIndex = -1;
  this->WrapPriority = -1;
  this->bCanWrap = true;
  this->bForceNewLine = false;
  this->bHasVerticalExpansion = false;
  this->bCanVerticallyExpand = false;
  (this->DesiredSize).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  (this->AdjustedSize).field0_0x0._s_0 =
       (TVector2<float>_u_0_s_0)UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  this->MinLength = 0.0;
  this->ReserveLength = 0.0;
  this->Area = 0.0;
  piVar1 = &(this->SlotIndices).ArrayMax;
  (this->SlotIndices).ArrayNum = 0;
  if (*piVar1 < 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,0,&(this->SlotIndices).AllocatorInstance,0,piVar1);
  }
  return;
}

