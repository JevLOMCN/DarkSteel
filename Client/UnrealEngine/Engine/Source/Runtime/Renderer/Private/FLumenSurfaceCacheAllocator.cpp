// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// Allocate @ 144d57850

void __thiscall
FLumenSurfaceCacheAllocator::Allocate
          (FLumenSurfaceCacheAllocator *this,FLumenPageTableEntry *param_1,FAllocation *param_2)

{
  TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this_00;
  int *piVar1;
  uchar *puVar2;
  int *piVar3;
  int iVar4;
  ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> FVar5;
  TIntPoint<int>_u_0_s_0 TVar6;
  code *pcVar7;
  TIntPoint<int>_u_0 TVar8;
  TIntPoint<int>_u_0 TVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FPageBin *pFVar13;
  TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> FVar18;
  TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *pTVar19;
  ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> FVar20;
  uint local_res10 [2];
  FAllocation *local_res18;
  int local_res20;
  TIntPoint<int>_u_0 local_78;
  TIntPoint<int>_u_0 local_68;
  int iStack_5c;
  TIntPoint<int>_u_0 local_58;
  
  local_res18 = param_2;
  if (((param_1->SubAllocationSize).field0_0x0._s_0.X < 0) &&
     ((param_1->SubAllocationSize).field0_0x0._s_0.Y < 0)) {
    iVar11 = TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
             FindAndSetFirstZeroBit(&this->PhysicalPageList,0);
    this->PhysicalPageFreeCount = this->PhysicalPageFreeCount + -1;
    if ((iVar11 == -1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("LinearIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                            ,0x179,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar4 = (this->PageAtlasSizeInPages).field0_0x0._s_0.X;
    iVar12 = iVar11 / iVar4;
    iVar11 = iVar11 % iVar4;
    TVar8._s_0.Y = iVar12;
    TVar8._s_0.X = iVar11;
    (param_2->PhysicalPageCoord).field0_0x0 = TVar8;
    local_78._s_0.Y = iVar12 << 7;
    local_78._s_0.X = iVar11 << 7;
    (param_2->PhysicalAtlasRect).field0_0x0._s_0.Min.field0_0x0 = local_78;
    local_68._s_0.Y = (iVar12 + 1) * 0x80;
    local_68._s_0.X = (iVar11 + 1) * 0x80;
    (param_2->PhysicalAtlasRect).field0_0x0._s_0.Max.field0_0x0 = local_68;
    return;
  }
  pFVar13 = GetOrAddBin(this,&param_1->SubAllocationSize);
  if ((pFVar13 == (FPageBin *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MatchingBin",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                          ,0x18a,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  piVar1 = &(pFVar13->BinAllocations).ArrayNum;
  iVar11 = *piVar1;
  FVar20 = (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)&pFVar13->BinAllocations
  ;
  FVar5 = (pFVar13->BinAllocations).AllocatorInstance.SecondaryData;
  FVar18 = FVar20;
  if (FVar5 != (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0) {
    FVar18 = FVar5;
  }
  FVar5 = (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)
          ((longlong)FVar18 + (longlong)iVar11 * 0x48);
  while( true ) {
    if (*piVar1 != iVar11) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TCheckedPointerIterator<FLumenSurfaceCacheAllocator::FPageBinAllocation,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (FVar18 == FVar5) goto LAB_144d579f6;
    if (0 < *(int *)((longlong)FVar18 + 0x40)) break;
    FVar18 = (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)
             ((longlong)FVar18 + 0x48);
  }
  if (FVar18 == (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0) {
LAB_144d579f6:
    iVar11 = TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
             FindAndSetFirstZeroBit(&this->PhysicalPageList,0);
    this->PhysicalPageFreeCount = this->PhysicalPageFreeCount + -1;
    if ((iVar11 == -1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("LinearIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                            ,0x179,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar3 = &(pFVar13->BinAllocations).ArrayMax;
    iVar4 = (this->PageAtlasSizeInPages).field0_0x0._s_0.X;
    iVar12 = *piVar1;
    if (iVar12 == *piVar3) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>_>
                         (0x848,(ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> *)
                                FVar20,piVar3);
      *piVar1 = iVar12;
    }
    *piVar1 = iVar12 + 1;
    FVar18 = (pFVar13->BinAllocations).AllocatorInstance.SecondaryData;
    if (FVar18 != (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0) {
      FVar20 = FVar18;
    }
    FVar18 = (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)
             ((longlong)FVar20 + (longlong)iVar12 * 0x48);
    DefaultConstructItems<FLumenSurfaceCacheAllocator::FPageBinAllocation,int>((void *)FVar18,1);
    *(ulonglong *)FVar18 = CONCAT44(iVar11 / iVar4,iVar11 % iVar4);
    *(TIntPoint<int>_u_0 *)((longlong)FVar18 + 8) = (pFVar13->PageSizeInElements).field0_0x0;
    iVar11 = (pFVar13->PageSizeInElements).field0_0x0._s_0.Y *
             (pFVar13->PageSizeInElements).field0_0x0._s_0.X;
    *(int *)((longlong)FVar18 + 0x40) = iVar11;
    TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum<bool>
              ((TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
               ((longlong)FVar18 + 0x10),iVar11,false);
  }
  this_00 = (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
            ((longlong)FVar18 + 0x10);
  pTVar19 = *(TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
             ((longlong)FVar18 + 0x30);
  if (*(TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
       ((longlong)FVar18 + 0x30) ==
      (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    pTVar19 = this_00;
  }
  uVar17 = 0;
  uVar15 = *(int *)((longlong)FVar18 + 0x38) + 0x1f;
  pTVar14 = pTVar19;
  if (uVar15 >> 5 == 0) {
LAB_144d57b03:
    iVar11 = -1;
LAB_144d57b08:
    *(int *)((longlong)FVar18 + 0x40) = *(int *)((longlong)FVar18 + 0x40) + -1;
    iVar4 = *(int *)((longlong)FVar18 + 8);
    if (((*(int *)FVar18 < 0) || (*(int *)((longlong)FVar18 + 4) < 0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MatchingBinAllocation->PageCoord.X >= 0 && MatchingBinAllocation->PageCoord.Y >= 0"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                            ,0x196,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    TVar6 = *(TIntPoint<int>_u_0_s_0 *)FVar18;
    iStack_5c = TVar6.Y;
    iVar12 = TVar6.X * 0x80 + (iVar11 % iVar4) * (pFVar13->ElementSize).field0_0x0._s_0.X;
    iVar11 = iStack_5c * 0x80 + (iVar11 / iVar4) * (pFVar13->ElementSize).field0_0x0._s_0.Y;
    TVar9._s_0.Y = iVar11;
    TVar9._s_0.X = iVar12;
    (local_res18->PhysicalAtlasRect).field0_0x0._s_0.Min.field0_0x0 = TVar9;
    (local_res18->PhysicalPageCoord).field0_0x0._s_0 = TVar6;
    local_58._s_0.Y = iVar11 + (pFVar13->ElementSize).field0_0x0._s_0.Y;
    local_58._s_0.X = iVar12 + (pFVar13->ElementSize).field0_0x0._s_0.X;
    (local_res18->PhysicalAtlasRect).field0_0x0._s_0.Max.field0_0x0 = local_58;
    return;
  }
LAB_144d57af0:
  if (*(int *)(pTVar14->AllocatorInstance).InlineData == -1) goto code_r0x000144d57af9;
  uVar15 = ~*(uint *)((pTVar19->AllocatorInstance).InlineData + uVar17 * 4);
  local_res20 = 0;
  if (uVar15 != 0) {
    for (; (uVar15 >> local_res20 & 1) == 0; local_res20 = local_res20 + 1) {
    }
  }
  iVar11 = 0x20;
  if (uVar15 != 0) {
    iVar11 = local_res20;
  }
  iVar11 = iVar11 + (int)uVar17 * 0x20;
  if (iVar11 < *(int *)((longlong)FVar18 + 0x38)) {
    if (iVar11 != -1) {
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5be,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar19 = this_00;
      if (*(TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
           ((longlong)FVar18 + 0x30) !=
          (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
        pTVar19 = *(TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> **)
                   ((longlong)FVar18 + 0x30);
      }
      puVar2 = (pTVar19->AllocatorInstance).InlineData +
               (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
      *(uint *)puVar2 = *(uint *)puVar2 | 1 << ((byte)iVar11 & 0x1f);
      TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::CheckInvariants(this_00);
    }
    goto LAB_144d57b08;
  }
  goto LAB_144d57b03;
code_r0x000144d57af9:
  uVar16 = (int)uVar17 + 1;
  uVar17 = (ulonglong)uVar16;
  pTVar14 = (TBitArray<TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)
            ((pTVar14->AllocatorInstance).InlineData + 4);
  if ((int)(uVar15 >> 5) <= (int)uVar16) goto LAB_144d57b03;
  goto LAB_144d57af0;
}

// AllocatePhysicalAtlasPage @ 144d582c0

TIntPoint<int> __thiscall
FLumenSurfaceCacheAllocator::AllocatePhysicalAtlasPage(FLumenSurfaceCacheAllocator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TIntPoint<int> TVar5;
  TIntPoint<int>_u_0 in_RDX;
  
  iVar4 = TBitArray<TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>_>::
          FindAndSetFirstZeroBit(&this->PhysicalPageList,0);
  this->PhysicalPageFreeCount = this->PhysicalPageFreeCount + -1;
  if (iVar4 == -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LinearIndex != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                       ,0x179,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar2)();
      return (TIntPoint<int>)TVar5.field0_0x0;
    }
  }
  iVar1 = (this->PageAtlasSizeInPages).field0_0x0._s_0.X;
  *(int *)((longlong)in_RDX + 4) = iVar4 / iVar1;
  *(int *)in_RDX = iVar4 % iVar1;
  return (TIntPoint<int>)in_RDX;
}

// Free @ 144d7ae60

void __thiscall
FLumenSurfaceCacheAllocator::Free(FLumenSurfaceCacheAllocator *this,FLumenPageTableEntry *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  FPageBin *this_00;
  bool bVar8;
  
  uVar3 = (param_1->SubAllocationSize).field0_0x0._s_0.X;
  if (((int)uVar3 < 0) && ((param_1->SubAllocationSize).field0_0x0._s_0.Y < 0)) goto LAB_144d7af49;
  piVar1 = &(param_1->SubAllocationSize).field0_0x0._s_0.Y;
  iVar4 = 0x1f;
  bVar8 = *piVar1 != 0;
  if (bVar8) {
    for (; (uint)*piVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  this_00 = (FPageBin *)0x0;
  cVar7 = '\0';
  if (bVar8) {
    cVar7 = (char)iVar4;
  }
  iVar4 = 0x1f;
  if (uVar3 != 0) {
    for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  cVar6 = '\0';
  if (uVar3 != 0) {
    cVar6 = (char)iVar4;
  }
  bVar2 = (this->PageBinLookup).Elements[(byte)(cVar7 * '\b' + cVar6)];
  if (bVar2 == 0xff) {
LAB_144d7af0a:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("MatchingBin",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                       ,0x1ac,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if ((this->PageBins).ArrayNum <= (int)(uint)bVar2) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this_00 = (FPageBin *)((this->PageBins).AllocatorInstance.Data + (ulonglong)bVar2 * 0x4a0);
    if (this_00 == (FPageBin *)0x0) goto LAB_144d7af0a;
  }
  bVar8 = FPageBin::RemoveBinAllocation(this_00,param_1);
  if (!bVar8) {
    return;
  }
LAB_144d7af49:
  FreePhysicalAtlasPage(this,&param_1->PhysicalPageCoord);
  return;
}

// FreePhysicalAtlasPage @ 144d7af70

void __thiscall
FLumenSurfaceCacheAllocator::FreePhysicalAtlasPage
          (FLumenSurfaceCacheAllocator *this,TIntPoint<int> *param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = (this->PageAtlasSizeInPages).field0_0x0._s_0.X * (param_1->field0_0x0)._s_0.Y +
          (param_1->field0_0x0)._s_0.X;
  this->PhysicalPageFreeCount = this->PhysicalPageFreeCount + 1;
  if ((iVar5 < 0) || ((this->PhysicalPageList).NumBits <= iVar5)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicalPageList.IsValidIndex(LinearIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                       ,0x181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (-1 < iVar5) goto LAB_144d7afca;
  }
  else {
LAB_144d7afca:
    if (iVar5 < (this->PhysicalPageList).NumBits) goto LAB_144d7aff8;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index>=0 && Index<NumBits",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                     ,0x5be,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_144d7aff8:
  FVar2 = (this->PhysicalPageList).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    this = (FLumenSurfaceCacheAllocator *)FVar2;
  }
  puVar1 = (uint *)((longlong)this + (longlong)((int)(iVar5 + (iVar5 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)iVar5 & 0x1f));
  return;
}

// GetOrAddBin @ 144d7fcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPageBin * __thiscall
FLumenSurfaceCacheAllocator::GetOrAddBin(FLumenSurfaceCacheAllocator *this,TIntPoint<int> *param_1)

{
  int *piVar1;
  TArray<FLumenSurfaceCacheAllocator::FPageBin,TSizedDefaultAllocator<32>_> *pTVar2;
  byte bVar3;
  TIntPoint<int>_u_0 *pTVar4;
  code *pcVar5;
  int iVar6;
  FPageBin *pFVar7;
  ulonglong uVar8;
  char cVar9;
  uint uVar10;
  FPageBinAllocation *pFVar11;
  char cVar12;
  byte bVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStackY_528 [32];
  undefined8 local_4d8;
  TIntPoint<int>_u_0 local_4c0;
  undefined8 local_4b8;
  FPageBinAllocation local_4b0 [16];
  FPageBinAllocation *local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_528;
  piVar1 = &(param_1->field0_0x0)._s_0.Y;
  iVar6 = 0x1f;
  bVar15 = *piVar1 != 0;
  if (bVar15) {
    for (; (uint)*piVar1 >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  cVar12 = '\0';
  if (bVar15) {
    cVar12 = (char)iVar6;
  }
  pTVar2 = &this->PageBins;
  iVar6 = 0x1f;
  bVar15 = (param_1->field0_0x0)._s_0.X != 0;
  if (bVar15) {
    for (; (uint)(param_1->field0_0x0)._s_0.X >> iVar6 == 0; iVar6 = iVar6 + -1) {
    }
  }
  cVar9 = '\0';
  if (bVar15) {
    cVar9 = (char)iVar6;
  }
  bVar13 = cVar12 * '\b' + cVar9;
  bVar3 = (this->PageBinLookup).Elements[bVar13];
  uVar8 = (ulonglong)bVar3;
  if (bVar3 == 0xff) {
    (this->PageBinLookup).Elements[bVar13] = (uchar)(this->PageBins).ArrayNum;
    uVar14 = (param_1->field0_0x0)._s_0.Y;
    local_30 = (FPageBinAllocation *)0x0;
    if ((int)uVar14 < (param_1->field0_0x0)._s_0.X) {
      uVar14 = (param_1->field0_0x0)._s_0.X;
    }
    local_28 = 0;
    local_24 = 0x10;
    if ((0x80 < uVar14) &&
       (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<7664949716211204448>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                            ,0x160,"InElementSize.GetMax() <= Lumen::PhysicalPageSize"), bVar15)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FPageBin *)(*pcVar5)();
      return pFVar7;
    }
    local_4c0._s_0 = (param_1->field0_0x0)._s_0;
    pTVar4 = (TIntPoint<int>_u_0 *)(pTVar2->AllocatorInstance).Data;
    local_4d8 = CONCAT44(0x80 / local_4c0._s_0.Y,(int)(0x80 / (longlong)local_4c0._s_0.X));
    local_4b8 = local_4d8;
    if (((pTVar4 <= &local_4c0) &&
        (&local_4c0 < pTVar4 + (longlong)(this->PageBins).ArrayMax * 0x94)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FPageBin *)(*pcVar5)();
      return pFVar7;
    }
    iVar6 = (this->PageBins).ArrayNum;
    piVar1 = &(this->PageBins).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x4a0,8,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PageBins).ArrayNum = iVar6 + 1;
    FPageBin::FPageBin((FPageBin *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x4a0),
                       (FPageBin *)&local_4c0._s_0);
    pFVar11 = local_4b0;
    if (local_30 != (FPageBinAllocation *)0x0) {
      pFVar11 = local_30;
    }
    DestructItems<FLumenSurfaceCacheAllocator::FPageBinAllocation,int>(pFVar11,local_28);
    if (local_30 != (FPageBinAllocation *)0x0) {
      FMemory::Free(local_30);
    }
    if ((0x40 < (this->PageBins).ArrayNum) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("PageBins.Num() <= 64",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                            ,0x31a,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FPageBin *)(*pcVar5)();
      return pFVar7;
    }
    iVar6 = (this->PageBins).ArrayNum;
    uVar10 = iVar6 - 1;
    uVar14 = 0;
    if ((int)uVar10 < iVar6) {
      uVar14 = ~uVar10 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FPageBin *)(*pcVar5)();
      return pFVar7;
    }
    uVar8 = (ulonglong)((this->PageBins).ArrayNum + -1);
  }
  else if (((this->PageBins).ArrayNum <= (int)(uint)bVar3) &&
          (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
          , bVar15)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FPageBin *)(*pcVar5)();
    return pFVar7;
  }
  return (FPageBin *)((pTVar2->AllocatorInstance).Data + uVar8 * 0x4a0);
}

// GetStats @ 144d86750

void __thiscall
FLumenSurfaceCacheAllocator::GetStats(FLumenSurfaceCacheAllocator *this,FStats *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FLumenSurfaceCacheAllocator *local_res8;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  
  param_1->NumFreePages = this->PhysicalPageFreeCount;
  local_res18 = (this->PageBins).ArrayNum;
  uVar4 = (ulonglong)(int)local_res18;
  pFVar9 = (this->PageBins).AllocatorInstance.Data;
  local_res20 = pFVar9 + uVar4 * 0x4a0;
  pFVar7 = pFVar9 + 0x498;
  local_res8 = this;
  while( true ) {
    pFVar5 = local_res20;
    if ((local_res8->PageBins).ArrayNum != (int)uVar4) {
      `TCheckedPointerIterator<FLumenSurfaceCacheAllocator::FPageBin_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar5) break;
    pFVar5 = *(FScriptContainerElement **)(pFVar7 + -8);
    iVar8 = 0;
    iVar6 = *(int *)pFVar7;
    if (pFVar5 == (FScriptContainerElement *)0x0) {
      pFVar5 = pFVar7 + -0x488;
    }
    pFVar2 = pFVar5 + (longlong)iVar6 * 0x48;
    while( true ) {
      if (*(int *)pFVar7 != iVar6) {
        `TCheckedPointerIterator<FLumenSurfaceCacheAllocator::FPageBinAllocation_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar5 == pFVar2) break;
      iVar8 = iVar8 + *(int *)(pFVar5 + 0x40);
      pFVar5 = pFVar5 + 0x48;
    }
    iVar6 = *(int *)pFVar7;
    uVar3 = *(int *)(pFVar7 + -0x490) * *(int *)(pFVar7 + -0x48c);
    param_1->BinNumPages = param_1->BinNumPages + iVar6;
    iVar6 = uVar3 * iVar6 - iVar8;
    param_1->BinNumWastedPages =
         param_1->BinNumWastedPages + (*(int *)pFVar7 - ((uVar3 - 1) + iVar6) / uVar3);
    param_1->BinPageFreeTexels =
         param_1->BinPageFreeTexels + iVar8 * *(int *)(pFVar7 + -0x494) * *(int *)pFVar9;
    if (iVar6 != 0) {
      iVar8 = (param_1->Bins).ArrayNum;
      piVar1 = &(param_1->Bins).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&(param_1->Bins).AllocatorInstance,piVar1);
      }
      pFVar5 = (param_1->Bins).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
      (param_1->Bins).ArrayNum = iVar8 + 1;
      DefaultConstructItems<FLumenSurfaceCacheAllocator::FBinStats,int>(pFVar5,1);
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar9;
      *(int *)(pFVar5 + 8) = iVar6;
      *(int *)(pFVar5 + 0xc) = *(int *)pFVar7;
    }
    pFVar9 = pFVar9 + 0x4a0;
    pFVar7 = pFVar7 + 0x4a0;
    uVar4 = (ulonglong)local_res18;
  }
  AlgoImpl::
  IntroSortInternal<FLumenSurfaceCacheAllocator::FBinStats,int,FIdentityFunctor,TDereferenceWrapper<FLumenSurfaceCacheAllocator::FBinStats,_FLumenSurfaceCacheAllocator::GetStats_::__l2::FSortBySize>_>
            ((FBinStats *)(param_1->Bins).AllocatorInstance.Data,(param_1->Bins).ArrayNum,
             local_res8._0_1_,(FSortBySize *)&local_res8);
  return;
}

// Init @ 144d8b560

void __thiscall
FLumenSurfaceCacheAllocator::Init(FLumenSurfaceCacheAllocator *this,TIntPoint<int> *param_1)

{
  uint *puVar1;
  ForElementType<unsigned_int> FVar2;
  int iVar3;
  ForElementType<unsigned_int> FVar4;
  uint uVar5;
  uint uVar6;
  
  (this->PageAtlasSizeInPages).field0_0x0 = param_1->field0_0x0;
  iVar3 = (param_1->field0_0x0)._s_0.Y * (param_1->field0_0x0)._s_0.X;
  this->PhysicalPageFreeCount = iVar3;
  (this->PhysicalPageList).NumBits = iVar3;
  uVar6 = iVar3 + 0x1fU >> 5;
  if (iVar3 + 0x1fU >> 5 != 0) {
    if ((this->PhysicalPageList).MaxBits + 0x1fU >> 5 < uVar6) {
      TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this,0,uVar6,4);
      (this->PhysicalPageList).MaxBits = uVar6 << 5;
    }
    FVar2 = (this->PhysicalPageList).AllocatorInstance.SecondaryData;
    FVar4 = (ForElementType<unsigned_int>)this;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      FVar4 = FVar2;
    }
    memset((void *)FVar4,0,(ulonglong)uVar6 << 2);
    iVar3 = (this->PhysicalPageList).NumBits;
    uVar5 = iVar3 >> 0x1f & 0x1f;
    uVar6 = iVar3 + uVar5;
    iVar3 = (uVar6 & 0x1f) - uVar5;
    if (iVar3 != 0) {
      FVar2 = (this->PhysicalPageList).AllocatorInstance.SecondaryData;
      FVar4 = (ForElementType<unsigned_int>)this;
      if (FVar2 != (ForElementType<unsigned_int>)0x0) {
        FVar4 = FVar2;
      }
      puVar1 = (uint *)((longlong)FVar4 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar3 & 0x1f);
    }
  }
  if (this->bInitPageBinLookup != false) {
    (this->PageBinLookup).Elements[0] = 0xff;
    (this->PageBinLookup).Elements[1] = 0xff;
    (this->PageBinLookup).Elements[2] = 0xff;
    (this->PageBinLookup).Elements[3] = 0xff;
    (this->PageBinLookup).Elements[4] = 0xff;
    (this->PageBinLookup).Elements[5] = 0xff;
    (this->PageBinLookup).Elements[6] = 0xff;
    (this->PageBinLookup).Elements[7] = 0xff;
    (this->PageBinLookup).Elements[8] = 0xff;
    (this->PageBinLookup).Elements[9] = 0xff;
    (this->PageBinLookup).Elements[10] = 0xff;
    (this->PageBinLookup).Elements[0xb] = 0xff;
    (this->PageBinLookup).Elements[0xc] = 0xff;
    (this->PageBinLookup).Elements[0xd] = 0xff;
    (this->PageBinLookup).Elements[0xe] = 0xff;
    (this->PageBinLookup).Elements[0xf] = 0xff;
    (this->PageBinLookup).Elements[0x10] = 0xff;
    (this->PageBinLookup).Elements[0x11] = 0xff;
    (this->PageBinLookup).Elements[0x12] = 0xff;
    (this->PageBinLookup).Elements[0x13] = 0xff;
    (this->PageBinLookup).Elements[0x14] = 0xff;
    (this->PageBinLookup).Elements[0x15] = 0xff;
    (this->PageBinLookup).Elements[0x16] = 0xff;
    (this->PageBinLookup).Elements[0x17] = 0xff;
    (this->PageBinLookup).Elements[0x18] = 0xff;
    (this->PageBinLookup).Elements[0x19] = 0xff;
    (this->PageBinLookup).Elements[0x1a] = 0xff;
    (this->PageBinLookup).Elements[0x1b] = 0xff;
    (this->PageBinLookup).Elements[0x1c] = 0xff;
    (this->PageBinLookup).Elements[0x1d] = 0xff;
    (this->PageBinLookup).Elements[0x1e] = 0xff;
    (this->PageBinLookup).Elements[0x1f] = 0xff;
    (this->PageBinLookup).Elements[0x20] = 0xff;
    (this->PageBinLookup).Elements[0x21] = 0xff;
    (this->PageBinLookup).Elements[0x22] = 0xff;
    (this->PageBinLookup).Elements[0x23] = 0xff;
    (this->PageBinLookup).Elements[0x24] = 0xff;
    (this->PageBinLookup).Elements[0x25] = 0xff;
    (this->PageBinLookup).Elements[0x26] = 0xff;
    (this->PageBinLookup).Elements[0x27] = 0xff;
    (this->PageBinLookup).Elements[0x28] = 0xff;
    (this->PageBinLookup).Elements[0x29] = 0xff;
    (this->PageBinLookup).Elements[0x2a] = 0xff;
    (this->PageBinLookup).Elements[0x2b] = 0xff;
    (this->PageBinLookup).Elements[0x2c] = 0xff;
    (this->PageBinLookup).Elements[0x2d] = 0xff;
    (this->PageBinLookup).Elements[0x2e] = 0xff;
    (this->PageBinLookup).Elements[0x2f] = 0xff;
    (this->PageBinLookup).Elements[0x30] = 0xff;
    (this->PageBinLookup).Elements[0x31] = 0xff;
    (this->PageBinLookup).Elements[0x32] = 0xff;
    (this->PageBinLookup).Elements[0x33] = 0xff;
    (this->PageBinLookup).Elements[0x34] = 0xff;
    (this->PageBinLookup).Elements[0x35] = 0xff;
    (this->PageBinLookup).Elements[0x36] = 0xff;
    (this->PageBinLookup).Elements[0x37] = 0xff;
    (this->PageBinLookup).Elements[0x38] = 0xff;
    (this->PageBinLookup).Elements[0x39] = 0xff;
    (this->PageBinLookup).Elements[0x3a] = 0xff;
    (this->PageBinLookup).Elements[0x3b] = 0xff;
    (this->PageBinLookup).Elements[0x3c] = 0xff;
    (this->PageBinLookup).Elements[0x3d] = 0xff;
    (this->PageBinLookup).Elements[0x3e] = 0xff;
    (this->PageBinLookup).Elements[0x3f] = 0xff;
    this->bInitPageBinLookup = false;
  }
  return;
}

// IsSpaceAvailable @ 144d8c550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FLumenSurfaceCacheAllocator::IsSpaceAvailable
          (FLumenSurfaceCacheAllocator *this,FLumenCard *param_1,int param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  undefined1 local_58 [4];
  int local_54;
  int local_50;
  TIntPoint<int>_u_0 local_48;
  int local_40;
  int local_3c;
  char local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  FLumenCard::GetMipMapDesc(param_1,param_2,(FLumenMipMapDesc *)&local_48._s_0);
  if (param_3) {
    local_3c = 1;
  }
  else {
    local_3c = local_3c * local_40;
  }
  if (this->PhysicalPageFreeCount < local_3c) {
    if (local_2c != '\0') {
      local_54 = 0x1f;
      if (local_48._s_0.Y != 0U) {
        for (; (uint)local_48._s_0.Y >> local_54 == 0; local_54 = local_54 + -1) {
        }
      }
      cVar6 = '\0';
      if (local_48._s_0.Y != 0U) {
        cVar6 = (char)local_54;
      }
      local_50 = 0x1f;
      if (local_48._s_0.X != 0U) {
        for (; (uint)local_48._s_0.X >> local_50 == 0; local_50 = local_50 + -1) {
        }
      }
      iVar7 = 0;
      if (local_48._s_0.X != 0U) {
        iVar7 = local_50;
      }
      bVar2 = (this->PageBinLookup).Elements[(byte)(cVar6 * '\b' + (char)iVar7)];
      if (bVar2 != 0xff) {
        iVar7 = (this->PageBins).ArrayNum;
        if ((iVar7 <= (int)(uint)bVar2) &&
           (local_68 = (ulonglong)bVar2, local_60 = (longlong)iVar7,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar8 = (this->PageBins).AllocatorInstance.Data + (ulonglong)bVar2 * 0x4a0;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          iVar7 = *(int *)(pFVar8 + 0x498);
          pFVar9 = *(FScriptContainerElement **)(pFVar8 + 0x490);
          if (*(FScriptContainerElement **)(pFVar8 + 0x490) == (FScriptContainerElement *)0x0) {
            pFVar9 = pFVar8 + 0x10;
          }
          pFVar1 = pFVar9 + (longlong)iVar7 * 0x48;
          while( true ) {
            if (*(int *)(pFVar8 + 0x498) != iVar7) {
              `TCheckedPointerIterator<FLumenSurfaceCacheAllocator::FPageBinAllocation_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_58);
            }
            if (pFVar9 == pFVar1) break;
            if (0 < *(int *)(pFVar9 + 0x40)) {
              return true;
            }
            pFVar9 = pFVar9 + 0x48;
          }
          return false;
        }
      }
    }
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}

