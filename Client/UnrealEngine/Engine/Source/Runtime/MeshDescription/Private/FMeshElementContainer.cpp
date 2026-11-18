// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 5

// Add @ 14365f430

int __thiscall FMeshElementContainer::Add(FMeshElementContainer *this)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  
  if (this->NumHoles < 1) {
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::Add(&this->BitArray,true);
    FAttributesSetBase::Insert(&this->Attributes,iVar5);
    return iVar5;
  }
  iVar5 = TBitArray<FDefaultBitArrayAllocator>::FindFromImpl
                    (&this->BitArray,false,0,(this->BitArray).NumBits);
  if (iVar5 != -1) {
    if ((iVar5 < 0) || ((this->BitArray).NumBits <= iVar5)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    FVar2 = (this->BitArray).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar6 = FVar2;
    }
    puVar1 = (uint *)((longlong)FVar6 + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
    ;
    *puVar1 = *puVar1 | 1 << ((byte)iVar5 & 0x1f);
    TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(&this->BitArray);
    this->NumHoles = this->NumHoles + -1;
    return iVar5;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Public\\MeshElementContainer.h"
                     ,0x47,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  this->NumHoles = this->NumHoles + -1;
  return -1;
}

// Compact @ 143663e30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshElementContainer::Compact
          (FMeshElementContainer *this,TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *this_00;
  uint uVar3;
  int iVar4;
  FSparseArrayAllocationInfo *pFVar5;
  ForElementType<unsigned_int> FVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ForElementType<unsigned_int> FVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_a8 [32];
  uint local_88;
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *local_80;
  FSparseArrayAllocationInfo local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<unsigned_int> local_58;
  uint local_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar8 = (this->BitArray).NumBits;
  uVar13 = iVar8 - this->NumHoles;
  local_88 = uVar13;
  local_80 = (TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)param_1;
  TSparseArray<int,FDefaultSparseArrayAllocator>::Empty(param_1,iVar8);
  this_00 = local_80;
  iVar8 = (this->BitArray).NumBits;
  iVar12 = 0;
  iVar9 = 0;
  iVar10 = 0;
  if (iVar8 != 0) {
    FVar6 = (this->BitArray).AllocatorInstance.SecondaryData;
    FVar11 = (ForElementType<unsigned_int>)this;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FVar11 = FVar6;
    }
    uVar3 = *(uint *)FVar11;
    while (uVar3 == 0) {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar10 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_143663fae;
      uVar3 = *(uint *)((uchar *)((longlong)FVar11 + 4) + lVar7 * 4);
    }
    uVar3 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar3 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar4 = (int)lVar7 + -1 + iVar10;
    if (iVar4 < iVar8) {
      uVar14 = 0xffffffff;
      do {
        pFVar5 = TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                           (this_00,&local_78,iVar4);
        if (pFVar5->Pointer != (int *)0x0) {
          *(int *)pFVar5->Pointer = iVar12;
        }
        FVar6 = (this->BitArray).AllocatorInstance.SecondaryData;
        iVar12 = iVar12 + 1;
        iVar8 = (this->BitArray).NumBits;
        uVar14 = ~uVar3 & uVar14;
        FVar11 = (ForElementType<unsigned_int>)this;
        if (FVar6 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar6;
        }
        uVar3 = uVar14 & *(uint *)((longlong)FVar11 + (longlong)iVar9 * 4);
        while (param_1 = (TSparseArray<int,FDefaultSparseArrayAllocator> *)local_80,
              uVar13 = local_88, uVar3 == 0) {
          lVar7 = (longlong)iVar9;
          iVar10 = iVar10 + 0x20;
          iVar9 = iVar9 + 1;
          if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_143663fae;
          uVar14 = 0xffffffff;
          uVar3 = *(uint *)((uchar *)((longlong)FVar11 + 4) + lVar7 * 4);
        }
        uVar3 = -uVar3 & uVar3;
        uVar2 = (ulonglong)uVar3 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar4 = iVar10 + -1 + (int)lVar7;
      } while ((iVar4 <= iVar8) && (iVar4 < iVar8));
    }
  }
LAB_143663fae:
  uVar3 = uVar13 + 0x1f >> 5;
  local_58 = (ForElementType<unsigned_int>)0x0;
  iStack_4c = 0x80;
  local_50 = uVar13;
  if (uVar13 + 0x1f >> 5 != 0) {
    if (4 < uVar3) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)&stack0xffffffffffffff98,0,uVar3,4);
      iStack_4c = uVar3 << 5;
    }
    FVar6 = (ForElementType<unsigned_int>)&stack0xffffffffffffff98;
    if (local_58 != (ForElementType<unsigned_int>)0x0) {
      FVar6 = local_58;
    }
    if (uVar3 < 9) {
      iVar8 = -1;
    }
    else {
      iVar8 = 0xff;
    }
    memset((void *)FVar6,iVar8,(ulonglong)uVar3 << 2);
    uVar3 = local_50 & 0x8000001f;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
    }
    uVar13 = local_50;
    if (uVar3 != 0) {
      FVar6 = (ForElementType<unsigned_int>)&stack0xffffffffffffff98;
      if (local_58 != (ForElementType<unsigned_int>)0x0) {
        FVar6 = local_58;
      }
      puVar1 = (uint *)((longlong)FVar6 +
                       (longlong)((int)(local_50 + ((int)local_50 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar3 & 0x1f);
      uVar13 = local_50;
    }
  }
  if (this != (FMeshElementContainer *)&stack0xffffffffffffff98) {
    if (local_58 == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(this->BitArray).AllocatorInstance.InlineData = local_68;
      *(undefined8 *)((this->BitArray).AllocatorInstance.InlineData + 8) = uStack_60;
    }
    FVar6 = (this->BitArray).AllocatorInstance.SecondaryData;
    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar6);
      uVar13 = local_50;
    }
    iVar8 = iStack_4c;
    (this->BitArray).AllocatorInstance.SecondaryData = local_58;
    local_58 = (ForElementType<unsigned_int>)0x0;
    local_50 = 0;
    iStack_4c = 0;
    (this->BitArray).NumBits = uVar13;
    (this->BitArray).MaxBits = iVar8;
  }
  if (local_58 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58);
  }
  this->NumHoles = 0;
  FAttributesSetBase::Remap(&this->Attributes,param_1);
  return;
}

