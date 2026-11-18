// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 39

// GetSpecularProfileRT @ 147efde00

USpecularProfile * __thiscall
FMaterialRenderProxy::GetSpecularProfileRT(FMaterialRenderProxy *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  USpecularProfile *pUVar4;
  
  if ((uint)(this->SpecularProfilesRT).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index<uint32(SpecularProfilesRT.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialRenderProxy.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USpecularProfile *)(*pcVar1)();
      return pUVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->SpecularProfilesRT).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USpecularProfile *)(*pcVar1)();
      return pUVar4;
    }
  }
  return *(USpecularProfile **)
          ((this->SpecularProfilesRT).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// GetSubsurfaceProfileRT @ 147efdf80

USubsurfaceProfile * __thiscall
FMaterialRenderProxy::GetSubsurfaceProfileRT(FMaterialRenderProxy *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  USubsurfaceProfile *pUVar4;
  
  if ((uint)(this->SubsurfaceProfilesRT).ArrayNum <= param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index<uint32(SubsurfaceProfilesRT.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialRenderProxy.h"
                       ,0xe6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USubsurfaceProfile *)(*pcVar1)();
      return pUVar4;
    }
  }
  uVar3 = 0;
  if ((int)param_1 < (this->SubsurfaceProfilesRT).ArrayNum) {
    uVar3 = ~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (USubsurfaceProfile *)(*pcVar1)();
      return pUVar4;
    }
  }
  return *(USubsurfaceProfile **)
          ((this->SubsurfaceProfilesRT).AllocatorInstance.Data + (longlong)(int)param_1 * 8);
}

// GetUserSceneTextureOverride @ 147eff0f0

bool __thiscall
FMaterialRenderProxy::GetUserSceneTextureOverride(FMaterialRenderProxy *this,FName *param_1)

{
  return false;
}

// FMaterialRenderProxy @ 147f64ac0

FMaterialRenderProxy * __thiscall
FMaterialRenderProxy::FMaterialRenderProxy(FMaterialRenderProxy *this,FString *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FMaterialRenderProxy__6B_;
  (this->UniformExpressionCache).Elements.UniformBuffer.Reference = (FRHIUniformBuffer *)0x0;
  (this->UniformExpressionCache).Elements.AllocatedVTs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UniformExpressionCache).Elements.AllocatedVTs.ArrayNum = 0;
  (this->UniformExpressionCache).Elements.AllocatedVTs.ArrayMax = 0;
  (this->UniformExpressionCache).Elements.OwnedAllocatedVTs.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UniformExpressionCache).Elements.OwnedAllocatedVTs.ArrayNum = 0;
  (this->UniformExpressionCache).Elements.OwnedAllocatedVTs.ArrayMax = 0;
  (this->UniformExpressionCache).Elements.ParameterCollections.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UniformExpressionCache).Elements.ParameterCollections.ArrayNum = 0;
  (this->UniformExpressionCache).Elements.ParameterCollections.ArrayMax = 0;
  (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
       (FMaterialShaderMap *)0x0;
  (this->ImmutableSamplerState).ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  (this->ImmutableSamplerState).ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  (this->MaterialName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsurfaceProfilesRT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubsurfaceProfilesRT).ArrayNum = 0;
  (this->SubsurfaceProfilesRT).ArrayMax = 0;
  (this->SpecularProfilesRT).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpecularProfilesRT).ArrayNum = 0;
  (this->SpecularProfilesRT).ArrayMax = 0;
  this->SubsurfaceProfileRT = (USubsurfaceProfile *)0x0;
  this->SpecularProfileOverrideRT = (USpecularProfile *)0x0;
  (this->MaterialName).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialName).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->MaterialName).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  this->MarkedForGarbageCollection = '\0';
  this->bHasMaterialCacheCallbacks = '\0';
  this->bHasVirtualTextureCallbacks = '\0';
  this->bMarkedTransient = '\0';
  this->DeletedFlag = '\0';
  this->UniformExpressionCacheSerialNumber = 0;
  (this->Mutex).State = (atomic<unsigned_char>)0x0;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return this;
}

// ~FMaterialRenderProxy @ 147f68810

void __thiscall FMaterialRenderProxy::~FMaterialRenderProxy(FMaterialRenderProxy *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  byte bVar3;
  IRendererModule *pIVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&___7FMaterialRenderProxy__6B_;
  bVar2 = IsInRenderingThread();
  if ((bVar2) && (GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference != (FTaskBase *)0x0))
  {
    UE::Tasks::Private::FTaskBase::Wait
              ((FTaskBase *)GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference);
  }
  if ((int)this->_padding_ != -1) {
    this->ReleaseResourceFlag = '\x01';
    FRenderResource::ReleaseResource((FRenderResource *)this);
    bVar3 = this->field_0xbc;
    if (this->bHasVirtualTextureCallbacks != '\0') {
      pIVar4 = GetRendererModule();
      (**(code **)((longlong)*pIVar4 + 0x178))(pIVar4,this);
      this->bHasVirtualTextureCallbacks = '\0';
      bVar3 = this->field_0xbc;
    }
    if ((bVar3 & 0x20) != 0) {
      pIVar4 = GetRendererModule();
      plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x138))(pIVar4);
      (**(code **)(*plVar5 + 0x38))(plVar5,this);
      this->bHasMaterialCacheCallbacks = '\0';
    }
  }
  bVar3 = this->field_0xbc;
  if (this->bHasVirtualTextureCallbacks != '\0') {
    pIVar4 = GetRendererModule();
    (**(code **)((longlong)*pIVar4 + 0x178))(pIVar4,this);
    this->bHasVirtualTextureCallbacks = '\0';
    bVar3 = this->field_0xbc;
  }
  if ((bVar3 & 0x20) != 0) {
    pIVar4 = GetRendererModule();
    plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x138))(pIVar4);
    (**(code **)(*plVar5 + 0x38))(plVar5,this);
    bVar3 = this->field_0xbc & 0xdf;
  }
  this->field_0xbc = bVar3 | 2;
  pFVar1 = (this->MaterialName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpecularProfilesRT).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SubsurfaceProfilesRT).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FUniformExpressionCache::~FUniformExpressionCache(&(this->UniformExpressionCache).Elements);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// operator() @ 147f6b100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions'::__l2::<lambda_1>::operator()
          (void *this)

{
  ulonglong uVar1;
  int iVar2;
  FMaterialRenderProxy *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions(FRHICommandListBase_&,UE::Tasks::Private::FTaskHandle_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_UpdateDeferredCachedUniformExpressions>
  FVar10;
  FMaterial *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  FName FVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  FUniformExpressionCacheAsyncUpdater *this_01;
  bool bVar17;
  FColor_u_0 local_res18 [2];
  int local_res20;
  FUniformExpressionCacheAsyncUpdater local_118;
  FName local_108;
  FName local_100;
  longlong *local_f0;
  int iStack_e8;
  uint uStack_e4;
  TBitArray<FDefaultBitArrayAllocator> *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  longlong *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  FTaskTagScope local_98;
  FMaterialRenderContext local_88;
  FName local_70;
  FName local_68 [5];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId869,
               "FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
               ,0x365);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId869);
  }
  if (__CsvProfilerStat870 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Material_UpdateDeferredCachedUniformExpressions");
    __CsvProfilerStat870 = true;
  }
  FCsvProfiler::BeginExclusiveStat
            ("Material_UpdateDeferredCachedUniformExpressions",
             "CSV_Material_UpdateDeferredCachedUniformExpressions");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_UpdateDeferredCachedUniformExpressions ==
        (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions(FRHICommandListBase_&,UE::Tasks::Private::FTaskHandle_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_UpdateDeferredCachedUniformExpressions>
         )0x0) {
      pFVar9 = ::FName::FName(&local_70,"STAT_UpdateDeferredCachedUniformExpressions");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UpdateDeferredCachedUniformExpressions,
                 *pFVar9,L"STAT_UpdateDeferredCachedUniformExpressions","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_UpdateDeferredCachedUniformExpressions;
  if (StatPtr_STAT_UpdateDeferredCachedUniformExpressions ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions(FRHICommandListBase_&,UE::Tasks::Private::FTaskHandle_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_UpdateDeferredCachedUniformExpressions>
       )0x0) {
    pFVar9 = ::FName::FName(local_68,"STAT_UpdateDeferredCachedUniformExpressions");
    FVar10 = (FThreadSafeStaticStat<_public:___cdecl__public:_static_void___cdecl_FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions(FRHICommandListBase_&,UE::Tasks::Private::FTaskHandle_*)_::_2_::<lambda_1>::operator()(void)const_::_2_::FStat_STAT_UpdateDeferredCachedUniformExpressions>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_UpdateDeferredCachedUniformExpressions,*pFVar9,
                          L"STAT_UpdateDeferredCachedUniformExpressions","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar10;
  bVar5 = false;
  bVar4 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  bVar7 = false;
  bVar6 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar4 = true;
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_108.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                   ,0x367);
        bVar5 = true;
        bVar4 = true;
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_147f6b305;
    }
  }
  bVar5 = bVar7;
  bVar4 = bVar6;
  bVar6 = false;
  FVar15 = local_100;
