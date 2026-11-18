// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 45

// FGPUSpriteParticleEmitterInstance @ 1480f3280

/* WARNING: Enum "Type": Some values do not have unique names */

FGPUSpriteParticleEmitterInstance * __thiscall
FGPUSpriteParticleEmitterInstance::FGPUSpriteParticleEmitterInstance
          (FGPUSpriteParticleEmitterInstance *this,IParticleEmitterInstanceOwner *param_1,
          FFXSystem *param_2,FGPUSpriteEmitterInfo *param_3)

{
  UVectorField *pUVar1;
  double dVar2;
  FParticleSimulationGPU *pFVar3;
  FParticleSimulationGPU *pFVar4;
  
  FParticleEmitterInstance::FParticleEmitterInstance((FParticleEmitterInstance *)this,param_1);
  pFVar4 = (FParticleSimulationGPU *)0x0;
  this->FXSystem = param_2;
  this->_padding_ = (longlong)&___7FGPUSpriteParticleEmitterInstance__6B_;
  (this->WeakWorld).WeakPtr = (FWeakObjectPtr)0x0;
  this->EmitterInfo = param_3;
  (this->AllocatedTiles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllocatedTiles).ArrayNum = 0;
  (this->AllocatedTiles).ArrayMax = 0;
  (this->ActiveTiles).AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  (this->ActiveTiles).NumBits = 0;
  (this->ActiveTiles).MaxBits = 0x80;
  (this->TileTimeOfDeath).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TileTimeOfDeath).ArrayNum = 0;
  (this->TileTimeOfDeath).ArrayMax = 0;
  (this->TilesToClear).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TilesToClear).ArrayNum = 0;
  (this->TilesToClear).ArrayMax = 0;
  (this->NewParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewParticles).ArrayNum = 0;
  (this->NewParticles).ArrayMax = 0;
  (this->ForceSpawnedParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceSpawnedParticles).ArrayNum = 0;
  (this->ForceSpawnedParticles).ArrayMax = 0;
  (this->ForceBurstSpawnedParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ForceBurstSpawnedParticles).ArrayNum = 0;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->ForceBurstSpawnedParticles).ArrayMax = 0;
  (this->LocalVectorFieldRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->LocalVectorFieldRotation).Yaw = dVar2;
  (this->LocalVectorFieldRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  *(undefined8 *)&(this->RandomStream).Seed = 0;
  this->PointAttractorStrength = 0.0;
  this->PendingDeltaSeconds = 0.0;
  this->OffsetSeconds = 0.0;
  this->TileToAllocateFrom = -1;
  this->FreeParticlesInTile = 0;
  (this->RandomStream).InitialSeed = 0;
  pFVar3 = ::operator_new(0x340);
  if (pFVar3 != (FParticleSimulationGPU *)0x0) {
    pFVar3->FXSystem = (FFXSystem *)0x0;
    FVertexBuffer::FVertexBuffer((FVertexBuffer *)&pFVar3->TileVertexBuffer);
    (pFVar3->TileVertexBuffer).TileCount = 0;
    (pFVar3->TileVertexBuffer).AlignedTileCount = 0;
    (pFVar3->TileVertexBuffer)._padding_ = (longlong)&___7FParticleTileVertexBuffer__6B_;
    (pFVar3->TileVertexBuffer).VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
    (pFVar3->GPUSpriteResources).Reference = (FGPUSpriteResources *)0x0;
    pFVar3->EmitterSimulationResources = (FParticleEmitterSimulationResources *)0x0;
    (pFVar3->PerFrameSimulationParameters).PointAttractor.field0_0x0._s_0.X =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    (pFVar3->PerFrameSimulationParameters).PointAttractor.field0_0x0._s_0.Y =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    (pFVar3->PerFrameSimulationParameters).PointAttractor.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (pFVar3->PerFrameSimulationParameters).PointAttractor.field0_0x0._s_0.W = 0.0;
    (pFVar3->PerFrameSimulationParameters).PositionOffsetAndAttractorStrength.field0_0x0._s_0.X =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    (pFVar3->PerFrameSimulationParameters).PositionOffsetAndAttractorStrength.field0_0x0._s_0.Y =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    (pFVar3->PerFrameSimulationParameters).PositionOffsetAndAttractorStrength.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (pFVar3->PerFrameSimulationParameters).PositionOffsetAndAttractorStrength.field0_0x0._s_0.W =
         0.0;
    (pFVar3->PerFrameSimulationParameters).LocalToWorldScale.field0_0x0._s_0.X = 1.0;
    *(undefined8 *)
     ((longlong)&(pFVar3->PerFrameSimulationParameters).LocalToWorldScale.field0_0x0 + 4) =
         0x3f800000;
    (pFVar3->PerFrameSimulationParameters).NumIterationsInFix = 0;
    (pFVar3->PerFrameSimulationParameters).DeltaSecondsInVar = 0.0;
    (pFVar3->PerFrameSimulationParameters).NumIterationsInVar = 0;
    (pFVar3->PerFrameSimulationParameters).DeltaSeconds = 0.0;
    *(ulonglong *)&(pFVar3->PerFrameSimulationParameters).LWCTile.field0_0x0 =
         CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    (pFVar3->PerFrameSimulationParameters).LWCTile.field0_0x0._s_0.Z =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    (pFVar3->Bounds).IsValid = '\0';
    (pFVar3->NewParticles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->NewParticles).ArrayNum = 0;
    (pFVar3->NewParticles).ArrayMax = 0;
    (pFVar3->TilesToClear).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar3->TilesToClear).ArrayNum = 0;
    (pFVar3->TilesToClear).ArrayMax = 0;
    FVectorFieldInstance::FVectorFieldInstance(&pFVar3->LocalVectorField);
    FVertexBuffer::FVertexBuffer((FVertexBuffer *)&pFVar3->VertexBuffer);
    (pFVar3->VertexBuffer)._padding_ = (longlong)&___7FGPUParticleVertexBuffer__6B_;
    (pFVar3->VertexBuffer).VertexBufferSRV.Reference = (FRHIShaderResourceView *)0x0;
    (pFVar3->VertexBuffer).ParticleCount = 0;
    pFVar3->VectorFieldVisualizationVertexFactory = (FVectorFieldVisualizationVertexFactory *)0x0;
    pFVar3->SimulationIndex = -1;
    pFVar3->SimulationPhase = First;
    pFVar3->bWantsCollision = false;
    pFVar3->CollisionMode = SceneDepth;
    pFVar3->bDirty_GameThread = true;
    pFVar3->bReleased_GameThread = true;
    pFVar3->bDestroyed_GameThread = false;
    pFVar3->bEnabled = true;
    pFVar4 = pFVar3;
  }
  this->Simulation = pFVar4;
  pUVar1 = (this->EmitterInfo->LocalVectorField).Field.field0_0x0.DebugPtr;
  if (pUVar1 != (UVectorField *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2b0))(pUVar1,&pFVar4->LocalVectorField,0);
  }
  this->Simulation->bWantsCollision = param_3->bEnableCollision;
  this->Simulation->CollisionMode = (uint)(param_3->CollisionMode).Value;
  this->Simulation->FXSystem = param_2;
  return this;
}

// ~FGPUSpriteParticleEmitterInstance @ 1480f68f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::~FGPUSpriteParticleEmitterInstance
          (FGPUSpriteParticleEmitterInstance *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FParticleSimulationGPU *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FParticleSimulationGPU *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->_padding_ = (longlong)&___7FGPUSpriteParticleEmitterInstance__6B_;
  ReleaseSimulationResources(this);
  pFStack_70 = this->Simulation;
  local_60 = (undefined ***)0x0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__Destroy_FParticleSimulationGPU__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  pFStack_70->bDestroyed_GameThread = true;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FParticleSimulationGPU::Destroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FParticleSimulationGPU::Destroy_::__l2::TSTR_FReleaseParticleSimulationGPUCommand2651>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    pFVar5 = (FRenderCommandTag *)
             TRenderCommandTag<`FParticleSimulationGPU::Destroy'::__l2::TSTR_FReleaseParticleSimulationGPUCommand2651>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar5);
    uVar7 = (ulonglong)local_28;
    if (2 < uVar7) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar6 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar6 = local_30;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  this->Simulation = (FParticleSimulationGPU *)0x0;
  pFVar1 = (this->ForceBurstSpawnedParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ForceSpawnedParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NewParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TilesToClear).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TileTimeOfDeath).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FVar2 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar1 = (this->AllocatedTiles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FParticleEmitterInstance::~FParticleEmitterInstance((FParticleEmitterInstance *)this);
  return;
}

// operator() @ 1480f8330

void __thiscall
`FGPUSpriteParticleEmitterInstance::ForceUpdateBoundingBox'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 uVar1;
  int iVar2;
  FParticleSimulationResources *this_00;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  FParticleStateTextures *pFVar9;
  TBox<double> *pTVar10;
  TBox<double> local_48;
  
  this_00 = *(FParticleSimulationResources **)(*(longlong *)(*(longlong *)this + 0x288) + 0xb0);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)this + 0x298) + 0x310);
  pFVar9 = FParticleSimulationResources::GetVisualizeStateTextures(this_00);
  pTVar10 = ComputeParticleBounds
                      (&local_48,param_1,*(Type *)((longlong)this + 8),
                       *(FRHIShaderResourceView **)
                        (*(longlong *)(*(longlong *)this + 0x298) + 0x308),
                       (pFVar9->PositionTextureRHI).Reference,iVar2,this_00);
  dVar4 = (pTVar10->Min).field0_0x0._s_0.Y;
  dVar5 = (pTVar10->Min).field0_0x0._s_0.Z;
  dVar6 = (pTVar10->Max).field0_0x0._s_0.X;
  dVar7 = (pTVar10->Max).field0_0x0._s_0.Y;
  dVar8 = (pTVar10->Max).field0_0x0._s_0.Z;
  uVar1 = *(undefined8 *)&pTVar10->IsValid;
  lVar3 = *(longlong *)this;
  *(double *)(lVar3 + 0x1c0) = (pTVar10->Min).field0_0x0._s_0.X;
  *(double *)(lVar3 + 0x1c8) = dVar4;
  *(double *)(lVar3 + 0x1d0) = dVar5;
  *(double *)(lVar3 + 0x1d8) = dVar6;
  *(double *)(lVar3 + 0x1e0) = dVar7;
  *(double *)(lVar3 + 0x1e8) = dVar8;
  *(undefined8 *)(lVar3 + 0x1f0) = uVar1;
  return;
}

