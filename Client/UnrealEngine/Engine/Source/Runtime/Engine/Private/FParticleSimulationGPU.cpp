// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// operator() @ 1480f8130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FParticleSimulationGPU::Destroy'::__l2::<lambda_1>::operator()(void *this,FRHICommandList *param_1)

{
  FParticleSimulationGPU *this_00;
  FVectorFieldVisualizationVertexFactory *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FScriptContainerElement *pFVar3;
  FGPUSpriteResources *this_01;
  code *pcVar4;
  bool bVar5;
  
  this_00 = *(FParticleSimulationGPU **)this;
  if ((!GIsRequestingExit) && (this_00->SimulationIndex != -1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEngineExitRequested() || SimulationIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0xa68,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FParticleSimulationGPU::ReleaseRenderResources(this_00);
  if (this_00 != (FParticleSimulationGPU *)0x0) {
    pFVar1 = this_00->VectorFieldVisualizationVertexFactory;
    if (pFVar1 != (FVectorFieldVisualizationVertexFactory *)0x0) {
      (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    }
    this_00->VectorFieldVisualizationVertexFactory = (FVectorFieldVisualizationVertexFactory *)0x0;
    pFVar2 = (this_00->VertexBuffer).VertexBufferSRV.Reference;
    if (pFVar2 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this_00->VertexBuffer);
    FVectorFieldInstance::~FVectorFieldInstance(&this_00->LocalVectorField);
    pFVar3 = (this_00->TilesToClear).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pFVar3 = (this_00->NewParticles).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    this_01 = (this_00->GPUSpriteResources).Reference;
    if (this_01 != (FGPUSpriteResources *)0x0) {
      FGPUSpriteResources::Release(this_01);
    }
    pFVar2 = (this_00->TileVertexBuffer).VertexBufferSRV.Reference;
    if (pFVar2 != (FRHIShaderResourceView *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar2);
    }
    FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this_00->TileVertexBuffer);
    ::operator_delete(this_00,0x340);
  }
  return;
}

// operator() @ 1480f9bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FParticleSimulationGPU::InitResources'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  longlong *plVar2;
  FParticleSimulationResources *pFVar3;
  code *pcVar4;
  longlong *plVar5;
  FGPUSpriteResources *pFVar6;
  FGPUSpriteResources *this_00;
  bool bVar7;
  longlong lVar8;
  
  (**(code **)(*(longlong *)(*(longlong *)this + 0x2e0) + 0x20))();
  (**(code **)(*(longlong *)(*(longlong *)this + 8) + 0x20))();
  plVar2 = *(longlong **)this;
  pFVar3 = *(FParticleSimulationResources **)(*plVar2 + 0xb0);
  *(int *)(plVar2 + 0x62) = *(int *)((longlong)this + 0x10) << 4;
  pcVar4 = *(code **)(plVar2[0x5c] + 0x18);
  bVar7 = IsInRenderingThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*pcVar4)(plVar2 + 0x5c,0x154be5ed0);
  if (*(int *)((longlong)this + 0x10) != 0) {
    BuildParticleVertexBuffer
              ((FRHICommandListBase *)param_1,(FRHIBuffer *)plVar2[0x60],
               (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)((longlong)this + 8),pFVar3);
  }
  plVar5 = *(longlong **)this;
  plVar2 = plVar5 + 1;
  pFVar3 = *(FParticleSimulationResources **)(*plVar5 + 0xb0);
  iVar1 = *(int *)((longlong)this + 0x10);
  *(int *)(plVar5 + 7) = iVar1;
  *(uint *)((longlong)plVar5 + 0x3c) = iVar1 + 7U & 0xfffffff8;
  pcVar4 = *(code **)(*plVar2 + 0x18);
  bVar7 = IsInRenderingThread();
  if (!bVar7) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*pcVar4)(plVar2,0x154be5ed0);
  if (*(int *)((longlong)this + 0x10) != 0) {
    lVar8 = 0x34;
    if ((int)GMaxRHIFeatureLevel < 2) {
      lVar8 = 0x30;
    }
    BuildTileVertexBuffer
              ((FRHICommandListBase *)param_1,(FRHIBuffer *)plVar5[5],*(uint **)((longlong)this + 8)
               ,*(int *)((longlong)this + 0x10),*(int *)((longlong)plVar2 + lVar8),pFVar3);
  }
  pFVar6 = *(FGPUSpriteResources **)((longlong)this + 0x18);
  this_00 = *(FGPUSpriteResources **)(*(longlong *)this + 0x40);
  if (this_00 != pFVar6) {
    *(FGPUSpriteResources **)(*(longlong *)this + 0x40) = pFVar6;
    if (pFVar6 != (FGPUSpriteResources *)0x0) {
      LOCK();
      (pFVar6->NumRefs).Counter = (pFVar6->NumRefs).Counter + 1;
      UNLOCK();
    }
    if (this_00 != (FGPUSpriteResources *)0x0) {
      FGPUSpriteResources::Release(this_00);
    }
  }
  *(longlong *)(*(longlong *)this + 0x48) = *(longlong *)((longlong)this + 0x18) + 0x28;
  plVar2 = *(longlong **)(*(longlong *)this + 0x318);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
  }
  return;
}