LAB_147f6b305:
  FTaskTagScope::FTaskTagScope(&local_98,EParallelRenderingThread);
  local_118.Items.AllocatorInstance.Data = (FItem *)0x0;
  uStack_e4 = 1;
  this_01 = &local_118;
  if (*(char *)((longlong)this + 8) == '\0') {
    this_01 = (FUniformExpressionCacheAsyncUpdater *)0x0;
  }
  local_118.Items.ArrayNum = 0;
  local_118.Items.ArrayMax = 0;
  local_f0 = (longlong *)((longlong)this + 0x10);
  iStack_e8 = 0;
  iVar2 = *(int *)((longlong)this + 0x38);
  local_e0 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x20);
  local_d0 = 0;
  iStack_d4 = 0;
  if (iVar2 != 0) {
    pTVar16 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar16 = local_e0;
    }
    uVar8 = *(uint *)(pTVar16->AllocatorInstance).InlineData;
    while (uVar8 == 0) {
      lVar12 = (longlong)iStack_e8;
      local_d0 = local_d0 + 0x20;
      iStack_e8 = iStack_e8 + 1;
      iStack_d4 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_147f6b3b3;
      uVar8 = *(uint *)((pTVar16->AllocatorInstance).InlineData + lVar12 * 4 + 4);
    }
    uStack_e4 = -uVar8 & uVar8;
    uVar1 = (ulonglong)uStack_e4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iStack_d4 = local_res20 + -1 + local_d0;
    if (iVar2 < iStack_d4) {
      iStack_d4 = iVar2;
    }
  }
