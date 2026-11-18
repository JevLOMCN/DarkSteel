// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 194

// Append<FDefaultSetAllocator> @ 14e125fb0

void __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::Append<FDefaultSetAllocator>
          (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
           *this,TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  UOptimusComponentSourceBinding *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar6 = 1;
  uVar9 = (uVar12 - *(int *)&(param_1->Elements).field_0x34) +
          *(int *)&(param_1->Elements).field_0x8;
  if (uVar12 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar5)) {
      this->HashSize = iVar5;
      Rehash(this);
    }
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  iVar10 = 0;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e1260bd;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_14e1260bd:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar10);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e1261d0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14e1261d0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    Emplace<UOptimusComponentSourceBinding_*>
              (this,&local_res20,
               (bool *)((longlong)TStack_70.CurrentBitIndex * 0x10 + *(longlong *)&param_1->Elements
                       ));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    UnhashElements(param_1);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  return;
}

// Append<FDefaultSetAllocator> @ 14e1262a0

void __thiscall
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::
Append<FDefaultSetAllocator>
          (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
           *this,TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar6 = 1;
  uVar9 = (uVar12 - *(int *)&(param_1->Elements).field_0x34) +
          *(int *)&(param_1->Elements).field_0x8;
  if (uVar12 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar5)) {
      this->HashSize = iVar5;
      Rehash(this);
    }
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  iVar10 = 0;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e1263ad;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_14e1263ad:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar10);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e1264b1;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14e1264b1:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    Emplace<FOptimusRoutedConstNode>
              (this,(FOptimusRoutedConstNode *)&stack0x00000020,
               (bool *)((longlong)TStack_70.CurrentBitIndex * 0x40 + *(longlong *)&param_1->Elements
                       ));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  Reset(param_1);
  return;
}

// Append<FDefaultSetAllocator> @ 14e126540

void __thiscall
TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Append<FDefaultSetAllocator>
          (TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  int local_res18;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar6 = 1;
  uVar9 = (uVar12 - *(int *)&(param_1->Elements).field_0x34) +
          *(int *)&(param_1->Elements).field_0x8;
  if (uVar12 < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_res10 = (undefined4)lVar8;
      iVar5 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar5)) {
      this->HashSize = iVar5;
      Rehash(this);
    }
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  iVar10 = 0;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar5 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      iVar7 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e12664d;
      uVar9 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iVar7 = local_res18 + -1 + iVar13;
    if (iVar5 < iVar7) {
      iVar7 = iVar5;
    }
  }
LAB_14e12664d:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uVar12 = uVar9 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar10);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar13;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar5 < (int)uVar9)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar9 != uVar6) {
    puVar11 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e126760;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14e126760:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar9) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    Emplace<TArray<FName,TSizedDefaultAllocator<32>_>_>
              (this,(TArray<FName,TSizedDefaultAllocator<32>_> *)&stack0x00000020,
               (bool *)(*(longlong *)&param_1->Elements + (longlong)TStack_70.CurrentBitIndex * 0x18
                       ));
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    UnhashElements(param_1);
    TSparseArray<TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&param_1->Elements,0,*(int *)&(param_1->Elements).field_0x8);
    *(undefined4 *)&(param_1->Elements).field_0x8 = 0;
    if (*(int *)&(param_1->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)param_1,0,(int *)&(param_1->Elements).field_0xc);
    }
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
    *(undefined4 *)&(param_1->Elements).field_0x28 = 0;
  }
  return;
}

// Emplace<UOptimusComponentSourceBinding_*_const_&> @ 14e12a6b0

FSetElementId __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::Emplace<UOptimusComponentSourceBinding_*_const_&>
          (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
           *this,UOptimusComponentSourceBinding **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<UOptimusComponentSourceBinding_*> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(ulonglong *)local_38.Pointer;
  bVar8 = false;
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar7 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar7 - iVar4 != 1) && (iVar7 != iVar4)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) == uVar3) {
          bVar8 = iVar7 != -1;
          if (bVar8) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) = uVar3;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,local_38.Index);
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<UOptimusNode_*_const_&> @ 14e12a880

FSetElementId __thiscall
TSet<UOptimusNode_*,DefaultKeyFuncs<UOptimusNode_*,0>,FDefaultSetAllocator>::
Emplace<UOptimusNode_*_const_&>
          (TSet<UOptimusNode_*,DefaultKeyFuncs<UOptimusNode_*,0>,FDefaultSetAllocator> *this,
          UOptimusNode **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) = uVar5;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<UOptimusNode_const_*_const_&> @ 14e12aae0

FSetElementId __thiscall
TSet<UOptimusNode_const_*,DefaultKeyFuncs<UOptimusNode_const_*,0>,FDefaultSetAllocator>::
Emplace<UOptimusNode_const_*_const_&>
          (TSet<UOptimusNode_const_*,DefaultKeyFuncs<UOptimusNode_const_*,0>,FDefaultSetAllocator>
           *this,UOptimusNode **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) = uVar5;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FOptimusRoutedConstNode_const_&> @ 14e12b1b0

FSetElementId __thiscall
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::
Emplace<FOptimusRoutedConstNode_const_&>
          (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
           *this,FOptimusRoutedConstNode *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *in_R9;
  void *_Dst;
  bool bVar8;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x40 + 4 + lVar2);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (TSparseSetElement<FOptimusRoutedConstNode> *)0x0) {
    *(undefined8 *)local_48.Pointer = *(undefined8 *)param_2;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8),
               (FOptimusPinTraversalContext *)(param_2 + 8));
    *(undefined4 *)((longlong)local_48.Pointer + 0x38) = 0xffffffff;
  }
  uVar6 = ((uint)(*(ulonglong *)local_48.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_48.Pointer >> 4)) * -0x7a143595;
  uVar7 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar6 = ::GetTypeHash((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8));
  bVar8 = false;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + uVar6 ^ uVar7;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FOptimusRoutedConstNode>(this,uVar7,local_48.Pointer);
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0x40 + *(longlong *)&this->Elements);
      pvVar3 = *(void **)((longlong)_Dst + 0x28);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove(_Dst,local_48.Pointer,0x38);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar7,local_48.Pointer,local_48.Index);
  }
  *(int *)&param_1->Node = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FOptimusRoutedConstNodePin_const_&> @ 14e12b430

FSetElementId __thiscall
TSet<FOptimusRoutedConstNodePin,DefaultKeyFuncs<FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
::Emplace<FOptimusRoutedConstNodePin_const_&>
          (TSet<FOptimusRoutedConstNodePin,DefaultKeyFuncs<FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
           *this,FOptimusRoutedConstNodePin *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x40 + 4 + lVar2);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar2) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (FOptimusRoutedConstNodePin *)0x0) {
    *(UOptimusNodePin **)local_48.Pointer = *(UOptimusNodePin **)param_2;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8),
               (FOptimusPinTraversalContext *)(param_2 + 8));
    *(undefined4 *)&((FOptimusRoutedConstNodePin *)((longlong)local_48.Pointer + 0x38))->NodePin =
         0xffffffff;
  }
  uVar6 = ((uint)((ulonglong)*(UOptimusNodePin **)local_48.Pointer >> 0x14) & 0xffff ^
          (uint)((ulonglong)*(UOptimusNodePin **)local_48.Pointer >> 4)) * -0x7a143595;
  uVar7 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar6 = ::GetTypeHash((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8));
  bVar12 = false;
  uVar7 = uVar7 * 0x40 + -0x61c88647 + (uVar7 >> 2) + uVar6 ^ uVar7;
  if (*(int *)puVar11 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FOptimusRoutedConstNodePin>(this,uVar7,local_48.Pointer);
    bVar12 = iVar5 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar5 * 0x40 + *(longlong *)&this->Elements);
      pvVar3 = *(void **)((longlong)_Dst + 0x28);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove(_Dst,local_48.Pointer,0x38);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar8 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)
                &((FOptimusRoutedConstNodePin *)((longlong)local_48.Pointer + 0x38))->NodePin + 4) =
           uVar7;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&((FOptimusRoutedConstNodePin *)((longlong)local_48.Pointer + 0x38))->NodePin =
           *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
      *(int *)((longlong)FVar9 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->NodePin = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TArray<FName,TSizedDefaultAllocator<32>_>_const_&> @ 14e12b990

FSetElementId __thiscall
TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TArray<FName,TSizedDefaultAllocator<32>_>_const_&>
          (TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = 0;
    iVar6 = *(int *)(param_2 + 8);
    pvVar3 = *(void **)param_2;
    *(int *)((longlong)local_38.Pointer + 8) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)((longlong)local_38.Pointer + 0xc) = 0;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar6,0,local_38.Pointer,iVar6,(int *)((longlong)local_38.Pointer + 0xc));
      memcpy(*(void **)local_38.Pointer,pvVar3,(longlong)iVar6 << 3);
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
    }
  }
  uVar5 = GetTypeHash<FName,TSizedDefaultAllocator<32>_>(local_38.Pointer);
  bVar7 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_>(this,uVar5,local_38.Pointer)
    ;
    bVar7 = iVar6 != -1;
    if (bVar7) {
      lVar2 = *(longlong *)&this->Elements;
      pvVar3 = *(void **)(lVar2 + (longlong)iVar6 * 0x18);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove((void *)(lVar2 + (longlong)iVar6 * 0x18),local_38.Pointer,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,local_38.Index);
  }
  *(int *)&(param_1->AllocatorInstance).Data = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<enum_EOptimusNodeGraphType_const_&> @ 14e12bdf0

FSetElementId __thiscall
TSet<enum_EOptimusNodeGraphType,DefaultKeyFuncs<enum_EOptimusNodeGraphType,0>,FDefaultSetAllocator>
::Emplace<enum_EOptimusNodeGraphType_const_&>
          (void *this,EOptimusNodeGraphType *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  EOptimusNodeGraphType EVar6;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0xc);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<EOptimusNodeGraphType> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  bVar7 = false;
  uVar3 = *(uint *)local_38.Pointer;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    EVar6 = *(EOptimusNodeGraphType *)
             (lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar3) * 4);
    if (EVar6 != ~Setup) {
      lVar5 = *(longlong *)this;
      do {
        if (*(uint *)(lVar5 + (longlong)(int)EVar6 * 0xc) == uVar3) {
          bVar7 = EVar6 != ~Setup;
          if (bVar7) {
            *(uint *)(lVar5 + (longlong)(int)EVar6 * 0xc) = uVar3;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = EVar6;
          }
          break;
        }
        EVar6 = *(EOptimusNodeGraphType *)(lVar5 + 4 + (longlong)(int)EVar6 * 0xc);
      } while (EVar6 != ~Setup);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,uVar3,local_38.Pointer,local_38.Index);
  }
  *param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<UOptimusComponentSourceBinding_*> @ 14e12bf80

FSetElementId __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::Emplace<UOptimusComponentSourceBinding_*>
          (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
           *this,UOptimusComponentSourceBinding **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x10);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<UOptimusComponentSourceBinding_*> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  uVar3 = *(ulonglong *)local_38.Pointer;
  bVar8 = false;
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar7 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar7 - iVar4 != 1) && (iVar7 != iVar4)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) == uVar3) {
          bVar8 = iVar7 != -1;
          if (bVar8) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar7 * 0x10) = uVar3;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,local_38.Index);
  }
  *(int *)param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_> @ 14e12c190

FSetElementId __thiscall
TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
::Emplace<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>_>
          (TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
           *this,TTuple<UOptimusNodePin_*,UOptimusNodePin_*> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar11 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    uVar8 = *(ulonglong *)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = uVar8;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar8 = *(ulonglong *)local_48.Pointer;
  bVar13 = false;
  uVar3 = *(ulonglong *)((longlong)local_48.Pointer + 8);
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar7 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  iVar11 = *(int *)puVar12;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar6 = (uVar6 >> 2) + 0x9e3779b9 + (uVar7 >> 0x10 ^ uVar7) + uVar6 * 0x40 ^ uVar6;
  if ((iVar11 - iVar4 != 1) && (iVar11 != iVar4)) {
    FVar9 = (this->Hash).SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 + (ulonglong)(this->HashSize - 1U & uVar6) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar5 = (longlong)iVar11;
        if ((*(ulonglong *)(lVar2 + lVar5 * 0x18) == uVar8) &&
           (*(ulonglong *)(lVar2 + 8 + lVar5 * 0x18) == uVar3)) {
          bVar13 = iVar11 != -1;
          if (bVar13) {
            memmove((void *)(lVar2 + (longlong)iVar11 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar2 + 0x10 + lVar5 * 0x18);
      } while (iVar11 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar7 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar8 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar6;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
      *(int *)((longlong)FVar9 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FOptimusRoutedConstNode> @ 14e12c410

FSetElementId __thiscall
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::
Emplace<FOptimusRoutedConstNode>
          (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
           *this,FOptimusRoutedConstNode *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *in_R9;
  void *_Dst;
  bool bVar8;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x40 + 4 + lVar2);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (TSparseSetElement<FOptimusRoutedConstNode> *)0x0) {
    *(undefined8 *)local_48.Pointer = *(undefined8 *)param_2;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8),
               (FOptimusPinTraversalContext *)(param_2 + 8));
    *(undefined4 *)((longlong)local_48.Pointer + 0x38) = 0xffffffff;
  }
  uVar6 = ((uint)(*(ulonglong *)local_48.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_48.Pointer >> 4)) * -0x7a143595;
  uVar7 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  uVar6 = ::GetTypeHash((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8));
  bVar8 = false;
  uVar7 = (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + uVar6 ^ uVar7;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FOptimusRoutedConstNode>(this,uVar7,local_48.Pointer);
    bVar8 = iVar5 != -1;
    if (bVar8) {
      _Dst = (void *)((longlong)iVar5 * 0x40 + *(longlong *)&this->Elements);
      pvVar3 = *(void **)((longlong)_Dst + 0x28);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove(_Dst,local_48.Pointer,0x38);
      TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar7,local_48.Pointer,local_48.Index);
  }
  *(int *)&param_1->Node = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e12c5f0

FSetElementId __thiscall
TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *_Src;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  _Src = (TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0;
  if (local_38.Pointer != (TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = 0;
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    param_2[0] = false;
    param_2[1] = false;
    param_2[2] = false;
    param_2[3] = false;
    param_2[4] = false;
    param_2[5] = false;
    param_2[6] = false;
    param_2[7] = false;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = *(undefined4 *)(param_2 + 0xc);
    param_2[8] = false;
    param_2[9] = false;
    param_2[10] = false;
    param_2[0xb] = false;
    param_2[0xc] = false;
    param_2[0xd] = false;
    param_2[0xe] = false;
    param_2[0xf] = false;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  uVar5 = GetTypeHash<FName,TSizedDefaultAllocator<32>_>
                    ((TArray<FName,TSizedDefaultAllocator<32>_> *)_Src);
  bVar7 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_>
                      (this,uVar5,(TArray<FName,TSizedDefaultAllocator<32>_> *)_Src);
    bVar7 = iVar6 != -1;
    if (bVar7) {
      lVar2 = *(longlong *)&this->Elements;
      pvVar3 = *(void **)(lVar2 + (longlong)iVar6 * 0x18);
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove((void *)(lVar2 + (longlong)iVar6 * 0x18),_Src,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,uVar5,_Src,local_38.Index);
  }
  *(int *)&(param_1->AllocatorInstance).Data = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UComputeDataInterface_const_*_&&>_> @ 14e12c7a0

FSetElementId __thiscall
TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<UComputeDataInterface_const_*_&&>_>
          (TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<UComputeDataInterface_const_*_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TTuple<UComputeDataInterface_const_*,int>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar3 = *(ulonglong *)local_38.Pointer;
  bVar8 = false;
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar7 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar7 - iVar4 != 1) && (iVar7 != iVar4)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar7 * 0x18) == uVar3) {
          bVar8 = iVar7 != -1;
          if (bVar8) {
            memmove((void *)(lVar2 + (longlong)iVar7 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UComputeDataInterface_const_*_const_&>_> @ 14e12c980

FSetElementId __thiscall
TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<UComputeDataInterface_const_*_const_&>_>
          (TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<UComputeDataInterface_const_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  int iVar7;
  char *in_R9;
  bool bVar8;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  if (iVar7 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<TTuple<UComputeDataInterface_const_*,int>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  uVar3 = *(ulonglong *)local_38.Pointer;
  bVar8 = false;
  uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar7 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar7 - iVar4 != 1) && (iVar7 != iVar4)) {
    FVar6 = (this->Hash).SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar6 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar7 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar7 * 0x18) == uVar3) {
          bVar8 = iVar7 != -1;
          if (bVar8) {
            memmove((void *)(lVar2 + (longlong)iVar7 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)(lVar2 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar8;
  }
  if (bVar8 == false) {
    RehashOrLink(this,uVar5,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UOptimusNodeLink_const_*_const_&>_> @ 14e12cb60

FSetElementId __thiscall
TSet<TTuple<UOptimusNodeLink_const_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<UOptimusNodeLink_const_*_const_&>_>
          (TSet<TTuple<UOptimusNodeLink_const_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<UOptimusNodeLink_const_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar9 * 0x18) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            memmove((void *)(lVar2 + (longlong)iVar9 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10 + (longlong)iVar9 * 0x18);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<UOptimusNodePin_const_*_const_&>_> @ 14e12cdb0

FSetElementId __thiscall
TSet<TTuple<UOptimusNodePin_const_*,FOptimus_KernelConnection>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<UOptimusNodePin_const_*_const_&>_>
          (TSet<TTuple<UOptimusNodePin_const_*,FOptimus_KernelConnection>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<UOptimusNodePin_const_*_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar2);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = 0;
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)((longlong)iVar9 * 0x20 + *(longlong *)&this->Elements) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            memmove((void *)((longlong)iVar9 * 0x20 + *(longlong *)&this->Elements),local_48.Pointer
                    ,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + *(longlong *)&this->Elements);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusConstantIdentifier_const_&>_> @ 14e12cff0

FSetElementId __thiscall
TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusConstantIdentifier_const_&>_>
          (TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FOptimusConstantIdentifier_const_&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  TSparseSetElement<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>_>
  *pTVar13;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x30);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer ==
      (TSparseSetElement<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>_>
       *)0x0) {
    pTVar13 = (TSparseSetElement<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>_>
               *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)param_2;
    uVar5 = puVar4[1];
    *(undefined8 *)local_38.Pointer = *puVar4;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = uVar5;
    *(undefined8 *)((longlong)local_38.Pointer + 0x10) = puVar4[2];
    *(undefined8 *)((longlong)local_38.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_38.Pointer + 0x20) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x28) = 0xffffffff;
    pTVar13 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  uVar8 = ::GetTypeHash((FOptimusConstantIdentifier *)pTVar13);
  bVar6 = TryReplaceExisting(this,uVar8,pTVar13,local_res8,in_R9);
  if (!bVar6) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)&pTVar13->field_0x2c = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&pTVar13->field_0x28 = *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusInstancedNode_const_&>_> @ 14e12d190

/* WARNING: Type propagation algorithm not settling */

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusInstancedNode_const_&>_>
          (TSet<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FOptimusInstancedNode_const_&> *param_1,bool *param_2)

{
  FOptimusPinTraversalContext *pFVar1;
  longlong lVar2;
  undefined8 *puVar3;
  TArray<IOptimusNodePinRouter_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  FOptimusInstancedNode *this_00;
  char *in_R9;
  void *_Dst;
  FOptimusInstancedNode *_Src;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar11 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar12 = *(int *)((longlong)iVar6 * 0x58 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar12;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)((longlong)iVar12 * 0x58 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer == (FOptimusInstancedNode *)0x0) {
    _Src = (FOptimusInstancedNode *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)param_2;
    (local_48.Pointer)->Node = (UOptimusNode *)*puVar3;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&(local_48.Pointer)->TraversalContext,(FOptimusPinTraversalContext *)(puVar3 + 1));
    *(int *)((longlong)local_48.Pointer + 0x38) = *(int *)(puVar3 + 7);
    (((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).Node =
         (UOptimusNode *)0x0;
    pFVar1 = &(((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).
              TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[4] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[5] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[6] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[7] = '\0';
    DestructItems<FOptimusInstancedNode,int>((FOptimusInstancedNode *)0x0,0);
    pTVar4 = &(((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).
              TraversalContext.ReferenceNesting;
    (pTVar4->AllocatorInstance).InlineData[8] = 0xff;
    (pTVar4->AllocatorInstance).InlineData[9] = 0xff;
    (pTVar4->AllocatorInstance).InlineData[10] = 0xff;
    (pTVar4->AllocatorInstance).InlineData[0xb] = 0xff;
    _Src = local_48.Pointer;
  }
  iVar12 = local_48.Index;
  uVar7 = ::GetTypeHash(_Src);
  iVar11 = *(int *)&(this->Elements).field_0x8;
  bVar5 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if ((iVar11 - iVar6 != 1) && (iVar11 != iVar6)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & uVar7) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar11 * 0x58 + lVar2);
        bVar5 = FOptimusInstancedNode::operator==(this_00,_Src);
        if (bVar5) {
          bVar5 = iVar11 != -1;
          iVar12 = local_48.Index;
          if (bVar5) {
            _Dst = (void *)((longlong)iVar11 * 0x58 + lVar2);
            DestructItems<FOptimusInstancedNode,int>
                      (*(FOptimusInstancedNode **)((longlong)_Dst + 0x40),
                       *(int *)((longlong)_Dst + 0x48));
            if (*(void **)((longlong)_Dst + 0x40) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x40));
            }
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            memmove(_Dst,_Src,0x50);
            TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar12 = iVar11;
          }
          goto LAB_14e12d2fd;
        }
        iVar11 = *(int *)(this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                          InlineData + 8);
      } while (iVar11 != -1);
    }
    bVar5 = false;
    iVar12 = local_48.Index;
  }
LAB_14e12d2fd:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar5;
  }
  if (bVar5 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar13 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)(_Src[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData +
               0xc) = uVar7;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)
       (_Src[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = iVar12;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar12;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusInstancedNode_const_&>_> @ 14e12d410

/* WARNING: Type propagation algorithm not settling */

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusInstancedNode_const_&>_>
          (TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FOptimusInstancedNode_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  FOptimusInstancedNode *this_00;
  int iVar9;
  char *in_R9;
  void *_Dst;
  int iVar10;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x98,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x98 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x98 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer !=
      (TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>
       *)0x0) {
    TKeyInitializer<FOptimusInstancedNode_const_&>::
    operator<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>_TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>
              ((TKeyInitializer<FOptimusInstancedNode_const_&> *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x90) = 0xffffffff;
  }
  uVar5 = ::GetTypeHash(local_48.Pointer);
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar3 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar9 * 0x98 + lVar2);
        bVar3 = FOptimusInstancedNode::operator==(this_00,local_48.Pointer);
        if (bVar3) {
          bVar3 = iVar9 != -1;
          if (bVar3) {
            _Dst = (void *)((longlong)iVar9 * 0x98 + *(longlong *)&this->Elements);
            *(undefined4 *)((longlong)_Dst + 0x88) = 0;
            if (*(void **)((longlong)_Dst + 0x80) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x80));
            }
            TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,FOptimus_KernelConnection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,FOptimus_KernelConnection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,FOptimus_KernelConnection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 0x40));
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            memmove(_Dst,local_48.Pointer,0x90);
            TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          goto LAB_14e12d561;
        }
        iVar9 = *(int *)(this_00[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 8);
      } while (iVar9 != -1);
    }
    bVar3 = false;
  }
LAB_14e12d561:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar3;
  }
  if (bVar3 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)&((TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>
                  *)((longlong)local_48.Pointer + 0x90))->field_0x4 = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x90) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusInstancedNode_const_&>_> @ 14e12d690

/* WARNING: Type propagation algorithm not settling */

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusInstancedNode_const_&>_>
          (TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FOptimusInstancedNode_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  FOptimusInstancedNode *this_00;
  int iVar9;
  char *in_R9;
  void *_Dst;
  int iVar10;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x98,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar9 = iVar9 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x98 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x98 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer !=
      (TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>
       *)0x0) {
    TKeyInitializer<FOptimusInstancedNode_const_&>::
    operator<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>
              ((TKeyInitializer<FOptimusInstancedNode_const_&> *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x90) = 0xffffffff;
  }
  uVar5 = ::GetTypeHash(local_48.Pointer);
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar3 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar9 * 0x98 + lVar2);
        bVar3 = FOptimusInstancedNode::operator==(this_00,local_48.Pointer);
        if (bVar3) {
          bVar3 = iVar9 != -1;
          if (bVar3) {
            _Dst = (void *)((longlong)iVar9 * 0x98 + *(longlong *)&this->Elements);
            *(undefined4 *)((longlong)_Dst + 0x88) = 0;
            if (*(void **)((longlong)_Dst + 0x80) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x80));
            }
            TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 0x40));
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            memmove(_Dst,local_48.Pointer,0x90);
            TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          goto LAB_14e12d7e1;
        }
        iVar9 = *(int *)(this_00[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 8);
      } while (iVar9 != -1);
    }
    bVar3 = false;
  }