// AllocateTilesForParticles @ 1480fd710

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FGPUSpriteParticleEmitterInstance::AllocateTilesForParticles
          (FGPUSpriteParticleEmitterInstance *this,
          TArray<FNewParticle,TSizedDefaultAllocator<32>_> *param_1,int param_2,int *param_3,
          FParticleSimulationResources *param_4)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  uint uVar4;
  uint uVar5;
  ForElementType<unsigned_int> FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<unsigned_int> FVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar21 [16];
  float fVar22;
  uint local_c8;
  undefined4 local_c4;
  FParticleSimulationResources *local_c0;
  FName local_b8;
  FString local_b0 [6];
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = param_4->ParticleSimulationTileCountX;
  uVar13 = this->TileToAllocateFrom;
  uVar5 = param_4->ParticleSimulationTileCountY;
  iVar11 = GParticleSimulationTextureSizeY;
  iVar9 = GParticleSimulationTextureSizeX;
  if ((param_4->TileAllocator).bAllowResizing != false) {
    iVar11 = GParticleSimulationDynTextureSizeXY;
    iVar9 = GParticleSimulationDynTextureSizeXY;
  }
  local_c0 = this->FXSystem->ParticleSimulationResources;
  if (((int)uVar13 < 0) || ((this->AllocatedTiles).ArrayNum <= (int)uVar13)) {
    uVar15 = 0xffffffff;
  }
  else {
    uVar14 = 0;
    if ((int)uVar13 < (this->AllocatedTiles).ArrayNum) {
      uVar14 = ~uVar13 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      iVar11 = (*pcVar8)();
      return iVar11;
    }
    uVar15 = (ulonglong)
             *(uint *)((this->AllocatedTiles).AllocatorInstance.Data + (longlong)(int)uVar13 * 4) %
             (ulonglong)param_4->ParticleSimulationTileCount;
  }
  fVar22 = (float)uVar15 / (float)uVar4;
  auVar21 = roundps(unaff_XMM6,ZEXT416((uint)fVar22),3);
  fVar19 = (float)truncf();
  fVar19 = auVar21._0_4_ / (float)uVar5 - fVar19;
  fVar20 = (float)truncf();
  fVar22 = fVar22 - fVar20;
  iVar18 = 0;
  if (0 < param_2) {
    do {
      if (this->FreeParticlesInTile < 1) {
        if (*param_3 < (this->AllocatedTiles).ArrayNum) {
          iVar12 = TBitArray<FDefaultBitArrayAllocator>::FindAndSetFirstZeroBit
                             (&this->ActiveTiles,0);
          this->TileToAllocateFrom = iVar12;
        }
        else {
          local_c8 = FParticleTileAllocator::Allocate(&local_c0->TileAllocator);
          if (local_c8 == 0xffffffff) {
            if ((byte)LogParticles._0_1_ < 3) {
              return iVar18;
            }
            lVar16 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
            local_b8 = *(FName *)(lVar16 + 0x18);
            ::FName::ToString(&local_b8,local_b0);
            UE::Logging::Private::BasicLog<3>
                      (&`private:_int___cdecl_FGPUSpriteParticleEmitterInstance::AllocateTilesForParticles(TArray<FNewParticle,TSizedDefaultAllocator<32>_>&___ptr64,int,int&___ptr64,FParticleSimulationResources_const*___ptr64)___ptr64'
                        ::__l19::LOG_Static,(FLogCategoryBase *)&LogParticles);
            if (local_b0[0].Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return iVar18;
            }
            FMemory::Free(local_b0[0].Data.AllocatorInstance.Data);
            return iVar18;
          }
          pTVar2 = &this->AllocatedTiles;
          pFVar7 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 <
               pFVar7 + (longlong)(this->AllocatedTiles).ArrayMax * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return iVar11;
          }
          iVar12 = (this->AllocatedTiles).ArrayNum;
          piVar1 = &(this->AllocatedTiles).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,piVar1);
          }
          pFVar7 = (pTVar2->AllocatorInstance).Data;
          (this->AllocatedTiles).ArrayNum = iVar12 + 1;
          pTVar3 = &this->TileTimeOfDeath;
          local_c4 = 0;
          *(uint *)(pFVar7 + (longlong)iVar12 * 4) = local_c8;
          this->TileToAllocateFrom = iVar12;
          pFVar7 = (pTVar3->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_c4) &&
              ((FScriptContainerElement *)&local_c4 <
               pFVar7 + (longlong)(this->TileTimeOfDeath).ArrayMax * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return iVar11;
          }
          iVar12 = (this->TileTimeOfDeath).ArrayNum;
          piVar1 = &(this->TileTimeOfDeath).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar3->AllocatorInstance,piVar1);
          }
          (this->TileTimeOfDeath).ArrayNum = iVar12 + 1;
          pTVar2 = &this->TilesToClear;
          *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_c4;
          pFVar7 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_c8) &&
              ((FScriptContainerElement *)&local_c8 <
               pFVar7 + (longlong)(this->TilesToClear).ArrayMax * 4)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return iVar11;
          }
          iVar12 = (this->TilesToClear).ArrayNum;
          piVar1 = &(this->TilesToClear).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->TilesToClear).ArrayNum = iVar12 + 1;
          *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_c8;
          uVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(&this->ActiveTiles,1);
          FVar6 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
          FVar17 = (ForElementType<unsigned_int>)&this->ActiveTiles;
          if (FVar6 != (ForElementType<unsigned_int>)0x0) {
            FVar17 = FVar6;
          }
          uVar14 = uVar13 & 0x1f;
          if ((int)uVar13 < 0) {
            uVar13 = uVar13 + 0x1f;
            uVar14 = uVar14 - 0x20;
          }
          *(uint *)((longlong)FVar17 + (longlong)((int)uVar13 >> 5) * 4) =
               ~(1 << ((byte)uVar14 & 0x1f)) &
               *(uint *)((longlong)FVar17 + (longlong)((int)uVar13 >> 5) * 4) | 1 << (uVar14 & 0x1f)
          ;
          this->Simulation->bDirty_GameThread = true;
        }
        *param_3 = *param_3 + 1;
        uVar13 = this->TileToAllocateFrom;
        uVar14 = 0;
        if ((int)uVar13 < (this->AllocatedTiles).ArrayNum) {
          uVar14 = ~uVar13 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          iVar11 = (*pcVar8)();
          return iVar11;
        }
        fVar22 = (float)((ulonglong)
                         *(uint *)((this->AllocatedTiles).AllocatorInstance.Data +
                                  (longlong)(int)uVar13 * 4) %
                        (ulonglong)param_4->ParticleSimulationTileCount) / (float)uVar4;
        fVar19 = (float)truncf();
        auVar21 = roundps(ZEXT416((uint)fVar22),ZEXT416((uint)fVar22),3);
        fVar22 = fVar22 - fVar19;
        fVar19 = (float)truncf();
        fVar19 = auVar21._0_4_ / (float)uVar5 - fVar19;
        this->FreeParticlesInTile = 0x10;
      }
      iVar12 = param_1->ArrayNum;
      if (iVar12 == param_1->ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x44c,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      pFVar7 = (param_1->AllocatorInstance).Data;
      lVar16 = (longlong)iVar12 * 0x4c;
      param_1->ArrayNum = iVar12 + 1;
      uVar13 = 0x10 - this->FreeParticlesInTile;
      uVar14 = uVar13 & 0x80000003;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
      }
      *(float *)(pFVar7 + lVar16 + 0x40) = (float)(int)uVar14 / (float)iVar9 + fVar22;
      *(float *)(pFVar7 + lVar16 + 0x44) =
           (float)((int)(uVar13 + ((int)uVar13 >> 0x1f & 3U)) >> 2) / (float)iVar11 + fVar19;
      uVar13 = this->TileToAllocateFrom;
      uVar14 = 0;
      if ((int)uVar13 < (this->AllocatedTiles).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        iVar11 = (*pcVar8)();
        return iVar11;
      }
      iVar18 = iVar18 + 1;
      *(float *)(pFVar7 + lVar16 + 0x48) =
           (float)((ulonglong)
                   *(uint *)((this->AllocatedTiles).AllocatorInstance.Data +
                            (longlong)(int)uVar13 * 4) /
                  (ulonglong)param_4->ParticleSimulationTileCount);
      *(int *)(pFVar7 + lVar16 + 0x38) = this->TileToAllocateFrom;
      this->FreeParticlesInTile = this->FreeParticlesInTile + -1;
    } while (iVar18 < param_2);
  }
  return param_2;
}

// BuildNewParticles @ 1480fece0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::BuildNewParticles
          (FGPUSpriteParticleEmitterInstance *this,FNewParticle *param_1,FSpawnInfo *param_2,
          TArray<FNewParticle,TSizedDefaultAllocator<32>_> *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  uchar uVar3;
  byte bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  double dVar15;
  FNewParticle *pFVar16;
  bool bVar17;
  ulonglong uVar18;
  FNewParticle *pFVar19;
  float *pfVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  undefined1 *puVar26;
  uint uVar27;
  FGPUSpriteEmitterInfo *pFVar28;
  longlong lVar29;
  void *_Dst;
  longlong lVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  undefined1 auStack_1b8 [48];
  char local_188 [4];
  int local_184;
  FSpawnInfo *local_180;
  TArray<FNewParticle,TSizedDefaultAllocator<32>_> *local_178;
  float local_170;
  float local_16c;
  float local_168 [2];
  FNewParticle *local_160;
  UParticleModuleRequired *local_158;
  float *local_150;
  float *local_148;
  float *local_140;
  float *local_138;
  float *local_130;
  float *local_128;
  FGPUSpriteParticleEmitterInstance *local_120;
  undefined4 local_118;
  float local_114;
  void *local_110;
  double local_108;
  double dStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  
  dVar15 = __real_4140000000000000;
  fVar14 = __real_3f000000;
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar11 = __real_3f800000;
  puVar26 = auStack_1b8;
  local_d8 = __security_cookie.value ^ (ulonglong)local_188;
  iVar25 = *(int *)((longlong)&this->_padding_ + 4);
  local_158 = (this->EmitterInfo->RequiredModule).field0_0x0.DebugPtr;
  if (iVar25 == -0x10) {
    _Dst = (void *)0x0;
  }
  else {
    uVar22 = (ulonglong)(iVar25 + 0x1f);
    uVar18 = uVar22 + 0xf;
    if (uVar18 <= uVar22) {
      uVar18 = 0xffffffffffffff0;
    }
    puVar26 = auStack_1b8 + -(uVar18 & 0xfffffffffffffff0);
    _Dst = (void *)((longlong)&local_180 + -(uVar18 & 0xfffffffffffffff0));
  }
  uVar3 = (this->EmitterInfo->ScreenAlignment).Value;
  if (((uVar3 == '\x01') || (uVar3 == '\0')) || (local_188[0] = '\0', uVar3 == '\x06')) {
    local_188[0] = '\x01';
  }
  if (local_158->bUseLocalSpace == 0) {
    local_108 = (double)this->_padding_ - (double)this->_padding_;
    uVar39 = 0;
    uVar40 = 0;
    dVar35 = (double)this->_padding_ - (double)this->_padding_;
    uVar10 = (double)this->_padding_ - (double)this->_padding_;
  }
  else {
    dVar35 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    local_110 = (void *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_100 = local_108;
  }
  iVar25 = param_2->Count;
  local_f8._8_4_ = uVar39;
  local_f8._0_8_ = dVar35;
  local_f8._12_4_ = uVar40;
  do {
    if (iVar25 < 1) {
      *(undefined8 *)(puVar26 + -8) = 0x1480ff733;
      return;
    }
    iVar5 = *(int *)((longlong)&this->_padding_ + 4);
    local_184 = iVar25;
    local_180 = param_2;
    local_178 = param_3;
    local_160 = param_1;
    *(undefined8 *)(puVar26 + -8) = 0x1480feea4;
    memset(_Dst,0,(longlong)iVar5);
    auVar2 = *(undefined1 (*) [16])&this->_padding_;
    *(longlong *)((longlong)_Dst + 0x18) = this->_padding_;
    *(undefined1 (*) [16])((longlong)_Dst + 0x20) = auVar2;
    iVar5 = param_3->ArrayNum;
    iVar21 = param_2->Count - iVar5;
    if ((iVar5 != 0) && (iVar21 < iVar25)) {
      uVar27 = (iVar25 - iVar21) - 1;
      uVar23 = ~uVar27 >> 0x1f;
      uVar24 = 0;
      if ((int)uVar27 < iVar5) {
        uVar24 = uVar23;
      }
      if (uVar24 == 0) {
        *(longlong *)(puVar26 + 0x28) = (longlong)iVar5;
        *(longlong *)(puVar26 + 0x20) = (longlong)(int)uVar27;
        *(undefined8 *)(puVar26 + -8) = 0x1480fef1a;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar29 = (longlong)(int)uVar27;
      lVar30 = lVar29 * 0x4c;
      pFVar6 = (local_178->AllocatorInstance).Data;
      uVar1 = *(undefined8 *)(pFVar6 + lVar30 + 4);
      *(double *)((longlong)_Dst + 0x18) = (double)*(float *)(pFVar6 + lVar30);
      *(double *)((longlong)_Dst + 0x20) = (double)(float)uVar1;
      *(double *)((longlong)_Dst + 0x28) = (double)(float)((ulonglong)uVar1 >> 0x20);
      uVar24 = 0;
      if ((int)uVar27 < local_178->ArrayNum) {
        uVar24 = uVar23;
      }
      if (uVar24 == 0) {
        *(longlong *)(puVar26 + 0x28) = (longlong)local_178->ArrayNum;
        *(longlong *)(puVar26 + 0x20) = lVar29;
        *(undefined8 *)(puVar26 + -8) = 0x1480fef85;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      *(undefined4 *)((longlong)_Dst + 0x90) =
           *(undefined4 *)((local_178->AllocatorInstance).Data + lVar30 + 0xc);
      uVar24 = 0;
      if ((int)uVar27 < local_178->ArrayNum) {
        uVar24 = uVar23;
      }
      if (uVar24 == 0) {
        *(longlong *)(puVar26 + 0x28) = (longlong)local_178->ArrayNum;
        *(longlong *)(puVar26 + 0x20) = lVar29;
        *(undefined8 *)(puVar26 + -8) = 0x1480fefd7;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar6 = (local_178->AllocatorInstance).Data;
      *(float *)((longlong)_Dst + 0x40) =
           *(float *)(pFVar6 + lVar30 + 0x10) + *(float *)((longlong)_Dst + 0x40);
      *(float *)((longlong)_Dst + 0x44) =
           *(float *)(pFVar6 + lVar30 + 0x14) + *(float *)((longlong)_Dst + 0x44);
      *(float *)((longlong)_Dst + 0x48) =
           *(float *)(pFVar6 + lVar30 + 0x18) + *(float *)((longlong)_Dst + 0x48);
      param_2 = local_180;
    }
    pFVar28 = this->EmitterInfo;
    uVar24 = 0;
    if (0 < (pFVar28->SpawnModules).ArrayNum) {
      lVar29 = 0;
      do {
        iVar25 = (pFVar28->SpawnModules).ArrayNum;
        uVar23 = 0;
        if ((int)uVar24 < iVar25) {
          uVar23 = ~uVar24 >> 0x1f;
        }
        if (uVar23 == 0) {
          *(longlong *)(puVar26 + 0x28) = (longlong)iVar25;
          *(longlong *)(puVar26 + 0x20) = (longlong)(int)uVar24;
          *(undefined8 *)(puVar26 + -8) = 0x1480ff083;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        plVar7 = *(longlong **)((pFVar28->SpawnModules).AllocatorInstance.Data + lVar29);
        if ((char)plVar7[5] < '\0') {
          local_114 = param_2->StartTime;
          local_118 = 0;
          pcVar8 = *(code **)(*plVar7 + 0x2b8);
          local_120 = this;
          local_110 = _Dst;
          *(undefined8 *)(puVar26 + -8) = 0x1480ff0bf;
          (*pcVar8)(plVar7,&local_120);
        }
        pFVar28 = this->EmitterInfo;
        uVar24 = uVar24 + 1;
        lVar29 = lVar29 + 8;
      } while ((int)uVar24 < (pFVar28->SpawnModules).ArrayNum);
    }
    pFVar16 = local_160;
    uVar24 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    (this->RandomStream).Seed = uVar24;
    fVar41 = (float)(uVar24 >> 9 | 0x3f800000) - fVar11;
    pFVar19 = local_160 + 1;
    uVar24 = (local_160->ResilienceAndTileIndex).AllocatedTileIndex;
    lVar29 = (longlong)(int)uVar24;
    *(undefined8 *)&(local_160->Velocity).field0_0x0 = *(undefined8 *)((longlong)_Dst + 0x30);
    (local_160->Velocity).field0_0x0._s_0.Z = *(float *)((longlong)_Dst + 0x38);
    dVar34 = (double)fVar41;
    pFVar28 = this->EmitterInfo;
    dVar33 = (double)((float)local_184 / (float)local_180->Count);
    dVar36 = (double)local_180->StartTime;
    dVar9 = dVar34 * (pFVar28->OrbitOffsetRange).field0_0x0._s_0.X +
            (pFVar28->OrbitOffsetBase).field0_0x0._s_0.X + dVar35 * dVar33 +
            (double)(local_160->Velocity).field0_0x0._s_0.X * dVar36 +
            *(double *)((longlong)_Dst + 0x18);
    dVar37 = dVar34 * (pFVar28->OrbitOffsetRange).field0_0x0._s_0.Y +
             (pFVar28->OrbitOffsetBase).field0_0x0._s_0.Y + local_108 * dVar33 +
             (double)(local_160->Velocity).field0_0x0._s_0.Y * dVar36 +
             *(double *)((longlong)_Dst + 0x20);
    dVar35 = dVar34 * (pFVar28->OrbitOffsetRange).field0_0x0._s_0.Z +
             (pFVar28->OrbitOffsetBase).field0_0x0._s_0.Z + (double)uVar10 * dVar33 +
             (double)(local_160->Velocity).field0_0x0._s_0.Z * dVar36 +
             *(double *)((longlong)_Dst + 0x28);
    local_160 = pFVar19;
    if ((local_158->bUseLocalSpace == 0) && (local_158->bSupportLargeWorldCoordinates != '\0')) {
      pcVar8 = *(code **)(*(longlong *)this->_padding_ + 0x78);
      *(undefined8 *)(puVar26 + -8) = 0x1480ff20f;
      pfVar20 = (float *)(*pcVar8)();
      dVar35 = dVar35 - (double)pfVar20[2] * dVar15;
      dVar37 = dVar37 - (double)pfVar20[1] * dVar15;
      dVar9 = dVar9 - (double)*pfVar20 * dVar15;
    }
    (param_1->Position).field0_0x0._s_0.X = (float)dVar9;
    (param_1->Position).field0_0x0._s_0.Y = (float)dVar37;
    (param_1->Position).field0_0x0._s_0.Z = (float)dVar35;
    pFVar16->RelativeTime = *(float *)((longlong)_Dst + 0x90);
    fVar31 = *(float *)((longlong)_Dst + 0x94);
    if (*(float *)((longlong)_Dst + 0x94) <= __real_3a83126f) {
      fVar31 = __real_3a83126f;
    }
    pFVar16->TimeScale = fVar31;
    dVar35 = __real_3fe0000000000000;
    local_e8 = *(undefined8 *)((longlong)_Dst + 0x50);
    local_e0 = *(undefined4 *)((longlong)_Dst + 0x58);
    dVar34 = (double)(float)((ulonglong)local_e8 >> 0x20);
    dVar37 = (double)(float)local_e8;
    fVar31 = fVar14;
    if (dVar34 < 0.0) {
      fVar31 = 0.0;
    }
    fVar38 = fVar14;
    if (dVar37 < 0.0) {
      fVar38 = 0.0;
    }
    fVar32 = (float)((double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) & uVar13,
                                      SUB84(dVar37,0) & uVar12) *
                     (this->EmitterInfo->InvMaxSize).field0_0x0._s_0.X * __real_3fe0000000000000);
    (pFVar16->Size).field0_0x0._s_0.X = fVar32;
    if (local_188[0] == '\0') {
      dVar35 = (double)CONCAT44((uint)((ulonglong)dVar34 >> 0x20) & uVar13,SUB84(dVar34,0) & uVar12)
               * (this->EmitterInfo->InvMaxSize).field0_0x0._s_0.Y * dVar35;
    }
    else {
      dVar35 = (double)fVar32;
    }
    (pFVar16->Size).field0_0x0._s_0.X = fVar38 + fVar32;
    (pFVar16->Size).field0_0x0._s_0.Y = (float)dVar35 + fVar31;
    fVar38 = *(float *)((longlong)_Dst + 0x3c) * __real_3e22f983;
    *(undefined8 *)(puVar26 + -8) = 0x1480ff35b;
    fVar31 = (float)truncf();
    pFVar16->Rotation = fVar38 - fVar31;
    fVar38 = *(float *)((longlong)_Dst + 0x4c) * __real_3e22f983;
    fVar31 = this->EmitterInfo->InvRotationRateScale;
    pFVar16->RandomOrbit = fVar41;
    pFVar16->RelativeRotationRate = (fVar38 * fVar31) / pFVar16->TimeScale;
    pFVar28 = this->EmitterInfo;
    fVar41 = *(float *)&this->_padding_;
    if ((float)(int)((uint)(pFVar28->VectorFieldScale).LookupTable.EntryStride -
                    (uint)(pFVar28->VectorFieldScale).LookupTable.SubEntryStride) != fVar11) {
      *(undefined8 *)(puVar26 + -8) = 0x1480ff3df;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("LookupTable.GetValuesPerEntry() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Distributions.h"
                          ,0x11b,L"");
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    bVar4 = (pFVar28->VectorFieldScale).LookupTable.SubEntryStride;
    *(float **)(puVar26 + 0x20) = &local_170;
    *(undefined8 *)(puVar26 + -8) = 0x1480ff40d;
    FDistributionLookupTable::GetEntry
              (&(pFVar28->VectorFieldScale).LookupTable,fVar41,&local_150,&local_148,
               *(float **)(puVar26 + 0x20));
    uVar23 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    fVar41 = local_148[bVar4];
    fVar31 = local_150[bVar4];
    fVar38 = local_150[bVar4];
    fVar32 = (*local_148 - *local_150) * local_170 + *local_150;
    (this->RandomStream).Seed = uVar23;
    pFVar16->VectorFieldScale =
         (((fVar41 - fVar31) * local_170 + fVar38) - fVar32) *
         ((float)(uVar23 >> 9 | 0x3f800000) - fVar11) + fVar32;
    pFVar28 = this->EmitterInfo;
    fVar41 = *(float *)&this->_padding_;
    if ((float)(int)((uint)(pFVar28->DragCoefficient).LookupTable.EntryStride -
                    (uint)(pFVar28->DragCoefficient).LookupTable.SubEntryStride) != fVar11) {
      *(undefined8 *)(puVar26 + -8) = 0x1480ff4bf;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("LookupTable.GetValuesPerEntry() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Distributions.h"
                          ,0x11b,L"");
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    bVar4 = (pFVar28->DragCoefficient).LookupTable.SubEntryStride;
    *(float **)(puVar26 + 0x20) = &local_16c;
    *(undefined8 *)(puVar26 + -8) = 0x1480ff4ed;
    FDistributionLookupTable::GetEntry
              (&(pFVar28->DragCoefficient).LookupTable,fVar41,&local_140,&local_138,
               *(float **)(puVar26 + 0x20));
    uVar23 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    fVar41 = local_138[bVar4];
    fVar31 = local_140[bVar4];
    fVar38 = local_140[bVar4];
    fVar32 = (*local_138 - *local_140) * local_16c + *local_140;
    (this->RandomStream).Seed = uVar23;
    pFVar16->DragCoefficient =
         (((fVar41 - fVar31) * local_16c + fVar38) - fVar32) *
         ((float)(uVar23 >> 9 | 0x3f800000) - fVar11) + fVar32;
    pFVar28 = this->EmitterInfo;
    fVar41 = *(float *)&this->_padding_;
    if ((float)(int)((uint)(pFVar28->Resilience).LookupTable.EntryStride -
                    (uint)(pFVar28->Resilience).LookupTable.SubEntryStride) != fVar11) {
      *(undefined8 *)(puVar26 + -8) = 0x1480ff59f;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("LookupTable.GetValuesPerEntry() == 1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Distributions.h"
                          ,0x11b,L"");
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    bVar4 = (pFVar28->Resilience).LookupTable.SubEntryStride;
    *(float **)(puVar26 + 0x20) = local_168;
    *(undefined8 *)(puVar26 + -8) = 0x1480ff5cd;
    FDistributionLookupTable::GetEntry
              (&(pFVar28->Resilience).LookupTable,fVar41,&local_130,&local_128,
               *(float **)(puVar26 + 0x20));
    uVar23 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
    fVar41 = local_128[bVar4];
    fVar31 = local_130[bVar4];
    fVar38 = local_130[bVar4];
    fVar32 = (*local_128 - *local_130) * local_168[0] + *local_130;
    (this->RandomStream).Seed = uVar23;
    local_180->StartTime = local_180->StartTime - local_180->Increment;
    (pFVar16->ResilienceAndTileIndex).Resilience =
         (((fVar41 - fVar31) * local_168[0] + fVar38) - fVar32) *
         ((float)(uVar23 >> 9 | 0x3f800000) - fVar11) + fVar32;
    iVar25 = (this->TileTimeOfDeath).ArrayNum;
    uVar23 = 0;
    if ((int)uVar24 < iVar25) {
      uVar23 = ~uVar24 >> 0x1f;
    }
    if (uVar23 == 0) {
      *(longlong *)(puVar26 + 0x28) = (longlong)iVar25;
      *(longlong *)(puVar26 + 0x20) = lVar29;
      *(undefined8 *)(puVar26 + -8) = 0x1480ff68c;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar25 = (this->TileTimeOfDeath).ArrayNum;
    fVar31 = fVar11 / pFVar16->TimeScale + *(float *)((longlong)&this->_padding_ + 4);
    fVar41 = *(float *)((this->TileTimeOfDeath).AllocatorInstance.Data + lVar29 * 4);
    if (fVar31 <= fVar41) {
      fVar31 = fVar41;
    }
    uVar23 = 0;
    if ((int)uVar24 < iVar25) {
      uVar23 = ~uVar24 >> 0x1f;
    }
    if (uVar23 == 0) {
      *(longlong *)(puVar26 + 0x28) = (longlong)iVar25;
      *(longlong *)(puVar26 + 0x20) = lVar29;
      *(undefined8 *)(puVar26 + -8) = 0x1480ff6ee;
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar25 = local_184 + -1;
    *(float *)((this->TileTimeOfDeath).AllocatorInstance.Data + lVar29 * 4) = fVar31;
    param_1 = local_160;
    param_2 = local_180;
    param_3 = local_178;
    dVar35 = (double)local_f8._0_8_;
  } while( true );
}

// CalculateParticleStride @ 1481017e0

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FGPUSpriteParticleEmitterInstance::CalculateParticleStride
          (FGPUSpriteParticleEmitterInstance *this,uint param_1)

{
  return param_1;
}

// ClearAllocatedTiles @ 148102040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::ClearAllocatedTiles(FGPUSpriteParticleEmitterInstance *this)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar3;
  FScriptContainerElement *_Src;
  uint uVar4;
  int iVar5;
  ForElementType<unsigned_int> FVar6;
  uint uVar7;
  
  pTVar2 = &this->TilesToClear;
  piVar1 = &(this->TilesToClear).ArrayMax;
  (this->TilesToClear).ArrayNum = 0;
  if ((this->TilesToClear).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (pTVar2 != &this->AllocatedTiles) {
    iVar5 = (this->AllocatedTiles).ArrayNum;
    _Src = (this->AllocatedTiles).AllocatorInstance.Data;
    (this->TilesToClear).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      if (iVar5 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar5 << 2);
      }
    }
  }
  iVar5 = (this->ActiveTiles).NumBits;
  this_00 = &this->ActiveTiles;
  this->FreeParticlesInTile = 0;
  this->TileToAllocateFrom = -1;
  uVar4 = iVar5 + 0x1f;
  uVar7 = uVar4 >> 5;
  (this->ActiveTiles).NumBits = iVar5;
  if (uVar4 >> 5 != 0) {
    if ((this->ActiveTiles).MaxBits + 0x1fU >> 5 < uVar7) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&this_00->AllocatorInstance,0,uVar7,4);
      (this->ActiveTiles).MaxBits = uVar7 << 5;
    }
    FVar6 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
    if (FVar6 == (ForElementType<unsigned_int>)0x0) {
      FVar6 = (ForElementType<unsigned_int>)this_00;
    }
    memset((void *)FVar6,0,(ulonglong)uVar7 << 2);
    iVar5 = (this->ActiveTiles).NumBits;
    uVar7 = iVar5 >> 0x1f & 0x1f;
    uVar4 = iVar5 + uVar7;
    iVar5 = (uVar4 & 0x1f) - uVar7;
    if (iVar5 != 0) {
      FVar6 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
      if (FVar6 == (ForElementType<unsigned_int>)0x0) {
        FVar6 = (ForElementType<unsigned_int>)this_00;
      }
      puVar3 = (uint *)((longlong)FVar6 + (longlong)((int)uVar4 >> 5) * 4);
      *puVar3 = *puVar3 & 0xffffffffU >> (0x20U - (char)iVar5 & 0x1f);
    }
  }
  return;
}

// FillReplayData @ 148108cd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGPUSpriteParticleEmitterInstance::FillReplayData
          (FGPUSpriteParticleEmitterInstance *this,FDynamicEmitterReplayDataBase *param_1)

{
  return true;
}

// ForceSpawn @ 14810ad10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::ForceSpawn
          (FGPUSpriteParticleEmitterInstance *this,float param_1,int param_2,int param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  int *piVar1;
  TArray<FNewParticle,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  UParticleLODLevel *pUVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  
  pUVar10 = FParticleEmitterInstance::GetCurrentLODLevelChecked((FParticleEmitterInstance *)this);
  if (((pUVar10->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace != 0) {
    param_4 = &UE::Math::TVector<double>::ZeroVector;
  }
  local_a8 = (param_4->field0_0x0)._s_0.Z;
  local_b8 = (param_4->field0_0x0)._s_0.X;
  dStack_b0 = (param_4->field0_0x0)._s_0.Y;
  if (param_2 != 0) {
    piVar1 = &(this->ForceSpawnedParticles).ArrayMax;
    if ((*piVar1 == 0) && (0 < param_2)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x4c,4,param_2,&(this->ForceSpawnedParticles).AllocatorInstance,
                 (this->ForceSpawnedParticles).ArrayNum,piVar1);
    }
  }
  dVar7 = local_a8;
  dVar6 = dStack_b0;
  dVar5 = local_b8;
  iVar12 = 0;
  if (0 < param_2) {
    pTVar2 = &this->ForceSpawnedParticles;
    fVar16 = (float)local_a8;
    fVar14 = (float)local_b8;
    fVar15 = (float)dStack_b0;
    do {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      fStack_144 = (float)(param_5->field0_0x0)._s_0.Y;
      local_148 = (float)(param_5->field0_0x0)._s_0.X;
      fStack_140 = (float)(param_5->field0_0x0)._s_0.Z;
      fStack_14c = (float)iVar12 * (param_1 / (float)param_2);
      local_158 = fVar14;
      fStack_154 = fVar15;
      fStack_150 = fVar16;
      if (((pFVar3 <= (FScriptContainerElement *)&local_158) &&
          ((FScriptContainerElement *)&local_158 <
           pFVar3 + (longlong)(this->ForceSpawnedParticles).ArrayMax * 0x4c)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = (this->ForceSpawnedParticles).ArrayNum;
      if (iVar9 == (this->ForceSpawnedParticles).ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x44c,&pTVar2->AllocatorInstance,&(this->ForceSpawnedParticles).ArrayMax)
        ;
      }
      (this->ForceSpawnedParticles).ArrayNum = iVar9 + 1;
      iVar12 = iVar12 + 1;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      lVar11 = (longlong)iVar9 * 0x4c;
      *(ulonglong *)(pFVar3 + lVar11) = CONCAT44(fStack_154,local_158);
      *(ulonglong *)(pFVar3 + lVar11 + 8) = CONCAT44(fStack_14c,fStack_150);
      *(ulonglong *)(pFVar3 + lVar11 + 0x10) = CONCAT44(fStack_144,local_148);
      *(ulonglong *)(pFVar3 + lVar11 + 0x10 + 8) = CONCAT44(uStack_13c,fStack_140);
      *(undefined8 *)(pFVar3 + lVar11 + 0x20) = local_138;
      *(undefined8 *)(pFVar3 + lVar11 + 0x20 + 8) = uStack_130;
      *(undefined8 *)(pFVar3 + lVar11 + 0x30) = local_128;
      *(undefined8 *)(pFVar3 + lVar11 + 0x30 + 8) = uStack_120;
      *(undefined8 *)(pFVar3 + lVar11 + 0x40) = local_118;
      *(undefined4 *)(pFVar3 + lVar11 + 0x48) = local_110;
    } while (iVar12 < param_2);
  }
  if (param_3 != 0) {
    piVar1 = &(this->ForceBurstSpawnedParticles).ArrayMax;
    if ((*piVar1 == 0) && (0 < param_3)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x4c,4,param_3,&(this->ForceBurstSpawnedParticles).AllocatorInstance,
                 (this->ForceBurstSpawnedParticles).ArrayNum,piVar1);
    }
  }
  if (0 < param_3) {
    uVar13 = (ulonglong)(uint)param_3;
    pTVar2 = &this->ForceBurstSpawnedParticles;
    fVar14 = (float)dVar5;
    fVar15 = (float)dVar6;
    fVar16 = (float)dVar7;
    do {
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      uStack_fc = 0;
      local_f8 = (float)(param_5->field0_0x0)._s_0.X;
      fStack_f4 = (float)(param_5->field0_0x0)._s_0.Y;
      fStack_f0 = (float)(param_5->field0_0x0)._s_0.Z;
      local_108 = fVar14;
      fStack_104 = fVar15;
      fStack_100 = fVar16;
      if (((pFVar3 <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           pFVar3 + (longlong)(this->ForceBurstSpawnedParticles).ArrayMax * 0x4c)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar12 = (this->ForceBurstSpawnedParticles).ArrayNum;
      if (iVar12 == (this->ForceBurstSpawnedParticles).ArrayMax) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x44c,&pTVar2->AllocatorInstance,
                            &(this->ForceBurstSpawnedParticles).ArrayMax);
      }
      (this->ForceBurstSpawnedParticles).ArrayNum = iVar12 + 1;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      lVar11 = (longlong)iVar12 * 0x4c;
      *(ulonglong *)(pFVar3 + lVar11) = CONCAT44(fStack_104,local_108);
      *(ulonglong *)(pFVar3 + lVar11 + 8) = CONCAT44(uStack_fc,fStack_100);
      *(ulonglong *)(pFVar3 + lVar11 + 0x10) = CONCAT44(fStack_f4,local_f8);
      *(ulonglong *)(pFVar3 + lVar11 + 0x10 + 8) = CONCAT44(uStack_ec,fStack_f0);
      *(undefined8 *)(pFVar3 + lVar11 + 0x20) = local_e8;
      *(undefined8 *)(pFVar3 + lVar11 + 0x20 + 8) = uStack_e0;
      *(undefined8 *)(pFVar3 + lVar11 + 0x30) = local_d8;
      *(undefined8 *)(pFVar3 + lVar11 + 0x30 + 8) = uStack_d0;
      *(undefined8 *)(pFVar3 + lVar11 + 0x40) = local_c8;
      *(undefined4 *)(pFVar3 + lVar11 + 0x48) = local_c0;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}

// ForceUpdateBoundingBox @ 14810b2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::ForceUpdateBoundingBox(FGPUSpriteParticleEmitterInstance *this)

{
  if (2 < (byte)LogParticles._0_1_) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_virtual_void___cdecl_FGPUSpriteParticleEmitterInstance::ForceUpdateBoundingBox(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogParticles);
    return;
  }
  return;
}

// FreeInactiveTiles @ 14810ca40

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FGPUSpriteParticleEmitterInstance::FreeInactiveTiles(FGPUSpriteParticleEmitterInstance *this)

{
  int *piVar1;
  uint *puVar2;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  FParticleSimulationResources *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ForElementType<unsigned_int> FVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int local_58 [6];
  
  iVar7 = GetMinTileCount(this);
  this_00 = &this->ActiveTiles;
  iVar14 = (this->ActiveTiles).NumBits + -1;
  iVar15 = iVar14 >> 5;
  uVar13 = 0;
  uVar11 = 1 << ((byte)iVar14 & 0x1f);
  if (-1 < iVar14) {
    do {
      if (iVar14 < iVar7) break;
      FVar10 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<unsigned_int>)this_00;
      if (FVar10 != (ForElementType<unsigned_int>)0x0) {
        FVar9 = FVar10;
      }
      if ((*(uint *)((longlong)FVar9 + (longlong)iVar15 * 4) & uVar11) != 0) break;
      uVar13 = uVar13 + 1;
      iVar14 = iVar14 + -1;
      uVar11 = uVar11 >> 1;
      if (uVar11 == 0) {
        uVar11 = 0x80000000;
        iVar15 = iVar15 + -1;
      }
    } while (-1 < iVar14);
    if (0 < (int)uVar13) {
      iVar7 = (this->AllocatedTiles).ArrayNum;
      uVar11 = iVar7 - uVar13;
      uVar16 = (ulonglong)(int)uVar11;
      pFVar3 = this->FXSystem->ParticleSimulationResources;
      if ((longlong)uVar16 < (longlong)iVar7) {
        uVar17 = uVar16;
        uVar18 = uVar16;
        do {
          lpCriticalSection = &(pFVar3->TileAllocator).CriticalSection;
          uVar12 = (uint)uVar17;
          uVar8 = 0;
          if ((int)uVar12 < (this->AllocatedTiles).ArrayNum) {
            uVar8 = ~uVar12 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar7 = (*pcVar5)();
            return iVar7;
          }
          iVar14 = *(int *)((this->AllocatedTiles).AllocatorInstance.Data + uVar18 * 4);
          if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::ReportNotNullPtr();
          }
          EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          iVar15 = FParticleTileAllocator::GetAllocatedTileCount(&pFVar3->TileAllocator);
          if ((iVar15 <= iVar14) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("TileIndex < GetAllocatedTileCount()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                                 ,0xef,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar7 = (*pcVar5)();
            return iVar7;
          }
          iVar15 = FParticleTileAllocator::GetAllocatedTileCount(&pFVar3->TileAllocator);
          if ((iVar15 <= (pFVar3->TileAllocator).FreeTiles.ArrayNum) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("FreeTiles.Num() < GetAllocatedTileCount()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                                 ,0xf0,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar7 = (*pcVar5)();
            return iVar7;
          }
          pFVar4 = (pFVar3->TileAllocator).FreeTiles.AllocatorInstance.Data;
          local_58[0] = iVar14;
          if (((pFVar4 <= (FScriptContainerElement *)local_58) &&
              ((FScriptContainerElement *)local_58 <
               pFVar4 + (longlong)(pFVar3->TileAllocator).FreeTiles.ArrayMax * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar7 = (*pcVar5)();
            return iVar7;
          }
          iVar14 = (pFVar3->TileAllocator).FreeTiles.ArrayNum;
          piVar1 = &(pFVar3->TileAllocator).FreeTiles.ArrayMax;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(pFVar3->TileAllocator).FreeTiles.AllocatorInstance,piVar1);
          }
          (pFVar3->TileAllocator).FreeTiles.ArrayNum = iVar14 + 1;
          *(int *)((pFVar3->TileAllocator).FreeTiles.AllocatorInstance.Data + (longlong)iVar14 * 4)
               = local_58[0];
          LeaveCriticalSection((LPCRITICAL_SECTION)&(pFVar3->TileAllocator).CriticalSection);
          uVar17 = (ulonglong)(uVar12 + 1);
          uVar18 = uVar18 + 1;
        } while ((longlong)uVar18 < (longlong)iVar7);
      }
      if ((((int)uVar11 < 0) || ((this->ActiveTiles).NumBits < iVar7)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("BaseIndex >= 0 && NumBitsToRemove >= 0 && BaseIndex + NumBitsToRemove <= NumBits"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x3ee,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      iVar14 = (this->ActiveTiles).NumBits;
      if (iVar7 != iVar14) {
        FVar10 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<unsigned_int>)0x0) {
          FVar10 = (ForElementType<unsigned_int>)this_00;
        }
        FBitArrayMemory::MemmoveBitsWordOrder
                  ((uint *)FVar10,uVar11,(uint *)FVar10,iVar7,(iVar14 - uVar11) - uVar13);
      }
      iVar14 = (this->ActiveTiles).NumBits - uVar13;
      (this->ActiveTiles).NumBits = iVar14;
      uVar12 = iVar14 >> 0x1f & 0x1f;
      uVar8 = iVar14 + uVar12;
      iVar14 = (uVar8 & 0x1f) - uVar12;
      if (iVar14 != 0) {
        FVar10 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
        if (FVar10 == (ForElementType<unsigned_int>)0x0) {
          FVar10 = (ForElementType<unsigned_int>)this_00;
        }
        puVar2 = (uint *)((longlong)FVar10 + (longlong)((int)uVar8 >> 5) * 4);
        *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)iVar14 & 0x1f);
      }
      TBitArray<FDefaultBitArrayAllocator>::CheckInvariants(this_00);
      uVar8 = 0;
      if (iVar7 <= (this->AllocatedTiles).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (((~uVar13 >> 0x1f & uVar8) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      pFVar4 = (this->AllocatedTiles).AllocatorInstance.Data + uVar16 * 4;
      iVar14 = ((this->AllocatedTiles).ArrayNum - uVar11) - uVar13;
      if (iVar14 != 0) {
        memmove(pFVar4,pFVar4 + (longlong)(int)uVar13 * 4,(longlong)iVar14 << 2);
      }
      piVar1 = &(this->AllocatedTiles).ArrayNum;
      *piVar1 = *piVar1 - uVar13;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(this->AllocatedTiles).AllocatorInstance,(this->AllocatedTiles).ArrayNum,
                 &(this->AllocatedTiles).ArrayMax);
      uVar8 = 0;
      if (iVar7 <= (this->TileTimeOfDeath).ArrayNum) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if (((~uVar13 >> 0x1f & uVar8) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      pFVar4 = (this->TileTimeOfDeath).AllocatorInstance.Data + uVar16 * 4;
      iVar7 = ((this->TileTimeOfDeath).ArrayNum - uVar11) - uVar13;
      if (iVar7 != 0) {
        memmove(pFVar4,pFVar4 + (longlong)(int)uVar13 * 4,(longlong)iVar7 << 2);
      }
      piVar1 = &(this->TileTimeOfDeath).ArrayNum;
      *piVar1 = *piVar1 - uVar13;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,&(this->TileTimeOfDeath).AllocatorInstance,(this->TileTimeOfDeath).ArrayNum,
                 &(this->TileTimeOfDeath).ArrayMax);
      this->Simulation->bDirty_GameThread = true;
    }
  }
  return uVar13;
}

// GetDynamicData @ 148111610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FDynamicEmitterDataBase * __thiscall
FGPUSpriteParticleEmitterInstance::GetDynamicData
          (FGPUSpriteParticleEmitterInstance *this,bool param_1,Type param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double adVar9 [2];
  byte bVar10;
  uchar uVar11;
  UParticleModuleRequired *pUVar12;
  FGPUSpriteEmitterInfo *pFVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  TStatIdData *pTVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  undefined8 uVar24;
  TConsoleVariableData<float> *pTVar25;
  TConsoleVariableData<float> *pTVar26;
  TConsoleVariableData<int> *pTVar27;
  bool bVar28;
  int iVar29;
  FName *pFVar30;
  TStatIdData *pTVar31;
  FDynamicEmitterDataBase *pFVar32;
  FFXSystem *pFVar33;
  UParticleLODLevel *pUVar34;
  longlong lVar35;
  double *pdVar36;
  float *pfVar37;
  UMaterialInterface *pUVar38;
  longlong lVar39;
  TTransform<double> *pTVar40;
  TMatrix<double> *pTVar41;
  TVector<double>_u_0 *pTVar42;
  TVector<float> *pTVar43;
  UObject *pUVar44;
  TVector<double> *pTVar45;
  FThreadSafeStaticStat<FStat_STAT_GPUMultiIterationsEmitters> FVar46;
  FThreadSafeStaticStat<FStat_STAT_GPUSingleIterationEmitters> *this_00;
  uint uVar47;
  int iVar48;
  FName FVar49;
  char cVar50;
  byte bVar51;
  wchar_t *pwVar52;
  TVector<float> *pTVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auStackY_808 [32];
  FColor_u_0 local_788 [2];
  FName local_780;
  FName local_778;
  TVector<double>_u_0 local_768;
  TVector<double>_u_0 local_750;
  TVector<double>_u_0 local_738;
  double local_720;
  double local_718;
  double local_710;
  undefined1 local_708;
  FName local_700;
  FName local_6f8;
  FName local_6f0;
  FName local_6e8 [2];
  TTransform<double> local_6d8;
  double local_678;
  double dStack_670;
  double local_668;
  double local_660 [2];
  double local_650;
  TMatrix<double> local_648;
  TMatrix<double> local_5c8;
  TVector<double> local_548;
  TVector<double> local_530;
  TMatrix<double> local_518;
  TMatrix<double> local_498;
  TMatrix<double> local_418;
  TMatrix<double> local_398;
  TVector<double>_u_0 local_318 [2];
  TMatrix<double> local_2d8;
  TMatrix<double> local_258;
  TMatrix<double> local_1d8;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_808;
  pFVar32 = (FDynamicEmitterDataBase *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_struct_FDynamicEmitterDataBase*___ptr64___cdecl_FGPUSpriteParticleEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_struct_FDynamicEmitterDataBase*___ptr64___cdecl_FGPUSpriteParticleEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_struct_FDynamicEmitterDataBase*___ptr64___cdecl_FGPUSpriteParticleEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FDynamicEmitterDataBase_GetDynamicData = (TStatIdData *)0x0;
    pFVar30 = ::FName::FName(&local_700,"STAT_FDynamicEmitterDataBase_GetDynamicData");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_struct_FDynamicEmitterDataBase*___ptr64___cdecl_FGPUSpriteParticleEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)___ptr64'
                ::__l2::StatPtr_STAT_FDynamicEmitterDataBase_GetDynamicData,*pFVar30,
               L"STAT_FDynamicEmitterDataBase_GetDynamicData","STATGROUP_Quick","STATCAT_Advanced",
               L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_struct_FDynamicEmitterDataBase*___ptr64___cdecl_FGPUSpriteParticleEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar31 = _StatPtr_STAT_FDynamicEmitterDataBase_GetDynamicData;
  if (_StatPtr_STAT_FDynamicEmitterDataBase_GetDynamicData == (TStatIdData *)0x0) {
    pFVar30 = ::FName::FName(&local_6f8,"STAT_FDynamicEmitterDataBase_GetDynamicData");
    pTVar31 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_struct_FDynamicEmitterDataBase*___ptr64___cdecl_FGPUSpriteParticleEmitterInstance::GetDynamicData(bool,ERHIFeatureLevel::Type)___ptr64'
                          ::__l2::StatPtr_STAT_FDynamicEmitterDataBase_GetDynamicData,*pFVar30,
                         L"STAT_FDynamicEmitterDataBase_GetDynamicData","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar49 = *(FName *)&pTVar31->Name;
  bVar20 = false;
  bVar22 = false;
  local_778.ComparisonIndex.Value = 0;
  local_778.Number = 0;
  if ((FVar49.ComparisonIndex.Value.Value == 0) && (FVar49.Number == 0)) {
LAB_14811178a:
    bVar21 = false;
    FVar49 = local_778;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_788[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_788[0]._s_0,(pTVar31->StatDescriptionAnsi).Ptr);
      bVar20 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_780.ComparisonIndex.Value = FVar49.ComparisonIndex.Value.Value;
        local_780.Number = FVar49.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_780,(pTVar31->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                   ,0xce9);
        bVar20 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14811178a;
    FThreadStats::AddMessage(FVar49,CycleScopeStart);
    bVar21 = true;
  }
  if ((this->_padding_ == 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("SpriteTemplate",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0xcea,L""), bVar28)) {
    pcVar14 = (code *)swi(3);
    pFVar32 = (FDynamicEmitterDataBase *)(*pcVar14)();
    return pFVar32;
  }
  if ((this->FXSystem == (FFXSystem *)0x0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("FXSystem",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0xceb,L""), bVar28)) {
    pcVar14 = (code *)swi(3);
    pFVar32 = (FDynamicEmitterDataBase *)(*pcVar14)();
    return pFVar32;
  }
  pFVar33 = (FFXSystem *)(**(code **)(*(longlong *)this->_padding_ + 0xd0))();
  if ((pFVar33 != this->FXSystem) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("Component.GetFXSystem() == FXSystem",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0xcec,L""), bVar28)) {
    pcVar14 = (code *)swi(3);
    pFVar32 = (FDynamicEmitterDataBase *)(*pcVar14)();
    return pFVar32;
  }
  pUVar34 = FParticleEmitterInstance::GetCurrentLODLevelChecked((FParticleEmitterInstance *)this);
  if ((pUVar34->bEnabled == 0) || ((this->_padding_ & 1) == 0)) goto LAB_148112981;
  lVar35 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
  pUVar12 = (this->EmitterInfo->RequiredModule).field0_0x0.DebugPtr;
  bVar51 = pUVar12->bUseLocalSpace;
  if ((bVar51 == 0) && (pUVar12->bSupportLargeWorldCoordinates != '\0')) {
    pFVar32 = (FDynamicEmitterDataBase *)&DAT_00000001;
  }
  cVar50 = (char)pFVar32;
  pdVar36 = (double *)(**(code **)(*(longlong *)this->_padding_ + 0x10))();
  local_6d8.Rotation.XY.m128d_f64[0] = *pdVar36;
  local_6d8.Rotation.XY.m128d_f64[1] = pdVar36[1];
  local_6d8.Rotation.ZW.m128d_f64[0] = pdVar36[2];
  local_6d8.Rotation.ZW.m128d_f64[1] = pdVar36[3];
  dVar3 = (*(double (*) [2])(pdVar36 + 4))[0];
  dVar4 = pdVar36[5];
  local_6d8.Translation.XY.m128d_f64 = *(double (*) [2])(pdVar36 + 4);
  dVar5 = (*(double (*) [2])(pdVar36 + 6))[0];
  dVar17 = pdVar36[7];
  local_6d8.Translation.ZW.m128d_f64 = *(double (*) [2])(pdVar36 + 6);
  adVar9 = *(double (*) [2])(pdVar36 + 8);
  uVar59 = adVar9[0]._0_4_;
  uVar60 = adVar9[0]._4_4_;
  dVar16 = pdVar36[10];
  local_6d8.Scale3D.ZW.m128d_f64[1] = pdVar36[0xb];
  local_6d8.Scale3D.XY.m128d_f64 = adVar9;
  local_6d8.Scale3D.ZW.m128d_f64[0] = dVar16;
  if (cVar50 != '\0') {
    pfVar37 = (float *)(**(code **)(*(longlong *)this->_padding_ + 0x78))();
    local_678 = (double)*pfVar37 * __real_c140000000000000;
    local_668 = (double)pfVar37[2] * __real_c140000000000000;
    dStack_670 = (double)pfVar37[1] * __real_c140000000000000;
    local_6d8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar17 + 0.0,0);
    local_6d8.Translation.ZW.m128d_f64[0] = dVar5 + local_668;
    local_6d8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)(dVar17 + 0.0) >> 0x20);
    local_6d8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar4 + dStack_670,0);
    local_6d8.Translation.XY.m128d_f64[0] = dVar3 + local_678;
    local_6d8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(dVar4 + dStack_670) >> 0x20);
  }
  UE::Math::TTransform<double>::ToMatrixWithScale(&local_6d8,&local_648);
  local_498.M[1][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_;
  local_498.M[1][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_;
  local_498.M[1][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_;
  local_498.M[1][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_;
  local_498.M[1][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_;
  local_498.M[1][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_;
  local_498.M[1][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_;
  local_498.M[1][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_;
  local_498.M[2][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_;
  local_498.M[2][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_;
  local_498.M[2][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_;
  local_498.M[2][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_;
  local_498.M[2][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_;
  local_498.M[2][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_;
  local_498.M[2][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_;
  local_498.M[2][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_;
  local_498.M[3][0]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_;
  local_498.M[3][0]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_;
  local_498.M[3][1]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_;
  local_498.M[3][1]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_;
  local_498.M[3][2]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_;
  local_498.M[3][2]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_;
  local_498.M[3][3]._0_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_;
  local_498.M[3][3]._4_4_ = UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_;
  local_498.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_498.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_498.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_498.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  if ((bVar51 == 0) && ((this->EmitterInfo->LocalVectorField).bIgnoreComponentTransform == 0)) {
    local_498.M[1][0]._0_4_ = local_648.M[1][0]._0_4_;
    local_498.M[1][0]._4_4_ = local_648.M[1][0]._4_4_;
    local_498.M[1][1]._0_4_ = local_648.M[1][1]._0_4_;
    local_498.M[1][1]._4_4_ = local_648.M[1][1]._4_4_;
    local_498.M[1][2]._0_4_ = local_648.M[1][2]._0_4_;
    local_498.M[1][2]._4_4_ = local_648.M[1][2]._4_4_;
    local_498.M[1][3]._0_4_ = local_648.M[1][3]._0_4_;
    local_498.M[1][3]._4_4_ = local_648.M[1][3]._4_4_;
    local_498.M[2][0]._0_4_ = local_648.M[2][0]._0_4_;
    local_498.M[2][0]._4_4_ = local_648.M[2][0]._4_4_;
    local_498.M[2][1]._0_4_ = local_648.M[2][1]._0_4_;
    local_498.M[2][1]._4_4_ = local_648.M[2][1]._4_4_;
    local_498.M[2][2]._0_4_ = local_648.M[2][2]._0_4_;
    local_498.M[2][2]._4_4_ = local_648.M[2][2]._4_4_;
    local_498.M[2][3]._0_4_ = local_648.M[2][3]._0_4_;
    local_498.M[2][3]._4_4_ = local_648.M[2][3]._4_4_;
    local_498.M[3][0]._0_4_ = local_648.M[3][0]._0_4_;
    local_498.M[3][0]._4_4_ = local_648.M[3][0]._4_4_;
    local_498.M[3][1]._0_4_ = local_648.M[3][1]._0_4_;
    local_498.M[3][1]._4_4_ = local_648.M[3][1]._4_4_;
    local_498.M[3][2]._0_4_ = local_648.M[3][2]._0_4_;
    local_498.M[3][2]._4_4_ = local_648.M[3][2]._4_4_;
    local_498.M[3][3]._0_4_ = local_648.M[3][3]._0_4_;
    local_498.M[3][3]._4_4_ = local_648.M[3][3]._4_4_;
    local_498.M[0][0] = local_648.M[0][0];
    local_498.M[0][1] = local_648.M[0][1];
    local_498.M[0][2] = local_648.M[0][2];
    local_498.M[0][3] = local_648.M[0][3];
  }
  pFVar32 = FDynamicEmitterDataBase::operator_new(0x200);
  if (pFVar32 == (FDynamicEmitterDataBase *)0x0) {
    pFVar32 = (FDynamicEmitterDataBase *)0x0;
  }
  else {
    pFVar32->bSelected = 0;
    pFVar32->EmitterIndex = -1;
    pFVar32[4].field_0x10 = 0;
    pFVar32[5].StatID.StatIdPtr = (TStatIdData *)0x0;
    pFVar32[6]._padding_ = 0;
    pFVar32[1]._padding_ = 0;
    *(undefined1 *)&pFVar32[1].StatID.StatIdPtr = 1;
    *(undefined8 *)&pFVar32[1].field_0x10 = 0;
    pFVar32[2]._padding_ = 0;
    pFVar32[2].StatID.StatIdPtr = (TStatIdData *)0x0;
    (pFVar32->StatID).StatIdPtr = &TStatId::TStatId_NAME_None;
    pFVar32->_padding_ = (longlong)&___7FGPUSpriteDynamicEmitterData__6B_;
    pFVar32[5]._padding_ = 0;
    *(undefined8 *)&pFVar32[5].field_0x10 = 0;
    *(float *)&pFVar32[0xc].field_0x10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    pFVar32[0xc].EmitterIndex = (int)UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    *(float *)&pFVar32[0xd]._padding_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined4 *)((longlong)&pFVar32[0xd]._padding_ + 4) = 0;
    *(float *)&pFVar32[0xd].StatID.StatIdPtr =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
    *(float *)((longlong)&pFVar32[0xd].StatID.StatIdPtr + 4) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    *(float *)&pFVar32[0xd].field_0x10 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    pFVar32[0xd].EmitterIndex = 0;
    *(undefined4 *)&pFVar32[0xe]._padding_ = 0x3f800000;
    *(undefined8 *)((longlong)&pFVar32[0xe]._padding_ + 4) = 0x3f800000;
    *(undefined8 *)((longlong)&pFVar32[0xe].StatID.StatIdPtr + 4) = 0;
    *(undefined8 *)&pFVar32[0xe].EmitterIndex = 0;
    *(ulonglong *)((longlong)&pFVar32[0xf]._padding_ + 4) =
         CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                  UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
    *(float *)((longlong)&pFVar32[0xf].StatID.StatIdPtr + 4) =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(uint *)&pFVar32[0x14].StatID.StatIdPtr = *(uint *)&pFVar32[0x14].StatID.StatIdPtr & 0xfffffff0
    ;
    pFVar32[0x11].StatID.StatIdPtr = (TStatIdData *)0x0;
    *(undefined4 *)&pFVar32[0x11].field_0x10 = 0;
    *(undefined8 *)&pFVar32[0x11].EmitterIndex = 0x3f800000;
    *(undefined8 *)((longlong)&pFVar32[0x12]._padding_ + 4) = 0;
    *(undefined8 *)((longlong)&pFVar32[0x12].StatID.StatIdPtr + 4) = 0x3f800000;
    *(undefined8 *)&pFVar32[0x12].EmitterIndex = 0;
    *(undefined8 *)((longlong)&pFVar32[0x13]._padding_ + 4) = 0x3f800000;
    *(undefined8 *)((longlong)&pFVar32[0x13].StatID.StatIdPtr + 4) = 0;
    *(undefined8 *)&pFVar32[0x13].EmitterIndex = 0x3f800000;
    *(undefined1 *)((longlong)&pFVar32[0x14].StatID.StatIdPtr + 4) = 0;
    *(undefined8 *)&pFVar32[0x14].field_0x10 = 0;
    pFVar32[0x15]._padding_ = 0;
  }
  *(FFXSystem **)&pFVar32[1].field_0x10 = this->FXSystem;
  pFVar32[2]._padding_ = (longlong)this->EmitterInfo->Resources;
  pUVar38 = FParticleEmitterInstance::GetCurrentMaterial((FParticleEmitterInstance *)this);
  lVar39 = (**(code **)(pUVar38->_padding_ + 0x310))(pUVar38);
  pFVar32[1]._padding_ = lVar39;
  pUVar38 = FParticleEmitterInstance::GetCurrentMaterial((FParticleEmitterInstance *)this);
  bVar28 = IsTranslucentBlendMode(pUVar38);
  *(bool *)&pFVar32[1].StatID.StatIdPtr = bVar28;
  pFVar32[2].StatID.StatIdPtr = (TStatIdData *)this->Simulation;
  if ((*(byte *)(lVar35 + 0xf4) & 2) == 0) {
    pdVar36 = (double *)(**(code **)(*(longlong *)this->_padding_ + 0x28))();
    local_708 = 1;
    local_738._s_0.X = *pdVar36 - pdVar36[3];
    local_720 = pdVar36[3] + *pdVar36;
    local_738._s_0.Y = pdVar36[1] - pdVar36[4];
    pTVar42 = &local_738;
    local_718 = pdVar36[4] + pdVar36[1];
    local_738._s_0.Z = pdVar36[2] - pdVar36[5];
    local_710 = pdVar36[5] + pdVar36[2];
  }
  else {
    pTVar40 = (TTransform<double> *)(**(code **)(*(longlong *)this->_padding_ + 0x10))();
    pTVar41 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar40,&local_1d8);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)(lVar35 + 0xb0),(TBox<double> *)&local_318[0]._s_0,pTVar41);
    pTVar42 = local_318;
  }
  dVar3 = (pTVar42->_s_0).Y;
  pTVar31 = (TStatIdData *)(pTVar42->_s_0).Z;
  dVar4 = pTVar42->XYZ[3];
  *(double *)&pFVar32[2].field_0x10 = (pTVar42->_s_0).X;
  pFVar32[3]._padding_ = (longlong)dVar3;
  dVar5 = pTVar42->XYZ[4];
  pTVar18 = (TStatIdData *)pTVar42->XYZ[5];
  pFVar32[3].StatID.StatIdPtr = pTVar31;
  *(double *)&pFVar32[3].field_0x10 = dVar4;
  dVar3 = pTVar42->XYZ[6];
  pFVar32[4]._padding_ = (longlong)dVar5;
  pFVar32[4].StatID.StatIdPtr = pTVar18;
  *(double *)&pFVar32[4].field_0x10 = dVar3;
  bVar10 = (((this->EmitterInfo->RequiredModule).field0_0x0.DebugPtr)->SortMode).Value;
  pFVar32->bSelected = 0;
  *(uint *)&pFVar32[0x14]._padding_ = (uint)bVar10;
  *(uint *)&pFVar32->field_0x10 = *(uint *)&pFVar32->field_0x10 | (uint)param_1;
  *(byte *)((longlong)&pFVar32[0x14]._padding_ + 4) =
       ((this->EmitterInfo->RequiredModule).field0_0x0.DebugPtr)->bUseLocalSpace;
  if ((bVar51 == 0) && ((this->EmitterInfo->LocalVectorField).bIgnoreComponentTransform == 0)) {
    pTVar40 = (TTransform<double> *)(**(code **)(*(longlong *)this->_padding_ + 0x10))();
    pTVar41 = UE::Math::TTransform<double>::ToMatrixWithScale(pTVar40,&local_518);
  }
  else {
    pTVar41 = &local_5c8;
    local_5c8.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_5c8.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_5c8.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_5c8.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_5c8.M[1][0] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][0]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[1][0]._0_4_);
    local_5c8.M[1][1] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][1]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[1][1]._0_4_);
    local_5c8.M[1][2] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][2]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[1][2]._0_4_);
    local_5c8.M[1][3] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[1][3]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[1][3]._0_4_);
    local_5c8.M[2][0] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][0]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[2][0]._0_4_);
    local_5c8.M[2][1] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][1]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[2][1]._0_4_);
    local_5c8.M[2][2] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][2]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[2][2]._0_4_);
    local_5c8.M[2][3] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[2][3]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[2][3]._0_4_);
    local_5c8.M[3][0] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][0]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[3][0]._0_4_);
    local_5c8.M[3][1] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][1]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[3][1]._0_4_);
    local_5c8.M[3][2] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][2]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[3][2]._0_4_);
    local_5c8.M[3][3] =
         (double)CONCAT44(UE::Math::TMatrix<double>::Identity.M[3][3]._4_4_,
                          UE::Math::TMatrix<double>::Identity.M[3][3]._0_4_);
  }
  local_418.M[0][0] = pTVar41->M[0][0];
  local_418.M[0][1] = pTVar41->M[0][1];
  local_418.M[0][2] = pTVar41->M[0][2];
  local_418.M[0][3] = pTVar41->M[0][3];
  local_418.M[1][0] = pTVar41->M[1][0];
  local_418.M[1][1] = pTVar41->M[1][1];
  local_418.M[1][2] = pTVar41->M[1][2];
  local_418.M[1][3] = pTVar41->M[1][3];
  local_418.M[2][0] = pTVar41->M[2][0];
  local_418.M[2][1] = pTVar41->M[2][1];
  local_418.M[2][2] = pTVar41->M[2][2];
  local_418.M[2][3] = pTVar41->M[2][3];
  local_418.M[3][0] = pTVar41->M[3][0];
  local_418.M[3][1] = pTVar41->M[3][1];
  local_418.M[3][2] = pTVar41->M[3][2];
  local_418.M[3][3] = pTVar41->M[3][3];
  UE::Math::TRotationTranslationMatrix<double>::TRotationTranslationMatrix<double>
            ((TRotationTranslationMatrix<double> *)&local_2d8,&this->LocalVectorFieldRotation,
             &UE::Math::TVector<double>::ZeroVector);
  pTVar41 = UE::Math::TTransform<double>::ToMatrixWithScale
                      (&(this->EmitterInfo->LocalVectorField).Transform,&local_158);
  VectorMatrixMultiply(&local_258,&local_2d8,pTVar41);
  VectorMatrixMultiply(&local_398,&local_258,&local_418);
  *(double *)&pFVar32[6].field_0x10 = local_398.M[0][0];
  pFVar32[7]._padding_ = (longlong)local_398.M[0][1];
  pFVar32[7].StatID.StatIdPtr = (TStatIdData *)local_398.M[0][2];
  *(double *)&pFVar32[7].field_0x10 = local_398.M[0][3];
  pFVar32[8]._padding_ = (longlong)local_398.M[1][0];
  pFVar32[8].StatID.StatIdPtr = (TStatIdData *)local_398.M[1][1];
  *(double *)&pFVar32[8].field_0x10 = local_398.M[1][2];
  pFVar32[9]._padding_ = (longlong)local_398.M[1][3];
  pFVar32[9].StatID.StatIdPtr = (TStatIdData *)local_398.M[2][0];
  *(double *)&pFVar32[9].field_0x10 = local_398.M[2][1];
  pFVar32[10]._padding_ = (longlong)local_398.M[2][2];
  pFVar32[10].StatID.StatIdPtr = (TStatIdData *)local_398.M[2][3];
  *(double *)&pFVar32[10].field_0x10 = local_398.M[3][0];
  pFVar32[0xb]._padding_ = (longlong)local_398.M[3][1];
  pFVar32[0xb].StatID.StatIdPtr = (TStatIdData *)local_398.M[3][2];
  *(double *)&pFVar32[0xb].field_0x10 = local_398.M[3][3];
  *(float *)&pFVar32[0xc]._padding_ = (this->EmitterInfo->LocalVectorField).Intensity;
  *(float *)((longlong)&pFVar32[0xc]._padding_ + 4) =
       (this->EmitterInfo->LocalVectorField).Tightness;
  uVar47 = *(uint *)&pFVar32[0x14].StatID.StatIdPtr;
  uVar47 = ((this->EmitterInfo->LocalVectorField).bTileX ^ uVar47) & 1 ^ uVar47;
  *(uint *)&pFVar32[0x14].StatID.StatIdPtr = uVar47;
  uVar47 = (*(uint *)&(this->EmitterInfo->LocalVectorField).field_0xc0 >> 1 ^ uVar47) & 2 ^ uVar47;
  *(uint *)&pFVar32[0x14].StatID.StatIdPtr = uVar47;
  uVar47 = (*(uint *)&(this->EmitterInfo->LocalVectorField).field_0xc0 >> 1 ^ uVar47) & 4 ^ uVar47;
  *(uint *)&pFVar32[0x14].StatID.StatIdPtr = uVar47;
  pTVar53 = &UE::Math::TVector<float>::ZeroVector;
  *(uint *)&pFVar32[0x14].StatID.StatIdPtr =
       (*(uint *)&(this->EmitterInfo->LocalVectorField).field_0xc0 >> 1 ^ uVar47) & 8 ^ uVar47;
  if (cVar50 == '\0') {
    pTVar43 = &UE::Math::TVector<float>::ZeroVector;
  }
  else {
    pTVar43 = (TVector<float> *)(**(code **)(*(longlong *)this->_padding_ + 0x78))();
  }
  pFVar32[0x10]._padding_ = *(longlong *)&pTVar43->field0_0x0;
  *(float *)&pFVar32[0x10].StatID.StatIdPtr = (pTVar43->field0_0x0)._s_0.Z;
  uVar11 = (this->EmitterInfo->ScreenAlignment).Value;
  if (((uVar11 != '\x01') && (uVar11 != '\0')) && (uVar11 != '\x06')) {
    uVar59 = adVar9[1]._0_4_;
    uVar60 = adVar9[1]._4_4_;
  }
  *(float *)&pFVar32[0x10].field_0x10 = (float)adVar9[0];
  pFVar32[0x10].EmitterIndex = (int)(float)(double)CONCAT44(uVar60,uVar59);
  bVar10 = (this->EmitterInfo->LockAxisFlag).Value;
  pFVar32[0x11].StatID.StatIdPtr = (TStatIdData *)0x0;
  *(undefined8 *)&pFVar32[0x11].field_0x10 = 0;
  pFVar32[0x12]._padding_ = 0;
  pFVar32[0x12].StatID.StatIdPtr = (TStatIdData *)0x0;
  local_660 = adVar9;
  local_650 = dVar16;
  if (bVar10 != 0) {
    pTVar41 = &local_498;
    if (bVar51 == 0) {
      pTVar41 = &UE::Math::TMatrix<double>::Identity;
    }
    ComputeLockedAxes((uint)bVar10,pTVar41,(TVector<double> *)&local_750._s_0,
                      (TVector<double> *)&local_768._s_0);
    *(float *)&pFVar32[0x11].StatID.StatIdPtr = (float)local_768._s_0.X;
    *(float *)((longlong)&pFVar32[0x11].StatID.StatIdPtr + 4) = (float)local_768._s_0.Y;
    *(float *)&pFVar32[0x11].field_0x10 = (float)local_768._s_0.Z;
    pFVar32[0x11].EmitterIndex = 0x3f800000;
    *(float *)&pFVar32[0x12]._padding_ = (float)local_750._s_0.X;
    *(float *)((longlong)&pFVar32[0x12]._padding_ + 4) = (float)local_750._s_0.Y;
    *(float *)&pFVar32[0x12].StatID.StatIdPtr = (float)local_750._s_0.Z;
    *(undefined4 *)((longlong)&pFVar32[0x12].StatID.StatIdPtr + 4) = 0x3f800000;
  }
  dVar17 = __real_3ff0000000000000;
  bVar28 = FRawDistributionVector::IsCreated(&this->EmitterInfo->DynamicColorScale);
  fVar58 = 0.0;
  dVar3 = dVar17;
  dVar4 = dVar17;
  dVar5 = dVar17;
  if (bVar28) {
    pFVar13 = this->EmitterInfo;
    pUVar44 = (UObject *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    pTVar45 = FRawDistributionVector::GetValue
                        (&pFVar13->DynamicColorScale,&local_548,0.0,pUVar44,0,(FRandomStream *)0x0);
    dVar3 = (pTVar45->field0_0x0)._s_0.X;
    dVar4 = (pTVar45->field0_0x0)._s_0.Y;
    dVar5 = (pTVar45->field0_0x0)._s_0.Z;
  }
  bVar28 = FRawDistributionFloat::IsCreated(&this->EmitterInfo->DynamicAlphaScale);
  dVar16 = dVar17;
  if (bVar28) {
    pFVar13 = this->EmitterInfo;
    pUVar44 = (UObject *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    fVar54 = FRawDistributionFloat::GetValue
                       (&pFVar13->DynamicAlphaScale,0.0,pUVar44,(FRandomStream *)0x0);
    dVar16 = (double)fVar54;
  }
  bVar28 = FRawDistributionVector::IsCreated(&this->EmitterInfo->DynamicColor);
  dVar6 = dVar17;
  dVar7 = dVar17;
  dVar8 = dVar17;
  if (bVar28) {
    pFVar13 = this->EmitterInfo;
    pUVar44 = (UObject *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    pTVar45 = FRawDistributionVector::GetValue
                        (&pFVar13->DynamicColor,&local_530,0.0,pUVar44,0,(FRandomStream *)0x0);
    dVar6 = (pTVar45->field0_0x0)._s_0.X;
    dVar7 = (pTVar45->field0_0x0)._s_0.Y;
    dVar8 = (pTVar45->field0_0x0)._s_0.Z;
  }
  bVar28 = FRawDistributionFloat::IsCreated(&this->EmitterInfo->DynamicAlpha);
  dVar15 = dVar17;
  if (bVar28) {
    pFVar13 = this->EmitterInfo;
    pUVar44 = (UObject *)(**(code **)(*(longlong *)this->_padding_ + 8))();
    fVar54 = FRawDistributionFloat::GetValue
                       (&pFVar13->DynamicAlpha,0.0,pUVar44,(FRandomStream *)0x0);
    dVar15 = (double)fVar54;
  }
  *(float *)&pFVar32[0x12].field_0x10 = (float)(dVar3 * dVar6);
  pFVar32[0x12].EmitterIndex = (int)(float)(dVar4 * dVar7);
  *(float *)&pFVar32[0x13]._padding_ = (float)(dVar5 * dVar8);
  *(float *)((longlong)&pFVar32[0x13]._padding_ + 4) = (float)(dVar15 * dVar16);
  *(byte *)((longlong)&pFVar32[0x14].StatID.StatIdPtr + 4) =
       ((pUVar34->RequiredModule).field0_0x0.DebugPtr)->bOverrideSystemMacroUV;
  *(float *)&pFVar32[0x14].field_0x10 =
       ((pUVar34->RequiredModule).field0_0x0.DebugPtr)->MacroUVRadius;
  pUVar12 = (pUVar34->RequiredModule).field0_0x0.DebugPtr;
  dVar3 = (pUVar12->MacroUVPosition).field0_0x0._s_0.Y;
  dVar4 = (pUVar12->MacroUVPosition).field0_0x0._s_0.Z;
  pFVar32[0x14].EmitterIndex = (int)(float)(pUVar12->MacroUVPosition).field0_0x0._s_0.X;
  *(float *)&pFVar32[0x15]._padding_ = (float)dVar3;
  *(float *)((longlong)&pFVar32[0x15]._padding_ + 4) = (float)dVar4;
  *(float *)&pFVar32[0x11]._padding_ = this->EmitterInstRandom;
  if (((FXConsoleVariables::bFreezeGPUSimulation == 0) &&
      (FXConsoleVariables::bFreezeParticleSimulation == 0)) &&
     (bVar28 = RHISupportsGPUParticles(), pTVar25 = CVarGPUParticleFixDeltaSeconds.Ref, bVar28)) {
    bVar28 = IsInParallelGameThread();
    if ((bVar28) || (bVar28 = IsInGameThread(), bVar28)) {
      lVar35 = 0;
    }
    else {
      lVar35 = 4;
    }
    pTVar26 = CVarGPUParticleFixTolerance.Ref;
    fVar54 = *(float *)((longlong)pTVar25->ShadowedValue + lVar35);
    bVar28 = IsInParallelGameThread();
    if (bVar28) {
LAB_1481123bd:
      lVar35 = 0;
    }
    else {
      bVar28 = IsInGameThread();
      lVar35 = 4;
      if (bVar28) goto LAB_1481123bd;
    }
    pTVar27 = CVarGPUParticleMaxNumIterations.Ref;
    fVar1 = *(float *)((longlong)pTVar26->ShadowedValue + lVar35);
    bVar28 = IsInParallelGameThread();
    if (bVar28) {
LAB_1481123e4:
      lVar35 = 0;
    }
    else {
      bVar28 = IsInGameThread();
      lVar35 = 4;
      if (bVar28) goto LAB_1481123e4;
    }
    iVar48 = *(int *)((longlong)pTVar27->ShadowedValue + lVar35);
    *(float *)&pFVar32[0xe].StatID.StatIdPtr = fVar54;
    *(undefined4 *)((longlong)&pFVar32[0xe].StatID.StatIdPtr + 4) = 0;
    *(float *)&pFVar32[0xe].field_0x10 = this->PendingDeltaSeconds + this->OffsetSeconds;
    pFVar32[0xe].EmitterIndex = 1;
    this->OffsetSeconds = 0.0;
    fVar23 = __real_3f800000;
    if (0.0 < fVar54) {
      if (((ulonglong)pFVar32[0x14].StatID.StatIdPtr & 8) == 0) {
        uVar59 = *(undefined4 *)&pFVar32[0xe].StatID.StatIdPtr;
        *(undefined4 *)&pFVar32[0xe].StatID.StatIdPtr = *(undefined4 *)&pFVar32[0xe].field_0x10;
        *(undefined4 *)&pFVar32[0xe].field_0x10 = uVar59;
        iVar48 = *(int *)((longlong)&pFVar32[0xe].StatID.StatIdPtr + 4);
        *(int *)((longlong)&pFVar32[0xe].StatID.StatIdPtr + 4) = pFVar32[0xe].EmitterIndex;
        pFVar32[0xe].EmitterIndex = iVar48;
      }
      else {
        fVar2 = *(float *)&pFVar32[0xe].field_0x10;
        fVar56 = __real_3f800000 / fVar54;
        iVar29 = (int)ROUND((fVar56 + fVar56) * fVar2 - __real_3f000000) >> 1;
        *(int *)((longlong)&pFVar32[0xe].StatID.StatIdPtr + 4) = iVar29;
        fVar55 = (float)iVar29 * fVar54;
        fVar57 = fVar2 - (float)iVar29 * fVar54;
        *(float *)&pFVar32[0xe].field_0x10 = fVar57;
        if ((iVar29 < 1) || (fVar1 <= fVar57 * fVar56)) {
          if (fVar1 <= fVar23 - fVar57 * fVar56) {
            fVar58 = fVar57;
            if (0 < iVar29) {
              fVar58 = fVar57 - fVar1 * fVar54;
              fVar55 = fVar55 + fVar1 * fVar54;
              *(float *)&pFVar32[0xe].field_0x10 = fVar58;
              goto LAB_14811251b;
            }
          }
          else {
            iVar29 = iVar29 + 1;
            *(int *)((longlong)&pFVar32[0xe].StatID.StatIdPtr + 4) = iVar29;
            *(undefined8 *)&pFVar32[0xe].field_0x10 = 0;
            fVar55 = fVar2;
          }
          if (0 < iVar29) goto LAB_14811251b;
        }
        else {
          *(undefined8 *)&pFVar32[0xe].field_0x10 = 0;
          fVar55 = fVar2;
LAB_14811251b:
          if (iVar29 < iVar48) {
            iVar48 = iVar29;
          }
          *(int *)((longlong)&pFVar32[0xe].StatID.StatIdPtr + 4) = iVar48;
          *(float *)&pFVar32[0xe].StatID.StatIdPtr = fVar55 / (float)iVar48;
        }
        this->OffsetSeconds = fVar58;
      }
      iVar48 = *(int *)((longlong)&pFVar32[0xe].StatID.StatIdPtr + 4) + pFVar32[0xe].EmitterIndex;
      if (iVar48 == 1) {
        if (FThreadStats::bPrimaryEnable != false) {
          FVar46 = (FThreadSafeStaticStat<FStat_STAT_GPUMultiIterationsEmitters>)
                   StatPtr_STAT_GPUSingleIterationEmitters;
          if (StatPtr_STAT_GPUSingleIterationEmitters ==
              (FThreadSafeStaticStat<FStat_STAT_GPUSingleIterationEmitters>)0x0) {
            pFVar30 = ::FName::FName(&local_6f0,"STAT_GPUSingleIterationEmitters");
            pwVar52 = L"Single Iteration Emitters";
            this_00 = &StatPtr_STAT_GPUSingleIterationEmitters;
LAB_14811266f:
            FVar46 = (FThreadSafeStaticStat<FStat_STAT_GPUMultiIterationsEmitters>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)this_00,*pFVar30,pwVar52,
                                "STATGROUP_GPUParticles","STATCAT_Advanced",L"GPU Particles",true,
                                true,ST_int64,false,false,MCR_Invalid);
          }
LAB_14811267e:
          FThreadStats::AddMessage<__int64>(*(FName *)FVar46,Add,1,false);
        }
      }
      else if ((1 < iVar48) && (FThreadStats::bPrimaryEnable != false)) {
        FVar46 = StatPtr_STAT_GPUMultiIterationsEmitters;
        if (StatPtr_STAT_GPUMultiIterationsEmitters ==
            (FThreadSafeStaticStat<FStat_STAT_GPUMultiIterationsEmitters>)0x0) {
          pFVar30 = ::FName::FName(local_6e8,"STAT_GPUMultiIterationsEmitters");
          pwVar52 = L"Multi Iterations Emitters";
          this_00 = (FThreadSafeStaticStat<FStat_STAT_GPUSingleIterationEmitters> *)
                    &StatPtr_STAT_GPUMultiIterationsEmitters;
          goto LAB_14811266f;
        }
        goto LAB_14811267e;
      }
    }
    pFVar13 = this->EmitterInfo;
    dVar4 = (pFVar13->PointAttractorPosition).field0_0x0._s_0.X;
    dVar5 = (pFVar13->PointAttractorPosition).field0_0x0._s_0.Y;
    dVar3 = (pFVar13->PointAttractorPosition).field0_0x0._s_0.Z;
    fVar58 = pFVar13->PointAttractorRadiusSq;
    *(float *)&pFVar32[0xc].field_0x10 =
         (float)((double)CONCAT44(local_498.M[1][0]._4_4_,local_498.M[1][0]._0_4_) * dVar5 +
                 local_498.M[0][0] * dVar4 +
                 (double)CONCAT44(local_498.M[2][0]._4_4_,local_498.M[2][0]._0_4_) * dVar3 +
                (double)CONCAT44(local_498.M[3][0]._4_4_,local_498.M[3][0]._0_4_) * dVar17);
    pFVar32[0xc].EmitterIndex =
         (int)(float)((double)CONCAT44(local_498.M[1][1]._4_4_,local_498.M[1][1]._0_4_) * dVar5 +
                      local_498.M[0][1] * dVar4 +
                      (double)CONCAT44(local_498.M[2][1]._4_4_,local_498.M[2][1]._0_4_) * dVar3 +
                     (double)CONCAT44(local_498.M[3][1]._4_4_,local_498.M[3][1]._0_4_) * dVar17);
    *(float *)&pFVar32[0xd]._padding_ =
         (float)((double)CONCAT44(local_498.M[1][2]._4_4_,local_498.M[1][2]._0_4_) * dVar5 +
                 local_498.M[0][2] * dVar4 +
                 (double)CONCAT44(local_498.M[2][2]._4_4_,local_498.M[2][2]._0_4_) * dVar3 +
                (double)CONCAT44(local_498.M[3][2]._4_4_,local_498.M[3][2]._0_4_) * dVar17);
    *(float *)((longlong)&pFVar32[0xd]._padding_ + 4) = fVar58;
    dVar3 = (double)this->_padding_;
    dVar4 = (double)this->_padding_;
    fVar58 = this->PointAttractorStrength;
    *(float *)&pFVar32[0xd].StatID.StatIdPtr = (float)(double)this->_padding_;
    *(float *)((longlong)&pFVar32[0xd].StatID.StatIdPtr + 4) = (float)dVar3;
    *(float *)&pFVar32[0xd].field_0x10 = (float)dVar4;
    pFVar32[0xd].EmitterIndex = (int)fVar58;
    pFVar32[0xe]._padding_ = *(longlong *)&pFVar32[0x10].field_0x10;
    *(float *)&pFVar32[0xf]._padding_ = this->PendingDeltaSeconds;
    if (cVar50 != '\0') {
      pTVar53 = (TVector<float> *)(**(code **)(*(longlong *)this->_padding_ + 0x78))();
    }
    *(undefined8 *)((longlong)&pFVar32[0xf]._padding_ + 4) = *(undefined8 *)&pTVar53->field0_0x0;
    *(float *)((longlong)&pFVar32[0xf].StatID.StatIdPtr + 4) = (pTVar53->field0_0x0)._s_0.Z;
    lVar35 = *(longlong *)&(this->TilesToClear).ArrayNum;
    pFVar19 = *(FScriptContainerElement **)&pFVar32[5].field_0x10;
    uVar59 = *(undefined4 *)&pFVar32[6]._padding_;
    uVar60 = *(undefined4 *)((longlong)&pFVar32[6]._padding_ + 4);
    *(FScriptContainerElement **)&pFVar32[5].field_0x10 =
         (this->TilesToClear).AllocatorInstance.Data;
    pFVar32[6]._padding_ = lVar35;
    (this->TilesToClear).AllocatorInstance.Data = pFVar19;
    (this->TilesToClear).ArrayNum = uVar59;
    (this->TilesToClear).ArrayMax = uVar60;
    pTVar31 = *(TStatIdData **)&(this->NewParticles).ArrayNum;
    pFVar19 = (FScriptContainerElement *)pFVar32[5]._padding_;
    pTVar18 = pFVar32[5].StatID.StatIdPtr;
    pFVar32[5]._padding_ = (longlong)(this->NewParticles).AllocatorInstance.Data;
    pFVar32[5].StatID.StatIdPtr = pTVar31;
    (this->NewParticles).AllocatorInstance.Data = pFVar19;
    *(TStatIdData **)&(this->NewParticles).ArrayNum = pTVar18;
  }
  (this->NewParticles).ArrayNum = 0;
  if ((this->NewParticles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,0,&(this->NewParticles).AllocatorInstance,0,&(this->NewParticles).ArrayMax);
  }
  this->PendingDeltaSeconds = 0.0;
  uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  this->_padding_ = uVar24;
  this->_padding_ = (longlong)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (this->Simulation->bDirty_GameThread != false) {
    FParticleSimulationGPU::InitResources
              (this->Simulation,&this->AllocatedTiles,this->EmitterInfo->Resources);
  }
  if ((this->Simulation->bReleased_GameThread != false) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Simulation->bReleased_GameThread",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0xdc0,L""), bVar28)) {
    pcVar14 = (code *)swi(3);
    pFVar32 = (FDynamicEmitterDataBase *)(*pcVar14)();
    return pFVar32;
  }
  if ((this->Simulation->bDestroyed_GameThread != false) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Simulation->bDestroyed_GameThread",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0xdc1,L""), bVar28)) {
    pcVar14 = (code *)swi(3);
    pFVar32 = (FDynamicEmitterDataBase *)(*pcVar14)();
    return pFVar32;
  }
LAB_148112981:
  if (bVar22) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar49,CycleScopeEnd);
  }
  return pFVar32;
}

// GetMinTileCount @ 1481167d0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FGPUSpriteParticleEmitterInstance::GetMinTileCount(FGPUSpriteParticleEmitterInstance *this)

{
  char cVar1;
  int iVar2;
  UParticleLODLevel *pUVar3;
  int iVar4;
  float fVar5;
  
  if (this->AllowedLoopCount == 0) {
    cVar1 = (**(code **)(*(longlong *)this->_padding_ + 0x98))();
    if (cVar1 != '\0') {
      pUVar3 = FParticleEmitterInstance::GetCurrentLODLevelChecked((FParticleEmitterInstance *)this)
      ;
      if (pUVar3->bEnabled != 0) {
        iVar2 = this->EmitterInfo->MaxParticleCount + 0xf;
        iVar4 = (int)((iVar2 >> 0x1f & 0xfU) + iVar2) >> 4;
        fVar5 = (float)iVar4 * FXConsoleVariables::ParticleSlackGPU;
        iVar4 = iVar4 - ((int)ROUND(__real_bf000000 - (fVar5 + fVar5)) >> 1);
        iVar2 = FXConsoleVariables::MaxParticleTilePreAllocation;
        if (iVar4 < FXConsoleVariables::MaxParticleTilePreAllocation) {
          iVar2 = iVar4;
        }
        return iVar2;
      }
    }
  }
  return 0;
}

// GetNumParticlesToSpawn @ 148116a90

/* WARNING: Enum "Type": Some values do not have unique names */

FSpawnInfo * __thiscall
FGPUSpriteParticleEmitterInstance::GetNumParticlesToSpawn
          (FGPUSpriteParticleEmitterInstance *this,FSpawnInfo *__return_storage_ptr__,float param_1)

{
  longlong lVar1;
  UParticleModuleSpawn *this_00;
  UParticleModuleSpawnPerUnit *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FSpawnInfo *pFVar8;
  UObject *pUVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_res8 [2];
  FGPUSpriteParticleEmitterInstance *local_res10;
  float local_res18 [2];
  
  if ((((this->EmitterInfo->SpawnModule).field0_0x0.DebugPtr == (UParticleModuleSpawn *)0x0) ||
      ((this->EmitterInfo->RequiredModule).field0_0x0.DebugPtr == (UParticleModuleRequired *)0x0))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("SpawnModule && RequiredModule",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                            ,0x103d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar8 = (FSpawnInfo *)(*pcVar3)();
    return pFVar8;
  }
  lVar1 = *(longlong *)(this->_padding_ + 0x50);
  pUVar9 = (UObject *)(**(code **)(*(longlong *)this->_padding_ + 8))();
  this_00 = *(UParticleModuleSpawn **)(this->_padding_ + 0x50);
  fVar10 = FRawDistributionFloat::GetValue
                     ((FRawDistributionFloat *)(lVar1 + 0x68),*(float *)&this->_padding_,pUVar9,
                      (FRandomStream *)0x0);
  fVar11 = UParticleModuleSpawn::GetGlobalRateScale(this_00);
  lVar1 = *(longlong *)(this->_padding_ + 0x50);
  pUVar9 = (UObject *)(**(code **)(*(longlong *)this->_padding_ + 8))();
  fVar12 = FRawDistributionFloat::GetValue
                     ((FRawDistributionFloat *)(lVar1 + 0x38),*(float *)&this->_padding_,pUVar9,
                      (FRandomStream *)0x0);
  fVar12 = fVar12 * fVar10 * fVar11;
  pUVar2 = (this->EmitterInfo->SpawnPerUnitModule).field0_0x0.DebugPtr;
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  local_res18[0] = fVar12;
  if (pUVar2 != (UParticleModuleSpawnPerUnit *)0x0) {
    local_res8[0] = 0;
    local_res18[0] = 0.0;
    local_res10 = this;
    cVar6 = (**(code **)(pUVar2->_padding_ + 0x398))
                      (pUVar2,&local_res10,0,0,param_1,local_res8,local_res18);
    if (cVar6 != '\0') {
      local_res18[0] = fVar12 + local_res18[0];
    }
  }
  fVar10 = *(float *)&this->_padding_;
  fVar11 = local_res18[0] * param_1 + fVar10;
  iVar7 = (int)fVar11;
  iVar4 = FXConsoleVariables::MaxGPUParticlesSpawnedPerFrame;
  if (iVar7 < FXConsoleVariables::MaxGPUParticlesSpawnedPerFrame) {
    iVar4 = iVar7;
  }
  __return_storage_ptr__->Count = iVar4;
  if (local_res18[0] <= 0.0) {
    local_res18[0] = 0.0;
  }
  else {
    local_res18[0] = __real_3f800000 / local_res18[0];
  }
  __return_storage_ptr__->Increment = local_res18[0];
  __return_storage_ptr__->StartTime = (local_res18[0] * fVar10 + param_1) - local_res18[0];
  *(float *)&this->_padding_ = fVar11 - (float)iVar4;
  return __return_storage_ptr__;
}

// GetParticle @ 148117e60

/* WARNING: Enum "Type": Some values do not have unique names */

FBaseParticle * __thiscall
FGPUSpriteParticleEmitterInstance::GetParticle(FGPUSpriteParticleEmitterInstance *this,int param_1)

{
  return (FBaseParticle *)0x0;
}

// GetParticleDirect @ 148117eb0

/* WARNING: Enum "Type": Some values do not have unique names */

FBaseParticle * __thiscall
FGPUSpriteParticleEmitterInstance::GetParticleDirect
          (FGPUSpriteParticleEmitterInstance *this,int param_1)

{
  return (FBaseParticle *)0x0;
}

// GetTypeDataModuleInstanceData @ 14811c490

/* WARNING: Enum "Type": Some values do not have unique names */

uchar * __thiscall
FGPUSpriteParticleEmitterInstance::GetTypeDataModuleInstanceData
          (FGPUSpriteParticleEmitterInstance *this)

{
  return (uchar *)0x0;
}

// HasCompleted @ 14811d520

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGPUSpriteParticleEmitterInstance::HasCompleted(FGPUSpriteParticleEmitterInstance *this)

{
  if ((this->AllowedLoopCount != 0) && (this->AllowedLoopCount <= (int)this->_padding_)) {
    return *(int *)((longlong)&this->_padding_ + 4) == 0;
  }
  return false;
}

// Init @ 14811d610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGPUSpriteParticleEmitterInstance::Init(FGPUSpriteParticleEmitterInstance *this)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  uint *puVar4;
  FGPUSpriteEmitterInfo *pFVar5;
  UParticleModuleRequired *pUVar6;
  FParticleSimulationResources *pFVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<unsigned_int> FVar9;
  FFXSystem *pFVar10;
  FParticleSimulationGPU *pFVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_GPUSpriteEmitterInstance_Init> FVar21;
  longlong lVar22;
  TVector<float> *pTVar23;
  UParticleLODLevel *pUVar24;
  UClass *pUVar25;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar26;
  UMaterial *pUVar27;
  FWeakObjectPtr *pFVar28;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FString *pFVar29;
  uint uVar30;
  ForElementType<unsigned_int> _Dst;
  undefined ***pppuVar31;
  FNameEntryId FVar32;
  FName FVar33;
  wchar_t *pwVar34;
  ForElementType<unsigned_int> this_04;
  ulonglong uVar35;
  uint uVar36;
  wchar_t *pwVar37;
  float fVar38;
  undefined1 auStackY_198 [32];
  uint local_138;
  undefined4 local_134 [2];
  FColor_u_0 local_12c;
  FLLMScope local_128 [2];
  FMemScope local_120;
  FName local_118;
  FName local_110;
  LARGE_INTEGER local_100;
  FStatMessage local_f8;
  FName local_e8;
  undefined1 local_e0 [8];
  FString local_d8;
  FString local_c8;
  FString local_b8;
  code *local_a8 [2];
  undefined **local_98;
  FFXSystem *pFStack_90;
  FParticleSimulationGPU *local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FFXSystem *pFStack_60;
  FParticleSimulationGPU *local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  iVar19 = 0;
  FVar21 = StatPtr_STAT_GPUSpriteEmitterInstance_Init;
  if (StatPtr_STAT_GPUSpriteEmitterInstance_Init ==
      (FThreadSafeStaticStat<FStat_STAT_GPUSpriteEmitterInstance_Init>)0x0) {
    pFVar20 = ::FName::FName(&local_e8,"STAT_GPUSpriteEmitterInstance_Init");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_GPUSpriteEmitterInstance_Init>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSpriteEmitterInstance_Init,
                        *pFVar20,L"GPUSpriteEmitterInstance Init GT","STATGROUP_Particles",
                        "STATCAT_Advanced",L"Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar21;
  bVar13 = false;
  bVar15 = false;
  local_110.ComparisonIndex.Value = 0;
  local_110.Number = 0;
  FVar32 = FVar33.ComparisonIndex.Value;
  uVar30 = FVar33.Number;
  if ((FVar32.Value == 0) && (uVar30 == 0)) {
LAB_14811d761:
    bVar14 = false;
    FVar33 = local_110;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_12c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_12c._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar13 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_118.ComparisonIndex.Value = FVar32.Value;
        local_118.Number = uVar30;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_118,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                   ,0xdcb);
        bVar13 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14811d761;
    local_120._0_4_ = FVar32.Value;
    local_120.PrevTag = uVar30;
    FThreadStats::AddMessage(FVar33,CycleScopeStart);
    bVar14 = true;
  }
  FParticleEmitterInstance::Init((FParticleEmitterInstance *)this);
  pFVar5 = this->EmitterInfo;
  pUVar6 = (pFVar5->RequiredModule).field0_0x0.DebugPtr;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar18 = iVar19;
  if (pUVar6 != (UParticleModuleRequired *)0x0) {
    iVar18 = ((pFVar5->RequiredModule).field0_0x0.DebugPtr)->EmitterLoops;
  }
  this->AllowedLoopCount = iVar18;
  pwVar37 = L"";
  if (((this->AllocatedTiles).ArrayNum != (this->TileTimeOfDeath).ArrayNum) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocatedTiles.Num() == TileTimeOfDeath.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0xddc,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  this->FreeParticlesInTile = 0;
  lVar22 = (**(code **)(*(longlong *)this->_padding_ + 0x120))();
  uVar30 = *(int *)(lVar22 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)(lVar22 + 4) = uVar30;
  iVar18 = (int)((float)(uVar30 >> 9 | 0x3f800000) - __real_3f800000);
  (this->RandomStream).InitialSeed = iVar18;
  uVar30 = iVar18 * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar30;
  this->EmitterInstRandom = (float)(uVar30 >> 9 | 0x3f800000) - __real_3f800000;
  pFVar7 = this->FXSystem->ParticleSimulationResources;
  pUVar6 = (this->EmitterInfo->RequiredModule).field0_0x0.DebugPtr;
  if ((pUVar6->bUseLocalSpace == 0) && (pUVar6->bSupportLargeWorldCoordinates != '\0')) {
    pTVar23 = (TVector<float> *)(**(code **)(*(longlong *)this->_padding_ + 0x78))();
  }
  else {
    pTVar23 = &UE::Math::TVector<float>::ZeroVector;
  }
  *(undefined8 *)&(pFVar7->LWCTile).field0_0x0 = *(undefined8 *)&pTVar23->field0_0x0;
  (pFVar7->LWCTile).field0_0x0._s_0.Z = (pTVar23->field0_0x0)._s_0.Z;
  if ((((this->AllowedLoopCount == 0) &&
       (cVar17 = (**(code **)(*(longlong *)this->_padding_ + 0x98))(), cVar17 != '\0')) &&
      (pUVar24 = FParticleEmitterInstance::GetCurrentLODLevelChecked
                           ((FParticleEmitterInstance *)this), pUVar24->bEnabled != 0)) &&
     (iVar19 = this->EmitterInfo->MaxParticleCount + 0xf,
     iVar18 = (int)(iVar19 + (iVar19 >> 0x1f & 0xfU)) >> 4,
     fVar38 = (float)iVar18 * FXConsoleVariables::ParticleSlackGPU,
     iVar18 = iVar18 - ((int)ROUND(__real_bf000000 - (fVar38 + fVar38)) >> 1),
     iVar19 = FXConsoleVariables::MaxParticleTilePreAllocation,
     iVar18 < FXConsoleVariables::MaxParticleTilePreAllocation)) {
    iVar19 = iVar18;
  }
  if ((this->AllocatedTiles).ArrayNum < iVar19) {
    do {
      local_138 = FParticleTileAllocator::Allocate(&pFVar7->TileAllocator);
      if (local_138 == 0xffffffff) break;
      pTVar2 = &this->AllocatedTiles;
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 <
           pFVar8 + (longlong)(this->AllocatedTiles).ArrayMax * 4)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar18 = (this->AllocatedTiles).ArrayNum;
      piVar1 = &(this->AllocatedTiles).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->AllocatedTiles).ArrayNum = iVar18 + 1;
      pTVar3 = &this->TileTimeOfDeath;
      local_134[0] = 0;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 4) = local_138;
      pFVar8 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)local_134) &&
          ((FScriptContainerElement *)local_134 <
           pFVar8 + (longlong)(this->TileTimeOfDeath).ArrayMax * 4)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      iVar18 = (this->TileTimeOfDeath).ArrayNum;
      piVar1 = &(this->TileTimeOfDeath).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->TileTimeOfDeath).ArrayNum = iVar18 + 1;
      *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar18 * 4) = local_134[0];
    } while ((this->AllocatedTiles).ArrayNum < iVar19);
  }
  lVar22 = this->_padding_;
  if ((*(int *)(lVar22 + 0x48) < 1) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  lVar22 = **(longlong **)(lVar22 + 0x40);
  if (lVar22 == 0) {
LAB_14811db0f:
    if ((this->ActiveTiles).NumBits == (this->AllocatedTiles).ArrayNum) goto LAB_14811dbd2;
  }
  else {
    if (*(longlong *)(lVar22 + 0x48) == 0) {
      pFVar29 = GetTypeName<UParticleModuleTypeDataGpu>(&local_b8);
      if ((pFVar29->Data).ArrayNum != 0) {
        pwVar37 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar37);
    }
    pUVar25 = Z_Construct_UClass_UParticleModuleTypeDataGpu_NoRegister();
    bVar16 = FObjectPtr::IsA((FObjectPtr *)(lVar22 + 0x48),pUVar25);
    if ((!bVar16) || (*(longlong *)(lVar22 + 0x48) == 0)) {
      pFVar29 = GetTypeName<UParticleModuleTypeDataGpu>(&local_d8);
      if ((pFVar29->Data).ArrayNum == 0) {
        pwVar34 = L"";
      }
      else {
        pwVar34 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
      }
      pFVar29 = GetFullNameForCastLogError<UParticleModuleTypeDataBase>
                          (&local_c8,*(UParticleModuleTypeDataBase **)(lVar22 + 0x48));
      if ((pFVar29->Data).ArrayNum != 0) {
        pwVar37 = (wchar_t *)(pFVar29->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar37,pwVar34);
    }
    if ((*(byte *)(*(longlong *)(lVar22 + 0x48) + 0x5c4) & 1) == 0) goto LAB_14811db0f;
  }
  iVar19 = (this->AllocatedTiles).ArrayNum;
  this_04 = (ForElementType<unsigned_int>)&this->ActiveTiles;
  (this->ActiveTiles).NumBits = iVar19;
  uVar30 = iVar19 + 0x1f;
  uVar36 = uVar30 >> 5;
  if (uVar30 >> 5 != 0) {
    if ((this->ActiveTiles).MaxBits + 0x1fU >> 5 < uVar36) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation((ForElementType<unsigned_int> *)this_04,0,uVar36,4);
      (this->ActiveTiles).MaxBits = uVar36 << 5;
    }
    FVar9 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
    _Dst = this_04;
    if (FVar9 != (ForElementType<unsigned_int>)0x0) {
      _Dst = FVar9;
    }
    memset((void *)_Dst,0,(ulonglong)uVar36 << 2);
    iVar19 = (this->ActiveTiles).NumBits;
    uVar36 = iVar19 >> 0x1f & 0x1f;
    uVar30 = iVar19 + uVar36;
    iVar19 = (uVar30 & 0x1f) - uVar36;
    if (iVar19 != 0) {
      FVar9 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
      if (FVar9 != (ForElementType<unsigned_int>)0x0) {
        this_04 = FVar9;
      }
      puVar4 = (uint *)((longlong)this_04 + (longlong)((int)uVar30 >> 5) * 4);
      *puVar4 = *puVar4 & 0xffffffffU >> (0x20U - (char)iVar19 & 0x1f);
    }
  }
  ClearAllocatedTiles(this);
LAB_14811dbd2:
  this->Simulation->bDirty_GameThread = true;
  pFVar10 = this->FXSystem;
  pFVar11 = this->Simulation;
  if ((char)pFVar10->_padding_ == '\0') {
    FLLMScope::FLLMScope(local_128,Particles,false,None,Default,true);
    FMemScope::FMemScope(&local_120,Particles,true);
    local_80 = (undefined ***)0x0;
    local_98 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FFXSystem::AddGPUSimulation'::`5'::<lambda_1>,1,0>::_vftable_
    ;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FFXSystem::AddGPUSimulation'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_90 = pFVar10;
    local_88 = pFVar11;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FFXSystem::AddGPUSimulation_::__l5::TSTR_FAddGPUSimulationCommand4586>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
      pFVar26 = (FRenderCommandTag *)
                TRenderCommandTag<`FFXSystem::AddGPUSimulation'::__l5::TSTR_FAddGPUSimulationCommand4586>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar26);
      uVar35 = (ulonglong)local_48;
      if ((2 < uVar35) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar35] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar31 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar31 = local_50;
          }
          (*(code *)(*pppuVar31)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar35])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar31 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar31 = local_80;
      }
      (*(code *)(*pppuVar31)[2])();
    }
    FMemScope::~FMemScope(&local_120);
    FLLMScope::~FLLMScope(local_128);
  }
  pUVar6 = (this->EmitterInfo->RequiredModule).field0_0x0.DebugPtr;
  if (pUVar6 == (UParticleModuleRequired *)0x0) {
    pUVar27 = UMaterial::GetDefaultMaterial(MD_Surface);
  }
  else {
    pUVar27 = (UMaterial *)(pUVar6->Material).field0_0x0.DebugPtr;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar27 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar27);
  }
  this->_padding_ = (longlong)pUVar27;
  InitLocalVectorField(this);
  pFVar28 = (FWeakObjectPtr *)
            (**(code **)(*(longlong *)this->_padding_ + 0x30))((longlong *)this->_padding_,local_e0)
  ;
  (this->WeakWorld).WeakPtr = *pFVar28;
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar14) && (FVar33 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_f8.NameAndInfo.Index = FVar33.ComparisonIndex.Value;
      local_f8.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_f8.StatData.Pad[4] = '\0';
      local_f8.StatData.Pad[5] = '\0';
      local_f8.StatData.Pad[6] = '\0';
      local_f8.StatData.Pad[7] = '\0';
      local_f8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_f8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_f8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_f8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_f8);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// InitLocalVectorField @ 14811f8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::InitLocalVectorField(FGPUSpriteParticleEmitterInstance *this)

{
  FGPUSpriteEmitterInfo *pFVar1;
  FParticleSimulationGPU *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  double local_b8;
  code *local_a8 [2];
  undefined **local_98;
  FVectorFieldResource *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FVectorFieldResource *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  dVar22 = __real_3ff0000000000000;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar6 = (this->RandomStream).Seed * 0xbb38435 + 0x3619636b;
  (this->RandomStream).Seed = uVar6;
  pFVar1 = this->EmitterInfo;
  pFVar2 = this->Simulation;
  dVar26 = (double)((float)(uVar6 >> 9 | 0x3f800000) - __real_3f800000);
  dVar22 = dVar22 - dVar26;
  dVar24 = dVar26 * (pFVar1->LocalVectorField).MaxInitialRotation.Pitch +
           dVar22 * (pFVar1->LocalVectorField).MinInitialRotation.Pitch;
  auVar19._0_8_ =
       dVar26 * (pFVar1->LocalVectorField).MaxInitialRotation.Yaw +
       dVar22 * (pFVar1->LocalVectorField).MinInitialRotation.Yaw;
  auVar19._8_8_ = 0;
  dVar27 = dVar26 * (pFVar1->LocalVectorField).MaxInitialRotation.Roll +
           dVar22 * (pFVar1->LocalVectorField).MinInitialRotation.Roll;
  auVar13._8_4_ = SUB84(auVar19._0_8_,0);
  auVar13._0_8_ = dVar24;
  auVar13._12_4_ = (int)((ulonglong)auVar19._0_8_ >> 0x20);
  auVar13 = divpd(auVar13,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar13 = roundpd(auVar19,auVar13,3);
  dVar22 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar20._0_8_ = auVar13._0_8_ * dVar22;
  dVar26 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar20._8_8_ = auVar13._8_8_ * dVar26;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar27;
  auVar13 = divpd(auVar14,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar24 = dVar24 - auVar20._0_8_;
  dVar29 = auVar19._0_8_ - auVar20._8_8_;
  auVar13 = roundpd(auVar20,auVar13,3);
  dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar15._8_4_ = SUB84(dVar29,0);
  auVar15._0_8_ = dVar24;
  auVar15._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  dVar18 = auVar15._8_8_ + dVar26;
  dVar27 = dVar27 - auVar13._0_8_ * dVar4;
  dVar30 = 0.0 - auVar13._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  uVar9 = -(ulonglong)(0.0 <= dVar24);
  uVar11 = -(ulonglong)(0.0 <= dVar29);
  uVar10 = -(ulonglong)(0.0 <= dVar27);
  uVar12 = -(ulonglong)(0.0 <= dVar30);
  auVar21._0_8_ = uVar9 & (ulonglong)dVar24;
  auVar21._8_4_ = (undefined4)(uVar11 & (ulonglong)dVar29);
  auVar21._12_4_ = (undefined4)((uVar11 & (ulonglong)dVar29) >> 0x20);
  auVar25._0_4_ = ~(uint)uVar9 & SUB84(dVar24 + dVar22,0);
  auVar25._4_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)(dVar24 + dVar22) >> 0x20);
  auVar25._8_4_ = ~(uint)uVar11 & SUB84(dVar18,0);
  auVar25._12_4_ = ~(uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar18 >> 0x20);
  auVar25 = auVar25 | auVar21;
  auVar23._0_8_ = uVar10 & (ulonglong)dVar27;
  auVar23._8_4_ = (undefined4)(uVar12 & (ulonglong)dVar30);
  auVar23._12_4_ = (undefined4)((uVar12 & (ulonglong)dVar30) >> 0x20);
  auVar16._8_4_ = SUB84(dVar30,0);
  auVar16._0_8_ = dVar27;
  auVar16._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  dVar18 = auVar16._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar28._0_4_ = ~(uint)uVar10 & SUB84(dVar27 + dVar4,0);
  auVar28._4_4_ = ~(uint)(uVar10 >> 0x20) & (uint)((ulonglong)(dVar27 + dVar4) >> 0x20);
  auVar28._8_4_ = ~(uint)uVar12 & SUB84(dVar18,0);
  auVar28._12_4_ = ~(uint)(uVar12 >> 0x20) & (uint)((ulonglong)dVar18 >> 0x20);
  auVar28 = auVar28 | auVar23;
  uVar10 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar25._0_8_);
  uVar11 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar25._8_8_);
  local_c8._0_8_ = uVar10 & (ulonglong)(auVar25._0_8_ - dVar22);
  uVar9 = uVar11 & (ulonglong)(auVar25._8_8_ - dVar26);
  local_c8._8_4_ = (undefined4)uVar9;
  local_c8._12_4_ = (undefined4)(uVar9 >> 0x20);
  auVar17._0_4_ = ~(uint)uVar10 & auVar25._0_4_;
  auVar17._4_4_ = ~(uint)(uVar10 >> 0x20) & auVar25._4_4_;
  auVar17._8_4_ = ~(uint)uVar11 & auVar25._8_4_;
  auVar17._12_4_ = ~(uint)(uVar11 >> 0x20) & auVar25._12_4_;
  local_c8 = local_c8 | auVar17;
  uVar9 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar28._0_8_);
  local_b8 = (double)((ulonglong)(auVar28._0_8_ - dVar4) & uVar9 |
                     CONCAT44(~(uint)(uVar9 >> 0x20) & auVar28._4_4_,~(uint)uVar9 & auVar28._0_4_));
  (this->LocalVectorFieldRotation).Pitch = (double)local_c8._0_8_;
  (this->LocalVectorFieldRotation).Yaw = (double)local_c8._8_8_;
  (this->LocalVectorFieldRotation).Roll = local_b8;
  if ((pFVar2->bDestroyed_GameThread == false) &&
     (pFStack_90 = (pFVar2->LocalVectorField).Resource.Reference,
     pFStack_90 != (FVectorFieldResource *)0x0)) {
    local_80 = (undefined ***)0x0;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FGPUSpriteParticleEmitterInstance::InitLocalVectorField'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    local_98 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__7__InitLocalVectorField_FGPUSpriteParticleEmitterInstance__AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FGPUSpriteParticleEmitterInstance::InitLocalVectorField_::__l8::TSTR_FResetVectorFieldCommand3945>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`FGPUSpriteParticleEmitterInstance::InitLocalVectorField'::__l8::TSTR_FResetVectorFieldCommand3945>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar7);
      uVar9 = (ulonglong)local_48;
      if (2 < uVar9) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          pppuVar8 = (undefined ***)(local_78 + 0x10);
          if (local_50 != (undefined ***)0x0) {
            pppuVar8 = local_50;
          }
          (*(code *)(*pppuVar8)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      pppuVar8 = &local_98;
      if (local_80 != (undefined ***)0x0) {
        pppuVar8 = local_80;
      }
      (*(code *)(*pppuVar8)[2])();
    }
  }
  return;
}

// IsDynamicDataRequired @ 148123300

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGPUSpriteParticleEmitterInstance::IsDynamicDataRequired
          (FGPUSpriteParticleEmitterInstance *this,UParticleLODLevel *param_1)

{
  FFXSystem *pFVar1;
  bool bVar2;
  bool bVar3;
  FFXSystem *pFVar4;
  
  if (((*(int *)((longlong)&this->_padding_ + 4) < 0) && ((this->TilesToClear).ArrayNum == 0)) &&
     ((this->NewParticles).ArrayNum == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pFVar1 = this->FXSystem;
  if (pFVar1 != (FFXSystem *)0x0) {
    pFVar4 = (FFXSystem *)(**(code **)(*(longlong *)this->_padding_ + 0xd0))();
    if (pFVar4 == pFVar1) {
      bVar3 = true;
      goto LAB_14812334f;
    }
  }
  bVar3 = false;
LAB_14812334f:
  if ((bVar2) && (bVar3)) {
    return true;
  }
  return false;
}

// KillParticle @ 148123720

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::KillParticle(FGPUSpriteParticleEmitterInstance *this,int param_1)

{
  return;
}

// KillParticles @ 1481239a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::KillParticles(FGPUSpriteParticleEmitterInstance *this)

{
  return;
}

// KillParticlesForced @ 1481240a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::KillParticlesForced
          (FGPUSpriteParticleEmitterInstance *this,bool param_1)

{
  ClearAllocatedTiles(this);
  FreeInactiveTiles(this);
  if (this->Simulation->bDirty_GameThread != false) {
    FParticleSimulationGPU::InitResources
              (this->Simulation,&this->AllocatedTiles,this->EmitterInfo->Resources);
    return;
  }
  return;
}

// OnDeactivateSystem @ 1481244d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::OnDeactivateSystem(FGPUSpriteParticleEmitterInstance *this)

{
  return;
}

// ParticlePrefetch @ 1481257f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::ParticlePrefetch(FGPUSpriteParticleEmitterInstance *this)

{
  return;
}

// PostSpawn @ 148126cf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::PostSpawn
          (FGPUSpriteParticleEmitterInstance *this,FBaseParticle *param_1,float param_2,
          float param_3)

{
  return;
}

// PreSpawn @ 148127ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::PreSpawn
          (FGPUSpriteParticleEmitterInstance *this,FBaseParticle *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  return;
}

// ReleaseSimulationResources @ 1481293d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::ReleaseSimulationResources
          (FGPUSpriteParticleEmitterInstance *this)

{
  FFXSystem *pFVar1;
  FParticleSimulationResources *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  FFXSystem *pFVar7;
  FRenderCommandList *pFVar8;
  FCommandList *pFVar9;
  FRenderCommandTag *pFVar10;
  undefined ***pppuVar11;
  uint uVar12;
  ulonglong uVar13;
  FFXSystem *pFVar14;
  longlong lVar15;
  undefined1 auStackY_188 [32];
  FWeakObjectPtr local_148;
  FName local_140;
  FString local_138;
  void *local_128 [2];
  code *local_118 [2];
  undefined **local_108;
  FFXSystem *pFStack_100;
  FParticleSimulationGPU *local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  FParticleSimulationGPU *pFStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  FFXSystem *pFStack_a0;
  FParticleSimulationGPU *local_98;
  undefined ***local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  FParticleSimulationGPU *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar14 = (FFXSystem *)0x0;
  if (this->FXSystem == (FFXSystem *)0x0) {
    if (((this->AllocatedTiles).ArrayNum != 0) && (2 < (byte)LogParticles._0_1_)) {
      lVar15 = (**(code **)(*(longlong *)this->_padding_ + 0xd8))();
      local_140 = *(FName *)(lVar15 + 0x18);
      ::FName::ToString(&local_140,&local_138);
      (**(code **)(*(longlong *)this->_padding_ + 0x80))((longlong *)this->_padding_,local_128);
      UE::Logging::Private::BasicLog<3>
                (&`private:_void___cdecl_FGPUSpriteParticleEmitterInstance::ReleaseSimulationResources(void)___ptr64'
                  ::__l19::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if (local_128[0] != (void *)0x0) {
        FMemory::Free(local_128[0]);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    local_148 = (this->WeakWorld).WeakPtr;
    pUVar5 = FWeakObjectPtr::Get(&local_148);
    pFVar7 = pFVar14;
    if (((pUVar5 != (UObject *)0x0) && (*(longlong **)(pUVar5 + 0xf) != (longlong *)0x0)) &&
       (puVar6 = (undefined8 *)(**(code **)(**(longlong **)(pUVar5 + 0xf) + 0x478))(),
       puVar6 != (undefined8 *)0x0)) {
      pFVar7 = (FFXSystem *)(**(code **)*puVar6)(puVar6,&FFXSystem::Name);
    }
    pFVar1 = this->FXSystem;
    if (pFVar7 == pFVar1) {
      if ((char)pFVar1->_padding_ == '\0') {
        local_f8 = this->Simulation;
        local_118[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FFXSystem::RemoveGPUSimulation'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
        local_f0 = (undefined ***)0x0;
        local_108 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FFXSystem::RemoveGPUSimulation'::`5'::<lambda_1>,1,0>::
                     _vftable_;
        pFStack_100 = pFVar1;
        pFVar8 = FRenderCommandList::GetInstanceTLS();
        if (pFVar8 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FFXSystem::RemoveGPUSimulation_::__l5::TSTR_FRemoveGPUSimulationCommand4606>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
        }
        else {
          pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
          local_b8._0_8_ = local_118[0];
          local_90 = local_f0;
          local_a8 = local_108;
          pFStack_a0 = pFStack_100;
          local_98 = local_f8;
          local_118[0] = (code *)0x0;
          local_88 = 2;
          pFVar10 = (FRenderCommandTag *)
                    TRenderCommandTag<`FFXSystem::RemoveGPUSimulation'::__l5::TSTR_FRemoveGPUSimulationCommand4606>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                             *)local_b8,pFVar10);
          uVar13 = (ulonglong)local_88;
          if ((2 < uVar13) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                 ,0xd4,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar13] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_b8._0_8_ != (code *)0x0) {
              pppuVar11 = (undefined ***)(local_b8 + 0x10);
              if (local_90 != (undefined ***)0x0) {
                pppuVar11 = local_90;
              }
              (*(code *)(*pppuVar11)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar13])(local_b8);
          }
        }
        if (local_118[0] != (code *)0x0) {
          pppuVar11 = &local_108;
          if (local_f0 != (undefined ***)0x0) {
            pppuVar11 = local_f0;
          }
          (*(code *)(*pppuVar11)[2])();
        }
      }
      this_00 = this->FXSystem->ParticleSimulationResources;
      if (this_00 != (FParticleSimulationResources *)0x0) {
        lVar15 = (longlong)(this->AllocatedTiles).ArrayNum;
        pFVar7 = pFVar14;
        if (0 < lVar15) {
          do {
            uVar12 = (uint)pFVar14;
            uVar4 = 0;
            if ((int)uVar12 < (this->AllocatedTiles).ArrayNum) {
              uVar4 = ~uVar12 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            FParticleSimulationResources::FreeTile
                      (this_00,*(uint *)((this->AllocatedTiles).AllocatorInstance.Data +
                                        (longlong)pFVar7 * 4));
            pFVar14 = (FFXSystem *)(ulonglong)(uVar12 + 1);
            pFVar7 = (FFXSystem *)((longlong)&pFVar7->_padding_ + 1);
          } while ((longlong)pFVar7 < lVar15);
        }
        (this->AllocatedTiles).ArrayNum = 0;
        if ((this->AllocatedTiles).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(this->AllocatedTiles).AllocatorInstance,0,
                     &(this->AllocatedTiles).ArrayMax);
        }
      }
    }
  }
  (this->ActiveTiles).NumBits = 0;
  (this->AllocatedTiles).ArrayNum = 0;
  if ((this->AllocatedTiles).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->AllocatedTiles).AllocatorInstance,0,&(this->AllocatedTiles).ArrayMax);
  }
  (this->TileTimeOfDeath).ArrayNum = 0;
  if ((this->TileTimeOfDeath).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TileTimeOfDeath).AllocatorInstance,0,&(this->TileTimeOfDeath).ArrayMax)
    ;
  }
  (this->TilesToClear).ArrayNum = 0;
  if ((this->TilesToClear).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->TilesToClear).AllocatorInstance,0,&(this->TilesToClear).ArrayMax);
  }
  pFStack_d0 = this->Simulation;
  this->TileToAllocateFrom = -1;
  this->FreeParticlesInTile = 0;
  pFStack_d0->bReleased_GameThread = true;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FParticleSimulationGPU::BeginReleaseResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_c0 = (undefined ***)0x0;
  local_d8 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__BeginReleaseResources_FParticleSimulationGPU__QEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  pFVar8 = FRenderCommandList::GetInstanceTLS();
  if (pFVar8 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FParticleSimulationGPU::BeginReleaseResources_::__l2::TSTR_FReleaseParticleSimulationResourcesGPUCommand2676>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
    local_78._0_8_ = local_e8[0];
    local_50 = local_c0;
    local_68 = local_d8;
    pFStack_60 = pFStack_d0;
    local_58 = local_c8;
    local_e8[0] = (code *)0x0;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`FParticleSimulationGPU::BeginReleaseResources'::__l2::TSTR_FReleaseParticleSimulationResourcesGPUCommand2676>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_78,pFVar10);
    uVar13 = (ulonglong)local_48;
    if ((2 < uVar13) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar11 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar11 = local_50;
        }
        (*(code *)(*pppuVar11)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar13])(local_78);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    pppuVar11 = &local_d8;
    if (local_c0 != (undefined ***)0x0) {
      pppuVar11 = local_c0;
    }
    (*(code *)(*pppuVar11)[2])();
  }
  return;
}

// RemovedFromScene @ 148129f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::RemovedFromScene(FGPUSpriteParticleEmitterInstance *this)

{
  return;
}

// RequiredBytes @ 148129f70

/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
FGPUSpriteParticleEmitterInstance::RequiredBytes(FGPUSpriteParticleEmitterInstance *this)

{
  return 0;
}

// ReserveNewParticles @ 14812a430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::ReserveNewParticles
          (FGPUSpriteParticleEmitterInstance *this,int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = &(this->NewParticles).ArrayMax;
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      if (param_1 < 1) {
        return;
      }
    }
    else {
      if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
      }
      if (param_1 <= iVar2) {
        return;
      }
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,param_1,&(this->NewParticles).AllocatorInstance,(this->NewParticles).ArrayNum,
               piVar1);
  }
  return;
}

// ResetParticleParameters @ 14812a6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::ResetParticleParameters
          (FGPUSpriteParticleEmitterInstance *this,float param_1)

{
  return;
}

// Resize @ 14812ac10

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FGPUSpriteParticleEmitterInstance::Resize
          (FGPUSpriteParticleEmitterInstance *this,int param_1,bool param_2)

{
  return false;
}

// Rewind @ 14812d940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FGPUSpriteParticleEmitterInstance::Rewind(FGPUSpriteParticleEmitterInstance *this)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  FName local_res8;
  FString local_18;
  
  bVar3 = false;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  cVar2 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
  if ((cVar2 != '\0') && (5 < (byte)LogParticles._0_1_)) {
    if ((this->_padding_ != 0) && (lVar1 = *(longlong *)(this->_padding_ + 0x20), lVar1 != 0)) {
      local_res8 = *(FName *)(lVar1 + 0x18);
      ::FName::ToString(&local_res8,&local_18);
      bVar3 = true;
    }
    (**(code **)(*(longlong *)this->_padding_ + 0x50))();
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
    if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  lVar1 = this->_padding_;
  *(byte *)&this->_padding_ = (byte)this->_padding_ | 1;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (**(code **)(lVar1 + 0x90))(this);
  InitLocalVectorField(this);
  FreeInactiveTiles(this);
  if (this->Simulation->bDirty_GameThread == false) {
    return;
  }
  FParticleSimulationGPU::InitResources
            (this->Simulation,&this->AllocatedTiles,this->EmitterInfo->Resources);
  return;
}

// SetCurrentLODIndex @ 14812f6b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::SetCurrentLODIndex
          (FGPUSpriteParticleEmitterInstance *this,int param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar12;
  
  lVar3 = this->_padding_;
  if (lVar3 != 0) {
    *(int *)&this->_padding_ = param_1;
    if (param_1 < *(int *)(lVar3 + 0x48)) {
      uVar10 = 0;
      if (param_1 < *(int *)(lVar3 + 0x48)) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar8 = (longlong *)(*(longlong *)(lVar3 + 0x40) + (longlong)param_1 * 8);
    }
    else {
      *(undefined4 *)&this->_padding_ = 0;
      if ((*(int *)(lVar3 + 0x48) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar8 = *(longlong **)(lVar3 + 0x40);
    }
    this->_padding_ = *plVar8;
    uVar10 = (uint)this->_padding_;
    uVar7 = 0;
    if ((int)uVar10 < (int)this->_padding_) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)&this->_padding_ = *(undefined4 *)(this->_padding_ + (longlong)(int)uVar10 * 4);
    if ((this->_padding_ == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentLODLevel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x478,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((*(longlong *)(this->_padding_ + 0x30) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentLODLevel->RequiredModule",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleEmitterInstances.cpp"
                           ,0x479,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_2) {
      bVar9 = (byte)this->_padding_;
      lVar3 = this->_padding_;
      bVar9 = (bVar9 ^ *(byte *)(*(longlong *)(lVar3 + 0x30) + 0x71)) & 4 ^ bVar9;
      *(byte *)&this->_padding_ = bVar9;
      iVar1 = (int)this->_padding_;
      *(byte *)&this->_padding_ =
           (bVar9 ^ *(byte *)(*(longlong *)(lVar3 + 0x30) + 0x71)) & 2 ^ bVar9;
      iVar2 = (int)this->_padding_;
      lVar3 = *(longlong *)(lVar3 + 0x50);
      if (iVar2 < iVar1 + 1) {
        TArray<FLODBurstFired,TSizedDefaultAllocator<32>_>::AddZeroed
                  ((TArray<FLODBurstFired,TSizedDefaultAllocator<32>_> *)&this->_padding_,
                   (iVar1 - iVar2) + 1);
      }
      uVar10 = (uint)this->_padding_;
      uVar7 = 0;
      if ((int)uVar10 < (int)this->_padding_) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = (TArray<bool,TSizedDefaultAllocator<32>_> *)
                ((longlong)(int)uVar10 * 0x10 + this->_padding_);
      if (this_00->ArrayNum < *(int *)(lVar3 + 0xa0)) {
        TArray<bool,TSizedDefaultAllocator<32>_>::AddZeroed
                  (this_00,*(int *)(lVar3 + 0xa0) - this_00->ArrayNum);
      }
      uVar10 = 0;
      if (0 < *(int *)(lVar3 + 0xa0)) {
        lVar12 = 0;
        lVar11 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar10 < *(int *)(lVar3 + 0xa0)) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if (*(float *)(*(longlong *)(this->_padding_ + 0x30) + 0xb8) +
              *(float *)(*(longlong *)(lVar3 + 0x98) + 8 + lVar11) < *(float *)&this->_padding_) {
            uVar7 = 0;
            if ((int)uVar10 < this_00->ArrayNum) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (this_00->AllocatorInstance).Data[lVar12] = (FScriptContainerElement)0x1;
          }
          uVar10 = uVar10 + 1;
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + 0xc;
        } while ((int)uVar10 < *(int *)(lVar3 + 0xa0));
      }
    }
    cVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x48))();
    if ((cVar6 == '\x01') && ((*(byte *)(this->_padding_ + 0x2c) & 1) == 0)) {
      (**(code **)(this->_padding_ + 0xf0))(this,0);
    }
  }
  return;
}

// Spawn @ 148134830

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FGPUSpriteParticleEmitterInstance::Spawn(FGPUSpriteParticleEmitterInstance *this,float param_1)

{
  return 0.0;
}

// Tick @ 1481382c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::Tick
          (FGPUSpriteParticleEmitterInstance *this,float param_1,bool param_2)

{
  float *pfVar1;
  FGPUSpriteEmitterInfo **ppFVar2;
  uint *puVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  FName FVar8;
  FGPUSpriteEmitterInfo *pFVar9;
  UMaterialInterface *pUVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  char cVar17;
  uint uVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_GPUSpriteTickTime> FVar20;
  TStatId TVar21;
  FThreadSafeStaticStat<FStat_STAT_GPUSpritesSpawned> FVar22;
  FScriptContainerElement *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_GPUSpriteParticles> FVar24;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int *piVar25;
  longlong lVar26;
  ForElementType<unsigned_int> FVar27;
  FName FVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint local_res20 [2];
  FSpawnInfo local_1f8;
  FName local_1e8;
  uint local_1e0;
  uint uStack_1dc;
  FColor_u_0 local_1d8;
  float local_1d4;
  float local_1d0 [2];
  FName local_1c8;
  byte local_1c0;
  FSpawnInfo local_1b8;
  FName local_1a8;
  FName local_1a0;
  FName local_190;
  float *local_188;
  float *local_180;
  LARGE_INTEGER local_178 [2];
  FSpawnInfo local_168;
  FSpawnInfo local_158;
  FString local_148;
  FStatMessage local_138;
  FSourceLocation local_128;
  FName local_108 [2];
  FName local_f8;
  FName local_f0;
  FString local_e8 [2];
  double local_c8;
  
  piVar25 = &(this->NewParticles).ArrayMax;
  iVar33 = 0;
  (this->NewParticles).ArrayNum = 0;
  if (*piVar25 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x4c,4,0,&(this->NewParticles).AllocatorInstance,0,piVar25);
  }
  FVar20 = StatPtr_STAT_GPUSpriteTickTime;
  if (StatPtr_STAT_GPUSpriteTickTime == (FThreadSafeStaticStat<FStat_STAT_GPUSpriteTickTime>)0x0) {
    pFVar19 = ::FName::FName(local_108,"STAT_GPUSpriteTickTime");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_GPUSpriteTickTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSpriteTickTime,*pFVar19,
                        L"Sprite Tick Time","STATGROUP_GPUParticles","STATCAT_Advanced",
                        L"GPU Particles",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar20;
  bVar14 = false;
  bVar13 = false;
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  bVar16 = false;
  bVar15 = false;
  if ((FVar28.ComparisonIndex.Value.Value != 0) || (FVar28.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d8._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar14 = false;
      bVar13 = true;
      bVar16 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_1a8.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a8,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                   ,0xe2c);
        bVar14 = true;
        bVar13 = true;
        bVar16 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar15 = true;
      goto LAB_148138475;
    }
  }
  bVar14 = bVar16;
  bVar13 = bVar15;
  bVar15 = false;
  FVar28 = local_1a0;
LAB_148138475:
  if (((this->AllocatedTiles).ArrayNum != (this->TileTimeOfDeath).ArrayNum) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocatedTiles.Num() == TileTimeOfDeath.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                          ,0xe2e,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((((FXConsoleVariables::bFreezeGPUSimulation == 0) &&
       (FXConsoleVariables::bFreezeParticleSimulation == 0)) &&
      (FXConsoleVariables::bAllowGPUParticles != 0)) &&
     (((GRHIGlobals.SupportsWideMRT != false && (ZPULL(GPixelFormats[0x11],0,1) != 0)) &&
      (GRHIGlobals.SupportsTexture3D != false)))) {
    local_1e8 = (FName)FParticleEmitterInstance::GetCurrentLODLevelChecked
                                 ((FParticleEmitterInstance *)this);
    fVar34 = (float)(**(code **)(this->_padding_ + 0x28))(this);
    this->Simulation->bEnabled = (bool)((byte)this->_padding_ & 1);
    if ((this->_padding_ & 1) == 0) {
      *(float *)&this->_padding_ = fVar34 + *(float *)&this->_padding_;
      FParticleEmitterInstance::FakeBursts((FParticleEmitterInstance *)this);
    }
    else {
      cVar17 = (**(code **)(*(longlong *)this->_padding_ + 0x100))();
      if ((cVar17 != '\0') &&
         (fVar35 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x110))(),
         fVar35 = fVar35 - *(float *)((longlong)&this->_padding_ + 4),
         pfVar1 = &this->EmitterInfo->MaxLifetime, *pfVar1 <= fVar35 && fVar35 != *pfVar1)) {
        param_2 = true;
      }
      uVar31 = 0;
      uVar29 = 0;
      uVar30 = 1;
      if (0 < (this->ActiveTiles).NumBits) {
        do {
          uVar18 = 0;
          if ((int)uVar29 < (this->TileTimeOfDeath).ArrayNum) {
            uVar18 = ~uVar29 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(float *)((longlong)&this->_padding_ + 4) <
              *(float *)((this->TileTimeOfDeath).AllocatorInstance.Data + (longlong)(int)uVar29 * 4)
             ) {
            uVar31 = uVar31 + 1;
          }
          else {
            FVar7 = (this->ActiveTiles).AllocatorInstance.SecondaryData;
            FVar27 = (ForElementType<unsigned_int>)&this->ActiveTiles;
            if (FVar7 != (ForElementType<unsigned_int>)0x0) {
              FVar27 = FVar7;
            }
            puVar3 = (uint *)((longlong)FVar27 + (longlong)iVar33 * 4);
            *puVar3 = *puVar3 & ~uVar30;
            if (this->TileToAllocateFrom == uVar29) {
              this->TileToAllocateFrom = -1;
              this->FreeParticlesInTile = 0;
            }
          }
          uVar29 = uVar29 + 1;
          uVar18 = uVar30 * 2;
          if (uVar18 == 0) {
            iVar33 = iVar33 + 1;
          }
          uVar30 = 1;
          if (uVar18 != 0) {
            uVar30 = uVar18;
          }
        } while ((int)uVar29 < (this->ActiveTiles).NumBits);
      }
      local_res20[0] = uVar31;
      (**(code **)(this->_padding_ + 0x38))();
      if (((this->_padding_ & 0x30) == 0) && (param_2 == false)) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
      }
      if ((this->AllowedLoopCount == 0) || ((int)this->_padding_ < this->AllowedLoopCount)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if (((bVar16) || (*(float *)&this->_padding_ <= 0.0 && *(float *)&this->_padding_ != 0.0)) ||
         (!bVar12)) {
        if ((this->_padding_ & 0x400) != 0) {
          FParticleEmitterInstance::FakeBursts((FParticleEmitterInstance *)this);
        }
      }
      else {
        TVar21 = FThreadSafeStaticStatInner<FStat_STAT_GPUSpriteSpawnTime,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_GPUSpriteSpawnTime,1> *)
                            &StatPtr_STAT_GPUSpriteSpawnTime);
        local_128.Impl._Line = 0xe55;
        local_128.Impl._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
        ;
        local_128.Impl._Column = 5;
        local_128.Impl._Function =
             "void __cdecl FGPUSpriteParticleEmitterInstance::Tick(float,bool)";
        FScopeCycleCounter::FScopeCycleCounter
                  ((FScopeCycleCounter *)&local_1c8,*(TStatIdData **)&(TVar21.StatIdPtr)->Name,
                   CycleStat|ClearEveryFrame,false,&local_128);
        local_1f8.Count = 0;
        local_1f8.StartTime = 0.0;
        local_1f8.Increment = 0.0;
        iVar32 = 0;
        local_1d4 = param_1;
        (**(code **)(this->_padding_ + 0x98))(this,&local_1d4,&local_1f8);
        iVar33 = (this->ForceBurstSpawnedParticles).ArrayNum + local_1f8.Count;
        local_1f8.Count = iVar33;
        if (FXConsoleVariables::MaxGPUParticlesSpawnedPerFrame < iVar33) {
          iVar32 = iVar33 - FXConsoleVariables::MaxGPUParticlesSpawnedPerFrame;
          local_1f8.Count = FXConsoleVariables::MaxGPUParticlesSpawnedPerFrame;
        }
        GetNumParticlesToSpawn(this,&local_1b8,param_1);
        iVar33 = (this->ForceSpawnedParticles).ArrayNum;
        fVar35 = UParticleEmitter::GetQualityLevelSpawnRateMult((UParticleEmitter *)this->_padding_)
        ;
        iVar6 = (this->NewParticles).ArrayNum;
        local_1f8.Count = (int)((float)local_1f8.Count * fVar35);
        iVar33 = (int)((float)(iVar33 + local_1b8.Count) * fVar35);
        ReserveNewParticles(this,local_1f8.Count + iVar6 + iVar33);
        local_1f8.Count =
             AllocateTilesForParticles
                       (this,&this->NewParticles,local_1f8.Count,(int *)local_res20,
                        this->FXSystem->ParticleSimulationResources);
        local_1e0 = (this->NewParticles).ArrayNum;
        iVar33 = AllocateTilesForParticles
                           (this,&this->NewParticles,iVar33,(int *)local_res20,
                            this->FXSystem->ParticleSimulationResources);
        *(float *)&this->_padding_ = (float)iVar32 + *(float *)&this->_padding_;
        local_1b8.Count = iVar33;
        if (0 < local_1f8.Count) {
          local_168.Count = local_1f8.Count;
          local_168.StartTime = local_1f8.StartTime;
          local_168.Increment = local_1f8.Increment;
          BuildNewParticles(this,(FNewParticle *)
                                 ((this->NewParticles).AllocatorInstance.Data +
                                 (longlong)iVar6 * 0x4c),&local_168,
                            &this->ForceBurstSpawnedParticles);
        }
        if (0 < iVar33) {
          local_158.StartTime = local_1b8.StartTime;
          local_158.Count = local_1b8.Count;
          local_158.Increment = local_1b8.Increment;
          BuildNewParticles(this,(FNewParticle *)
                                 ((this->NewParticles).AllocatorInstance.Data +
                                 (longlong)(int)local_1e0 * 0x4c),&local_158,
                            &this->ForceSpawnedParticles);
        }
        FreeNewParticleArray(&this->ForceSpawnedParticles);
        FreeNewParticleArray(&this->ForceBurstSpawnedParticles);
        iVar33 = iVar33 + local_1f8.Count;
        if ((iVar33 != 0) && (FThreadStats::bPrimaryEnable != false)) {
          FVar22 = StatPtr_STAT_GPUSpritesSpawned;
          if (StatPtr_STAT_GPUSpritesSpawned ==
              (FThreadSafeStaticStat<FStat_STAT_GPUSpritesSpawned>)0x0) {
            pFVar19 = ::FName::FName(&local_f8,"STAT_GPUSpritesSpawned");
            FVar22 = (FThreadSafeStaticStat<FStat_STAT_GPUSpritesSpawned>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSpritesSpawned,
                                *pFVar19,L"Sprites Spawned","STATGROUP_GPUParticles",
                                "STATCAT_Advanced",L"GPU Particles",true,true,ST_int64,false,false,
                                MCR_Invalid);
          }
          FVar8 = *(FName *)FVar22;
          local_1e0 = (uint)FVar8.ComparisonIndex.Value;
          uStack_1dc = FVar8.Number;
          FThreadStats::AddMessage<__int64>(FVar8,Add,(longlong)iVar33,false);
        }
        if ((FXConsoleVariables::GPUSpawnWarningThreshold < iVar33) &&
           (2 < (byte)LogParticles._0_1_)) {
          ::FName::ToString((FName *)(this->_padding_ + 0x28),local_e8);
          local_190 = *(FName *)(*(longlong *)(this->_padding_ + 0x20) + 0x18);
          ::FName::ToString(&local_190,&local_148);
          UE::Logging::Private::BasicLog<3>
                    (&`public:_virtual_void___cdecl_FGPUSpriteParticleEmitterInstance::Tick(float,bool)___ptr64'
                      ::__l42::LOG_Static,(FLogCategoryBase *)&LogParticles);
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
          }
        }
        cVar17 = (**(code **)(*(longlong *)this->_padding_ + 0x100))();
        if (cVar17 != '\0') {
          fVar35 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x110))();
          fVar35 = fVar35 - *(float *)((longlong)&this->_padding_ + 4);
          lVar26 = (longlong)iVar33;
          pFVar9 = this->EmitterInfo;
          local_c8 = (pFVar9->ConstantAcceleration).field0_0x0._s_0.Z;
          if (0 < iVar33) {
            pFVar23 = (this->NewParticles).AllocatorInstance.Data +
                      (longlong)((this->NewParticles).ArrayNum - iVar33) * 0x4c + 8;
            fVar38 = (float)(pFVar9->ConstantAcceleration).field0_0x0._s_0.X;
            fVar37 = (float)(pFVar9->ConstantAcceleration).field0_0x0._s_0.Y;
            fVar40 = fVar37 * __real_3f000000;
            fVar39 = fVar38 * __real_3f000000;
            fVar41 = (float)local_c8 * __real_3f000000;
            do {
              *(float *)(pFVar23 + -8) =
                   (fVar39 * fVar35 + *(float *)(pFVar23 + 8)) * fVar35 + *(float *)(pFVar23 + -8);
              *(float *)(pFVar23 + -4) =
                   (fVar40 * fVar35 + *(float *)(pFVar23 + 0xc)) * fVar35 + *(float *)(pFVar23 + -4)
              ;
              *(float *)pFVar23 =
                   (fVar41 * fVar35 + *(float *)(pFVar23 + 0x10)) * fVar35 + *(float *)pFVar23;
              *(float *)(pFVar23 + 8) = fVar35 * fVar38 + *(float *)(pFVar23 + 8);
              *(float *)(pFVar23 + 0xc) = fVar35 * fVar37 + *(float *)(pFVar23 + 0xc);
              *(float *)(pFVar23 + 0x10) = fVar35 * (float)local_c8 + *(float *)(pFVar23 + 0x10);
              *(float *)(pFVar23 + 4) =
                   fVar35 * *(float *)(pFVar23 + 0x14) + *(float *)(pFVar23 + 4);
              pFVar23 = pFVar23 + 0x4c;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
          }
        }
        if ((local_1c0 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_1c0 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_1c0 & 4) != 0) {
          FThreadStats::AddMessage(local_1c8,CycleScopeEnd);
        }
        local_1c0 = 0;
      }
      FreeInactiveTiles(this);
      ppFVar2 = &this->EmitterInfo;
      pFVar9 = *ppFVar2;
      pUVar10 = (((pFVar9->RequiredModule).field0_0x0.DebugPtr)->Material).field0_0x0.DebugPtr;
      if (pUVar10 != (UMaterialInterface *)0x0) {
        this->_padding_ = (longlong)pUVar10;
      }
      dVar36 = (double)param_1;
      dVar4 = (pFVar9->LocalVectorField).RotationRate.Yaw;
      dVar5 = (pFVar9->LocalVectorField).RotationRate.Roll;
      (this->LocalVectorFieldRotation).Pitch =
           dVar36 * (pFVar9->LocalVectorField).RotationRate.Pitch +
           (this->LocalVectorFieldRotation).Pitch;
      (this->LocalVectorFieldRotation).Yaw = dVar36 * dVar4 + (this->LocalVectorFieldRotation).Yaw;
      (this->LocalVectorFieldRotation).Roll = dVar36 * dVar5 + (this->LocalVectorFieldRotation).Roll
      ;
      pFVar9 = *ppFVar2;
      fVar35 = *(float *)&this->_padding_;
      if (((float)(int)((uint)(pFVar9->PointAttractorStrength).LookupTable.EntryStride -
                       (uint)(pFVar9->PointAttractorStrength).LookupTable.SubEntryStride) !=
           __real_3f800000) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("LookupTable.GetValuesPerEntry() == 1",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Distributions.h"
                              ,0x109,L""), bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      FDistributionLookupTable::GetEntry
                (&(pFVar9->PointAttractorStrength).LookupTable,fVar35,&local_188,&local_180,
                 local_1d0);
      iVar33 = local_res20[0] << 4;
      fVar35 = *local_188;
      fVar37 = *local_180;
      this->PendingDeltaSeconds = param_1;
      *(int *)((longlong)&this->_padding_ + 4) = iVar33;
      this->PointAttractorStrength = (fVar37 - fVar35) * local_1d0[0] + fVar35;
      if (((local_res20[0] & 0xfffffff) != 0) && (FThreadStats::bPrimaryEnable != false)) {
        FVar24 = StatPtr_STAT_GPUSpriteParticles;
        if (StatPtr_STAT_GPUSpriteParticles ==
            (FThreadSafeStaticStat<FStat_STAT_GPUSpriteParticles>)0x0) {
          pFVar19 = ::FName::FName(&local_f0,"STAT_GPUSpriteParticles");
          FVar24 = (FThreadSafeStaticStat<FStat_STAT_GPUSpriteParticles>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_GPUSpriteParticles,*pFVar19
                              ,L"Sprites","STATGROUP_GPUParticles","STATCAT_Advanced",
                              L"GPU Particles",true,true,ST_int64,false,false,MCR_Invalid);
        }
        local_1e8 = *(FName *)FVar24;
        FThreadStats::AddMessage<__int64>(local_1e8,Add,(longlong)iVar33,false);
      }
      *(float *)&this->_padding_ = fVar34 + *(float *)&this->_padding_;
      (**(code **)(this->_padding_ + 0x68))(this);
      (**(code **)(this->_padding_ + 0x48))(this);
      if (this->Simulation->bDirty_GameThread != false) {
        FParticleSimulationGPU::InitResources
                  (this->Simulation,&this->AllocatedTiles,(*ppFVar2)->Resources);
      }
      FParticleEmitterInstance::CheckEmitterFinished((FParticleEmitterInstance *)this);
    }
    if (((this->AllocatedTiles).ArrayNum != (this->TileTimeOfDeath).ArrayNum) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllocatedTiles.Num() == TileTimeOfDeath.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                            ,0xed4,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar15) && (FVar28 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_138.NameAndInfo.Index = FVar28.ComparisonIndex.Value;
      local_138.NameAndInfo.Number = FVar28.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_178);
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      local_138.StatData.Pad[0] = local_178[0]._0_1_;
      local_138.StatData.Pad[1] = local_178[0]._1_1_;
      local_138.StatData.Pad[2] = local_178[0]._2_1_;
      local_138.StatData.Pad[3] = local_178[0]._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_138);
      piVar25 = &this_00->ScopeCount;
      *piVar25 = *piVar25 + -1;
      if (*piVar25 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// Tick_ModuleFinalUpdate @ 14813b790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::Tick_ModuleFinalUpdate
          (FGPUSpriteParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FGPUSpriteParticleEmitterInstance *local_48;
  uint local_40;
  float local_3c;
  
  lVar1 = this->_padding_;
  if ((*(int *)(lVar1 + 0x48) < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = **(longlong **)(lVar1 + 0x40);
  if ((lVar1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HighestLODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                         ,0x1107,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = 0;
  if (0 < (param_2->UpdateModules).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (param_2->UpdateModules).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)((param_2->UpdateModules).AllocatorInstance.Data + lVar7);
      if (((plVar2 != (longlong *)0x0) && ((char)*(byte *)(plVar2 + 5) < '\0')) &&
         ((*(byte *)(plVar2 + 5) & 0xc) == 0xc)) {
        pcVar3 = *(code **)(*plVar2 + 0x2c8);
        uVar5 = 0;
        if ((int)uVar6 < *(int *)(lVar1 + 0x88)) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_40 = FParticleEmitterInstance::GetModuleDataOffset
                             ((FParticleEmitterInstance *)this,
                              *(UParticleModule **)(lVar7 + *(longlong *)(lVar1 + 0x80)));
        local_48 = this;
        local_3c = param_1;
        (*pcVar3)(plVar2,&local_48);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (param_2->UpdateModules).ArrayNum);
  }
  return;
}

// Tick_ModulePostUpdate @ 14813bbd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::Tick_ModulePostUpdate
          (FGPUSpriteParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  return;
}

// Tick_ModulePreUpdate @ 14813bdc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::Tick_ModulePreUpdate
          (FGPUSpriteParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  return;
}

// Tick_ModuleUpdate @ 14813bdd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::Tick_ModuleUpdate
          (FGPUSpriteParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FGPUSpriteParticleEmitterInstance *local_48;
  uint local_40;
  float local_3c;
  
  lVar1 = this->_padding_;
  if ((*(int *)(lVar1 + 0x48) < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar1 = **(longlong **)(lVar1 + 0x40);
  if ((lVar1 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("HighestLODLevel",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                         ,0x10f4,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = 0;
  if (0 < (param_2->UpdateModules).ArrayNum) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (param_2->UpdateModules).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      plVar2 = *(longlong **)((param_2->UpdateModules).AllocatorInstance.Data + lVar7);
      if (((plVar2 != (longlong *)0x0) && ((char)*(byte *)(plVar2 + 5) < '\0')) &&
         ((*(byte *)(plVar2 + 5) & 10) == 10)) {
        pcVar3 = *(code **)(*plVar2 + 0x2c0);
        uVar5 = 0;
        if ((int)uVar6 < *(int *)(lVar1 + 0x88)) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_40 = FParticleEmitterInstance::GetModuleDataOffset
                             ((FParticleEmitterInstance *)this,
                              *(UParticleModule **)(lVar7 + *(longlong *)(lVar1 + 0x80)));
        local_48 = this;
        local_3c = param_1;
        (*pcVar3)(plVar2,&local_48);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < (param_2->UpdateModules).ArrayNum);
  }
  return;
}

// Tick_SpawnParticles @ 14813c1d0

/* WARNING: Enum "Type": Some values do not have unique names */

float __thiscall
FGPUSpriteParticleEmitterInstance::Tick_SpawnParticles
          (FGPUSpriteParticleEmitterInstance *this,float param_1,UParticleLODLevel *param_2,
          bool param_3,bool param_4)

{
  return 0.0;
}

// UpdateBoundingBox @ 14813e810

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::UpdateBoundingBox
          (FGPUSpriteParticleEmitterInstance *this,float param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  undefined7 uStack_1f;
  
  lVar8 = (**(code **)(*(longlong *)this->_padding_ + 0x20))();
  dVar4 = *(double *)(lVar8 + 0x20) - __real_3ff0000000000000;
  dVar7 = *(double *)(lVar8 + 0x30) + __real_3ff0000000000000;
  dVar2 = *(double *)(lVar8 + 0x30) - __real_3ff0000000000000;
  dVar10 = *(double *)(lVar8 + 0x20) + __real_3ff0000000000000;
  dVar9 = *(double *)(lVar8 + 0x28) - __real_3ff0000000000000;
  dVar6 = *(double *)(lVar8 + 0x28) + __real_3ff0000000000000;
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  this->_padding_ = (longlong)dVar4;
  this->_padding_ = auVar3._8_8_;
  auVar1._8_4_ = SUB84(dVar10,0);
  auVar1._0_8_ = dVar2;
  auVar1._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  this->_padding_ = (longlong)dVar2;
  this->_padding_ = auVar1._8_8_;
  auVar5._8_4_ = SUB84(dVar7,0);
  auVar5._0_8_ = dVar6;
  auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  this->_padding_ = (longlong)dVar6;
  this->_padding_ = auVar5._8_8_;
  this->_padding_ = CONCAT71(uStack_1f,1);
  return;
}

// UpdateOrbitData @ 148141510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGPUSpriteParticleEmitterInstance::UpdateOrbitData
          (FGPUSpriteParticleEmitterInstance *this,float param_1)

{
  return;
}