// InitResources @ 1481210d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FParticleSimulationGPU::InitResources
          (FParticleSimulationGPU *this,TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_1,
          FGPUSpriteResources *param_2)

{
  ForAnyElementType *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  ForAnyElementType _Src_00;
  bool bVar3;
  code **ppcVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStackY_118 [32];
  ForAnyElementType local_d0;
  int local_c8;
  int local_c4;
  FGPUSpriteResources *local_c0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (param_2 == (FGPUSpriteResources *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2902624535989717720>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0xad8,"InGPUSpriteResources");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    LOCK();
    (param_2->NumRefs).Counter = (param_2->NumRefs).Counter + 1;
    UNLOCK();
    local_c8 = param_1->ArrayNum;
    lVar6 = (longlong)local_c8;
    _Src = (param_1->AllocatorInstance).Data;
    local_d0.Data = (FScriptContainerElement *)0x0;
    if (local_c8 == 0) {
      local_c4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_c8,0,&local_d0,local_c8,&local_c4);
      memcpy(local_d0.Data,_Src,lVar6 << 2);
    }
    LOCK();
    (param_2->NumRefs).Counter = (param_2->NumRefs).Counter + 1;
    UNLOCK();
    local_b8[0] = (code *)0x0;
    local_c0 = param_2;
    ppcVar4 = FMemory::Malloc(0x28,8);
    _Src_00.Data = local_d0.Data;
    *ppcVar4 = (code *)&UE::Core::Private::Function::
                        TFunction_OwnedObject<`FParticleSimulationGPU::InitResources'::`5'::<lambda_1>,1,1>
                        ::_vftable_;
    pFVar1 = (ForAnyElementType *)(ppcVar4 + 2);
    ppcVar4[1] = (code *)this;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    lVar6 = (longlong)local_c8;
    *(int *)(ppcVar4 + 3) = local_c8;
    local_90 = ppcVar4;
    if (local_c8 == 0) {
      *(int *)((longlong)ppcVar4 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_c8,0,pFVar1,local_c8,(int *)((longlong)ppcVar4 + 0x1c));
      memcpy(pFVar1->Data,_Src_00.Data,lVar6 << 2);
    }
    ppcVar4[4] = (code *)0x0;
    ppcVar4[4] = (code *)local_c0;
    if (ppcVar4 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FParticleSimulationGPU::InitResources'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    local_c0 = (FGPUSpriteResources *)0x0;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FParticleSimulationGPU::InitResources_::__l5::TSTR_FInitParticleSimulationGPUCommand2782>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`FParticleSimulationGPU::InitResources'::__l5::TSTR_FInitParticleSimulationGPUCommand2782>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar5);
      uVar7 = (ulonglong)local_58;
      if (2 < uVar7) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar4 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar4 = local_60;
          }
          (**(code **)(*ppcVar4 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar4 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar4 = local_90;
      }
      (**(code **)(*ppcVar4 + 0x10))();
    }
    if (local_c0 != (FGPUSpriteResources *)0x0) {
      FGPUSpriteResources::Release(local_c0);
    }
    if (local_d0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data);
    }
    FGPUSpriteResources::Release(param_2);
  }
  this->bDirty_GameThread = false;
  this->bReleased_GameThread = false;
  return;
}

// ReleaseRenderResources @ 148129030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FParticleSimulationGPU::ReleaseRenderResources(FParticleSimulationGPU *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0xa82,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (**(code **)((this->VertexBuffer)._padding_ + 0x20))();
  (**(code **)((this->TileVertexBuffer)._padding_ + 0x20))(&this->TileVertexBuffer);
  if (this->VectorFieldVisualizationVertexFactory != (FVectorFieldVisualizationVertexFactory *)0x0)
  {
                    /* WARNING: Could not recover jumptable at 0x000148129094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this->VectorFieldVisualizationVertexFactory + 0x20))();
    return;
  }
  return;
}

