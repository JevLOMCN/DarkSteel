// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Synthesis
// Functions: 1

// FDelayAPF @ 14f0b6680

FDelayAPF * __thiscall Audio::FDelayAPF::FDelayAPF(FDelayAPF *this,FDelayAPF *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)&___7FDelay_Audio__6B_;
  *plVar1 = 0;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)param_1->_padding_;
  _Src = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar3,0,(ForAnyElementType *)plVar1,iVar3,piVar2);
    memcpy((void *)*plVar1,_Src,(longlong)iVar3 << 2);
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar4 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar4;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = (longlong)&___7FDelayAPF_Audio__6B_;
  this->G = param_1->G;
  return this;
}

