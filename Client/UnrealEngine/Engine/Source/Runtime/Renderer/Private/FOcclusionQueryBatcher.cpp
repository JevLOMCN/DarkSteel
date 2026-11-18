// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// FOcclusionQueryBatcher @ 145477830

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FOcclusionQueryBatcher * __thiscall
FOcclusionQueryBatcher::FOcclusionQueryBatcher
          (FOcclusionQueryBatcher *this,FSceneViewState *param_1,uint param_2,uint param_3)

{
  FFrameBasedOcclusionQueryPool *pFVar1;
  
  this->MaxBatchedPrimitives = param_2;
  (this->BatchOcclusionQueries).AllocatorInstance.Data = (FOcclusionBatch *)0x0;
  (this->BatchOcclusionQueries).ArrayNum = 0;
  (this->BatchOcclusionQueries).ArrayMax = 0;
  this->CurrentBatchOcclusionQuery = (FOcclusionBatch *)0x0;
  pFVar1 = &param_1->PrimitiveOcclusionQueryPool;
  if (param_1 == (FSceneViewState *)0x0) {
    pFVar1 = (FFrameBasedOcclusionQueryPool *)0x0;
  }
  this->NumBatchedPrimitives = 0;
  this->OcclusionQueryPool = pFVar1;
  this->NumInstances = param_3;
  return this;
}

// ~FOcclusionQueryBatcher @ 145479300

void __thiscall FOcclusionQueryBatcher::~FOcclusionQueryBatcher(FOcclusionQueryBatcher *this)

{
  FOcclusionBatch *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->BatchOcclusionQueries).ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!BatchOcclusionQueries.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                       ,0x1ce,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->BatchOcclusionQueries).AllocatorInstance.Data;
  if (pFVar1 != (FOcclusionBatch *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar1);
    return;
  }
  return;
}

