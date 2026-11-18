// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// operator() @ 1480f8240

void __thiscall
`FParticleSimulationResources::Destroy'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  FRenderResource *this_00;
  
  this_00 = *(FRenderResource **)this;
  if (this_00 != (FRenderResource *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(this_00 + 0xb));
    if ((void *)this_00[10]._padding_ != (void *)0x0) {
      FMemory::Free((void *)this_00[10]._padding_);
    }
    if ((FRHIResource *)this_00[8]._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00[8]._padding_);
    }
    FRenderResource::~FRenderResource((FRenderResource *)&this_00[6].ListIndex);
    if (this_00[6].OwnerName != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)this_00[6].OwnerName);
    }
    FRenderResource::~FRenderResource(this_00 + 5);
    if (this_00[4].OwnerName != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)this_00[4].OwnerName);
    }
    if ((FRHIResource *)this_00[4]._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00[4]._padding_);
    }
    FRenderResource::~FRenderResource((FRenderResource *)&this_00[2].ResourceName);
    if (*(FRHIResource **)&this_00[1].ListIndex != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)&this_00[1].ListIndex);
    }
    if (this_00[1].ResourceName != (FName)0x0) {
      FRHIResource::Release((FRHIResource *)this_00[1].ResourceName);
    }
    FRenderResource::~FRenderResource(this_00);
    ::operator_delete(this_00,0x188);
    return;
  }
  return;
}

// operator() @ 1480f8400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`FParticleSimulationResources::Init'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong lVar1;
  undefined1 auStack_168 [32];
  TArrayView<FRHITransitionInfo_const_,int> local_148;
  FRHITransitionInfo local_138;
  undefined4 local_108;
  undefined2 local_104;
  undefined8 local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  (**(code **)(**(longlong **)this + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)this + 0x50) + 0x18))
            ((longlong *)(*(longlong *)this + 0x50),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0xa0) + 0x18))
            ((longlong *)(*(longlong *)this + 0xa0),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0xd8) + 0x18))();
  lVar1 = *(longlong *)this;
  local_148.ArrayNum = 6;
  local_138.field1_0x8 = *(FRHITransitionInfo_u_8 *)(lVar1 + 200);
  local_138._padding_._0_4_ = 0xffffffff;
  local_138._padding_._4_2_ = 0xffff;
  local_138.Type = Texture;
  local_138.AccessBefore = None;
  local_138.AccessAfter = SRVMask;
  local_138.Flags = None;
  local_138.CommitInfo.bIsSet = false;
  local_100 = *(undefined8 *)(lVar1 + 0x100);
  local_108 = 0xffffffff;
  local_104 = 0xffff;
  local_f8 = 1;
  local_f4 = 0;
  local_f0 = 0x70;
  local_ec = 0;
  local_e0 = 0;
  local_d0 = *(undefined8 *)(lVar1 + 0x30);
  local_d8 = 0xffffffff;
  local_d4 = 0xffff;
  local_c8 = 1;
  local_c4 = 0;
  local_c0 = 0x70;
  local_bc = 0;
  local_b0 = 0;
  local_a0 = *(undefined8 *)(lVar1 + 0x38);
  local_a8 = 0xffffffff;
  local_a4 = 0xffff;
  local_98 = 1;
  local_94 = 0;
  local_90 = 0x70;
  local_8c = 0;
  local_80 = 0;
  local_70 = *(undefined8 *)(lVar1 + 0x80);
  local_78 = 0xffffffff;
  local_74 = 0xffff;
  local_68 = 1;
  local_64 = 0;
  local_60 = 0x70;
  local_5c = 0;
  local_50 = 0;
  local_40 = *(undefined8 *)(lVar1 + 0x88);
  local_148.DataPtr = &local_138;
  local_48 = 0xffffffff;
  local_44 = 0xffff;
  local_38 = 1;
  local_34 = 0;
  local_30 = 0x70;
  local_2c = 0;
  local_20 = 0;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_148,None);
  return;
}

// FreeTile @ 14810cf40

