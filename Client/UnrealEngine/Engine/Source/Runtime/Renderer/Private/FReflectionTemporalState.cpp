// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// SafeRelease @ 144b45ed0

void __thiscall FReflectionTemporalState::SafeRelease(FReflectionTemporalState *this)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = (this->SpecularAndSecondMomentHistory).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->SpecularAndSecondMomentHistory).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->NumFramesAccumulatedHistory).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->NumFramesAccumulatedHistory).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->LayerSceneDepthHistory).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->LayerSceneDepthHistory).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  pIVar1 = (this->LayerSceneNormalHistory).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    (this->LayerSceneNormalHistory).Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar1->_padding_ + 0x38))();
  }
  return;
}

// AddCrossGPUTransfers @ 144d54e20

/* WARNING: Removing unreachable block (ram,0x000144d552f9) */
/* WARNING: Removing unreachable block (ram,0x000144d54fe0) */
/* WARNING: Removing unreachable block (ram,0x000144d5516d) */
/* WARNING: Removing unreachable block (ram,0x000144d55485) */
/* WARNING: Removing unreachable block (ram,0x000144d55307) */
/* WARNING: Removing unreachable block (ram,0x000144d54fef) */
/* WARNING: Removing unreachable block (ram,0x000144d5517b) */
/* WARNING: Removing unreachable block (ram,0x000144d55493) */

void __thiscall
FReflectionTemporalState::AddCrossGPUTransfers
          (FReflectionTemporalState *this,uint param_1,uint param_2,
          TArray<FTransferResourceParams,TSizedDefaultAllocator<32>_> *param_3)

{
  IPooledRenderTarget *pIVar1;
  FRHITexture *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRHITexture *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  uint local_110;
  uint local_10c;
  undefined2 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  FRHITexture *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  uint local_c4;
  undefined2 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FRHITexture *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  uint local_7c;
  undefined2 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FRHITexture *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pIVar1 = (this->SpecularAndSecondMomentHistory).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_138 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_130 = 0;
    uStack_118 = 0;
    uStack_114 = 0;
    local_108 = 0;
    local_128 = 0;
    uStack_120 = 0;
    uStack_11c = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = param_1;
    local_10c = param_2;
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
    if (((pFVar3 <= (FScriptContainerElement *)&local_138) &&
        ((FScriptContainerElement *)&local_138 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    *(FRHITexture **)pFVar3 = local_138;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_130;
    *(undefined8 *)(pFVar3 + 0x10) = local_128;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_120;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_118,uStack_11c);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_114;
    *(uint *)(pFVar3 + 0x28) = local_110;
    *(uint *)(pFVar3 + 0x2c) = local_10c;
    pFVar3[0x30] = local_108._0_1_;
    pFVar3[0x31] = local_108._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_100;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_f8;
    local_130 = 0;
    local_138 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->NumFramesAccumulatedHistory).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_f0 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_e8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0;
    local_c0 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    uStack_d4 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = param_1;
    local_c4 = param_2;
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
    if (((pFVar3 <= (FScriptContainerElement *)&local_f0) &&
        ((FScriptContainerElement *)&local_f0 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    *(FRHITexture **)pFVar3 = local_f0;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_e8;
    *(undefined8 *)(pFVar3 + 0x10) = local_e0;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_d8;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_d0,uStack_d4);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_cc;
    *(uint *)(pFVar3 + 0x28) = local_c8;
    *(uint *)(pFVar3 + 0x2c) = local_c4;
    pFVar3[0x30] = local_c0._0_1_;
    pFVar3[0x31] = local_c0._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_b8;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_b0;
    local_e8 = 0;
    local_f0 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->LayerSceneDepthHistory).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_a8 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_a0 = 0;
    uStack_88 = 0;
    uStack_84 = 0;
    local_78 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = param_1;
    local_7c = param_2;
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
    if (((pFVar3 <= (FScriptContainerElement *)&local_a8) &&
        ((FScriptContainerElement *)&local_a8 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    *(FRHITexture **)pFVar3 = local_a8;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_a0;
    *(undefined8 *)(pFVar3 + 0x10) = local_98;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_90;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_88,uStack_8c);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_84;
    *(uint *)(pFVar3 + 0x28) = local_80;
    *(uint *)(pFVar3 + 0x2c) = local_7c;
    pFVar3[0x30] = local_78._0_1_;
    pFVar3[0x31] = local_78._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_70;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_68;
    local_a0 = 0;
    local_a8 = (FRHITexture *)0x0;
  }
  pIVar1 = (this->LayerSceneNormalHistory).Reference;
  if (pIVar1 != (IPooledRenderTarget *)0x0) {
    pFVar2 = (pIVar1->RenderTargetItem).TargetableTexture.Reference;
    local_60 = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    local_58 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    local_30 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = param_1;
    local_34 = param_2;
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
    if (((pFVar3 <= (FScriptContainerElement *)&local_60) &&
        ((FScriptContainerElement *)&local_60 < pFVar3 + (longlong)param_3->ArrayMax * 0x48)) &&
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
    *(FRHITexture **)pFVar3 = local_60;
    *(undefined8 *)(pFVar3 + 8) = 0;
    *(undefined8 *)(pFVar3 + 8) = local_58;
    *(undefined8 *)(pFVar3 + 0x10) = local_50;
    *(undefined4 *)(pFVar3 + 0x18) = uStack_48;
    *(ulonglong *)(pFVar3 + 0x1c) = CONCAT44(uStack_40,uStack_44);
    *(undefined4 *)(pFVar3 + 0x24) = uStack_3c;
    *(uint *)(pFVar3 + 0x28) = local_38;
    *(uint *)(pFVar3 + 0x2c) = local_34;
    pFVar3[0x30] = local_30._0_1_;
    pFVar3[0x31] = local_30._1_1_;
    *(undefined8 *)(pFVar3 + 0x38) = local_28;
    *(undefined8 *)(pFVar3 + 0x40) = uStack_20;
  }
  return;
}

// GetGPUSizeBytes @ 1454f5970

ulong64 __thiscall
FReflectionTemporalState::GetGPUSizeBytes(FReflectionTemporalState *this,bool param_1)

{
  ulong64 uVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  ulong64 uVar4;
  
  uVar1 = GetRenderTargetGPUSizeBytes(&this->LayerSceneNormalHistory,param_1);
  uVar2 = GetRenderTargetGPUSizeBytes(&this->LayerSceneDepthHistory,param_1);
  uVar3 = GetRenderTargetGPUSizeBytes(&this->NumFramesAccumulatedHistory,param_1);
  uVar4 = GetRenderTargetGPUSizeBytes(&this->SpecularAndSecondMomentHistory,param_1);
  return uVar4 + uVar1 + uVar2 + uVar3;
}

