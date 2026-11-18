// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// SafeRelease @ 144b46090

void __thiscall FScreenProbeGatherTemporalState::SafeRelease(FScreenProbeGatherTemporalState *this)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->DiffuseIndirectHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->DiffuseIndirectHistoryRT).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->BackfaceDiffuseIndirectHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->BackfaceDiffuseIndirectHistoryRT).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->RoughSpecularIndirectHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->RoughSpecularIndirectHistoryRT).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->FastUpdateMode_NumFramesAccumulatedHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->FastUpdateMode_NumFramesAccumulatedHistoryRT).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ShortRangeAOHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->ShortRangeAOHistoryRT).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ShortRangeGIHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->ShortRangeGIHistoryRT).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->HistoryScreenProbeSceneDepth).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->HistoryScreenProbeSceneDepth).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->HistoryScreenProbeTranslatedWorldPosition).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->HistoryScreenProbeTranslatedWorldPosition).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ProbeHistoryScreenProbeRadiance).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->ProbeHistoryScreenProbeRadiance).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ImportanceSamplingHistoryScreenProbeRadiance).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->ImportanceSamplingHistoryScreenProbeRadiance).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  return;
}

// AddCrossGPUTransfers @ 144d554c0

/* WARNING: Removing unreachable block (ram,0x000144d56282) */
/* WARNING: Removing unreachable block (ram,0x000144d55ec2) */
/* WARNING: Removing unreachable block (ram,0x000144d55b29) */
/* WARNING: Removing unreachable block (ram,0x000144d55811) */
/* WARNING: Removing unreachable block (ram,0x000144d55684) */
/* WARNING: Removing unreachable block (ram,0x000144d5599d) */
/* WARNING: Removing unreachable block (ram,0x000144d55ce5) */
/* WARNING: Removing unreachable block (ram,0x000144d560a2) */
/* WARNING: Removing unreachable block (ram,0x000144d56462) */
/* WARNING: Removing unreachable block (ram,0x000144d56293) */
/* WARNING: Removing unreachable block (ram,0x000144d55ed3) */
/* WARNING: Removing unreachable block (ram,0x000144d55b37) */
/* WARNING: Removing unreachable block (ram,0x000144d5581f) */
/* WARNING: Removing unreachable block (ram,0x000144d55693) */
/* WARNING: Removing unreachable block (ram,0x000144d559ab) */
/* WARNING: Removing unreachable block (ram,0x000144d55cf3) */
/* WARNING: Removing unreachable block (ram,0x000144d560b3) */
/* WARNING: Removing unreachable block (ram,0x000144d56473) */

void __thiscall
FScreenProbeGatherTemporalState::AddCrossGPUTransfers
          (FScreenProbeGatherTemporalState *this,uint param_1,uint param_2,
          TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *param_3)

