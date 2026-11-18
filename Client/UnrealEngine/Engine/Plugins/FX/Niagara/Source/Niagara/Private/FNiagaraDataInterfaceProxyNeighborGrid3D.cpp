// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// ConsumePerInstanceDataFromGameThread @ 1491b77c0

void __thiscall
FNiagaraDataInterfaceProxyNeighborGrid3D::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyNeighborGrid3D *this,void *param_1,ulong64 *param_2)

{
  return;
}

// GetDispatchArgs @ 1491c78b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyNeighborGrid3D::GetDispatchArgs
          (FNiagaraDataInterfaceProxyNeighborGrid3D *this,
          FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FNDINeighborGrid3DInstanceData_RT *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
           ::Find((TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  if (pFVar1 != (FNDINeighborGrid3DInstanceData_RT *)0x0) {
    FNDIGpuComputeDispatchArgsGenContext::SetDirect(param_1,&pFVar1->NumCells,0xffffffff);
    return;
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1491d5320

int __thiscall
FNiagaraDataInterfaceProxyNeighborGrid3D::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyNeighborGrid3D *this)

{
  return 0;
}

// PostSimulate @ 1491d7f40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyNeighborGrid3D::PostSimulate
          (FNiagaraDataInterfaceProxyNeighborGrid3D *this,FNDIGpuComputePostSimulateContext *param_1
          )

{
  FNDINeighborGrid3DInstanceData_RT *pFVar1;
  
  if (param_1->bFinalPostSimulate != false) {
    pFVar1 = TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
             ::FindChecked((TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
                            *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
    FNiagaraPooledRWBuffer::EndGraphUsage(&pFVar1->NeighborhoodBuffer);
    FNiagaraPooledRWBuffer::EndGraphUsage(&pFVar1->NeighborhoodCountBuffer);
    return;
  }
  return;
}

// PreStage @ 1491d8800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyNeighborGrid3D::PreStage
          (FNiagaraDataInterfaceProxyNeighborGrid3D *this,FNDIGpuComputePreStageContext *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FRDGBuilder *pFVar4;
  FRHIComputeCommandList *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  atomic<unsigned_int> aVar9;
  ulong64 uVar10;
  FNDINeighborGrid3DInstanceData_RT *pFVar11;
  FRDGScope *this_01;
  FRHIBreadcrumbAllocator *pFVar12;
  FRHIBreadcrumbNode *pFVar13;
  FRDGBufferUAV *pFVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  TRDGEventScopeGuard<FRDGScope_RHI> local_a8;
  undefined1 local_98;
  char *local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  wchar_t *pwStack_78;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_> local_70;
  FRHIBreadcrumbScope local_60;
  undefined1 local_50;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  pFVar4 = *(FRDGBuilder **)param_1;
  uVar10 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                     ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar11 = TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
            ::FindChecked((TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
                           *)&this->SystemInstancesToProxyData_RT,uVar10);
  if (pFVar11->bNeedsRealloc != false) {
    iVar2 = (pFVar11->NumCells).field0_0x0._s_0.Z;
    iVar3 = (pFVar11->NumCells).field0_0x0._s_0.Y;
    pFVar11->bNeedsRealloc = false;
    uVar15 = iVar2 * iVar3 * (pFVar11->NumCells).field0_0x0._s_0.X;
    uVar17 = uVar15 * pFVar11->MaxNeighborsPerCell;
    if (uVar15 <= (uint)GMaxNiagaraNeighborGridCells) {
      FNiagaraPooledRWBuffer::Release(&pFVar11->NeighborhoodCountBuffer);
      FNiagaraPooledRWBuffer::Release(&pFVar11->NeighborhoodBuffer);
      uVar8 = 1;
      if (1 < uVar15) {
        uVar8 = uVar15;
      }
      FNiagaraPooledRWBuffer::InitializeInternal
                (&pFVar11->NeighborhoodCountBuffer,pFVar4,L"NiagaraNeighborGrid3D::NeighborCount",
                 PF_R32_SINT,4,uVar8,Static);
      uVar15 = 1;
      if (1 < uVar17) {
        uVar15 = uVar17;
      }
      FNiagaraPooledRWBuffer::InitializeInternal
                (&pFVar11->NeighborhoodBuffer,pFVar4,L"NiagaraNeighborGrid3D::NeighborsGrid",
                 PF_R32_SINT,4,uVar15,Static);
    }
  }
  bVar6 = FNDIGpuComputePrePostStageContext::IsOutputStage
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  if (((bVar6) && ((pFVar11->NeighborhoodBuffer).Buffer.Reference != (FRDGPooledBuffer *)0x0)) &&
     (pFVar11->ClearBeforeNonIterationStage != false)) {
    cVar1 = *(char *)((longlong)&pFVar4->_padding_ + 6);
    bVar6 = false;
    local_98 = 0;
    if ((cVar1 != '\0') && ((cVar1 != '\x01' || ((pFVar4->_padding_ & 4) == 0)))) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          local_38 = 0;
          uStack_34 = 0;
          ::Desc._12_8_ = ZEXT48(uStack_3c);
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._0_4_ = 0x2cd;
          ::Desc._padding_._4_4_ = 0;
          ::Desc._padding_ = (longlong)u_NiagaraNeighbor;
          ::Desc._padding_ = (longlong)u_NiagaraNeighbor;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FNiagaraDataInterfaceProxyNeighborGrid3D::PreStage'::__l13::Desc::operator()<>'
                 ::__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      local_70._Myfirst._Val = &::Desc;
      local_a8.State = (FRDGScopeState *)pFVar4;
      this_01 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar4->_padding_,(FRDGScope **)pFVar4);
      pFVar4->_padding_ = (longlong)this_01;
      uVar16 = (ulonglong)(this_01->Impl).Impl.TypeIndex;
      local_a8.Scope = this_01;
      if (3 < uVar16) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
        ::__l2::Destructors[uVar16])(&this_01->Impl);
      FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_>
                ((FRDGScope_RHI *)&this_01->Impl,(FRDGScopeState *)pFVar4,&local_70);
      (this_01->Impl).Impl.TypeIndex = '\x02';
      if (*(char *)((longlong)&pFVar4->_padding_ + 4) != '\0') {
        FRDGScope::BeginCPU(this_01,(FRHIComputeCommandList *)pFVar4->_padding_,false);
        FRDGScope::BeginGPU(this_01,(FRHIComputeCommandList *)pFVar4->_padding_);
      }
      bVar6 = true;
      local_98 = 1;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        local_90 = 
        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceNeighborGrid3D.cpp"
        ;
        uStack_88 = 0x2cd;
        local_80 = 0;
        pwStack_78 = L"NiagaraNeighborGrid3DClearNeighborInfo";
        ::Desc._padding_._0_4_ = 0x51da0ac0;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_._0_4_ = 0x2cd;
        ::Desc._padding_._4_4_ = uStack_84;
        ::Desc._padding_._0_4_ = 0;
        ::Desc._padding_._4_4_ = 0;
        ::Desc._padding_._0_4_ = 0x51da0ff0;
        ::Desc._padding_._4_4_ = 1;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(``FNiagaraDataInterfaceProxyNeighborGrid3D::PreStage'::__l18::<lambda_2>::
               operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    this_00 = (FRHIComputeCommandList *)pFVar4->_padding_;
    pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_00);
    pFVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
    pFVar13->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar13->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar13->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar13->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar13->Allocator = pFVar12;
    pFVar13->TraceCpuSpecId = 0;
    aVar9 = FRHIBreadcrumbNode::NextID;
    pFVar13->TraceCpuMetadataId = 0;
    LOCK();
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    UNLOCK();
    pFVar13->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar13->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar13->ID = (uint)aVar9 | 0x80000000;
    pFVar13->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar13[1]._padding_ = (longlong)&::Desc;
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      bVar7 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable();
      if (bVar7) {
        EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
        if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
          aVar9 = (atomic<unsigned_int>)
                  FCpuProfilerTrace::OutputEventType
                            ((wchar_t *)
                             CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                             (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                             (uint)::Desc._padding_);
          LOCK();
          ::Desc.TraceCpuSpecId = aVar9;
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      }
    }
    pFVar13->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_60,this_00,pFVar13);
    local_50 = 1;
    pFVar14 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&pFVar11->NeighborhoodBuffer,pFVar4);
    AddClearUAVPass(pFVar4,pFVar14,0xffffffff,Compute);
    pFVar14 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&pFVar11->NeighborhoodCountBuffer,pFVar4);
    AddClearUAVPass(pFVar4,pFVar14,0,Compute);
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_60);
    if (bVar6) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a8);
    }
  }
  return;
}

// ResetData @ 1491deff0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyNeighborGrid3D::ResetData
          (FNiagaraDataInterfaceProxyNeighborGrid3D *this,FNDIGpuComputeResetContext *param_1)

{
  FRDGBuilder *pFVar1;
  FNDINeighborGrid3DInstanceData_RT *pFVar2;
  FRDGBufferUAV *pFVar3;
  
  pFVar1 = (FRDGBuilder *)param_1->_padding_;
  pFVar2 = TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
           ::Find((TMapBase<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDINeighborGrid3DInstanceData_RT,0>_>
                   *)&this->SystemInstancesToProxyData_RT,param_1->SystemInstanceID);
  pFVar3 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&pFVar2->NeighborhoodBuffer,pFVar1);
  AddClearUAVPass(pFVar1,pFVar3,0xffffffff,Compute);
  pFVar3 = FNiagaraPooledRWBuffer::GetOrCreateUAV(&pFVar2->NeighborhoodCountBuffer,pFVar1);
  AddClearUAVPass(pFVar1,pFVar3,0,Compute);
  return;
}