// Insert @ 14367b0c0

void __thiscall FMeshElementContainer::Insert(FMeshElementContainer *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  ForElementType<unsigned_int> FVar6;
  
  iVar2 = (this->BitArray).NumBits;
  if (param_1 < iVar2) {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVar3 = (this->BitArray).AllocatorInstance.SecondaryData;
    FVar6 = (ForElementType<unsigned_int>)this;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar6 = FVar3;
    }
    puVar1 = (uint *)((longlong)FVar6 +
                     (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
    this->NumHoles = this->NumHoles + -1;
    return;
  }
  TBitArray<FDefaultBitArrayAllocator>::SetNumUninitialized(&this->BitArray,param_1 + 1);
  TBitArray<FDefaultBitArrayAllocator>::SetRange(&this->BitArray,iVar2,param_1 - iVar2,false);
  if ((param_1 < 0) || ((this->BitArray).NumBits <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar3 = (this->BitArray).AllocatorInstance.SecondaryData;
  FVar6 = (ForElementType<unsigned_int>)this;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FVar6 = FVar3;
  }
  puVar1 = (uint *)((longlong)FVar6 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0x1f);
  this->NumHoles = this->NumHoles + (param_1 - iVar2);
  FAttributesSetBase::Insert(&this->Attributes,param_1);
  return;
}

// Remap @ 143683980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMeshElementContainer::Remap
          (FMeshElementContainer *this,TSparseArray<int,FDefaultSparseArrayAllocator> *param_1)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  ForElementType<unsigned_int> FVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  undefined1 auStack_a8 [32];
  FIdentityFunctor local_88;
  ulonglong local_80;
  TSparseArray<int,FDefaultSparseArrayAllocator> *local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<unsigned_int> local_58;
  uint local_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_78 = param_1;
  if ((*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 !=
       (this->BitArray).NumBits - this->NumHoles) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IndexRemap.Num() == BitArray.Num() - NumHoles",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementContainer.cpp"
                         ,0x1c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar7 = AlgoImpl::
           MaxElementBy<TSparseArray<int,FDefaultSparseArrayAllocator>_const_,FIdentityFunctor,TLess<void>_>
                     (param_1,local_88,(TLess<void>)local_88);
  iVar12 = 0;
  local_58 = (ForElementType<unsigned_int>)0x0;
  iStack_4c = 0x80;
  local_50 = *piVar7 + 1;
  uVar13 = *piVar7 + 0x20;
  uVar10 = uVar13 >> 5;
  if (uVar13 >> 5 != 0) {
    if (4 < uVar10) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)&stack0xffffffffffffff98,0,uVar10,4);
      iStack_4c = uVar10 << 5;
    }
    FVar8 = (ForElementType<unsigned_int>)&stack0xffffffffffffff98;
    if (local_58 != (ForElementType<unsigned_int>)0x0) {
      FVar8 = local_58;
    }
    memset((void *)FVar8,0,(ulonglong)uVar10 << 2);
    uVar13 = local_50 & 0x8000001f;
    if ((int)uVar13 < 0) {
      uVar13 = (uVar13 - 1 | 0xffffffe0) + 1;
    }
    if (uVar13 != 0) {
      FVar8 = (ForElementType<unsigned_int>)&stack0xffffffffffffff98;
      if (local_58 != (ForElementType<unsigned_int>)0x0) {
        FVar8 = local_58;
      }
      puVar1 = (uint *)((longlong)FVar8 +
                       (longlong)((int)(local_50 + ((int)local_50 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)uVar13 & 0x1f);
    }
  }
  iVar3 = (this->BitArray).NumBits;
  if (iVar3 != 0) {
    FVar8 = (this->BitArray).AllocatorInstance.SecondaryData;
    FVar14 = (ForElementType<unsigned_int>)this;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FVar14 = FVar8;
    }
    uVar13 = *(uint *)FVar14;
    iVar11 = iVar12;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar11;
      iVar12 = iVar12 + 0x20;
      iVar11 = iVar11 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143683cd1;
      uVar13 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar9 * 4);
    }
    uVar13 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_70 = (int)lVar9;
    iVar6 = iVar12 + -1 + local_70;
    local_80 = (ulonglong)uVar13;
    if (iVar6 < iVar3) {
      uVar13 = 0xffffffff;
      do {
        iVar3 = *(int *)(*(longlong *)param_1 + (longlong)iVar6 * 8);
        if (((iVar3 < 0) || ((int)local_50 <= iVar3)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar8 = (ForElementType<unsigned_int>)&stack0xffffffffffffff98;
        if (local_58 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_58;
        }
        uVar10 = 1 << ((byte)iVar3 & 0x1f);
        iVar6 = iVar3;
        if (iVar3 < 0) {
          iVar6 = iVar3 + 0x1f;
        }
        if (((*(uint *)((longlong)FVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!NewBitArray[NewIndex]",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MeshDescription\\Private\\MeshElementContainer.cpp"
                               ,0x24,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((iVar3 < 0) || ((int)local_50 <= iVar3)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar8 = (ForElementType<unsigned_int>)&stack0xffffffffffffff98;
        if (local_58 != (ForElementType<unsigned_int>)0x0) {
          FVar8 = local_58;
        }
        puVar1 = (uint *)((longlong)FVar8 + (longlong)(iVar6 >> 5) * 4);
        *puVar1 = *puVar1 | uVar10;
        iVar3 = (this->BitArray).NumBits;
        uVar13 = uVar13 & ~(uint)local_80;
        FVar8 = (this->BitArray).AllocatorInstance.SecondaryData;
        FVar14 = (ForElementType<unsigned_int>)this;
        if (FVar8 != (ForElementType<unsigned_int>)0x0) {
          FVar14 = FVar8;
        }
        uVar10 = uVar13 & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
        while (param_1 = local_78, uVar10 == 0) {
          lVar9 = (longlong)iVar11;
          iVar12 = iVar12 + 0x20;
          iVar11 = iVar11 + 1;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_143683cd1;
          uVar13 = 0xffffffff;
          uVar10 = *(uint *)((uchar *)((longlong)FVar14 + 4) + lVar9 * 4);
        }
        uVar10 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uVar10 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_6c = (int)lVar9;
        iVar6 = local_6c + -1 + iVar12;
      } while ((iVar6 <= iVar3) && (local_80 = (ulonglong)uVar10, iVar6 < iVar3));
    }
  }
LAB_143683cd1:
  if (this != (FMeshElementContainer *)&stack0xffffffffffffff98) {
    if (local_58 == (ForElementType<unsigned_int>)0x0) {
      *(undefined8 *)(this->BitArray).AllocatorInstance.InlineData = local_68;
      *(undefined8 *)((this->BitArray).AllocatorInstance.InlineData + 8) = uStack_60;
    }
    FVar8 = (this->BitArray).AllocatorInstance.SecondaryData;
    if (FVar8 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar8);
    }
    (this->BitArray).AllocatorInstance.SecondaryData = local_58;
    (this->BitArray).NumBits = local_50;
    (this->BitArray).MaxBits = iStack_4c;
    local_50 = 0;
    iStack_4c = 0;
    local_58 = (ForElementType<unsigned_int>)0x0;
  }
  this->NumHoles =
       ((this->BitArray).NumBits - *(int *)&param_1->field_0x8) + *(int *)&param_1->field_0x34;
  FAttributesSetBase::Remap(&this->Attributes,param_1);
  if (local_58 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_58);
  }
  return;
}

// Remove @ 143686010

void __thiscall FMeshElementContainer::Remove(FMeshElementContainer *this,int param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  
  if ((param_1 < 0) || ((this->BitArray).NumBits <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar2 = (this->BitArray).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<unsigned_int>)this;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FVar5 = FVar2;
  }
  puVar1 = (uint *)((longlong)FVar5 +
                   (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
  this->NumHoles = this->NumHoles + 1;
  FAttributesSetBase::Remove(&this->Attributes,param_1);
  return;
}