{
  IPooledRenderTarget *pIVar1;
  FRHITexture *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
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
  FRHITexture *local_1d0;
  undefined8 local_1c8;
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
  FRHITexture *local_188;
  undefined8 local_180;
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
  FRHITexture *local_140;
  undefined8 local_138;
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
  FRHITexture *local_f8;
  undefined8 local_f0;
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
  FRHITexture *local_b0;
  undefined8 local_a8;
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
  FRHITexture *local_68;
  undefined8 local_60;
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
  
  pIVar1 = (this->DiffuseIndirectHistoryRT).Reference;
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
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_2a8) &&
        ((FScriptContainerElement *)&local_2a8 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
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
  pIVar1 = (this->RoughSpecularIndirectHistoryRT).Reference;
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
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_260) &&
        ((FScriptContainerElement *)&local_260 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
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
  pIVar1 = (this->FastUpdateMode_NumFramesAccumulatedHistoryRT).Reference;
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
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_218) &&
        ((FScriptContainerElement *)&local_218 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
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
  pIVar1 = (this->ShortRangeAOHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_1d0 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_1c8 = 0;
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
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_1d0) &&
        ((FScriptContainerElement *)&local_1d0 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
    *(FRHITexture **)pFVar3 = local_1d0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_1c8;
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
    local_1c8 = 0;
    local_1d0 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->ShortRangeGIHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_188 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_180 = 0;
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
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_188) &&
        ((FScriptContainerElement *)&local_188 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
    *(FRHITexture **)pFVar3 = local_188;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_180;
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
    local_180 = 0;
    local_188 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->HistoryScreenProbeSceneDepth).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_140 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_138 = 0;
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
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_140) &&
        ((FScriptContainerElement *)&local_140 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
    *(FRHITexture **)pFVar3 = local_140;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_138;
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
    local_138 = 0;
    local_140 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->HistoryScreenProbeTranslatedWorldPosition).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_f8 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_f0 = 0;
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
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
    *(FRHITexture **)pFVar3 = local_f8;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_f0;
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
    local_f0 = 0;
    local_f8 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->ProbeHistoryScreenProbeRadiance).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_b0 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_a8 = 0;
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
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
    *(FRHITexture **)pFVar3 = local_b0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_a8;
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
    local_a8 = 0;
    local_b0 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->ImportanceSamplingHistoryScreenProbeRadiance).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_68 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_60 = 0;
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
    if ((pFVar2 == (FRHITexture *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InTexture",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                           ,0xa4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (param_3->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = param_3->ArrayNum;
    if (iVar6 == param_3->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x848,&param_3->AllocatorInstance,&param_3->ArrayMax);
    }
    param_3->ArrayNum = iVar6 + 1;
    pFVar3 = (param_3->AllocatorInstance).Data;
    *(undefined8 *)(pFVar3 + (longlong)iVar6 * 0x48) = 0;
    pFVar3 = pFVar3 + (longlong)iVar6 * 0x48;
    *(FRHITexture **)pFVar3 = local_68;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_60;
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

// ~FScreenProbeGatherTemporalState @ 1454079f0

void __thiscall
FScreenProbeGatherTemporalState::~FScreenProbeGatherTemporalState
          (FScreenProbeGatherTemporalState *this)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->ImportanceSamplingHistoryScreenProbeRadiance).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ProbeHistoryScreenProbeRadiance).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->HistoryScreenProbeTranslatedWorldPosition).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->HistoryScreenProbeSceneDepth).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ShortRangeGIHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->ShortRangeAOHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->FastUpdateMode_NumFramesAccumulatedHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->RoughSpecularIndirectHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->BackfaceDiffuseIndirectHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->DiffuseIndirectHistoryRT).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145407a9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pIVar1->_padding_ + 0x38))();
    return;
  }
  return;
}

// GetGPUSizeBytes @ 1454f6570

ulong64 __thiscall
FScreenProbeGatherTemporalState::GetGPUSizeBytes(FScreenProbeGatherTemporalState *this,bool param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  ulong64 uVar7;
  
  uVar1 = GetRenderTargetGPUSizeBytes(&this->ImportanceSamplingHistoryScreenProbeRadiance,param_1);
  uVar2 = GetRenderTargetGPUSizeBytes(&this->ProbeHistoryScreenProbeRadiance,param_1);
  uVar3 = GetRenderTargetGPUSizeBytes(&this->HistoryScreenProbeTranslatedWorldPosition,param_1);
  uVar4 = GetRenderTargetGPUSizeBytes(&this->HistoryScreenProbeSceneDepth,param_1);
  uVar5 = GetRenderTargetGPUSizeBytes(&this->FastUpdateMode_NumFramesAccumulatedHistoryRT,param_1);
  uVar6 = GetRenderTargetGPUSizeBytes(&this->RoughSpecularIndirectHistoryRT,param_1);
  uVar7 = GetRenderTargetGPUSizeBytes(&this->DiffuseIndirectHistoryRT,param_1);
  return uVar7 + uVar1 + uVar2 + uVar3 + uVar4 + uVar5 + uVar6;
}