LAB_14e12d7e1:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar3;
  }
  if (bVar3 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar10 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)&((TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>
                  *)((longlong)local_48.Pointer + 0x90))->field_0x4 = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x90) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_> @ 14e12d910

/* WARNING: Type propagation algorithm not settling */

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedPin,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_>
          (TSet<TTuple<FOptimusInstancedPin,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FOptimusInstancedPin_const_&> *param_1,bool *param_2)

{
  FOptimusPinTraversalContext *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  int iVar12;
  char *in_R9;
  undefined1 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x58 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x58 + lVar3) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (FOptimusInstancedPin *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    ((local_48.Pointer)->RoutedNode).Node = (UOptimusNode *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&((local_48.Pointer)->RoutedNode).TraversalContext,
               (FOptimusPinTraversalContext *)(puVar4 + 1));
    (local_48.Pointer)->LoopIndex = *(int *)(puVar4 + 7);
    *(UOptimusNodePin **)((longlong)local_48.Pointer + 0x40) = (UOptimusNodePin *)puVar4[8];
    (((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).RoutedNode.Node =
         (UOptimusNode *)0x0;
    pFVar1 = &(((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).
              RoutedNode.TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = 0xff;
  }
  uVar8 = ((uint)((ulonglong)*(UOptimusNodePin **)((longlong)local_48.Pointer + 0x40) >> 0x14) &
           0xffff ^ (uint)((ulonglong)*(UOptimusNodePin **)((longlong)local_48.Pointer + 0x40) >> 4)
          ) * -0x7a143595;
  uVar11 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = ::GetTypeHash(local_48.Pointer);
  bVar14 = false;
  uVar8 = (uVar8 >> 2) + (uVar11 >> 0x10 ^ uVar11) + 0x9e3779b9 + uVar8 * 0x40 ^ uVar8;
  if (*(int *)puVar13 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FOptimusInstancedPin>(this,uVar8,local_48.Pointer);
    bVar14 = iVar7 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar7 * 0x58 + *(longlong *)&this->Elements);
      pvVar5 = *(void **)((longlong)_Dst + 0x28);
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      memmove(_Dst,local_48.Pointer,0x50);
      TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar11 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar9 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).
                RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 4) =
           uVar8;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)
       (((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).RoutedNode.
       TraversalContext.ReferenceNesting.AllocatorInstance.InlineData =
           *(undefined4 *)((longlong)FVar10 + uVar9 * 4);
      *(int *)((longlong)FVar10 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_> @ 14e12db70

/* WARNING: Type propagation algorithm not settling */

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_>
          (TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FOptimusInstancedPin_const_&> *param_1,bool *param_2)

{
  FOptimusPinTraversalContext *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  void *_Dst;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  int iVar12;
  char *in_R9;
  undefined1 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar6 * 0x58 + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x58 + lVar3) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (FOptimusInstancedPin *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    ((local_48.Pointer)->RoutedNode).Node = (UOptimusNode *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&((local_48.Pointer)->RoutedNode).TraversalContext,
               (FOptimusPinTraversalContext *)(puVar4 + 1));
    (local_48.Pointer)->LoopIndex = *(int *)(puVar4 + 7);
    *(UOptimusNodePin **)((longlong)local_48.Pointer + 0x40) = (UOptimusNodePin *)puVar4[8];
    (((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).RoutedNode.Node =
         (UOptimusNode *)0x0;
    pFVar1 = &(((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).
              RoutedNode.TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = 0xff;
  }
  uVar8 = ((uint)((ulonglong)*(UOptimusNodePin **)((longlong)local_48.Pointer + 0x40) >> 0x14) &
           0xffff ^ (uint)((ulonglong)*(UOptimusNodePin **)((longlong)local_48.Pointer + 0x40) >> 4)
          ) * -0x7a143595;
  uVar11 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = ::GetTypeHash(local_48.Pointer);
  bVar14 = false;
  uVar8 = (uVar8 >> 2) + (uVar11 >> 0x10 ^ uVar11) + 0x9e3779b9 + uVar8 * 0x40 ^ uVar8;
  if (*(int *)puVar13 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FOptimusInstancedPin>(this,uVar8,local_48.Pointer);
    bVar14 = iVar7 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar7 * 0x58 + *(longlong *)&this->Elements);
      pvVar5 = *(void **)((longlong)_Dst + 0x28);
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      memmove(_Dst,local_48.Pointer,0x50);
      TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<88,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar11 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar9 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).
                RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 4) =
           uVar8;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)
       (((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).RoutedNode.
       TraversalContext.ReferenceNesting.AllocatorInstance.InlineData =
           *(undefined4 *)((longlong)FVar10 + uVar9 * 4);
      *(int *)((longlong)FVar10 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_> @ 14e12ddd0

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_>
          (TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FOptimusInstancedPin_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  void *_Dst;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar4 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar4 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x98,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar4 = iVar4 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x98 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x98 + lVar2) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (TTuple<FOptimusInstancedPin,FOptimusInstancedPin> *)0x0) {
    TKeyInitializer<FOptimusInstancedPin_const_&>::
    operator<FOptimusInstancedPin,FOptimusInstancedPin>_TTuple<FOptimusInstancedPin,FOptimusInstancedPin>
              ((TKeyInitializer<FOptimusInstancedPin_const_&> *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x90) = 0xffffffff;
  }
  uVar5 = ((uint)(*(ulonglong *)((longlong)local_48.Pointer + 0x40) >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)((longlong)local_48.Pointer + 0x40) >> 4)) * -0x7a143595;
  uVar8 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = ::GetTypeHash(local_48.Pointer);
  bVar11 = false;
  uVar5 = (uVar5 >> 2) + (uVar8 >> 0x10 ^ uVar8) + 0x9e3779b9 + uVar5 * 0x40 ^ uVar5;
  if (*(int *)puVar10 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar4 = FindIndexByHash<FOptimusInstancedPin>(this,uVar5,local_48.Pointer);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar4 * 0x98 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)_Dst + 0x70) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x70));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      memmove(_Dst,local_48.Pointer,0x90);
      TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<152,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar4;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar8 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)&((TTuple<FOptimusInstancedPin,FOptimusInstancedPin> *)
                ((longlong)local_48.Pointer + 0x90))->field_0x4 = uVar5;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x90) =
           *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
      *(int *)((longlong)FVar7 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_> @ 14e12e030

/* WARNING: Type propagation algorithm not settling */

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusInstancedPin_const_&>_>
          (void *this,TKeyInitializer<FOptimusInstancedPin_const_&> *param_1,bool *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  FOptimusPinTraversalContext *pFVar3;
  TArray<IOptimusNodePinRouter_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(this,&local_48);
  if (local_48.Pointer != (FOptimusInstancedPin *)0x0) {
    puVar1 = *(undefined8 **)param_2;
    ((local_48.Pointer)->RoutedNode).Node = (UOptimusNode *)*puVar1;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&((local_48.Pointer)->RoutedNode).TraversalContext,
               (FOptimusPinTraversalContext *)(puVar1 + 1));
    (local_48.Pointer)->LoopIndex = *(int *)(puVar1 + 7);
    *(UOptimusNodePin **)((longlong)local_48.Pointer + 0x40) = (UOptimusNodePin *)puVar1[8];
    (((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).RoutedNode.Node =
         (UOptimusNode *)0x0;
    pFVar3 = &(((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).
              RoutedNode.TraversalContext;
    (pFVar3->ReferenceNesting).AllocatorInstance.InlineData[0] = '\0';
    (pFVar3->ReferenceNesting).AllocatorInstance.InlineData[1] = '\0';
    (pFVar3->ReferenceNesting).AllocatorInstance.InlineData[2] = '\0';
    (pFVar3->ReferenceNesting).AllocatorInstance.InlineData[3] = '\0';
    (pFVar3->ReferenceNesting).AllocatorInstance.InlineData[4] = '\0';
    (pFVar3->ReferenceNesting).AllocatorInstance.InlineData[5] = '\0';
    (pFVar3->ReferenceNesting).AllocatorInstance.InlineData[6] = '\0';
    (pFVar3->ReferenceNesting).AllocatorInstance.InlineData[7] = '\0';
    pTVar4 = &(((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).
              RoutedNode.TraversalContext.ReferenceNesting;
    (pTVar4->AllocatorInstance).InlineData[8] = 0xff;
    (pTVar4->AllocatorInstance).InlineData[9] = 0xff;
    (pTVar4->AllocatorInstance).InlineData[10] = 0xff;
    (pTVar4->AllocatorInstance).InlineData[0xb] = 0xff;
  }
  uVar6 = ((uint)((ulonglong)*(UOptimusNodePin **)((longlong)local_48.Pointer + 0x40) >> 0x14) &
           0xffff ^ (uint)((ulonglong)*(UOptimusNodePin **)((longlong)local_48.Pointer + 0x40) >> 4)
          ) * -0x7a143595;
  uVar9 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = ::GetTypeHash(local_48.Pointer);
  bVar11 = false;
  iVar10 = 1;
  uVar6 = (uVar6 >> 2) + (uVar9 >> 0x10 ^ uVar9) + 0x9e3779b9 + uVar6 * 0x40 ^ uVar6;
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    iVar5 = FindIndexByHash<FOptimusInstancedPin>(this,uVar6,local_48.Pointer);
    bVar11 = iVar5 != -1;
    if (bVar11) {
      _Dst = (void *)((longlong)iVar5 * 0x60 + *(longlong *)this);
      pvVar2 = *(void **)((longlong)_Dst + 0x28);
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      memmove(_Dst,local_48.Pointer,0x58);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar9 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar9) {
      uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar10 <= *(int *)((longlong)this + 0x48))) {
      uVar6 = *(int *)((longlong)this + 0x48) - 1U & uVar6;
      *(uint *)((((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).
                RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 0xc) =
           uVar6;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar6;
      *(undefined4 *)
       ((((FOptimusInstancedPin *)((longlong)local_48.Pointer + 0x48))->InstancedNode).RoutedNode.
        TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
           *(undefined4 *)(lVar8 + uVar7 * 4);
      *(int *)(lVar8 + uVar7 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusRoutedConstNode_const_&>_> @ 14e12e210

FSetElementId __thiscall
TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>
          (TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FOptimusRoutedConstNode_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *in_R9;
  void *_Dst;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if (iVar4 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar4 = iVar4 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x78 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x78 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>_> *)0x0) {
    TKeyInitializer<FOptimusRoutedConstNode_const_&>::
    operator<FOptimusRoutedConstNode,FOptimusRoutedConstNode>_TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>
              ((TKeyInitializer<FOptimusRoutedConstNode_const_&> *)param_2,local_38.Pointer);
    *(undefined4 *)((longlong)local_38.Pointer + 0x70) = 0xffffffff;
  }
  uVar5 = ((uint)(*(ulonglong *)local_38.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_38.Pointer >> 4)) * -0x7a143595;
  uVar6 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar5 = ::GetTypeHash((FOptimusPinTraversalContext *)((longlong)local_38.Pointer + 8));
  bVar7 = false;
  uVar6 = (uVar6 >> 2) + 0x9e3779b9 + uVar6 * 0x40 + uVar5 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar4 = FindIndexByHash<FOptimusRoutedConstNode>(this,uVar6,local_38.Pointer);
    bVar7 = iVar4 != -1;
    if (bVar7) {
      _Dst = (void *)((longlong)iVar4 * 0x78 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)_Dst + 0x60) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x60));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      memmove(_Dst,local_38.Pointer,0x70);
      TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar4;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,uVar6,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusRoutedConstNode_const_&>_> @ 14e12e3e0

FSetElementId __thiscall
TSet<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>
          (TSet<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<FOptimusRoutedConstNode_const_&> *param_1,bool *param_2)

{
  FOptimusPinTraversalContext *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  TArray<IOptimusNodePinRouter_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  FOptimusRoutedConstNode *_Src;
  char *in_R9;
  undefined1 *puVar13;
  void *_Dst;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer == (FOptimusRoutedConstNode *)0x0) {
    _Src = (FOptimusRoutedConstNode *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)param_2;
    *(UOptimusNode **)local_48.Pointer = (UOptimusNode *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8),
               (FOptimusPinTraversalContext *)(puVar4 + 1));
    ((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->Node = (UOptimusNode *)0x0;
    pFVar1 = &((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[4] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[5] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[6] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[7] = '\0';
    pTVar5 = &(((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext).
              ReferenceNesting;
    (pTVar5->AllocatorInstance).InlineData[8] = 0xff;
    (pTVar5->AllocatorInstance).InlineData[9] = 0xff;
    (pTVar5->AllocatorInstance).InlineData[10] = 0xff;
    (pTVar5->AllocatorInstance).InlineData[0xb] = 0xff;
    _Src = local_48.Pointer;
  }
  uVar8 = ((uint)((ulonglong)_Src->Node >> 0x14) & 0xffff ^ (uint)((ulonglong)_Src->Node >> 4)) *
          -0x7a143595;
  uVar9 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar9 = uVar9 >> 0x10 ^ uVar9;
  uVar8 = ::GetTypeHash(&_Src->TraversalContext);
  bVar14 = false;
  uVar9 = uVar9 * 0x40 + -0x61c88647 + (uVar9 >> 2) + uVar8 ^ uVar9;
  if (*(int *)puVar13 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FOptimusRoutedConstNode>(this,uVar9,_Src);
    bVar14 = iVar7 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar7 * 0x50 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x38));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      memmove(_Dst,_Src,0x48);
      TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar8 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar10 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar12 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)(_Src[1].TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 0xc) =
           uVar9;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)(_Src[1].TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
           *(undefined4 *)((longlong)FVar11 + uVar10 * 4);
      *(int *)((longlong)FVar11 + uVar10 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<FOptimusRoutedConstNode_const_&>_> @ 14e12e650

FSetElementId __thiscall
TSet<TTuple<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>
          (void *this,TKeyInitializer<FOptimusRoutedConstNode_const_&> *param_1,bool *param_2)

{
  int iVar1;
  FOptimusPinTraversalContext *pFVar2;
  int iVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar3 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0x48);
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar3 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar6);
  if (local_48.Pointer != (FOptimusRoutedConstNode *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    *(UOptimusNode **)local_48.Pointer = (UOptimusNode *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8),
               (FOptimusPinTraversalContext *)(puVar4 + 1));
    *(undefined4 *)&((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->Node = 0;
    pFVar2 = &((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext;
    (pFVar2->ReferenceNesting).AllocatorInstance.InlineData[0] = 0xff;
    (pFVar2->ReferenceNesting).AllocatorInstance.InlineData[1] = 0xff;
    (pFVar2->ReferenceNesting).AllocatorInstance.InlineData[2] = 0xff;
    (pFVar2->ReferenceNesting).AllocatorInstance.InlineData[3] = 0xff;
  }
  uVar7 = ((uint)((ulonglong)*(UOptimusNode **)local_48.Pointer >> 0x14) & 0xffff ^
          (uint)((ulonglong)*(UOptimusNode **)local_48.Pointer >> 4)) * -0x7a143595;
  uVar8 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar7 = ::GetTypeHash((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8));
  bVar12 = false;
  uVar8 = uVar8 * 0x40 + -0x61c88647 + (uVar8 >> 2) + uVar7 ^ uVar8;
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    iVar6 = FindIndexByHash<FOptimusRoutedConstNode>(this,uVar8,local_48.Pointer);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      lVar10 = *(longlong *)this;
      pvVar5 = *(void **)(lVar10 + 0x28 + (longlong)iVar6 * 0x48);
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      memmove((void *)(lVar10 + (longlong)iVar6 * 0x48),local_48.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar9 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar11 <= *(int *)((longlong)this + 0x48))) {
      uVar8 = *(int *)((longlong)this + 0x48) - 1U & uVar8;
      *(uint *)((((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext)
                .ReferenceNesting.AllocatorInstance.InlineData + 4) = uVar8;
      lVar10 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar10 = (longlong)this + 0x38;
      }
      uVar9 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar8;
      *(undefined4 *)
       (((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext).
       ReferenceNesting.AllocatorInstance.InlineData = *(undefined4 *)(lVar10 + uVar9 * 4);
      *(int *)(lVar10 + uVar9 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&>_> @ 14e12e8a0

FSetElementId __thiscall
TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&>_>
          (TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_&&,FOptimus_InterfaceBinding_const_&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  void *_Dst;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x40 + 4 + lVar2);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x40 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(uint *)((longlong)local_48.Pointer + 0x10) = *(uint *)(puVar3 + 1);
    ::FString::FString((FString *)((longlong)local_48.Pointer + 0x18),(FString *)(puVar3 + 2));
    ::FString::FString((FString *)((longlong)local_48.Pointer + 0x28),(FString *)(puVar3 + 4));
    *(uint *)((longlong)local_48.Pointer + 0x38) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar10 = *(uint *)local_48.Pointer;
  if ((iVar8 - iVar4 != 1) && (iVar8 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar8 * 0x40 + lVar2) == uVar10) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x40 + lVar2);
            if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x28));
            }
            if (*(void **)((longlong)_Dst + 0x18) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x18));
            }
            memmove(_Dst,local_48.Pointer,0x38);
            TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<64,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x40 + 0x38 + lVar2);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_48.Pointer + 0x3c) = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(uint *)((longlong)local_48.Pointer + 0x38) = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,TArray<FGuid,TSizedDefaultAllocator<32>_>_&&>_> @ 14e12eb00

FSetElementId __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,TArray<FGuid,TSizedDefaultAllocator<32>_>_&&>_>
          (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,TArray<FGuid,TSizedDefaultAllocator<32>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  FWeakObjectPtr FVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  uint uVar10;
  FWeakObjectPtr *pFVar11;
  bool bVar12;
  FWeakObjectPtr local_res8;
  FSparseArrayAllocationInfo local_48;
  
  iVar5 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar5 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar5 = iVar5 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer == (FWeakObjectPtr *)0x0) {
    pFVar11 = (FWeakObjectPtr *)0x0;
  }
  else {
    pFVar11 = *(FWeakObjectPtr **)(param_2 + 8);
    *(FWeakObjectPtr *)local_48.Pointer = **(FWeakObjectPtr **)param_2;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 8))->ObjectIndex = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 8))->ObjectSerialNumber = 0;
    *(FWeakObjectPtr *)((longlong)local_48.Pointer + 8) = *pFVar11;
    pFVar11->ObjectIndex = 0;
    pFVar11->ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x10))->ObjectIndex = pFVar11[1].ObjectIndex;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x10))->ObjectSerialNumber =
         pFVar11[1].ObjectSerialNumber;
    pFVar11[1].ObjectIndex = 0;
    pFVar11[1].ObjectSerialNumber = 0;
    ((FWeakObjectPtr *)((longlong)local_48.Pointer + 0x18))->ObjectIndex = -1;
    pFVar11 = local_48.Pointer;
  }
  FVar3 = *pFVar11;
  bVar12 = false;
  uVar10 = FVar3.ObjectSerialNumber ^ FVar3.ObjectIndex;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    local_res8 = FVar3;
    iVar5 = FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                      (this,uVar10,(TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res8);
    bVar12 = iVar5 != -1;
    if (bVar12) {
      local_res8 = (FWeakObjectPtr)((longlong)iVar5 * 0x20 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)local_res8 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)local_res8 + 8));
      }
      memmove((void *)local_res8,pFVar11,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar5;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      pFVar11[3].ObjectSerialNumber = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      pFVar11[3].ObjectIndex = *(int *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_&&,FOptimusValueIdentifier_&&>_> @ 14e12ed30

FSetElementId __thiscall
TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_&&,FOptimusValueIdentifier_&&>_>
          (TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_&&,FOptimusValueIdentifier_&&> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)((longlong)iVar7 * 0x1c + 4 + lVar3);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x1c + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar7);
  if (local_38.Pointer != (TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_> *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = *(undefined4 *)(puVar4 + 1);
    *(undefined4 *)((longlong)local_38.Pointer + 0x14) = 0xffffffff;
  }
  uVar5 = *(undefined8 *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
  uVar8 = (int)((ulonglong)uVar5 >> 0x20) + uVar8;
  bVar6 = TryReplaceExisting(this,uVar8,local_38.Pointer,local_res8,in_R9);
  if (!bVar6) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)local_38.Pointer + 0x18) = uVar8;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 0x14) =
           *(undefined4 *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>_> @ 14e12eee0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>_>
          (TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *in_R9;
  void *_Dst;
  uint *_Src;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer == (uint *)0x0) {
    _Src = (uint *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    ((uint *)((longlong)local_48.Pointer + 8))[0] = 0;
    ((uint *)((longlong)local_48.Pointer + 8))[1] = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *puVar3 = 0;
    *(uint *)((longlong)local_48.Pointer + 0x10) = *(uint *)(puVar3 + 1);
    *(uint *)((longlong)local_48.Pointer + 0x14) = *(uint *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(uint *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar10 = *_Src;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar10) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar9 * 0x20 + lVar2) == uVar10) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            DestructItems<FOptimusPersistentStructuredBuffer,int>
                      (*(FOptimusPersistentStructuredBuffer **)((longlong)_Dst + 8),
                       *(int *)((longlong)_Dst + 0x10));
            if (*(void **)((longlong)_Dst + 8) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 8));
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar2);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      _Src[7] = uVar10;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      _Src[6] = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UOptimusComponentSourceBinding_*_const_&,UOptimusNode_ComponentSource_*_&&>_> @ 14e12f140

FSetElementId __thiscall
TSet<TTuple<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*>,TDefaultMapHashableKeyFuncs<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UOptimusComponentSourceBinding_*_const_&,UOptimusNode_ComponentSource_*_&&>_>
          (TSet<TTuple<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*>,TDefaultMapHashableKeyFuncs<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UOptimusComponentSourceBinding_*_const_&,UOptimusNode_ComponentSource_*_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar12 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)puVar11;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar10 * 0x18) == uVar6) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UOptimusNode_*_const_&,FName_&&>_> @ 14e12f380

FSetElementId __thiscall
TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<UOptimusNode_*_const_&,FName_&&>_>
          (TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UOptimusNode_*_const_&,FName_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar12 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)puVar11;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar10 * 0x18) == uVar6) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<UOptimusNode_DataInterface_*_const_&,UOptimusComponentSourceBinding_*_const_&>_> @ 14e12f5c0

