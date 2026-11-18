// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 9

// FSlateBatchData @ 1424ea2c0

FSlateBatchData * __thiscall FSlateBatchData::FSlateBatchData(FSlateBatchData *this)

{
  this->FirstRenderBatchIndex = -1;
  (this->RenderBatches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderBatches).ArrayNum = 0;
  (this->RenderBatches).ArrayMax = 0;
  (this->UncachedSourceBatchVertices).AllocatorInstance._padding_ = 0;
  (this->UncachedSourceBatchVertices).AllocatorInstance.AllocatedSize = 0;
  (this->UncachedSourceBatchVertices).ArrayNum = 0;
  (this->UncachedSourceBatchVertices).ArrayMax = 0;
  (this->UncachedSourceBatchIndices).AllocatorInstance._padding_ = 0;
  (this->UncachedSourceBatchIndices).AllocatorInstance.AllocatedSize = 0;
  (this->UncachedSourceBatchIndices).ArrayNum = 0;
  (this->UncachedSourceBatchIndices).ArrayMax = 0;
  (this->FinalVertexData).AllocatorInstance._padding_ = 0;
  (this->FinalVertexData).AllocatorInstance.AllocatedSize = 0;
  (this->FinalVertexData).ArrayNum = 0;
  (this->FinalVertexData).ArrayMax = 0;
  (this->FinalIndexData).AllocatorInstance._padding_ = 0;
  (this->FinalIndexData).AllocatorInstance.AllocatedSize = 0;
  (this->FinalIndexData).ArrayNum = 0;
  (this->FinalIndexData).ArrayMax = 0;
  this->MaxNumFinalVertices = 0;
  this->MaxNumFinalIndices = 0;
  this->NumLayers = 0;
  this->NumBatches = 0;
  this->bIsStencilBufferRequired = false;
  this->bRequiresVirtualTextureFeedback = false;
  return this;
}

// ~FSlateBatchData @ 1424ec940

void __thiscall FSlateBatchData::~FSlateBatchData(FSlateBatchData *this)

{
  FScriptContainerElement *pFVar1;
  
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->FinalIndexData).AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->FinalVertexData).AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->UncachedSourceBatchIndices).AllocatorInstance);
  FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType::
  ~ForAnyElementType(&(this->UncachedSourceBatchVertices).AllocatorInstance);
  pFVar1 = (this->RenderBatches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AddRenderBatch @ 142500040

FSlateRenderBatch * __thiscall
FSlateBatchData::AddRenderBatch
          (FSlateBatchData *this,int param_1,FShaderParams *param_2,FSlateShaderResource *param_3,
          ESlateDrawPrimitive param_4,ESlateShader param_5,ESlateDrawEffect param_6,
          ESlateBatchDrawFlag param_7,schar param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FSlateRenderBatch *pFVar5;
  
  iVar4 = (this->RenderBatches).ArrayNum;
  iVar2 = (this->UncachedSourceBatchIndices).ArrayNum;
  iVar3 = (this->UncachedSourceBatchVertices).ArrayNum;
  piVar1 = &(this->RenderBatches).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1090,(ForAnyElementType *)this,piVar1);
  }
  (this->RenderBatches).ArrayNum = iVar4 + 1;
  pFVar5 = FSlateRenderBatch::FSlateRenderBatch
                     ((FSlateRenderBatch *)
                      ((this->RenderBatches).AllocatorInstance.Data + (longlong)iVar4 * 0x90),
                      param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      &this->UncachedSourceBatchVertices,&this->UncachedSourceBatchIndices,iVar3,
                      iVar2);
  return pFVar5;
}

// CombineBatches @ 142504be0

void __thiscall
FSlateBatchData::CombineBatches
          (FSlateBatchData *this,FSlateRenderBatch *param_1,FSlateRenderBatch *param_2,
          TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
          *param_3,TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                   *param_4)

