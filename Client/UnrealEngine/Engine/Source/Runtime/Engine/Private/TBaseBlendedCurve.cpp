// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// Override<TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1473d18e0

void __thiscall
TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
Override<TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this,
          TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1,float param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined1 local_res18 [8];
  
  TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=
            ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)this,
             (TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)param_1);
  fVar4 = param_2 - __real_3f800000;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  if (__real_322bcc77 < (float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    lVar2 = this->_padding_;
    iVar1 = (int)this->_padding_;
    lVar3 = (longlong)iVar1 * 0x10 + lVar2;
    while( true ) {
      if ((int)this->_padding_ != iVar1) {
        `TCheckedPointerIterator<UE::Anim::FCurveElement,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (lVar2 == lVar3) break;
      *(float *)(lVar2 + 8) = param_2 * *(float *)(lVar2 + 8);
      lVar2 = lVar2 + 0x10;
    }
  }
  return;
}

// CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1474a4380

void __thiscall
TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>::
CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
           *this,TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
  *_Dst;
  
  iVar2 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  _Src = (void *)param_1->_padding_;
  iVar3 = *piVar1;
  *(int *)&this->_padding_ = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 8;
    *(char *)&this->_padding_ = (char)param_1->_padding_;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,iVar2,iVar3,(ForElementType<UE::Anim::FCurveElement> *)this,iVar2,piVar1);
    _Dst = this;
    if ((TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
         *)this->_padding_ !=
        (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
         *)0x0) {
      _Dst = (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
              *)this->_padding_;
    }
    if (iVar2 != 0) {
      memcpy(_Dst,_Src,(longlong)iVar2 << 4);
    }
    *(char *)&this->_padding_ = (char)param_1->_padding_;
  }
  return;
}

// operator= @ 1474b5bd0

TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> * __thiscall
TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement>::operator=
          (TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *this,
          TBaseBlendedCurve<TSizedDefaultAllocator<32>,FInertializationCurveDiffElement> *param_1)

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
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((void *)this->_padding_,_Src,(longlong)iVar3 * 0x18);
      }
    }
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->Filter = param_1->Filter;
  return this;
}

// operator= @ 1474b5c80

TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement> *
__thiscall
TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>::
operator=(TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
          *this,TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
                *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
  *_Dst;
  TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
  *_Src;
  
  if (this != param_1) {
    piVar3 = (int *)((longlong)&this->_padding_ + 4);
    iVar1 = (int)param_1->_padding_;
    _Src = param_1;
    if ((TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
         *)param_1->_padding_ !=
        (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
         *)0x0) {
      _Src = (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
              *)param_1->_padding_;
    }
    iVar2 = *piVar3;
    *(int *)&this->_padding_ = iVar1;
    if ((iVar1 == 0) && (iVar2 == 0)) {
      *piVar3 = 8;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,iVar1,iVar2,(ForElementType<UE::Anim::FCurveElement> *)this,iVar1,piVar3);
      _Dst = this;
      if ((TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
           *)this->_padding_ !=
          (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
           *)0x0) {
        _Dst = (TBaseBlendedCurve<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,UE::Anim::FCurveElement>
                *)this->_padding_;
      }
      if (iVar1 != 0) {
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  this->Filter = param_1->Filter;
  return this;
}

// InitFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 147529b10

void __thiscall
TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
InitFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this,
          TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == this) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4808592878626406918>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimCurveTypes.h"
                       ,0x206,"&InCurveToInitFrom != this");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar1 < 0) {
      UE::Core::Private::
      ReallocTo<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                (0x10,4,0,(ForElementType<UE::Anim::FCurveElement> *)this,0,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    *(undefined1 *)&this->_padding_ = 0;
    this->Filter = param_1->Filter;
  }
  return;
}

// CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 14791edf0

void __thiscall
TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *this,
          TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_1)

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
      *(char *)&this->_padding_ = (char)param_1->_padding_;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((void *)this->_padding_,_Src,(longlong)iVar3 << 4);
      }
      *(char *)&this->_padding_ = (char)param_1->_padding_;
    }
    return;
  }
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  return;
}