FSetElementId __thiscall
TSet<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>,TDefaultMapHashableKeyFuncs<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<UOptimusNode_DataInterface_*_const_&,UOptimusComponentSourceBinding_*_const_&>_>
          (TSet<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>,TDefaultMapHashableKeyFuncs<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<UOptimusNode_DataInterface_*_const_&,UOptimusComponentSourceBinding_*_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar12 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)puVar11;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar10 * 0x18) == uVar6) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            memmove((void *)(lVar2 + (longlong)iVar10 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar2 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FGuid_const_&,TObjectPtr<UOptimusDeformerInstance>_&&>_> @ 14e12f800

FSetElementId __thiscall
TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FGuid_const_&,TObjectPtr<UOptimusDeformerInstance>_&&>_>
          (TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FGuid_const_&,TObjectPtr<UOptimusDeformerInstance>_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  UObject *pUVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulong64 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  char *in_R9;
  undefined1 *puVar13;
  bool bVar14;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar7 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar2);
    iVar7 = iVar7 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar13 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (FGuid *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    uVar5 = (*(undefined8 **)param_2)[1];
    *(undefined8 *)local_48.Pointer = **(undefined8 **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = uVar5;
    pUVar4 = (UObject *)*puVar3;
    *(UObject **)((longlong)local_48.Pointer + 0x10) = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = 0xffffffff;
  }
  uVar8 = CityHash64(local_48.Pointer,0x10);
  bVar14 = false;
  if (*(int *)puVar13 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FGuid>(this,(uint)uVar8,local_48.Pointer);
    bVar14 = iVar7 != -1;
    if (bVar14) {
      memmove((void *)((longlong)iVar7 * 0x20 + *(longlong *)&this->Elements),local_48.Pointer,0x18)
      ;
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar10 = *(int *)puVar13 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar12 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & (uint)uVar8;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->D = uVar10;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      ((FGuid *)((longlong)local_48.Pointer + 0x10))->C = *(uint *)((longlong)FVar11 + uVar9 * 4);
      *(int *)((longlong)FVar11 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOptimusInstancedNode_const_&,UComputeDataInterface_*_const_&>_> @ 14e12fa00

/* WARNING: Type propagation algorithm not settling */

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOptimusInstancedNode_const_&,UComputeDataInterface_*_const_&>_>
          (TSet<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOptimusInstancedNode_const_&,UComputeDataInterface_*_const_&>
                 *param_1,bool *param_2)

{
  FOptimusPinTraversalContext *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  int iVar14;
  FOptimusInstancedNode *this_00;
  char *in_R9;
  void *_Dst;
  FSparseArrayAllocationInfo local_48;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar13 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar8);
  if (local_48.Pointer != (FOptimusInstancedNode *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    puVar5 = *(undefined8 **)(param_2 + 8);
    (local_48.Pointer)->Node = (UOptimusNode *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&(local_48.Pointer)->TraversalContext,(FOptimusPinTraversalContext *)(puVar4 + 1));
    *(int *)((longlong)local_48.Pointer + 0x38) = *(int *)(puVar4 + 7);
    (((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).Node =
         (UOptimusNode *)*puVar5;
    pFVar1 = &(((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).
              TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = 0xff;
  }
  uVar9 = ::GetTypeHash(local_48.Pointer);
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar7 = false;
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar8 != 1) && (iVar13 != iVar8)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & uVar9) * 4);
    if (iVar13 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar13 * 0x50 + lVar3);
        bVar7 = FOptimusInstancedNode::operator==(this_00,local_48.Pointer);
        if (bVar7) {
          bVar7 = iVar13 != -1;
          if (bVar7) {
            _Dst = (void *)((longlong)iVar13 * 0x50 + *(longlong *)&this->Elements);
            pvVar6 = *(void **)((longlong)_Dst + 0x28);
            if (pvVar6 != (void *)0x0) {
              FMemory::Free(pvVar6);
            }
            memmove(_Dst,local_48.Pointer,0x48);
            TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar13;
          }
          goto LAB_14e12fb5f;
        }
        iVar13 = *(int *)this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData;
      } while (iVar13 != -1);
    }
    bVar7 = false;
  }
LAB_14e12fb5f:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar14 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)((((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).
                TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 4) = uVar9;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)
       (((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).TraversalContext
       .ReferenceNesting.AllocatorInstance.InlineData =
           *(undefined4 *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOptimusInstancedNode_const_&,UComputeKernel_*_const_&>_> @ 14e12fc60

/* WARNING: Type propagation algorithm not settling */

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedNode,UComputeKernel_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeKernel_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOptimusInstancedNode_const_&,UComputeKernel_*_const_&>_>
          (TSet<TTuple<FOptimusInstancedNode,UComputeKernel_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeKernel_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOptimusInstancedNode_const_&,UComputeKernel_*_const_&> *param_1,
          bool *param_2)

{
  FOptimusPinTraversalContext *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  int iVar14;
  FOptimusInstancedNode *this_00;
  char *in_R9;
  void *_Dst;
  FSparseArrayAllocationInfo local_48;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar14 = 1;
  if (iVar13 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar8 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar8);
  if (local_48.Pointer != (FOptimusInstancedNode *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    puVar5 = *(undefined8 **)(param_2 + 8);
    (local_48.Pointer)->Node = (UOptimusNode *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&(local_48.Pointer)->TraversalContext,(FOptimusPinTraversalContext *)(puVar4 + 1));
    *(int *)((longlong)local_48.Pointer + 0x38) = *(int *)(puVar4 + 7);
    (((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).Node =
         (UOptimusNode *)*puVar5;
    pFVar1 = &(((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).
              TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = 0xff;
  }
  uVar9 = ::GetTypeHash(local_48.Pointer);
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar7 = false;
  iVar8 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar8 != 1) && (iVar13 != iVar8)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & uVar9) * 4);
    if (iVar13 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar13 * 0x50 + lVar3);
        bVar7 = FOptimusInstancedNode::operator==(this_00,local_48.Pointer);
        if (bVar7) {
          bVar7 = iVar13 != -1;
          if (bVar7) {
            _Dst = (void *)((longlong)iVar13 * 0x50 + *(longlong *)&this->Elements);
            pvVar6 = *(void **)((longlong)_Dst + 0x28);
            if (pvVar6 != (void *)0x0) {
              FMemory::Free(pvVar6);
            }
            memmove(_Dst,local_48.Pointer,0x48);
            TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar13;
          }
          goto LAB_14e12fdbf;
        }
        iVar13 = *(int *)this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData;
      } while (iVar13 != -1);
    }
    bVar7 = false;
  }
LAB_14e12fdbf:
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    uVar11 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar11) {
      uVar10 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar14 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)((((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).
                TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 4) = uVar9;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar10 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)
       (((FOptimusInstancedNode *)((longlong)local_48.Pointer + 0x40))->RoutedNode).TraversalContext
       .ReferenceNesting.AllocatorInstance.InlineData =
           *(undefined4 *)((longlong)FVar12 + uVar10 * 4);
      *(int *)((longlong)FVar12 + uVar10 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar14;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOptimusRoutedConstNode_const_&,UOptimusComputeDataInterface_*_const_&>_> @ 14e12fec0

FSetElementId __thiscall
TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOptimusRoutedConstNode_const_&,UOptimusComputeDataInterface_*_const_&>_>
          (TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOptimusRoutedConstNode_const_&,UOptimusComputeDataInterface_*_const_&>
                 *param_1,bool *param_2)

{
  FOptimusPinTraversalContext *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  char *in_R9;
  undefined1 *puVar14;
  bool bVar15;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar8 == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  puVar14 = &(this->Elements).field_0x8;
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar7);
  if (local_48.Pointer != (FOptimusRoutedConstNode *)0x0) {
    puVar4 = *(undefined8 **)param_2;
    puVar5 = *(undefined8 **)(param_2 + 8);
    *(UOptimusNode **)local_48.Pointer = (UOptimusNode *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8),
               (FOptimusPinTraversalContext *)(puVar4 + 1));
    ((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->Node = (UOptimusNode *)*puVar5
    ;
    pFVar1 = &((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = 0xff;
  }
  uVar9 = ((uint)((ulonglong)*(UOptimusNode **)local_48.Pointer >> 0x14) & 0xffff ^
          (uint)((ulonglong)*(UOptimusNode **)local_48.Pointer >> 4)) * -0x7a143595;
  uVar10 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  uVar9 = ::GetTypeHash((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8));
  bVar15 = false;
  uVar10 = uVar10 * 0x40 + -0x61c88647 + (uVar10 >> 2) + uVar9 ^ uVar10;
  if (*(int *)puVar14 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar8 = FindIndexByHash<FOptimusRoutedConstNode>(this,uVar10,local_48.Pointer);
    bVar15 = iVar8 != -1;
    if (bVar15) {
      lVar3 = *(longlong *)&this->Elements;
      pvVar6 = *(void **)(lVar3 + 0x28 + (longlong)iVar8 * 0x48);
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      memmove((void *)(lVar3 + (longlong)iVar8 * 0x48),local_48.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar9 = *(int *)puVar14 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar11 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar13 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext)
                .ReferenceNesting.AllocatorInstance.InlineData + 4) = uVar10;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar11 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)
       (((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext).
       ReferenceNesting.AllocatorInstance.InlineData =
           *(undefined4 *)((longlong)FVar12 + uVar11 * 4);
      *(int *)((longlong)FVar12 + uVar11 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOptimusRoutedConstNode_const_&,FOptimusRoutedConstNode_const_&>_> @ 14e130110

FSetElementId __thiscall
TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOptimusRoutedConstNode_const_&,FOptimusRoutedConstNode_const_&>_>
          (TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOptimusRoutedConstNode_const_&,FOptimusRoutedConstNode_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *in_R9;
  void *_Dst;
  bool bVar9;
  FSparseArrayAllocationInfo local_38;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x78 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x78 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>_> *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(undefined8 *)local_38.Pointer = *puVar3;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_38.Pointer + 8),
               (FOptimusPinTraversalContext *)(puVar3 + 1));
    *(undefined8 *)((longlong)local_38.Pointer + 0x38) = *puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_38.Pointer + 0x40),
               (FOptimusPinTraversalContext *)(puVar4 + 1));
    *(undefined4 *)((longlong)local_38.Pointer + 0x70) = 0xffffffff;
  }
  uVar7 = ((uint)(*(ulonglong *)local_38.Pointer >> 0x14) & 0xffff ^
          (uint)(*(ulonglong *)local_38.Pointer >> 4)) * -0x7a143595;
  uVar8 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar7 = ::GetTypeHash((FOptimusPinTraversalContext *)((longlong)local_38.Pointer + 8));
  bVar9 = false;
  uVar8 = (uVar8 >> 2) + 0x9e3779b9 + uVar8 * 0x40 + uVar7 ^ uVar8;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FOptimusRoutedConstNode>(this,uVar8,local_38.Pointer);
    bVar9 = iVar6 != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)iVar6 * 0x78 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)_Dst + 0x60) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x60));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      memmove(_Dst,local_38.Pointer,0x70);
      TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar9;
  }
  if (bVar9 == false) {
    RehashOrLink(this,uVar8,local_38.Pointer,local_38.Index);
  }
  *(int *)&param_1->Key = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FOptimusRoutedConstNodePin_const_&,FOptimusRoutedConstNodePin_const_&>_> @ 14e130300

FSetElementId __thiscall
TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FOptimusRoutedConstNodePin_const_&,FOptimusRoutedConstNodePin_const_&>_>
          (TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FOptimusRoutedConstNodePin_const_&,FOptimusRoutedConstNodePin_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  void *_Dst;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x78,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar6 = iVar6 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x78 + 4 + lVar2);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x78 + lVar2) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer != (FOptimusRoutedConstNodePin *)0x0) {
    puVar3 = *(undefined8 **)param_2;
    puVar4 = *(undefined8 **)(param_2 + 8);
    *(UOptimusNodePin **)local_48.Pointer = (UOptimusNodePin *)*puVar3;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8),
               (FOptimusPinTraversalContext *)(puVar3 + 1));
    ((FOptimusRoutedConstNodePin *)((longlong)local_48.Pointer + 0x38))->NodePin =
         (UOptimusNodePin *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&((FOptimusRoutedConstNodePin *)((longlong)local_48.Pointer + 0x38))->
                TraversalContext,(FOptimusPinTraversalContext *)(puVar4 + 1));
    *(undefined4 *)&((FOptimusRoutedConstNodePin *)((longlong)local_48.Pointer + 0x70))->NodePin =
         0xffffffff;
  }
  uVar7 = ((uint)((ulonglong)*(UOptimusNodePin **)local_48.Pointer >> 0x14) & 0xffff ^
          (uint)((ulonglong)*(UOptimusNodePin **)local_48.Pointer >> 4)) * -0x7a143595;
  uVar8 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  uVar7 = ::GetTypeHash((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8));
  bVar13 = false;
  uVar8 = uVar8 * 0x40 + -0x61c88647 + (uVar8 >> 2) + uVar7 ^ uVar8;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FOptimusRoutedConstNodePin>(this,uVar8,local_48.Pointer);
    bVar13 = iVar6 != -1;
    if (bVar13) {
      _Dst = (void *)((longlong)iVar6 * 0x78 + *(longlong *)&this->Elements);
      if (*(void **)((longlong)_Dst + 0x60) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x60));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      memmove(_Dst,local_48.Pointer,0x70);
      TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<120,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar7 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar9 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar11 <= this->HashSize)) {
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)
                &((FOptimusRoutedConstNodePin *)((longlong)local_48.Pointer + 0x70))->NodePin + 4) =
           uVar8;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&((FOptimusRoutedConstNodePin *)((longlong)local_48.Pointer + 0x70))->NodePin =
           *(undefined4 *)((longlong)FVar10 + uVar9 * 4);
      *(int *)((longlong)FVar10 + uVar9 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UOptimusNodePin_*_const_&>_> @ 14e130570

FSetElementId __thiscall
TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UOptimusNodePin_*_const_&>_>
          (TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UOptimusNodePin_*_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *_Dst;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  int iVar10;
  char *in_R9;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*> *)0x0
     ) {
    TPairInitializer<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UOptimusNodePin_*_const_&>::
    operator<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>
              ((TPairInitializer<TArray<FName,TSizedDefaultAllocator<32>_>_const_&,UOptimusNodePin_*_const_&>
                *)param_2,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar5 = GetTypeHash<FName,TSizedDefaultAllocator<32>_>(local_48.Pointer);
  bVar12 = false;
  if (*(int *)puVar11 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_>(this,uVar5,local_48.Pointer)
    ;
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _Dst = (undefined8 *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements);
      pvVar3 = (void *)*_Dst;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove(_Dst,local_48.Pointer,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar8 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)&((TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*> *)
                ((longlong)local_48.Pointer + 0x18))->field_0x4 = uVar5;
      FVar9 = (this->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar9 + uVar7 * 4);
      *(int *)((longlong)FVar9 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,UActorComponent_*_const_&>_> @ 14e130770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSetElementId __thiscall
TSet<TTuple<FName,UActorComponent_*>,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,UActorComponent_*_const_&>_>
          (TSet<TTuple<FName,UActorComponent_*>,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,UActorComponent_*_const_&> *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)puVar11;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x18) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,UScriptStruct_*_const_&>_> @ 14e1309a0

FSetElementId __thiscall
TSet<TTuple<FName,UScriptStruct_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,UScriptStruct_*_const_&>_>
          (TSet<TTuple<FName,UScriptStruct_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,UScriptStruct_*_const_&> *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)puVar11;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x18) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,FOptimusDataTypeRegistry::FTypeInfo_const_&>_> @ 14e130bd0

FSetElementId __thiscall
TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,FOptimusDataTypeRegistry::FTypeInfo_const_&>_>
          (TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,FOptimusDataTypeRegistry::FTypeInfo_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  FTypeInfo *pFVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FOptimusDataTypeRegistry::FTypeInfo> *this_00;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa0,0x10,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar9 = *(int *)((longlong)iVar3 * 0xa0 + 4 + lVar1);
    *(int *)&(this->Elements).field_0x30 = iVar9;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0xa0 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<160,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<160,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    pFVar2 = *(FTypeInfo **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    FOptimusDataTypeRegistry::FTypeInfo::FTypeInfo
              ((FTypeInfo *)((longlong)local_48.Pointer + 0x10),pFVar2);
    *(undefined4 *)((longlong)local_48.Pointer + 0x90) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0xa0 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            this_00 = (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FOptimusDataTypeRegistry::FTypeInfo>
                       *)((longlong)iVar8 * 0xa0 + lVar1);
            UE::Core::Private::Tuple::
            TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FOptimusDataTypeRegistry::FTypeInfo>
            ::
            ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FOptimusDataTypeRegistry::FTypeInfo>
                      (this_00);
            memmove(this_00,local_48.Pointer,0x90);
            TSparseArrayBase<160,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<160,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0xa0 + 0x90 + lVar1);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x94) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x90) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FString_const_&,FShaderFunctionDefinition_const_*_&&>_> @ 14e130e30

FSetElementId __thiscall
TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FString_const_&,FShaderFunctionDefinition_const_*_&&>_>
          (TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FString_const_&,FShaderFunctionDefinition_const_*_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  wchar_t *pwVar9;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FString *_Src;
  char *in_R9;
  undefined8 *puVar12;
  bool bVar13;
  FSparseArrayAllocationInfo local_48;
  
  iVar6 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar6 = iVar6 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  _Src = (FString *)0x0;
  iVar6 = 0;
  if (local_48.Pointer != (FString *)0x0) {
    puVar12 = *(undefined8 **)(param_2 + 8);
    ::FString::FString(local_48.Pointer,*(FString **)param_2);
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).AllocatorInstance.Data =
         (FScriptContainerElement *)*puVar12;
    (((FString *)((longlong)local_48.Pointer + 0x10))->Data).ArrayNum = -1;
    _Src = local_48.Pointer;
  }
  iVar4 = (_Src->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar9 = L"";
  }
  else {
    pwVar9 = (wchar_t *)(_Src->Data).AllocatorInstance.Data;
    iVar6 = iVar4 + -1;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar9);
  bVar13 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar6 = FindIndexByHash<FString>(this,uVar5,_Src);
    bVar13 = iVar6 != -1;
    if (bVar13) {
      puVar12 = (undefined8 *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements);
      pvVar3 = (void *)*puVar12;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      memmove(puVar12,_Src,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar13;
  }
  if (bVar13 == false) {
    uVar8 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar11 <= this->HashSize)) {
      uVar5 = this->HashSize - 1U & uVar5;
      _Src[1].Data.ArrayMax = uVar5;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      _Src[1].Data.ArrayNum = *(int *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<enum_EOptimusNodeGraphType> @ 14e131320

FSetElementId __thiscall
TSet<enum_EOptimusNodeGraphType,DefaultKeyFuncs<enum_EOptimusNodeGraphType,0>,FDefaultSetAllocator>
::Emplace<enum_EOptimusNodeGraphType>(void *this,EOptimusNodeGraphType *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  EOptimusNodeGraphType EVar6;
  char *in_R9;
  bool bVar7;
  FSparseArrayAllocationInfo local_38;
  
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar4 * 0xc);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar4);
  if (local_38.Pointer != (TSparseSetElement<EOptimusNodeGraphType> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  bVar7 = false;
  uVar3 = *(uint *)local_38.Pointer;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    EVar6 = *(EOptimusNodeGraphType *)
             (lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar3) * 4);
    if (EVar6 != ~Setup) {
      lVar5 = *(longlong *)this;
      do {
        if (*(uint *)(lVar5 + (longlong)(int)EVar6 * 0xc) == uVar3) {
          bVar7 = EVar6 != ~Setup;
          if (bVar7) {
            *(uint *)(lVar5 + (longlong)(int)EVar6 * 0xc) = uVar3;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = EVar6;
          }
          break;
        }
        EVar6 = *(EOptimusNodeGraphType *)(lVar5 + 4 + (longlong)(int)EVar6 * 0xc);
      } while (EVar6 != ~Setup);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar7;
  }
  if (bVar7 == false) {
    RehashOrLink(this,uVar3,local_38.Pointer,local_38.Index);
  }
  *param_1 = local_38.Index;
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<UOptimusNodeGraph_*_&&>_> @ 14e1316e0

FSetElementId __thiscall
TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UOptimusNodeGraph_*_&&>_>
          (TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UOptimusNodeGraph_*_&&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  longlong *_Src;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer == (longlong *)0x0) {
    _Src = (longlong *)0x0;
  }
  else {
    lVar2 = **(longlong **)param_3;
    *(longlong *)((longlong)local_38.Pointer + 8) = 0;
    *(longlong *)local_38.Pointer = lVar2;
    *(longlong *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar9 * 0x20 + lVar2) == *_Src) {
          bVar10 = iVar9 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar2);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)_Src + 0x1c) = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<int_const_&>_> @ 14e131930

FSetElementId __thiscall
TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<int_const_&>_>
          (TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<int_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  int *_Src;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer == (int *)0x0) {
    _Src = (int *)0x0;
  }
  else {
    iVar9 = **(int **)param_3;
    ((int *)((longlong)local_38.Pointer + 8))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 8))[1] = 0;
    *(int *)local_38.Pointer = iVar9;
    ((int *)((longlong)local_38.Pointer + 0x10))[0] = 0;
    ((int *)((longlong)local_38.Pointer + 0x10))[1] = 0;
    *(int *)((longlong)local_38.Pointer + 0x18) = -1;
    _Src = local_38.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(int *)((longlong)iVar9 * 0x20 + lVar2) == *_Src) {
          bVar10 = iVar9 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar2);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      _Src[7] = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      _Src[6] = *(int *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<UOptimusNode_const_*_const_&>_> @ 14e131b80

FSetElementId __thiscall
TSet<TTuple<UOptimusNode_const_*,enum_EOptimusValueUsage>,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UOptimusNode_const_*_const_&>_>
          (void *this,uint param_1,TKeyInitializer<UOptimusNode_const_*_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 in_register_00000014;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar3 = *(int *)((longlong)this + 0x30);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    iVar2 = *(int *)(*(longlong *)this + 4 + (longlong)iVar3 * 0x18);
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar3);
  if (local_38.Pointer != (longlong *)0x0) {
    *(longlong *)local_38.Pointer = **(longlong **)param_3;
    *(undefined1 *)((longlong)local_38.Pointer + 8) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  iVar3 = *(int *)((longlong)this + 8);
  bVar8 = false;
  if ((iVar3 - *(int *)((longlong)this + 0x34) != 1) && (iVar3 != *(int *)((longlong)this + 0x34)))
  {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & (uint)param_2) * 4);
    if (iVar3 != -1) {
      lVar6 = *(longlong *)this;
      do {
        if (*(longlong *)(lVar6 + (longlong)iVar3 * 0x18) == *(longlong *)local_38.Pointer) {
          bVar8 = iVar3 != -1;
          if (bVar8) {
            memmove((void *)(lVar6 + (longlong)iVar3 * 0x18),local_38.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_38.Index,1);
            local_38.Index = iVar3;
          }
          break;
        }
        iVar3 = *(int *)(lVar6 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar8;
  }
  if (bVar8 == false) {
    uVar5 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar5) {
      uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)((longlong)this + 0x48))) {
      uVar5 = *(int *)((longlong)this + 0x48) - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar5;
      lVar6 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar6 = (longlong)this + 0x38;
      }
      uVar4 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) = *(undefined4 *)(lVar6 + uVar4 * 4);
      *(int *)(lVar6 + uVar4 * 4) = local_38.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<UOptimusNodePin_const_*_const_&>_> @ 14e131d90

