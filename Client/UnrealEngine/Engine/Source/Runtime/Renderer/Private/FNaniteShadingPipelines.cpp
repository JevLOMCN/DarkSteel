// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// FNaniteShadingPipelines @ 145036ff0

FNaniteShadingPipelines * __thiscall
FNaniteShadingPipelines::FNaniteShadingPipelines(FNaniteShadingPipelines *this)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  ulong64 uVar5;
  
  this->bBuildCommands = true;
  (this->CombinedRelevance)._padding_ = 0;
  *(undefined8 *)&(this->CombinedRelevance).field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&(this->CombinedRelevance)._padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  (this->CombinedRelevance).bRenderInMainPass = 1;
  (this->PipelineBins).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->PipelineBins).NumBits = 0;
  (this->PipelineBins).MaxBits = 0x80;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
              *)&this->PipelineMap);
  (this->ShadingIdList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShadingIdList).ArrayNum = 0;
  (this->ShadingIdList).ArrayMax = 0;
  this->bBuildIdList = true;
  iVar4 = (this->PipelineBins).MaxBits;
  if (iVar4 < 0x100) {
    uVar3 = iVar4 + 0x1fU >> 5;
    if (uVar3 < 5) {
      uVar3 = 0;
    }
    uVar5 = 0x6c;
    if (uVar3 == 0) {
      uVar5 = 0x20;
    }
    uVar5 = FMemory::QuantizeSize(uVar5,0);
    iVar4 = (int)(uVar5 >> 2);
    if (iVar4 < 8) {
      iVar4 = 0x7fffffff;
    }
    (this->PipelineBins).MaxBits = iVar4 << 5;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&this->PipelineBins,(this->PipelineBins).NumBits);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::Reserve((TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
             *)&this->PipelineMap,0x100);
  return this;
}

// ~FNaniteShadingPipelines @ 145038860

void __thiscall FNaniteShadingPipelines::~FNaniteShadingPipelines(FNaniteShadingPipelines *this)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  int iVar4;
  undefined1 *puVar5;
  
  puVar5 = &(this->PipelineMap).field_0x54;
  (this->PipelineBins).NumBits = 0;
  *(undefined4 *)&(this->PipelineMap).field_0x50 = 0;
  if (*(int *)puVar5 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,1,(ForElementType<unsigned_int> *)&(this->PipelineMap).field_0x40,0,(int *)puVar5
              );
  }
  iVar4 = *(int *)&(this->PipelineMap).field_0x50;
  if (iVar4 == *(int *)puVar5) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)&(this->PipelineMap).field_0x40,
                       (int *)puVar5);
  }
  puVar1 = &(this->PipelineMap).field_0x58;
  *(int *)&(this->PipelineMap).field_0x50 = iVar4 + 1;
  puVar5 = &(this->PipelineMap).field_0x6c;
  *(undefined4 *)&(this->PipelineMap).field_0x68 = 0;
  if (*(int *)puVar5 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,(ForElementType<Experimental::FHashType> *)puVar1,0,(int *)puVar5);
  }
  iVar4 = *(int *)&(this->PipelineMap).field_0x68;
  if (iVar4 == *(int *)&(this->PipelineMap).field_0x6c) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,(ForElementType<Experimental::FHashType> *)puVar1,(int *)puVar5);
  }
  *(int *)&(this->PipelineMap).field_0x68 = iVar4 + 1;
  puVar5 = *(undefined1 **)&(this->PipelineMap).field_0x60;
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = puVar1;
  }
  DefaultConstructItems<Experimental::FHashType,int>(puVar5 + (longlong)iVar4 * 4,1);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)&this->PipelineMap);
  *(undefined8 *)&(this->PipelineMap).field_0x70 = 0;
  pFVar2 = (this->ShadingIdList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
              *)&this->PipelineMap);
  FVar3 = (this->PipelineBins).AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  return;
}

// AllocateBin @ 14504acb0

