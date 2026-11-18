// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Initialize<FVolumetricLightmapBrickTextureSet> @ 1483432c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVolumetricLightmapBrickTextureSet::Initialize<FVolumetricLightmapBrickTextureSet>
          (FVolumetricLightmapBrickTextureSet *this,TIntVector3<int> *param_1,
          FVolumetricLightmapBrickTextureSet *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TIntVector3<int>_u_0 local_58;
  TIntVector3<int>_u_0 local_48;
  TIntVector3<int>_u_0 local_38;
  TIntVector3<int>_u_0 local_28;
  
  bVar3 = IsInRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (param_1->field0_0x0)._s_0.Z;
  *(undefined8 *)&(this->BrickDataDimensions).field0_0x0 = *(undefined8 *)&param_1->field0_0x0;
  (this->BrickDataDimensions).field0_0x0._s_0.Z = iVar1;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_2->_padding_ + 4);
  local_58._0_8_ = *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
  local_58._s_0.Z = (this->BrickDataDimensions).field0_0x0._s_0.Z;
  FVolumetricLightmapDataLayer::CreateTargetTexture
            ((FVolumetricLightmapDataLayer *)this,
             (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (TIntVector3<int> *)&local_58._s_0);
  FVolumetricLightmapDataLayer::CreateUAV
            ((FVolumetricLightmapDataLayer *)this,
             (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  uVar4 = 0;
  do {
    local_48._s_0.Z = (this->BrickDataDimensions).field0_0x0._s_0.Z;
    local_48._0_8_ = *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
    FVolumetricLightmapDataLayer::CreateTargetTexture
              ((FVolumetricLightmapDataLayer *)(&this->_padding_ + (longlong)(int)uVar4 * 7),
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (TIntVector3<int> *)&local_48._s_0);
    FVolumetricLightmapDataLayer::CreateUAV
              ((FVolumetricLightmapDataLayer *)(&this->_padding_ + (longlong)(int)uVar4 * 7),
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 6);
  if (param_2->_padding_ != 0) {
    local_38._0_8_ = *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
    local_38._s_0.Z = (this->BrickDataDimensions).field0_0x0._s_0.Z;
    FVolumetricLightmapDataLayer::CreateTargetTexture
              ((FVolumetricLightmapDataLayer *)&this->_padding_,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (TIntVector3<int> *)&local_38._s_0);
    FVolumetricLightmapDataLayer::CreateUAV
              ((FVolumetricLightmapDataLayer *)&this->_padding_,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  }
  local_28._0_8_ = *(undefined8 *)&(this->BrickDataDimensions).field0_0x0;
  local_28._s_0.Z = (this->BrickDataDimensions).field0_0x0._s_0.Z;
  FVolumetricLightmapDataLayer::CreateTargetTexture
            ((FVolumetricLightmapDataLayer *)&this->_padding_,
             (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (TIntVector3<int> *)&local_28._s_0);
  FVolumetricLightmapDataLayer::CreateUAV
            ((FVolumetricLightmapDataLayer *)&this->_padding_,
             (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  return;
}

// FVolumetricLightmapBrickTextureSet @ 14834c080

FVolumetricLightmapBrickTextureSet * __thiscall
FVolumetricLightmapBrickTextureSet::FVolumetricLightmapBrickTextureSet
          (FVolumetricLightmapBrickTextureSet *this,FVolumetricLightmapBrickTextureSet *param_1)

{
  longlong *plVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  void *_Src;
  FRHIResource *pFVar4;
  int *piVar5;
  longlong *plVar6;
  longlong lVar7;
  FVolumetricLightmapBrickTextureSet *pFVar8;
  longlong lVar9;
  
  FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
            ((FVolumetricLightmapDataLayer *)this,(FVolumetricLightmapDataLayer *)param_1);
  lVar7 = 6;
  lVar9 = (longlong)this - (longlong)param_1;
  plVar6 = &param_1->_padding_;
  pFVar8 = this;
  do {
    pFVar8 = (FVolumetricLightmapBrickTextureSet *)&pFVar8->_padding_;
    *(undefined8 *)(lVar9 + (longlong)plVar6) = 0;
    pFVar2 = (ForAnyElementType *)(lVar9 + (longlong)plVar6);
    *(undefined ***)pFVar8 = &___7FVolumetricLightmapDataLayer__6B_;
    iVar3 = (int)plVar6[1];
    lVar7 = lVar7 + -1;
    _Src = (void *)*plVar6;
    piVar5 = (int *)(lVar9 + 0xc + (longlong)plVar6);
    *(int *)&pFVar2[1].Data = iVar3;
    if (iVar3 == 0) {
      *piVar5 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar3,0,pFVar2,iVar3,piVar5);
      memcpy(pFVar2->Data,_Src,(longlong)iVar3);
    }
    *(int *)&pFVar2[2].Data = (int)plVar6[2];
    *(undefined1 *)((longlong)&pFVar2[2].Data + 4) = *(undefined1 *)((longlong)plVar6 + 0x14);
    *(undefined8 *)((longlong)plVar6 + lVar9 + 0x18) = 0;
    pFVar4 = (FRHIResource *)plVar6[3];
    *(FRHIResource **)((longlong)plVar6 + lVar9 + 0x18) = pFVar4;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar4);
    }
    *(undefined8 *)((longlong)plVar6 + lVar9 + 0x20) = 0;
    pFVar4 = (FRHIResource *)plVar6[4];
    *(FRHIResource **)((longlong)plVar6 + lVar9 + 0x20) = pFVar4;
    if (pFVar4 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar4);
    }
    plVar1 = plVar6 + 5;
    plVar6 = plVar6 + 7;
    *(char *)&pFVar2[5].Data = (char)*plVar1;
  } while (lVar7 != 0);
  FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
            ((FVolumetricLightmapDataLayer *)&this->_padding_,
             (FVolumetricLightmapDataLayer *)&param_1->_padding_);
  FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
            ((FVolumetricLightmapDataLayer *)&this->_padding_,
             (FVolumetricLightmapDataLayer *)&param_1->_padding_);
  *(undefined8 *)&(this->BrickDataDimensions).field0_0x0 =
       *(undefined8 *)&(param_1->BrickDataDimensions).field0_0x0;
  (this->BrickDataDimensions).field0_0x0._s_0.Z = (param_1->BrickDataDimensions).field0_0x0._s_0.Z;
  return this;
}

