// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// Empty @ 146425e70

void __thiscall
UE::Anim::TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::Empty
          (TNamedValueArray<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *this)

{
  (this->Elements).ArrayNum = 0;
  if ((this->Elements).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,&(this->Elements).ArrayMax);
    this->bSorted = false;
    return;
  }
  this->bSorted = false;
  return;
}

// IndexOf @ 146450ce0

int __thiscall
UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::IndexOf
          (TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement> *this,FName param_1)

{
  uint uVar1;
  FCurveElement *pFVar2;
  FName FVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  FIdentityFunctor local_res10;
  uint uStackX_14;
  
  if (this->bSorted == false) {
    local_res10 = param_1.ComparisonIndex.Value._0_1_;
    AlgoImpl::
    IntroSortInternal<UE::Anim::FCurveElement,int,FIdentityFunctor,UE::Anim::TNamedValueArray<TMemStackAllocator<0>,UE::Anim::FCurveElement>::FElementSortPredicate>
              ((this->Elements).AllocatorInstance.Data,(this->Elements).ArrayNum,local_res10,
               (FElementSortPredicate)local_res10);
    this->bSorted = true;
  }
  uVar1 = (this->Elements).ArrayNum;
  iVar6 = 0;
  pFVar2 = (this->Elements).AllocatorInstance.Data;
  uStackX_14 = param_1.Number;
  uVar8 = uVar1;
  if (0 < (int)uVar1) {
    do {
      iVar7 = (uVar8 >> 1) + iVar6;
      FVar3 = pFVar2[iVar7].Name;
      iVar5 = FVar3.ComparisonIndex.Value.Value - param_1.ComparisonIndex.Value;
      if (iVar5 == 0) {
        iVar5 = FVar3.Number - uStackX_14;
      }
      if (iVar5 < 0) {
        iVar6 = iVar7 + (uVar8 & 1);
      }
      uVar4 = uVar8 >> 1;
      uVar8 = uVar8 >> 1;
    } while (uVar4 != 0);
  }
  if (iVar6 < (int)uVar1) {
    FVar3 = pFVar2[iVar6].Name;
    iVar7 = param_1.ComparisonIndex.Value.Value - FVar3.ComparisonIndex.Value;
    if (iVar7 == 0) {
      iVar7 = uStackX_14 - FVar3.Number;
    }
    if (-1 < iVar7) {
      return iVar6;
    }
  }
  return -1;
}

