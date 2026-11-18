// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// FCullDistanceInfo @ 1442ad7f0

FCullDistanceInfo * __thiscall
`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::FCullDistanceInfo
          (void *this,FCullDistanceInfo *param_1)

{
  undefined8 *puVar1;
  TMap<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>
  *pTVar2;
  undefined1 *_Src;
  
  puVar1 = (undefined8 *)((longlong)this + 0x10);
  *(UClass **)this = param_1->Class;
  pTVar2 = &param_1->UniqueCullDistances;
  *(uint *)((longlong)this + 8) = param_1->NumTotal;
  *(uint *)((longlong)this + 0xc) = param_1->NumOverrides;
  *puVar1 = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined4 *)((longlong)this + 0x38) = 0;
  *(undefined4 *)((longlong)this + 0x3c) = 0x80;
  *(undefined4 *)((longlong)this + 0x40) = 0xffffffff;
  *(undefined4 *)((longlong)this + 0x44) = 0;
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined4 *)((longlong)this + 0x58) = 0;
  if ((TMap<float,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<float,unsigned_int,0>_>
       *)puVar1 != pTVar2) {
    *puVar1 = *(undefined8 *)pTVar2;
    *(undefined8 *)pTVar2 = 0;
    *(undefined4 *)((longlong)this + 0x18) =
         *(undefined4 *)&(param_1->UniqueCullDistances).field_0x8;
    _Src = &(param_1->UniqueCullDistances).field_0x10;
    *(undefined4 *)((longlong)this + 0x1c) =
         *(undefined4 *)&(param_1->UniqueCullDistances).field_0xc;
    *(undefined8 *)&(param_1->UniqueCullDistances).field_0x8 = 0;
    if ((undefined1 *)((longlong)this + 0x20) != _Src) {
      if (*(longlong *)&(param_1->UniqueCullDistances).field_0x20 == 0) {
        memmove((undefined1 *)((longlong)this + 0x20),_Src,0x10);
      }
      if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)this + 0x30));
      }
      *(undefined8 *)((longlong)this + 0x30) =
           *(undefined8 *)&(param_1->UniqueCullDistances).field_0x20;
      *(undefined8 *)&(param_1->UniqueCullDistances).field_0x20 = 0;
      *(undefined4 *)((longlong)this + 0x38) =
           *(undefined4 *)&(param_1->UniqueCullDistances).field_0x28;
      *(undefined4 *)((longlong)this + 0x3c) =
           *(undefined4 *)&(param_1->UniqueCullDistances).field_0x2c;
      *(undefined8 *)&(param_1->UniqueCullDistances).field_0x28 = 0;
    }
    *(undefined4 *)((longlong)this + 0x40) =
         *(undefined4 *)&(param_1->UniqueCullDistances).field_0x30;
    *(undefined4 *)((longlong)this + 0x44) =
         *(undefined4 *)&(param_1->UniqueCullDistances).field_0x34;
    *(undefined4 *)&(param_1->UniqueCullDistances).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->UniqueCullDistances).field_0x34 = 0;
  }
  if (*(longlong *)&(param_1->UniqueCullDistances).field_0x40 == 0) {
    *(undefined4 *)((longlong)this + 0x48) =
         *(undefined4 *)&(param_1->UniqueCullDistances).field_0x38;
  }
  if (*(void **)((longlong)this + 0x50) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x50));
  }
  *(undefined8 *)((longlong)this + 0x50) = *(undefined8 *)&(param_1->UniqueCullDistances).field_0x40
  ;
  *(undefined8 *)&(param_1->UniqueCullDistances).field_0x40 = 0;
  *(undefined4 *)((longlong)this + 0x58) = *(undefined4 *)&(param_1->UniqueCullDistances).field_0x48
  ;
  *(undefined4 *)&(param_1->UniqueCullDistances).field_0x48 = 0;
  return this;
}

// FindMostUsedCullDistance @ 1442c0620

float __thiscall
`UObjectReplicationBridge::PrintNetCullDistances'::__l2::FCullDistanceInfo::FindMostUsedCullDistance
          (void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined8 local_res8;
  int local_res10;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar3 = *(int *)((longlong)this + 0x38);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x20);
  uVar11 = 0;
  fVar16 = 0.0;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar10 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    iVar14 = 0;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1442c06cd;
      uVar10 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_1442c06cd:
  uVar10 = *(uint *)((longlong)this + 0x38);
  uVar15 = uVar10 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar6,iVar12);
  TStack_70.CurrentBitIndex = iVar7;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_70._28_4_ = iVar7;
  TStack_70.BaseBitIndex = iVar14;
  uStack_50 = CONCAT44(uStack_7c,*(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44));
  TStack_70.Array = pTVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar16 = (float)(*pcVar4)();
    return fVar16;
  }
  uVar6 = *(uint *)((longlong)this + 0x38);
  uVar9 = 0;
  if (uVar10 != uVar6) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar9 = uVar11, uVar10 == 0) {
      lVar8 = (longlong)iVar12;
      uVar15 = uVar15 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1442c07d0;
      uVar10 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_1442c07d0:
  while( true ) {
    uVar6 = uVar9;
    if (*(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44) != (int)uStack_50) {
      `TSparseArray<TSparseSetElement<TTuple<float,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar10) && (TStack_70.Array == pTVar1)) break;
    local_res8 = *(undefined8 *)
                  (*(longlong *)((longlong)this + 0x10) + (longlong)TStack_70.CurrentBitIndex * 0x10
                  );
    uVar9 = (uint)((ulonglong)local_res8 >> 0x20);
    fVar17 = fVar16;
    if ((uVar6 <= uVar9) && (fVar17 = (float)local_res8, (float)local_res8 <= fVar16)) {
      fVar17 = fVar16;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    fVar16 = fVar17;
    if (uVar9 < uVar6) {
      uVar9 = uVar6;
    }
  }
  return fVar16;
}