LAB_147f6b3b3:
  uStack_d8 = 0xffffffff;
  TStack_b8._padding_ = CONCAT44(uStack_e4,iStack_e8);
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  TStack_b8._28_4_ = iStack_d4;
  TStack_b8.BaseBitIndex = local_d0;
  iStack_cc = iStack_d4;
  local_c0 = local_f0;
  TStack_b8.Array = local_e0;
  TStack_b8.CurrentBitIndex = iStack_d4;
  if (iStack_d4 < iVar2) {
    do {
      this_00 = *(FMaterialRenderProxy **)(*local_c0 + (longlong)TStack_b8.CurrentBitIndex * 0x10);
      if (this_00->DeletedFlag != 0) {
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      }
      uVar8 = UMaterialInterface::GetFeatureLevelsToCompileForAllMaterials();
      while (uVar8 != 0) {
        uVar13 = -uVar8 & uVar8;
        uVar8 = uVar8 & uVar8 - 1;
        iVar2 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        iVar14 = 0;
        if (uVar13 != 0) {
          iVar14 = iVar2;
        }
        pFVar11 = (FMaterial *)(**(code **)(this_00->_padding_ + 0x30))(this_00,iVar14);
        if (pFVar11 != (FMaterial *)0x0) {
          bVar7 = IsInParallelRenderingThread();
          if ((!bVar7) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsInParallelRenderingThread()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                                 ,0x565,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((pFVar11->RenderingThreadShaderMap).Reference != (FMaterialShaderMap *)0x0) {
            local_88.bShowSelection = false;
            local_88.MaterialRenderProxy = this_00;
            local_88.Material = pFVar11;
            FMaterialRenderProxy::EvaluateUniformExpressions
                      (this_00,*(FRHICommandListBase **)this,
                       &(this_00->UniformExpressionCache).Elements,&local_88,this_01);
          }
        }
      }
      (**(code **)(this_00->_padding_ + 0x78))(this_00);
      TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    } while (TStack_b8.CurrentBitIndex < (TStack_b8.Array)->NumBits);
  }
  if (this_01 != (FUniformExpressionCacheAsyncUpdater *)0x0) {
    FUniformExpressionCacheAsyncUpdater::Update(this_01,*(FRHICommandListBase **)this);
  }
  DestructItems<FUniformExpressionCacheAsyncUpdater::FItem,int>
            (local_118.Items.AllocatorInstance.Data,local_118.Items.ArrayNum);
  if (local_118.Items.AllocatorInstance.Data != (FItem *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_118.Items.AllocatorInstance.Data)
    ;
  }
  FTaskTagScope::~FTaskTagScope(&local_98);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  FCsvProfiler::EndExclusiveStat("Material_UpdateDeferredCachedUniformExpressions");
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 147f6b640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  bool bVar1;
  FMaterialRenderProxy *this_00;
  code *pcVar2;
  byte bVar3;
  atomic<unsigned_char> aVar4;
  bool bVar5;
  UMaterial *pUVar6;
  FMaterialRenderProxy *local_res8;
  FMaterialRenderProxy *local_res18 [2];
  
  this_00 = *(FMaterialRenderProxy **)this;
  bVar1 = *(bool *)((longlong)this + 8);
  (**(code **)(this_00->_padding_ + 0x18))();
  if (((GIsInitialLoad == false) &&
      (pUVar6 = UMaterial::GetDefaultMaterial(MD_Surface), pUVar6 == (UMaterial *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(bUsingNewLoader && GIsInitialLoad) || UMaterial::GetDefaultMaterial(MD_Surface)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                         ,0x256,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (this_00->MarkedForGarbageCollection != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  (**(code **)(this_00->_padding_ + 0x70))(this_00);
  LOCK();
  bVar5 = FMaterialRenderProxy::DeferredUniformExpressionCacheRequestsMutex.State ==
          (atomic<unsigned_char>)0x0;
  if (bVar5) {
    FMaterialRenderProxy::DeferredUniformExpressionCacheRequestsMutex.State =
         (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&FMaterialRenderProxy::DeferredUniformExpressionCacheRequestsMutex);
  }
  local_res8 = this_00;
  TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>::
  Emplace<FMaterialRenderProxy_*>
            (&FMaterialRenderProxy::DeferredUniformExpressionCacheRequests,local_res18,
             (bool *)&local_res8);
  LOCK();
  aVar4 = FMaterialRenderProxy::DeferredUniformExpressionCacheRequestsMutex.State + -1;
  UNLOCK();
  bVar3 = (byte)FMaterialRenderProxy::DeferredUniformExpressionCacheRequestsMutex.State & 2;
  FMaterialRenderProxy::DeferredUniformExpressionCacheRequestsMutex.State = aVar4;
  if (bVar3 != 0) {
    UE::FMutex::WakeWaitingThread
              (&FMaterialRenderProxy::DeferredUniformExpressionCacheRequestsMutex);
  }
  FMaterialRenderProxy::InvalidateUniformExpressionCache(this_00,bVar1);
  if (GDeferUniformExpressionCaching == 0) {
    FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions
              ((FRHICommandListBase *)param_1,(FTaskHandle *)0x0);
  }
  return;
}

// AllocateVTStack @ 147f6dd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IAllocatedVirtualTexture * __thiscall
FMaterialRenderProxy::AllocateVTStack
          (FMaterialRenderProxy *this,FRHICommandListBase *param_1,FMaterialRenderContext *param_2,
          FUniformExpressionSet *param_3,FMaterialVirtualTextureStack *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  UTexture *this_00;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  IAllocatedVirtualTexture *pIVar9;
  longlong lVar10;
  FTextureResource *pFVar11;
  longlong *plVar12;
  IRendererModule *pIVar13;
  uint uVar14;
  ulonglong *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStackY_158 [32];
  UTexture *local_120;
  FName local_118;
  FRHICommandListBase *local_110;
  FString local_108;
  void *local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined2 local_ce;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined1 local_a4;
  ulonglong local_98 [11];
  
  local_98[8] = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_110 = param_1;
  if ((param_4->PreallocatedStackTextureIndex != -1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!VTStack.IsPreallocatedStack()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                         ,0x165,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pIVar9 = (IAllocatedVirtualTexture *)(*pcVar3)();
    return pIVar9;
  }
  uVar2 = param_4->NumLayers;
  uVar17 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    uVar14 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
    local_98[7] = 0;
    if (uVar2 != 0) {
      do {
        if (param_4->LayerUniformExpressionIndices[uVar14] != -1) {
          local_120 = (UTexture *)0x0;
          FUniformExpressionSet::GetTextureValue
                    (param_3,Virtual,param_4->LayerUniformExpressionIndices[uVar14],param_2,
                     param_2->Material,&local_120);
          local_98[uVar14] = (ulonglong)local_120;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < param_4->NumLayers);
    }
    lVar10 = (**(code **)(this->_padding_ + 0x40))();
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_ce = 0xff;
    local_cc = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b4 = 0;
    local_ac = 0;
    local_a4 = 0;
    if (lVar10 != 0) {
      local_e8 = *(undefined8 *)(lVar10 + 0x18);
    }
    bVar4 = false;
    local_d0 = 2;
    local_cf = (undefined1)uVar2;
    bVar5 = false;
    if (uVar2 != 0) {
      puVar18 = &local_ac;
      puVar16 = &local_cc;
      puVar15 = local_98;
      do {
        this_00 = (UTexture *)*puVar15;
        if ((this_00 != (UTexture *)0x0) &&
           (pFVar11 = UTexture::GetResource(this_00), bVar4 = bVar5,
           pFVar11 != (FTextureResource *)0x0)) {
          plVar12 = (longlong *)(**(code **)(pFVar11->_padding_ + 0x90))(pFVar11);
          if (plVar12 == (longlong *)0x0) {
            if (2 < (byte)LogMaterial._0_1_) {
              local_118 = (FName)this_00->_padding_;
              ::FName::ToString(&local_118,&local_108);
              (**(code **)(this->_padding_ + 0x28))(this,local_f8);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
              if (local_f8[0] != (void *)0x0) {
                FMemory::Free(local_f8[0]);
              }
              if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_108.Data.AllocatorInstance.Data);
              }
            }
          }
          else {
            if (bVar5) {
              iVar7 = (**(code **)(*plVar12 + 0xd0))(plVar12);
              if (((int)local_e0 != iVar7) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!bFoundValidLayer || VTDesc.TileSize == VirtualTextureResourceForLayer->GetTileSize()"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                                     ,0x198,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                pIVar9 = (IAllocatedVirtualTexture *)(*pcVar3)();
                return pIVar9;
              }
              iVar7 = (**(code **)(*plVar12 + 0xd8))(plVar12);
              if ((local_e0._4_4_ != iVar7) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!bFoundValidLayer || VTDesc.TileBorderSize == VirtualTextureResourceForLayer->GetBorderSize()"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                                     ,0x199,L""), bVar6)) {
                pcVar3 = (code *)swi(3);
                pIVar9 = (IAllocatedVirtualTexture *)(*pcVar3)();
                return pIVar9;
              }
            }
            if ((int)plVar12[0x13] != 0) {
              uVar8 = (**(code **)(*plVar12 + 0xd0))(plVar12);
              local_e0 = CONCAT44(local_e0._4_4_,uVar8);
              uVar8 = (**(code **)(*plVar12 + 0xd8))(plVar12);
              local_e0 = CONCAT44(uVar8,(int)local_e0);
              *(int *)puVar16 = (int)plVar12[0x13];
              bVar5 = true;
              *(undefined1 *)puVar18 = 0;
              bVar4 = true;
              if (this->bMarkedTransient == '\0') {
                pIVar13 = GetRendererModule();
                (**(code **)((longlong)*pIVar13 + 0x170))
                          (pIVar13,plVar12 + 0x13,OnVirtualTextureDestroyedCB,this);
                this->bHasVirtualTextureCallbacks = '\x01';
                bVar4 = bVar5;
              }
            }
          }
        }
        puVar15 = puVar15 + 1;
        puVar16 = (undefined8 *)((longlong)puVar16 + 4);
        puVar18 = (undefined8 *)((longlong)puVar18 + 1);
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      if (bVar4) {
        pIVar13 = GetRendererModule();
        pIVar9 = (IAllocatedVirtualTexture *)
                 (**(code **)((longlong)*pIVar13 + 0x140))(pIVar13,local_110,&local_e8);
        return pIVar9;
      }
    }
  }
  return (IAllocatedVirtualTexture *)0x0;
}

// CacheUniformExpressions @ 147f6fdd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialRenderProxy::CacheUniformExpressions
          (FMaterialRenderProxy *this,FRHICommandListBase *param_1,bool param_2)

{
  code *pcVar1;
  byte bVar2;
  atomic<unsigned_char> aVar3;
  bool bVar4;
  UMaterial *pUVar5;
  FMaterialRenderProxy *local_res8;
  FMaterialRenderProxy *local_res20;
  
  (**(code **)(this->_padding_ + 0x18))();
  if (((GIsInitialLoad == false) &&
      (pUVar5 = UMaterial::GetDefaultMaterial(MD_Surface), pUVar5 == (UMaterial *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(bUsingNewLoader && GIsInitialLoad) || UMaterial::GetDefaultMaterial(MD_Surface)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                         ,0x256,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (this->MarkedForGarbageCollection != 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
  }
  (**(code **)(this->_padding_ + 0x70))(this);
  LOCK();
  bVar4 = DeferredUniformExpressionCacheRequestsMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    DeferredUniformExpressionCacheRequestsMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&DeferredUniformExpressionCacheRequestsMutex);
  }
  local_res8 = this;
  TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>::
  Emplace<FMaterialRenderProxy_*>
            (&DeferredUniformExpressionCacheRequests,&local_res20,(bool *)&local_res8);
  LOCK();
  aVar3 = DeferredUniformExpressionCacheRequestsMutex.State + -1;
  UNLOCK();
  bVar2 = (byte)DeferredUniformExpressionCacheRequestsMutex.State & 2;
  DeferredUniformExpressionCacheRequestsMutex.State = aVar3;
  if (bVar2 != 0) {
    UE::FMutex::WakeWaitingThread(&DeferredUniformExpressionCacheRequestsMutex);
  }
  InvalidateUniformExpressionCache(this,param_2);
  if (GDeferUniformExpressionCaching == 0) {
    UpdateDeferredCachedUniformExpressions(param_1,(FTaskHandle *)0x0);
  }
  return;
}

// CacheUniformExpressions_GameThread @ 147f6fef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMaterialRenderProxy::CacheUniformExpressions_GameThread(FMaterialRenderProxy *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  wchar_t *pwVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [48];
  void *local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  FMaterialRenderProxy *pFStack_70;
  undefined1 local_68;
  undefined4 uStack_67;
  undefined2 uStack_63;
  undefined1 uStack_61;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FMaterialRenderProxy *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar4 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar4,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
     (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
      false)) {
    if (6 < (byte)LogMaterial._0_1_) {
      (**(code **)(this->_padding_ + 0x28))(this,local_98);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
      if (local_98[0] != (void *)0x0) {
        FMemory::Free(local_98[0]);
      }
    }
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    uStack_67 = auStack_c8._41_4_;
    uStack_63 = auStack_c8._45_2_;
    uStack_61 = auStack_c8[0x2f];
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    local_68 = param_1;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FMaterialRenderProxy::CacheUniformExpressions_GameThread_::__l5::TSTR_FCacheUniformExpressionsCommand626>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_38._1_4_ = uStack_67;
      local_38._0_1_ = local_68;
      local_38._5_2_ = uStack_63;
      local_38._7_1_ = uStack_61;
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FMaterialRenderProxy::CacheUniformExpressions_GameThread'::__l5::TSTR_FCacheUniformExpressionsCommand626>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar6 = (ulonglong)local_28;
      if ((2 < uVar6) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar5 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar5 = local_30;
          }
          (*(code *)(*pppuVar5)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar6])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar5 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar5 = local_60;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  return;
}

// CancelCacheUniformExpressions @ 147f720a0

void __thiscall FMaterialRenderProxy::CancelCacheUniformExpressions(FMaterialRenderProxy *this)

{
  FMutex FVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = DeferredUniformExpressionCacheRequestsMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar2) {
    DeferredUniformExpressionCacheRequestsMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar2) {
    UE::FMutex::LockSlow(&DeferredUniformExpressionCacheRequestsMutex);
  }
  TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>::
  Remove(&DeferredUniformExpressionCacheRequests,this);
  FVar1 = DeferredUniformExpressionCacheRequestsMutex;
  LOCK();
  DeferredUniformExpressionCacheRequestsMutex.State =
       DeferredUniformExpressionCacheRequestsMutex.State + -1;
  UNLOCK();
  if (((byte)FVar1.State & 2) == 0) {
    return;
  }
  UE::FMutex::WakeWaitingThread(&DeferredUniformExpressionCacheRequestsMutex);
  return;
}

// EvaluateParameterCollections @ 147f76b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialRenderProxy::EvaluateParameterCollections
          (FMaterialRenderProxy *this,FRHICommandListBase *param_1,FUniformExpressionCache *param_2,
          FMaterialRenderContext *param_3,FUniformExpressionCacheAsyncUpdater *param_4)

{
  FMaterial *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong *puVar5;
  FGuid *pFVar6;
  
  pFVar1 = param_3->Material;
  bVar4 = IsInParallelRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x565,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = ((pFVar1->RenderingThreadShaderMap).Reference)->_padding_;
  puVar5 = (ulonglong *)(lVar2 + 0x1b8);
  pFVar6 = (FGuid *)*puVar5;
  if (((ulonglong)pFVar6 & 1) != 0) {
    pFVar6 = (FGuid *)(((longlong)pFVar6 >> 0x18) + (longlong)puVar5);
  }
  TArray<FGuid,TSizedDefaultAllocator<32>_>::CopyToEmpty<FGuid,int>
            (&param_2->ParameterCollections,pFVar6,*(int *)(lVar2 + 0x1c0),
             (param_2->ParameterCollections).ArrayMax);
  return;
}

// EvaluateUniformExpressions @ 147f76b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
FMaterialRenderProxy::EvaluateUniformExpressions
          (FMaterialRenderProxy *this,FRHICommandListBase *param_1,FUniformExpressionCache *param_2,
          FMaterialRenderContext *param_3,FUniformExpressionCacheAsyncUpdater *param_4)

{
  int *piVar1;
  FMaterial *pFVar2;
  FScriptContainerElement *pFVar3;
  FRHIUniformBuffer *pFVar4;
  FRHIUniformBufferLayout *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  URuntimeVirtualTexture *this_00;
  bool bVar9;
  bool bVar10;
  char cVar11;
  FVirtualTextureProducerHandle FVar12;
  int iVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_CacheUniformExpressions> FVar15;
  IRendererModule *pIVar16;
  ulonglong uVar17;
  FMaterialVirtualTextureStack *pFVar18;
  longlong *plVar19;
  ForAnyElementType FVar20;
  FTextureCollectionResource *pFVar21;
  TRefCountPtr<FRHIUniformBuffer> TVar22;
  uint *puVar23;
  FTlsAutoCleanup *pFVar24;
  FRHIUniformBufferLayout *pFVar25;
  uint uVar26;
  FName FVar27;
  uint uVar28;
  FUniformExpressionSet *pFVar29;
  longlong lVar30;
  longlong lVar31;
  bool bVar32;
  IAllocatedVirtualTexture *local_120;
  undefined1 local_118;
  undefined1 local_117 [7];
  FName local_110;
  uint local_108;
  FColor_u_0 local_104;
  undefined4 local_100 [2];
  UTextureCollection *local_f8;
  FMemMark local_f0;
  FName local_c8;
  URuntimeVirtualTexture *local_c0;
  longlong local_b8;
  FUniformExpressionSet *local_b0;
  FMaterialShaderMap *local_a8;
  FName local_a0;
  FRHIResource *local_88;
  FRHIResource *local_80;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined1 *local_60;
  FName local_58 [3];
  
  FVar15 = StatPtr_STAT_CacheUniformExpressions;
  if (StatPtr_STAT_CacheUniformExpressions ==
      (FThreadSafeStaticStat<FStat_STAT_CacheUniformExpressions>)0x0) {
    pFVar14 = ::FName::FName(local_58,"STAT_CacheUniformExpressions");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_CacheUniformExpressions>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CacheUniformExpressions,*pFVar14,
                        L"Cache Uniform Expressions","STATGROUP_SceneRendering","STATCAT_Advanced",
                        L"Scene Rendering",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar27 = *(FName *)FVar15;
  bVar7 = false;
  bVar8 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  bVar9 = false;
  bVar32 = false;
  if ((FVar27.ComparisonIndex.Value.Value != 0) || (FVar27.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_104.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_104._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar9 = false;
      bVar32 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_c8.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                   ,0x1b8);
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
        bVar32 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_110 = FVar27;
      FThreadStats::AddMessage(FVar27,CycleScopeStart);
      bVar9 = true;
      goto LAB_147f76d01;
    }
  }
  bVar8 = bVar32;
  bVar7 = bVar9;
  bVar9 = false;
  local_110 = local_a0;
  FVar27 = local_a0;
LAB_147f76d01:
  bVar32 = -1 < CpuChannel->Enabled;
  if (bVar32) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId442,"FMaterialRenderProxy::EvaluateUniformExpressions",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
               ,0x1ba);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId442);
  }
  pFVar2 = param_3->Material;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInParallelRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                          ,0x565,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a8 = (pFVar2->RenderingThreadShaderMap).Reference;
  lVar31 = local_a8->_padding_;
  pFVar29 = (FUniformExpressionSet *)(lVar31 + 0x70);
  param_2->CachedUniformExpressionShaderMap = (FMaterialShaderMap *)0x0;
  local_b0 = pFVar29;
  FUniformExpressionCache::ResetAllocatedVTs(param_2);
  uVar28 = *(uint *)(lVar31 + 0x1a0);
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
  }
  piVar1 = &(param_2->AllocatedVTs).ArrayMax;
  (param_2->AllocatedVTs).ArrayNum = 0;
  if (*piVar1 != uVar28) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar28,&(param_2->AllocatedVTs).AllocatorInstance,0,piVar1);
  }
  uVar28 = *(uint *)(lVar31 + 0x1a0);
  if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar28);
  }
  piVar1 = &(param_2->OwnedAllocatedVTs).ArrayMax;
  (param_2->OwnedAllocatedVTs).ArrayNum = 0;
  if (*piVar1 != uVar28) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar28,&(param_2->OwnedAllocatedVTs).AllocatorInstance,0,piVar1);
  }
  if (this->bHasVirtualTextureCallbacks != '\0') {
    pIVar16 = GetRendererModule();
    (**(code **)((longlong)*pIVar16 + 0x178))(pIVar16,this);
    this->bHasVirtualTextureCallbacks = '\0';
  }
  iVar13 = *(int *)(lVar31 + 0x1a0);
  local_108 = 0;
  if (0 < iVar13) {
    local_b8 = 0;
    do {
      lVar30 = local_b8;
      uVar28 = local_108;
      uVar26 = 0;
      if ((int)local_108 < iVar13) {
        uVar26 = ~local_108 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = *(ulonglong *)(lVar31 + 0x198);
      if ((uVar17 & 1) != 0) {
        uVar17 = (longlong)(pFVar29->UniformTextureParameters + 0xe) +
                 ((longlong)uVar17 >> 0x18) + 8;
      }
      pFVar18 = (FMaterialVirtualTextureStack *)(uVar17 + lVar30);
      local_120 = (IAllocatedVirtualTexture *)0x0;
      if (pFVar18->PreallocatedStackTextureIndex == -1) {
        local_120 = AllocateVTStack(this,param_1,param_3,pFVar29,pFVar18);
        if (local_120 != (IAllocatedVirtualTexture *)0x0) {
          pFVar3 = (param_2->OwnedAllocatedVTs).AllocatorInstance.Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_120) &&
              ((FScriptContainerElement *)&local_120 <
               pFVar3 + (longlong)(param_2->OwnedAllocatedVTs).ArrayMax * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar13 = (param_2->OwnedAllocatedVTs).ArrayNum;
          if (iVar13 == (param_2->OwnedAllocatedVTs).ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&(param_2->OwnedAllocatedVTs).AllocatorInstance,
                                &(param_2->OwnedAllocatedVTs).ArrayMax);
          }
          (param_2->OwnedAllocatedVTs).ArrayNum = iVar13 + 1;
          *(IAllocatedVirtualTexture **)
           ((param_2->OwnedAllocatedVTs).AllocatorInstance.Data + (longlong)iVar13 * 8) = local_120;
        }
      }
      else {
        puVar23 = &pFVar18->NumLayers;
        uVar26 = 0;
        if (*puVar23 != 0) {
          do {
            pFVar18 = (FMaterialVirtualTextureStack *)pFVar18->LayerUniformExpressionIndices;
            if (*(int *)pFVar18 != -1) {
              local_c0 = (URuntimeVirtualTexture *)0x0;
              FUniformExpressionSet::GetTextureValue
                        (pFVar29,*(int *)pFVar18,param_3,param_3->Material,&local_c0);
              this_00 = local_c0;
              if (local_c0 != (URuntimeVirtualTexture *)0x0) {
                if (this->bMarkedTransient == '\0') {
                  pIVar16 = GetRendererModule();
                  pcVar6 = *(code **)((longlong)*pIVar16 + 0x170);
                  FVar12 = URuntimeVirtualTexture::GetProducerHandle(this_00);
                  (*pcVar6)(pIVar16,FVar12.PackedValue,OnVirtualTextureDestroyedCB,this);
                  this->bHasVirtualTextureCallbacks = '\x01';
                  lVar30 = local_b8;
                  uVar28 = local_108;
                }
                local_120 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(this_00);
                goto LAB_147f77079;
              }
              break;
            }
            uVar26 = uVar26 + 1;
          } while (uVar26 < *puVar23);
        }
        local_120 = (IAllocatedVirtualTexture *)0x0;
      }
LAB_147f77079:
      pFVar3 = (param_2->AllocatedVTs).AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_120) &&
          ((FScriptContainerElement *)&local_120 <
           pFVar3 + (longlong)(param_2->AllocatedVTs).ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar13 = (param_2->AllocatedVTs).ArrayNum;
      if (iVar13 == (param_2->AllocatedVTs).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(param_2->AllocatedVTs).AllocatorInstance,
                            &(param_2->AllocatedVTs).ArrayMax);
      }
      local_108 = uVar28 + 1;
      (param_2->AllocatedVTs).ArrayNum = iVar13 + 1;
      local_b8 = lVar30 + 0x28;
      *(IAllocatedVirtualTexture **)
       ((param_2->AllocatedVTs).AllocatorInstance.Data + (longlong)iVar13 * 8) = local_120;
      iVar13 = *(int *)(lVar31 + 0x1a0);
      FVar27 = local_110;
    } while ((int)local_108 < iVar13);
  }
  pFVar29 = local_b0;
  uVar28 = 0;
  iVar13 = (local_b0->MaterialCacheTagStacks).ArrayNum;
  if (0 < iVar13) {
    do {
      uVar26 = 0;
      if ((int)uVar28 < iVar13) {
        uVar26 = ~uVar28 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar20 = (pFVar29->MaterialCacheTagStacks).AllocatorInstance;
      if (((ulonglong)FVar20 & 1) != 0) {
        FVar20 = (ForAnyElementType)
                 ((longlong)&(pFVar29->MaterialCacheTagStacks).AllocatorInstance.field_0x0 +
                 ((longlong)FVar20 >> 0x18));
      }
      pIVar16 = GetRendererModule();
      plVar19 = (longlong *)(**(code **)((longlong)*pIVar16 + 0x138))(pIVar16);
      (**(code **)(*plVar19 + 0x30))
                (plVar19,(longlong)(int)uVar28 * 0x10 + (longlong)FVar20,OnTagChangedCB,this);
      this->bHasMaterialCacheCallbacks = '\x01';
      uVar28 = uVar28 + 1;
      iVar13 = (pFVar29->MaterialCacheTagStacks).ArrayNum;
    } while ((int)uVar28 < iVar13);
  }
  iVar13 = (pFVar29->UniformTextureCollectionParameters).ArrayNum;
  uVar28 = 0;
  if (0 < iVar13) {
    lVar31 = 0;
    do {
      uVar26 = 0;
      if ((int)uVar28 < iVar13) {
        uVar26 = ~uVar28 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar20 = (pFVar29->UniformTextureCollectionParameters).AllocatorInstance;
      if (((ulonglong)FVar20 & 1) != 0) {
        FVar20 = (ForAnyElementType)
                 ((longlong)
                  &(((TArray<FMaterialTextureCollectionParameterInfo,TMemoryImageAllocator<0>_> *)
                    (pFVar29->UniformTextureParameters + 8))->AllocatorInstance).field_0x0 +
                 ((longlong)FVar20 >> 0x18));
      }
      if (*(char *)(lVar31 + 0x18 + (longlong)FVar20) != '\0') {
        local_f8 = (UTextureCollection *)0x0;
        FUniformExpressionSet::GetTextureCollectionValue
                  (pFVar29,uVar28,param_3,param_3->Material,&local_f8);
        if (local_f8 != (UTextureCollection *)0x0) {
          cVar11 = (**(code **)(local_f8->_padding_ + 0x2b8))();
          if (cVar11 == '\0') {
            bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4628389292270420472>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                                ,0x1f8,"Texture->IsVirtualCollection()");
            if (bVar10) {
code_r0x000147f77351:
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            pFVar21 = UTextureCollection::GetResource(local_f8);
            if (pFVar21 != (FTextureCollectionResource *)0x0) {
              if (pFVar21->bIsBindless == false) {
                pIVar16 = GetRendererModule();
                local_100[0] = (undefined4)pFVar21[2]._padding_;
                (**(code **)((longlong)*pIVar16 + 0x170))
                          (pIVar16,local_100,OnVirtualTextureDestroyedCB,this);
                this->bHasVirtualTextureCallbacks = '\x01';
              }
              else {
                bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<4628389292270420479>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                                    ,0x1ff,"!Resource->bIsBindless");
                if (bVar10) goto code_r0x000147f77351;
              }
            }
          }
        }
      }
      iVar13 = (pFVar29->UniformTextureCollectionParameters).ArrayNum;
      uVar28 = uVar28 + 1;
      lVar31 = lVar31 + 0x1c;
      FVar27 = local_110;
    } while ((int)uVar28 < iVar13);
  }
  pFVar4 = (param_2->UniformBuffer).Reference;
  pFVar5 = (local_a8->UniformBufferLayout).Reference;
  if (pFVar4 != (FRHIUniformBuffer *)0x0) {
    uVar28 = (uint)pFVar4->_padding_;
    if (((uVar28 >> 0x1e & 1) != 0) || ((uVar28 & 0x3fffffff) == 0)) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogMaterial);
    }
    pFVar25 = (((param_2->UniformBuffer).Reference)->Layout).Reference;
    if (((pFVar25 != pFVar5) &&
        ((((pFVar25->ConstantBufferSize != pFVar5->ConstantBufferSize ||
           (pFVar25->StaticSlot != pFVar5->StaticSlot)) ||
          (pFVar25->BindingFlags != pFVar5->BindingFlags)) ||
         ((iVar13 = (pFVar25->Resources).ArrayNum, iVar13 != (pFVar5->Resources).ArrayNum ||
          (bVar10 = CompareItems<FRHIUniformBufferResource,int>
                              ((FRHIUniformBufferResource *)
                               (pFVar25->Resources).AllocatorInstance.Data,
                               (FRHIUniformBufferResource *)
                               (pFVar5->Resources).AllocatorInstance.Data,iVar13), !bVar10)))))) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutUniformExpressionCache.UniformBuffer->GetLayoutPtr() == UniformBufferLayout || *OutUniformExpressionCache.UniformBuffer->GetLayoutPtr() == *UniformBufferLayout"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                            ,0x220,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (param_4 == (FUniformExpressionCacheAsyncUpdater *)0x0) {
    puVar23 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_70 = &local_118;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar24 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar23);
    local_f0.Mem = (FMemStackBase *)(pFVar24 + 2);
    local_f0.Top = (local_f0.Mem)->Top;
    local_f0.SavedChunk = *(FTaggedMemory **)(pFVar24 + 4);
    local_f0.bPopped = false;
    local_f0.NextTopmostMark = *(FMemMark **)(pFVar24 + 5);
    pFVar24[5] = (FTlsAutoCleanup)&local_f0;
    *(int *)(pFVar24 + 6) = *(int *)(pFVar24 + 6) + 1;
    puVar23 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_60 = local_117;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar24 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar23);
    pFVar25 = FMemStackBase::Alloc
                        ((FMemStackBase *)(pFVar24 + 2),(ulonglong)pFVar5->ConstantBufferSize,0x10);
    FUniformExpressionSet::FillUniformBuffer
              (pFVar29,param_3,param_2,pFVar5,(uchar *)pFVar25,pFVar5->ConstantBufferSize);
    pFVar4 = (param_2->UniformBuffer).Reference;
    if (pFVar4 == (FRHIUniformBuffer *)0x0) {
      TVar22 = RHICreateUniformBuffer(&local_80,pFVar25,(EUniformBufferUsage)pFVar5,2);
      if ((FRHIUniformBuffer *)param_2 != TVar22.Reference) {
        pFVar4 = (param_2->UniformBuffer).Reference;
        (param_2->UniformBuffer).Reference = (FRHIUniformBuffer *)(TVar22.Reference)->_padding_;
        (TVar22.Reference)->_padding_ = 0;
        if (pFVar4 != (FRHIUniformBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar4);
        }
      }
      if (local_80 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_80);
      }
    }
    else {
      FRHICommandListBase::UpdateUniformBuffer(param_1,pFVar4,pFVar25);
    }
    if (local_f0.bPopped == false) {
      if (((local_f0.Mem)->TopMark != &local_f0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Mem.TopMark == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                              ,0x215,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_f0.bPopped = true;
      (local_f0.Mem)->NumMarks = (local_f0.Mem)->NumMarks + -1;
      if (local_f0.SavedChunk != (local_f0.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_f0.Mem,local_f0.SavedChunk);
      }
      (local_f0.Mem)->Top = local_f0.Top;
      (local_f0.Mem)->TopMark = local_f0.NextTopmostMark;
    }
  }
  else {
    if ((param_2->UniformBuffer).Reference == (FRHIUniformBuffer *)0x0) {
      TVar22 = RHICreateUniformBuffer
                         (&local_88,(FRHIUniformBufferLayout *)0x0,(EUniformBufferUsage)pFVar5,2);
      if ((FRHIUniformBuffer *)param_2 != TVar22.Reference) {
        pFVar4 = (param_2->UniformBuffer).Reference;
        (param_2->UniformBuffer).Reference = (FRHIUniformBuffer *)(TVar22.Reference)->_padding_;
        (TVar22.Reference)->_padding_ = 0;
        if (pFVar4 != (FRHIUniformBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar4);
        }
      }
      if (local_88 != (FRHIResource *)0x0) {
        FRHIResource::Release(local_88);
      }
    }
    iVar13 = (param_4->Items).ArrayNum;
    piVar1 = &(param_4->Items).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FUniformExpressionCacheAsyncUpdater::FItem>_>
                         (0x840,(ForElementType<FUniformExpressionCacheAsyncUpdater::FItem> *)
                                param_4,piVar1);
    }
    (param_4->Items).ArrayNum = iVar13 + 1;
    FUniformExpressionCacheAsyncUpdater::FItem::FItem
              ((param_4->Items).AllocatorInstance.Data + iVar13,param_2,pFVar29,pFVar5,param_3);
  }
  (**(code **)(this->_padding_ + 0x68))(this,param_1,param_2,param_3,param_4);
  param_2->CachedUniformExpressionShaderMap = local_a8;
  this->UniformExpressionCacheSerialNumber = this->UniformExpressionCacheSerialNumber + 1;
  if (bVar32) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar27,CycleScopeEnd);
  }
  return;
}