FSetElementId __thiscall
TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<UOptimusNodePin_const_*_const_&>_>
          (TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<UOptimusNodePin_const_*_const_&> *param_2,
          bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  void *_Dst;
  longlong *_Src;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar4);
  if (local_38.Pointer == (longlong *)0x0) {
    _Src = (longlong *)0x0;
  }
  else {
    lVar2 = **(longlong **)param_3;
    *(longlong *)((longlong)local_38.Pointer + 8) = 0;
    *(longlong *)local_38.Pointer = lVar2;
    *(longlong *)((longlong)local_38.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = 0xffffffff;
    _Src = local_38.Pointer;
  }
  iVar9 = *(int *)&(this->Elements).field_0x8;
  bVar10 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar9 - iVar4 != 1) && (iVar9 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar9 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar9 * 0x20 + lVar2) == *_Src) {
          bVar10 = iVar9 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar9 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + 0x18 + lVar2);
      } while (iVar9 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)_Src + 0x1c) = uVar6;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)(_Src + 3) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FOptimusInstancedPin_const_&>_> @ 14e131fe0

/* WARNING: Type propagation algorithm not settling */

FSetElementId __thiscall
TSet<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FOptimusInstancedPin_const_&>_>
          (TSet<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FOptimusInstancedPin_const_&> *param_2,bool *param_3)

{
  FOptimusPinTraversalContext *pFVar1;
  undefined8 *puVar2;
  longlong lVar3;
  TArray<IOptimusNodePinRouter_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  FOptimusInstancedPin *_Src;
  void *_Dst;
  bool bVar10;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_38);
  if (local_38.Pointer == (FOptimusInstancedPin *)0x0) {
    _Src = (FOptimusInstancedPin *)0x0;
  }
  else {
    puVar2 = *(undefined8 **)param_3;
    ((local_38.Pointer)->RoutedNode).Node = (UOptimusNode *)*puVar2;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              (&((local_38.Pointer)->RoutedNode).TraversalContext,
               (FOptimusPinTraversalContext *)(puVar2 + 1));
    (local_38.Pointer)->LoopIndex = *(int *)(puVar2 + 7);
    *(UOptimusNodePin **)((longlong)local_38.Pointer + 0x40) = (UOptimusNodePin *)puVar2[8];
    (((FOptimusInstancedPin *)((longlong)local_38.Pointer + 0x48))->InstancedNode).RoutedNode.Node =
         (UOptimusNode *)0x0;
    pFVar1 = &(((FOptimusInstancedPin *)((longlong)local_38.Pointer + 0x48))->InstancedNode).
              RoutedNode.TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[4] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[5] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[6] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[7] = '\0';
    DestructItems<FOptimusInstancedPin,int>((FOptimusInstancedPin *)0x0,0);
    pTVar4 = &(((FOptimusInstancedPin *)((longlong)local_38.Pointer + 0x48))->InstancedNode).
              RoutedNode.TraversalContext.ReferenceNesting;
    (pTVar4->AllocatorInstance).InlineData[8] = 0xff;
    (pTVar4->AllocatorInstance).InlineData[9] = 0xff;
    (pTVar4->AllocatorInstance).InlineData[10] = 0xff;
    (pTVar4->AllocatorInstance).InlineData[0xb] = 0xff;
    _Src = local_38.Pointer;
  }
  bVar10 = false;
  iVar9 = 1;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar5 = FindIndexByHash<FOptimusInstancedPin>(this,(uint)param_2,_Src);
    bVar10 = iVar5 != -1;
    if (bVar10) {
      _Dst = (void *)((longlong)iVar5 * 0x60 + *(longlong *)&this->Elements);
      DestructItems<FOptimusInstancedPin,int>
                (*(FOptimusInstancedPin **)((longlong)_Dst + 0x48),*(int *)((longlong)_Dst + 0x50));
      if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x48));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      memmove(_Dst,_Src,0x58);
      TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar5;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar10;
  }
  if (bVar10 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)(_Src[1].InstancedNode.RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance
                .InlineData + 0xc) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)
       (_Src[1].InstancedNode.RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
        InlineData + 8) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FOptimusRoutedConstNode_const_&>_> @ 14e1321a0

FSetElementId __thiscall
TSet<TTuple<FOptimusRoutedConstNode,int>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>
          (TSet<TTuple<FOptimusRoutedConstNode,int>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FOptimusRoutedConstNode_const_&> *param_2,
          bool *param_3)

{
  FOptimusPinTraversalContext *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  void *pvVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  undefined1 *puVar12;
  bool bVar13;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar7 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x48);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar6);
  if (local_48.Pointer != (FOptimusRoutedConstNode *)0x0) {
    puVar4 = *(undefined8 **)param_3;
    *(UOptimusNode **)local_48.Pointer = (UOptimusNode *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_48.Pointer + 8),
               (FOptimusPinTraversalContext *)(puVar4 + 1));
    *(undefined4 *)&((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->Node = 0;
    pFVar1 = &((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = 0xff;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = 0xff;
  }
  bVar13 = false;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FOptimusRoutedConstNode>(this,(uint)param_2,local_48.Pointer);
    bVar13 = iVar7 != -1;
    if (bVar13) {
      lVar3 = *(longlong *)&this->Elements;
      pvVar5 = *(void **)(lVar3 + 0x28 + (longlong)iVar7 * 0x48);
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      memmove((void *)(lVar3 + (longlong)iVar7 * 0x48),local_48.Pointer,0x40);
      TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_48.Index,1);
      local_48.Index = iVar7;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar13;
  }
  if (bVar13 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext)
                .ReferenceNesting.AllocatorInstance.InlineData + 4) = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)
       (((FOptimusRoutedConstNode *)((longlong)local_48.Pointer + 0x38))->TraversalContext).
       ReferenceNesting.AllocatorInstance.InlineData = *(undefined4 *)((longlong)FVar10 + uVar8 * 4)
      ;
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FOptimusRoutedConstNode_const_&>_> @ 14e1323a0

FSetElementId __thiscall
TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FOptimusRoutedConstNode_const_&>_>
          (TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FOptimusRoutedConstNode_const_&> *param_2,
          bool *param_3)

{
  FOptimusPinTraversalContext *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  TArray<IOptimusNodePinRouter_const_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  FOptimusRoutedConstNode *_Src;
  void *_Dst;
  bool bVar12;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar7 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar7 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x50,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar7 = iVar7 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x50);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x50) = 0xffffffff;
    }
  }
  TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer == (FOptimusRoutedConstNode *)0x0) {
    _Src = (FOptimusRoutedConstNode *)0x0;
  }
  else {
    puVar4 = *(undefined8 **)param_3;
    *(UOptimusNode **)local_38.Pointer = (UOptimusNode *)*puVar4;
    FOptimusPinTraversalContext::FOptimusPinTraversalContext
              ((FOptimusPinTraversalContext *)((longlong)local_38.Pointer + 8),
               (FOptimusPinTraversalContext *)(puVar4 + 1));
    ((FOptimusRoutedConstNode *)((longlong)local_38.Pointer + 0x38))->Node = (UOptimusNode *)0x0;
    pFVar1 = &((FOptimusRoutedConstNode *)((longlong)local_38.Pointer + 0x38))->TraversalContext;
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[0] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[1] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[2] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[3] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[4] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[5] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[6] = '\0';
    (pFVar1->ReferenceNesting).AllocatorInstance.InlineData[7] = '\0';
    DestructItems<FOptimusRoutedConstNode,int>((FOptimusRoutedConstNode *)0x0,0);
    pTVar5 = &(((FOptimusRoutedConstNode *)((longlong)local_38.Pointer + 0x38))->TraversalContext).
              ReferenceNesting;
    (pTVar5->AllocatorInstance).InlineData[8] = 0xff;
    (pTVar5->AllocatorInstance).InlineData[9] = 0xff;
    (pTVar5->AllocatorInstance).InlineData[10] = 0xff;
    (pTVar5->AllocatorInstance).InlineData[0xb] = 0xff;
    _Src = local_38.Pointer;
  }
  bVar12 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    iVar7 = FindIndexByHash<FOptimusRoutedConstNode>(this,(uint)param_2,_Src);
    bVar12 = iVar7 != -1;
    if (bVar12) {
      _Dst = (void *)((longlong)iVar7 * 0x50 + *(longlong *)&this->Elements);
      DestructItems<FOptimusRoutedConstNode,int>
                (*(FOptimusRoutedConstNode **)((longlong)_Dst + 0x38),
                 *(int *)((longlong)_Dst + 0x40));
      if (*(void **)((longlong)_Dst + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x38));
      }
      if (*(void **)((longlong)_Dst + 0x28) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)_Dst + 0x28));
      }
      memmove(_Dst,_Src,0x48);
      TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<80,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,local_38.Index,1);
      local_38.Index = iVar7;
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar12;
  }
  if (bVar12 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)param_2;
      *(uint *)(_Src[1].TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 0xc) =
           uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)(_Src[1].TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<FName_const_&>_> @ 14e1325d0

FSetElementId __thiscall
TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FName_const_&>_>
          (TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FName_const_&> *param_2,bool *param_3)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  ulonglong uVar3;
  uint uVar4;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)this,&local_48);
  if (local_48.Pointer !=
      (TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>
       *)0x0) {
    TKeyInitializer<FName_const_&>::
    operator<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>
              ((TKeyInitializer<FName_const_&> *)param_3,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x58) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Elements).field_0x8;
  bVar8 = false;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar7 = 1;
  if ((iVar6 - iVar1 != 1) && (iVar6 != iVar1)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 +
                    ((ulonglong)(this->HashSize - 1) & (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar6 * 0x60 + lVar2) == *(longlong *)local_48.Pointer) {
          bVar8 = iVar6 != -1;
          if (bVar8) {
            _Dst = (void *)((longlong)iVar6 * 0x60 + lVar2);
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x48));
            }
            TSparseArray<TSparseSetElement<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 8));
            memmove(_Dst,local_48.Pointer,0x58);
            TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar6;
          }
          break;
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x60 + 0x58 + lVar2);
      } while (iVar6 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar8;
  }
  if (bVar8 == false) {
    uVar4 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar4) {
      uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & (uint)param_2;
      *(uint *)&((TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>
                  *)((longlong)local_48.Pointer + 0x58))->field_0x4 = uVar4;
      FVar5 = (this->Hash).SecondaryData;
      if (FVar5 == (ForElementType<FSetElementId>)0x0) {
        FVar5 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x58) =
           *(undefined4 *)((longlong)FVar5 + uVar3 * 4);
      *(int *)((longlong)FVar5 + uVar3 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar7;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TKeyInitializer<enum_EOptimusDeformerExecutionPhase_const_&>_> @ 14e1327a0

FSetElementId __thiscall
TSet<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<enum_EOptimusDeformerExecutionPhase_const_&>_>
          (void *this,uint param_1,TKeyInitializer<EOptimusDeformerExecutionPhase_const_&> *param_2,
          bool *param_3)

{
  void *_Dst;
  ulonglong uVar1;
  uint uVar2;
  undefined4 in_register_00000014;
  longlong lVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_48;
  
  TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(this,&local_48);
  if (local_48.Pointer !=
      (TTuple<EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>
       *)0x0) {
    TKeyInitializer<enum_EOptimusDeformerExecutionPhase_const_&>::
    operator<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>
              (param_3,local_48.Pointer);
    *(undefined4 *)((longlong)local_48.Pointer + 0x58) = 0xffffffff;
  }
  bVar6 = false;
  iVar5 = 1;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar4 = *(int *)(lVar3 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) &
                             (ulonglong)param_2 & 0xffffffff) * 4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)this;
      do {
        if (*(char *)((longlong)iVar4 * 0x60 + lVar3) == *(char *)local_48.Pointer) {
          bVar6 = iVar4 != -1;
          if (bVar6) {
            _Dst = (void *)((longlong)iVar4 * 0x60 + lVar3);
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(void **)((longlong)_Dst + 0x48) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x48));
            }
            TSparseArray<TSparseSetElement<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)((longlong)_Dst + 8));
            memmove(_Dst,local_48.Pointer,0x58);
            TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_48.Index,1);
            local_48.Index = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + lVar3);
      } while (iVar4 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar6;
  }
  if (bVar6 == false) {
    uVar2 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar2) {
      uVar1 = (ulonglong)((uVar2 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar5 <= *(int *)((longlong)this + 0x48))) {
      uVar2 = *(int *)((longlong)this + 0x48) - 1U & (uint)param_2;
      *(uint *)&((TTuple<EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>
                  *)((longlong)local_48.Pointer + 0x58))->field_0x4 = uVar2;
      lVar3 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar3 = (longlong)this + 0x38;
      }
      uVar1 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar2;
      *(undefined4 *)((longlong)local_48.Pointer + 0x58) = *(undefined4 *)(lVar3 + uVar1 * 4);
      *(int *)(lVar3 + uVar1 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar5;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_48.Index;
  return (FSetElementId)param_1;
}

// EmplaceByHash<TPairInitializer<UE::Math::TVector<double>_const_&,int_&&>_> @ 14e132970

FSetElementId __thiscall
TSet<TTuple<UE::Math::TVector<double>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>,FDefaultSetAllocator>
::EmplaceByHash<TPairInitializer<UE::Math::TVector<double>_const_&,int_&&>_>
          (TSet<TTuple<UE::Math::TVector<double>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>,FDefaultSetAllocator>
           *this,uint param_1,TPairInitializer<UE::Math::TVector<double>_const_&,int_&&> *param_2,
          bool *param_3)

{
  int iVar1;
  longlong lVar2;
  double *pdVar3;
  undefined4 *puVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  char *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar11 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar11 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar11 = iVar11 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  puVar12 = &(this->Elements).field_0x8;
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (double *)0x0) {
    pdVar3 = *(double **)param_3;
    puVar4 = *(undefined4 **)(param_3 + 8);
    dVar5 = pdVar3[1];
    *(double *)local_38.Pointer = *pdVar3;
    *(double *)((longlong)local_38.Pointer + 8) = dVar5;
    *(double *)((longlong)local_38.Pointer + 0x10) = pdVar3[2];
    *(undefined4 *)((longlong)local_38.Pointer + 0x18) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 0x20) = 0xffffffff;
  }
  iVar11 = *(int *)puVar12;
  bVar14 = false;
  iVar6 = *(int *)&(this->Elements).field_0x34;
  if ((iVar11 - iVar6 != 1) && (iVar11 != iVar6)) {
    FVar10 = (this->Hash).SecondaryData;
    if (FVar10 == (ForElementType<FSetElementId>)0x0) {
      FVar10 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar11 = *(int *)((longlong)FVar10 + (ulonglong)(this->HashSize - 1U & (uint)param_2) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        lVar7 = (longlong)iVar11;
        if (((*(double *)local_38.Pointer == *(double *)(lVar2 + lVar7 * 0x28)) &&
            (*(double *)((longlong)local_38.Pointer + 8) == *(double *)(lVar2 + 8 + lVar7 * 0x28)))
           && (*(double *)((longlong)local_38.Pointer + 0x10) ==
               *(double *)(lVar2 + 0x10 + lVar7 * 0x28))) {
          bVar14 = iVar11 != -1;
          if (bVar14) {
            memmove((void *)(lVar2 + (longlong)iVar11 * 0x28),local_38.Pointer,0x20);
            TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_38.Index,1);
            local_38.Index = iVar11;
          }
          break;
        }
        iVar11 = *(int *)(lVar2 + 0x20 + lVar7 * 0x28);
      } while (iVar11 != -1);
    }
  }
  if (in_stack_00000028 != (char *)0x0) {
    *in_stack_00000028 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar13 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x24) = uVar9;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(undefined4 *)((longlong)local_38.Pointer + 0x20) =
           *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
      *(int *)((longlong)FVar10 + uVar8 * 4) = local_38.Index;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)CONCAT44(in_register_00000014,param_1) = local_38.Index;
  return (FSetElementId)param_1;
}

