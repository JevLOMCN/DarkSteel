// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// ReleaseTextures @ 144b380a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRadianceCacheState::ReleaseTextures(FRadianceCacheState *this)

{
  longlong *plVar1;
  IPooledRenderTarget *pIVar2;
  FRDGPooledBuffer *pFVar3;
  longlong lVar4;
  
  pIVar2 = (this->RadianceProbeIndirectionTexture).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->RadianceProbeIndirectionTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->RadianceProbeAtlasTexture).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->RadianceProbeAtlasTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->SkyVisibilityProbeAtlasTexture).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->SkyVisibilityProbeAtlasTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->FinalRadianceAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->FinalRadianceAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->FinalSkyVisibilityAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->FinalSkyVisibilityAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->FinalIrradianceAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->FinalIrradianceAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->ProbeOcclusionAtlas).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->ProbeOcclusionAtlas).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pIVar2 = (this->DepthProbeAtlasTexture).Reference;
  if (pIVar2 != (IPooledRenderTarget *)0x0) {
    (this->DepthProbeAtlasTexture).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar2->_padding_ + 0x38))();
  }
  pFVar3 = (this->ProbeAllocator).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->ProbeAllocator).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->ProbeFreeListAllocator).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->ProbeFreeListAllocator).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->ProbeFreeList).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->ProbeFreeList).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->ProbeLastUsedFrame).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->ProbeLastUsedFrame).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->ProbeLastTracedFrame).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->ProbeLastTracedFrame).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  pFVar3 = (this->ProbeWorldOffset).Reference;
  if (pFVar3 != (FRDGPooledBuffer *)0x0) {
    (this->ProbeWorldOffset).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar3->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
  }
  return;
}

// AddCrossGPUTransfers @ 144d536d0

