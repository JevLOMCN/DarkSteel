// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 1

// TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 14a861060

TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> * __thiscall
TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *this,
          TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_1)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  
  this->_padding_ = 0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar2 = (int)param_1->_padding_;
  _Src = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((void *)this->_padding_,_Src,(longlong)iVar2 << 4);
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->Filter = param_1->Filter;
  return this;
}

