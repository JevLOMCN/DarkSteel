// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Finish @ 145060f00

void __thiscall FNaniteVisibilityQuery::Finish(FNaniteVisibilityQuery *this)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  ForElementType<FSetElementId> *_Src_00;
  int *piVar1;
  FNaniteVisibilityResults *this_00;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
  *pTVar2;
  uint *puVar3;
  undefined1 uVar4;
  void *pvVar5;
  FSetElementId *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ForElementType<FSetElementId> *pFVar12;
  ForElementType<unsigned_int> FVar13;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  uint uVar16;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
  *pTVar17;
  longlong lVar18;
  
  if ((this->bFinished != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFinished",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteVisibility.cpp"
                         ,0x4e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"EndPerformNaniteVisibility");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FNaniteVisibilityQuery::Finish(void)___ptr64'::__l2::
                __CpuProfilerEventSpecId79,"EndPerformNaniteVisibility",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteVisibility.cpp"
               ,0x4f);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FNaniteVisibilityQuery::Finish(void)___ptr64'::__l2::
               __CpuProfilerEventSpecId79);
  }
  (this->Results).BinIndexTranslator.RegularBinCount = (this->BinIndexTranslator).RegularBinCount;
  bVar9 = this->bCullRasterBins;
  (this->Results).bRasterTestValid = bVar9;
  (this->Results).bShadingTestValid = this->bCullShadingBins;
  if (bVar9 != false) {
    iVar10 = (this->RasterBinVisibility).ArrayNum;
    this_00 = &this->Results;
    (this->Results).RasterBinVisibility.NumBits = iVar10;
    uVar15 = iVar10 + 0x1f;
    uVar16 = uVar15 >> 5;
    if (uVar15 >> 5 != 0) {
      if ((this->Results).RasterBinVisibility.MaxBits + 0x1fU >> 5 < uVar16) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation((ForElementType<unsigned_int> *)this_00,0,uVar16,4);
        (this->Results).RasterBinVisibility.MaxBits = uVar16 << 5;
      }
      FVar13 = (this->Results).RasterBinVisibility.AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<unsigned_int>)0x0) {
        FVar13 = (ForElementType<unsigned_int>)this_00;
      }
      memset((void *)FVar13,0,(ulonglong)uVar16 << 2);
      iVar10 = (this->Results).RasterBinVisibility.NumBits;
      uVar16 = iVar10 >> 0x1f & 0x1f;
      uVar15 = iVar10 + uVar16;
      iVar10 = (uVar15 & 0x1f) - uVar16;
      if (iVar10 != 0) {
        FVar13 = (this->Results).RasterBinVisibility.AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<unsigned_int>)0x0) {
          FVar13 = (ForElementType<unsigned_int>)this_00;
        }
        puVar3 = (uint *)((longlong)FVar13 + (longlong)((int)uVar15 >> 5) * 4);
        *puVar3 = *puVar3 & 0xffffffffU >> (-(char)iVar10 & 0x1fU);
      }
    }
    uVar15 = 0;
    if (0 < (this->RasterBinVisibility).ArrayNum) {
      lVar18 = 0;
      uVar16 = 1;
      do {
        uVar11 = 0;
        if ((int)uVar15 < (this->RasterBinVisibility).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((this->RasterBinVisibility).AllocatorInstance.Data[lVar18] != (TAtomic<bool>)0x0) {
          if ((((int)uVar15 < 0) || ((this->Results).RasterBinVisibility.NumBits <= (int)uVar15)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar13 = (this->Results).RasterBinVisibility.AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<unsigned_int>)this_00;
          if (FVar13 != (ForElementType<unsigned_int>)0x0) {
            FVar14 = FVar13;
          }
          uVar11 = uVar15;
          if ((int)uVar15 < 0) {
            uVar11 = uVar15 + 0x1f;
          }
          puVar3 = (uint *)((longlong)FVar14 + (longlong)((int)uVar11 >> 5) * 4);
          *puVar3 = *puVar3 | uVar16;
          puVar3 = &(this->Results).VisibleRasterBins;
          *puVar3 = *puVar3 + 1;
        }
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
        lVar18 = lVar18 + 1;
      } while ((int)uVar15 < (this->RasterBinVisibility).ArrayNum);
    }
  }
  if ((this->Results).bShadingTestValid != false) {
    iVar10 = (this->ShadingBinVisibility).ArrayNum;
    this_01 = &(this->Results).ShadingBinVisibility;
    (this->Results).ShadingBinVisibility.NumBits = iVar10;
    uVar15 = iVar10 + 0x1f;
    uVar16 = uVar15 >> 5;
    if (uVar15 >> 5 != 0) {
      if ((this->Results).ShadingBinVisibility.MaxBits + 0x1fU >> 5 < uVar16) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&this_01->AllocatorInstance,0,uVar16,4);
        (this->Results).ShadingBinVisibility.MaxBits = uVar16 << 5;
      }
      FVar13 = (this->Results).ShadingBinVisibility.AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<unsigned_int>)0x0) {
        FVar13 = (ForElementType<unsigned_int>)this_01;
      }
      memset((void *)FVar13,0,(ulonglong)uVar16 << 2);
      iVar10 = (this->Results).ShadingBinVisibility.NumBits;
      uVar16 = iVar10 >> 0x1f & 0x1f;
      uVar15 = iVar10 + uVar16;
      iVar10 = (uVar15 & 0x1f) - uVar16;
      if (iVar10 != 0) {
        FVar13 = (this->Results).ShadingBinVisibility.AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<unsigned_int>)0x0) {
          FVar13 = (ForElementType<unsigned_int>)this_01;
        }
        puVar3 = (uint *)((longlong)FVar13 + (longlong)((int)uVar15 >> 5) * 4);
        *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar10 & 0x1f);
      }
    }
    uVar15 = 0;
    if (0 < (this->ShadingBinVisibility).ArrayNum) {
      lVar18 = 0;
      uVar16 = 1;
      do {
        uVar11 = 0;
        if ((int)uVar15 < (this->ShadingBinVisibility).ArrayNum) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((this->ShadingBinVisibility).AllocatorInstance.Data[lVar18] != (TAtomic<bool>)0x0) {
          if ((((int)uVar15 < 0) || ((this->Results).ShadingBinVisibility.NumBits <= (int)uVar15))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FVar13 = (this->Results).ShadingBinVisibility.AllocatorInstance.SecondaryData;
          FVar14 = (ForElementType<unsigned_int>)this_01;
          if (FVar13 != (ForElementType<unsigned_int>)0x0) {
            FVar14 = FVar13;
          }
          uVar11 = uVar15;
          if ((int)uVar15 < 0) {
            uVar11 = uVar15 + 0x1f;
          }
          puVar3 = (uint *)((longlong)FVar14 + (longlong)((int)uVar11 >> 5) * 4);
          *puVar3 = *puVar3 | uVar16;
          puVar3 = &(this->Results).VisibleShadingBins;
          *puVar3 = *puVar3 + 1;
        }
        uVar15 = uVar15 + 1;
        uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
        lVar18 = lVar18 + 1;
      } while ((int)uVar15 < (this->ShadingBinVisibility).ArrayNum);
    }
    (this->Results).TotalShadingBins = this->ShadingBinCount;
  }
  pTVar17 = &this->VisibleCustomDepthPrimitives;
  pTVar2 = &(this->Results).VisibleCustomDepthPrimitives;
  (this->Results).TotalRasterBins = this->RasterBinCount;
  if (pTVar2 != pTVar17) {
    if (*(void **)&pTVar2->Elements != (void *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(*(void **)&pTVar2->Elements);
    }
    _Src = &(this->VisibleCustomDepthPrimitives).Elements.field_0x10;
    *(undefined8 *)&pTVar2->Elements = *(undefined8 *)&pTVar17->Elements;
    _Dst = &(this->Results).VisibleCustomDepthPrimitives.Elements.field_0x10;
    *(undefined8 *)&pTVar17->Elements = 0;
    *(undefined4 *)&(this->Results).VisibleCustomDepthPrimitives.Elements.field_0x8 =
         *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x8;
    *(undefined4 *)&(this->Results).VisibleCustomDepthPrimitives.Elements.field_0xc =
         *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0xc;
    *(undefined8 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar5 = *(void **)&(this->Results).VisibleCustomDepthPrimitives.Elements.field_0x20;
      if (pvVar5 != (void *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pvVar5);
      }
      *(undefined8 *)&(this->Results).VisibleCustomDepthPrimitives.Elements.field_0x20 =
           *(undefined8 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x20;
      *(undefined8 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->Results).VisibleCustomDepthPrimitives.Elements.field_0x28 =
           *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x28;
      *(undefined4 *)&(this->Results).VisibleCustomDepthPrimitives.Elements.field_0x2c =
           *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x2c;
      *(undefined8 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x28 = 0;
    }
    _Src_00 = &(this->VisibleCustomDepthPrimitives).Hash.SecondaryData;
    *(undefined4 *)&(this->Results).VisibleCustomDepthPrimitives.Elements.field_0x30 =
         *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x30;
    *(undefined4 *)&(this->Results).VisibleCustomDepthPrimitives.Elements.field_0x34 =
         *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x34;
    *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x34 = 0;
    pFVar12 = (ForElementType<FSetElementId> *)
              (this->VisibleCustomDepthPrimitives).Hash.SecondaryData.SecondaryData.Data;
    if (pFVar12 == (ForElementType<FSetElementId> *)0x0) {
      pFVar12 = _Src_00;
    }
    if (pFVar12 == (ForElementType<FSetElementId> *)0x0) {
      *(undefined4 *)(this->Results).VisibleCustomDepthPrimitives.Hash.InlineData =
           *(undefined4 *)(this->VisibleCustomDepthPrimitives).Hash.InlineData;
    }
    if ((this->VisibleCustomDepthPrimitives).Hash.SecondaryData.SecondaryData.Data ==
        (FSetElementId *)0x0) {
      memmove(&(this->Results).VisibleCustomDepthPrimitives.Hash.SecondaryData,_Src_00,0x10);
    }
    pFVar6 = (this->Results).VisibleCustomDepthPrimitives.Hash.SecondaryData.SecondaryData.Data;
    if (pFVar6 != (FSetElementId *)0x0) {
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar6);
    }
    (this->Results).VisibleCustomDepthPrimitives.Hash.SecondaryData.SecondaryData.Data =
         (this->VisibleCustomDepthPrimitives).Hash.SecondaryData.SecondaryData.Data;
    (this->VisibleCustomDepthPrimitives).Hash.SecondaryData.SecondaryData.Data =
         (FSetElementId *)0x0;
    (this->Results).VisibleCustomDepthPrimitives.HashSize =
         (this->VisibleCustomDepthPrimitives).HashSize;
    (this->VisibleCustomDepthPrimitives).HashSize = 0;
  }
  this->bFinished = '\x01';
  DestructItems<FConvexVolume,int>((this->Views).AllocatorInstance.Data,(this->Views).ArrayNum);
  (this->Views).ArrayNum = 0;
  if ((this->Views).ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FConvexVolume>_>
              (0x200,0x10,0,&(this->Views).AllocatorInstance,0,&(this->Views).ArrayMax);
  }
  (this->RasterBinVisibility).ArrayNum = 0;
  if ((this->RasterBinVisibility).ArrayMax != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_>
              (1,1,0,&(this->RasterBinVisibility).AllocatorInstance,0,
               &(this->RasterBinVisibility).ArrayMax);
  }
  pTVar17 = &this->VisibleCustomDepthPrimitives;
  piVar1 = &(this->ShadingBinVisibility).ArrayMax;
  (this->ShadingBinVisibility).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TAtomic<bool>_>_>
              (1,1,0,&(this->ShadingBinVisibility).AllocatorInstance,0,piVar1);
  }
  bVar9 = 1 < (this->VisibleCustomDepthPrimitives).HashSize;
  if (!bVar9) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
    ::UnhashElements(pTVar17);
  }
  iVar10 = *(int *)&(this->VisibleCustomDepthPrimitives).Elements.field_0xc;
  *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x8 = 0;
  if (iVar10 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
              (0xc,4,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)
                       pTVar17,0,(int *)&(this->VisibleCustomDepthPrimitives).Elements.field_0xc);
  }
  *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x30 = 0xffffffff;
  iVar10 = *(int *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x2c;
  *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x2c = 0x80;
    TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::Realloc((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
               *)&(this->VisibleCustomDepthPrimitives).Elements.field_0x10,0);
  }
  if (bVar9) {
    (this->VisibleCustomDepthPrimitives).HashSize = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
    ::Rehash(pTVar17);
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Init @ 14506ab70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNaniteVisibilityQuery::Init
          (FNaniteVisibilityQuery *this,FNaniteRasterPipelines *param_1,
          FNaniteShadingPipelines *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&param_1->PipelineBins,true);
  iVar4 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&param_1->PerPixelEvalPipelineBins,true);
  this->RasterBinCount = iVar4 + iVar3 + 2;
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&param_2->PipelineBins,true);
  this->ShadingBinCount = iVar3 + 1;
  iVar3 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&param_1->PipelineBins,true);
  uVar7 = this->RasterBinCount;
  (this->BinIndexTranslator).RegularBinCount = iVar3 + 1;
  TArray<TAtomic<bool>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum
            (&this->RasterBinVisibility,uVar7,Default);
  uVar7 = 0;
  if (this->RasterBinCount != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->RasterBinVisibility).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar6 = (longlong)(int)uVar7;
      uVar7 = uVar7 + 1;
      LOCK();
      (this->RasterBinVisibility).AllocatorInstance.Data[lVar6] = (TAtomic<bool>)0x0;
      UNLOCK();
    } while (uVar7 < this->RasterBinCount);
  }
  TArray<TAtomic<bool>,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>::SetNum
            (&this->ShadingBinVisibility,this->ShadingBinCount,Default);
  uVar7 = 0;
  if (this->ShadingBinCount != 0) {
    do {
      uVar5 = 0;
      if ((int)uVar7 < (this->ShadingBinVisibility).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar6 = (longlong)(int)uVar7;
      uVar7 = uVar7 + 1;
      LOCK();
      (this->ShadingBinVisibility).AllocatorInstance.Data[lVar6] = (TAtomic<bool>)0x0;
      UNLOCK();
    } while (uVar7 < this->ShadingBinCount);
  }
  return;
}