// FindIndexByHash<UOptimusNode_const_*> @ 14e1332c0

int __thiscall
TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
::FindIndexByHash<UOptimusNode_const_*>
          (TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
           *this,uint param_1,UOptimusNode **param_2)

{
  int iVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar2 = (this->Hash).SecondaryData;
    if (FVar2 == (ForElementType<FSetElementId>)0x0) {
      FVar2 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar2 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(UOptimusNode **)(*(longlong *)&this->Elements + (longlong)iVar1 * 0x18) == *param_2) {
          return iVar1;
        }
        iVar1 = *(int *)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<UE::Math::TVector<double>_> @ 14e133320

int __thiscall
TSet<TTuple<UE::Math::TVector<double>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>,FDefaultSetAllocator>
::FindIndexByHash<UE::Math::TVector<double>_>
          (TSet<TTuple<UE::Math::TVector<double>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,int,0>,FDefaultSetAllocator>
           *this,uint param_1,TVector<double> *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3;
        if ((((param_2->field0_0x0)._s_0.X == *(double *)(lVar1 + lVar2 * 0x28)) &&
            ((param_2->field0_0x0)._s_0.Y == *(double *)(lVar1 + 8 + lVar2 * 0x28))) &&
           ((param_2->field0_0x0)._s_0.Z == *(double *)(lVar1 + 0x10 + lVar2 * 0x28))) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x20 + lVar2 * 0x28);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_> @ 14e1333b0

int __thiscall
TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
::FindIndexByHash<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_>
          (TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
           *this,uint param_1,TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x60 + 0x58 + *(longlong *)&this->Elements))
    {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)((longlong)iVar1 * 0x60 + *(longlong *)&this->Elements);
      bVar2 = TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>::
              UEOpEquals<UComputeDataInterface_const_,bool>
                        ((TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *)&local_res20
                         ,(TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr> *)&local_res8
                        );
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> @ 14e133460

int __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
          (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    for (iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
        iVar1 != -1; iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + *(longlong *)&this->Elements))
    {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)((longlong)iVar1 * 0x20 + *(longlong *)&this->Elements);
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res8);
      if (bVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}

// FindIndexByHash<FGuid> @ 14e133510

int __thiscall
TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
::FindIndexByHash<FGuid>
          (TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
           *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  uint *puVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        puVar2 = (uint *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->Elements);
        if (((param_2->D == puVar2[3] && param_2->C == puVar2[2]) && param_2->B == puVar2[1]) &&
            param_2->A == *puVar2) {
          return uVar1;
        }
        uVar1 = puVar2[6];
      } while (uVar1 != 0xffffffff);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusConstantIdentifier> @ 14e1335c0

int __thiscall
TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusConstantIdentifier>
          (TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusConstantIdentifier *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3;
        if (((*(FName *)(lVar1 + lVar2 * 0x30) == param_2->NodePath) &&
            (*(FName *)(lVar1 + 8 + lVar2 * 0x30) == param_2->GroupName)) &&
           (*(FName *)(lVar1 + 0x10 + lVar2 * 0x30) == param_2->ConstantName)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar1 + 0x28 + lVar2 * 0x30);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedNode> @ 14e133640

int __thiscall
TSet<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedNode>
          (TSet<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusInstancedNode *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FOptimusInstancedNode *this_00;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar3 * 0x50 + lVar1);
        bVar2 = FOptimusInstancedNode::operator==(this_00,param_2);
        if (bVar2) {
          return iVar3;
        }
        iVar3 = *(int *)this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                        InlineData;
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedNode> @ 14e1336e0

int __thiscall
TSet<TTuple<FOptimusInstancedNode,UComputeKernel_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeKernel_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedNode>
          (TSet<TTuple<FOptimusInstancedNode,UComputeKernel_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeKernel_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusInstancedNode *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FOptimusInstancedNode *this_00;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar3 * 0x50 + lVar1);
        bVar2 = FOptimusInstancedNode::operator==(this_00,param_2);
        if (bVar2) {
          return iVar3;
        }
        iVar3 = *(int *)this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                        InlineData;
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedNode> @ 14e133780

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TSet<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedNode>
          (TSet<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusInstancedNode *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FOptimusInstancedNode *this_00;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar3 * 0x58 + lVar1);
        bVar2 = FOptimusInstancedNode::operator==(this_00,param_2);
        if (bVar2) {
          return iVar3;
        }
        iVar3 = *(int *)(this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedNode> @ 14e133820

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedNode>
          (TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusInstancedNode *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FOptimusInstancedNode *this_00;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar3 * 0x98 + lVar1);
        bVar2 = FOptimusInstancedNode::operator==(this_00,param_2);
        if (bVar2) {
          return iVar3;
        }
        iVar3 = *(int *)(this_00[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedNode> @ 14e1338c0

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedNode>
          (TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusInstancedNode *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FOptimusInstancedNode *this_00;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar3 * 0x98 + lVar1);
        bVar2 = FOptimusInstancedNode::operator==(this_00,param_2);
        if (bVar2) {
          return iVar3;
        }
        iVar3 = *(int *)(this_00[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedPin> @ 14e133960

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TSet<TTuple<FOptimusInstancedPin,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedPin>
          (TSet<TTuple<FOptimusInstancedPin,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusInstancedPin *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FOptimusInstancedNode *this_00;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar3 * 0x58 + lVar1);
        bVar2 = FOptimusInstancedNode::operator==(this_00,&param_2->InstancedNode);
        if ((bVar2) && (this_00[1].RoutedNode.Node == (UOptimusNode *)param_2->Pin)) {
          return iVar3;
        }
        iVar3 = *(int *)(this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedPin> @ 14e133a00

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedPin>
          (TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusInstancedPin *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FOptimusInstancedNode *this_00;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar3 * 0x58 + lVar1);
        bVar2 = FOptimusInstancedNode::operator==(this_00,&param_2->InstancedNode);
        if ((bVar2) && (this_00[1].RoutedNode.Node == (UOptimusNode *)param_2->Pin)) {
          return iVar3;
        }
        iVar3 = *(int *)(this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedPin> @ 14e133aa0

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedPin>
          (TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusInstancedPin *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FOptimusInstancedNode *this_00;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar3 * 0x98 + lVar1);
        bVar2 = FOptimusInstancedNode::operator==(this_00,&param_2->InstancedNode);
        if ((bVar2) && (this_00[1].RoutedNode.Node == (UOptimusNode *)param_2->Pin)) {
          return iVar3;
        }
        iVar3 = *(int *)(this_00[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 8);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedPin> @ 14e133b50

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TSet<TTuple<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedPin>(void *this,uint param_1,FOptimusInstancedPin *param_2)

{
  bool bVar1;
  int iVar2;
  FOptimusInstancedNode *this_00;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)this;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar2 * 0x60 + lVar3);
        bVar1 = FOptimusInstancedNode::operator==(this_00,&param_2->InstancedNode);
        if ((bVar1) && (this_00[1].RoutedNode.Node == (UOptimusNode *)param_2->Pin)) {
          return iVar2;
        }
        iVar2 = *(int *)(this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 0x10);
      } while (iVar2 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusInstancedPin> @ 14e133c00

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TSet<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusInstancedPin>
          (TSet<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusInstancedPin *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FOptimusInstancedNode *this_00;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        this_00 = (FOptimusInstancedNode *)((longlong)iVar3 * 0x60 + lVar1);
        bVar2 = FOptimusInstancedNode::operator==(this_00,&param_2->InstancedNode);
        if ((bVar2) && (this_00[1].RoutedNode.Node == (UOptimusNode *)param_2->Pin)) {
          return iVar3;
        }
        iVar3 = *(int *)(this_00[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                         InlineData + 0x10);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusRoutedConstNode> @ 14e133cb0

int __thiscall
TSet<TTuple<FOptimusRoutedConstNode,int>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusRoutedConstNode>
          (TSet<TTuple<FOptimusRoutedConstNode,int>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusRoutedConstNode *param_2)

{
  longlong lVar1;
  longlong lVar2;
  UOptimusNode *pUVar3;
  ForElementType<IOptimusNodePinRouter_const_*> FVar4;
  int iVar5;
  void *_Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      pUVar3 = param_2->Node;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x48;
        if (*(UOptimusNode **)(lVar2 + (longlong)iVar6 * 0x48) == pUVar3) {
          iVar5 = *(int *)(lVar1 + 0x30);
          if (iVar5 == (param_2->TraversalContext).ReferenceNesting.ArrayNum) {
            FVar4 = (param_2->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&param_2->TraversalContext;
            if (FVar4 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              _Buf2 = FVar4;
            }
            _Buf1 = (void *)(lVar1 + 8);
            if (*(void **)(lVar1 + 0x28) != (void *)0x0) {
              _Buf1 = *(void **)(lVar1 + 0x28);
            }
            if (iVar5 == 0) {
              return iVar6;
            }
            iVar5 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar5 << 3);
            if (iVar5 == 0) {
              return iVar6;
            }
          }
        }
        iVar6 = *(int *)(lVar1 + 0x40);
      } while (iVar6 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusRoutedConstNode> @ 14e133d80

int __thiscall
TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusRoutedConstNode>
          (TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusRoutedConstNode *param_2)

{
  longlong lVar1;
  longlong lVar2;
  UOptimusNode *pUVar3;
  ForElementType<IOptimusNodePinRouter_const_*> FVar4;
  int iVar5;
  void *_Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      pUVar3 = param_2->Node;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x48;
        if (*(UOptimusNode **)(lVar2 + (longlong)iVar6 * 0x48) == pUVar3) {
          iVar5 = *(int *)(lVar1 + 0x30);
          if (iVar5 == (param_2->TraversalContext).ReferenceNesting.ArrayNum) {
            FVar4 = (param_2->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&param_2->TraversalContext;
            if (FVar4 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              _Buf2 = FVar4;
            }
            _Buf1 = (void *)(lVar1 + 8);
            if (*(void **)(lVar1 + 0x28) != (void *)0x0) {
              _Buf1 = *(void **)(lVar1 + 0x28);
            }
            if (iVar5 == 0) {
              return iVar6;
            }
            iVar5 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar5 << 3);
            if (iVar5 == 0) {
              return iVar6;
            }
          }
        }
        iVar6 = *(int *)(lVar1 + 0x40);
      } while (iVar6 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusRoutedConstNode> @ 14e133e50

int __thiscall
TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusRoutedConstNode>
          (TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusRoutedConstNode *param_2)

{
  longlong lVar1;
  UOptimusNode *pUVar2;
  ForElementType<IOptimusNodePinRouter_const_*> FVar3;
  int iVar4;
  void *_Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  int iVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      pUVar2 = param_2->Node;
      do {
        lVar6 = (longlong)iVar5 * 0x78;
        if (*(UOptimusNode **)(lVar6 + lVar1) == pUVar2) {
          _Buf1 = (void *)(lVar1 + 8 + lVar6);
          iVar4 = *(int *)((longlong)_Buf1 + 0x28);
          if (iVar4 == (param_2->TraversalContext).ReferenceNesting.ArrayNum) {
            FVar3 = (param_2->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&param_2->TraversalContext;
            if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              _Buf2 = FVar3;
            }
            if (*(void **)((longlong)_Buf1 + 0x20) != (void *)0x0) {
              _Buf1 = *(void **)((longlong)_Buf1 + 0x20);
            }
            if (iVar4 == 0) {
              return iVar5;
            }
            iVar4 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar4 << 3);
            if (iVar4 == 0) {
              return iVar5;
            }
          }
        }
        iVar5 = *(int *)(lVar6 + 0x70 + lVar1);
      } while (iVar5 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusRoutedConstNode> @ 14e133f20

int __thiscall
TSet<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusRoutedConstNode>
          (TSet<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusRoutedConstNode *param_2)

{
  longlong lVar1;
  UOptimusNode *pUVar2;
  ForElementType<IOptimusNodePinRouter_const_*> FVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  void *_Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      pUVar2 = param_2->Node;
      do {
        lVar6 = (longlong)iVar7;
        if (*(UOptimusNode **)(lVar1 + lVar6 * 0x50) == pUVar2) {
          iVar5 = *(int *)(lVar1 + 0x30 + lVar6 * 0x50);
          _Buf1 = (void *)(lVar1 + 8 + lVar6 * 0x50);
          if (iVar5 == (param_2->TraversalContext).ReferenceNesting.ArrayNum) {
            FVar3 = (param_2->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&param_2->TraversalContext;
            if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              _Buf2 = FVar3;
            }
            pvVar4 = *(void **)((longlong)_Buf1 + 0x20);
            if (pvVar4 != (void *)0x0) {
              _Buf1 = pvVar4;
            }
            if (iVar5 == 0) {
              return iVar7;
            }
            iVar5 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar5 << 3);
            if (iVar5 == 0) {
              return iVar7;
            }
          }
        }
        iVar7 = *(int *)(lVar1 + 0x48 + lVar6 * 0x50);
      } while (iVar7 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusRoutedConstNode> @ 14e134000

int __thiscall
TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusRoutedConstNode>
          (TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusRoutedConstNode *param_2)

{
  longlong lVar1;
  UOptimusNode *pUVar2;
  ForElementType<IOptimusNodePinRouter_const_*> FVar3;
  void *pvVar4;
  int iVar5;
  longlong lVar6;
  void *_Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar7 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar7 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      pUVar2 = param_2->Node;
      do {
        lVar6 = (longlong)iVar7;
        if (*(UOptimusNode **)(lVar1 + lVar6 * 0x50) == pUVar2) {
          iVar5 = *(int *)(lVar1 + 0x30 + lVar6 * 0x50);
          _Buf1 = (void *)(lVar1 + 8 + lVar6 * 0x50);
          if (iVar5 == (param_2->TraversalContext).ReferenceNesting.ArrayNum) {
            FVar3 = (param_2->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&param_2->TraversalContext;
            if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              _Buf2 = FVar3;
            }
            pvVar4 = *(void **)((longlong)_Buf1 + 0x20);
            if (pvVar4 != (void *)0x0) {
              _Buf1 = pvVar4;
            }
            if (iVar5 == 0) {
              return iVar7;
            }
            iVar5 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar5 << 3);
            if (iVar5 == 0) {
              return iVar7;
            }
          }
        }
        iVar7 = *(int *)(lVar1 + 0x48 + lVar6 * 0x50);
      } while (iVar7 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusRoutedConstNode> @ 14e1340e0

int __thiscall
TSet<TTuple<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusRoutedConstNode>(void *this,uint param_1,FOptimusRoutedConstNode *param_2)

{
  longlong lVar1;
  UOptimusNode *pUVar2;
  ForElementType<IOptimusNodePinRouter_const_*> FVar3;
  int iVar4;
  void *_Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  int iVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)this;
      pUVar2 = param_2->Node;
      do {
        lVar1 = lVar6 + (longlong)iVar5 * 0x48;
        if (*(UOptimusNode **)(lVar6 + (longlong)iVar5 * 0x48) == pUVar2) {
          iVar4 = *(int *)(lVar1 + 0x30);
          if (iVar4 == (param_2->TraversalContext).ReferenceNesting.ArrayNum) {
            FVar3 = (param_2->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&param_2->TraversalContext;
            if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              _Buf2 = FVar3;
            }
            _Buf1 = (void *)(lVar1 + 8);
            if (*(void **)(lVar1 + 0x28) != (void *)0x0) {
              _Buf1 = *(void **)(lVar1 + 0x28);
            }
            if (iVar4 == 0) {
              return iVar5;
            }
            iVar4 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar4 << 3);
            if (iVar4 == 0) {
              return iVar5;
            }
          }
        }
        iVar5 = *(int *)(lVar1 + 0x40);
      } while (iVar5 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusRoutedConstNode> @ 14e1341b0

int __thiscall
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::
FindIndexByHash<FOptimusRoutedConstNode>
          (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusRoutedConstNode *param_2)

{
  longlong lVar1;
  UOptimusNode *pUVar2;
  ForElementType<IOptimusNodePinRouter_const_*> FVar3;
  int iVar4;
  void *_Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  int iVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      pUVar2 = param_2->Node;
      do {
        lVar6 = (longlong)iVar5 * 0x40;
        if (*(UOptimusNode **)(lVar6 + lVar1) == pUVar2) {
          _Buf1 = (void *)(lVar1 + 8 + lVar6);
          iVar4 = *(int *)((longlong)_Buf1 + 0x28);
          if (iVar4 == (param_2->TraversalContext).ReferenceNesting.ArrayNum) {
            FVar3 = (param_2->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&param_2->TraversalContext;
            if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              _Buf2 = FVar3;
            }
            if (*(void **)((longlong)_Buf1 + 0x20) != (void *)0x0) {
              _Buf1 = *(void **)((longlong)_Buf1 + 0x20);
            }
            if (iVar4 == 0) {
              return iVar5;
            }
            iVar4 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar4 << 3);
            if (iVar4 == 0) {
              return iVar5;
            }
          }
        }
        iVar5 = *(int *)(lVar6 + 0x38 + lVar1);
      } while (iVar5 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusRoutedConstNodePin> @ 14e134280

int __thiscall
TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusRoutedConstNodePin>
          (TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusRoutedConstNodePin *param_2)

{
  longlong lVar1;
  UOptimusNodePin *pUVar2;
  ForElementType<IOptimusNodePinRouter_const_*> FVar3;
  int iVar4;
  void *_Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  int iVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      pUVar2 = param_2->NodePin;
      do {
        lVar6 = (longlong)iVar5 * 0x78;
        if (*(UOptimusNodePin **)(lVar6 + lVar1) == pUVar2) {
          _Buf1 = (void *)(lVar1 + 8 + lVar6);
          iVar4 = *(int *)((longlong)_Buf1 + 0x28);
          if (iVar4 == (param_2->TraversalContext).ReferenceNesting.ArrayNum) {
            FVar3 = (param_2->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&param_2->TraversalContext;
            if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              _Buf2 = FVar3;
            }
            if (*(void **)((longlong)_Buf1 + 0x20) != (void *)0x0) {
              _Buf1 = *(void **)((longlong)_Buf1 + 0x20);
            }
            if (iVar4 == 0) {
              return iVar5;
            }
            iVar4 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar4 << 3);
            if (iVar4 == 0) {
              return iVar5;
            }
          }
        }
        iVar5 = *(int *)(lVar6 + 0x70 + lVar1);
      } while (iVar5 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusRoutedConstNodePin> @ 14e134350

int __thiscall
TSet<FOptimusRoutedConstNodePin,DefaultKeyFuncs<FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusRoutedConstNodePin>
          (TSet<FOptimusRoutedConstNodePin,DefaultKeyFuncs<FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusRoutedConstNodePin *param_2)

{
  longlong lVar1;
  UOptimusNodePin *pUVar2;
  ForElementType<IOptimusNodePinRouter_const_*> FVar3;
  int iVar4;
  void *_Buf1;
  ForElementType<IOptimusNodePinRouter_const_*> _Buf2;
  int iVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      pUVar2 = param_2->NodePin;
      do {
        lVar6 = (longlong)iVar5 * 0x40;
        if (*(UOptimusNodePin **)(lVar6 + lVar1) == pUVar2) {
          _Buf1 = (void *)(lVar1 + 8 + lVar6);
          iVar4 = *(int *)((longlong)_Buf1 + 0x28);
          if (iVar4 == (param_2->TraversalContext).ReferenceNesting.ArrayNum) {
            FVar3 = (param_2->TraversalContext).ReferenceNesting.AllocatorInstance.SecondaryData;
            _Buf2 = (ForElementType<IOptimusNodePinRouter_const_*>)&param_2->TraversalContext;
            if (FVar3 != (ForElementType<IOptimusNodePinRouter_const_*>)0x0) {
              _Buf2 = FVar3;
            }
            if (*(void **)((longlong)_Buf1 + 0x20) != (void *)0x0) {
              _Buf1 = *(void **)((longlong)_Buf1 + 0x20);
            }
            if (iVar4 == 0) {
              return iVar5;
            }
            iVar4 = memcmp(_Buf1,(void *)_Buf2,(longlong)iVar4 << 3);
            if (iVar4 == 0) {
              return iVar5;
            }
          }
        }
        iVar5 = *(int *)(lVar6 + 0x38 + lVar1);
      } while (iVar5 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FOptimusValueIdentifier> @ 14e134420

int __thiscall
TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
::FindIndexByHash<FOptimusValueIdentifier>
          (TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
           *this,uint param_1,FOptimusValueIdentifier *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar4 = (this->Hash).SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        lVar2 = (longlong)iVar3 * 0x80;
        if ((*(EOptimusValueType *)(lVar2 + lVar1) == param_2->Type) &&
           (*(FName *)(lVar2 + 4 + lVar1) == param_2->Name)) {
          return iVar3;
        }
        iVar3 = *(int *)(lVar2 + 0x78 + lVar1);
      } while (iVar3 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e1344a0

int __thiscall
TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
::FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
           *this,uint param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      iVar1 = param_2->ArrayNum;
      do {
        lVar6 = (longlong)iVar5 * 0x20;
        iVar2 = *(int *)(lVar6 + 8 + lVar3);
        if ((iVar2 == iVar1) &&
           (bVar4 = CompareItems<FName,int>
                              (*(FName **)(lVar6 + lVar3),(FName *)(param_2->AllocatorInstance).Data
                               ,iVar2), bVar4)) {
          return iVar5;
        }
        iVar5 = *(int *)(lVar6 + 0x18 + lVar3);
      } while (iVar5 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e134550

int __thiscall
TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::FindIndexByHash<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar6 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      iVar2 = param_2->ArrayNum;
      do {
        iVar3 = *(int *)(lVar4 + 8 + (longlong)iVar6 * 0x18);
        puVar1 = (undefined8 *)(lVar4 + (longlong)iVar6 * 0x18);
        if ((iVar3 == iVar2) &&
           (bVar5 = CompareItems<FName,int>
                              ((FName *)*puVar1,(FName *)(param_2->AllocatorInstance).Data,iVar3),
           bVar5)) {
          return iVar6;
        }
        iVar6 = *(int *)(puVar1 + 2);
      } while (iVar6 != -1);
    }
  }
  return -1;
}

// FindIndexByHash<FString> @ 14e134610

int __thiscall
TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
::FindIndexByHash<FString>
          (TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      iVar3 = (param_2->Data).ArrayNum;
      lVar4 = (longlong)iVar1 * 0x20;
      iVar2 = *(int *)(*(longlong *)&this->Elements + 8 + lVar4);
      if (iVar2 == iVar3) {
        if (iVar2 < 2) {
          return iVar1;
        }
        iVar3 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(*(longlong *)&this->Elements + lVar4),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar3 == 0;
      }
      else {
        bVar6 = iVar2 + iVar3 == 1;
      }
      if (bVar6) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar4 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_> @ 14e145280

int __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RemoveImpl<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
          (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined1 *puVar8;
  longlong lVar9;
  uint *puVar10;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar7 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    local_res8 = param_2->WeakPtr;
    lVar2 = *(longlong *)&this->Elements;
    lVar9 = (longlong)(int)uVar7 * 0x20;
    local_res20 = *(FWeakObjectPtr *)(lVar2 + lVar9);
    bVar4 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject_const_,bool>
                      ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                       (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res8);
    if (bVar4) break;
    uVar7 = *(uint *)(lVar2 + 0x18 + lVar9);
    if (uVar7 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)&(this->Elements).field_0x28)) {
    puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar8 + (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar7 & 0x1f) & 1) != 0) goto LAB_14e14537e;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14e14537e:
  FVar6 = (this->Hash).SecondaryData;
  lVar9 = *(longlong *)&this->Elements + lVar9;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar10 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar9 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar10;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar7) {
      *puVar10 = *(uint *)(lVar9 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar7,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar7,1);
      return 1;
    }
    puVar10 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<FGuid> @ 14e145430

int __thiscall
TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
::RemoveImpl<FGuid>(TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
                    *this,uint param_1,FGuid *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  FVar6 = (this->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar9 = *(uint *)((longlong)FVar6 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar9 == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&this->Elements;
  while (lVar7 = (longlong)(int)uVar9 * 0x20,
        ((param_2->D != *(uint *)(lVar7 + 0xc + lVar2) || param_2->C != *(uint *)(lVar7 + 8 + lVar2)
         ) || param_2->B != *(uint *)(lVar7 + 4 + lVar2)) || param_2->A != *(uint *)(lVar7 + lVar2))
  {
    uVar9 = *(uint *)(lVar7 + 0x18 + lVar2);
    if (uVar9 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)&(this->Elements).field_0x28)) {
    puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar10 + (longlong)((int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar9 & 0x1f) & 1) != 0) goto LAB_14e14553d;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_14e14553d:
  FVar6 = (this->Hash).SecondaryData;
  lVar7 = *(longlong *)&this->Elements + lVar7;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar8 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar8;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == uVar9) {
      *puVar8 = *(uint *)(lVar7 + 0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar9,1);
      return 1;
    }
    puVar8 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// RemoveImpl<FName> @ 14e1455e0

int __thiscall
TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
::RemoveImpl<FName>(TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                    *this,uint param_1,FName *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0xa0;
    if (*(FName *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x90);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14e1456c8;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_14e1456c8:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x94) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x90);
      TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<160,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<160,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x90 + (longlong)(int)uVar1 * 0xa0);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator> @ 14e14cae0

TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
* __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
          (TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
           *this,TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  undefined1 *_Src;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    _Src = &(param_1->Elements).field_0x10;
    _Dst = &(this->Elements).field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 14e14cc00

TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 14e14cd30

TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator> @ 14e14ce60

TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::
TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          (TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator> @ 14e14cf90

TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
::
TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
          (TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator> @ 14e14d0c0

TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
::
TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
          (TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
           *this,TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator> @ 14e14d1f0

TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator> *
__thiscall
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
          (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
           *this,TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
                 *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined8 *)&this->Elements = 0;
  *(undefined8 *)&(this->Elements).field_0x8 = 0;
  *(undefined8 *)&(this->Elements).field_0x20 = 0;
  *(undefined4 *)&(this->Elements).field_0x28 = 0;
  *(undefined4 *)&(this->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Elements).field_0x34 = 0;
  (this->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = 0;
  if (this != param_1) {
    TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,0);
    if (*(void **)&this->Elements != (void *)0x0) {
      FMemory::Free(*(void **)&this->Elements);
    }
    _Src = &(param_1->Elements).field_0x10;
    *(undefined8 *)&this->Elements = *(undefined8 *)&param_1->Elements;
    _Dst = &(this->Elements).field_0x10;
    *(undefined8 *)&param_1->Elements = 0;
    *(undefined4 *)&(this->Elements).field_0x8 = *(undefined4 *)&(param_1->Elements).field_0x8;
    *(undefined4 *)&(this->Elements).field_0xc = *(undefined4 *)&(param_1->Elements).field_0xc;
    *(undefined8 *)&(param_1->Elements).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Elements).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Elements).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Elements).field_0x20 = *(undefined8 *)&(param_1->Elements).field_0x20;
      *(undefined8 *)&(param_1->Elements).field_0x20 = 0;
      *(undefined4 *)&(this->Elements).field_0x28 = *(undefined4 *)&(param_1->Elements).field_0x28;
      *(undefined4 *)&(this->Elements).field_0x2c = *(undefined4 *)&(param_1->Elements).field_0x2c;
      *(undefined8 *)&(param_1->Elements).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    *(undefined4 *)&(param_1->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Elements).field_0x34 = 0;
  }
  if ((param_1->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Hash).InlineData = *(undefined4 *)(param_1->Hash).InlineData;
  }
  FVar2 = (this->Hash).SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Hash).SecondaryData = (param_1->Hash).SecondaryData;
  (param_1->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  this->HashSize = param_1->HashSize;
  param_1->HashSize = 0;
  return this;
}

// operator= @ 14e1647e0

TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>,DefaultKeyFuncs<TSoftObjectPtr<UOptimusNode_FunctionReference>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>,DefaultKeyFuncs<TSoftObjectPtr<UOptimusNode_FunctionReference>,0>,FDefaultSetAllocator>
::operator=(TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>,DefaultKeyFuncs<TSoftObjectPtr<UOptimusNode_FunctionReference>,0>,FDefaultSetAllocator>
            *this,TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>,DefaultKeyFuncs<TSoftObjectPtr<UOptimusNode_FunctionReference>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  FSoftObjectPath *pFVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>,DefaultKeyFuncs<TSoftObjectPtr<UOptimusNode_FunctionReference>,0>,FDefaultSetAllocator>
  *pTVar8;
  undefined1 *puVar9;
  FSoftObjectPath *this_00;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar7 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar7;
  TSparseArray<TSparseSetElement<TSoftObjectPtr<UOptimusNode_FunctionReference>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar7);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar7,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar3 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar3 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar7) {
    this_00 = (FSoftObjectPath *)(*(longlong *)&this->Elements + 8);
    uVar10 = 1;
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if (((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSet<TSoftObjectPtr<UOptimusNode_FunctionReference>,DefaultKeyFuncs<TSoftObjectPtr<UOptimusNode_FunctionReference>,0>,FDefaultSetAllocator>
                  *)(*pcVar5)();
        return pTVar8;
      }
      puVar3 = *(undefined1 **)&(param_1->Elements).field_0x20;
      pFVar2 = (FSoftObjectPath *)(lVar13 + (longlong)this_00);
      puVar9 = puVar1;
      if (puVar3 != (undefined1 *)0x0) {
        puVar9 = puVar3;
      }
      iVar7 = iVar12;
      if (iVar12 < 0) {
        iVar7 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0) {
        this_00[-1].SubPathString.Data.ArrayNum = *(int *)((longlong)this_00 + lVar13 + -8);
        this_00[-1].SubPathString.Data.ArrayMax = pFVar2[-1].SubPathString.Data.ArrayMax;
      }
      else {
        uVar4 = *(undefined8 *)((longlong)this_00 + lVar13 + -8);
        this_00[-1].SubPathString.Data.ArrayNum = (int)uVar4;
        this_00[-1].SubPathString.Data.ArrayMax = (int)((ulonglong)uVar4 >> 0x20);
        FSoftObjectPath::FSoftObjectPath(this_00,pFVar2);
        this_00[1].AssetPath.PackageName.ComparisonIndex.Value =
             pFVar2[1].AssetPath.PackageName.ComparisonIndex.Value;
        this_00[1].AssetPath.PackageName.Number = pFVar2[1].AssetPath.PackageName.Number;
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      this_00 = (FSoftObjectPath *)&this_00[1].SubPathString;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 14e164980

TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
    iVar2 = *(int *)&(param_1->Elements).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<UOptimusNode_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
               (int *)&(this->Elements).field_0xc);
    puVar1 = &(param_1->Elements).field_0x10;
    this_00 = &(this->Elements).field_0x10;
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 * 0x18);
    }
    return this;
  }
  return this;
}

// operator= @ 14e164a50

TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  int iVar2;
  
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
    iVar2 = *(int *)&(param_1->Elements).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty(&this->Elements,iVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,iVar2,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
               (int *)&(this->Elements).field_0xc);
    puVar1 = &(param_1->Elements).field_0x10;
    this_00 = &(this->Elements).field_0x10;
    *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
    *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
    if (this_00 != puVar1) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
    }
    if (iVar2 != 0) {
      memcpy(*(void **)&this->Elements,*(void **)&param_1->Elements,(longlong)iVar2 * 0x1c);
    }
    return this;
  }
  return this;
}

// operator= @ 14e164b10

TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
* __thiscall
TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
::operator=(TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
            *this,TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  FTypeInfo *pFVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
  *pTVar8;
  undefined1 *puVar9;
  FTypeInfo *this_00;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar7 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar7;
  TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar7);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xa0,0x10,iVar7,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar4 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar4 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar4,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  puVar3 = *(undefined8 **)&this->Elements;
  iVar12 = 0;
  if (0 < iVar7) {
    uVar10 = 1;
    lVar13 = *(longlong *)&param_1->Elements - (longlong)puVar3;
    do {
      this_00 = (FTypeInfo *)(puVar3 + 2);
      if (((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                  *)(*pcVar5)();
        return pTVar8;
      }
      puVar4 = *(undefined1 **)&(param_1->Elements).field_0x20;
      pFVar2 = (FTypeInfo *)(lVar13 + (longlong)this_00);
      puVar9 = puVar1;
      if (puVar4 != (undefined1 *)0x0) {
        puVar9 = puVar4;
      }
      iVar7 = iVar12;
      if (iVar12 < 0) {
        iVar7 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar9 + (longlong)(iVar7 >> 5) * 4) & uVar10) == 0) {
        *(undefined4 *)puVar3 = *(undefined4 *)((longlong)this_00 + lVar13 + -0x10);
        *(undefined4 *)((longlong)puVar3 + 4) =
             *(undefined4 *)((longlong)&pFVar2[-1].ArrayMetadata.AllocatorInstance.Data + 4);
      }
      else {
        *puVar3 = *(undefined8 *)((longlong)this_00 + lVar13 + -0x10);
        FOptimusDataTypeRegistry::FTypeInfo::FTypeInfo(this_00,pFVar2);
        *(undefined4 *)(puVar3 + 0x12) = *(undefined4 *)&pFVar2[1].DataType.Object;
        *(undefined4 *)((longlong)puVar3 + 0x94) =
             *(undefined4 *)((longlong)&pFVar2[1].DataType.Object + 4);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      puVar3 = puVar3 + 0x14;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Append @ 14e17e340

void __thiscall
TSet<UOptimusNode_*,DefaultKeyFuncs<UOptimusNode_*,0>,FDefaultSetAllocator>::Append
          (TSet<UOptimusNode_*,DefaultKeyFuncs<UOptimusNode_*,0>,FDefaultSetAllocator> *this,
          TArrayView<UOptimusNode_*_const,int> *param_1)

{
  UOptimusNode **ppUVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  UOptimusNode **ppUVar8;
  UOptimusNode *local_res8;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  iVar3 = param_1->ArrayNum;
  uVar7 = iVar3 + uVar5;
  if (uVar5 < uVar7) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar7);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,uVar7);
    if (uVar7 < 4) {
      iVar6 = 1;
    }
    else {
      uVar2 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar4 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar6)) {
      this->HashSize = iVar6;
      Rehash(this);
    }
  }
  ppUVar8 = param_1->DataPtr;
  ppUVar1 = ppUVar8 + iVar3;
  for (; ppUVar8 != ppUVar1; ppUVar8 = ppUVar8 + 1) {
    Emplace<UOptimusNode_*_const_&>(this,&local_res8,(bool *)ppUVar8);
  }
  return;
}

// Array @ 14e17e5e0

TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> * __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::Array(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
        *this,TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_>
              *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  if (0 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
  uVar12 = 1;
  iVar13 = iVar10;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar14;
    iVar13 = 0;
    iVar10 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)iVar10;
      iVar13 = iVar13 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e17e6b5;
      uVar4 = puVar14[lVar9 + 1];
    }
    uVar12 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar13;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14e17e6b5:
  TStack_40._padding_ = CONCAT44(uVar12,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Elements).field_0x28) {
    do {
      pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        pTVar8 = (TArray<UOptimusComponentSourceBinding_*,TSizedDefaultAllocator<32>_> *)(*pcVar6)()
        ;
        return pTVar8;
      }
      iVar10 = __return_storage_ptr__->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&__return_storage_ptr__->AllocatorInstance,piVar1);
      }
      __return_storage_ptr__->ArrayNum = iVar10 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar11;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Find @ 14e1af650

TTuple<UOptimusNode_*,FName> * __thiscall
TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
       *this,UOptimusNode *param_1)

{
  TTuple<UOptimusNode_*,FName> *pTVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    (ulonglong)(this->HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      do {
        pTVar1 = (TTuple<UOptimusNode_*,FName> *)
                 (*(longlong *)&this->Elements + (longlong)iVar2 * 0x18);
        if (*(UOptimusNode **)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x18) == param_1) {
          return pTVar1;
        }
        iVar2 = *(int *)(pTVar1 + 1);
      } while (iVar2 != -1);
    }
  }
  return (TTuple<UOptimusNode_*,FName> *)0x0;
}

// Find @ 14e1af6f0

TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*> * __thiscall
TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
       *this,FOptimusInstancedPin *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = ((uint)((ulonglong)param_1->Pin >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Pin >> 4))
          * -0x7a143595;
  uVar2 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = ::GetTypeHash(&param_1->InstancedNode);
  iVar1 = FindIndexByHash<FOptimusInstancedPin>
                    (this,(uVar2 >> 0x10 ^ uVar2) + uVar3 * 0x40 + (uVar3 >> 2) + 0x9e3779b9 ^ uVar3
                     ,param_1);
  if (iVar1 != -1) {
    return (TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*> *)
           ((longlong)iVar1 * 0x58 + *(longlong *)&this->Elements);
  }
  return (TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*> *)0x0;
}

// Find @ 14e1af7a0

TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*> * __thiscall
TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
       *this,FOptimusRoutedConstNode *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = ((uint)((ulonglong)param_1->Node >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Node >> 4)
          ) * -0x7a143595;
  uVar2 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ::GetTypeHash(&param_1->TraversalContext);
  iVar1 = FindIndexByHash<FOptimusRoutedConstNode>
                    (this,uVar2 * 0x40 + (uVar2 >> 2) + uVar3 + 0x9e3779b9 ^ uVar2,param_1);
  if (iVar1 != -1) {
    return (TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*> *)
           (*(longlong *)&this->Elements + (longlong)iVar1 * 0x48);
  }
  return (TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*> *)0x0;
}

// Find @ 14e1af850

TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_> *
__thiscall
TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
       *this,FOptimusRoutedConstNode *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = ((uint)((ulonglong)param_1->Node >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1->Node >> 4)
          ) * -0x7a143595;
  uVar2 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = ::GetTypeHash(&param_1->TraversalContext);
  iVar1 = FindIndexByHash<FOptimusRoutedConstNode>
                    (this,uVar2 * 0x40 + (uVar2 >> 2) + uVar3 + 0x9e3779b9 ^ uVar2,param_1);
  if (iVar1 != -1) {
    return (TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>
            *)((longlong)iVar1 * 0x50 + *(longlong *)&this->Elements);
  }
  return (TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>
          *)0x0;
}

