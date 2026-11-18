// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FPageBin @ 144d41c70

FPageBin * __thiscall
FLumenSurfaceCacheAllocator::FPageBin::FPageBin(FPageBin *this,FPageBin *param_1)

{
  ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> FVar1;
  
  (this->ElementSize).field0_0x0 = (param_1->ElementSize).field0_0x0;
  (this->PageSizeInElements).field0_0x0 = (param_1->PageSizeInElements).field0_0x0;
  (this->BinAllocations).AllocatorInstance.SecondaryData =
       (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0;
  if ((param_1->BinAllocations).AllocatorInstance.SecondaryData ==
      (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0) {
    memmove(&this->BinAllocations,&param_1->BinAllocations,0x480);
  }
  FVar1 = (this->BinAllocations).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->BinAllocations).AllocatorInstance.SecondaryData =
       (param_1->BinAllocations).AllocatorInstance.SecondaryData;
  (param_1->BinAllocations).AllocatorInstance.SecondaryData =
       (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0;
  (this->BinAllocations).ArrayNum = (param_1->BinAllocations).ArrayNum;
  (this->BinAllocations).ArrayMax = (param_1->BinAllocations).ArrayMax;
  (param_1->BinAllocations).ArrayNum = 0;
  (param_1->BinAllocations).ArrayMax = 0x10;
  return this;
}

// FPageBin @ 144d41d30

FPageBin * __thiscall
FLumenSurfaceCacheAllocator::FPageBin::FPageBin(FPageBin *this,TIntPoint<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FPageBin *pFVar3;
  uint uVar4;
  TIntPoint<int>_u_0 local_res8;
  
  (this->ElementSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->PageSizeInElements).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->BinAllocations).AllocatorInstance.SecondaryData =
       (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0;
  (this->BinAllocations).ArrayNum = 0;
  (this->BinAllocations).ArrayMax = 0x10;
  uVar4 = (param_1->field0_0x0)._s_0.Y;
  if ((int)uVar4 < (param_1->field0_0x0)._s_0.X) {
    uVar4 = (param_1->field0_0x0)._s_0.X;
  }
  if (0x80 < uVar4) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7664949716211204448>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenScene.cpp"
                       ,0x160,"InElementSize.GetMax() <= Lumen::PhysicalPageSize");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPageBin *)(*pcVar1)();
      return pFVar3;
    }
  }
  (this->ElementSize).field0_0x0 = param_1->field0_0x0;
  local_res8._s_0.Y = 0x80 / (param_1->field0_0x0)._s_0.Y;
  local_res8._s_0.X = (int)(0x80 / (longlong)(param_1->field0_0x0)._s_0.X);
  (this->PageSizeInElements).field0_0x0 = local_res8;
  return this;
}

// RemoveBinAllocation @ 144d93bc0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
FLumenSurfaceCacheAllocator::FPageBin::RemoveBinAllocation
          (FPageBin *this,FLumenPageTableEntry *param_1)

{
  TArray<FLumenSurfaceCacheAllocator::FPageBinAllocation,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
  *this_00;
  int *piVar1;
  int iVar2;
  ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> FVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation> FVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iStackX_1c;
  int iStack_44;
  
  uVar11 = (this->BinAllocations).ArrayNum;
  uVar10 = 0;
  if (uVar11 != 0) {
    this_00 = &this->BinAllocations;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->BinAllocations).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      FVar3 = (this->BinAllocations).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)this_00;
      if (FVar3 != (ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>)0x0) {
        FVar9 = FVar3;
      }
      piVar1 = (int *)((longlong)FVar9 + (longlong)(int)uVar10 * 0x48);
      if ((*piVar1 == (param_1->PhysicalPageCoord).field0_0x0._s_0.X) &&
         (piVar1[1] == (param_1->PhysicalPageCoord).field0_0x0._s_0.Y)) {
        uVar4 = *(undefined8 *)&(param_1->PhysicalAtlasRect).field0_0x0;
        iStackX_1c = (int)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
        iStack_44 = (int)((ulonglong)uVar4 >> 0x20);
        iVar13 = (this->ElementSize).field0_0x0._s_0.X;
        iVar2 = (this->ElementSize).field0_0x0._s_0.Y;
        piVar1[0x10] = piVar1[0x10] + 1;
        iVar13 = ((iStack_44 + iStackX_1c * -0x80) / iVar2) * piVar1[2] +
                 ((int)uVar4 + (int)*(undefined8 *)piVar1 * -0x80) / iVar13;
        if (((iVar13 < 0) || (piVar1[0xe] <= iVar13)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        piVar12 = *(int **)(piVar1 + 0xc);
        if (*(int **)(piVar1 + 0xc) == (int *)0x0) {
          piVar12 = piVar1 + 4;
        }
        piVar12[(int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5] =
             piVar12[(int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5] & ~(1 << ((byte)iVar13 & 0x1f));
        if (piVar1[0x10] != piVar1[3] * piVar1[2]) {
          return false;
        }
        uVar11 = 0;
        if ((int)uVar10 < (this->BinAllocations).ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        TArray<FLumenSurfaceCacheAllocator::FPageBinAllocation,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
        ::RemoveAtSwapImpl(this_00,uVar10);
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FLumenSurfaceCacheAllocator::FPageBinAllocation>_>
                  (0x48,8,&this_00->AllocatorInstance,(this->BinAllocations).ArrayNum,
                   &(this->BinAllocations).ArrayMax);
        return true;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar11);
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                     ,0x2c8,L"");
  if (!bVar6) {
    return false;
  }
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return (bool)uVar7;
}

