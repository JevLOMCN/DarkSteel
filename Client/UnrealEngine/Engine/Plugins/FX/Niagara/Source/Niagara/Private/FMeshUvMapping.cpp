// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// FMeshUvMapping @ 148f7f190

FMeshUvMapping * __thiscall
FMeshUvMapping::FMeshUvMapping(FMeshUvMapping *this,int param_1,int param_2)

{
  this->LodIndex = param_1;
  this->UvSetIndex = param_2;
  this->_padding_ = (longlong)&___7FMeshUvMapping__6B_;
  FNiagaraUvQuadTree::FNiagaraUvQuadTree(&this->TriangleIndexQuadTree,8,8);
  (this->FrozenQuadTreeProxy).Ptr = (FMeshUvMappingBufferProxy *)0x0;
  this->CpuQuadTreeUserCount = (atomic<int>)0x0;
  this->GpuQuadTreeUserCount = (atomic<int>)0x0;
  return this;
}

// ~FMeshUvMapping @ 148f81cf0

void __thiscall FMeshUvMapping::~FMeshUvMapping(FMeshUvMapping *this)

{
  FMeshUvMappingBufferProxy *pFVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FMeshUvMapping__6B_;
  FNiagaraUvQuadTree::Empty(&this->TriangleIndexQuadTree);
  ReleaseGpuQuadTree(this);
  pFVar1 = (this->FrozenQuadTreeProxy).Ptr;
  if (pFVar1 != (FMeshUvMappingBufferProxy *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  pFVar2 = (this->TriangleIndexQuadTree).ChildNodes.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FNiagaraUvQuadTree::FSubTree,int>
            ((FSubTree *)(this->TriangleIndexQuadTree).ChildTrees.AllocatorInstance.Data,
             (this->TriangleIndexQuadTree).ChildTrees.ArrayNum);
  pFVar2 = (this->TriangleIndexQuadTree).ChildTrees.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
    return;
  }
  return;
}

// BuildGpuQuadTree @ 148f8f7c0

void __thiscall FMeshUvMapping::BuildGpuQuadTree(FMeshUvMapping *this)

{
  FMeshUvMappingBufferProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMeshUvMappingBufferProxy *this_00;
  
  if (((this->FrozenQuadTreeProxy).Ptr != (FMeshUvMappingBufferProxy *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrozenQuadTreeProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Experimental\\NiagaraMeshUvMapping.cpp"
                         ,0x26,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = ::operator_new(0x58);
  if (this_00 != (FMeshUvMappingBufferProxy *)0x0) {
    this_00->_padding_ = 0;
    *(FNameEntryId *)&this_00->_padding_ = 0;
    *(uint *)((longlong)&this_00->_padding_ + 4) = 0;
    *(FNameEntryId *)&this_00->_padding_ = 0;
    *(uint *)((longlong)&this_00->_padding_ + 4) = 0;
    this_00->_padding_ = 0;
    (this_00->FrozenQuadTree)._padding_ = 0;
    (this_00->FrozenQuadTree)._padding_ = 0;
    (this_00->FrozenQuadTree)._padding_ = 0;
    *(undefined8 *)&(this_00->FrozenQuadTree).bNeedsCPUAccess = 0;
    (this_00->UvMappingBuffer).Reference = (FRHIBuffer *)0x0;
    (this_00->UvMappingSrv).Reference = (FRHIShaderResourceView *)0x0;
    this_00->GpuMemoryUsage = 0;
    FRenderResource::FRenderResource((FRenderResource *)this_00);
    this_00->_padding_ = (longlong)&___7FMeshUvMappingBufferProxy__6B_;
    (this_00->FrozenQuadTree)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
    (this_00->FrozenQuadTree)._padding_ = 0;
    (this_00->FrozenQuadTree)._padding_ = 0;
    (this_00->FrozenQuadTree).bNeedsCPUAccess = false;
    (this_00->UvMappingBuffer).Reference = (FRHIBuffer *)0x0;
    (this_00->UvMappingSrv).Reference = (FRHIShaderResourceView *)0x0;
    this_00->GpuMemoryUsage = 0;
  }
  pFVar1 = (this->FrozenQuadTreeProxy).Ptr;
  if ((pFVar1 != this_00) &&
     ((this->FrozenQuadTreeProxy).Ptr = this_00, pFVar1 != (FMeshUvMappingBufferProxy *)0x0)) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  FMeshUvMappingBufferProxy::Initialize((this->FrozenQuadTreeProxy).Ptr,this);
  BeginInitResource((FRenderResource *)(this->FrozenQuadTreeProxy).Ptr,(FRenderCommandPipe *)0x0);
  return;
}

// CanBeDestroyed @ 148f912c0

bool __thiscall FMeshUvMapping::CanBeDestroyed(FMeshUvMapping *this)

{
  if (((int)this->CpuQuadTreeUserCount < 1) && ((int)this->GpuQuadTreeUserCount < 1)) {
    return true;
  }
  return false;
}

// FreezeQuadTree @ 148faff00

void __thiscall
FMeshUvMapping::FreezeQuadTree(FMeshUvMapping *this,TResourceArray<unsigned_char,0> *param_1)

{
  FNiagaraResourceArrayWriter local_b8;
  
  FNiagaraResourceArrayWriter::FNiagaraResourceArrayWriter(&local_b8,param_1,false,false,(FName)0x0)
  ;
  FNiagaraUvQuadTree::Freeze(&this->TriangleIndexQuadTree,(FArchive *)&local_b8);
  FArchive::~FArchive((FArchive *)&local_b8);
  return;
}

// GetQuadTreeProxy @ 148fb6d40

FMeshUvMappingBufferProxy * __thiscall FMeshUvMapping::GetQuadTreeProxy(FMeshUvMapping *this)

{
  return (this->FrozenQuadTreeProxy).Ptr;
}

// IsUsed @ 148fc5e10

bool __thiscall FMeshUvMapping::IsUsed(FMeshUvMapping *this)

{
  if (((int)this->CpuQuadTreeUserCount < 1) && ((int)this->GpuQuadTreeUserCount < 1)) {
    return false;
  }
  return true;
}

// RegisterUser @ 148fc96b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMeshUvMapping::RegisterUser(FMeshUvMapping *this,FMeshUvMappingUsage param_1,bool param_2)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_Niagara_UvMapping_Cpu> FVar9;
  FThreadSafeStaticStat<FStat_STAT_Niagara_UvMapping_Gpu> FVar10;
  FMeshUvMappingBufferProxy *pFVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  uint uVar14;
  FNameEntryId FVar15;
  FName FVar16;
  FName FVar17;
  FMeshUvMappingBufferProxy *pFVar18;
  bool bVar19;
  FColor_u_0 local_res10 [4];
  FColor_u_0 local_res20 [2];
  FName local_a8;
  LARGE_INTEGER local_a0;
  FName local_98;
  FName local_90;
  FName local_80;
  LARGE_INTEGER local_70;
  FStatMessage local_68;
  FStatMessage local_58;
  FName local_48;
  FName local_40;
  
  local_res10[0].Bits._0_2_ = param_1;
  pFVar18 = (FMeshUvMappingBufferProxy *)0x0;
  if ((param_1.RequiresCpuAccess != false) || (param_1.RequiresGpuAccess != false)) {
    LOCK();
    paVar1 = &this->CpuQuadTreeUserCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x0) {
      FVar9 = StatPtr_STAT_Niagara_UvMapping_Cpu;
      if (StatPtr_STAT_Niagara_UvMapping_Cpu ==
          (FThreadSafeStaticStat<FStat_STAT_Niagara_UvMapping_Cpu>)0x0) {
        pFVar8 = ::FName::FName(&local_48,"STAT_Niagara_UvMapping_Cpu");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_Niagara_UvMapping_Cpu>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Niagara_UvMapping_Cpu,*pFVar8,
                           L"Niagara - UvQuadTree Cpu","STATGROUP_Niagara","STATCAT_Niagara",
                           L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar17 = *(FName *)FVar9;
      bVar5 = false;
      bVar6 = false;
      local_90.ComparisonIndex.Value = 0;
      local_90.Number = 0;
      FVar15 = FVar17.ComparisonIndex.Value;
      uVar14 = FVar17.Number;
      if ((FVar15.Value == 0) && (uVar14 == 0)) {
        (**(code **)(this->_padding_ + 8))(this);
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res20[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
          bVar5 = false;
          bVar6 = true;
          if (-1 < CpuChannel->Enabled) {
            local_98.ComparisonIndex.Value = FVar15.Value;
            local_98.Number = uVar14;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_98,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Experimental\\NiagaraMeshUvMapping.cpp"
                       ,0x49);
            bVar5 = true;
            bVar6 = true;
          }
        }
        bVar19 = FThreadStats::bPrimaryEnable != false;
        FVar16 = local_90;
        if (bVar19) {
          local_a8.ComparisonIndex.Value = FVar15.Value;
          local_a8.Number = uVar14;
          FThreadStats::AddMessage(FVar17,CycleScopeStart);
          FVar16 = FVar17;
        }
        (**(code **)(this->_padding_ + 8))(this);
        if (bVar6) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if (bVar5) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((((bVar19) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)
            ) && (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar12 == (FThreadStats *)0x0) {
            pFVar13 = FThreadStatsPool::Get();
            pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
          }
          if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
            local_68.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
            local_68.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
            QueryPerformanceCounter(&local_70);
            local_68.StatData.Pad[4] = '\0';
            local_68.StatData.Pad[5] = '\0';
            local_68.StatData.Pad[6] = '\0';
            local_68.StatData.Pad[7] = '\0';
            local_68.StatData.Pad[0] = local_70.s.LowPart._0_1_;
            local_68.StatData.Pad[1] = local_70.s.LowPart._1_1_;
            local_68.StatData.Pad[2] = local_70.s.LowPart._2_1_;
            local_68.StatData.Pad[3] = local_70.s.LowPart._3_1_;
            FThreadStats::AddStatMessage(pFVar12,&local_68);
            piVar2 = &pFVar12->ScopeCount;
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              FThreadStats::Flush(pFVar12,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar12,false,false);
            }
          }
        }
      }
    }
  }
  if (local_res10[0]._s_0.G == '\0') {
    return;
  }
  LOCK();
  paVar1 = &this->GpuQuadTreeUserCount;
  aVar3 = *paVar1;
  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
  UNLOCK();
  if (aVar3 != (atomic<int>)0x0) {
    return;
  }
  FVar10 = StatPtr_STAT_Niagara_UvMapping_Gpu;
  if (StatPtr_STAT_Niagara_UvMapping_Gpu ==
      (FThreadSafeStaticStat<FStat_STAT_Niagara_UvMapping_Gpu>)0x0) {
    pFVar8 = ::FName::FName(&local_40,"STAT_Niagara_UvMapping_Gpu");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_Niagara_UvMapping_Gpu>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Niagara_UvMapping_Gpu,*pFVar8,
                        L"Niagara - UvQuadTree Gpu","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar5 = false;
  bVar6 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  FVar15 = FVar17.ComparisonIndex.Value;
  uVar14 = FVar17.Number;
  if ((FVar15.Value != 0) || (uVar14 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a8.ComparisonIndex.Value = FVar15.Value;
        local_a8.Number = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a8,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Experimental\\NiagaraMeshUvMapping.cpp"
                   ,0x52);
        bVar5 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a0.s.LowPart = FVar15.Value;
      local_a0.s.HighPart = uVar14;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar19 = true;
      goto LAB_148fc9a19;
    }
  }
  bVar19 = false;
  FVar17 = local_80;
LAB_148fc9a19:
  if (((this->FrozenQuadTreeProxy).Ptr != (FMeshUvMappingBufferProxy *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("FrozenQuadTreeProxy == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Experimental\\NiagaraMeshUvMapping.cpp"
                         ,0x26,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar11 = ::operator_new(0x58);
  if (pFVar11 != (FMeshUvMappingBufferProxy *)0x0) {
    pFVar11->_padding_ = 0;
    *(FNameEntryId *)&pFVar11->_padding_ = 0;
    *(uint *)((longlong)&pFVar11->_padding_ + 4) = 0;
    *(FNameEntryId *)&pFVar11->_padding_ = 0;
    *(uint *)((longlong)&pFVar11->_padding_ + 4) = 0;
    pFVar11->_padding_ = 0;
    (pFVar11->FrozenQuadTree)._padding_ = 0;
    (pFVar11->FrozenQuadTree)._padding_ = 0;
    (pFVar11->FrozenQuadTree)._padding_ = 0;
    *(undefined8 *)&(pFVar11->FrozenQuadTree).bNeedsCPUAccess = 0;
    (pFVar11->UvMappingBuffer).Reference = (FRHIBuffer *)0x0;
    (pFVar11->UvMappingSrv).Reference = (FRHIShaderResourceView *)0x0;
    pFVar11->GpuMemoryUsage = 0;
    FRenderResource::FRenderResource((FRenderResource *)pFVar11);
    pFVar11->GpuMemoryUsage = 0;
    pFVar11->_padding_ = (longlong)&___7FMeshUvMappingBufferProxy__6B_;
    (pFVar11->FrozenQuadTree)._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
    (pFVar11->FrozenQuadTree)._padding_ = 0;
    (pFVar11->FrozenQuadTree)._padding_ = 0;
    (pFVar11->FrozenQuadTree).bNeedsCPUAccess = false;
    (pFVar11->UvMappingBuffer).Reference = (FRHIBuffer *)0x0;
    (pFVar11->UvMappingSrv).Reference = (FRHIShaderResourceView *)0x0;
    pFVar18 = pFVar11;
  }
  pFVar11 = (this->FrozenQuadTreeProxy).Ptr;
  if ((pFVar11 != pFVar18) &&
     ((this->FrozenQuadTreeProxy).Ptr = pFVar18, pFVar11 != (FMeshUvMappingBufferProxy *)0x0)) {
    (**(code **)pFVar11->_padding_)(pFVar11,1);
  }
  FMeshUvMappingBufferProxy::Initialize((this->FrozenQuadTreeProxy).Ptr,this);
  BeginInitResource((FRenderResource *)(this->FrozenQuadTreeProxy).Ptr,(FRenderCommandPipe *)0x0);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar19) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_58.NameAndInfo.Index = FVar17.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar12,&local_58);
      piVar2 = &pFVar12->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  return;
}

// ReleaseGpuQuadTree @ 148fca8e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMeshUvMapping::ReleaseGpuQuadTree(FMeshUvMapping *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FMeshUvMappingBufferProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMeshUvMappingBufferProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFStack_70 = (this->FrozenQuadTreeProxy).Ptr;
  (this->FrozenQuadTreeProxy).Ptr = (FMeshUvMappingBufferProxy *)0x0;
  if (pFStack_70 != (FMeshUvMappingBufferProxy *)0x0) {
    local_60 = (undefined ***)0x0;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMeshUvMapping::ReleaseGpuQuadTree'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMeshUvMapping::ReleaseGpuQuadTree'::`5'::<lambda_1>,1,0>::
                _vftable_;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMeshUvMapping::ReleaseGpuQuadTree_::__l5::TSTR_BeginDestroyCommand48>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FMeshUvMapping::ReleaseGpuQuadTree'::__l5::TSTR_BeginDestroyCommand48>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// ReleaseQuadTree @ 148fcaa50

void __thiscall FMeshUvMapping::ReleaseQuadTree(FMeshUvMapping *this)

{
  FNiagaraUvQuadTree::Empty(&this->TriangleIndexQuadTree);
  return;
}

// UnregisterUser @ 148fcfc40

void __thiscall FMeshUvMapping::UnregisterUser(FMeshUvMapping *this,FMeshUvMappingUsage param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  
  if ((param_1.RequiresCpuAccess != false) || (param_1.RequiresGpuAccess != false)) {
    LOCK();
    paVar1 = &this->CpuQuadTreeUserCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      FNiagaraUvQuadTree::Empty(&this->TriangleIndexQuadTree);
    }
  }
  if (param_1.RequiresGpuAccess != false) {
    LOCK();
    paVar1 = &this->GpuQuadTreeUserCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      ReleaseGpuQuadTree(this);
    }
  }
  return;
}