// FinishCacheUniformExpressions @ 147f77d80

void __thiscall FMaterialRenderProxy::FinishCacheUniformExpressions(FMaterialRenderProxy *this)

{
  return;
}

// GetBlendableLocation @ 147f79480

/* WARNING: Enum "EBlendableLocation": Some values do not have unique names */

EBlendableLocation __thiscall
FMaterialRenderProxy::GetBlendableLocation(FMaterialRenderProxy *this,FMaterial *param_1)

{
  code *pcVar1;
  bool bVar2;
  EBlendableLocation EVar3;
  
  if (param_1 == (FMaterial *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Base",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                       ,0x130,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f794bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar3 = (**(code **)(param_1->_padding_ + 0x430))(param_1);
  return EVar3;
}

// GetBlendablePriority @ 147f79500

int __thiscall
FMaterialRenderProxy::GetBlendablePriority(FMaterialRenderProxy *this,FMaterial *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == (FMaterial *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Base",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                       ,0x136,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147f7953f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar3 = (**(code **)(param_1->_padding_ + 0x438))(param_1);
  return iVar3;
}

// GetIncompleteMaterialWithFallback @ 147f79e10

FMaterial * __thiscall
FMaterialRenderProxy::GetIncompleteMaterialWithFallback(FMaterialRenderProxy *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  FMaterial *pFVar3;
  
  pFVar3 = (FMaterial *)(**(code **)(this->_padding_ + 0x30))();
  while( true ) {
    if (pFVar3 != (FMaterial *)0x0) {
      return pFVar3;
    }
    this = (FMaterialRenderProxy *)(**(code **)(this->_padding_ + 0x38))(this,param_1);
    if ((this == (FMaterialRenderProxy *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FallbackMaterialProxy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                           ,0x345,L""), bVar2)) break;
    pFVar3 = (FMaterial *)(**(code **)(this->_padding_ + 0x30))(this,param_1);
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FMaterial *)(*pcVar1)();
  return pFVar3;
}

// GetMaterialInterface @ 147f79f70

UMaterialInterface * __thiscall
FMaterialRenderProxy::GetMaterialInterface(FMaterialRenderProxy *this)

{
  return (UMaterialInterface *)0x0;
}

// GetMaterialWithFallback @ 147f7a620

FMaterial * __thiscall
FMaterialRenderProxy::GetMaterialWithFallback
          (FMaterialRenderProxy *this,Type param_1,FMaterialRenderProxy **param_2)

{
  code *pcVar1;
  bool bVar2;
  FMaterial *pFVar3;
  
  pFVar3 = (FMaterial *)(**(code **)(this->_padding_ + 0x30))();
  if ((pFVar3 == (FMaterial *)0x0) ||
     (pFVar3->bRenderingThreadShaderMapIsComplete == (atomic<bool>)0x0)) {
    do {
      this = (FMaterialRenderProxy *)(**(code **)(this->_padding_ + 0x38))(this,param_1);
      if ((this == (FMaterialRenderProxy *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("FallbackMaterialProxy",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                             ,0x32d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMaterial *)(*pcVar1)();
        return pFVar3;
      }
      pFVar3 = (FMaterial *)(**(code **)(this->_padding_ + 0x30))(this,param_1);
    } while ((pFVar3 == (FMaterial *)0x0) ||
            (pFVar3->bRenderingThreadShaderMapIsComplete == (atomic<bool>)0x0));
    *param_2 = this;
  }
  return pFVar3;
}

// GetParameterCollectionValue @ 147f7aa50

bool __thiscall
FMaterialRenderProxy::GetParameterCollectionValue
          (FMaterialRenderProxy *this,FMemoryImageMaterialParameterInfo *param_1,
          UMaterialParameterCollection **param_2,FMaterialRenderContext *param_3)

{
  char cVar1;
  UMaterialParameterCollection *local_38 [4];
  undefined1 local_18;
  
  local_18 = 0xff;
  cVar1 = (**(code **)(this->_padding_ + 0x48))(this,9,param_1,local_38,param_3);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetParameterShaderValue @ 147f7aaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
FMaterialRenderProxy::GetParameterShaderValue
          (FMaterialRenderProxy *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FValue *param_3,FMaterialRenderContext *param_4
          )

{
  ForElementType<UE::Shader::FValueComponent> FVar1;
  FName FVar2;
  undefined7 uVar3;
  char cVar4;
  bool bVar5;
  FValue *pFVar6;
  undefined7 in_register_00000011;
  undefined1 auStack_128 [32];
  FMaterialRenderContext *local_108;
  FMaterialParameterValue local_f8;
  FValue local_d0;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_f8.Type = None;
  local_108 = param_4;
  cVar4 = (**(code **)(this->_padding_ + 0x48))
                    (this,CONCAT71(in_register_00000011,param_1),param_2,&local_f8);
  if (cVar4 == '\0') {
    bVar5 = false;
  }
  else {
    pFVar6 = FMaterialParameterValue::AsShaderValue(&local_f8,&local_d0);
    FVar2 = (pFVar6->Type).ObjectType;
    (param_3->Type).StructType = (pFVar6->Type).StructType;
    (param_3->Type).ObjectType = FVar2;
    uVar3 = *(undefined7 *)&(pFVar6->Type).field_0x11;
    (param_3->Type).ValueType = (pFVar6->Type).ValueType;
    *(undefined7 *)&(param_3->Type).field_0x11 = uVar3;
    if (&param_3->Component != &pFVar6->Component) {
      if ((pFVar6->Component).AllocatorInstance.SecondaryData ==
          (ForElementType<UE::Shader::FValueComponent>)0x0) {
        memmove(&param_3->Component,&pFVar6->Component,0x80);
      }
      FVar1 = (param_3->Component).AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<UE::Shader::FValueComponent>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      (param_3->Component).AllocatorInstance.SecondaryData =
           (pFVar6->Component).AllocatorInstance.SecondaryData;
      (pFVar6->Component).AllocatorInstance.SecondaryData =
           (ForElementType<UE::Shader::FValueComponent>)0x0;
      (param_3->Component).ArrayNum = (pFVar6->Component).ArrayNum;
      (param_3->Component).ArrayMax = (pFVar6->Component).ArrayMax;
      (pFVar6->Component).ArrayNum = 0;
      (pFVar6->Component).ArrayMax = 0x10;
    }
    if (local_d0.Component.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Shader::FValueComponent>)0x0) {
      FMemory::Free((void *)local_d0.Component.AllocatorInstance.SecondaryData);
    }
    bVar5 = true;
  }
  return bVar5;
}

// GetPreallocatedVTStack @ 147f7aeb0

IAllocatedVirtualTexture * __thiscall
FMaterialRenderProxy::GetPreallocatedVTStack
          (FMaterialRenderProxy *this,FMaterialRenderContext *param_1,FUniformExpressionSet *param_2
          ,FMaterialVirtualTextureStack *param_3)

{
  code *pcVar1;
  uint *puVar2;
  URuntimeVirtualTexture *this_00;
  bool bVar3;
  uint uVar4;
  FVirtualTextureProducerHandle FVar5;
  IAllocatedVirtualTexture *pIVar6;
  IRendererModule *pIVar7;
  URuntimeVirtualTexture *local_18 [2];
  
  if ((param_3->PreallocatedStackTextureIndex == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("VTStack.IsPreallocatedStack()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp"
                         ,0x150,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pIVar6 = (IAllocatedVirtualTexture *)(*pcVar1)();
    return pIVar6;
  }
  puVar2 = &param_3->NumLayers;
  uVar4 = 0;
  if (*puVar2 != 0) {
    do {
      param_3 = (FMaterialVirtualTextureStack *)param_3->LayerUniformExpressionIndices;
      if (*(int *)param_3 != -1) {
        local_18[0] = (URuntimeVirtualTexture *)0x0;
        FUniformExpressionSet::GetTextureValue
                  (param_2,*(int *)param_3,param_1,param_1->Material,local_18);
        this_00 = local_18[0];
        if (local_18[0] == (URuntimeVirtualTexture *)0x0) {
          return (IAllocatedVirtualTexture *)0x0;
        }
        if (this->bMarkedTransient == '\0') {
          pIVar7 = GetRendererModule();
          pcVar1 = *(code **)((longlong)*pIVar7 + 0x170);
          FVar5 = URuntimeVirtualTexture::GetProducerHandle(this_00);
          (*pcVar1)(pIVar7,FVar5.PackedValue,OnVirtualTextureDestroyedCB,this);
          this->bHasVirtualTextureCallbacks = '\x01';
        }
        pIVar6 = URuntimeVirtualTexture::GetAllocatedVirtualTexture(this_00);
        return pIVar6;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *puVar2);
  }
  return (IAllocatedVirtualTexture *)0x0;
}

// GetScalarValue @ 147f7b9f0

bool __thiscall
FMaterialRenderProxy::GetScalarValue
          (FMaterialRenderProxy *this,FMemoryImageMaterialParameterInfo *param_1,float *param_2,
          FMaterialRenderContext *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  float local_38 [8];
  char local_18;
  
  local_18 = -1;
  cVar2 = (**(code **)(this->_padding_ + 0x48))(this,0,param_1,local_38,param_3);
  if (cVar2 == '\0') {
    return false;
  }
  if (local_18 != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::Scalar",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x176,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  *param_2 = local_38[0];
  return true;
}

// GetTextureCollectionValue @ 147f7c8e0

bool __thiscall
FMaterialRenderProxy::GetTextureCollectionValue
          (FMaterialRenderProxy *this,FMemoryImageMaterialParameterInfo *param_1,
          UTextureCollection **param_2,FMaterialRenderContext *param_3)

{
  char cVar1;
  UTextureCollection *local_38 [4];
  undefined1 local_18;
  
  local_18 = 0xff;
  cVar1 = (**(code **)(this->_padding_ + 0x48))(this,4,param_1,local_38,param_3);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetTextureValue @ 147f7c930

bool __thiscall
FMaterialRenderProxy::GetTextureValue
          (FMaterialRenderProxy *this,FMemoryImageMaterialParameterInfo *param_1,
          URuntimeVirtualTexture **param_2,FMaterialRenderContext *param_3)

{
  char cVar1;
  URuntimeVirtualTexture *local_38 [4];
  undefined1 local_18;
  
  local_18 = 0xff;
  cVar1 = (**(code **)(this->_padding_ + 0x48))(this,6,param_1,local_38,param_3);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetTextureValue @ 147f7c980

bool __thiscall
FMaterialRenderProxy::GetTextureValue
          (FMaterialRenderProxy *this,FMemoryImageMaterialParameterInfo *param_1,
          USparseVolumeTexture **param_2,FMaterialRenderContext *param_3)

{
  char cVar1;
  USparseVolumeTexture *local_38 [4];
  undefined1 local_18;
  
  local_18 = 0xff;
  cVar1 = (**(code **)(this->_padding_ + 0x48))(this,7,param_1,local_38,param_3);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetTextureValue @ 147f7c9d0

bool __thiscall
FMaterialRenderProxy::GetTextureValue
          (FMaterialRenderProxy *this,FMemoryImageMaterialParameterInfo *param_1,UTexture **param_2,
          FMaterialRenderContext *param_3)

{
  char cVar1;
  UTexture *local_38 [4];
  undefined1 local_18;
  
  local_18 = 0xff;
  cVar1 = (**(code **)(this->_padding_ + 0x48))(this,3,param_1,local_38,param_3);
  if (cVar1 != '\0') {
    *param_2 = local_38[0];
    return true;
  }
  return false;
}

// GetUserSceneTextureOutput @ 147f7d040

FName __thiscall
FMaterialRenderProxy::GetUserSceneTextureOutput(FMaterialRenderProxy *this,FMaterial *param_1)

{
  char cVar1;
  int iVar2;
  FMaterialShaderMap *pFVar3;
  FMaterial *in_R8;
  undefined4 local_18;
  
  param_1->_padding_ = 0;
  iVar2 = (**(code **)(in_R8->_padding_ + 0x430))();
  if (iVar2 != 3) {
    cVar1 = (**(code **)(this->_padding_ + 0x50))(this,param_1);
    if (cVar1 == '\0') {
      pFVar3 = FMaterial::GetRenderingThreadShaderMap(in_R8);
      local_18 = (undefined4)*(undefined8 *)(pFVar3->_padding_ + 0x284);
      param_1->_padding_ = CONCAT44(*(undefined4 *)(pFVar3->_padding_ + 0x28c),local_18);
    }
  }
  return (FName)param_1;
}

// GetVectorValue @ 147f7d0d0

bool __thiscall
FMaterialRenderProxy::GetVectorValue
          (FMaterialRenderProxy *this,FMemoryImageMaterialParameterInfo *param_1,
          FLinearColor *param_2,FMaterialRenderContext *param_3)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_18;
  
  local_18 = -1;
  cVar2 = (**(code **)(this->_padding_ + 0x48))(this,1,param_1,&local_38,param_3);
  if (cVar2 == '\0') {
    return false;
  }
  if (local_18 != '\x01') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Type == EMaterialParameterType::Vector",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Materials\\MaterialParameters.h"
                       ,0x177,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  *(undefined8 *)&param_2->field0_0x0 = local_38;
  *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = uStack_30;
  return true;
}

// HasDeferredUniformExpressionCacheRequests @ 147f7d180

bool __cdecl FMaterialRenderProxy::HasDeferredUniformExpressionCacheRequests(void)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  bool bVar4;
  
  LOCK();
  bVar4 = DeferredUniformExpressionCacheRequestsMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    DeferredUniformExpressionCacheRequestsMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&DeferredUniformExpressionCacheRequestsMutex);
  }
  iVar3 = DeferredUniformExpressionCacheRequests.Elements._8_4_ -
          DeferredUniformExpressionCacheRequests.Elements._52_4_;
  LOCK();
  aVar2 = DeferredUniformExpressionCacheRequestsMutex.State + -1;
  UNLOCK();
  bVar1 = (byte)DeferredUniformExpressionCacheRequestsMutex.State & 2;
  DeferredUniformExpressionCacheRequestsMutex.State = aVar2;
  if (bVar1 != 0) {
    UE::FMutex::WakeWaitingThread(&DeferredUniformExpressionCacheRequestsMutex);
  }
  return 0 < iVar3;
}

// InitRHI @ 147f7d7f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialRenderProxy::InitRHI(FMaterialRenderProxy *this,FRHICommandListBase *param_1)

{
  return;
}

// InvalidateUniformExpressionCache @ 147f7fac0

void __thiscall
FMaterialRenderProxy::InvalidateUniformExpressionCache(FMaterialRenderProxy *this,bool param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  IRendererModule *pIVar6;
  longlong *plVar7;
  
  if (GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait
              ((FTaskBase *)GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference);
  }
  FRDGBuilder::WaitForAsyncExecuteTask();
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  LOCK();
  bVar4 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(this_00);
  }
  bVar5 = this->field_0xbc;
  if (this->bHasVirtualTextureCallbacks != '\0') {
    pIVar6 = GetRendererModule();
    (**(code **)((longlong)*pIVar6 + 0x178))(pIVar6,this);
    this->bHasVirtualTextureCallbacks = '\0';
    bVar5 = this->field_0xbc;
  }
  if ((bVar5 & 0x20) != 0) {
    pIVar6 = GetRendererModule();
    plVar7 = (longlong *)(**(code **)((longlong)*pIVar6 + 0x138))(pIVar6);
    (**(code **)(*plVar7 + 0x38))(plVar7,this);
    this->bHasMaterialCacheCallbacks = '\0';
  }
  this->UniformExpressionCacheSerialNumber = this->UniformExpressionCacheSerialNumber + 1;
  (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
       (FMaterialShaderMap *)0x0;
  FUniformExpressionCache::ResetAllocatedVTs(&(this->UniformExpressionCache).Elements);
  if ((param_1) &&
     (pFVar2 = (this->UniformExpressionCache).Elements.UniformBuffer.Reference,
     pFVar2 != (FRHIUniformBuffer *)0x0)) {
    (this->UniformExpressionCache).Elements.UniformBuffer.Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
    (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
         (FMaterialShaderMap *)0x0;
    FUniformExpressionCache::ResetAllocatedVTs(&(this->UniformExpressionCache).Elements);
LAB_147f7fbe3:
    pFVar2 = (this->UniformExpressionCache).Elements.UniformBuffer.Reference;
    if (pFVar2 == (FRHIUniformBuffer *)0x0) goto LAB_147f7fc04;
    (this->UniformExpressionCache).Elements.UniformBuffer.Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
    (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
         (FMaterialShaderMap *)0x0;
    FUniformExpressionCache::ResetAllocatedVTs(&(this->UniformExpressionCache).Elements);
LAB_147f7fc16:
    pFVar2 = (this->UniformExpressionCache).Elements.UniformBuffer.Reference;
    if (pFVar2 == (FRHIUniformBuffer *)0x0) goto LAB_147f7fc37;
    (this->UniformExpressionCache).Elements.UniformBuffer.Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
    (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
         (FMaterialShaderMap *)0x0;
    FUniformExpressionCache::ResetAllocatedVTs(&(this->UniformExpressionCache).Elements);
LAB_147f7fc49:
    pFVar2 = (this->UniformExpressionCache).Elements.UniformBuffer.Reference;
    if (pFVar2 == (FRHIUniformBuffer *)0x0) goto LAB_147f7fc6a;
    (this->UniformExpressionCache).Elements.UniformBuffer.Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
    (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
         (FMaterialShaderMap *)0x0;
    FUniformExpressionCache::ResetAllocatedVTs(&(this->UniformExpressionCache).Elements);
  }
  else {
    (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
         (FMaterialShaderMap *)0x0;
    FUniformExpressionCache::ResetAllocatedVTs(&(this->UniformExpressionCache).Elements);
    if (param_1) goto LAB_147f7fbe3;
LAB_147f7fc04:
    (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
         (FMaterialShaderMap *)0x0;
    FUniformExpressionCache::ResetAllocatedVTs(&(this->UniformExpressionCache).Elements);
    if (param_1) goto LAB_147f7fc16;
LAB_147f7fc37:
    (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
         (FMaterialShaderMap *)0x0;
    FUniformExpressionCache::ResetAllocatedVTs(&(this->UniformExpressionCache).Elements);
    if (param_1) goto LAB_147f7fc49;
LAB_147f7fc6a:
    (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap =
         (FMaterialShaderMap *)0x0;
    FUniformExpressionCache::ResetAllocatedVTs(&(this->UniformExpressionCache).Elements);
    if (!param_1) goto LAB_147f7fc8e;
  }
  pFVar2 = (this->UniformExpressionCache).Elements.UniformBuffer.Reference;
  if (pFVar2 != (FRHIUniformBuffer *)0x0) {
    (this->UniformExpressionCache).Elements.UniformBuffer.Reference = (FRHIUniformBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
LAB_147f7fc8e:
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// ReleaseRHI @ 147f84830

void __thiscall FMaterialRenderProxy::ReleaseRHI(FMaterialRenderProxy *this)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  FExternalTextureRegistry *this_00;
  bool bVar4;
  
  LOCK();
  bVar4 = DeferredUniformExpressionCacheRequestsMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar4) {
    DeferredUniformExpressionCacheRequestsMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar4) {
    UE::FMutex::LockSlow(&DeferredUniformExpressionCacheRequestsMutex);
  }
  iVar3 = TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>
          ::Remove(&DeferredUniformExpressionCacheRequests,this);
  LOCK();
  aVar2 = DeferredUniformExpressionCacheRequestsMutex.State + -1;
  UNLOCK();
  bVar1 = (byte)DeferredUniformExpressionCacheRequestsMutex.State & 2;
  DeferredUniformExpressionCacheRequestsMutex.State = aVar2;
  if (bVar1 != 0) {
    UE::FMutex::WakeWaitingThread(&DeferredUniformExpressionCacheRequestsMutex);
  }
  if (iVar3 != 0) {
    (**(code **)(this->_padding_ + 0x78))(this);
  }
  InvalidateUniformExpressionCache(this,true);
  this_00 = FExternalTextureRegistry::Get();
  FExternalTextureRegistry::RemoveMaterialRenderProxyReference(this_00,this);
  return;
}

// ReleaseResource @ 147f84a20

void __thiscall FMaterialRenderProxy::ReleaseResource(FMaterialRenderProxy *this)

{
  byte bVar1;
  IRendererModule *pIVar2;
  longlong *plVar3;
  
  this->ReleaseResourceFlag = '\x01';
  FRenderResource::ReleaseResource((FRenderResource *)this);
  bVar1 = this->field_0xbc;
  if (this->bHasVirtualTextureCallbacks != '\0') {
    pIVar2 = GetRendererModule();
    (**(code **)((longlong)*pIVar2 + 0x178))(pIVar2,this);
    this->bHasVirtualTextureCallbacks = '\0';
    bVar1 = this->field_0xbc;
  }
  if ((bVar1 & 0x20) != 0) {
    pIVar2 = GetRendererModule();
    plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0x138))(pIVar2);
    (**(code **)(*plVar3 + 0x38))(plVar3,this);
    this->bHasMaterialCacheCallbacks = '\0';
  }
  return;
}

// StartCacheUniformExpressions @ 147f89c10

void __thiscall FMaterialRenderProxy::StartCacheUniformExpressions(FMaterialRenderProxy *this)

{
  return;
}

// UpdateDeferredCachedUniformExpressions @ 147f8cf00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions
          (FRHICommandListBase *param_1,FTaskHandle *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  code *pcVar4;
  byte bVar5;
  atomic<unsigned_char> aVar6;
  FRHICommandListBase *this;
  FTaskBase *this_00;
  char cVar7;
  bool bVar8;
  undefined1 auStackY_158 [32];
  FLLMScope local_124 [4];
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_118;
  FQueuedCommandList local_108;
  FMemScope local_100;
  FTaskHandle local_f8 [2];
  FRHICommandListBase *local_e8;
  char local_e0;
  TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>
  local_d8;
  TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FLLMScope::FLLMScope(local_124,Materials,false,None,Default,true);
  FMemScope::FMemScope(&local_100,Materials,true);
  cVar7 = '\x01';
  if (((((param_1->PersistentState).bImmediate == '\0') ||
       (GUniformExpressionCacheAsyncUpdateTask.ReferenceCount < 1)) ||
      (GUniformExpressionCacheAsyncUpdates < 1)) || (GRHICommandList.bLatchedBypass != false)) {
    cVar7 = '\0';
    this = param_1;
    if (GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait
                ((FTaskBase *)GUniformExpressionCacheAsyncUpdateTask.Task.Pimpl.Reference);
    }
  }
  else {
    this = ::operator_new(0x1bb0);
    if (this == (FRHICommandListBase *)0x0) {
      FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)0x0,Graphics);
      this = (FRHICommandListBase *)0x0;
    }
    else {
      FRHICommandListBase::FRHICommandListBase
                (this,(FRHIGPUMask)((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1),false);
      FRHICommandListBase::SwitchPipeline(this,Graphics);
    }
  }
  LOCK();
  bVar8 = DeferredUniformExpressionCacheRequestsMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar8) {
    DeferredUniformExpressionCacheRequestsMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar8) {
    UE::FMutex::LockSlow(&DeferredUniformExpressionCacheRequestsMutex);
  }
  TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>::
  TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>
            (&local_88,&DeferredUniformExpressionCacheRequests);
  LOCK();
  aVar6 = DeferredUniformExpressionCacheRequestsMutex.State + -1;
  UNLOCK();
  bVar5 = (byte)DeferredUniformExpressionCacheRequestsMutex.State & 2;
  DeferredUniformExpressionCacheRequestsMutex.State = aVar6;
  if (bVar5 != 0) {
    UE::FMutex::WakeWaitingThread(&DeferredUniformExpressionCacheRequestsMutex);
  }
  local_e8 = this;
  local_e0 = cVar7;
  TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>::
  TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>
            (&local_d8,&local_88);
  if ((param_2 == (FTaskHandle *)0x0) || (cVar7 == '\0')) {
    `FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions'::__l2::<lambda_1>::operator()
              (&local_e8);
    if (cVar7 == '\0') goto LAB_147f8d1a1;
  }
  else {
    this_00 = FMemory::Malloc(0x140,0x40);
    if (this_00 == (FTaskBase *)0x0) {
      this_00 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions'::`2'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (this_00,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialRenderProxy.cpp(908)"
                 ,Default,None,None);
      this_00[1]._padding_ = (longlong)local_e8;
      *(char *)&this_00[1]._padding_ = local_e0;
      TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>::
      TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>
                ((TSet<FMaterialRenderProxy_*,DefaultKeyFuncs<FMaterialRenderProxy_*,0>,FDefaultSetAllocator>
                  *)&this_00[1]._padding_,&local_d8);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions'::`2'::<lambda_1>_>
            ::_vftable_;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x140);
    if (param_2 == local_f8) {
      if (this_00 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &this_00->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
    }
    else {
      pFVar3 = (param_2->Pimpl).Reference;
      (param_2->Pimpl).Reference = this_00;
      if (pFVar3 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar3->RefCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<unsigned_int>)0x1) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
  if (((param_1->PersistentState).bImmediate == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RHICmdList.IsImmediate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x122e,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_118.ArrayNum = 1;
  local_118.DataPtr = &local_108;
  local_108.CmdList = this;
  FRHICommandListImmediate::QueueAsyncCommandListSubmit
            ((FRHICommandListImmediate *)param_1,&local_118,Disabled,0);
LAB_147f8d1a1:
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FMaterialRenderProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMaterialRenderProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FMaterialRenderProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FMaterialRenderProxy_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  FMemScope::~FMemScope(&local_100);
  FLLMScope::~FLLMScope(local_124);
  return;
}

// UpdateDeferredCachedUniformExpressions @ 147f8d220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl FMaterialRenderProxy::UpdateDeferredCachedUniformExpressions(void)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  UpdateDeferredCachedUniformExpressions
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,(FTaskHandle *)0x0);
  return;
}

// UpdateUniformExpressionCacheIfNeeded @ 147f8dd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FMaterial * __thiscall
FMaterialRenderProxy::UpdateUniformExpressionCacheIfNeeded
          (FMaterialRenderProxy *this,FRHICommandListBase *param_1,Type param_2)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FMaterial *pFVar4;
  FMaterialRenderContext local_38;
  
  pFVar4 = (FMaterial *)(**(code **)(this->_padding_ + 0x30))(this,param_2);
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMaterial *)(*pcVar2)();
    return pFVar4;
  }
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this_00);
  }
  if (pFVar4 != (FMaterial *)0x0) {
    bVar3 = IsInParallelRenderingThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                           ,0x565,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMaterial *)(*pcVar2)();
      return pFVar4;
    }
    if ((pFVar4->RenderingThreadShaderMap).Reference !=
        (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap) {
      FRDGBuilder::WaitForAsyncExecuteTask();
      local_38.bShowSelection = false;
      local_38.MaterialRenderProxy = this;
      local_38.Material = pFVar4;
      EvaluateUniformExpressions
                (this,param_1,&(this->UniformExpressionCache).Elements,&local_38,
                 (FUniformExpressionCacheAsyncUpdater *)0x0);
    }
  }
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return pFVar4;
}

// UpdateUniformExpressionCacheIfNeeded @ 147f8de70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialRenderProxy::UpdateUniformExpressionCacheIfNeeded(FMaterialRenderProxy *this,Type param_1)

{
  FMutex *this_00;
  atomic<unsigned_char> aVar1;
  code *pcVar2;
  bool bVar3;
  FMaterial *pFVar4;
  FMaterialRenderContext local_28;
  
  bVar3 = IsInRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar4 = (FMaterial *)(**(code **)(this->_padding_ + 0x30))(this,param_1);
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  bVar3 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    UE::FMutex::LockSlow(this_00);
  }
  if (pFVar4 != (FMaterial *)0x0) {
    bVar3 = IsInParallelRenderingThread();
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                           ,0x565,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar4->RenderingThreadShaderMap).Reference !=
        (this->UniformExpressionCache).Elements.CachedUniformExpressionShaderMap) {
      FRDGBuilder::WaitForAsyncExecuteTask();
      local_28.bShowSelection = false;
      local_28.MaterialRenderProxy = this;
      local_28.Material = pFVar4;
      EvaluateUniformExpressions
                (this,(FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 &(this->UniformExpressionCache).Elements,&local_28,
                 (FUniformExpressionCacheAsyncUpdater *)0x0);
    }
  }
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar1 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar1 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
      return;
    }
  }
  return;
}

