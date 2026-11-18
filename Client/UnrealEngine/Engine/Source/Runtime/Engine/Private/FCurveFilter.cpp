// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// operator= @ 1474b68e0

FCurveFilter * __thiscall
UE::Anim::FCurveFilter::operator=(FCurveFilter *this,FCurveFilter *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  
  if (this != param_1) {
    iVar2 = *(int *)((longlong)&this->_padding_ + 4);
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    _Src = (void *)param_1->_padding_;
    iVar3 = (int)param_1->_padding_;
    *(int *)&this->_padding_ = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((void *)this->_padding_,_Src,(longlong)iVar3 * 0xc);
      }
    }
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->FilterMode = param_1->FilterMode;
  return this;
}

// AppendNames @ 1474bd0a0

void __thiscall
UE::Anim::FCurveFilter::AppendNames(FCurveFilter *this,TArrayView<FName_const_,int> *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FName *pFVar3;
  int iVar4;
  int iVar5;
  FName *pFVar6;
  uint uVar7;
  
  iVar5 = (int)this->_padding_;
  iVar4 = param_1->ArrayNum;
  uVar7 = iVar4 + iVar5;
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (*(int *)((longlong)&this->_padding_ + 4) < (int)uVar7) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar7,(ForAnyElementType *)this,iVar5,piVar1);
  }
  pFVar6 = param_1->DataPtr;
  pFVar2 = pFVar6 + iVar4;
  for (; pFVar6 != pFVar2; pFVar6 = pFVar6 + 1) {
    iVar5 = (int)this->_padding_;
    if (iVar5 == *piVar1) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,(ForAnyElementType *)this,piVar1);
    }
    *(int *)&this->_padding_ = iVar5 + 1;
    pFVar3 = (FName *)(this->_padding_ + (longlong)iVar5 * 0xc);
    *pFVar3 = *pFVar6;
    *(undefined1 *)&pFVar3[1].ComparisonIndex.Value = 2;
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