void __thiscall
FParticleSimulationResources::FreeTile(FParticleSimulationResources *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint local_18 [4];
  
  lpCriticalSection = &(this->TileAllocator).CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar5 = FParticleTileAllocator::GetAllocatedTileCount(&this->TileAllocator);
  if (iVar5 <= (int)param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TileIndex < GetAllocatedTileCount()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0xef,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = FParticleTileAllocator::GetAllocatedTileCount(&this->TileAllocator);
  if (iVar5 <= (this->TileAllocator).FreeTiles.ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FreeTiles.Num() < GetAllocatedTileCount()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0xf0,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->TileAllocator).FreeTiles.AllocatorInstance.Data;
  local_18[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->TileAllocator).FreeTiles.ArrayMax * 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->TileAllocator).FreeTiles.ArrayNum;
  piVar1 = &(this->TileAllocator).FreeTiles.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->TileAllocator).FreeTiles.AllocatorInstance,piVar1);
  }
  (this->TileAllocator).FreeTiles.ArrayNum = iVar5 + 1;
  *(uint *)((this->TileAllocator).FreeTiles.AllocatorInstance.Data + (longlong)iVar5 * 4) =
       local_18[0];
                    /* WARNING: Could not recover jumptable at 0x00014810d084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetVisualizeStateTextures @ 14811ccd0

FParticleStateTextures * __thiscall
FParticleSimulationResources::GetVisualizeStateTextures(FParticleSimulationResources *this)

{
  code *pcVar1;
  TConsoleVariableData<float> *pTVar2;
  bool bVar3;
  FParticleStateTextures *pFVar4;
  ulonglong uVar5;
  
  pTVar2 = CVarGPUParticleFixDeltaSeconds.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FParticleStateTextures *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar5 = (ulonglong)this->FrameIndex;
  if (0.0 < pTVar2->ShadowedValue[1]) {
    uVar5 = uVar5 ^ 1;
  }
  return this->StateTextures + uVar5;
}

// Init @ 14811f210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FParticleSimulationResources::Init(FParticleSimulationResources *this)

{
  int *piVar1;
  int iVar2;
  TIntPoint<int>_u_0 TVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined ***pppuVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStackY_d8 [32];
  code *local_a8 [2];
  undefined **local_98;
  FParticleSimulationResources *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FParticleSimulationResources *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  bVar6 = GFXCascadeGpuSpriteAllowDynAllocs;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  uVar10 = GParticleSimulationTextureSizeX;
  if (GFXCascadeGpuSpriteAllowDynAllocs) {
    uVar10 = GParticleSimulationDynTextureSizeXY;
  }
  (this->SimulationResourcesSize).field0_0x0._s_0.X = uVar10;
  iVar7 = GParticleSimulationTextureSizeY;
  if (bVar6) {
    iVar7 = GParticleSimulationDynTextureSizeXY;
  }
  (this->SimulationResourcesSize).field0_0x0._s_0.Y = iVar7;
  if (((uVar10 & uVar10 - 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(SimulationResourcesSize.X & (SimulationResourcesSize.X - 1)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                         ,0x21f,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = (this->SimulationResourcesSize).field0_0x0._s_0.Y;
  if (((uVar10 & uVar10 - 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(SimulationResourcesSize.Y & (SimulationResourcesSize.Y - 1)) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                         ,0x220,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->SimulationResourcesSize).field0_0x0._s_0.X < 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GParticleSimulationTileSize <= SimulationResourcesSize.X",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                         ,0x221,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((this->SimulationResourcesSize).field0_0x0._s_0.Y < 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GParticleSimulationTileSize <= SimulationResourcesSize.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                         ,0x222,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar7 = (this->SimulationResourcesSize).field0_0x0._s_0.X;
  piVar1 = &(this->TileAllocator).FreeTiles.ArrayNum;
  iVar2 = (this->SimulationResourcesSize).field0_0x0._s_0.Y;
  uVar10 = (int)((iVar7 >> 0x1f & 3U) + iVar7) >> 2;
  this->ParticleSimulationTileCountX = uVar10;
  uVar15 = (int)((iVar2 >> 0x1f & 3U) + iVar2) >> 2;
  this->ParticleSimulationTileCountY = uVar15;
  uVar15 = uVar15 * uVar10;
  this->ParticleSimulationTileCount = uVar15;
  iVar7 = ((int)(GParticleSimulationTextureSizeX + (GParticleSimulationTextureSizeX >> 0x1f & 3U))
          >> 2) * GParticleSimulationTextureSizeY;
  (this->TileAllocator).bAllowResizing = bVar6;
  (this->TileAllocator).InitialTileCount = uVar15;
  (this->TileAllocator).MaxTileCount = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,uVar15,&(this->TileAllocator).FreeTiles.AllocatorInstance,piVar1,
             &(this->TileAllocator).FreeTiles.ArrayMax);
  uVar10 = (this->TileAllocator).InitialTileCount;
  uVar15 = 0;
  if (uVar10 != 0) {
    do {
      uVar11 = ~uVar15;
      uVar8 = 0;
      if ((int)uVar15 < *piVar1) {
        uVar8 = uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar12 = (longlong)(int)uVar15;
      uVar15 = uVar15 + 1;
      *(uint *)((this->TileAllocator).FreeTiles.AllocatorInstance.Data + lVar12 * 4) =
           uVar11 + uVar10;
      uVar10 = (this->TileAllocator).InitialTileCount;
    } while (uVar15 < uVar10);
  }
  (this->TileAllocator).ResizeTileAllocCount = 0;
  this->StateTextures[0].ParticleStateIndex = 0;
  TVar3 = (this->SimulationResourcesSize).field0_0x0;
  this->StateTextures[0].RenderTargetSize.field0_0x0 = TVar3;
  this->StateTextures[1].ParticleStateIndex = 1;
  this->StateTextures[1].RenderTargetSize.field0_0x0 = TVar3;
  (this->RenderAttributesTexture).RenderTargetSize.field0_0x0 = TVar3;
  (this->SimulationAttributesTexture).RenderTargetSize.field0_0x0 = TVar3;
  local_98 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Init_FParticleSimulationResources__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FParticleSimulationResources::Init'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_80 = (undefined ***)0x0;
  pFStack_90 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FParticleSimulationResources::Init_::__l2::TSTR_FInitParticleSimulationResourcesCommand569>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    pFStack_60 = pFStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<`FParticleSimulationResources::Init'::__l2::TSTR_FInitParticleSimulationResourcesCommand569>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar9);
    uVar14 = (ulonglong)local_48;
    if ((2 < uVar14) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar13 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar13 = local_50;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar14])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar13 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar13 = local_80;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  return;
}