ushort __thiscall FNaniteShadingPipelines::AllocateBin(FNaniteShadingPipelines *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar4 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit(&this->PipelineBins,0);
  if (uVar4 == 0xffffffff) {
    uVar4 = TBitArray<FDefaultBitArrayAllocator>::Add(&this->PipelineBins,true);
  }
  if (((uVar4 & 0xffff) != uVar4) || (0xffff < (this->PipelineBins).NumBits)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("int32(uint16(BinIndex)) == BinIndex && PipelineBins.Num() <= int32(((uint16) 0xffff))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x8db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (ushort)uVar4;
}

// BuildIdList @ 14504bac0

void __thiscall FNaniteShadingPipelines::BuildIdList(FNaniteShadingPipelines *this)

{
  int *piVar1;
  TArray<Experimental::FHashElementId,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FIteratorState FVar7;
  undefined4 extraout_var;
  uint uVar8;
  int local_res8 [2];
  undefined1 local_res10 [8];
  int local_28 [4];
  
  if (this->bBuildIdList != false) {
    uVar8 = *(int *)&(this->PipelineMap).field_0x8 - *(int *)&(this->PipelineMap).field_0x38;
    pTVar2 = &this->ShadingIdList;
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    piVar1 = &(this->ShadingIdList).ArrayMax;
    (this->ShadingIdList).ArrayNum = 0;
    if ((this->ShadingIdList).ArrayMax < (int)uVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar8,&pTVar2->AllocatorInstance,0,piVar1);
    }
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
    ::FData::Next((FData *)&this->PipelineMap,(FIteratorState)(uint)local_res8);
    while (local_res8[0] != *(int *)&(this->PipelineMap).field_0x8) {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      local_28[0] = local_res8[0];
      if ((pFVar3 <= (FScriptContainerElement *)local_28) &&
         ((FScriptContainerElement *)local_28 < pFVar3 + (longlong)*piVar1 * 4)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = (this->ShadingIdList).ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->ShadingIdList).ArrayNum = iVar6 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_28[0];
      FVar7 = Experimental::RobinHoodHashTable_Private::
              TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
              ::FData::Next((FData *)&this->PipelineMap,(uint)local_res10);
      local_res8[0] = *(int *)CONCAT44(extraout_var,FVar7.Index);
    }
    this->bBuildIdList = false;
  }
  return;
}

// ComputeRelevance @ 14504c960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNaniteShadingPipelines::ComputeRelevance(FNaniteShadingPipelines *this,Type param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TArray<Experimental::FHashElementId,TSizedDefaultAllocator<32>_> *pTVar4;
  atomic<unsigned_int> aVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FIteratorState FVar12;
  atomic<unsigned_int> aVar13;
  undefined4 extraout_var;
  TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *pTVar14;
  UMaterialInterface *this_00;
  FMaterialRelevance FVar15;
  uint uVar16;
  ulonglong uVar17;
  ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
  FVar18;
  FPrimitiveViewRelevance *pFVar19;
  atomic<unsigned_int> aVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
  FVar24;
  longlong lVar25;
  undefined1 auStackY_148 [32];
  <lambda_1> local_f8 [4];
  int local_f4 [4];
  undefined1 uStack_e4;
  undefined2 uStack_e3;
  undefined1 uStack_e1;
  undefined8 local_e0;
  int local_d8;
  undefined1 local_d4 [4];
  FPrimitiveViewRelevance *local_d0;
  FNaniteShadingPipelines *local_c8;
  Type TStack_c0;
  undefined4 uStack_bc;
  TArrayView<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext,int>
  local_b8;
  undefined1 local_a8 [16];
  <lambda_1> local_98;
  ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
  local_88;
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uStack_e4 = 0;
  local_f4[3] = 0x80;
  local_d0 = &this->CombinedRelevance;
  pTVar4 = &this->ShadingIdList;
  local_f4[1] = 0;
  lVar25 = 8;
  uStack_e3 = 0;
  uStack_e1 = 0;
  local_f4[2] = 4;
  local_d0->_padding_ = 0x400000000;
  *(undefined8 *)&(this->CombinedRelevance).field_0x8 = 0x80;
  local_88.SecondaryData =
       (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
        )0x0;
  local_40 = 0;
  local_3c = 8;
  if (this->bBuildIdList != false) {
    uVar22 = *(int *)&(this->PipelineMap).field_0x8 - *(int *)&(this->PipelineMap).field_0x38;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    piVar1 = &(this->ShadingIdList).ArrayMax;
    (this->ShadingIdList).ArrayNum = 0;
    if ((this->ShadingIdList).ArrayMax < (int)uVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22,&pTVar4->AllocatorInstance,0,piVar1);
    }
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
    ::FData::Next((FData *)&this->PipelineMap,(FIteratorState)(uint)&local_d8);
    while (local_d8 != *(int *)&(this->PipelineMap).field_0x8) {
      pFVar6 = (pTVar4->AllocatorInstance).Data;
      local_f4[0] = local_d8;
      if (((pFVar6 <= (FScriptContainerElement *)local_f4) &&
          ((FScriptContainerElement *)local_f4 < pFVar6 + (longlong)*piVar1 * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = (this->ShadingIdList).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar4->AllocatorInstance,piVar1);
      }
      (this->ShadingIdList).ArrayNum = iVar11 + 1;
      *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_f4[0];
      FVar12 = Experimental::RobinHoodHashTable_Private::
               TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
               ::FData::Next((FData *)&this->PipelineMap,(uint)local_d4);
      local_d8 = *(int *)CONCAT44(extraout_var,FVar12.Index);
    }
    this->bBuildIdList = false;
  }
  pFVar19 = &this->CombinedRelevance;
  if ((this->ShadingIdList).ArrayNum < 1) goto LAB_14504ced9;
  puVar3 = &(this->CombinedRelevance).field_0x8;
  (this->CombinedRelevance).bStaticRelevance = 1;
  (this->CombinedRelevance).bUsesLightingChannels = 0;
  (this->CombinedRelevance).bRenderInMainPass = 1;
  (this->CombinedRelevance).bRenderCustomDepth = 0;
  (this->CombinedRelevance).bShadowRelevance = 1;
  (this->CombinedRelevance).bDrawRelevance = 1;
  if ((GNaniteCacheRelevanceParallel == 0) ||
     (bVar9 = FApp::ShouldUseThreadingForPerformance(), !bVar9)) {
    pFVar21 = (pTVar4->AllocatorInstance).Data;
    local_e0 = 0;
    iVar11 = (this->ShadingIdList).ArrayNum;
    pFVar6 = pFVar21 + (longlong)iVar11 * 4;
    while( true ) {
      if ((this->ShadingIdList).ArrayNum != iVar11) {
        local_f8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<Experimental::FHashElementId,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_f8);
      }
      if (pFVar21 == pFVar6) break;
      pTVar14 = Experimental::RobinHoodHashTable_Private::
                TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                ::FData::Get((FData *)&this->PipelineMap,*(uint *)pFVar21);
      lVar25 = *(longlong *)&(pTVar14->Pair).field_0x58;
      if (((lVar25 != 0) && (plVar7 = *(longlong **)(lVar25 + 0x20), plVar7 != (longlong *)0x0)) &&
         ((*(longlong *)(*(longlong *)&(pTVar14->Pair).field_0x58 + 0x28) != 0 &&
          (this_00 = (UMaterialInterface *)(**(code **)(*plVar7 + 0x40))(),
          this_00 != (UMaterialInterface *)0x0)))) {
        FVar15 = UMaterialInterface::GetRelevance_Concurrent(this_00,(EShaderPlatform)local_a8);
        uVar17 = local_e0 | *(ulonglong *)FVar15.field0_0x0;
        uVar22 = *(uint *)FVar15.field0_0x0 >> 0x12;
        if (((byte)(*(uint *)FVar15.field0_0x0 >> 0x12) & 0x3f) <
            ((byte)((uint)local_e0 >> 0x12) & 0x3f)) {
          uVar22 = (uint)local_e0 >> 0x12;
        }
        uVar16 = (uint)uVar17;
        local_e0 = CONCAT44((int)(uVar17 >> 0x20),(uVar22 << 0x12 ^ uVar16) & 0xfc0000 ^ uVar16);
      }
      pFVar21 = pFVar21 + 4;
    }
    FVar18 = (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
              )&local_e0;
    pFVar19 = local_d0;
  }
  else {
    uVar22 = 1;
    aVar5 = (atomic<unsigned_int>)(this->ShadingIdList).ArrayNum;
    local_c8 = this;
    TStack_c0 = param_1;
    if (0 < (int)aVar5) {
      bVar9 = FApp::ShouldUseThreadingForPerformance();
      if (bVar9) {
LAB_14504cb7c:
        bVar9 = true;
      }
      else {
        bVar10 = FForkProcessHelper::IsForkedMultithreadInstance();
        bVar9 = false;
        if (bVar10) goto LAB_14504cb7c;
      }
      aVar13 = (atomic<unsigned_int>)0x0;
      if (((1 < (int)aVar5) && (bVar9)) &&
         (aVar13 = aVar5, (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar5)) {
        aVar13 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
      }
      bVar9 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                        ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
      aVar20 = (atomic<unsigned_int>)((int)aVar13 + 1);
      if (bVar9) {
        aVar20 = aVar13;
      }
      aVar13 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
      if ((int)aVar20 < (int)aVar13) {
        aVar13 = aVar20;
      }
      aVar20 = (atomic<unsigned_int>)0x1;
      if (1 < (int)aVar13) {
        aVar20 = aVar13;
      }
      if (0x7fffffff < local_3c) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNaniteShadingPipelines::ComputeRelevance_::__l2::FRelevanceContext>_>
                  (8,8,0,&local_88,0,(int *)&local_3c);
      }
      iVar11 = UE::Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNaniteShadingPipelines::ComputeRelevance_::__l2::FRelevanceContext>_>
                         (8,8,(int)aVar20,&local_88,&local_40,(int *)&local_3c);
      FVar18 = (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
                )&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
           )0x0) {
        FVar18 = local_88.SecondaryData;
      }
      DefaultConstructItems<_FNaniteShadingPipelines::ComputeRelevance_::__l2::FRelevanceContext,int>
                ((FMaterialRelevance_u_0 *)((longlong)FVar18 + (longlong)iVar11 * 8),(int)aVar20);
      local_b8.ArrayNum = local_40;
      local_b8.DataPtr = (FRelevanceContext *)&local_88;
      if (local_88.SecondaryData !=
          (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
           )0x0) {
        local_b8.DataPtr = (FRelevanceContext *)local_88.SecondaryData;
      }
      if ((local_40 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_98._12_4_ = uStack_bc;
      local_98.InFeatureLevel = TStack_c0;
      local_98.__this = local_c8;
      ParallelForImpl::
      ParallelForInternal<_FNaniteShadingPipelines::ComputeRelevance_::__l8::<lambda_1>,_ParallelForWithTaskContext<_FNaniteShadingPipelines::ComputeRelevance_::__l2::FRelevanceContext,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,_FNaniteShadingPipelines::ComputeRelevance_::__l8::<lambda_1>_>_::__l5::<lambda_1>,_FNaniteShadingPipelines::ComputeRelevance_::__l2::FRelevanceContext>
                (L"ParallelFor Task",(int)aVar5,1,&local_98,local_f8[0],None,&local_b8);
    }
    if (1 < local_40) {
      do {
        uVar16 = 0;
        if ((int)uVar22 < local_40) {
          uVar16 = ~uVar22 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar18 = (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
                  )&local_88;
        if (local_88.SecondaryData !=
            (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
             )0x0) {
          FVar18 = local_88.SecondaryData;
        }
        if ((local_40 < 1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FVar24 = (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
                  )&local_88;
        if (local_88.SecondaryData !=
            (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
             )0x0) {
          FVar24 = local_88.SecondaryData;
        }
        uVar16 = *(uint *)FVar24;
        *(ulong64 *)FVar24 =
             *(FMaterialRelevance_u_0 *)FVar24 | *(ulonglong *)((longlong)FVar18 + lVar25);
        uVar23 = *(uint *)((longlong)FVar18 + lVar25) >> 0x12;
        if (((byte)uVar23 & 0x3f) < ((byte)(uVar16 >> 0x12) & 0x3f)) {
          uVar23 = uVar16 >> 0x12;
        }
        uVar22 = uVar22 + 1;
        lVar25 = lVar25 + 8;
        *(uint *)FVar24 =
             (uVar23 << 0x12 ^ (uint)*(ulonglong *)FVar24) & 0xfc0000 ^ (uint)*(ulonglong *)FVar24;
      } while ((int)uVar22 < local_40);
    }
    if ((local_40 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    FVar18 = (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
              )&local_88;
    if (local_88.SecondaryData !=
        (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
         )0x0) {
      FVar18 = local_88.SecondaryData;
    }
  }
  FMaterialRelevance::SetPrimitiveViewRelevance((FMaterialRelevance *)FVar18,pFVar19);
LAB_14504ced9:
  if (local_88.SecondaryData !=
      (ForElementType<_public:_void___cdecl_FNaniteShadingPipelines::ComputeRelevance(ERHIFeatureLevel::Type)_::_2_::FRelevanceContext>
       )0x0) {
    FMemory::Free((void *)local_88.SecondaryData);
  }
  return;
}

// GetBinCount @ 145061dc0

uint __thiscall FNaniteShadingPipelines::GetBinCount(FNaniteShadingPipelines *this)

{
  int iVar1;
  
  iVar1 = TBitArray<FDefaultBitArrayAllocator>::FindLast(&this->PipelineBins,true);
  return iVar1 + 1;
}

// GetIdList @ 145063970

TArrayView<Experimental::FHashElementId_const_,int> * __thiscall
FNaniteShadingPipelines::GetIdList
          (FNaniteShadingPipelines *this,
          TArrayView<Experimental::FHashElementId_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<Experimental::FHashElementId_const_,int> *pTVar4;
  
  if (this->bBuildIdList != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bBuildIdList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                       ,0x92b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<Experimental::FHashElementId_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  iVar1 = (this->ShadingIdList).ArrayNum;
  __return_storage_ptr__->DataPtr = (FHashElementId *)(this->ShadingIdList).AllocatorInstance.Data;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<Experimental::FHashElementId_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// IsBinAllocated @ 14506c2b0

bool __thiscall
FNaniteShadingPipelines::IsBinAllocated(FNaniteShadingPipelines *this,ushort param_1)

{
  ForElementType<unsigned_int> FVar1;
  
  if ((int)(uint)param_1 < (this->PipelineBins).NumBits) {
    FVar1 = (this->PipelineBins).AllocatorInstance.SecondaryData;
    if (FVar1 == (ForElementType<unsigned_int>)0x0) {
      FVar1 = (ForElementType<unsigned_int>)&this->PipelineBins;
    }
    return (*(uint *)((longlong)FVar1 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0
    ;
  }
  return false;
}

// Register @ 1450725f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FNaniteShadingBin __thiscall
FNaniteShadingPipelines::Register(FNaniteShadingPipelines *this,FNaniteShadingPipeline *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  FNaniteShadingBin FVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FNaniteShadingPipeline *in_R8;
  uint local_res10 [2];
  TReferenceControllerBase<1> *local_68;
  FSharedReferencer<1> FStack_60;
  bool local_58 [8];
  TReferenceControllerBase<1> *pTStack_50;
  undefined4 local_48;
  undefined4 local_44;
  
  *(undefined4 *)&param_1->BasePassData = 0xffffffff;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  *(undefined2 *)&(param_1->BasePassData).field_0x4 = 0xffff;
  local_44 = 0xffff;
  local_58[0] = false;
  local_58[1] = false;
  local_58[2] = false;
  local_58[3] = false;
  local_58[4] = false;
  local_58[5] = false;
  local_58[6] = false;
  local_58[7] = false;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  local_48 = 0;
  uVar4 = FNaniteShadingPipeline::GetPipelineHash(in_R8);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::FindOrUpdateIdByHashInternal<0,FNaniteShadingPipeline_const_&,FNaniteShadingEntry>
            ((TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
              *)&this->PipelineMap,(FHashType)(uint)local_res10,
             (FNaniteShadingPipeline *)(ulonglong)(uVar4 & 0x7fffffff),(FNaniteShadingEntry *)in_R8,
             local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  *(uint *)&param_1->BasePassData = local_res10[0];
  pTVar5 = Experimental::RobinHoodHashTable_Private::
           TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
           ::FData::Get((FData *)&this->PipelineMap,local_res10[0]);
  puVar1 = &(pTVar5->Pair).field_0x58;
  if (*(int *)&(pTVar5->Pair).field_0x68 == 0) {
    pTVar6 = ::operator_new(0x68);
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      local_68 = ___xmm_00000000000000000000000000000010;
      pTVar8 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_60.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar6->SharedReferenceCount = (atomic<int>)0x1;
      pTVar6->WeakReferenceCount = (atomic<int>)0x1;
      pTVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFNaniteShadingPipeline___00_SharedPointerInternals__6B_
      ;
      FNaniteShadingPipeline::FNaniteShadingPipeline((FNaniteShadingPipeline *)(pTVar6 + 1),in_R8);
      pTVar8 = pTVar6 + 1;
      if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          FVar7 = (FNaniteShadingBin)(*pcVar2)();
          return FVar7;
        }
      }
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      FStack_60.ReferenceController = pTVar6;
      pTVar9 = pTVar6;
      local_68 = pTVar8;
    }
    if ((TReferenceControllerBase<1> **)puVar1 != &local_68) {
      *(TReferenceControllerBase<1> **)puVar1 = pTVar8;
      local_68 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(pTVar5->Pair).field_0x60,&FStack_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    uVar4 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit(&this->PipelineBins,0);
    if (uVar4 == 0xffffffff) {
      uVar4 = TBitArray<FDefaultBitArrayAllocator>::Add(&this->PipelineBins,true);
    }
    if (((uVar4 & 0xffff) != uVar4) || (0xffff < (this->PipelineBins).NumBits)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("int32(uint16(BinIndex)) == BinIndex && PipelineBins.Num() <= int32(((uint16) 0xffff))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                         ,0x8db,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar7 = (FNaniteShadingBin)(*pcVar2)();
        return FVar7;
      }
    }
    *(short *)&(pTVar5->Pair).field_0x6c = (short)uVar4;
    this->bBuildIdList = true;
  }
  puVar1 = &(pTVar5->Pair).field_0x68;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  *(undefined2 *)&(param_1->BasePassData).field_0x4 = *(undefined2 *)&(pTVar5->Pair).field_0x6c;
  return (FNaniteShadingBin)param_1;
}

// ReleaseBin @ 145073020

void __thiscall FNaniteShadingPipelines::ReleaseBin(FNaniteShadingPipelines *this,ushort param_1)

{
  ForElementType<unsigned_int> *pFVar1;
  uint *puVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<unsigned_int> FVar5;
  byte bVar6;
  
  pFVar1 = &(this->PipelineBins).AllocatorInstance.SecondaryData;
  bVar6 = (byte)param_1 & 0x1f;
  if ((int)(uint)param_1 < (this->PipelineBins).NumBits) {
    FVar5 = *pFVar1;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)&this->PipelineBins;
    }
    if ((*(uint *)((longlong)FVar5 + (ulonglong)(param_1 >> 5) * 4) & 1 << bVar6) != 0)
    goto LAB_1450730a7;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsBinAllocated(BinIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                     ,0x8e1,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1450730a7:
  if ((int)(uint)param_1 < (this->PipelineBins).NumBits) {
    FVar5 = *pFVar1;
    if (FVar5 == (ForElementType<unsigned_int>)0x0) {
      FVar5 = (ForElementType<unsigned_int>)&this->PipelineBins;
    }
    puVar2 = (uint *)((longlong)FVar5 + (ulonglong)(param_1 >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << bVar6);
  }
  return;
}

// Unregister @ 14507f270

void __thiscall
FNaniteShadingPipelines::Unregister(FNaniteShadingPipelines *this,FNaniteShadingBin *param_1)

{
  undefined1 *puVar1;
  ForElementType<unsigned_int> *pFVar2;
  uint *puVar3;
  ushort uVar4;
  FHashElementId FVar5;
  code *pcVar6;
  bool bVar7;
  TKeyValue<FNaniteShadingPipeline,FNaniteShadingEntry> *pTVar8;
  ForElementType<unsigned_int> FVar9;
  byte bVar10;
  
  FVar5.Index = param_1->BinId;
  if ((FVar5.Index == -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShadingBinId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                         ,0x90c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar8 = Experimental::RobinHoodHashTable_Private::
           TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
           ::FData::Get((FData *)&this->PipelineMap,FVar5.Index);
  if ((*(int *)&(pTVar8->Pair).field_0x68 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShadingEntry.ReferenceCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                         ,0x910,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar1 = &(pTVar8->Pair).field_0x68;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (*(int *)puVar1 != 0) {
    return;
  }
  uVar4 = *(ushort *)&(pTVar8->Pair).field_0x6c;
  bVar10 = (byte)uVar4 & 0x1f;
  pFVar2 = &(this->PipelineBins).AllocatorInstance.SecondaryData;
  if ((int)(uint)uVar4 < (this->PipelineBins).NumBits) {
    FVar9 = *pFVar2;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)&this->PipelineBins;
    }
    if ((*(uint *)((longlong)FVar9 + (ulonglong)(uVar4 >> 5) * 4) & 1 << bVar10) != 0)
    goto LAB_14507f36c;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsBinAllocated(BinIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShading.cpp"
                     ,0x8e1,L"");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
LAB_14507f36c:
  if ((int)(uint)uVar4 < (this->PipelineBins).NumBits) {
    FVar9 = *pFVar2;
    if (FVar9 == (ForElementType<unsigned_int>)0x0) {
      FVar9 = (ForElementType<unsigned_int>)&this->PipelineBins;
    }
    puVar3 = (uint *)((longlong)FVar9 + (ulonglong)(uVar4 >> 5) * 4);
    *puVar3 = *puVar3 & ~(1 << bVar10);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
  ::RemoveByElementId((TRobinHoodHashTable<FNaniteShadingPipeline,FNaniteShadingEntry,FNaniteShadingEntryKeyFuncs,TSizedDefaultAllocator<32>_>
                       *)&this->PipelineMap,FVar5);
  this->bBuildIdList = true;
  return;
}

