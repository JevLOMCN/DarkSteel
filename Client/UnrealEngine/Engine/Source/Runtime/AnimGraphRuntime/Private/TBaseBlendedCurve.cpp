// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement> @ 1463f3720

void __thiscall
TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
CopyFrom<TMemStackAllocator<0>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *this,
          TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  
  iVar2 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  _Src = (void *)param_1->_padding_;
  iVar3 = *piVar1;
  *(int *)&this->_padding_ = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
    *(char *)&this->_padding_ = (char)param_1->_padding_;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar2,iVar3,(ForAnyElementType *)this,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((void *)this->_padding_,_Src,(longlong)iVar2 << 4);
    }
    *(char *)&this->_padding_ = (char)param_1->_padding_;
  }
  return;
}

// CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> @ 1463f37c0

void __thiscall
TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::
CopyFrom<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this,
          TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  
  iVar2 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  _Src = (void *)param_1->_padding_;
  iVar3 = *piVar1;
  *(int *)&this->_padding_ = iVar2;
  if ((iVar2 == 0) && (iVar3 == 0)) {
    *piVar1 = 0;
    *(char *)&this->_padding_ = (char)param_1->_padding_;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
              (0x10,4,iVar2,iVar3,(ForElementType<UE::Anim::FCurveElement> *)this,iVar2,piVar1);
    if (iVar2 != 0) {
      memcpy((void *)this->_padding_,_Src,(longlong)iVar2 << 4);
    }
    *(char *)&this->_padding_ = (char)param_1->_padding_;
  }
  return;
}

// Set @ 146467920

void __thiscall
TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement>::Set
          (TBaseBlendedCurve<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this,FName param_1,
          float param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar4 = UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::IndexOf
                    ((TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *)this,param_1
                    );
  if (uVar4 != 0xffffffff) {
    uVar7 = 0;
    if ((int)uVar4 < (int)this->_padding_) {
      uVar7 = ~uVar4 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar6 = (longlong)(int)uVar4 * 0x10 + this->_padding_;
    if (lVar6 != 0) {
      *(float *)(lVar6 + 8) = param_2;
      return;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<UE::Anim::FCurveElement>_>
                      (0x410,(ForElementType<UE::Anim::FCurveElement> *)this,piVar1);
    *(int *)&this->_padding_ = iVar5;
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  lVar8 = (longlong)iVar5;
  lVar6 = this->_padding_;
  *(float *)(lVar6 + 8 + lVar8 * 0x10) = param_2;
  *(FName *)(lVar6 + lVar8 * 0x10) = param_1;
  *(undefined1 *)(lVar6 + 0xc + lVar8 * 0x10) = 0;
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