/* WARNING: Removing unreachable block (ram,0x000144d54c00) */
/* WARNING: Removing unreachable block (ram,0x000144d54843) */
/* WARNING: Removing unreachable block (ram,0x000144d54489) */
/* WARNING: Removing unreachable block (ram,0x000144d540cf) */
/* WARNING: Removing unreachable block (ram,0x000144d53d39) */
/* WARNING: Removing unreachable block (ram,0x000144d53a21) */
/* WARNING: Removing unreachable block (ram,0x000144d53894) */
/* WARNING: Removing unreachable block (ram,0x000144d53bad) */
/* WARNING: Removing unreachable block (ram,0x000144d53ef5) */
/* WARNING: Removing unreachable block (ram,0x000144d542ac) */
/* WARNING: Removing unreachable block (ram,0x000144d54666) */
/* WARNING: Removing unreachable block (ram,0x000144d54a20) */
/* WARNING: Removing unreachable block (ram,0x000144d54de0) */
/* WARNING: Removing unreachable block (ram,0x000144d54c11) */
/* WARNING: Removing unreachable block (ram,0x000144d54854) */
/* WARNING: Removing unreachable block (ram,0x000144d5449a) */
/* WARNING: Removing unreachable block (ram,0x000144d540e0) */
/* WARNING: Removing unreachable block (ram,0x000144d53d47) */
/* WARNING: Removing unreachable block (ram,0x000144d53a2f) */
/* WARNING: Removing unreachable block (ram,0x000144d538a3) */
/* WARNING: Removing unreachable block (ram,0x000144d53bbb) */
/* WARNING: Removing unreachable block (ram,0x000144d53f03) */
/* WARNING: Removing unreachable block (ram,0x000144d542bd) */
/* WARNING: Removing unreachable block (ram,0x000144d54677) */
/* WARNING: Removing unreachable block (ram,0x000144d54a31) */
/* WARNING: Removing unreachable block (ram,0x000144d54df1) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRadianceCacheState::AddCrossGPUTransfers
          (FRadianceCacheState *this,uint param_1,uint param_2,
          TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *param_3)

{
  IPooledRenderTarget *pIVar1;
  FRHITexture *pFVar2;
  FScriptContainerElement *pFVar3;
  FRDGPooledBuffer *pFVar4;
  FRHIBuffer *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FRHITexture *local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  uint local_3a0;
  uint local_39c;
  undefined2 local_398;
  undefined8 local_390;
  undefined8 uStack_388;
  FRHITexture *local_380;
  undefined8 local_378;
  undefined8 local_370;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  uint local_358;
  uint local_354;
  undefined2 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  FRHITexture *local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  uint local_310;
  uint local_30c;
  undefined2 local_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  FRHITexture *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  uint local_2c8;
  uint local_2c4;
  undefined2 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  FRHITexture *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint local_280;
  uint local_27c;
  undefined2 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  FRHITexture *local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  uint local_238;
  uint local_234;
  undefined2 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  FRHITexture *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  uint local_1f0;
  uint local_1ec;
  undefined2 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  FRHIBuffer *local_1c8;
  undefined8 local_1c0;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  uint local_1a8;
  uint local_1a4;
  undefined2 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  FRHIBuffer *local_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  uint local_160;
  uint local_15c;
  undefined2 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  FRHIBuffer *local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  uint local_118;
  uint local_114;
  undefined2 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  FRHIBuffer *local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint local_d0;
  uint local_cc;
  undefined2 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  FRHIBuffer *local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint local_84;
  undefined2 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  FRHIBuffer *local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint local_3c;
  undefined2 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  pIVar1 = (this->RadianceProbeIndirectionTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_3c8 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_3c0 = 0;
    uStack_3a8 = 0;
    uStack_3a4 = 0;
    local_398 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    uStack_3ac = 0;
    local_390 = 0;
    uStack_388 = 0;
    local_3a0 = param_1;
    local_39c = param_2;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_3c8) &&
        ((FScriptContainerElement *)&local_3c8 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(FRHITexture **)pFVar3 = local_3c8;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_3c0;
    *(undefined8 *)(pFVar3 + 0x10) = local_3b8;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_3b0;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_3a8,uStack_3ac);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_3a4;
    *(uint *)(pFVar3 + 0x28) = local_3a0;
    *(uint *)(pFVar3 + 0x2c) = local_39c;
    pFVar3[0x30] = local_398._0_1_;
    pFVar3[0x31] = local_398._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_390;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_388;
    local_3c0 = 0;
    local_3c8 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->RadianceProbeAtlasTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_380 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_378 = 0;
    uStack_360 = 0;
    uStack_35c = 0;
    local_350 = 0;
    local_370 = 0;
    uStack_368 = 0;
    uStack_364 = 0;
    local_348 = 0;
    uStack_340 = 0;
    local_358 = param_1;
    local_354 = param_2;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_380) &&
        ((FScriptContainerElement *)&local_380 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(FRHITexture **)pFVar3 = local_380;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_378;
    *(undefined8 *)(pFVar3 + 0x10) = local_370;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_368;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_360,uStack_364);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_35c;
    *(uint *)(pFVar3 + 0x28) = local_358;
    *(uint *)(pFVar3 + 0x2c) = local_354;
    pFVar3[0x30] = local_350._0_1_;
    pFVar3[0x31] = local_350._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_348;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_340;
    local_378 = 0;
    local_380 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->SkyVisibilityProbeAtlasTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_338 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_330 = 0;
    uStack_318 = 0;
    uStack_314 = 0;
    local_308 = 0;
    local_328 = 0;
    uStack_320 = 0;
    uStack_31c = 0;
    local_300 = 0;
    uStack_2f8 = 0;
    local_310 = param_1;
    local_30c = param_2;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_338) &&
        ((FScriptContainerElement *)&local_338 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(FRHITexture **)pFVar3 = local_338;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_330;
    *(undefined8 *)(pFVar3 + 0x10) = local_328;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_320;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_318,uStack_31c);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_314;
    *(uint *)(pFVar3 + 0x28) = local_310;
    *(uint *)(pFVar3 + 0x2c) = local_30c;
    pFVar3[0x30] = local_308._0_1_;
    pFVar3[0x31] = local_308._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_300;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_2f8;
    local_330 = 0;
    local_338 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->FinalRadianceAtlas).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_2f0 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_2e8 = 0;
    uStack_2d0 = 0;
    uStack_2cc = 0;
    local_2c0 = 0;
    local_2e0 = 0;
    uStack_2d8 = 0;
    uStack_2d4 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = param_1;
    local_2c4 = param_2;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_2f0) &&
        ((FScriptContainerElement *)&local_2f0 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(FRHITexture **)pFVar3 = local_2f0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_2e8;
    *(undefined8 *)(pFVar3 + 0x10) = local_2e0;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_2d8;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_2d0,uStack_2d4);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_2cc;
    *(uint *)(pFVar3 + 0x28) = local_2c8;
    *(uint *)(pFVar3 + 0x2c) = local_2c4;
    pFVar3[0x30] = local_2c0._0_1_;
    pFVar3[0x31] = local_2c0._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_2b8;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_2b0;
    local_2e8 = 0;
    local_2f0 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->FinalIrradianceAtlas).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_2a8 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_2a0 = 0;
    uStack_288 = 0;
    uStack_284 = 0;
    local_278 = 0;
    local_298 = 0;
    uStack_290 = 0;
    uStack_28c = 0;
    local_270 = 0;
    uStack_268 = 0;
    local_280 = param_1;
    local_27c = param_2;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_2a8) &&
        ((FScriptContainerElement *)&local_2a8 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(FRHITexture **)pFVar3 = local_2a8;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_2a0;
    *(undefined8 *)(pFVar3 + 0x10) = local_298;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_290;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_288,uStack_28c);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_284;
    *(uint *)(pFVar3 + 0x28) = local_280;
    *(uint *)(pFVar3 + 0x2c) = local_27c;
    pFVar3[0x30] = local_278._0_1_;
    pFVar3[0x31] = local_278._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_270;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_268;
    local_2a0 = 0;
    local_2a8 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->ProbeOcclusionAtlas).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_260 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_258 = 0;
    uStack_240 = 0;
    uStack_23c = 0;
    local_230 = 0;
    local_250 = 0;
    uStack_248 = 0;
    uStack_244 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_238 = param_1;
    local_234 = param_2;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_260) &&
        ((FScriptContainerElement *)&local_260 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(FRHITexture **)pFVar3 = local_260;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_258;
    *(undefined8 *)(pFVar3 + 0x10) = local_250;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_248;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_240,uStack_244);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_23c;
    *(uint *)(pFVar3 + 0x28) = local_238;
    *(uint *)(pFVar3 + 0x2c) = local_234;
    pFVar3[0x30] = local_230._0_1_;
    pFVar3[0x31] = local_230._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_228;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_220;
    local_258 = 0;
    local_260 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->DepthProbeAtlasTexture).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_218 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    local_1e8 = 0;
    local_208 = 0;
    uStack_200 = 0;
    uStack_1fc = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    local_1f0 = param_1;
    local_1ec = param_2;
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_218) &&
        ((FScriptContainerElement *)&local_218 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(FRHITexture **)pFVar3 = local_218;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_210;
    *(undefined8 *)(pFVar3 + 0x10) = local_208;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_200;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_1f8,uStack_1fc);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_1f4;
    *(uint *)(pFVar3 + 0x28) = local_1f0;
    *(uint *)(pFVar3 + 0x2c) = local_1ec;
    pFVar3[0x30] = local_1e8._0_1_;
    pFVar3[0x31] = local_1e8._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_1e0;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_1d8;
    local_210 = 0;
    local_218 = (FRHITexture *)0x0;
  }
  pFVar4 = (this->ProbeAllocator).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    pFVar5 = (pFVar4->Buffer).Reference;
    local_1d0 = 0;
    local_1c8 = pFVar5;
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar5);
    }
    uStack_1b0 = 0;
    uStack_1ac = 0;
    local_1a0 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_1a8 = param_1;
    local_1a4 = param_2;
    if ((pFVar5 == (FRHIBuffer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xaa,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_1d0) &&
        ((FScriptContainerElement *)&local_1d0 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(undefined8 *)pFVar3 = local_1d0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(FRHIBuffer **)(pFVar3 + 8) = local_1c8;
    *(undefined8 *)(pFVar3 + 0x10) = local_1c0;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_1b8;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_1b0,uStack_1b4);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_1ac;
    *(uint *)(pFVar3 + 0x28) = local_1a8;
    *(uint *)(pFVar3 + 0x2c) = local_1a4;
    pFVar3[0x30] = local_1a0._0_1_;
    pFVar3[0x31] = local_1a0._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_198;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_190;
    local_1c8 = (FRHIBuffer *)0x0;
    local_1d0 = 0;
  }
  pFVar4 = (this->ProbeFreeListAllocator).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    pFVar5 = (pFVar4->Buffer).Reference;
    local_188 = 0;
    local_180 = pFVar5;
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar5);
    }
    uStack_168 = 0;
    uStack_164 = 0;
    local_158 = 0;
    local_178 = 0;
    uStack_170 = 0;
    uStack_16c = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = param_1;
    local_15c = param_2;
    if ((pFVar5 == (FRHIBuffer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xaa,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_188) &&
        ((FScriptContainerElement *)&local_188 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(undefined8 *)pFVar3 = local_188;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(FRHIBuffer **)(pFVar3 + 8) = local_180;
    *(undefined8 *)(pFVar3 + 0x10) = local_178;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_170;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_168,uStack_16c);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_164;
    *(uint *)(pFVar3 + 0x28) = local_160;
    *(uint *)(pFVar3 + 0x2c) = local_15c;
    pFVar3[0x30] = local_158._0_1_;
    pFVar3[0x31] = local_158._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_150;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_148;
    local_180 = (FRHIBuffer *)0x0;
    local_188 = 0;
  }
  pFVar4 = (this->ProbeFreeList).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    pFVar5 = (pFVar4->Buffer).Reference;
    local_140 = 0;
    local_138 = pFVar5;
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar5);
    }
    uStack_120 = 0;
    uStack_11c = 0;
    local_110 = 0;
    local_130 = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = param_1;
    local_114 = param_2;
    if ((pFVar5 == (FRHIBuffer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xaa,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(undefined8 *)pFVar3 = local_140;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(FRHIBuffer **)(pFVar3 + 8) = local_138;
    *(undefined8 *)(pFVar3 + 0x10) = local_130;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_128;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_120,uStack_124);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_11c;
    *(uint *)(pFVar3 + 0x28) = local_118;
    *(uint *)(pFVar3 + 0x2c) = local_114;
    pFVar3[0x30] = local_110._0_1_;
    pFVar3[0x31] = local_110._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_108;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_100;
    local_138 = (FRHIBuffer *)0x0;
    local_140 = 0;
  }
  pFVar4 = (this->ProbeLastUsedFrame).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    pFVar5 = (pFVar4->Buffer).Reference;
    local_f8 = 0;
    local_f0 = pFVar5;
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar5);
    }
    uStack_d8 = 0;
    uStack_d4 = 0;
    local_c8 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    uStack_dc = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = param_1;
    local_cc = param_2;
    if ((pFVar5 == (FRHIBuffer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xaa,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(undefined8 *)pFVar3 = local_f8;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(FRHIBuffer **)(pFVar3 + 8) = local_f0;
    *(undefined8 *)(pFVar3 + 0x10) = local_e8;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_e0;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_d8,uStack_dc);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_d4;
    *(uint *)(pFVar3 + 0x28) = local_d0;
    *(uint *)(pFVar3 + 0x2c) = local_cc;
    pFVar3[0x30] = local_c8._0_1_;
    pFVar3[0x31] = local_c8._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_c0;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_b8;
    local_f0 = (FRHIBuffer *)0x0;
    local_f8 = 0;
  }
  pFVar4 = (this->ProbeLastTracedFrame).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    pFVar5 = (pFVar4->Buffer).Reference;
    local_b0 = 0;
    local_a8 = pFVar5;
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar5);
    }
    uStack_90 = 0;
    uStack_8c = 0;
    local_80 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = param_1;
    local_84 = param_2;
    if ((pFVar5 == (FRHIBuffer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xaa,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(undefined8 *)pFVar3 = local_b0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(FRHIBuffer **)(pFVar3 + 8) = local_a8;
    *(undefined8 *)(pFVar3 + 0x10) = local_a0;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_98;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_90,uStack_94);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_8c;
    *(uint *)(pFVar3 + 0x28) = local_88;
    *(uint *)(pFVar3 + 0x2c) = local_84;
    pFVar3[0x30] = local_80._0_1_;
    pFVar3[0x31] = local_80._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_78;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_70;
    local_a8 = (FRHIBuffer *)0x0;
    local_b0 = 0;
  }
  pFVar4 = (this->ProbeWorldOffset).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    pFVar5 = (pFVar4->Buffer).Reference;
    local_68 = 0;
    local_60 = pFVar5;
    if (pFVar5 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar5);
    }
    uStack_48 = 0;
    uStack_44 = 0;
    local_38 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_4c = 0;
    local_30 = 0;
    uStack_28 = 0;
    local_40 = param_1;
    local_3c = param_2;
    if ((pFVar5 == (FRHIBuffer *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xaa,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    iVar8 = param_3->ArrayNum;
    if (iVar8 == param_3->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar8 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar8 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar8 * 0x48;
    *(undefined8 *)pFVar3 = local_68;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(FRHIBuffer **)(pFVar3 + 8) = local_60;
    *(undefined8 *)(pFVar3 + 0x10) = local_58;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_50;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_48,uStack_4c);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_44;
    *(uint *)(pFVar3 + 0x28) = local_40;
    *(uint *)(pFVar3 + 0x2c) = local_3c;
    pFVar3[0x30] = local_38._0_1_;
    pFVar3[0x31] = local_38._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_30;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_28;
  }
  return;
}

// ~FRadianceCacheState @ 145405a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FRadianceCacheState::~FRadianceCacheState(FRadianceCacheState *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  IPooledRenderTarget *pIVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  
  pFVar2 = (this->ProbeWorldOffset).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->ProbeLastTracedFrame).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->ProbeLastUsedFrame).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->ProbeFreeList).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->ProbeFreeListAllocator).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->ProbeAllocator).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pIVar3 = (this->DepthProbeAtlasTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->ProbeOcclusionAtlas).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->FinalIrradianceAtlas).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->FinalSkyVisibilityAtlas).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->FinalRadianceAtlas).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->SkyVisibilityProbeAtlasTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->RadianceProbeAtlasTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->RadianceProbeIndirectionTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pFVar4 = (this->Clipmaps).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// GetGPUSizeBytes @ 1454f5670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall FRadianceCacheState::GetGPUSizeBytes(FRadianceCacheState *this,bool param_1)

{
  FRDGPooledBuffer *pFVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  ulong64 uVar8;
  ulong64 uVar9;
  ulong64 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  pFVar1 = (this->ProbeAllocator).Reference;
  uVar2 = 0;
  uVar11 = 0;
  uVar15 = uVar11;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar15 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar15 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->ProbeFreeListAllocator).Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar2 = (ulonglong)((pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement);
  }
  if (((param_1) && ((int)uVar2 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->ProbeFreeList).Reference;
  uVar13 = uVar11;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar13 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar13 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->ProbeLastUsedFrame).Reference;
  uVar12 = uVar11;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar12 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar12 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->ProbeLastTracedFrame).Reference;
  uVar14 = uVar11;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar14 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar14 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->ProbeWorldOffset).Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar11 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar11 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  uVar3 = GetRenderTargetGPUSizeBytes(&this->DepthProbeAtlasTexture,param_1);
  uVar4 = GetRenderTargetGPUSizeBytes(&this->ProbeOcclusionAtlas,param_1);
  uVar5 = GetRenderTargetGPUSizeBytes(&this->FinalIrradianceAtlas,param_1);
  uVar6 = GetRenderTargetGPUSizeBytes(&this->FinalSkyVisibilityAtlas,param_1);
  uVar7 = GetRenderTargetGPUSizeBytes(&this->FinalRadianceAtlas,param_1);
  uVar8 = GetRenderTargetGPUSizeBytes(&this->SkyVisibilityProbeAtlasTexture,param_1);
  uVar9 = GetRenderTargetGPUSizeBytes(&this->RadianceProbeAtlasTexture,param_1);
  uVar10 = GetRenderTargetGPUSizeBytes(&this->RadianceProbeIndirectionTexture,param_1);
  return (ulonglong)uVar15 +
         uVar2 + uVar3 + uVar4 + uVar5 + uVar6 + uVar7 + uVar8 + uVar9 +
         uVar11 + uVar10 + (ulonglong)uVar14 + (ulonglong)uVar12 + (ulonglong)uVar13;
}

