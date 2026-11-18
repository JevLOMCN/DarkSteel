// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 7

// TIterator @ 14abbd090

TIterator * __thiscall
TMapBase<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>_>
::TIterator::TIterator
          (TIterator *this,
          TMapBase<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>_>
          *param_1,bool param_2)

{
  TIterator local_38;
  
  TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator(&local_38,&param_1->Pairs);
  this->Map = param_1;
  this->_padding_ = local_38._padding_;
  this->_padding_ = local_38._padding_;
  this->bRequiresRehashOnRemoval = param_2;
  this->_padding_ = local_38._padding_;
  this->_padding_ = local_38._padding_;
  this->bElementsHaveBeenRemoved = false;
  this->_padding_ = local_38._padding_;
  this->_padding_ = (longlong)local_38.Set;
  return this;
}

// TIterator @ 14abbd100

TIterator * __thiscall
TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FTextureCache::FId,TWeakObjectPtr<UTexture2D,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14abbd199;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14abbd199:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14abbd210

TIterator * __thiscall
TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_short,TSizedDefaultAllocator<32>_>,TWeakObjectPtr<USkeleton,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14abbd2a9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14abbd2a9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ac0b6f0

TIterator * __thiscall
TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::TIterator::TIterator
          (TIterator *this,
          TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ac0b789;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ac0b789:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ac0b800

TIterator * __thiscall
TSet<TTuple<TWeakObjectPtr<UCustomizableObject_const_,FWeakObjectPtr>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UCustomizableObject_const_,FWeakObjectPtr>,unsigned___int64,0>,FDefaultSetAllocator>
::TIterator::TIterator
          (TIterator *this,
          TSet<TTuple<TWeakObjectPtr<UCustomizableObject_const_,FWeakObjectPtr>,unsigned___int64>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UCustomizableObject_const_,FWeakObjectPtr>,unsigned___int64,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ac0b899;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ac0b899:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ac0b910

TIterator * __thiscall
TSet<FMutablePendingInstanceDiscard,FPendingInstanceDiscardKeyFuncs,FDefaultSetAllocator>::TIterator
::TIterator(TIterator *this,
           TSet<FMutablePendingInstanceDiscard,FPendingInstanceDiscardKeyFuncs,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ac0b9a9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ac0b9a9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

// TIterator @ 14ac0ba20

TIterator * __thiscall
TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>::TIterator::
TIterator(TIterator *this,
         TSet<FMutablePendingInstanceUpdate,FPendingInstanceUpdateKeyFuncs,FDefaultSetAllocator>
         *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar8 = 0;
  uVar5 = 1;
  iVar9 = 0;
  iVar6 = 0;
  if (iVar3 != 0) {
    puVar10 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar10 == (uint *)0x0) {
      puVar10 = (uint *)puVar1;
    }
    uVar4 = *puVar10;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar8;
      iVar9 = iVar9 + 0x20;
      iVar8 = iVar8 + 1;
      iVar6 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_14ac0bab9;
      uVar4 = puVar10[lVar7 + 1];
    }
    uVar5 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar5 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (int)lVar7 + -1 + iVar9;
    if (iVar3 < iVar6) {
      iVar6 = iVar3;
    }
  }
LAB_14ac0bab9:
  this->_padding_ = (longlong)param_1;
  this->_padding_ = CONCAT44(uVar5,iVar8);
  this->Set = param_1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = CONCAT44(iVar6,0xffffffff);
  this->_padding_ = CONCAT44(iVar6,iVar9);
  return this;
}