// BatchPrimitive @ 145494cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHIRenderQuery * __thiscall
FOcclusionQueryBatcher::BatchPrimitive
          (FOcclusionQueryBatcher *this,TVector<double> *param_1,TVector<double> *param_2,
          FGlobalDynamicVertexBuffer *param_3)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float *pfVar5;
  code *pcVar6;
  FVertexBuffer *pFVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  FRHIRenderQuery *pFVar11;
  FGlobalDynamicVertexBufferAllocation *pFVar12;
  uint uVar13;
  FOcclusionBatch *pFVar14;
  FOcclusionBatch *pFVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  FGlobalDynamicVertexBufferAllocation local_78 [4];
  
  if ((this->CurrentBatchOcclusionQuery == (FOcclusionBatch *)0x0) ||
     (this->MaxBatchedPrimitives <= this->NumBatchedPrimitives)) {
    if ((this->OcclusionQueryPool == (FFrameBasedOcclusionQueryPool *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("OcclusionQueryPool",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                           ,0x1fb,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHIRenderQuery *)(*pcVar6)();
      return pFVar11;
    }
    uVar10 = (this->BatchOcclusionQueries).ArrayNum;
    piVar1 = &(this->BatchOcclusionQueries).ArrayMax;
    if (uVar10 == *piVar1) {
      uVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQueryBatcher::FOcclusionBatch>_>
                         (0x820,(ForElementType<FOcclusionQueryBatcher::FOcclusionBatch> *)this,
                          piVar1);
    }
    pFVar15 = (FOcclusionBatch *)0x0;
    (this->BatchOcclusionQueries).ArrayNum = uVar10 + 1;
    uVar13 = 0;
    if ((int)uVar10 < (int)(uVar10 + 1)) {
      uVar13 = ~uVar10 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHIRenderQuery *)(*pcVar6)();
      return pFVar11;
    }
    pFVar14 = (this->BatchOcclusionQueries).AllocatorInstance.Data + (int)uVar10;
    if (pFVar14 != (FOcclusionBatch *)0x0) {
      (pFVar14->VertexAllocation).Buffer = (uchar *)0x0;
      (pFVar14->VertexAllocation).VertexBuffer = (FVertexBuffer *)0x0;
      (pFVar14->VertexAllocation).VertexOffset = 0;
      pFVar15 = pFVar14;
    }
    this->CurrentBatchOcclusionQuery = pFVar15;
    pFVar11 = FFrameBasedOcclusionQueryPool::AllocateQuery(this->OcclusionQueryPool);
    this->CurrentBatchOcclusionQuery->Query = pFVar11;
    pFVar12 = FGlobalDynamicVertexBuffer::Allocate
                        (param_3,local_78,this->MaxBatchedPrimitives * 0x60);
    pFVar7 = pFVar12->VertexBuffer;
    uVar10 = pFVar12->VertexOffset;
    uVar8 = *(undefined4 *)&pFVar12->field_0x14;
    pFVar15 = this->CurrentBatchOcclusionQuery;
    (pFVar15->VertexAllocation).Buffer = pFVar12->Buffer;
    (pFVar15->VertexAllocation).VertexBuffer = pFVar7;
    (pFVar15->VertexAllocation).VertexOffset = uVar10;
    *(undefined4 *)&(pFVar15->VertexAllocation).field_0x14 = uVar8;
    if (((this->CurrentBatchOcclusionQuery->VertexAllocation).Buffer == (uchar *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBatchOcclusionQuery->VertexAllocation.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneOcclusion.cpp"
                           ,0x1ff,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FRHIRenderQuery *)(*pcVar6)();
      return pFVar11;
    }
    this->NumBatchedPrimitives = 0;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  pFVar15 = this->CurrentBatchOcclusionQuery;
  fVar19 = (float)(dVar3 - (param_2->field0_0x0)._s_0.X);
  pfVar5 = (float *)(pFVar15->VertexAllocation).Buffer;
  fVar20 = (float)(dVar4 - (param_2->field0_0x0)._s_0.Y);
  fVar21 = (float)(dVar2 - (param_2->field0_0x0)._s_0.Z);
  fVar16 = (float)(dVar2 + (param_2->field0_0x0)._s_0.Z);
  fVar18 = (float)(dVar3 + (param_2->field0_0x0)._s_0.X);
  fVar17 = (float)(dVar4 + (param_2->field0_0x0)._s_0.Y);
  *pfVar5 = fVar19;
  pfVar5[1] = fVar20;
  pfVar5[2] = fVar21;
  pfVar5[3] = fVar19;
  pfVar5[4] = fVar20;
  pfVar5[6] = fVar19;
  pfVar5[8] = fVar21;
  pfVar5[9] = fVar19;
  pfVar5[0xd] = fVar20;
  pfVar5[0xe] = fVar21;
  pfVar5[0x10] = fVar20;
  pfVar5[0x14] = fVar21;
  pfVar5[5] = fVar16;
  pfVar5[0xb] = fVar16;
  pfVar5[0x11] = fVar16;
  pfVar5[0x17] = fVar16;
  pfVar5[7] = fVar17;
  pfVar5[10] = fVar17;
  pfVar5[0xc] = fVar18;
  pfVar5[0xf] = fVar18;
  pfVar5[0x12] = fVar18;
  pfVar5[0x13] = fVar17;
  pfVar5[0x15] = fVar18;
  pfVar5[0x16] = fVar17;
  (pFVar15->VertexAllocation).Buffer = (uchar *)(pfVar5 + 0x18);
  this->NumBatchedPrimitives = this->NumBatchedPrimitives + 1;
  return this->CurrentBatchOcclusionQuery->Query;
}

// Flush @ 1454a5e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FOcclusionQueryBatcher::Flush(FOcclusionQueryBatcher *this,FRHICommandList *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  FOcclusionBatch *pFVar5;
  undefined8 uVar6;
  FName FVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  IRHICommandContext *pIVar13;
  undefined8 *puVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_OcclusionQueries> FVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ulonglong uVar17;
  int iVar18;
  uchar auVar19 [8];
  uint uVar20;
  longlong local_res20;
  ulonglong in_stack_ffffffffffffff60;
  longlong local_68;
  FName local_58;
  FName local_50;
  FStatMessage local_48;
  
  uVar9 = GOcclusionQueryIndexBuffer._32_8_;
  iVar2 = (this->BatchOcclusionQueries).ArrayNum;
  local_68 = (longlong)iVar2;
  if (iVar2 != 0) {
    uVar20 = 0;
    if (0 < iVar2) {
      local_res20 = 0;
      do {
        iVar3 = (this->BatchOcclusionQueries).ArrayNum;
        uVar17 = (ulonglong)iVar3;
        uVar11 = 0;
        if ((int)uVar20 < iVar3) {
          uVar11 = ~uVar20 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), in_stack_ffffffffffffff60 = uVar17, bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (this->BatchOcclusionQueries).AllocatorInstance.Data;
        uVar4 = *(undefined4 *)((longlong)&(pFVar5->VertexAllocation).VertexOffset + local_res20);
        uVar6 = *(undefined8 *)
                 (*(longlong *)((longlong)&(pFVar5->VertexAllocation).VertexBuffer + local_res20) +
                 0x20);
        lVar12 = 0x18;
        if (uVar20 == iVar2 - 1U) {
          lVar12 = 0x1c;
        }
        iVar3 = *(int *)((longlong)&(this->BatchOcclusionQueries).AllocatorInstance.Data + lVar12);
        (**(code **)(GDynamicRHI->_padding_ + 0x278))
                  (GDynamicRHI,param_1,*(undefined8 *)((longlong)&pFVar5->Query + local_res20));
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar14 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar14;
          *(undefined8 **)&param_1->field_0x30 = puVar14 + 1;
          puVar14[1] = 0;
          *puVar14 = &___7FRHICommandSetStreamSource__6B_;
          *(undefined4 *)(puVar14 + 2) = 0;
          puVar14[3] = uVar6;
          *(undefined4 *)(puVar14 + 4) = uVar4;
        }
        else {
          pIVar13 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
          (**(code **)(pIVar13->_padding_ + 0x198))(pIVar13,0,uVar6,uVar4);
        }
        uVar11 = this->NumInstances;
        iVar18 = iVar3 * 0xc;
        iVar3 = iVar3 * 8;
        if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
          puVar14 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
          *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
          **(undefined8 **)&param_1->field_0x30 = puVar14;
          *(undefined8 **)&param_1->field_0x30 = puVar14 + 1;
          puVar14[1] = 0;
          *puVar14 = &___7FRHICommandDrawIndexedPrimitive__6B_;
          puVar14[2] = uVar9;
          puVar14[3] = 0;
          *(int *)(puVar14 + 4) = iVar3;
          *(undefined4 *)((longlong)puVar14 + 0x24) = 0;
          *(int *)(puVar14 + 5) = iVar18;
          *(uint *)((longlong)puVar14 + 0x2c) = uVar11;
        }
        else {
          pIVar13 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
          in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffffff00000000;
          (**(code **)(pIVar13->_padding_ + 0x1f8))
                    (pIVar13,uVar9,0,0,iVar3,in_stack_ffffffffffffff60,iVar18,uVar11);
        }
        (**(code **)(GDynamicRHI->_padding_ + 0x280))(GDynamicRHI,param_1);
        uVar20 = uVar20 + 1;
        local_res20 = local_res20 + 0x20;
        local_68 = local_68 + -1;
      } while (local_68 != 0);
    }
    auVar19 = (uchar  [8])(longlong)(this->BatchOcclusionQueries).ArrayNum;
    if ((auVar19 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar16 = StatPtr_STAT_OcclusionQueries;
      if (StatPtr_STAT_OcclusionQueries == (FThreadSafeStaticStat<FStat_STAT_OcclusionQueries>)0x0)
      {
        pFVar15 = ::FName::FName(&local_50,"STAT_OcclusionQueries");
        FVar16 = (FThreadSafeStaticStat<FStat_STAT_OcclusionQueries>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OcclusionQueries,*pFVar15,
                            L"Occlusion queries","STATGROUP_InitViews","STATCAT_Advanced",
                            L"Init Views",true,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar7 = *(FName *)FVar16;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_48.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
        local_58 = FVar7;
        local_48.StatData.Pad = auVar19;
        local_48.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,&local_48);
        FStatsTrace::Add(&local_58,(long64)auVar19);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    uVar20 = (this->BatchOcclusionQueries).ArrayNum;
    if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
    }
    piVar1 = &(this->BatchOcclusionQueries).ArrayMax;
    (this->BatchOcclusionQueries).ArrayNum = 0;
    if (*piVar1 != uVar20) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FOcclusionQueryBatcher::FOcclusionBatch>_>
                (0x20,8,uVar20,(ForElementType<FOcclusionQueryBatcher::FOcclusionBatch> *)this,0,
                 piVar1);
    }
    this->CurrentBatchOcclusionQuery = (FOcclusionBatch *)0x0;
  }
  return;
}

