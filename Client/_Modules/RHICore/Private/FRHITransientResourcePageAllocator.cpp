// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHICore
// Functions: 8

// operator() @ 1446d06f0

void __thiscall
`FRHITransientResourcePageAllocator::Flush'::__l5::<lambda_1>::operator()
          (void *this,FRHITransientPagePool *param_1,EMemoryRangeFlags param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  TPairInitializer<FRHITransientPagePool_*_&,int_&&> local_res8;
  undefined4 local_res18 [2];
  int **local_28;
  int **ppiStack_20;
  EMemoryRangeFlags local_18;
  undefined4 uStack_14;
  
  local_res18[0] = *(undefined4 *)(**(longlong **)((longlong)this + 8) + 8);
  local_28 = &local_res8.Value;
  ppiStack_20 = (int **)local_res18;
  local_res8.Value = (int *)param_1;
  TSet<TTuple<FRHITransientPagePool_*,int>,TDefaultMapHashableKeyFuncs<FRHITransientPagePool_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRHITransientPagePool_*_&,int_&&>_>
            (*(TSet<TTuple<FRHITransientPagePool_*,int>,TDefaultMapHashableKeyFuncs<FRHITransientPagePool_*,int,0>,FDefaultSetAllocator>
               **)this,&local_res8,(bool *)&local_28);
  local_28 = (int **)(ulonglong)
                     (((FRHITransientPageSpanAllocator *)((longlong)local_res8.Value + 0x10))->
                      PageSize *
                     ((FRHITransientPageSpanAllocator *)((longlong)local_res8.Value + 0x10))->
                     MaxPageCount);
  pFVar3 = (ForAnyElementType *)**(undefined8 **)((longlong)this + 8);
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  iVar5 = *(int *)&pFVar3[1].Data;
  ppiStack_20 = local_28;
  local_18 = param_2;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar5 + 1;
  pFVar4 = pFVar3->Data;
  pFVar2 = pFVar4 + (longlong)iVar5 * 0x18;
  *(int ***)pFVar2 = local_28;
  *(int ***)(pFVar2 + 8) = ppiStack_20;
  *(ulonglong *)(pFVar4 + (longlong)iVar5 * 0x18 + 0x10) = CONCAT44(uStack_14,local_18);
  return;
}

// AllocateMemoryInternal @ 1446d2f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientResourcePageAllocator::AllocateMemoryInternal
          (FRHITransientResourcePageAllocator *this,FRHITransientResource *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3,bool param_4,float param_5)

{
  TArray<FRHITransientPagePool_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FRHITransientPagePool *this_00;
  FScriptContainerElement *pFVar4;
  undefined1 auStack_178 [32];
  undefined1 local_158 [8];
  FAllocationContext local_150;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_178;
  FRHITransientPagePool::FAllocationContext::FAllocationContext
            (&local_150,param_1,param_3,this->PageSize);
  if ((param_4) && (this->FastPagePool != (FRHITransientPagePool *)0x0)) {
    if (0.0 < param_5) {
      local_150.MaxAllocationPage =
           -((int)ROUND(__real_bf000000 - (param_5 + param_5) * (float)local_150.PagesRemaining) >>
            1);
    }
    FRHITransientPagePool::Allocate(this->FastPagePool,&local_150);
    local_150.MaxAllocationPage = 0;
  }
  if (local_150.PagesRemaining != 0) {
    pTVar1 = &this->PagePools;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    iVar3 = (this->PagePools).ArrayNum;
    pFVar2 = pFVar4 + (longlong)iVar3 * 8;
    while( true ) {
      if ((this->PagePools).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FRHITransientPagePool_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_158);
      }
      if (pFVar4 == pFVar2) goto joined_r0x0001446d306f;
      FRHITransientPagePool::Allocate(*(FRHITransientPagePool **)pFVar4,&local_150);
      if (local_150.PagesRemaining == 0) break;
      pFVar4 = pFVar4 + 8;
    }
  }
LAB_1446d30dd:
  this->PageMapCount = this->PageMapCount + local_150.PagesMapped;
  this->PageAllocateCount = this->PageAllocateCount + local_150.PagesAllocated;
  this->PageSpanCount = this->PageSpanCount + local_150.PageSpansAllocated;
  if (local_150.AllocationsBefore.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHITransientPagePoolAllocation>)0x0) {
    FMemory::Free((void *)local_150.AllocationsBefore.AllocatorInstance.SecondaryData);
  }
  return;
joined_r0x0001446d306f:
  while (local_150.PagesRemaining != 0) {
    this_00 = FRHITransientPagePoolCache::Acquire(this->PagePoolCache);
    FRHITransientPagePool::Allocate(this_00,&local_150);
    iVar3 = (this->PagePools).ArrayNum;
    if (iVar3 == (this->PagePools).ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,&(this->PagePools).ArrayMax);
    }
    (this->PagePools).ArrayNum = iVar3 + 1;
    *(FRHITransientPagePool **)((pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 8) = this_00;
  }
  goto LAB_1446d30dd;
}

// CreateBuffer @ 1446d6050

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientBuffer * __thiscall
FRHITransientResourcePageAllocator::CreateBuffer
          (FRHITransientResourcePageAllocator *this,FRHIBufferDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3)

{
  ulong64 *puVar1;
  FRHITransientResourceStats *pFVar2;
  uint *puVar3;
  ERHIPipeline EVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  ulong64 uVar8;
  FRHITransientBuffer *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  FRHITransientBuffer *local_res8;
  FRHITransientBuffer *local_res10;
  wchar_t *local_res18;
  uint local_58;
  uint local_54;
  EBufferUsageFlags local_50;
  uint local_4c;
  <lambda_1> local_48;
  
  local_58 = param_1->Size;
  local_54 = param_1->Stride;
  local_50 = param_1->Usage;
  local_4c = (param_1->GPUMask).GPUMask;
  local_res18 = param_2;
  uVar8 = CityHash64((char *)&local_58,0x10);
  local_48.DebugName = &local_res18;
  local_48.__this = this;
  local_48.CreateInfo = param_1;
  pFVar9 = TRHITransientResourceCache<FRHITransientBuffer>::
           Acquire<_FRHITransientResourcePageAllocator::CreateBuffer_::__l2::<lambda_1>_>
                     (&this->Buffers,uVar8,&local_48);
  local_res10 = pFVar9;
  if (pFVar9 == (FRHITransientBuffer *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x599,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FRHITransientBuffer *)(*pcVar6)();
      return pFVar9;
    }
  }
  EVar4 = param_3->Pipelines;
  uVar8 = this->CurrentCycle;
  if (EVar4 == All) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSinglePipeline()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,99,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FRHITransientBuffer *)(*pcVar6)();
      return pFVar9;
    }
  }
  uVar11 = param_3->Graphics;
  if (uVar11 == 0xffffffff) {
    uVar11 = param_3->AsyncCompute;
  }
  FRHITransientResource::Acquire((FRHITransientResource *)pFVar9,local_res18,uVar11,EVar4,uVar8);
  AllocateMemoryInternal
            (this,(FRHITransientResource *)pFVar9,local_res18,param_3,
             (bool)((byte)(param_1->Usage >> 10) & 1),0.0);
  lVar5 = pFVar9->_padding_;
  puVar1 = &(this->Stats).AliasedSizeCurrent;
  *puVar1 = *puVar1 + lVar5;
  uVar10 = (this->Stats).AliasedSizeCurrent;
  pFVar2 = &(this->Stats).Buffers;
  pFVar2->AllocatedSize = pFVar2->AllocatedSize + lVar5;
  puVar3 = &(this->Stats).Buffers.AllocationCount;
  *puVar3 = *puVar3 + 1;
  if (uVar10 < (this->Stats).AliasedSize) {
    uVar10 = (this->Stats).AliasedSize;
  }
  (this->Stats).AliasedSize = uVar10;
  TSet<FRHITransientResource_*,DefaultKeyFuncs<FRHITransientResource_*,0>,FDefaultSetAllocator>::
  Emplace<FRHITransientBuffer_*_&>(&this->ActiveResources,&local_res8,(bool *)&local_res10);
  return pFVar9;
}

// CreateTexture @ 1446d68a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHITransientTexture * __thiscall
FRHITransientResourcePageAllocator::CreateTexture
          (FRHITransientResourcePageAllocator *this,FRHITextureDesc *param_1,wchar_t *param_2,
          FRHITransientAllocationFences *param_3)

{
  ulong64 *puVar1;
  uint *puVar2;
  ERHIPipeline EVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  ulong64 uVar7;
  FRHITransientTexture *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  wchar_t *local_res18;
  undefined1 auStackY_f8 [32];
  FRHITransientTexture *local_c8;
  FRHITransientTexture *local_c0;
  <lambda_1> local_b8;
  FRHITextureDesc local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_98.Flags = None;
  local_98.ClearValue._0_8_ = 0;
  local_98.ClearValue.Value._4_8_ = 0;
  local_98._24_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_8_ = 0;
  local_98.NumMips = '\0';
  local_98.NumSamples = '\0';
  local_98.Dimension = Texture2D;
  local_98.Format = PF_Unknown;
  local_98.UAVFormat = PF_Unknown;
  local_98.FastVRAMPercentage = '\0';
  local_98._54_2_ = 0;
  local_98.AliasableFormats.AllocatorInstance.InlineData[0] = '\0';
  local_98.AliasableFormats.AllocatorInstance._1_3_ = 0;
  local_98.AliasableFormats.AllocatorInstance._padding_ = 0;
  local_98.AliasableFormats.AllocatorInstance.SecondaryData = (ForElementType<EPixelFormat>)0x0;
  local_98.AliasableFormats.ArrayNum = 0;
  local_98.AliasableFormats.ArrayMax = 0;
  local_res18 = param_2;
  FRHITextureDesc::operator=(&local_98,param_1);
  uVar7 = CityHash64((char *)&local_98,0x50);
  if (local_98.AliasableFormats.AllocatorInstance.SecondaryData != (ForElementType<EPixelFormat>)0x0
     ) {
    FMemory::Free((void *)local_98.AliasableFormats.AllocatorInstance.SecondaryData);
  }
  local_b8.DebugName = &local_res18;
  local_b8.__this = this;
  local_b8.CreateInfo = param_1;
  pFVar8 = TRHITransientResourceCache<FRHITransientTexture>::
           Acquire<_FRHITransientResourcePageAllocator::CreateTexture_::__l2::<lambda_1>_>
                     (&this->Textures,uVar7,&local_b8);
  if (((param_1->Flags >> 0x15 & 1) == 0) && ((param_1->Flags >> 0xe & 1) == 0)) {
    bVar11 = false;
    fVar12 = 0.0;
  }
  else {
    bVar11 = true;
    fVar12 = (float)param_1->FastVRAMPercentage * __real_3b808081;
  }
  local_c8 = pFVar8;
  if (pFVar8 == (FRHITransientTexture *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Texture",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                       ,0x586,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHITransientTexture *)(*pcVar5)();
      return pFVar8;
    }
  }
  EVar3 = param_3->Pipelines;
  uVar7 = this->CurrentCycle;
  if (EVar3 == All) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSinglePipeline()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,99,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FRHITransientTexture *)(*pcVar5)();
      return pFVar8;
    }
  }
  uVar10 = param_3->Graphics;
  if (uVar10 == 0xffffffff) {
    uVar10 = param_3->AsyncCompute;
  }
  FRHITransientResource::Acquire((FRHITransientResource *)pFVar8,local_res18,uVar10,EVar3,uVar7);
  AllocateMemoryInternal(this,(FRHITransientResource *)pFVar8,local_res18,param_3,bVar11,fVar12);
  lVar4 = pFVar8->_padding_;
  puVar1 = &(this->Stats).AliasedSizeCurrent;
  *puVar1 = *puVar1 + lVar4;
  uVar9 = (this->Stats).AliasedSizeCurrent;
  (this->Stats).Textures.AllocatedSize = (this->Stats).Textures.AllocatedSize + lVar4;
  puVar2 = &(this->Stats).Textures.AllocationCount;
  *puVar2 = *puVar2 + 1;
  if (uVar9 < (this->Stats).AliasedSize) {
    uVar9 = (this->Stats).AliasedSize;
  }
  (this->Stats).AliasedSize = uVar9;
  TSet<FRHITransientResource_*,DefaultKeyFuncs<FRHITransientResource_*,0>,FDefaultSetAllocator>::
  Emplace<FRHITransientTexture_*_&>(&this->ActiveResources,&local_c0,(bool *)&local_c8);
  return pFVar8;
}

// DeallocateMemory @ 1446d7780

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientResourcePageAllocator::DeallocateMemory
          (FRHITransientResourcePageAllocator *this,FRHITransientBuffer *param_1,
          FRHITransientAllocationFences *param_2)

{
  uint *puVar1;
  ulong64 *puVar2;
  longlong lVar3;
  
  DeallocateMemoryInternal(this,(FRHITransientResource *)param_1,param_2);
  lVar3 = param_1->_padding_;
  puVar1 = &(this->Stats).Buffers.DeallocationCount;
  *puVar1 = *puVar1 + 1;
  puVar2 = &(this->Stats).AliasedSizeCurrent;
  *puVar2 = *puVar2 - lVar3;
  return;
}

// DeallocateMemory @ 1446d77c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientResourcePageAllocator::DeallocateMemory
          (FRHITransientResourcePageAllocator *this,FRHITransientTexture *param_1,
          FRHITransientAllocationFences *param_2)

{
  uint *puVar1;
  ulong64 *puVar2;
  longlong lVar3;
  
  DeallocateMemoryInternal(this,(FRHITransientResource *)param_1,param_2);
  lVar3 = param_1->_padding_;
  puVar1 = &(this->Stats).Textures.DeallocationCount;
  *puVar1 = *puVar1 + 1;
  puVar2 = &(this->Stats).AliasedSizeCurrent;
  *puVar2 = *puVar2 - lVar3;
  return;
}

// DeallocateMemoryInternal @ 1446d7830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHITransientResourcePageAllocator::DeallocateMemoryInternal
          (FRHITransientResourcePageAllocator *this,FRHITransientResource *param_1,
          FRHITransientAllocationFences *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  TInterval<unsigned_int> TVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [16];
  FScriptContainerElement *local_res20;
  
  param_1->bAcquired = false;
  if ((GRHIGlobals.NeedsTransientDiscardOnGraphicsWorkaround != false) &&
     (param_2->Pipelines == All)) {
    param_1->bDiscardOnGraphicsWorkaround = true;
  }
  if (param_1->AllocationType != Page) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsPageAllocated()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x126,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = (param_1->PageAllocation).PoolAllocations.ArrayNum;
  pFVar11 = (param_1->PageAllocation).PoolAllocations.AllocatorInstance.Data;
  local_res20 = pFVar11 + (longlong)iVar2 * 0x18;
  while( true ) {
    pFVar6 = local_res20;
    if ((param_1->PageAllocation).PoolAllocations.ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRHITransientPagePoolAllocation,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (pFVar11 == pFVar6) break;
    lVar3 = *(longlong *)pFVar11;
    uVar1 = *(ushort *)(pFVar11 + 0x10);
    uVar10 = (uint)uVar1;
    if (*(int *)(lVar3 + 100) == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocationCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                         ,0x3d9,L"");
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    do {
      uVar8 = 0;
      if ((int)uVar10 < *(int *)(lVar3 + 0x38)) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar9 = (longlong)(int)uVar10 * 0x30 + *(longlong *)(lVar3 + 0x30);
      if (*(char *)(lVar9 + 0x2c) == '\0') {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("FreedSpan.bAllocated",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHICore\\Private\\RHICoreTransientResourceAllocator.cpp"
                           ,0x3dd,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + (uint)*(ushort *)(lVar9 + 2);
      uVar8 = *(uint *)(lVar9 + 0x24);
      *(FRHITransientResource **)(lVar9 + 8) = param_1;
      TVar5 = param_2->GraphicsForkJoin;
      *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)param_2;
      *(TInterval<unsigned_int> *)(lVar9 + 0x18) = TVar5;
      *(undefined4 *)(lVar9 + 0x20) = *(undefined4 *)&param_2->Pipelines;
      *(undefined1 *)(lVar9 + 0x2c) = 0;
      FRHITransientPageSpanAllocator::Unlink
                ((FRHITransientPageSpanAllocator *)(lVar3 + 0x10),uVar10);
      FRHITransientPageSpanAllocator::InsertAfter
                ((FRHITransientPageSpanAllocator *)(lVar3 + 0x10),0,uVar10);
      uVar10 = uVar8;
    } while (uVar8 != 0xffffffff);
    *(int *)(lVar3 + 100) = *(int *)(lVar3 + 100) + -1;
    pFVar11 = pFVar11 + 0x18;
  }
  return;
}

// Flush @ 1446db290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHITransientResourcePageAllocator::Flush
          (FRHITransientResourcePageAllocator *this,FRHICommandListImmediate *param_1,
          FRHITransientAllocationStats *param_2)

{
  uint *puVar1;
  FRHITransientResourceStats *pFVar2;
  FScriptContainerElement *pFVar3;
  ulonglong *puVar4;
  FScriptContainerElement *pFVar5;
  FRHITransientPagePool *pFVar6;
  FRHITransientPagePoolCache *this_00;
  ulong64 uVar7;
  longlong lVar8;
  code *pcVar9;
  FRHITransientAllocationStats *pFVar10;
  FRHICommandListImmediate *pFVar11;
  bool bVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  FRHITransientPagePool **ppFVar24;
  longlong lVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  FRHITransientPagePool **ppFVar29;
  uint uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ForElementType<unsigned_int> FVar33;
  ForElementType<FRHITransientPagePool_*> FVar34;
  ForElementType<FRHITransientPagePool_*> _Src;
  double dVar35;
  undefined1 auStackY_2a8 [32];
  undefined1 local_268;
  undefined1 local_267;
  undefined1 local_266;
  undefined1 local_265;
  undefined1 local_264 [4];
  ForElementType<FRHITransientPagePool_*> local_260;
  undefined8 local_258;
  ForElementType<FRHITransientPagePool_*> local_250;
  undefined8 local_248;
  FScriptContainerElement *local_240;
  FRHITransientAllocationStats *local_238;
  FScriptContainerElement *local_230;
  int local_228;
  undefined1 local_224 [12];
  FScriptContainerElement *local_218;
  FRHICommandListImmediate *local_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong local_1f8;
  uint local_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e8;
  undefined4 local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  ulonglong local_1d0;
  ulonglong uStack_1c8;
  int local_1c0;
  undefined4 uStack_1bc;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  FRHITransientResourcePageAllocator *local_1a0;
  undefined4 local_180;
  longlong *local_178;
  TPairInitializer<FRHITransientPagePool_*_&,int_&&> local_170;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  undefined8 *local_138;
  FRHITransientAllocationStats **local_130;
  longlong *local_128;
  int *local_120;
  FRHITransientPagePool **local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FRHITransientPagePoolCache *local_108;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  ulong64 uStack_e8;
  uint local_e0;
  uint uStack_dc;
  uint uStack_d8;
  undefined4 uStack_d4;
  ulong64 local_d0;
  ulonglong uStack_c8;
  TArrayView<FRHITransientPagePool_*_const,int> local_b8;
  undefined1 local_a8 [32];
  ForElementType<unsigned_int> local_88;
  uint local_80;
  int local_7c;
  int local_78;
  int local_74;
  FScriptContainerElement local_70 [8];
  ForAnyElementType local_68;
  uint local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  uVar19 = 0;
  local_238 = param_2;
  local_210 = param_1;
  local_1a0 = this;
  if (param_2 == (FRHITransientAllocationStats *)0x0) goto LAB_1446dbb15;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_a8._8_8_ = 0;
  local_88 = (ForElementType<unsigned_int>)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_78 = -1;
  local_74 = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  uVar26 = (this->PagePools).ArrayNum + (uint)(this->FastPagePool != (FRHITransientPagePool *)0x0);
  if (uVar26 != 0) {
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar26);
    }
    TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_a8,uVar26);
    if (uVar26 < 4) {
      uVar26 = 1;
    }
    else {
      uVar31 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_180 = (undefined4)lVar8;
      uVar26 = 1 << ((byte)lVar8 & 0x1f);
    }
    if ((local_60 == 0) || ((int)local_60 < (int)uVar26)) {
      local_60 = uVar26;
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,0,4);
      }
      if (uVar26 != 0) {
        uVar30 = uVar26;
        if (uVar26 < 2) {
          if (local_68.Data != (FScriptContainerElement *)0x0) {
            uVar30 = 0;
            goto LAB_1446db3d5;
          }
        }
        else {
LAB_1446db3d5:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_68,0,uVar30,4)
          ;
        }
        if (0 < (int)uVar26) {
          uVar32 = (ulonglong)uVar26;
          uVar31 = uVar19;
          do {
            FVar23.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar23.Data = local_68.Data;
            }
            uVar16 = (longlong)(int)uVar26 - 1U & uVar31;
            uVar31 = uVar31 + 1;
            *(undefined4 *)(FVar23.Data + uVar16 * 4) = 0xffffffff;
            uVar32 = uVar32 - 1;
          } while (uVar32 != 0);
        }
      }
      if (local_60 != 0) {
        pTStack_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
        local_1f0 = 0;
        uStack_1ec = 1;
        uStack_1dc = 0;
        uStack_1d8 = 0;
        if (local_80 != 0) {
          FVar33 = (ForElementType<unsigned_int>)((longlong)local_a8 + 0x10);
          if (local_88 != (ForElementType<unsigned_int>)0x0) {
            FVar33 = local_88;
          }
          uVar26 = *(uint *)FVar33;
          uVar31 = uVar19;
          while (uVar26 == 0) {
            uStack_1d8 = (int)uVar31 + 0x20;
            uVar31 = (ulonglong)uStack_1d8;
            iVar21 = (int)uVar19;
            local_1f0 = iVar21 + 1;
            uVar19 = (ulonglong)local_1f0;
            if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1f0)
            goto LAB_1446db4ed;
            uVar26 = ((uint *)((longlong)FVar33 + 4))[iVar21];
          }
          uStack_1ec = -uVar26 & uVar26;
          uVar19 = (ulonglong)uStack_1ec * 2 + 1;
          lVar8 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          local_170.Key._4_4_ = (int)lVar8;
          uStack_1dc = local_170.Key._4_4_ + -1 + uStack_1d8;
          uVar19 = (ulonglong)uStack_1dc;
          if ((int)local_80 < (int)uStack_1dc) {
LAB_1446db4ed:
            uVar19 = (ulonglong)local_80;
            uStack_1dc = local_80;
          }
        }
        local_1e0 = 0xffffffff;
        local_160 = (longlong *)local_a8;
        local_158._padding_ = CONCAT44(uStack_1ec,local_1f0);
        local_158.CurrentBitIndex = uStack_1dc;
        local_158.UnvisitedBitMask = 0xffffffff;
        local_158._28_4_ = uStack_1d4;
        local_158.BaseBitIndex = uStack_1d8;
        local_158.Array = pTStack_1e8;
        if ((int)uVar19 < (int)local_80) {
          do {
            lVar8 = *local_160;
            lVar17 = (longlong)(int)uVar19;
            uVar31 = *(ulonglong *)(lVar8 + lVar17 * 0x18);
            uVar26 = ((uint)(uVar31 >> 0x14) & 0xffff ^ (uint)(uVar31 >> 4)) * -0x7a143595;
            uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
            uVar26 = (uVar26 >> 0x10 ^ uVar26) & local_60 - 1;
            *(uint *)(lVar8 + 0x14 + lVar17 * 0x18) = uVar26;
            FVar23.Data = local_70;
            if (local_68.Data != (FScriptContainerElement *)0x0) {
              FVar23.Data = local_68.Data;
            }
            uVar31 = (longlong)(int)local_60 - 1U & (longlong)(int)uVar26;
            *(undefined4 *)(lVar8 + 0x10 + lVar17 * 0x18) =
                 *(undefined4 *)(FVar23.Data + uVar31 * 4);
            *(int *)(FVar23.Data + uVar31 * 4) = (int)uVar19;
            local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
            uVar19 = (ulonglong)(uint)local_158.CurrentBitIndex;
          } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
        }
      }
    }
  }
  local_138 = (undefined8 *)local_a8;
  local_130 = &local_238;
  if (this->FastPagePool != (FRHITransientPagePool *)0x0) {
    `FRHITransientResourcePageAllocator::Flush'::__l5::<lambda_1>::operator()
              (&local_138,this->FastPagePool,FastVRAM);
  }
  pFVar27 = (this->PagePools).AllocatorInstance.Data;
  iVar21 = (this->PagePools).ArrayNum;
  pFVar28 = pFVar27 + (longlong)iVar21 * 8;
  while( true ) {
    if ((this->PagePools).ArrayNum != iVar21) {
      local_268 = 0;
      `TCheckedPointerIterator<FRHITransientPagePool_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_268);
    }
    if (pFVar27 == pFVar28) break;
    local_1b8 = *(longlong *)pFVar27;
    local_228 = (local_238->MemoryRanges).ArrayNum;
    local_128 = &local_1b8;
    local_120 = &local_228;
    TSet<TTuple<FRHITransientPagePool_*,int>,TDefaultMapHashableKeyFuncs<FRHITransientPagePool_*,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FRHITransientPagePool_*_&,int_&&>_>
              ((TSet<TTuple<FRHITransientPagePool_*,int>,TDefaultMapHashableKeyFuncs<FRHITransientPagePool_*,int,0>,FDefaultSetAllocator>
                *)local_a8,&local_170,(bool *)&local_128);
    pFVar10 = local_238;
    piVar18 = &(local_238->MemoryRanges).ArrayMax;
    local_1f8 = local_1f8 & 0xffffffff00000000;
    local_208 = (ulonglong)(uint)(*(int *)(local_1b8 + 0x60) * *(int *)(local_1b8 + 0x5c));
    iVar14 = (local_238->MemoryRanges).ArrayNum;
    uStack_200 = local_208;
    if (iVar14 == *piVar18) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)local_238,piVar18);
      (pFVar10->MemoryRanges).ArrayNum = iVar14;
    }
    pFVar27 = pFVar27 + 8;
    (pFVar10->MemoryRanges).ArrayNum = iVar14 + 1;
    pFVar5 = (pFVar10->MemoryRanges).AllocatorInstance.Data;
    pFVar3 = pFVar5 + (longlong)iVar14 * 0x18;
    *(ulonglong *)pFVar3 = local_208;
    *(ulonglong *)(pFVar3 + 8) = uStack_200;
    *(ulonglong *)(pFVar5 + (longlong)iVar14 * 0x18 + 0x10) = local_1f8;
  }
  iVar21 = (this->Textures).Allocated.ArrayNum;
  pFVar28 = (this->Textures).Allocated.AllocatorInstance.Data;
  local_230 = pFVar28;
  if ((iVar21 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_240 = pFVar28 + (longlong)iVar21 * 8;
  if (pFVar28 != local_240) {
    do {
      pFVar10 = local_238;
      local_1b0 = *(longlong *)pFVar28;
      local_178 = &local_1b0;
      TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FRHITransientTexture_const_*_&>_>
                ((TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                  *)&local_238->Resources,
                 (TKeyInitializer<FRHITransientTexture_const_*_&> *)local_224,(bool *)&local_178);
      lVar8 = local_1b0;
      lVar17 = (longlong)(int)local_224._0_4_ * 0x50 + *(longlong *)&pFVar10->Resources;
      if ((*(char *)(local_1b0 + 0xa7) != '\x01') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsPageAllocated()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                              ,300,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar21 = *(int *)(lVar8 + 0x70);
      pFVar28 = *(FScriptContainerElement **)(lVar8 + 0x68);
      local_218 = pFVar28 + (longlong)iVar21 * 0x18;
      while( true ) {
        pFVar27 = local_218;
        if (*(int *)(lVar8 + 0x70) != iVar21) {
          local_267 = 0;
          `TCheckedPointerIterator<FRHITransientPagePoolAllocation_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_267);
        }
        if (pFVar28 == pFVar27) break;
        uVar26 = (uint)*(ushort *)(pFVar28 + 0x12);
        if (*(ushort *)(pFVar28 + 0x12) < *(ushort *)(pFVar28 + 0x14)) {
          do {
            uVar30 = 0;
            if ((int)uVar26 < *(int *)(lVar8 + 0x80)) {
              uVar30 = ~uVar26 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar30 = *(uint *)(*(longlong *)(lVar8 + 0x78) + (longlong)(int)uVar26 * 4);
            uVar22 = uVar30 & 0xffff;
            local_1d0 = (ulonglong)(uVar22 * this->PageSize);
            uStack_1c8 = (ulonglong)((uVar22 + (uVar30 >> 0x10)) * this->PageSize);
            piVar18 = TMapBase<FRHITransientPagePool_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITransientPagePool_*,int,0>_>
                      ::FindChecked((TMapBase<FRHITransientPagePool_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITransientPagePool_*,int,0>_>
                                     *)local_a8,*(FRHITransientPagePool **)pFVar28);
            local_1c0 = *piVar18;
            iVar14 = *(int *)(lVar17 + 0x40);
            if (iVar14 == *(int *)(lVar17 + 0x44)) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientAllocationStats::FAllocation>_>
                                 (0x818,(ForElementType<FRHITransientAllocationStats::FAllocation> *
                                        )(lVar17 + 8),(int *)(lVar17 + 0x44));
            }
            *(int *)(lVar17 + 0x40) = iVar14 + 1;
            lVar25 = lVar17 + 8;
            if (*(longlong *)(lVar17 + 0x38) != 0) {
              lVar25 = *(longlong *)(lVar17 + 0x38);
            }
            uVar26 = uVar26 + 1;
            puVar4 = (ulonglong *)(lVar25 + (longlong)iVar14 * 0x18);
            *puVar4 = local_1d0;
            puVar4[1] = uStack_1c8;
            *(ulonglong *)(lVar25 + 0x10 + (longlong)iVar14 * 0x18) = CONCAT44(uStack_1bc,local_1c0)
            ;
          } while (uVar26 < *(ushort *)(pFVar28 + 0x14));
        }
        pFVar28 = pFVar28 + 0x18;
      }
      pFVar28 = local_230 + 8;
      local_230 = pFVar28;
    } while (pFVar28 != local_240);
  }
  iVar21 = (this->Buffers).Allocated.ArrayNum;
  pFVar28 = (this->Buffers).Allocated.AllocatorInstance.Data;
  local_230 = pFVar28;
  if ((iVar21 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_218 = pFVar28 + (longlong)iVar21 * 8;
  if (pFVar28 != local_218) {
    do {
      pFVar10 = local_238;
      local_1a8 = *(longlong *)pFVar28;
      local_170.Value = (int *)&local_1a8;
      TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FRHITransientBuffer_const_*_&>_>
                ((TSet<TTuple<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FRHITransientResource_const_*,TArray<FRHITransientAllocationStats::FAllocation,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>,0>,FDefaultSetAllocator>
                  *)&local_238->Resources,
                 (TKeyInitializer<FRHITransientBuffer_const_*_&> *)(local_224 + 4),
                 (bool *)&local_170.Value);
      lVar8 = local_1a8;
      lVar17 = (longlong)(int)local_224._4_4_ * 0x50 + *(longlong *)&pFVar10->Resources;
      if ((*(char *)(local_1a8 + 0xa7) != '\x01') &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsPageAllocated()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                              ,300,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar21 = *(int *)(lVar8 + 0x70);
      pFVar28 = *(FScriptContainerElement **)(lVar8 + 0x68);
      local_240 = pFVar28 + (longlong)iVar21 * 0x18;
      while( true ) {
        pFVar27 = local_240;
        if (*(int *)(lVar8 + 0x70) != iVar21) {
          local_266 = 0;
          `TCheckedPointerIterator<FRHITransientPagePoolAllocation_const_,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(&local_266);
        }
        if (pFVar28 == pFVar27) break;
        uVar26 = (uint)*(ushort *)(pFVar28 + 0x12);
        if (*(ushort *)(pFVar28 + 0x12) < *(ushort *)(pFVar28 + 0x14)) {
          do {
            uVar30 = 0;
            if ((int)uVar26 < *(int *)(lVar8 + 0x80)) {
              uVar30 = ~uVar26 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar30 = *(uint *)(*(longlong *)(lVar8 + 0x78) + (longlong)(int)uVar26 * 4);
            uVar22 = uVar30 & 0xffff;
            local_1d0 = (ulonglong)(uVar22 * this->PageSize);
            uStack_1c8 = (ulonglong)((uVar22 + (uVar30 >> 0x10)) * this->PageSize);
            piVar18 = TMapBase<FRHITransientPagePool_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITransientPagePool_*,int,0>_>
                      ::FindChecked((TMapBase<FRHITransientPagePool_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHITransientPagePool_*,int,0>_>
                                     *)local_a8,*(FRHITransientPagePool **)pFVar28);
            local_1c0 = *piVar18;
            iVar14 = *(int *)(lVar17 + 0x40);
            if (iVar14 == *(int *)(lVar17 + 0x44)) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransientAllocationStats::FAllocation>_>
                                 (0x818,(ForElementType<FRHITransientAllocationStats::FAllocation> *
                                        )(lVar17 + 8),(int *)(lVar17 + 0x44));
            }
            *(int *)(lVar17 + 0x40) = iVar14 + 1;
            lVar25 = lVar17 + 8;
            if (*(longlong *)(lVar17 + 0x38) != 0) {
              lVar25 = *(longlong *)(lVar17 + 0x38);
            }
            uVar26 = uVar26 + 1;
            puVar4 = (ulonglong *)(lVar25 + (longlong)iVar14 * 0x18);
            *puVar4 = local_1d0;
            puVar4[1] = uStack_1c8;
            *(ulonglong *)(lVar25 + 0x10 + (longlong)iVar14 * 0x18) = CONCAT44(uStack_1bc,local_1c0)
            ;
          } while (uVar26 < *(ushort *)(pFVar28 + 0x14));
        }
        pFVar28 = pFVar28 + 0x18;
      }
      pFVar28 = local_230 + 8;
      local_230 = pFVar28;
    } while (pFVar28 != local_218);
  }
  local_60 = 0;
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHITransientPagePool_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHITransientPagePool_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHITransientPagePool_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_a8);
LAB_1446dbb15:
  pFVar11 = local_210;
  uVar19 = (ulonglong)this->PageMapCount;
  if ((__GTraceCounterTransientPageMapCount.Value != uVar19) &&
     (__GTraceCounterTransientPageMapCount.Value = uVar19, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientPageMapCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar13 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientPageMapCount.CounterName,TraceCounterType_Int,
                          __GTraceCounterTransientPageMapCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientPageMapCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientPageMapCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientPageMapCount.CounterId._0_2_ = uVar13;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientPageMapCount.CounterId._0_2_,
               __GTraceCounterTransientPageMapCount.Value);
  }
  uVar19 = (ulonglong)this->PageAllocateCount;
  if ((__GTraceCounterTransientPageAllocateCount.Value != uVar19) &&
     (__GTraceCounterTransientPageAllocateCount.Value = uVar19, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientPageAllocateCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar13 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientPageAllocateCount.CounterName,TraceCounterType_Int
                          ,__GTraceCounterTransientPageAllocateCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientPageAllocateCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientPageAllocateCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientPageAllocateCount.CounterId._0_2_ = uVar13;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientPageAllocateCount.CounterId._0_2_,
               __GTraceCounterTransientPageAllocateCount.Value);
  }
  uVar19 = (ulonglong)this->PageSpanCount;
  if ((__GTraceCounterTransientPageSpanCount.Value != uVar19) &&
     (__GTraceCounterTransientPageSpanCount.Value = uVar19, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientPageSpanCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar13 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientPageSpanCount.CounterName,TraceCounterType_Int,
                          __GTraceCounterTransientPageSpanCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientPageSpanCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientPageSpanCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientPageSpanCount.CounterId._0_2_ = uVar13;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientPageSpanCount.CounterId._0_2_,
               __GTraceCounterTransientPageSpanCount.Value);
  }
  uVar19 = (ulonglong)(uint)(this->Textures).Allocated.ArrayNum;
  this->PageMapCount = 0;
  this->PageAllocateCount = 0;
  this->PageSpanCount = 0;
  if ((__GTraceCounterTransientTextureCount.Value != uVar19) &&
     (__GTraceCounterTransientTextureCount.Value = uVar19, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientTextureCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar13 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientTextureCount.CounterName,TraceCounterType_Int,
                          __GTraceCounterTransientTextureCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientTextureCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientTextureCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientTextureCount.CounterId._0_2_ = uVar13;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientTextureCount.CounterId._0_2_,
               __GTraceCounterTransientTextureCount.Value);
  }
  uVar26 = (this->Textures).HitCount;
  dVar35 = (double)((float)uVar26 / (float)((this->Textures).MissCount + uVar26));
  if ((__GTraceCounterTransientTextureCacheHitPercentage.Value != dVar35) &&
     (__GTraceCounterTransientTextureCacheHitPercentage.Value = dVar35,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientTextureCacheHitPercentage.CounterId == (atomic<unsigned_int>)0x0) {
      uVar13 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientTextureCacheHitPercentage.CounterName,
                          TraceCounterType_Float,
                          __GTraceCounterTransientTextureCacheHitPercentage.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientTextureCacheHitPercentage.CounterId == (atomic<unsigned_int>)0x0)
      {
        __GTraceCounterTransientTextureCacheHitPercentage.CounterId._2_2_ = 0;
        __GTraceCounterTransientTextureCacheHitPercentage.CounterId._0_2_ = uVar13;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientTextureCacheHitPercentage.CounterId._0_2_,
               __GTraceCounterTransientTextureCacheHitPercentage.Value);
  }
  TRHITransientResourceCache<FRHITransientTexture>::
  Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l22::<lambda_4>_>
            (&this->Textures,GFrameCounterRenderThread,(<lambda_4>)this);
  uVar19 = (ulonglong)(uint)(this->Textures).Cache.ArrayNum;
  if ((__GTraceCounterTransientTextureCacheSize.Value != uVar19) &&
     (__GTraceCounterTransientTextureCacheSize.Value = uVar19, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientTextureCacheSize.CounterId == (atomic<unsigned_int>)0x0) {
      uVar13 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientTextureCacheSize.CounterName,TraceCounterType_Int,
                          __GTraceCounterTransientTextureCacheSize.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientTextureCacheSize.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientTextureCacheSize.CounterId._2_2_ = 0;
        __GTraceCounterTransientTextureCacheSize.CounterId._0_2_ = uVar13;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientTextureCacheSize.CounterId._0_2_,
               __GTraceCounterTransientTextureCacheSize.Value);
  }
  uVar19 = (ulonglong)(uint)(this->Buffers).Allocated.ArrayNum;
  if ((__GTraceCounterTransientBufferCount.Value != uVar19) &&
     (__GTraceCounterTransientBufferCount.Value = uVar19, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientBufferCount.CounterId == (atomic<unsigned_int>)0x0) {
      uVar13 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientBufferCount.CounterName,TraceCounterType_Int,
                          __GTraceCounterTransientBufferCount.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientBufferCount.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientBufferCount.CounterId._2_2_ = 0;
        __GTraceCounterTransientBufferCount.CounterId._0_2_ = uVar13;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientBufferCount.CounterId._0_2_,
               __GTraceCounterTransientBufferCount.Value);
  }
  uVar26 = (this->Buffers).HitCount;
  dVar35 = (double)((float)uVar26 / (float)((this->Buffers).MissCount + uVar26));
  if ((__GTraceCounterTransientBufferCacheHitPercentage.Value != dVar35) &&
     (__GTraceCounterTransientBufferCacheHitPercentage.Value = dVar35, -1 < CountersChannel->Enabled
     )) {
    if (__GTraceCounterTransientBufferCacheHitPercentage.CounterId == (atomic<unsigned_int>)0x0) {
      uVar13 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientBufferCacheHitPercentage.CounterName,
                          TraceCounterType_Float,
                          __GTraceCounterTransientBufferCacheHitPercentage.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientBufferCacheHitPercentage.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientBufferCacheHitPercentage.CounterId._2_2_ = 0;
        __GTraceCounterTransientBufferCacheHitPercentage.CounterId._0_2_ = uVar13;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientBufferCacheHitPercentage.CounterId._0_2_,
               __GTraceCounterTransientBufferCacheHitPercentage.Value);
  }
  TRHITransientResourceCache<FRHITransientBuffer>::
  Forfeit<_FRHITransientResourcePageAllocator::Flush_::__l23::<lambda_5>_>
            (&this->Buffers,GFrameCounterRenderThread,(<lambda_5>)this);
  uVar19 = (ulonglong)(uint)(this->Buffers).Cache.ArrayNum;
  if ((__GTraceCounterTransientBufferCacheSize.Value != uVar19) &&
     (__GTraceCounterTransientBufferCacheSize.Value = uVar19, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterTransientBufferCacheSize.CounterId == (atomic<unsigned_int>)0x0) {
      uVar13 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterTransientBufferCacheSize.CounterName,TraceCounterType_Int,
                          __GTraceCounterTransientBufferCacheSize.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterTransientBufferCacheSize.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterTransientBufferCacheSize.CounterId._2_2_ = 0;
        __GTraceCounterTransientBufferCacheSize.CounterId._0_2_ = uVar13;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterTransientBufferCacheSize.CounterId._0_2_,
               __GTraceCounterTransientBufferCacheSize.Value);
  }
  if (this->FastPagePool != (FRHITransientPagePool *)0x0) {
    FRHITransientPagePool::Flush(this->FastPagePool,pFVar11);
  }
  pFVar27 = (this->PagePools).AllocatorInstance.Data;
  iVar21 = (this->PagePools).ArrayNum;
  pFVar28 = pFVar27 + (longlong)iVar21 * 8;
  while( true ) {
    if ((this->PagePools).ArrayNum != iVar21) {
      local_265 = 0;
      `TCheckedPointerIterator<FRHITransientPagePool_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_265);
    }
    if (pFVar27 == pFVar28) break;
    FRHITransientPagePool::Flush(*(FRHITransientPagePool **)pFVar27,pFVar11);
    pFVar27 = pFVar27 + 8;
  }
  if (((this->Stats).Textures.DeallocationCount != 0) ||
     ((this->Stats).Buffers.DeallocationCount != 0)) {
    uVar26 = (this->PagePools).ArrayNum;
    ppFVar24 = (FRHITransientPagePool **)0x0;
    local_250.Data = (FRHITransientPagePool **)0x0;
    local_248 = 0;
    local_260.Data = (FRHITransientPagePool **)0x0;
    local_258 = 0;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    ppFVar29 = ppFVar24;
    if (0 < (int)uVar26) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>_>
                (8,8,uVar26,&local_250,0,(int *)((longlong)&local_248 + 4));
      ppFVar29 = (FRHITransientPagePool **)(local_248 & 0xffffffff);
    }
    FVar34.Data = local_250.Data;
    uVar26 = (this->PagePools).ArrayNum;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    _Src.Data = ppFVar24;
    if (0 < (int)uVar26) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>_>
                (8,8,uVar26,&local_260,0,(int *)((longlong)&local_258 + 4));
      ppFVar24 = (FRHITransientPagePool **)(local_258 & 0xffffffff);
      _Src.Data = local_260.Data;
    }
    pFVar28 = (this->PagePools).AllocatorInstance.Data;
    iVar21 = (this->PagePools).ArrayNum;
    local_240 = pFVar28 + (longlong)iVar21 * 8;
    while( true ) {
      pFVar27 = local_240;
      iVar15 = (int)ppFVar24;
      iVar14 = (int)ppFVar29;
      if ((local_1a0->PagePools).ArrayNum != iVar21) {
        local_264[0] = 0;
        `TCheckedPointerIterator<FRHITransientPagePool_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_264);
      }
      this = local_1a0;
      if (pFVar28 == pFVar27) break;
      pFVar6 = *(FRHITransientPagePool **)pFVar28;
      if ((pFVar6->Allocator).AllocationCount == 0) {
        if (iVar14 == local_248._4_4_) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>_>
                             (0x808,&local_250,(int *)((longlong)&local_248 + 4));
          FVar34.Data = local_250.Data;
        }
        pFVar28 = pFVar28 + 8;
        ppFVar29 = (FRHITransientPagePool **)(ulonglong)(iVar14 + 1U);
        FVar34.Data[iVar14] = pFVar6;
        local_248 = CONCAT44(local_248._4_4_,iVar14 + 1U);
      }
      else {
        if (iVar15 == local_258._4_4_) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHITransientPagePool_*>_>
                             (0x808,&local_260,(int *)((longlong)&local_258 + 4));
          _Src.Data = local_260.Data;
        }
        pFVar28 = pFVar28 + 8;
        ppFVar24 = (FRHITransientPagePool **)(ulonglong)(iVar15 + 1U);
        _Src.Data[iVar15] = pFVar6;
        local_258 = CONCAT44(local_258._4_4_,iVar15 + 1U);
      }
    }
    this_00 = local_1a0->PagePoolCache;
    local_118 = FVar34.Data;
    if ((iVar14 < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_b8._12_4_ = uStack_10c;
    local_b8.ArrayNum = iVar14;
    local_b8.DataPtr = local_118;
    iStack_110 = iVar14;
    FRHITransientPagePoolCache::Forfeit(this_00,&local_b8);
    iVar21 = (this->PagePools).ArrayMax;
    piVar18 = &(this->PagePools).ArrayMax;
    (this->PagePools).ArrayNum = iVar15;
    if ((iVar15 == 0) && (iVar21 == 0)) {
      *piVar18 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar15,iVar21,&(this->PagePools).AllocatorInstance,iVar15,piVar18);
      if (iVar15 != 0) {
        memcpy((this->PagePools).AllocatorInstance.Data,_Src.Data,(longlong)iVar15 << 3);
      }
    }
    if (_Src.Data != (FRHITransientPagePool **)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(_Src.Data);
    }
    if (FVar34.Data != (FRHITransientPagePool **)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(FVar34.Data);
    }
  }
  pFVar11 = local_210;
  auStack_100._0_8_ = (this->Stats).Textures.AllocatedSize;
  auStack_100._8_4_ = (this->Stats).Textures.AllocationCount;
  auStack_100._12_4_ = (this->Stats).Textures.DeallocationCount;
  local_108 = this->PagePoolCache;
  uStack_f0 = *(undefined8 *)&(this->Stats).Textures.CreateCount;
  uStack_e8 = (this->Stats).Buffers.AllocatedSize;
  local_e0 = (this->Stats).Buffers.AllocationCount;
  uStack_dc = (this->Stats).Buffers.DeallocationCount;
  uStack_d8 = (this->Stats).Buffers.CreateCount;
  uStack_d4 = *(undefined4 *)&(this->Stats).Buffers.field_0x14;
  local_d0 = (this->Stats).AliasedSizeCurrent;
  uVar19 = (this->Stats).AliasedSize;
  if (((GRHICommandList.bLatchedBypass == false) || ((local_210->field_0x29b & 0x20) == 0)) &&
     (local_210->field_0x64 == '\0')) {
    uStack_c8 = uVar19;
    puVar20 = FMemStackBase::Alloc((FMemStackBase *)local_210,0x60,8);
    *(int *)&pFVar11->field_0x60 = *(int *)&pFVar11->field_0x60 + 1;
    **(undefined8 **)&pFVar11->field_0x30 = puVar20;
    *(undefined8 **)&pFVar11->field_0x30 = puVar20 + 1;
    puVar20[2] = local_108;
    puVar20[3] = auStack_100._0_8_;
    puVar20[1] = 0;
    *puVar20 = &TRHILambdaCommand<FRHICommandListImmediate,`FRHITransientResourcePageAllocator::Flush'::`2'::<lambda_6>_>
                ::_vftable_;
    puVar20[4] = auStack_100._8_8_;
    puVar20[5] = uStack_f0;
    puVar20[0xb] = L"TRHILambdaCommand";
    puVar20[6] = uStack_e8;
    puVar20[7] = CONCAT44(uStack_dc,local_e0);
    puVar20[8] = CONCAT44(uStack_d4,uStack_d8);
    puVar20[9] = local_d0;
    puVar20[10] = uVar19;
  }
  else {
    (local_108->Stats).Textures.AllocatedSize =
         (local_108->Stats).Textures.AllocatedSize + auStack_100._0_8_;
    puVar1 = &(local_108->Stats).Textures.AllocationCount;
    *puVar1 = *puVar1 + auStack_100._8_4_;
    puVar1 = &(local_108->Stats).Textures.DeallocationCount;
    *puVar1 = *puVar1 + auStack_100._12_4_;
    puVar1 = &(local_108->Stats).Textures.CreateCount;
    *puVar1 = *puVar1 + (int)uStack_f0;
    pFVar2 = &(local_108->Stats).Buffers;
    pFVar2->AllocatedSize = pFVar2->AllocatedSize + uStack_e8;
    puVar1 = &(local_108->Stats).Buffers.AllocationCount;
    *puVar1 = *puVar1 + local_e0;
    puVar1 = &(local_108->Stats).Buffers.DeallocationCount;
    *puVar1 = *puVar1 + uStack_dc;
    puVar1 = &(local_108->Stats).Buffers.CreateCount;
    *puVar1 = *puVar1 + uStack_d8;
    if (uVar19 < (local_108->Stats).AliasedSize) {
      uVar19 = (local_108->Stats).AliasedSize;
    }
    (local_108->Stats).AliasedSize = uVar19;
  }
  uVar7 = (this->Stats).AliasedSizeCurrent;
  (this->Stats).Textures.AllocatedSize = 0;
  (this->Stats).Textures.AllocationCount = 0;
  (this->Stats).Textures.DeallocationCount = 0;
  *(undefined8 *)&(this->Stats).Textures.CreateCount = 0;
  (this->Stats).Buffers.AllocatedSize = 0;
  (this->Stats).Buffers.AllocationCount = 0;
  (this->Stats).Buffers.DeallocationCount = 0;
  (this->Stats).AliasedSize = uVar7;
  *(undefined8 *)&(this->Stats).Buffers.CreateCount = 0;
  this->CurrentCycle = this->CurrentCycle + 1;
  return;
}

