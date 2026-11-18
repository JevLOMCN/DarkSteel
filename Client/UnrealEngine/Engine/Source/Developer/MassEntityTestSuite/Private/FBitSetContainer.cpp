// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FBitSetContainer @ 1470f2d70

FBitSetContainer * __thiscall
FStructTypeBitSet::FBitSetContainer::FBitSetContainer
          (FBitSetContainer *this,FBitSetContainer *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  FBitSetContainer *_Dst;
  
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  uVar3 = *(int *)&param_1->field_0x18 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar3) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)&this->field_0x1c = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc((TBitArray<FDefaultBitArrayAllocator> *)this,0);
  }
  iVar1 = *(int *)&param_1->field_0x18;
  *(int *)&this->field_0x18 = iVar1;
  if (iVar1 != 0) {
    if (*(FBitSetContainer **)&param_1->field_0x10 != (FBitSetContainer *)0x0) {
      param_1 = *(FBitSetContainer **)&param_1->field_0x10;
    }
    _Dst = this;
    if (*(FBitSetContainer **)&this->field_0x10 != (FBitSetContainer *)0x0) {
      _Dst = *(FBitSetContainer **)&this->field_0x10;
    }
    memcpy(_Dst,param_1,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return this;
}

// AddAtIndex @ 14710f8b0

void __thiscall FStructTypeBitSet::FBitSetContainer::AddAtIndex(FBitSetContainer *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                       ,0xe5,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar6 = (param_1 - *(int *)&this->field_0x18) + 1;
  if (0 < iVar6) {
    iVar3 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      ((TBitArray<FDefaultBitArrayAllocator> *)this,iVar6);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              ((TBitArray<FDefaultBitArrayAllocator> *)this,iVar3,iVar6,false);
  }
  if (*(FBitSetContainer **)&this->field_0x10 != (FBitSetContainer *)0x0) {
    this = *(FBitSetContainer **)&this->field_0x10;
  }
  uVar5 = param_1 >> 0x1f & 0x1f;
  uVar4 = param_1 + uVar5;
  uVar5 = (uVar4 & 0x1f) - uVar5;
  *(uint *)(&this->field_0x0 + (longlong)((int)uVar4 >> 5) * 4) =
       ~(1 << ((byte)uVar5 & 0x1f)) & *(uint *)(&this->field_0x0 + (longlong)((int)uVar4 >> 5) * 4)
       | 1 << (uVar5 & 0x1f);
  return;
}

// RemoveAtIndex @ 14719a710

void __thiscall
FStructTypeBitSet::FBitSetContainer::RemoveAtIndex(FBitSetContainer *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\StructTypeBitSet.h"
                       ,0xf0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 < *(int *)&this->field_0x18) {
    if (*(FBitSetContainer **)&this->field_0x10 != (FBitSetContainer *)0x0) {
      this = *(FBitSetContainer **)&this->field_0x10;
    }
    uVar4 = param_1 >> 0x1f & 0x1f;
    iVar3 = param_1 + uVar4;
    *(uint *)(&this->field_0x0 + (longlong)(iVar3 >> 5) * 4) =
         *(uint *)(&this->field_0x0 + (longlong)(iVar3 >> 5) * 4) &
         ~(1 << (((byte)iVar3 & 0x1f) - (char)uVar4 & 0x1f));
  }
  return;
}