// Find @ 14e1af900

TTuple<FOptimusValueIdentifier,FOptimusValueDescription> * __thiscall
TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
       *this,FOptimusValueIdentifier *param_1)

{
  EOptimusValueType EVar1;
  FName FVar2;
  uint uVar3;
  int iVar4;
  
  FVar2 = param_1->Name;
  uVar3 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  EVar1 = param_1->Type;
  iVar4 = FindIndexByHash<FOptimusValueIdentifier>
                    (this,(uint)EVar1 * 0x40 + uVar3 + FVar2.Number + (EVar1 >> 2) + 0x9e3779b9 ^
                          (uint)EVar1,param_1);
  if (iVar4 != -1) {
    return (TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *)
           ((longlong)iVar4 * 0x80 + *(longlong *)&this->Elements);
  }
  return (TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *)0x0;
}

// Find @ 14e1af990

TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> * __thiscall
TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
       *this,FName param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1.Number + uVar2) * 4
                    );
    if (iVar3 != -1) {
      do {
        pTVar4 = (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)
                 ((longlong)iVar3 * 0xa0 + *(longlong *)&this->Elements);
        FVar1.ComparisonIndex.Value = *(uint *)&pTVar4->field_0x0;
        FVar1.Number = *(uint *)&pTVar4->field_0x4;
        if (FVar1 == param_1) {
          return pTVar4;
        }
        iVar3 = *(int *)(pTVar4 + 1);
      } while (iVar3 != -1);
    }
  }
  return (TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo> *)0x0;
}

// Includes @ 14e1ea2b0

bool __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::Includes(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
           *this,TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                 *param_1)

{
  ulonglong uVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  *local_40;
  int iStack_38;
  uint uStack_34;
  undefined1 *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 <
      *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34) {
    return false;
  }
  iStack_38 = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
  uStack_34 = 1;
  iStack_24 = iStack_38;
  local_20 = iStack_38;
  if (iVar3 != 0) {
    puVar7 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)TStack_60.Array;
    }
    uVar5 = *puVar7;
    while (uVar5 == 0) {
      lVar4 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar3;
      if ((int)((iVar3 + -1 >> 0x1f & 0x1fU) + iVar3 + -1) >> 5 < iStack_38) goto LAB_14e1ea36a;
      uVar5 = puVar7[lVar4 + 1];
    }
    uStack_34 = -uVar5 & uVar5;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iStack_24 = (int)lVar4 + -1 + local_20;
    if (iVar3 < iStack_24) {
      iStack_24 = iVar3;
    }
  }
