// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// CreateRenderThreadResources @ 148924670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVectorFieldSceneProxy::CreateRenderThreadResources
          (FVectorFieldSceneProxy *this,FRHICommandListBase *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014892467a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->VisualizationVertexFactory + 0x18))();
  return;
}

// GetDynamicMeshElements @ 148958130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVectorFieldSceneProxy::GetDynamicMeshElements
          (FVectorFieldSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  FVectorFieldVisualizationVertexFactory *this_00;
  int *piVar1;
  Type TVar2;
  FSceneView *pFVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FName *pFVar13;
  TStatIdData *pTVar14;
  FPrimitiveDrawInterface *pFVar15;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar16;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar17;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar18;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  FName local_90;
  FColor_u_0 local_88 [2];
  FName local_80;
  FName local_78;
  LARGE_INTEGER local_68;
  FStatMessage local_60;
  FName local_50;
  FName local_48 [2];
  
  uVar21 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FVectorFieldSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FVectorFieldSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FVectorFieldSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_VectorFieldSceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar13 = ::FName::FName(&local_50,"STAT_VectorFieldSceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FVectorFieldSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_VectorFieldSceneProxy_GetDynamicMeshElements,*pFVar13,
               L"STAT_VectorFieldSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FVectorFieldSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar14 = _StatPtr_STAT_VectorFieldSceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_VectorFieldSceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar13 = ::FName::FName(local_48,"STAT_VectorFieldSceneProxy_GetDynamicMeshElements");
    pTVar14 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FVectorFieldSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_VectorFieldSceneProxy_GetDynamicMeshElements,*pFVar13
                         ,L"STAT_VectorFieldSceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_90 = *(FName *)&pTVar14->Name;
  bVar7 = false;
  bVar9 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  bVar10 = false;
  bVar11 = false;
  if ((local_90.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar7, bVar8 = bVar9, local_90.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(pTVar14->StatDescriptionAnsi).Ptr);
      bVar7 = false;
      bVar9 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = local_90.ComparisonIndex.Value.Value;
        local_80.Number = local_90.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(pTVar14->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\VectorField.cpp"
                   ,0x2ba);
        bVar7 = true;
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    bVar6 = bVar7;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_90,CycleScopeStart);
      bVar10 = true;
      goto LAB_1489582d0;
    }
  }
  bVar9 = bVar11;
  bVar7 = bVar10;
  bVar10 = false;
  local_90 = local_78;
LAB_1489582d0:
  iVar19 = param_1->ArrayNum;
  if (0 < iVar19) {
    uVar23 = 1;
    uVar22 = uVar21;
    do {
      uVar20 = (uint)uVar21;
      if ((param_3 & uVar23) != 0) {
        uVar12 = 0;
        if ((int)uVar20 < iVar19) {
          uVar12 = ~uVar20 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FSceneView **)((param_1->AllocatorInstance).Data + uVar22);
        pFVar15 = FMeshElementCollector::GetPDI(param_4,uVar20);
        DrawVectorFieldBounds(pFVar15,pFVar3,this->VectorFieldInstance);
        if (((this->field_0x79 & 6) != 0) || ((pFVar3->Family->EngineShowFlags).VectorFields != 0))
        {
          TVar2 = pFVar3->FeatureLevel;
          paVar4 = &param_4->OneFrameResources->Next;
          aVar16 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x158,8);
          *(undefined8 *)((longlong)aVar16 + 8) = 0;
          *(undefined ***)aVar16 =
               &
               ___7__TObject_VFVectorFieldCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar17.Next = *paVar4;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar16 + 8) = TVar17.Next;
            LOCK();
            aVar18 = *paVar4;
            bVar11 = TVar17.Next == aVar18;
            if (bVar11) {
              *paVar4 = aVar16;
              aVar18 = TVar17.Next;
            }
            UNLOCK();
            TVar17.Next = aVar18;
          } while (!bVar11);
          this_00 = (FVectorFieldVisualizationVertexFactory *)((longlong)aVar16 + 0x18);
          *(undefined ***)((longlong)aVar16 + 0x10) = &___7FVectorFieldCollectorResources__6B_;
          FVectorFieldVisualizationVertexFactory::FVectorFieldVisualizationVertexFactory
                    (this_00,TVar2);
          pcVar5 = *(code **)(*(longlong *)this_00 + 0x18);
          if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RHICmdList",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                  ,0x46,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (*pcVar5)(this_00,param_4->RHICmdList);
          GetVectorFieldMesh(this_00,this->VectorFieldInstance,uVar20,param_4);
        }
      }
      iVar19 = param_1->ArrayNum;
      uVar21 = (ulonglong)(uVar20 + 1);
      uVar23 = uVar23 << 1 | (uint)((int)uVar23 < 0);
      uVar22 = uVar22 + 8;
      bVar6 = bVar7;
      bVar8 = bVar9;
    } while ((int)(uVar20 + 1) < iVar19);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (local_90 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_60.NameAndInfo.Index = local_90.ComparisonIndex.Value;
      local_60.NameAndInfo.Number = local_90.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_60.StatData.Pad[4] = '\0';
      local_60.StatData.Pad[5] = '\0';
      local_60.StatData.Pad[6] = '\0';
      local_60.StatData.Pad[7] = '\0';
      local_60.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_60.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_60.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_60.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_60);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// GetMemoryFootprint @ 14895a130

uint __thiscall FVectorFieldSceneProxy::GetMemoryFootprint(FVectorFieldSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x3d0;
}

// GetTypeHash @ 14895ee60

ulong64 __thiscall FVectorFieldSceneProxy::GetTypeHash(FVectorFieldSceneProxy *this)

{
  return 0x1552585f0;
}

// GetViewRelevance @ 14895f8b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FVectorFieldSceneProxy::GetViewRelevance
          (FVectorFieldSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2 | 2;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  return __return_storage_ptr__;
}