{
  int *piVar1;
  int iVar2;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar3;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  void *_Src;
  uint uVar10;
  int iVar11;
  int local_28 [4];
  
  if ((param_2->bIsMerged != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!SecondBatch.bIsMerged",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                         ,0x8e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar2 = param_1->NumVertices;
  if ((iVar2 < 1) || (param_1->NumIndices < 1)) {
    if ((param_2->NumVertices < 1) || (param_2->NumIndices < 1)) goto LAB_142504ebc;
    iVar11 = param_2->NumVertices;
  }
  else {
    iVar11 = param_2->NumVertices;
    if ((iVar11 < 1) || (param_2->NumIndices < 1)) goto LAB_142504ebc;
  }
  param_1->NumVertices = iVar2 + iVar11;
  param_1->NumIndices = param_2->NumIndices + param_1->NumIndices;
  uVar10 = param_2->VertexOffset;
  pTVar3 = param_2->SourceVertices;
  iVar11 = param_2->NumVertices;
  uVar9 = 0;
  if ((int)uVar10 < pTVar3->ArrayNum) {
    uVar9 = ~uVar10 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  _Src = (void *)((longlong)(int)uVar10 * 0x2c + (pTVar3->AllocatorInstance)._padding_);
  if (((_Src == (void *)0x0) && (iVar11 != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr != nullptr || Count == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x9c1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar8 = UE::Core::Private::
          ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                    (0x2c,4,iVar11,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax
                    );
  if (iVar11 != 0) {
    memcpy((void *)((longlong)iVar8 * 0x2c + (param_3->AllocatorInstance)._padding_),_Src,
           (longlong)iVar11 * 0x2c);
  }
  uVar10 = param_2->NumIndices + param_4->ArrayNum;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  piVar1 = &param_4->ArrayMax;
  if (param_4->ArrayMax < (int)uVar10) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (4,4,uVar10,&param_4->AllocatorInstance,param_4->ArrayNum,piVar1);
  }
  iVar11 = 0;
  if (0 < param_2->NumIndices) {
    do {
      pTVar4 = param_2->SourceIndices;
      uVar9 = param_2->IndexOffset + iVar11;
      uVar10 = 0;
      if ((int)uVar9 < pTVar4->ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      piVar5 = (int *)(param_4->AllocatorInstance)._padding_;
      local_28[0] = *(int *)((pTVar4->AllocatorInstance)._padding_ + (longlong)(int)uVar9 * 4) +
                    iVar2;
      if (((piVar5 <= local_28) && (local_28 < piVar5 + *piVar1)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = param_4->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                          (0x404,&param_4->AllocatorInstance,piVar1);
      }
      iVar11 = iVar11 + 1;
      param_4->ArrayNum = iVar8 + 1;
      *(int *)((param_4->AllocatorInstance)._padding_ + (longlong)iVar8 * 4) = local_28[0];
    } while (iVar11 < param_2->NumIndices);
  }
LAB_142504ebc:
  param_2->bIsMerged = '\x01';
  return;
}

// FillBuffersFromNewBatch @ 1425088f0

void __thiscall
FSlateBatchData::FillBuffersFromNewBatch
          (FSlateBatchData *this,FSlateRenderBatch *param_1,
          TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
          *param_2,TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_>
                   *param_3)

{
  int iVar1;
  uint uVar2;
  TArray<FSlateVertex,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar3;
  TArray<unsigned_int,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>_> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  
  iVar1 = param_1->NumVertices;
  if ((0 < iVar1) && (0 < param_1->NumIndices)) {
    uVar9 = param_1->VertexOffset;
    param_1->VertexOffset = param_2->ArrayNum;
    pTVar3 = param_1->SourceVertices;
    uVar2 = param_1->IndexOffset;
    param_1->IndexOffset = param_3->ArrayNum;
    uVar8 = 0;
    if ((int)uVar9 < pTVar3->ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pvVar10 = (void *)((longlong)(int)uVar9 * 0x2c + (pTVar3->AllocatorInstance)._padding_);
    if ((pvVar10 == (void *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = UE::Core::Private::
            ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (0x2c,4,iVar1,&param_2->AllocatorInstance,&param_2->ArrayNum,
                       &param_2->ArrayMax);
    memcpy((void *)((longlong)iVar7 * 0x2c + (param_2->AllocatorInstance)._padding_),pvVar10,
           (longlong)iVar1 * 0x2c);
    iVar1 = param_1->NumIndices;
    pTVar4 = param_1->SourceIndices;
    uVar9 = 0;
    if ((int)uVar2 < pTVar4->ArrayNum) {
      uVar9 = ~uVar2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pvVar10 = (void *)((pTVar4->AllocatorInstance)._padding_ + (longlong)(int)uVar2 * 4);
    if (((pvVar10 == (void *)0x0) && (iVar1 != 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr != nullptr || Count == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x9c1,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = UE::Core::Private::
            ReallocGrow<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
                      (4,4,iVar1,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
    if (iVar1 != 0) {
      memcpy((void *)((param_3->AllocatorInstance)._padding_ + (longlong)iVar7 * 4),pvVar10,
             (longlong)iVar1 << 2);
    }
  }
  return;
}

// IsStencilClippingRequired @ 142511830

bool __thiscall FSlateBatchData::IsStencilClippingRequired(FSlateBatchData *this)

{
  return this->bIsStencilBufferRequired;
}

// IsVirtualTextureFeedbackRequired @ 142511b90

bool __thiscall FSlateBatchData::IsVirtualTextureFeedbackRequired(FSlateBatchData *this)

{
  return this->bRequiresVirtualTextureFeedback;
}

// MergeRenderBatches @ 142515e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FSlateBatchData::MergeRenderBatches(FSlateBatchData *this)

{
  undefined4 uVar1;
  code *pcVar2;
  FSlateBatchData *pFVar3;
  bool bVar4;
  byte bVar5;
  ForElementType<TTuple<int,int>_> FVar6;
  int iVar7;
  FSlateRenderBatch *pFVar8;
  uint uVar9;
  FSlateRenderBatch *this_00;
  longlong lVar10;
  FSlateRenderBatch *pFVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStackY_3a8 [32];
  FIdentityFunctor local_377 [3];
  uint local_374;
  FSlateBatchData *local_370;
  ForElementType<TTuple<int,int>_> local_368;
  int local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_370 = this;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::MergeRenderBatches");
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId173,"Slate::MergeRenderBatches",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
               ,0xad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId173);
  }
  if ((this->RenderBatches).ArrayNum != 0) {
    local_368.SecondaryData.Data = (TTuple<int,int> *)0x0;
    local_40[0] = 0;
    local_40[1] = 100;
    FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"Slate::SortRenderBatches");
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId180,"Slate::SortRenderBatches",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                 ,0xb4);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId180);
    }
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<100,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::ForElementType<TTuple<int,int>_>_>
              (8,4,(this->RenderBatches).ArrayNum,&local_368,local_40,local_40 + 1);
    pFVar3 = local_370;
    uVar9 = 0;
    if (0 < (this->RenderBatches).ArrayNum) {
      lVar14 = 0;
      lVar10 = 0;
      do {
        uVar12 = ~uVar9 >> 0x1f;
        uVar13 = 0;
        if ((int)uVar9 < local_40[0]) {
          uVar13 = uVar12;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar6.Data = (TTuple<int,int> *)&local_368;
        if ((ForElementType<TTuple<int,int>_> *)local_368.SecondaryData.Data !=
            (ForElementType<TTuple<int,int>_> *)0x0) {
          FVar6.Data = local_368.SecondaryData.Data;
        }
        *(uint *)(((ForElementType<TTuple<int,int>_> *)FVar6.Data)->InlineData + lVar14) = uVar9;
        uVar13 = 0;
        if ((int)uVar9 < (pFVar3->RenderBatches).ArrayNum) {
          uVar13 = uVar12;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar1 = *(undefined4 *)((pFVar3->RenderBatches).AllocatorInstance.Data + lVar10 + 0x68);
        uVar13 = 0;
        if ((int)uVar9 < local_40[0]) {
          uVar13 = uVar12;
        }
        if ((uVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar6.Data = (TTuple<int,int> *)&local_368;
        if ((ForElementType<TTuple<int,int>_> *)local_368.SecondaryData.Data !=
            (ForElementType<TTuple<int,int>_> *)0x0) {
          FVar6.Data = local_368.SecondaryData.Data;
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x90;
        *(undefined4 *)(((ForElementType<TTuple<int,int>_> *)FVar6.Data)->InlineData + lVar14 + 4) =
             uVar1;
        lVar14 = lVar14 + 8;
        this = local_370;
      } while ((int)uVar9 < (pFVar3->RenderBatches).ArrayNum);
    }
    FVar6.Data = (TTuple<int,int> *)&local_368;
    if ((ForElementType<TTuple<int,int>_> *)local_368.SecondaryData.Data !=
        (ForElementType<TTuple<int,int>_> *)0x0) {
      FVar6.Data = local_368.SecondaryData.Data;
    }
    AlgoImpl::
    StableSortInternal<TTuple<int,int>,FIdentityFunctor,TDereferenceWrapper<TTuple<int,int>,_FSlateBatchData::MergeRenderBatches_::__l6::<lambda_1>_>_>
              (FVar6.Data,local_40[0],local_377[0],(<lambda_1> *)local_377);
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    iVar7 = local_40[0];
    this->NumLayers = 0;
    this->NumBatches = 0;
    if ((local_40[0] < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6.Data = (TTuple<int,int> *)&local_368;
    if ((ForElementType<TTuple<int,int>_> *)local_368.SecondaryData.Data !=
        (ForElementType<TTuple<int,int>_> *)0x0) {
      FVar6.Data = local_368.SecondaryData.Data;
    }
    pFVar11 = (FSlateRenderBatch *)0x0;
    local_374 = 0;
    this->FirstRenderBatchIndex =
         *(int *)((ForElementType<TTuple<int,int>_> *)FVar6.Data)->InlineData;
    if (0 < iVar7) {
      local_370 = (FSlateBatchData *)0x0;
      do {
        pFVar3 = local_370;
        uVar9 = local_374;
        uVar13 = 0;
        if ((int)local_374 < iVar7) {
          uVar13 = ~local_374 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar6.Data = (TTuple<int,int> *)&local_368;
        if ((ForElementType<TTuple<int,int>_> *)local_368.SecondaryData.Data !=
            (ForElementType<TTuple<int,int>_> *)0x0) {
          FVar6.Data = local_368.SecondaryData.Data;
        }
        uVar13 = *(uint *)(((ForElementType<TTuple<int,int>_> *)FVar6.Data)->InlineData +
                          (longlong)pFVar3);
        uVar12 = 0;
        if ((int)uVar13 < (this->RenderBatches).ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (FSlateRenderBatch *)
                  ((this->RenderBatches).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x90);
        if ((this_00->bIsMerged == '\0') &&
           ((((0 < this_00->NumVertices && (0 < this_00->NumIndices)) ||
             (this_00->CustomDrawer != (ICustomSlateElement *)0x0)) ||
            (this_00->ShaderType == PostProcess)))) {
          if (this_00->LayerId != -1) {
            this->NumLayers = this->NumLayers + 1;
          }
          if (pFVar11 != (FSlateRenderBatch *)0x0) {
            pFVar11->NextBatchIndex =
                 *(int *)(((ForElementType<TTuple<int,int>_> *)FVar6.Data)->InlineData +
                         (longlong)local_370);
          }
          this->NumBatches = this->NumBatches + 1;
          FillBuffersFromNewBatch(this,this_00,&this->FinalVertexData,&this->FinalIndexData);
          if (this_00->ClippingState != (FSlateClippingState *)0x0) {
            this->bIsStencilBufferRequired =
                 (bool)(this->bIsStencilBufferRequired |
                       (this_00->ClippingState->ScissorRect).bIsSet == false);
          }
          if (this_00->ShaderResource != (FSlateShaderResource *)0x0) {
            bVar16 = this->bRequiresVirtualTextureFeedback;
            bVar5 = (**(code **)(this_00->ShaderResource->_padding_ + 0x28))();
            this->bRequiresVirtualTextureFeedback = (bool)(bVar5 | bVar16);
          }
          pFVar11 = this_00;
          if ((this_00->bIsMergable != 0) && (uVar13 = uVar9 + 1, (int)uVar13 < iVar7)) {
            pFVar3 = local_370;
            do {
              uVar9 = 0;
              if ((int)uVar13 < iVar7) {
                uVar9 = ~uVar13 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar6.Data = (TTuple<int,int> *)&local_368;
              if ((ForElementType<TTuple<int,int>_> *)local_368.SecondaryData.Data !=
                  (ForElementType<TTuple<int,int>_> *)0x0) {
                FVar6.Data = local_368.SecondaryData.Data;
              }
              uVar9 = *(uint *)(((ForElementType<TTuple<int,int>_> *)FVar6.Data)->InlineData +
                               (longlong)pFVar3 + 8);
              uVar12 = 0;
              if ((int)uVar9 < (this->RenderBatches).ArrayNum) {
                uVar12 = ~uVar9 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              pFVar8 = (FSlateRenderBatch *)
                       ((this->RenderBatches).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x90);
              uVar9 = local_374;
              if (pFVar8->LayerId != this_00->LayerId) break;
              if (((((((pFVar8->bIsMerged == '\0') &&
                      (this_00->ShaderResource == pFVar8->ShaderResource)) &&
                     (this_00->DrawFlags == pFVar8->DrawFlags)) &&
                    (((this_00->ShaderType == pFVar8->ShaderType &&
                      (this_00->DrawPrimitiveType == pFVar8->DrawPrimitiveType)) &&
                     ((this_00->DrawEffects == pFVar8->DrawEffects &&
                      ((bVar16 = FShaderParams::operator==
                                           ((FShaderParams *)this_00,(FShaderParams *)pFVar8),
                       bVar16 && (this_00->InstanceData == pFVar8->InstanceData)))))))) &&
                   (this_00->InstanceCount == pFVar8->InstanceCount)) &&
                  (((this_00->InstanceOffset == pFVar8->InstanceOffset &&
                    ((pFVar8->DynamicOffset).field0_0x0._s_0.X ==
                     (this_00->DynamicOffset).field0_0x0._s_0.X)) &&
                   ((pFVar8->DynamicOffset).field0_0x0._s_0.Y ==
                    (this_00->DynamicOffset).field0_0x0._s_0.Y)))) &&
                 (((this_00->CustomDrawer == pFVar8->CustomDrawer &&
                   (this_00->SceneIndex == pFVar8->SceneIndex)) &&
                  ((this_00->ClippingState == pFVar8->ClippingState &&
                   ((CombineBatches(this,this_00,pFVar8,&this->FinalVertexData,&this->FinalIndexData
                                   ), pFVar8->NextBatchIndex != -1 &&
                    (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                        ("TestBatch.NextBatchIndex == INDEX_NONE",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Rendering\\ElementBatcher.cpp"
                                         ,0x10d,L""), bVar16)))))))) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar13 = uVar13 + 1;
              pFVar3 = (FSlateBatchData *)((longlong)pFVar3 + 8);
              uVar9 = local_374;
            } while ((int)uVar13 < iVar7);
          }
        }
        local_374 = uVar9 + 1;
        local_370 = (FSlateBatchData *)((longlong)local_370 + 8);
      } while ((int)local_374 < iVar7);
    }
    iVar7 = (this->FinalVertexData).ArrayNum;
    if (iVar7 < this->MaxNumFinalVertices) {
      iVar7 = this->MaxNumFinalVertices;
    }
    this->MaxNumFinalVertices = iVar7;
    iVar7 = (this->FinalIndexData).ArrayNum;
    if (iVar7 < this->MaxNumFinalIndices) {
      iVar7 = this->MaxNumFinalIndices;
    }
    this->MaxNumFinalIndices = iVar7;
    if ((ForElementType<TTuple<int,int>_> *)local_368.SecondaryData.Data !=
        (ForElementType<TTuple<int,int>_> *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_368.SecondaryData.Data);
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ResetData @ 14251cd10

void __thiscall FSlateBatchData::ResetData(FSlateBatchData *this)

{
  (this->RenderBatches).ArrayNum = 0;
  if ((this->RenderBatches).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x90,0x10,0,(ForAnyElementType *)this,0,&(this->RenderBatches).ArrayMax);
  }
  (this->UncachedSourceBatchIndices).ArrayNum = 0;
  if ((this->UncachedSourceBatchIndices).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (4,4,0,&(this->UncachedSourceBatchIndices).AllocatorInstance,0,
               &(this->UncachedSourceBatchIndices).ArrayMax);
  }
  (this->UncachedSourceBatchVertices).ArrayNum = 0;
  if ((this->UncachedSourceBatchVertices).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (0x2c,4,0,&(this->UncachedSourceBatchVertices).AllocatorInstance,0,
               &(this->UncachedSourceBatchVertices).ArrayMax);
  }
  (this->FinalIndexData).ArrayNum = 0;
  if ((this->FinalIndexData).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (4,4,0,&(this->FinalIndexData).AllocatorInstance,0,&(this->FinalIndexData).ArrayMax);
  }
  (this->FinalVertexData).ArrayNum = 0;
  if ((this->FinalVertexData).ArrayMax < 0) {
    UE::Core::Private::
    ReallocTo<0,FSlateStatTrackingMemoryAllocator<FRenderingBufferStatTracker>::ForAnyElementType>
              (0x2c,4,0,&(this->FinalVertexData).AllocatorInstance,0,
               &(this->FinalVertexData).ArrayMax);
  }
  this->FirstRenderBatchIndex = -1;
  this->NumLayers = 0;
  this->NumBatches = 0;
  this->bIsStencilBufferRequired = false;
  this->bRequiresVirtualTextureFeedback = false;
  return;
}