LAB_14e1ea36a:
  uStack_28 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  local_40 = param_1;
  local_30 = (undefined1 *)TStack_60.Array;
  TStack_60._padding_._0_4_ = iStack_38;
  TStack_60._padding_._4_4_ = uStack_34;
  TStack_60.CurrentBitIndex = iStack_24;
  if (iStack_24 < *(int *)&(param_1->Elements).field_0x28) {
    do {
      uVar1 = *(ulonglong *)
               (*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10);
      uVar5 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      if (*(int *)&(this->Elements).field_0x8 == *(int *)&(this->Elements).field_0x34) {
        return false;
      }
      FVar2 = (this->Hash).SecondaryData;
      FVar6 = (ForElementType<FSetElementId>)&this->Hash;
      if (FVar2 != (ForElementType<FSetElementId>)0x0) {
        FVar6 = FVar2;
      }
      iVar3 = *(int *)((longlong)FVar6 +
                      (ulonglong)(this->HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
      if (iVar3 == -1) {
        return false;
      }
      while (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar3 * 0x10) != uVar1) {
        iVar3 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar3 * 0x10);
        if (iVar3 == -1) {
          return false;
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return true;
}

// Intersect @ 14e1ee520

TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
* __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::Intersect(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
            *this,TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                  *__return_storage_ptr__,
           TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
           *param_1)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  UOptimusComponentSourceBinding *pUVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
  *pTVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  uint *puVar15;
  longlong *plVar16;
  bool *pbVar17;
  uint uVar18;
  uint uVar19;
  UOptimusComponentSourceBinding *local_res8;
  uint local_88;
  uint uStack_84;
  undefined8 uStack_80;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  uVar4 = 1;
  pTVar12 = param_1;
  if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 <
      *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) {
    pTVar12 = this;
    this = param_1;
  }
  uVar11 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar10 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar18 = (int)((UOptimusComponentSourceBinding *)this)->_padding_ -
           *(int *)((longlong)
                    &(((UOptimusComponentSourceBinding *)this)->ComponentType).Class.field0_0x0 + 4)
  ;
  local_res8 = (UOptimusComponentSourceBinding *)this;
  if (uVar18 == 0) goto LAB_14e1ee7d8;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
  }
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar18);
  uVar19 = 1;
  if (3 < uVar18) {
    uVar9 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar2 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar19 <= __return_storage_ptr__->HashSize))
  goto LAB_14e1ee7d8;
  __return_storage_ptr__->HashSize = uVar19;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar19 != 0) {
    uVar18 = uVar19;
    if (uVar19 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar18 = 0;
        goto LAB_14e1ee628;
      }
    }
    else {
LAB_14e1ee628:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar18,4);
    }
    if (0 < (int)uVar19) {
      uVar13 = (ulonglong)uVar19;
      uVar9 = uVar11;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar1;
        }
        uVar6 = (longlong)(int)uVar19 - 1U & uVar9;
        uVar9 = uVar9 + 1;
        *(undefined4 *)((longlong)FVar8 + uVar6 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar18 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    TStack_50.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_88 = 0;
    uStack_84 = 1;
    uStack_74 = 0;
    uStack_70 = 0;
    uVar9 = uVar11;
    if (uVar18 != 0) {
      puVar15 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)TStack_50.Array;
      }
      uVar19 = *puVar15;
      uVar13 = uVar11;
      while (uVar19 == 0) {
        uStack_70 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_70;
        iVar7 = (int)uVar9;
        local_88 = iVar7 + 1;
        uVar9 = (ulonglong)local_88;
        if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_88)
        goto LAB_14e1ee719;
        uVar19 = puVar15[(longlong)iVar7 + 1];
      }
      uStack_84 = -uVar19 & uVar19;
      uVar9 = (ulonglong)uStack_84 * 2 + 1;
      lVar2 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      uStack_74 = (int)lVar2 + -1 + uStack_70;
      uVar9 = (ulonglong)uStack_74;
      if ((int)uVar18 < (int)uStack_74) {
LAB_14e1ee719:
        uVar9 = (ulonglong)uVar18;
        uStack_74 = uVar18;
      }
    }
    TStack_50.UnvisitedBitMask = 0xffffffff;
    TStack_50.CurrentBitIndex = uStack_74;
    TStack_50._28_4_ = uStack_6c;
    TStack_50.BaseBitIndex = uStack_70;
    TStack_50._padding_._0_4_ = local_88;
    TStack_50._padding_._4_4_ = uStack_84;
    if ((int)uVar9 < (int)uVar18) {
      do {
        puVar14 = (ulonglong *)
                  ((longlong)(int)uVar9 * 0x10 + *(longlong *)&__return_storage_ptr__->Elements);
        uVar18 = ((uint)(*puVar14 >> 0x14) & 0xffff ^ (uint)(*puVar14 >> 4)) * -0x7a143595;
        uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
        uVar18 = (uVar18 >> 0x10 ^ uVar18) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)((longlong)puVar14 + 0xc) = uVar18;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar1;
        }
        uVar13 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar18;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)((longlong)FVar8 + uVar13 * 4);
        *(int *)((longlong)FVar8 + uVar13 * 4) = (int)uVar9;
        TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
        uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
      } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
    }
  }
LAB_14e1ee7d8:
  pUVar3 = local_res8;
  uVar18 = (local_res8->BindingName).ComparisonIndex.Value;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)&local_res8->_padding_;
  uVar19 = 0;
  uVar9 = uVar11;
  if (uVar18 != 0) {
    uVar9 = (ulonglong)uVar18;
    plVar16 = (longlong *)local_res8->_padding_;
    if ((longlong *)local_res8->_padding_ == (longlong *)0x0) {
      plVar16 = (longlong *)TStack_50.Array;
    }
    uVar5 = (uint)*plVar16;
    uVar13 = uVar11;
    uVar19 = 0;
    uVar10 = 0;
    while (uVar5 == 0) {
      iVar7 = (int)uVar11;
      uVar19 = (int)uVar13 + 0x20;
      uVar13 = (ulonglong)uVar19;
      uVar10 = iVar7 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar10)
      goto LAB_14e1ee84e;
      uVar5 = *(uint *)((longlong)plVar16 + (longlong)iVar7 * 4 + 4);
    }
    uVar4 = -uVar5 & uVar5;
    uVar11 = (ulonglong)uVar4 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar5 = (uVar19 - 1) + (int)lVar2;
    if ((int)uVar18 < (int)uVar5) {
      uVar5 = uVar18;
    }
    uVar9 = (ulonglong)uVar5;
  }
LAB_14e1ee84e:
  TStack_50.CurrentBitIndex = (int)uVar9;
  uStack_80 = CONCAT44(uVar4,uVar10);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._padding_ = uStack_80;
  TStack_50._28_4_ = TStack_50.CurrentBitIndex;
  TStack_50.BaseBitIndex = uVar19;
  if (TStack_50.CurrentBitIndex < (int)uVar18) {
    do {
      pbVar17 = (bool *)((longlong)(int)uVar9 * 0x10 + *(longlong *)&pUVar3->_padding_);
      uVar11 = *(ulonglong *)pbVar17;
      uVar4 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      if (*(int *)&(pTVar12->Elements).field_0x8 != *(int *)&(pTVar12->Elements).field_0x34) {
        FVar1 = (pTVar12->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&pTVar12->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar1;
        }
        iVar7 = *(int *)((longlong)FVar8 +
                        (ulonglong)(pTVar12->HashSize - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar7 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)&pTVar12->Elements + (longlong)iVar7 * 0x10) == uVar11)
            {
              Emplace<UOptimusComponentSourceBinding_*_const_&>
                        (__return_storage_ptr__,&local_res8,pbVar17);
              break;
            }
            iVar7 = *(int *)(*(longlong *)&pTVar12->Elements + 8 + (longlong)iVar7 * 0x10);
          } while (iVar7 != -1);
        }
      }
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
      uVar9 = (ulonglong)(uint)TStack_50.CurrentBitIndex;
    } while (TStack_50.CurrentBitIndex < (TStack_50.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Rehash @ 14e20b5a0

void __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::Rehash(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20b67c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20b67c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20b760

void __thiscall
TSet<UOptimusNode_*,DefaultKeyFuncs<UOptimusNode_*,0>,FDefaultSetAllocator>::Rehash
          (TSet<UOptimusNode_*,DefaultKeyFuncs<UOptimusNode_*,0>,FDefaultSetAllocator> *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20b83c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20b83c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20b920

void __thiscall
TSet<UOptimusNode_const_*,DefaultKeyFuncs<UOptimusNode_const_*,0>,FDefaultSetAllocator>::Rehash
          (TSet<UOptimusNode_const_*,DefaultKeyFuncs<UOptimusNode_const_*,0>,FDefaultSetAllocator>
           *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20b9fc;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20b9fc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20bae0

void __thiscall
TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,FOptimus_InterfaceBinding>,TDefaultMapHashableKeyFuncs<int,FOptimus_InterfaceBinding,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20bbbc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20bbbc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[0xf] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[0xe] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20bc70

void __thiscall
TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20bd4c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20bd4c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[7] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[6] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20be00

void __thiscall
TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20bedc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20bedc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[7] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[6] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20bf90

void __thiscall
TSet<TTuple<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*>,TDefaultMapHashableKeyFuncs<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*>,TDefaultMapHashableKeyFuncs<UOptimusComponentSourceBinding_*,UOptimusNode_ComponentSource_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20c06c;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20c06c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20c150

void __thiscall
TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UOptimusNode_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNode_*,FName,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20c22c;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20c22c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20c310

void __thiscall
TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodeGraph_*,TArray<UOptimusNode_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20c3ec;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20c3ec:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20c4d0

void __thiscall
TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,DefaultKeyFuncs<TTuple<UOptimusNodePin_*,UOptimusNodePin_*>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20c5ac;
        uVar4 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20c5ac:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar6 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar7 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = uVar4 >> 0x10 ^ uVar4;
        uVar5 = ((uint)(*(ulonglong *)(lVar6 + 8) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar6 + 8) >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar4 = (uVar4 * 0x40 + (uVar5 >> 0x10 ^ uVar5) + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4) &
                *piVar1 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20c6e0

void __thiscall
TSet<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>,TDefaultMapHashableKeyFuncs<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*>,TDefaultMapHashableKeyFuncs<UOptimusNode_DataInterface_*,UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20c7bc;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20c7bc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20c8a0

void __thiscall
TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20c97c;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20c97c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20ca60

void __thiscall
TSet<TTuple<UOptimusNode_const_*,enum_EOptimusValueUsage>,TDefaultMapHashableKeyFuncs<UOptimusNode_const_*,enum_EOptimusValueUsage,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> *pFVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = local_30.Array;
      }
      uVar3 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar3 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20cb3c;
        uVar3 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar4 * 4 + 4);
      }
      uStack_54 = -uVar3 & uVar3;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20cb3c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar4 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar5 = *(ulonglong *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar3 = (uVar3 >> 0x10 ^ uVar3) & *piVar1 - 1U;
        *(uint *)(lVar4 + 0x14) = uVar3;
        pFVar6 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar6 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar3;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(pFVar6->InlineData + uVar5 * 4);
        *(int *)(pFVar6->InlineData + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20cc20

void __thiscall
TSet<TTuple<UOptimusNodeLink_const_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UOptimusNodeLink_const_*,FName>,TDefaultMapHashableKeyFuncs<UOptimusNodeLink_const_*,FName,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar4 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20ccfc;
        uVar4 = puVar8[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20ccfc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        lVar5 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18;
        uVar6 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)(lVar5 + 0x14) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20cde0

void __thiscall
TSet<TTuple<UOptimusNodePin_const_*,FOptimus_KernelConnection>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UOptimusNodePin_const_*,FOptimus_KernelConnection>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20cebc;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20cebc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20cfa0

void __thiscall
TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20d07c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20d07c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20d160

void __thiscall
TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar7 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20d23c;
        uVar7 = puVar9[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20d23c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (undefined8 *)
                 ((longlong)local_30.CurrentBitIndex * 0x60 + *(longlong *)&this->Elements);
        uVar7 = ((uint)((ulonglong)*puVar8 >> 0x20) ^ (uint)*puVar8) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x5c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 0xb) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20d300

void __thiscall
TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar7 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20d3dc;
        uVar7 = puVar9[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20d3dc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (undefined8 *)
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = ((uint)((ulonglong)*puVar8 >> 0x20) ^ (uint)*puVar8) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20d4a0

void __thiscall
TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FGuid,TObjectPtr<UOptimusDeformerInstance>_>,TDefaultMapHashableKeyFuncs<FGuid,TObjectPtr<UOptimusDeformerInstance>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  ulong64 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  char *pcVar8;
  uint uVar9;
  uint *puVar10;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_30.Array;
      }
      uVar9 = *puVar10;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20d577;
        uVar9 = puVar10[lVar5 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20d577:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pcVar8 = (char *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = CityHash64(pcVar8,0x10);
        uVar9 = *piVar1 - 1U & (uint)uVar4;
        *(uint *)(pcVar8 + 0x1c) = uVar9;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(pcVar8 + 0x18) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20d640

void __thiscall
TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FOptimusConstantIdentifier *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20d717;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20d717:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FOptimusConstantIdentifier *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x30);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pFVar8[1].ConstantName.Number = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pFVar8[1].ConstantName.ComparisonIndex.Value = *(uint *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20d7d0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusInstancedNode,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeDataInterface_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FOptimusInstancedNode *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20d8a7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20d8a7:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FOptimusInstancedNode *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x50);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)(pFVar8[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)
         pFVar8[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData =
             *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20d960

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedNode,UComputeKernel_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeKernel_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusInstancedNode,UComputeKernel_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,UComputeKernel_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FOptimusInstancedNode *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20da37;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20da37:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FOptimusInstancedNode *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x50);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)(pFVar8[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 4) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)
         pFVar8[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData =
             *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20daf0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TArray<FOptimusInstancedNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FOptimusInstancedNode *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20dbc7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20dbc7:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FOptimusInstancedNode *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x58);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)(pFVar8[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)
         (pFVar8[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
             *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20dc80

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FOptimusInstancedNode *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20dd57;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20dd57:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FOptimusInstancedNode *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x98);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)(pFVar8[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)
         (pFVar8[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
             *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20de20

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FOptimusInstancedNode *pFVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20def7;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20def7:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pFVar8 = (FOptimusInstancedNode *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x98);
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)(pFVar8[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)
         (pFVar8[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
             *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20dfc0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedPin,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusInstancedPin,UComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UComputeDataInterface_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UOptimusNode *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  FOptimusInstancedNode *pFVar9;
  uint uVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar5 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20e097;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20e097:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        pFVar9 = (FOptimusInstancedNode *)
                 ((longlong)local_40.CurrentBitIndex * 0x58 + *(longlong *)&this->Elements);
        pUVar3 = pFVar9[1].RoutedNode.Node;
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar10 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = ::GetTypeHash(pFVar9);
        uVar5 = (uVar5 * 0x40 + (uVar10 >> 0x10 ^ uVar10) + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5) &
                *piVar1 - 1U;
        *(uint *)(pFVar9[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 0xc) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)
         (pFVar9[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
             *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20e1b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusInstancedPin,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UOptimusNode *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  FOptimusInstancedNode *pFVar9;
  uint uVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar5 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20e287;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20e287:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        pFVar9 = (FOptimusInstancedNode *)
                 ((longlong)local_40.CurrentBitIndex * 0x58 + *(longlong *)&this->Elements);
        pUVar3 = pFVar9[1].RoutedNode.Node;
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar10 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = ::GetTypeHash(pFVar9);
        uVar5 = (uVar5 * 0x40 + (uVar10 >> 0x10 ^ uVar10) + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5) &
                *piVar1 - 1U;
        *(uint *)(pFVar9[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 0xc) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)
         (pFVar9[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
             *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20e3a0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UOptimusNode *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  FOptimusInstancedNode *pFVar9;
  uint uVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar5 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20e477;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20e477:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        pFVar9 = (FOptimusInstancedNode *)
                 ((longlong)local_40.CurrentBitIndex * 0x98 + *(longlong *)&this->Elements);
        pUVar3 = pFVar9[1].RoutedNode.Node;
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar10 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = ::GetTypeHash(pFVar9);
        uVar5 = (uVar5 * 0x40 + (uVar10 >> 0x10 ^ uVar10) + 0x9e3779b9 + (uVar5 >> 2) ^ uVar5) &
                *piVar1 - 1U;
        *(uint *)(pFVar9[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 0xc) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)
         (pFVar9[2].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 8) =
             *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20e580

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,`UOptimusDeformer::CompileNodeGraphToComputeGraphs'::__l2::FDataInterfaceFunctionBinding,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  UOptimusNode *pUVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> *pFVar7;
  FOptimusInstancedNode *pFVar8;
  uint uVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = local_40.Array;
      }
      uVar4 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar5 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20e657;
        uVar4 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar5 * 4 + 4);
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_54 = (int)lVar5 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20e657:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        pFVar8 = (FOptimusInstancedNode *)
                 ((longlong)local_40.CurrentBitIndex * 0x60 + *(longlong *)this);
        pUVar3 = pFVar8[1].RoutedNode.Node;
        uVar4 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = ::GetTypeHash(pFVar8);
        uVar4 = (uVar4 * 0x40 + (uVar9 >> 0x10 ^ uVar9) + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4) &
                *piVar1 - 1U;
        *(uint *)(pFVar8[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 0x14) = uVar4;
        pFVar7 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar7 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)
         (pFVar8[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 0x10
         ) = *(undefined4 *)(pFVar7->InlineData + uVar6 * 4);
        *(int *)(pFVar7->InlineData + uVar6 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20e770

/* WARNING: Type propagation algorithm not settling */

void __thiscall
TSet<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  UOptimusNode *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  FOptimusInstancedNode *pFVar9;
  uint uVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar5 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20e847;
        uVar5 = puVar11[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20e847:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        pFVar9 = (FOptimusInstancedNode *)
                 ((longlong)local_40.CurrentBitIndex * 0x60 + *(longlong *)&this->Elements);
        pUVar3 = pFVar9[1].RoutedNode.Node;
        uVar5 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
                -0x7a143595;
        uVar10 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar5 = ::GetTypeHash(pFVar9);
        uVar5 = (uVar5 * 0x40 + (uVar10 >> 0x10 ^ uVar10) + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5) &
                *piVar1 - 1U;
        *(uint *)(pFVar9[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.
                  InlineData + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)
         (pFVar9[1].RoutedNode.TraversalContext.ReferenceNesting.AllocatorInstance.InlineData + 0x10
         ) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20e960

void __thiscall
TSet<TTuple<FOptimusRoutedConstNode,int>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusRoutedConstNode,int>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,int,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar4 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20ea37;
        uVar4 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20ea37:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48;
        uVar7 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48);
        uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar5 = uVar5 >> 0x10 ^ uVar5;
        uVar4 = ::GetTypeHash((FOptimusPinTraversalContext *)(lVar6 + 8));
        uVar4 = *piVar1 - 1U & (uVar4 + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5);
        *(uint *)(lVar6 + 0x44) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar6 + 0x40) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20eb50

void __thiscall
TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,UOptimusComputeDataInterface_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar4 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20ec27;
        uVar4 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20ec27:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48;
        uVar7 = *(ulonglong *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x48);
        uVar4 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar5 = uVar5 >> 0x10 ^ uVar5;
        uVar4 = ::GetTypeHash((FOptimusPinTraversalContext *)(lVar6 + 8));
        uVar4 = *piVar1 - 1U & (uVar4 + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5);
        *(uint *)(lVar6 + 0x44) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(lVar6 + 0x40) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20ed40

void __thiscall
TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar4 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20ee17;
        uVar4 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20ee17:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (ulonglong *)
                 ((longlong)local_40.CurrentBitIndex * 0x78 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
        uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar5 = uVar5 >> 0x10 ^ uVar5;
        uVar4 = ::GetTypeHash((FOptimusPinTraversalContext *)(puVar9 + 1));
        uVar4 = *piVar1 - 1U & (uVar4 + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5);
        *(uint *)((longlong)puVar9 + 0x74) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20ef20

void __thiscall
TSet<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<UOptimusComputeDataInterface_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar4 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20eff7;
        uVar4 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20eff7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (ulonglong *)
                 ((longlong)local_40.CurrentBitIndex * 0x50 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
        uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar5 = uVar5 >> 0x10 ^ uVar5;
        uVar4 = ::GetTypeHash((FOptimusPinTraversalContext *)(puVar9 + 1));
        uVar4 = *piVar1 - 1U & (uVar4 + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5);
        *(uint *)((longlong)puVar9 + 0x4c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar9 + 9) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20f110

void __thiscall
TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,TArray<FOptimusRoutedConstNode,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar4 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20f1e7;
        uVar4 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20f1e7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (ulonglong *)
                 ((longlong)local_40.CurrentBitIndex * 0x50 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
        uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar5 = uVar5 >> 0x10 ^ uVar5;
        uVar4 = ::GetTypeHash((FOptimusPinTraversalContext *)(puVar9 + 1));
        uVar4 = *piVar1 - 1U & (uVar4 + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5);
        *(uint *)((longlong)puVar9 + 0x4c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar9 + 9) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20f300

void __thiscall
TSet<TTuple<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,enum_EOptimusNodeGraphType,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> *pFVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_40.Array;
      }
      uVar3 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar3 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar5 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20f3d7;
        uVar3 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar5 * 4 + 4);
      }
      uStack_64 = -uVar3 & uVar3;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_54 = (int)lVar5 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20f3d7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        lVar5 = *(longlong *)this + (longlong)local_40.CurrentBitIndex * 0x48;
        uVar6 = *(ulonglong *)(*(longlong *)this + (longlong)local_40.CurrentBitIndex * 0x48);
        uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar4 = uVar4 >> 0x10 ^ uVar4;
        uVar3 = ::GetTypeHash((FOptimusPinTraversalContext *)(lVar5 + 8));
        uVar3 = *piVar1 - 1U & (uVar3 + uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4);
        *(uint *)(lVar5 + 0x44) = uVar3;
        pFVar7 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar7 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar3;
        *(undefined4 *)(lVar5 + 0x40) = *(undefined4 *)(pFVar7->InlineData + uVar6 * 4);
        *(int *)(pFVar7->InlineData + uVar6 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20f4f0

void __thiscall
TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNodePin,FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar4 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20f5c7;
        uVar4 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20f5c7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (ulonglong *)
                 ((longlong)local_40.CurrentBitIndex * 0x78 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
        uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar5 = uVar5 >> 0x10 ^ uVar5;
        uVar4 = ::GetTypeHash((FOptimusPinTraversalContext *)(puVar9 + 1));
        uVar4 = *piVar1 - 1U & (uVar4 + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5);
        *(uint *)((longlong)puVar9 + 0x74) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar9 + 0xe) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20f6d0

void __thiscall
TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ForElementType<FSetElementId> FVar9;
  byte *pbVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar6 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20f7a7;
        uVar6 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar3 < iStack_54) {
LAB_14e20f7a7:
        iStack_54 = iVar3;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        pbVar10 = (byte *)((longlong)local_40.CurrentBitIndex * 0x80 + *(longlong *)&this->Elements)
        ;
        uVar4 = *(undefined8 *)(pbVar10 + 4);
        uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar4);
        bVar2 = *pbVar10;
        uVar6 = ((uint)(bVar2 >> 2) + uVar6 + (int)((ulonglong)uVar4 >> 0x20) +
                 (uint)bVar2 * 0x40 + -0x61c88647 ^ (uint)bVar2) & *piVar1 - 1U;
        *(uint *)(pbVar10 + 0x7c) = uVar6;
        FVar5 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(pbVar10 + 0x78) = *(undefined4 *)((longlong)FVar9 + uVar8 * 4);
        *(int *)((longlong)FVar9 + uVar8 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20f8a0

void __thiscall
TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e20f977;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e20f977:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        iVar2 = local_30.CurrentBitIndex;
        pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x20);
        uVar4 = GetTypeHash<FName,TSizedDefaultAllocator<32>_>(pTVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        pTVar8[1].ArrayMax = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        pTVar8[1].ArrayNum = *(int *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = iVar2;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20fa30

void __thiscall
TSet<TTuple<FName,UActorComponent_*>,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,UActorComponent_*>,TDefaultMapHashableKeyFuncs<FName,UActorComponent_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20fb07;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20fb07:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20fbe0

void __thiscall
TSet<TTuple<FName,UScriptStruct_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,UScriptStruct_*>,TDefaultMapHashableKeyFuncs<FName,UScriptStruct_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20fcb7;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20fcb7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20fd90

void __thiscall
TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e20fe67;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e20fe67:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x1c + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(puVar9 + 3) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)((longlong)puVar9 + 0x14) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e20ff30

void __thiscall
TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e210007;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e210007:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0xa0 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x94) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e2100e0

void __thiscall
TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e2101b7;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e2101b7:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e210280

void __thiscall
TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e210357;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e210357:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x60 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x5c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 0xb) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e210430

void __thiscall
TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FString,FShaderFunctionDefinition_const_*>,TDefaultMapHashableKeyFuncs<FString,FShaderFunctionDefinition_const_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  ForElementType<FSetElementId> FVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar5 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar5 != 0) {
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar4 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e210507;
        uVar4 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar5 < iStack_54) {
LAB_14e210507:
        iStack_54 = iVar5;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar5) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar10 = (undefined8 *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x20);
        iVar5 = *(int *)(puVar10 + 1) + -1;
        if (*(int *)(puVar10 + 1) == 0) {
          pwVar8 = L"";
          iVar5 = 0;
        }
        else {
          pwVar8 = (wchar_t *)*puVar10;
        }
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar8);
        uVar4 = *piVar1 - 1U & uVar4;
        *(uint *)((longlong)puVar10 + 0x1c) = uVar4;
        FVar2 = (this->Hash).SecondaryData;
        FVar9 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar9 = FVar2;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar10 + 3) = *(undefined4 *)((longlong)FVar9 + uVar6 * 4);
        *(int *)((longlong)FVar9 + uVar6 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e2105e0

void __thiscall
TSet<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  byte *pbVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e2106bc;
        uVar6 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e2106bc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        pbVar7 = (byte *)((longlong)local_30.CurrentBitIndex * 0x60 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & (uint)*pbVar7;
        *(uint *)(pbVar7 + 0x5c) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(pbVar7 + 0x58) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e210780

void __thiscall
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::
Rehash(TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
       *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar4 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e210857;
        uVar4 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e210857:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (ulonglong *)
                 ((longlong)local_40.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
        uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar5 = uVar5 >> 0x10 ^ uVar5;
        uVar4 = ::GetTypeHash((FOptimusPinTraversalContext *)(puVar9 + 1));
        uVar4 = *piVar1 - 1U & (uVar4 + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5);
        *(uint *)((longlong)puVar9 + 0x3c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar9 + 7) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e210960

void __thiscall
TSet<FOptimusRoutedConstNodePin,DefaultKeyFuncs<FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
::Rehash(TSet<FOptimusRoutedConstNodePin,DefaultKeyFuncs<FOptimusRoutedConstNodePin,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar4 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar4 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14e210a37;
        uVar4 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar4 & uVar4;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14e210a37:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (ulonglong *)
                 ((longlong)local_40.CurrentBitIndex * 0x40 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar9 >> 0x14) & 0xffff ^ (uint)(*puVar9 >> 4)) * -0x7a143595;
        uVar5 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar5 = uVar5 >> 0x10 ^ uVar5;
        uVar4 = ::GetTypeHash((FOptimusPinTraversalContext *)(puVar9 + 1));
        uVar4 = *piVar1 - 1U & (uVar4 + uVar5 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ uVar5);
        *(uint *)((longlong)puVar9 + 0x3c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar3;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar9 + 7) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e210b40

void __thiscall
TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::Rehash(TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar5 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar5 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e210c17;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_54 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_14e210c17:
        iStack_44 = iVar3;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        iVar3 = local_30.CurrentBitIndex;
        pTVar2 = (TArray<FName,TSizedDefaultAllocator<32>_> *)
                 (*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x18);
        uVar5 = GetTypeHash<FName,TSizedDefaultAllocator<32>_>(pTVar2);
        uVar5 = *piVar1 - 1U & uVar5;
        *(uint *)((longlong)&pTVar2[1].AllocatorInstance.Data + 4) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)&pTVar2[1].AllocatorInstance.Data =
             *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar3;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14e210cd0

void __thiscall
TSet<enum_EOptimusNodeGraphType,DefaultKeyFuncs<enum_EOptimusNodeGraphType,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14e210dac;
        uVar6 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14e210dac:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        uVar6 = *piVar1 - 1U &
                *(uint *)(*(longlong *)this + (longlong)local_30.CurrentBitIndex * 0xc);
        lVar3 = *(longlong *)this + (longlong)local_30.CurrentBitIndex * 0xc;
        *(uint *)(lVar3 + 8) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// RehashOrLink @ 14e210e70

void __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
               *this,uint param_1,TSparseSetElement<UOptimusComponentSourceBinding_*> *param_2,
              int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0xc = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x8 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e210f00

void __thiscall
TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<UComputeDataInterface_const_*,int>,TDefaultMapHashableKeyFuncs<UComputeDataInterface_const_*,int,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<UComputeDataInterface_const_*,int>_> *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x14 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x10 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e210f90

void __thiscall
TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x5c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x58 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e211020

void __thiscall
TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>,TDefaultMapHashableKeyFuncs<FOptimusRoutedConstNode,FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>_> *param_2,
              int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x74 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x70 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e2110b0

void __thiscall
TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_> *param_2,
              int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x7c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x78 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e211140

void __thiscall
TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_> *param_2,
              int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x1c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x18 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e2111d0

void __thiscall
TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>
              *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x1c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x18 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e211260

void __thiscall
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::
RehashOrLink(TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
             *this,uint param_1,TSparseSetElement<FOptimusRoutedConstNode> *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x3c = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x38 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e2112f0

void __thiscall
TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::RehashOrLink(TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
               *this,uint param_1,
              TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_> *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  uVar5 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if (uVar5 < 4) {
    iVar2 = 1;
  }
  else {
    uVar3 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar2 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((0 < (int)uVar5) && (this->HashSize < iVar2)) {
    this->HashSize = iVar2;
    Rehash(this);
    return;
  }
  uVar5 = this->HashSize - 1U & param_1;
  *(uint *)&param_2->field_0x14 = uVar5;
  FVar4 = (this->Hash).SecondaryData;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar3 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
  *(undefined4 *)&param_2->field_0x10 = *(undefined4 *)((longlong)FVar4 + uVar3 * 4);
  *(int *)((longlong)FVar4 + uVar3 * 4) = param_3;
  return;
}

// RehashOrLink @ 14e211380

void __thiscall
TSet<enum_EOptimusNodeGraphType,DefaultKeyFuncs<enum_EOptimusNodeGraphType,0>,FDefaultSetAllocator>
::RehashOrLink(void *this,uint param_1,TSparseSetElement<EOptimusNodeGraphType> *param_2,int param_3
              )

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if (uVar4 < 4) {
    iVar1 = 1;
  }
  else {
    uVar2 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar1 = 1 << ((byte)lVar3 & 0x1f);
  }
  if ((0 < (int)uVar4) && (*(int *)((longlong)this + 0x48) < iVar1)) {
    *(int *)((longlong)this + 0x48) = iVar1;
    Rehash(this);
    return;
  }
  uVar4 = *(int *)((longlong)this + 0x48) - 1U & param_1;
  *(uint *)&param_2->field_0x8 = uVar4;
  lVar3 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar3 = (longlong)this + 0x38;
  }
  uVar2 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar4;
  *(undefined4 *)&param_2->field_0x4 = *(undefined4 *)(lVar3 + uVar2 * 4);
  *(int *)(lVar3 + uVar2 * 4) = param_3;
  return;
}

// Reserve @ 14e219050

void __thiscall
TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
::Reserve(TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
          *this,int param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  if ((uint)(*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34) <
      (uint)param_1) {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)param_1);
    }
    TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<96,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)this,param_1);
    if ((uint)param_1 < 4) {
      iVar3 = 1;
    }
    else {
      uVar1 = (ulonglong)(((uint)param_1 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar3 = 1 << ((byte)lVar2 & 0x1f);
    }
    if ((this->HashSize == 0) || (this->HashSize < iVar3)) {
      this->HashSize = iVar3;
      Rehash(this);
    }
  }
  return;
}

// Reset @ 14e219140

void __thiscall
TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14e2191c0

void __thiscall
TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14e219240

void __thiscall
TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14e2192c0

void __thiscall
TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xa0,0x10,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14e219340

void __thiscall
TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// Reset @ 14e2193c0

void __thiscall
TSet<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::Reset(void *this)

{
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(this,0,*(int *)((longlong)this + 8));
    *(undefined4 *)((longlong)this + 8) = 0;
    if (*(int *)((longlong)this + 0xc) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,this,0,(int *)((longlong)this + 0xc));
    }
    *(undefined4 *)((longlong)this + 0x34) = 0;
    *(undefined4 *)((longlong)this + 0x28) = 0;
    *(undefined4 *)((longlong)this + 0x30) = 0xffffffff;
  }
  return;
}

// Reset @ 14e219440

void __thiscall
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::Reset
          (TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
           *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// TryReplaceExisting @ 14e228d80

bool __thiscall
TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FOptimusConstantIdentifier,TArray<float,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  void *_Dst;
  uint uVar15;
  bool bVar16;
  
  iVar14 = *(int *)&(this->Elements).field_0x8;
  bVar16 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar14 - iVar2 != 1) && (iVar14 != iVar2)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar14 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar10 = (longlong)iVar14;
        if (((*(longlong *)(lVar3 + lVar10 * 0x30) == *(longlong *)param_2) &&
            (*(longlong *)(lVar3 + 8 + lVar10 * 0x30) == *(longlong *)&param_2->field_0x8)) &&
           (*(longlong *)(lVar3 + 0x10 + lVar10 * 0x30) == *(longlong *)&param_2->field_0x10)) {
          bVar16 = iVar14 != -1;
          if (bVar16) {
            _Dst = (void *)((longlong)iVar14 * 0x30 + lVar3);
            pvVar4 = *(void **)((longlong)_Dst + 0x18);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            memmove(_Dst,param_2,0x28);
            iVar2 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar3 = *(longlong *)&this->Elements;
            bVar6 = (byte)iVar2 & 0x1f;
            uVar15 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar10 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar10) & uVar15) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar3 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x30) = iVar2;
            }
            uVar9 = 0xffffffff;
            puVar12 = (undefined4 *)((longlong)iVar2 * 0x30 + lVar3);
            *puVar12 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar12[1] = uVar9;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar2;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar10) = *(uint *)(puVar11 + lVar10) & ~uVar15;
            *param_3 = iVar14;
          }
          break;
        }
        iVar14 = *(int *)(lVar3 + 0x28 + lVar10 * 0x30);
      } while (iVar14 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar16;
  }
  return bVar16;
}

// TryReplaceExisting @ 14e228fe0

bool __thiscall
TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  void *_Dst;
  uint uVar13;
  bool bVar14;
  
  iVar12 = *(int *)&(this->Elements).field_0x8;
  bVar14 = false;
  iVar2 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar2 != 1) && (iVar12 != iVar2)) {
    FVar11 = (this->Hash).SecondaryData;
    if (FVar11 == (ForElementType<FSetElementId>)0x0) {
      FVar11 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar11 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar3 = *(longlong *)&this->Elements;
      do {
        lVar10 = (longlong)iVar12 * 0x80;
        if ((*(char *)(lVar10 + lVar3) == *(char *)param_2) &&
           (*(longlong *)(lVar10 + 4 + lVar3) == *(longlong *)&param_2->field_0x4)) {
          bVar14 = iVar12 != -1;
          if (bVar14) {
            _Dst = (void *)((longlong)iVar12 * 0x80 + lVar3);
            DestructItems<FArrayShaderValue,int>
                      (*(FArrayShaderValue **)((longlong)_Dst + 0x68),
                       *(int *)((longlong)_Dst + 0x70));
            if (*(void **)((longlong)_Dst + 0x68) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x68));
            }
            if (*(void **)((longlong)_Dst + 0x58) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x58));
            }
            FInstancedStruct::Reset((FInstancedStruct *)((longlong)_Dst + 0x48));
            if (*(void **)((longlong)_Dst + 0x30) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x30));
            }
            memmove(_Dst,param_2,0x78);
            iVar2 = *param_3;
            puVar1 = &(this->Elements).field_0x10;
            lVar3 = *(longlong *)&this->Elements;
            bVar5 = (byte)iVar2 & 0x1f;
            uVar13 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar10 = (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            if (((*(uint *)(puVar9 + lVar10) & uVar13) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x80 + lVar3) = iVar2;
            }
            uVar8 = 0xffffffff;
            *(undefined4 *)((longlong)iVar2 * 0x80 + lVar3) = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar8 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            *(undefined4 *)((longlong)iVar2 * 0x80 + 4 + lVar3) = uVar8;
            puVar9 = &(this->Elements).field_0x34;
            *(int *)puVar9 = *(int *)puVar9 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar2;
            if (((iVar2 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar2)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = puVar1;
            }
            *(uint *)(puVar9 + lVar10) = *(uint *)(puVar9 + lVar10) & ~uVar13;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)(lVar10 + 0x78 + lVar3);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar14;
  }
  return bVar14;
}

// TryReplaceExisting @ 14e229250

bool __thiscall
TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,FOptimusValueIdentifier>,TDefaultMapHashableKeyFuncs<FName,FOptimusValueIdentifier,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TTuple<FName,FOptimusValueIdentifier>_> *param_2,
          int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  ForElementType<FSetElementId> FVar13;
  uint uVar14;
  bool bVar15;
  
  bVar15 = false;
  iVar12 = *(int *)&(this->Elements).field_0x8;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  if ((iVar12 - iVar3 != 1) && (iVar12 != iVar3)) {
    FVar13 = (this->Hash).SecondaryData;
    if (FVar13 == (ForElementType<FSetElementId>)0x0) {
      FVar13 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar12 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar12 != -1) {
      lVar4 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar12 * 0x1c + lVar4) == *(longlong *)param_2) {
          bVar15 = iVar12 != -1;
          if (bVar15) {
            memmove((void *)((longlong)iVar12 * 0x1c + lVar4),param_2,0x14);
            iVar3 = *param_3;
            lVar4 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar6 = (byte)iVar3 & 0x1f;
            uVar14 = 1 << bVar6 | 1U >> 0x20 - bVar6;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            if (((*(uint *)(puVar10 + lVar2) & uVar14) == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)((longlong)*(int *)&(this->Elements).field_0x30 * 0x1c + lVar4) = iVar3;
            }
            uVar9 = 0xffffffff;
            puVar11 = (undefined4 *)((longlong)iVar3 * 0x1c + lVar4);
            *puVar11 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar9 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar11[1] = uVar9;
            puVar10 = &(this->Elements).field_0x34;
            *(int *)puVar10 = *(int *)puVar10 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar3;
            if (((iVar3 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar3)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              uVar8 = (*pcVar5)();
              return (bool)uVar8;
            }
            puVar10 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar10 == (undefined1 *)0x0) {
              puVar10 = puVar1;
            }
            *(uint *)(puVar10 + lVar2) = *(uint *)(puVar10 + lVar2) & ~uVar14;
            *param_3 = iVar12;
          }
          break;
        }
        iVar12 = *(int *)((longlong)iVar12 * 0x1c + 0x14 + lVar4);
      } while (iVar12 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14e229470

bool __thiscall
TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<float,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FName,TArray<float,TSizedDefaultAllocator<32>_>_>_> *param_2,
          int *param_3,bool *param_4)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  void *_Dst;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  bVar6 = false;
  iVar4 = *(int *)&(this->Elements).field_0x8;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar4 * 0x20 + lVar2) == *(longlong *)param_2) {
          bVar6 = iVar4 != -1;
          if (bVar6) {
            _Dst = (void *)((longlong)iVar4 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,param_2,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar6;
  }
  return bVar6;
}

// TryReplaceExisting @ 14e229580

bool __thiscall
TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FName,TArray<UOptimusNodePin_*,TSizedDefaultAllocator<32>_>_>_>
          *param_2,int *param_3,bool *param_4)

{
  int iVar1;
  longlong lVar2;
  void *pvVar3;
  int iVar4;
  void *_Dst;
  ForElementType<FSetElementId> FVar5;
  bool bVar6;
  
  bVar6 = false;
  iVar4 = *(int *)&(this->Elements).field_0x8;
  iVar1 = *(int *)&(this->Elements).field_0x34;
  if ((iVar4 - iVar1 != 1) && (iVar4 != iVar1)) {
    FVar5 = (this->Hash).SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar4 = *(int *)((longlong)FVar5 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar4 * 0x20 + lVar2) == *(longlong *)param_2) {
          bVar6 = iVar4 != -1;
          if (bVar6) {
            _Dst = (void *)((longlong)iVar4 * 0x20 + lVar2);
            pvVar3 = *(void **)((longlong)_Dst + 8);
            if (pvVar3 != (void *)0x0) {
              FMemory::Free(pvVar3);
            }
            memmove(_Dst,param_2,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,*param_3,1);
            *param_3 = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar2);
      } while (iVar4 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar6;
  }
  return bVar6;
}

// UnhashElements @ 14e229950

void __thiscall
TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
::UnhashElements(TSet<UOptimusComponentSourceBinding_*,DefaultKeyFuncs<UOptimusComponentSourceBinding_*,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e229a4b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e229a4b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e229b40;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e229b40:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<UOptimusComponentSourceBinding_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0xc + (longlong)local_60.CurrentBitIndex * 0x10) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e229be0

void __thiscall
TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e229cdb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e229cdb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e229dd0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e229dd0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x60 + 0x5c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e229e70

void __thiscall
TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>,TDefaultMapHashableKeyFuncs<FOptimusValueIdentifier,FOptimusValueDescription,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e229f6b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e229f6b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e22a060;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e22a060:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x80 + 0x7c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e22a100

void __thiscall
TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>,TDefaultMapHashableKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e22a1fb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e22a1fb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e22a2f0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e22a2f0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<TArray<FName,TSizedDefaultAllocator<32>_>,UOptimusNodePin_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e22a390

void __thiscall
TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>,TDefaultMapHashableKeyFuncs<FName,FOptimusDataTypeRegistry::FTypeInfo,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e22a48b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e22a48b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e22a580;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e22a580:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FOptimusDataTypeRegistry::FTypeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0xa0 + 0x94 + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e22a620

void __thiscall
TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e22a71b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e22a71b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e22a810;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e22a810:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x60 + 0x5c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e22a8b0

void __thiscall
TSet<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>,0>,FDefaultSetAllocator>
::UnhashElements(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  int local_res10;
  void *local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  iVar3 = *(int *)((longlong)this + 0x48);
  local_res18 = *(void **)((longlong)this + 0x40);
  if (*(void **)((longlong)this + 0x40) == (void *)0x0) {
    local_res18 = (void *)((longlong)this + 0x38);
  }
  local_40 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset(local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)((longlong)this + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e22a9ab;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e22a9ab:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)((longlong)this + 0x28);
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar12 = uVar9 & 0xffffffe0;
  local_60.Array = pTVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar6 = local_res18;
  uVar4 = *(uint *)((longlong)this + 0x28);
  if (uVar9 != uVar4) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) &
            *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e22aaa0;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e22aaa0:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) && (local_60.Array == pTVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)pvVar6 +
     (longlong)*(int *)((longlong)local_60.CurrentBitIndex * 0x60 + 0x5c + *(longlong *)this) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e22ab40

void __thiscall
TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>::
UnhashElements(TSet<FOptimusRoutedConstNode,DefaultKeyFuncs<FOptimusRoutedConstNode,0>,FDefaultSetAllocator>
               *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e22ac3b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e22ac3b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e22ad30;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e22ad30:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<FOptimusRoutedConstNode>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x40 + 0x3c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14e22add0

void __thiscall
TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TArray<FName,TSizedDefaultAllocator<32>_>,DefaultKeyFuncs<TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14e22aecb;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14e22aecb:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14e22afc0;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14e22afc0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TArray<FName,TSizedDefaultAllocator<32>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

