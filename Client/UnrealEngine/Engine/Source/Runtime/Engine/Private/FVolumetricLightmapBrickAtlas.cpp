// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ReleaseRHI @ 148336f40

void __thiscall FVolumetricLightmapBrickAtlas::ReleaseRHI(FVolumetricLightmapBrickAtlas *this)

{
  FRHIResource *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (this->Allocations).ArrayNum;
  lVar7 = (longlong)local_20;
  uVar6 = 0;
  pFVar2 = (this->Allocations).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
    iVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar2,lVar7 << 4);
    iVar3 = local_20;
  }
  pFVar2 = local_28.Data + (longlong)iVar3 * 0x10;
  FVar8.Data = local_28.Data;
  iVar4 = iVar3;
  while( true ) {
    if (iVar4 != iVar3) {
      `TCheckedPointerIterator<FVolumetricLightmapBrickAtlas::Allocation,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar8.Data == pFVar2) break;
    Remove(this,*(FPrecomputedVolumetricLightmapData **)FVar8.Data);
    FVar8.Data = FVar8.Data + 0x10;
    iVar4 = local_20;
  }
  pFVar1 = (FRHIResource *)(this->TextureSet)._padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->TextureSet)._padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  plVar9 = &(this->TextureSet)._padding_;
  uVar5 = uVar6;
  do {
    pFVar1 = (FRHIResource *)*plVar9;
    if (pFVar1 != (FRHIResource *)0x0) {
      *plVar9 = 0;
      FRHIResource::Release(pFVar1);
    }
    uVar5 = uVar5 + 1;
    plVar9 = plVar9 + 7;
  } while (uVar5 < 6);
  pFVar1 = (FRHIResource *)(this->TextureSet)._padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->TextureSet)._padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->TextureSet)._padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->TextureSet)._padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->TextureSet)._padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->TextureSet)._padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  plVar9 = &(this->TextureSet)._padding_;
  do {
    pFVar1 = (FRHIResource *)*plVar9;
    if (pFVar1 != (FRHIResource *)0x0) {
      *plVar9 = 0;
      FRHIResource::Release(pFVar1);
    }
    uVar6 = uVar6 + 1;
    plVar9 = plVar9 + 7;
  } while (uVar6 < 6);
  pFVar1 = (FRHIResource *)(this->TextureSet)._padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->TextureSet)._padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->TextureSet)._padding_;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this->TextureSet)._padding_ = 0;
    FRHIResource::Release(pFVar1);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

// FVolumetricLightmapBrickAtlas @ 14834c030

FVolumetricLightmapBrickAtlas * __thiscall
FVolumetricLightmapBrickAtlas::FVolumetricLightmapBrickAtlas(FVolumetricLightmapBrickAtlas *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FVolumetricLightmapBrickAtlas__6B_;
  FVolumetricLightmapBasicBrickDataLayers::FVolumetricLightmapBasicBrickDataLayers
            ((FVolumetricLightmapBasicBrickDataLayers *)&this->TextureSet);
  this->PaddedBrickSize = 5;
  (this->Allocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocations).ArrayNum = 0;
  (this->Allocations).ArrayMax = 0;
  this->bInitialized = false;
  return this;
}

// Insert @ 14838fa40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FVolumetricLightmapBrickAtlas::Insert
          (FVolumetricLightmapBrickAtlas *this,int param_1,
          FPrecomputedVolumetricLightmapData *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  void *pvVar3;
  FRHIResource *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  FVolumetricLightmapBrickAtlas *pFVar6;
  bool bVar7;
  int iVar8;
  Type TVar9;
  uint uVar10;
  int *piVar11;
  FVolumetricLightmapBrickTextureSet *pFVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  undefined8 *puVar18;
  uint uVar19;
  longlong lVar20;
  ForAnyElementType *pFVar21;
  TArray<FVolumetricLightmapBrickAtlas::Allocation,TSizedDefaultAllocator<32>_> *pTVar22;
  longlong *plVar23;
  FPrecomputedVolumetricLightmapData *pFVar24;
  longlong lVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  FVolumetricLightmapBrickAtlas *pFVar29;
  int iVar30;
  undefined1 auStackY_bc8 [32];
  ForAnyElementType local_b78;
  undefined8 local_b70;
  undefined1 local_b68 [4];
  int local_b64;
  FVolumetricLightmapBrickAtlas *local_b60;
  uint local_b58;
  longlong local_b50;
  FPrecomputedVolumetricLightmapData *local_b48;
  longlong local_b40;
  FVolumetricLightmapBrickTextureSet *local_b38;
  FPrecomputedVolumetricLightmapData *local_b30;
  undefined4 uStack_b28;
  int iStack_b24;
  FPrecomputedVolumetricLightmapData *local_b20;
  int iStack_b18;
  int iStack_b14;
  undefined8 local_b10;
  undefined4 uStack_b08;
  int iStack_b04;
  longlong local_b00;
  longlong local_af8;
  TArray<FVolumetricLightmapBrickAtlas::Allocation,TSizedDefaultAllocator<32>_> *local_af0;
  TIntVector3<int>_u_0 local_ae8;
  TIntVector3<int>_u_0 local_ad8;
  TIntVector3<int>_u_0 local_ac8;
  TIntVector3<int>_u_0 local_ab8;
  TIntVector3<int>_u_0 local_aa8;
  TIntVector3<int>_u_0 local_a98;
  FRHITransitionInfo *local_a88;
  undefined4 uStack_a80;
  undefined4 uStack_a7c;
  TArrayView<FRHITransitionInfo_const_,int> local_a78;
  undefined4 local_a68;
  char local_a48 [16];
  undefined1 local_a38 [448];
  FVolumetricLightmapDataLayer local_878;
  TIntVector3<int>_u_0 local_840;
  undefined1 local_830 [448];
  FVolumetricLightmapDataLayer local_670;
  TIntVector3<int>_u_0 local_638;
  FVolumetricLightmapBrickTextureSet local_628;
  undefined1 local_418 [448];
  FVolumetricLightmapDataLayer local_258;
  TIntVector3<int>_u_0 local_220 [2];
  FRHITransitionInfo local_208;
  undefined4 local_1d8;
  undefined2 local_1d4;
  longlong local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  longlong local_1a0;
  undefined1 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char acStack_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_bc8;
  pTVar22 = &this->Allocations;
  pFVar17 = (pTVar22->AllocatorInstance).Data;
  pFVar27 = pFVar17 + (longlong)(this->Allocations).ArrayNum * 0x10;
  lVar25 = (longlong)param_1;
  for (; local_b60 = this, local_b58 = param_1, local_b48 = param_2, local_af0 = pTVar22,
      pFVar17 != pFVar27; pFVar17 = pFVar17 + 0x10) {
    if (*(FPrecomputedVolumetricLightmapData **)pFVar17 == param_2) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Allocations.FindByPredicate([Data](const Allocation& Other) { return Other.Data == Data; })"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                         ,0x3d0,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      break;
    }
  }
  uVar19 = 0;
  if (this->bInitialized == false) {
    *(char *)((longlong)&this->_padding_ + 4) = (char)GMaxRHIFeatureLevel;
    if ((param_2->BrickSize < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data->BrickSize > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                           ,0x3d9,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar12 = &this->TextureSet;
    this->PaddedBrickSize = param_2->BrickSize + 1;
    uVar1 = *(undefined8 *)&(param_2->BrickDataDimensions).field0_0x0;
    iVar15 = (param_2->BrickDataDimensions).field0_0x0._s_0.Z;
    bVar7 = IsInRenderingThread();
    if ((!bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                           ,0x1594,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined8 *)&(this->TextureSet).BrickDataDimensions.field0_0x0 = uVar1;
    (this->TextureSet).BrickDataDimensions.field0_0x0._s_0.Z = iVar15;
    *(undefined1 *)((longlong)&(this->TextureSet)._padding_ + 4) = (param_2->BrickData).field_0x1c;
    *(undefined1 *)((longlong)&(this->TextureSet)._padding_ + 4) = (param_2->BrickData).field_0x1a4;
    *(undefined1 *)((longlong)&(this->TextureSet)._padding_ + 4) = (param_2->BrickData).field_0x1dc;
    *(undefined1 *)((longlong)&(this->TextureSet)._padding_ + 4) = (param_2->BrickData).field_0x54;
    *(undefined1 *)((longlong)&(this->TextureSet)._padding_ + 4) = (param_2->BrickData).field_0x8c;
    *(undefined1 *)((longlong)&(this->TextureSet)._padding_ + 4) = (param_2->BrickData).field_0xc4;
    *(undefined1 *)((longlong)&(this->TextureSet)._padding_ + 4) = (param_2->BrickData).field_0xfc;
    *(undefined1 *)((longlong)&(this->TextureSet)._padding_ + 4) = (param_2->BrickData).field_0x134;
    *(undefined1 *)((longlong)&(this->TextureSet)._padding_ + 4) = (param_2->BrickData).field_0x16c;
    local_ad8._0_8_ = *(undefined8 *)&(this->TextureSet).BrickDataDimensions.field0_0x0;
    local_ad8._s_0.Z = (this->TextureSet).BrickDataDimensions.field0_0x0._s_0.Z;
    FVolumetricLightmapDataLayer::CreateTargetTexture
              ((FVolumetricLightmapDataLayer *)pFVar12,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (TIntVector3<int> *)&local_ad8._s_0);
    FVolumetricLightmapDataLayer::CreateUAV
              ((FVolumetricLightmapDataLayer *)pFVar12,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    uVar26 = 0;
    do {
      local_ac8._s_0.Z = (this->TextureSet).BrickDataDimensions.field0_0x0._s_0.Z;
      local_ac8._0_8_ = *(undefined8 *)&(this->TextureSet).BrickDataDimensions.field0_0x0;
      FVolumetricLightmapDataLayer::CreateTargetTexture
                ((FVolumetricLightmapDataLayer *)(&pFVar12->_padding_ + (longlong)(int)uVar26 * 7),
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (TIntVector3<int> *)&local_ac8._s_0);
      FVolumetricLightmapDataLayer::CreateUAV
                ((FVolumetricLightmapDataLayer *)(&pFVar12->_padding_ + (longlong)(int)uVar26 * 7),
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
      uVar26 = uVar26 + 1;
    } while (uVar26 < 6);
    if (*(longlong *)&(local_b48->BrickData).field_0x1a8 != 0) {
      local_ab8._0_8_ = *(undefined8 *)&(this->TextureSet).BrickDataDimensions.field0_0x0;
      local_ab8._s_0.Z = (this->TextureSet).BrickDataDimensions.field0_0x0._s_0.Z;
      FVolumetricLightmapDataLayer::CreateTargetTexture
                ((FVolumetricLightmapDataLayer *)&(this->TextureSet)._padding_,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                 (TIntVector3<int> *)&local_ab8._s_0);
      FVolumetricLightmapDataLayer::CreateUAV
                ((FVolumetricLightmapDataLayer *)&(this->TextureSet)._padding_,
                 (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    }
    local_aa8._0_8_ = *(undefined8 *)&(this->TextureSet).BrickDataDimensions.field0_0x0;
    local_aa8._s_0.Z = (this->TextureSet).BrickDataDimensions.field0_0x0._s_0.Z;
    FVolumetricLightmapDataLayer::CreateTargetTexture
              ((FVolumetricLightmapDataLayer *)&(this->TextureSet)._padding_,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (TIntVector3<int> *)&local_aa8._s_0);
    FVolumetricLightmapDataLayer::CreateUAV
              ((FVolumetricLightmapDataLayer *)&(this->TextureSet)._padding_,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
    this->bInitialized = true;
  }
  else {
    if ((*(char *)((longlong)&(this->TextureSet)._padding_ + 4) != (param_2->BrickData).field_0x1c)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TextureSet.AmbientVector.Format == Data->BrickData.AmbientVector.Format"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                              ,0x3e1,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)&(this->TextureSet)._padding_ + 4) != (param_2->BrickData).field_0x54)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TextureSet.SHCoefficients[i].Format == Data->BrickData.SHCoefficients[i].Format"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                              ,0x3e4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)&(this->TextureSet)._padding_ + 4) != (param_2->BrickData).field_0x8c)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TextureSet.SHCoefficients[i].Format == Data->BrickData.SHCoefficients[i].Format"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                              ,0x3e4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)&(this->TextureSet)._padding_ + 4) != (param_2->BrickData).field_0xc4)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TextureSet.SHCoefficients[i].Format == Data->BrickData.SHCoefficients[i].Format"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                              ,0x3e4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)&(this->TextureSet)._padding_ + 4) != (param_2->BrickData).field_0xfc)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TextureSet.SHCoefficients[i].Format == Data->BrickData.SHCoefficients[i].Format"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                              ,0x3e4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)&(this->TextureSet)._padding_ + 4) != (param_2->BrickData).field_0x134)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TextureSet.SHCoefficients[i].Format == Data->BrickData.SHCoefficients[i].Format"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                              ,0x3e4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)&(this->TextureSet)._padding_ + 4) != (param_2->BrickData).field_0x16c)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TextureSet.SHCoefficients[i].Format == Data->BrickData.SHCoefficients[i].Format"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                              ,0x3e4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)&(this->TextureSet)._padding_ + 4) != (param_2->BrickData).field_0x1a4)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TextureSet.SkyBentNormal.Format == Data->BrickData.SkyBentNormal.Format"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                              ,0x3e6,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((*(char *)((longlong)&(this->TextureSet)._padding_ + 4) != (param_2->BrickData).field_0x1dc)
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("TextureSet.DirectionalLightShadowing.Format == Data->BrickData.DirectionalLightShadowing.Format"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmap.cpp"
                              ,999,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((this->TextureSet)._padding_ != 0) || (*(longlong *)&(param_2->BrickData).field_0x1a8 == 0)
       ) goto LAB_1483902f2;
    local_a98._0_8_ = *(undefined8 *)&(this->TextureSet).BrickDataDimensions.field0_0x0;
    local_a98._s_0.Z = (this->TextureSet).BrickDataDimensions.field0_0x0._s_0.Z;
    FVolumetricLightmapDataLayer::CreateTargetTexture
              ((FVolumetricLightmapDataLayer *)&(this->TextureSet)._padding_,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (TIntVector3<int> *)&local_a98._s_0);
    FVolumetricLightmapDataLayer::CreateUAV
              ((FVolumetricLightmapDataLayer *)&(this->TextureSet)._padding_,
               (FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
  }
  local_208.field1_0x8 = (FRHITransitionInfo_u_8)(this->TextureSet)._padding_;
  local_1d0 = (this->TextureSet)._padding_;
  local_1a0 = (this->TextureSet)._padding_;
  local_208._padding_._0_4_ = 0xffffffff;
  local_208._padding_._4_2_ = 0xffff;
  local_208.Type = Texture;
  local_208.AccessBefore = None;
  local_208.AccessAfter = SRVMask;
  local_208.Flags = None;
  local_208.CommitInfo.bIsSet = false;
  local_1d8 = 0xffffffff;
  local_1d4 = 0xffff;
  local_1c8 = 1;
  local_1c4 = 0;
  local_1c0 = 0x70;
  local_1bc = 0;
  local_1b0 = 0;
  local_1a8 = 0xffffffff;
  local_1a4 = 0xffff;
  local_198 = 1;
  local_194 = 0;
  local_190 = 0x70;
  local_18c = 0;
  local_180 = 0;
  memset(&local_148,0,0xf0);
  local_178 = 0xffffffffffff;
  uStack_170 = 0;
  local_168 = 0;
  uStack_164 = 0;
  uStack_160 = 0;
  uStack_15c = 0;
  local_148 = 0xffffffffffff;
  uStack_140 = 0;
  local_138 = 0;
  local_158 = 0;
  acStack_150[0] = '\0';
  acStack_150[1] = '\0';
  acStack_150[2] = '\0';
  acStack_150[3] = '\0';
  acStack_150[4] = '\0';
  acStack_150[5] = '\0';
  acStack_150[6] = '\0';
  acStack_150[7] = '\0';
  local_128 = 0;
  uStack_134 = 0;
  uStack_130 = 0;
  local_f8 = 0;
  uStack_12c = 0;
  local_c8 = 0;
  uStack_120 = 0;
  local_118 = 0xffffffffffff;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0;
  uStack_f0 = 0;
  local_e8 = 0xffffffffffff;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  uStack_c0 = 0;
  local_b8 = 0xffffffffffff;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_88 = 0xffffffffffff;
  plVar23 = &(this->TextureSet)._padding_;
  local_68 = 0;
  uStack_80 = 0;
  pcVar13 = acStack_150;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_60 = 0;
  uStack_9c = 0;
  uStack_90 = 0;
  uVar26 = uVar19;
  do {
    lVar20 = *plVar23;
    local_a68 = 0xffffffff;
    pcVar13[-0x28] = -1;
    pcVar13[-0x27] = -1;
    pcVar13[-0x26] = -1;
    pcVar13[-0x25] = -1;
    pcVar13[-0x24] = -1;
    pcVar13[-0x23] = -1;
    *(longlong *)(pcVar13 + -0x20) = lVar20;
    pcVar13[-0x18] = '\x01';
    pcVar13[-0x14] = '\0';
    pcVar13[-0x13] = '\0';
    pcVar13[-0x12] = '\0';
    pcVar13[-0x11] = '\0';
    pcVar13[-0x10] = 'p';
    pcVar13[-0xf] = '\0';
    pcVar13[-0xe] = '\0';
    pcVar13[-0xd] = '\0';
    pcVar13[-0xc] = '\0';
    if ((local_a48 != pcVar13 + -8) && (*pcVar13 != '\0')) {
      *pcVar13 = '\0';
    }
    uVar26 = uVar26 + 1;
    plVar23 = plVar23 + 7;
    pcVar13 = pcVar13 + 0x30;
  } while (uVar26 < 6);
  local_a88 = &local_208;
  uStack_a80 = 9;
  local_a78._12_4_ = uStack_a7c;
  local_a78.ArrayNum = 9;
  local_a78.DataPtr = local_a88;
  FRHIComputeCommandList::Transition
            ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,&local_a78,None);
LAB_1483902f2:
  pFVar17 = (pTVar22->AllocatorInstance).Data;
  iVar15 = (this->Allocations).ArrayNum;
  pFVar27 = pFVar17 + (longlong)iVar15 * 0x10;
  while( true ) {
    if ((this->Allocations).ArrayNum != iVar15) {
      local_b68[0] = 0;
      `TCheckedPointerIterator<FVolumetricLightmapBrickAtlas::Allocation,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_b68);
    }
    pFVar24 = local_b48;
    if (pFVar17 == pFVar27) break;
    uVar19 = uVar19 + *(int *)(pFVar17 + 8);
    pFVar17 = pFVar17 + 0x10;
  }
  iVar15 = this->PaddedBrickSize;
  iVar14 = ((local_b48->BrickDataDimensions).field0_0x0._s_0.Y *
            (local_b48->BrickDataDimensions).field0_0x0._s_0.Z *
           (local_b48->BrickDataDimensions).field0_0x0._s_0.X) / (iVar15 * iVar15 * iVar15) + uVar19
  ;
  local_b78.Data = (FScriptContainerElement *)0x0;
  local_b70 = 0;
  FVolumetricLightmapBasicBrickDataLayers::FVolumetricLightmapBasicBrickDataLayers
            ((FVolumetricLightmapBasicBrickDataLayers *)local_418);
  pFVar29 = local_b60;
  iVar15 = local_b60->PaddedBrickSize;
  iVar30 = 0x100;
  if (iVar14 < 0x100) {
    iVar30 = iVar14;
  }
  iVar8 = (iVar14 + -1 + iVar30) / iVar30;
  iVar14 = 0x100;
  if (iVar8 < 0x100) {
    iVar14 = iVar8;
  }
  local_ae8._s_0.X = iVar30 * iVar15;
  iVar8 = (iVar8 + -1 + iVar14) / iVar14;
  local_ae8._s_0.Y = iVar14 * iVar15;
  iVar30 = 0x100;
  if (iVar8 < 0x100) {
    iVar30 = iVar8;
  }
  local_b38 = &local_b60->TextureSet;
  local_ae8._s_0.Z = iVar30 * iVar15;
  FVolumetricLightmapBrickTextureSet::Initialize<FVolumetricLightmapBrickTextureSet>
            ((FVolumetricLightmapBrickTextureSet *)local_418,(TIntVector3<int> *)&local_ae8._s_0,
             local_b38);
  pFVar6 = local_b60;
  iVar30 = 0;
  iVar15 = 0;
  local_b50 = lVar25;
  if (0 < param_1) {
    lVar20 = 0;
    lVar28 = 0;
    do {
      pFVar24 = local_b48;
      pFVar29 = local_b60;
      if ((pFVar6->Allocations).ArrayNum <= iVar15) break;
      if ((iVar15 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar15 = iVar15 + 1;
      lVar20 = lVar20 + 1;
      iVar30 = iVar30 + *(int *)((pTVar22->AllocatorInstance).Data + lVar28 + 8);
      lVar28 = lVar28 + 0x10;
      pFVar24 = local_b48;
      pFVar29 = local_b60;
    } while (lVar20 < lVar25);
  }
  pFVar6 = local_b60;
  iVar15 = pFVar29->PaddedBrickSize;
  iVar30 = iVar30 + ((pFVar24->BrickDataDimensions).field0_0x0._s_0.Y *
                     (pFVar24->BrickDataDimensions).field0_0x0._s_0.Z *
                    (pFVar24->BrickDataDimensions).field0_0x0._s_0.X) / (iVar15 * iVar15 * iVar15);
  uVar19 = param_1;
  if (param_1 < (pFVar29->Allocations).ArrayNum) {
    lVar25 = lVar25 << 4;
    do {
      uVar26 = (uint)~param_1 >> 0x1f;
      uVar19 = 0;
      if (param_1 < (this->Allocations).ArrayNum) {
        uVar19 = uVar26;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar20 = *(longlong *)((pTVar22->AllocatorInstance).Data + lVar25);
      iVar15 = *(int *)(lVar20 + 0x60);
      if (*(int *)(lVar20 + 0x60) < *(int *)(lVar20 + 0x5c)) {
        iVar15 = *(int *)(lVar20 + 0x5c);
      }
      iVar14 = *(int *)(lVar20 + 100);
      if (*(int *)(lVar20 + 100) < iVar15) {
        iVar14 = iVar15;
      }
      if (0 < iVar14) {
        uVar19 = 0;
        if (param_1 < (this->Allocations).ArrayNum) {
          uVar19 = uVar26;
        }
        if ((uVar19 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar24 = *(FPrecomputedVolumetricLightmapData **)
                   ((pTVar22->AllocatorInstance).Data + lVar25);
        uVar19 = 0;
        if (param_1 < (this->Allocations).ArrayNum) {
          uVar19 = uVar26;
        }
        if ((uVar19 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FPrecomputedVolumetricLightmapData::HandleDataMovementInAtlas
                  (pFVar24,*(int *)((pTVar22->AllocatorInstance).Data + lVar25 + 0xc),iVar30);
      }
      uVar19 = 0;
      if (param_1 < (this->Allocations).ArrayNum) {
        uVar19 = uVar26;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      param_1 = param_1 + 1;
      iVar30 = iVar30 + *(int *)((pTVar22->AllocatorInstance).Data + lVar25 + 8);
      lVar25 = lVar25 + 0x10;
      pFVar29 = local_b60;
      uVar19 = local_b58;
    } while (param_1 < (pFVar6->Allocations).ArrayNum);
  }
  uVar26 = 0;
  local_b64 = 0;
  if (0 < local_b50) {
    local_b00 = 0;
    local_af8 = 0;
    do {
      uVar19 = local_b58;
      if ((pFVar29->Allocations).ArrayNum <= (int)uVar26) break;
      FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
                ((FVolumetricLightmapDataLayer *)local_a38,(FVolumetricLightmapDataLayer *)local_418
                );
      lVar20 = 6;
      lVar25 = -0x620;
      pFVar21 = (ForAnyElementType *)(local_a38 + 0x40);
      local_b40 = -0x620;
      puVar18 = (undefined8 *)(local_418 + 0x40);
      do {
        iVar15 = *(int *)(puVar18 + 1);
        pFVar21->Data = (FScriptContainerElement *)0x0;
        piVar11 = (int *)((longlong)puVar18 + lVar25 + 0xc);
        pvVar3 = (void *)*puVar18;
        lVar20 = lVar20 + -1;
        pFVar21[-1].Data = (FScriptContainerElement *)&___7FVolumetricLightmapDataLayer__6B_;
        *(int *)(lVar25 + 8 + (longlong)puVar18) = iVar15;
        if (iVar15 == 0) {
          *piVar11 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar15,0,pFVar21,iVar15,piVar11);
          memcpy(pFVar21->Data,pvVar3,(longlong)iVar15);
          lVar25 = local_b40;
        }
        pFVar4 = (FRHIResource *)puVar18[3];
        *(undefined4 *)(lVar25 + 0x10 + (longlong)puVar18) = *(undefined4 *)(puVar18 + 2);
        *(undefined1 *)(lVar25 + 0x14 + (longlong)puVar18) =
             *(undefined1 *)((longlong)puVar18 + 0x14);
        *(FRHIResource **)(lVar25 + 0x18 + (longlong)puVar18) = pFVar4;
        if (pFVar4 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar4);
          lVar25 = local_b40;
        }
        pFVar4 = (FRHIResource *)puVar18[4];
        *(FRHIResource **)(lVar25 + 0x20 + (longlong)puVar18) = pFVar4;
        if (pFVar4 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar4);
          lVar25 = local_b40;
        }
        pFVar21 = pFVar21 + 7;
        *(undefined1 *)(lVar25 + 0x28 + (longlong)puVar18) = *(undefined1 *)(puVar18 + 5);
        puVar18 = puVar18 + 7;
      } while (lVar20 != 0);
      FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
                ((FVolumetricLightmapDataLayer *)(local_a38 + 0x188),
                 (FVolumetricLightmapDataLayer *)(local_418 + 0x188));
      FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer(&local_878,&local_258);
      pTVar22 = local_af0;
      uVar16 = ~uVar26 >> 0x1f;
      local_840._s_0.Z = local_220[0]._s_0.Z;
      local_840._0_8_ = local_220[0]._0_8_;
      uVar19 = 0;
      if ((int)uVar26 < local_af0->ArrayNum) {
        uVar19 = uVar16;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar25 = local_af8;
      iVar15 = *(int *)((pTVar22->AllocatorInstance).Data + local_af8 + 8);
      uVar19 = 0;
      if ((int)uVar26 < pTVar22->ArrayNum) {
        uVar19 = uVar16;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar30 = local_b64;
      bVar2 = *(byte *)((longlong)&local_b60->_padding_ + 4);
      TVar9 = GMaxRHIFeatureLevel;
      if (bVar2 != 5) {
        TVar9 = (Type)bVar2;
      }
      CopyDataIntoAtlas<FVolumetricLightmapBrickTextureSet>
                ((FRHICommandList *)&GRHICommandList.CommandListImmediate,TVar9,
                 *(int *)((pTVar22->AllocatorInstance).Data + lVar25 + 0xc),local_b64,iVar15,
                 local_b38,(FVolumetricLightmapBrickTextureSet *)local_a38);
      uVar10 = 0;
      uVar19 = uVar10;
      if ((int)uVar26 < pTVar22->ArrayNum) {
        uVar19 = uVar16;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_b30 = *(FPrecomputedVolumetricLightmapData **)
                   ((pTVar22->AllocatorInstance).Data + lVar25);
      uVar19 = uVar10;
      if ((int)uVar26 < pTVar22->ArrayNum) {
        uVar19 = uVar16;
      }
      if ((uVar19 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_b28 = *(undefined4 *)((pTVar22->AllocatorInstance).Data + lVar25 + 8);
      iStack_b24 = iVar30;
      if (((local_b78.Data <= (FScriptContainerElement *)&local_b30) &&
          ((FScriptContainerElement *)&local_b30 < local_b78.Data + (longlong)local_b70._4_4_ * 0x10
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar15 = (int)local_b70;
      if ((int)local_b70 == local_b70._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_b78,(int *)((longlong)&local_b70 + 4));
      }
      local_b70 = CONCAT44(local_b70._4_4_,iVar15 + 1);
      *(FPrecomputedVolumetricLightmapData **)(local_b78.Data + (longlong)iVar15 * 0x10) = local_b30
      ;
      *(ulonglong *)(local_b78.Data + (longlong)iVar15 * 0x10 + 8) = CONCAT44(iStack_b24,uStack_b28)
      ;
      if ((int)uVar26 < pTVar22->ArrayNum) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar26 = uVar26 + 1;
      local_b64 = iVar30 + *(int *)((pTVar22->AllocatorInstance).Data + lVar25 + 8);
      local_af8 = lVar25 + 0x10;
      local_b00 = local_b00 + 1;
      pFVar29 = local_b60;
      uVar19 = local_b58;
    } while (local_b00 < local_b50);
  }
  pFVar24 = local_b48;
  lVar25 = local_b50;
  iVar15 = pFVar29->PaddedBrickSize;
  iVar30 = ((local_b48->BrickDataDimensions).field0_0x0._s_0.Y *
            (local_b48->BrickDataDimensions).field0_0x0._s_0.Z *
           (local_b48->BrickDataDimensions).field0_0x0._s_0.X) / (iVar15 * iVar15 * iVar15);
  pFVar12 = FVolumetricLightmapBrickTextureSet::FVolumetricLightmapBrickTextureSet
                      (&local_628,(FVolumetricLightmapBrickTextureSet *)local_418);
  iVar15 = local_b64;
  bVar2 = *(byte *)((longlong)&pFVar29->_padding_ + 4);
  TVar9 = (uint)bVar2;
  if (bVar2 == 5) {
    TVar9 = GMaxRHIFeatureLevel;
  }
  CopyDataIntoAtlas<FVolumetricLightmapBrickData>
            ((FRHICommandList *)&GRHICommandList.CommandListImmediate,TVar9,0,local_b64,iVar30,
             &pFVar24->BrickData,pFVar12);
  local_b20 = pFVar24;
  iStack_b14 = iVar15;
  iStack_b18 = iVar30;
  if (((local_b78.Data <= (FScriptContainerElement *)&local_b20) &&
      ((FScriptContainerElement *)&local_b20 < local_b78.Data + (longlong)local_b70._4_4_ * 0x10))
     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar14 = (int)local_b70;
  if ((int)local_b70 == local_b70._4_4_) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_b78,(int *)((longlong)&local_b70 + 4));
  }
  local_b70 = CONCAT44(local_b70._4_4_,iVar14 + 1);
  *(FPrecomputedVolumetricLightmapData **)(local_b78.Data + (longlong)iVar14 * 0x10) = local_b20;
  *(ulonglong *)(local_b78.Data + (longlong)iVar14 * 0x10 + 8) = CONCAT44(iStack_b14,iStack_b18);
  pFVar24->BrickDataBaseOffsetInAtlas = iVar15;
  local_b64 = iVar15 + iVar30;
  if ((int)uVar19 < (pFVar29->Allocations).ArrayNum) {
    local_b50 = lVar25 << 4;
    local_b38 = (FVolumetricLightmapBrickTextureSet *)0xfffffffffffffbe8;
    do {
      FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
                ((FVolumetricLightmapDataLayer *)local_830,(FVolumetricLightmapDataLayer *)local_418
                );
      pFVar12 = local_b38;
      pFVar21 = (ForAnyElementType *)(local_830 + 0x40);
      lVar25 = 6;
      puVar18 = (undefined8 *)(local_418 + 0x40);
      do {
        iVar15 = *(int *)(puVar18 + 1);
        pvVar3 = (void *)*puVar18;
        piVar11 = (int *)((undefined1 *)((longlong)&pFVar12->_padding_ + 4) + (longlong)puVar18);
        pFVar21[-1].Data = (FScriptContainerElement *)&___7FVolumetricLightmapDataLayer__6B_;
        lVar25 = lVar25 + -1;
        pFVar21->Data = (FScriptContainerElement *)0x0;
        *(int *)((longlong)&pFVar12->_padding_ + (longlong)puVar18) = iVar15;
        if (iVar15 == 0) {
          *piVar11 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar15,0,pFVar21,iVar15,piVar11);
          memcpy(pFVar21->Data,pvVar3,(longlong)iVar15);
        }
        pFVar4 = (FRHIResource *)puVar18[3];
        *(undefined4 *)((longlong)&pFVar12->_padding_ + (longlong)puVar18) =
             *(undefined4 *)(puVar18 + 2);
        ((undefined1 *)((longlong)&pFVar12->_padding_ + 4))[(longlong)puVar18] =
             *(undefined1 *)((longlong)puVar18 + 0x14);
        *(FRHIResource **)((longlong)&pFVar12->_padding_ + (longlong)puVar18) = pFVar4;
        if (pFVar4 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar4);
        }
        pFVar4 = (FRHIResource *)puVar18[4];
        *(FRHIResource **)((longlong)&pFVar12->_padding_ + (longlong)puVar18) = pFVar4;
        if (pFVar4 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar4);
        }
        pFVar21 = pFVar21 + 7;
        *(undefined1 *)((longlong)&pFVar12->_padding_ + (longlong)puVar18) =
             *(undefined1 *)(puVar18 + 5);
        puVar18 = puVar18 + 7;
      } while (lVar25 != 0);
      FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
                ((FVolumetricLightmapDataLayer *)(local_830 + 0x188),
                 (FVolumetricLightmapDataLayer *)(local_418 + 0x188));
      FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer(&local_670,&local_258);
      pTVar22 = local_af0;
      uVar19 = local_b58;
      uVar16 = ~local_b58 >> 0x1f;
      local_638._s_0.Z = local_220[0]._s_0.Z;
      local_638._0_8_ = local_220[0]._0_8_;
      uVar26 = 0;
      if ((int)local_b58 < local_af0->ArrayNum) {
        uVar26 = uVar16;
      }
      if ((uVar26 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar25 = local_b50;
      iVar15 = *(int *)((pTVar22->AllocatorInstance).Data + local_b50 + 8);
      uVar26 = 0;
      if ((int)uVar19 < pTVar22->ArrayNum) {
        uVar26 = uVar16;
      }
      if ((uVar26 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar29 = local_b60;
      iVar30 = local_b64;
      bVar2 = *(byte *)((longlong)&local_b60->_padding_ + 4);
      TVar9 = GMaxRHIFeatureLevel;
      if (bVar2 != 5) {
        TVar9 = (Type)bVar2;
      }
      CopyDataIntoAtlas<FVolumetricLightmapBrickTextureSet>
                ((FRHICommandList *)&GRHICommandList.CommandListImmediate,TVar9,
                 *(int *)((pTVar22->AllocatorInstance).Data + lVar25 + 0xc),local_b64,iVar15,
                 &local_b60->TextureSet,(FVolumetricLightmapBrickTextureSet *)local_830);
      uVar26 = 0;
      if ((int)uVar19 < pTVar22->ArrayNum) {
        uVar26 = uVar16;
      }
      if ((uVar26 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_b10 = *(undefined8 *)((pTVar22->AllocatorInstance).Data + lVar25);
      uVar26 = 0;
      if ((int)uVar19 < pTVar22->ArrayNum) {
        uVar26 = uVar16;
      }
      if ((uVar26 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uStack_b08 = *(undefined4 *)((pTVar22->AllocatorInstance).Data + lVar25 + 8);
      iStack_b04 = iVar30;
      if (((local_b78.Data <= (FScriptContainerElement *)&local_b10) &&
          ((FScriptContainerElement *)&local_b10 < local_b78.Data + (longlong)local_b70._4_4_ * 0x10
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar15 = (int)local_b70;
      if ((int)local_b70 == local_b70._4_4_) {
        iVar15 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&local_b78,(int *)((longlong)&local_b70 + 4));
      }
      local_b70 = CONCAT44(local_b70._4_4_,iVar15 + 1);
      *(undefined8 *)(local_b78.Data + (longlong)iVar15 * 0x10) = local_b10;
      *(ulonglong *)(local_b78.Data + (longlong)iVar15 * 0x10 + 8) = CONCAT44(iStack_b04,uStack_b08)
      ;
      uVar26 = 0;
      if ((int)uVar19 < pTVar22->ArrayNum) {
        uVar26 = uVar16;
      }
      if ((uVar26 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar20 = *(longlong *)((pTVar22->AllocatorInstance).Data + lVar25);
      iVar15 = *(int *)(lVar20 + 0x60);
      if (*(int *)(lVar20 + 0x60) < *(int *)(lVar20 + 0x5c)) {
        iVar15 = *(int *)(lVar20 + 0x5c);
      }
      iVar14 = *(int *)(lVar20 + 100);
      if (*(int *)(lVar20 + 100) < iVar15) {
        iVar14 = iVar15;
      }
      if (iVar14 == 0) {
        uVar26 = 0;
        if ((int)uVar19 < pTVar22->ArrayNum) {
          uVar26 = uVar16;
        }
        if ((uVar26 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar24 = *(FPrecomputedVolumetricLightmapData **)
                   ((pTVar22->AllocatorInstance).Data + lVar25);
        uVar26 = 0;
        if ((int)uVar19 < pTVar22->ArrayNum) {
          uVar26 = uVar16;
        }
        if ((uVar26 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FPrecomputedVolumetricLightmapData::HandleDataMovementInAtlas
                  (pFVar24,*(int *)((pTVar22->AllocatorInstance).Data + lVar25 + 0xc),iVar30);
      }
      uVar26 = 0;
      if ((int)uVar19 < pTVar22->ArrayNum) {
        uVar26 = uVar16;
      }
      if ((uVar26 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_b58 = uVar19 + 1;
      local_b64 = iVar30 + *(int *)((pTVar22->AllocatorInstance).Data + lVar25 + 8);
      local_b50 = lVar25 + 0x10;
    } while ((int)local_b58 < (pFVar29->Allocations).ArrayNum);
  }
  _Src.Data = local_b78.Data;
  if (pTVar22 !=
      (TArray<FVolumetricLightmapBrickAtlas::Allocation,TSizedDefaultAllocator<32>_> *)&local_b78) {
    iVar15 = (int)local_b70;
    lVar25 = (longlong)(int)local_b70;
    piVar11 = &pTVar22->ArrayMax;
    pTVar22->ArrayNum = (int)local_b70;
    if (((int)local_b70 == 0) && (*piVar11 == 0)) {
      *piVar11 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_b70,*piVar11,&pTVar22->AllocatorInstance,(int)local_b70,piVar11);
      if (iVar15 != 0) {
        memcpy((pTVar22->AllocatorInstance).Data,_Src.Data,lVar25 << 4);
      }
    }
  }
  FVolumetricLightmapBasicBrickDataLayers::operator=
            ((FVolumetricLightmapBasicBrickDataLayers *)&pFVar29->TextureSet,
             (FVolumetricLightmapBasicBrickDataLayers *)local_418);
  *(undefined8 *)&(pFVar29->TextureSet).BrickDataDimensions.field0_0x0 = local_220[0]._0_8_;
  (pFVar29->TextureSet).BrickDataDimensions.field0_0x0._s_0.Z = local_220[0]._s_0.Z;
  FVolumetricLightmapBasicBrickDataLayers::~FVolumetricLightmapBasicBrickDataLayers
            ((FVolumetricLightmapBasicBrickDataLayers *)local_418);
  if (local_b78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b78.Data);
  }
  return;
}

// Remove @ 14839e460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVolumetricLightmapBrickAtlas::Remove
          (FVolumetricLightmapBrickAtlas *this,FPrecomputedVolumetricLightmapData *param_1)

{
  byte bVar1;
  void *pvVar2;
  FRHIResource *pFVar3;
  FPrecomputedVolumetricLightmapData *this_00;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  Type TVar9;
  int iVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined8 *puVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType *pFVar18;
  int iVar19;
  uint uVar20;
  TArray<FVolumetricLightmapBrickAtlas::Allocation,TSizedDefaultAllocator<32>_> *pTVar21;
  longlong lVar22;
  undefined1 auStackY_738 [32];
  undefined1 local_6e8 [8];
  ForAnyElementType local_6e0;
  undefined8 local_6d8;
  int local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  FVolumetricLightmapBrickAtlas *local_6b8;
  longlong local_6b0;
  undefined8 local_6a8;
  undefined4 uStack_6a0;
  int iStack_69c;
  undefined8 local_698;
  undefined4 uStack_690;
  int iStack_68c;
  longlong local_688;
  longlong local_680;
  TArray<FVolumetricLightmapBrickAtlas::Allocation,TSizedDefaultAllocator<32>_> *local_678;
  TIntVector3<int>_u_0 local_668;
  undefined1 local_658 [448];
  FVolumetricLightmapDataLayer local_498;
  TIntVector3<int>_u_0 local_460;
  undefined1 local_450 [448];
  FVolumetricLightmapDataLayer local_290;
  TIntVector3<int>_u_0 local_258;
  undefined1 local_248 [448];
  FVolumetricLightmapDataLayer local_88;
  TIntVector3<int>_u_0 local_50 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_738;
  pTVar21 = &this->Allocations;
  pFVar15 = (pTVar21->AllocatorInstance).Data;
  pFVar17 = pFVar15 + (longlong)(this->Allocations).ArrayNum * 0x10;
  pFVar12 = pFVar15;
  while( true ) {
    if (pFVar12 == pFVar17) {
      return;
    }
    if (*(FPrecomputedVolumetricLightmapData **)pFVar12 == param_1) break;
    pFVar12 = pFVar12 + 0x10;
  }
  local_6c0 = (longlong)pFVar12 - (longlong)pFVar15 >> 4;
  iVar19 = 0;
  iVar10 = (this->Allocations).ArrayNum;
  local_6b8 = this;
  local_678 = pTVar21;
  while( true ) {
    if ((this->Allocations).ArrayNum != iVar10) {
      local_6e8[0] = 0;
      `TCheckedPointerIterator<FVolumetricLightmapBrickAtlas::Allocation,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_6e8);
    }
    if (pFVar15 == pFVar17) break;
    if (*(FPrecomputedVolumetricLightmapData **)pFVar15 != param_1) {
      iVar19 = iVar19 + *(int *)(pFVar15 + 8);
    }
    pFVar15 = pFVar15 + 0x10;
  }
  local_6e0.Data = (FScriptContainerElement *)0x0;
  local_6d8 = 0;
  FVolumetricLightmapBasicBrickDataLayers::FVolumetricLightmapBasicBrickDataLayers
            ((FVolumetricLightmapBasicBrickDataLayers *)local_248);
  if (iVar19 < 1) {
    this->bInitialized = false;
  }
  else {
    iVar10 = 0x100;
    if (iVar19 < 0x100) {
      iVar10 = iVar19;
    }
    iVar6 = (iVar10 + -1 + iVar19) / iVar10;
    iVar19 = 0x100;
    if (iVar6 < 0x100) {
      iVar19 = iVar6;
    }
    iVar7 = (iVar6 + -1 + iVar19) / iVar19;
    iVar6 = this->PaddedBrickSize;
    local_668._s_0.X = iVar6 * iVar10;
    local_668._s_0.Y = iVar6 * iVar19;
    iVar10 = 0x100;
    if (iVar7 < 0x100) {
      iVar10 = iVar7;
    }
    local_668._s_0.Z = iVar10 * iVar6;
    FVolumetricLightmapBrickTextureSet::Initialize<FVolumetricLightmapBrickTextureSet>
              ((FVolumetricLightmapBrickTextureSet *)local_248,(TIntVector3<int> *)&local_668._s_0,
               &this->TextureSet);
    uVar20 = 0;
    iVar10 = (int)local_6c0;
    local_6b0 = (longlong)iVar10;
    local_6d0 = 0;
    if (0 < iVar10) {
      local_688 = 0;
      local_680 = 0;
      do {
        if ((this->Allocations).ArrayNum <= (int)uVar20) break;
        FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
                  ((FVolumetricLightmapDataLayer *)local_658,
                   (FVolumetricLightmapDataLayer *)local_248);
        lVar22 = 6;
        lVar13 = -0x410;
        pFVar18 = (ForAnyElementType *)(local_658 + 0x40);
        puVar16 = (undefined8 *)(local_248 + 0x40);
        local_6c8 = lVar13;
        do {
          iVar10 = *(int *)(puVar16 + 1);
          pvVar2 = (void *)*puVar16;
          piVar11 = (int *)(lVar13 + 0xc + (longlong)puVar16);
          lVar22 = lVar22 + -1;
          pFVar18[-1].Data = (FScriptContainerElement *)&___7FVolumetricLightmapDataLayer__6B_;
          pFVar18->Data = (FScriptContainerElement *)0x0;
          *(int *)((longlong)puVar16 + lVar13 + 8) = iVar10;
          if (iVar10 == 0) {
            *piVar11 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar10,0,pFVar18,iVar10,piVar11);
            memcpy(pFVar18->Data,pvVar2,(longlong)iVar10);
            lVar13 = local_6c8;
          }
          pFVar3 = (FRHIResource *)puVar16[3];
          *(undefined4 *)((longlong)puVar16 + lVar13 + 0x10) = *(undefined4 *)(puVar16 + 2);
          *(undefined1 *)((longlong)puVar16 + lVar13 + 0x14) =
               *(undefined1 *)((longlong)puVar16 + 0x14);
          *(FRHIResource **)((longlong)puVar16 + lVar13 + 0x18) = pFVar3;
          if (pFVar3 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(pFVar3);
            lVar13 = local_6c8;
          }
          pFVar3 = (FRHIResource *)puVar16[4];
          *(FRHIResource **)((longlong)puVar16 + lVar13 + 0x20) = pFVar3;
          if (pFVar3 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(pFVar3);
            lVar13 = local_6c8;
          }
          pFVar18 = pFVar18 + 7;
          *(undefined1 *)((longlong)puVar16 + lVar13 + 0x28) = *(undefined1 *)(puVar16 + 5);
          puVar16 = puVar16 + 7;
        } while (lVar22 != 0);
        FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
                  ((FVolumetricLightmapDataLayer *)(local_658 + 0x188),
                   (FVolumetricLightmapDataLayer *)(local_248 + 0x188));
        FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer(&local_498,&local_88);
        pTVar21 = local_678;
        uVar14 = ~uVar20 >> 0x1f;
        local_460._s_0.Z = local_50[0]._s_0.Z;
        local_460._0_8_ = local_50[0]._0_8_;
        uVar8 = 0;
        if ((int)uVar20 < local_678->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar13 = local_680;
        iVar10 = *(int *)((pTVar21->AllocatorInstance).Data + local_680 + 8);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this = local_6b8;
        iVar19 = local_6d0;
        bVar1 = *(byte *)((longlong)&local_6b8->_padding_ + 4);
        TVar9 = GMaxRHIFeatureLevel;
        if (bVar1 != 5) {
          TVar9 = (Type)bVar1;
        }
        CopyDataIntoAtlas<FVolumetricLightmapBrickTextureSet>
                  ((FRHICommandList *)&GRHICommandList.CommandListImmediate,TVar9,
                   *(int *)((pTVar21->AllocatorInstance).Data + lVar13 + 0xc),local_6d0,iVar10,
                   &local_6b8->TextureSet,(FVolumetricLightmapBrickTextureSet *)local_658);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_6a8 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + lVar13);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uStack_6a0 = *(undefined4 *)((pTVar21->AllocatorInstance).Data + lVar13 + 8);
        iStack_69c = iVar19;
        if (((local_6e0.Data <= (FScriptContainerElement *)&local_6a8) &&
            ((FScriptContainerElement *)&local_6a8 <
             local_6e0.Data + (longlong)local_6d8._4_4_ * 0x10)) &&
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
        iVar10 = (int)local_6d8;
        if ((int)local_6d8 == local_6d8._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_6e0,(int *)((longlong)&local_6d8 + 4));
        }
        local_6d8 = CONCAT44(local_6d8._4_4_,iVar10 + 1);
        *(undefined8 *)(local_6e0.Data + (longlong)iVar10 * 0x10) = local_6a8;
        *(ulonglong *)(local_6e0.Data + (longlong)iVar10 * 0x10 + 8) =
             CONCAT44(iStack_69c,uStack_6a0);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar20 = uVar20 + 1;
        local_6d0 = iVar19 + *(int *)((pTVar21->AllocatorInstance).Data + lVar13 + 8);
        local_680 = lVar13 + 0x10;
        local_688 = local_688 + 1;
      } while (local_688 < local_6b0);
      iVar10 = (int)local_6c0;
    }
    iVar10 = iVar10 + 1;
    local_6c8 = CONCAT44(local_6c8._4_4_,iVar10);
    if (iVar10 < (this->Allocations).ArrayNum) {
      local_6b0 = -0x208;
      local_6c0 = (longlong)iVar10 << 4;
      do {
        FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
                  ((FVolumetricLightmapDataLayer *)local_450,
                   (FVolumetricLightmapDataLayer *)local_248);
        lVar13 = local_6b0;
        pFVar18 = (ForAnyElementType *)(local_450 + 0x40);
        lVar22 = 6;
        puVar16 = (undefined8 *)(local_248 + 0x40);
        do {
          iVar10 = *(int *)(puVar16 + 1);
          pvVar2 = (void *)*puVar16;
          piVar11 = (int *)(lVar13 + 0xc + (longlong)puVar16);
          lVar22 = lVar22 + -1;
          pFVar18[-1].Data = (FScriptContainerElement *)&___7FVolumetricLightmapDataLayer__6B_;
          pFVar18->Data = (FScriptContainerElement *)0x0;
          *(int *)((longlong)puVar16 + lVar13 + 8) = iVar10;
          if (iVar10 == 0) {
            *piVar11 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,iVar10,0,pFVar18,iVar10,piVar11);
            memcpy(pFVar18->Data,pvVar2,(longlong)iVar10);
          }
          pFVar3 = (FRHIResource *)puVar16[3];
          *(undefined4 *)((longlong)puVar16 + lVar13 + 0x10) = *(undefined4 *)(puVar16 + 2);
          *(undefined1 *)((longlong)puVar16 + lVar13 + 0x14) =
               *(undefined1 *)((longlong)puVar16 + 0x14);
          *(FRHIResource **)((longlong)puVar16 + lVar13 + 0x18) = pFVar3;
          if (pFVar3 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(pFVar3);
          }
          pFVar3 = (FRHIResource *)puVar16[4];
          *(FRHIResource **)((longlong)puVar16 + lVar13 + 0x20) = pFVar3;
          if (pFVar3 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(pFVar3);
          }
          pFVar18 = pFVar18 + 7;
          *(undefined1 *)((longlong)puVar16 + lVar13 + 0x28) = *(undefined1 *)(puVar16 + 5);
          puVar16 = puVar16 + 7;
        } while (lVar22 != 0);
        FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer
                  ((FVolumetricLightmapDataLayer *)(local_450 + 0x188),
                   (FVolumetricLightmapDataLayer *)(local_248 + 0x188));
        FVolumetricLightmapDataLayer::FVolumetricLightmapDataLayer(&local_290,&local_88);
        pTVar21 = local_678;
        uVar20 = (uint)local_6c8;
        uVar14 = ~(uint)local_6c8 >> 0x1f;
        local_258._s_0.Z = local_50[0]._s_0.Z;
        local_258._0_8_ = local_50[0]._0_8_;
        uVar8 = 0;
        if ((int)(uint)local_6c8 < local_678->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar13 = local_6c0;
        iVar10 = *(int *)((pTVar21->AllocatorInstance).Data + local_6c0 + 8);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this = local_6b8;
        iVar19 = local_6d0;
        bVar1 = *(byte *)((longlong)&local_6b8->_padding_ + 4);
        TVar9 = GMaxRHIFeatureLevel;
        if (bVar1 != 5) {
          TVar9 = (Type)bVar1;
        }
        CopyDataIntoAtlas<FVolumetricLightmapBrickTextureSet>
                  ((FRHICommandList *)&GRHICommandList.CommandListImmediate,TVar9,
                   *(int *)((pTVar21->AllocatorInstance).Data + lVar13 + 0xc),local_6d0,iVar10,
                   &local_6b8->TextureSet,(FVolumetricLightmapBrickTextureSet *)local_450);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_698 = *(undefined8 *)((pTVar21->AllocatorInstance).Data + lVar13);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uStack_690 = *(undefined4 *)((pTVar21->AllocatorInstance).Data + lVar13 + 8);
        iStack_68c = iVar19;
        if (((local_6e0.Data <= (FScriptContainerElement *)&local_698) &&
            ((FScriptContainerElement *)&local_698 <
             local_6e0.Data + (longlong)local_6d8._4_4_ * 0x10)) &&
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
        iVar10 = (int)local_6d8;
        if ((int)local_6d8 == local_6d8._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_6e0,(int *)((longlong)&local_6d8 + 4));
        }
        local_6d8 = CONCAT44(local_6d8._4_4_,iVar10 + 1);
        *(undefined8 *)(local_6e0.Data + (longlong)iVar10 * 0x10) = local_698;
        *(ulonglong *)(local_6e0.Data + (longlong)iVar10 * 0x10 + 8) =
             CONCAT44(iStack_68c,uStack_690);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = *(FPrecomputedVolumetricLightmapData **)
                   ((pTVar21->AllocatorInstance).Data + lVar13);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FPrecomputedVolumetricLightmapData::HandleDataMovementInAtlas
                  (this_00,*(int *)((pTVar21->AllocatorInstance).Data + lVar13 + 0xc),iVar19);
        uVar8 = 0;
        if ((int)uVar20 < pTVar21->ArrayNum) {
          uVar8 = uVar14;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_6c8 = CONCAT44(local_6c8._4_4_,uVar20 + 1);
        local_6d0 = iVar19 + *(int *)((pTVar21->AllocatorInstance).Data + lVar13 + 8);
        local_6c0 = lVar13 + 0x10;
      } while ((int)(uVar20 + 1) < (this->Allocations).ArrayNum);
    }
  }
  _Src.Data = local_6e0.Data;
  if (pTVar21 !=
      (TArray<FVolumetricLightmapBrickAtlas::Allocation,TSizedDefaultAllocator<32>_> *)&local_6e0) {
    iVar10 = (int)local_6d8;
    lVar13 = (longlong)(int)local_6d8;
    piVar11 = &pTVar21->ArrayMax;
    pTVar21->ArrayNum = (int)local_6d8;
    if (((int)local_6d8 == 0) && (*piVar11 == 0)) {
      *piVar11 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(int)local_6d8,*piVar11,&pTVar21->AllocatorInstance,(int)local_6d8,piVar11);
      if (iVar10 != 0) {
        memcpy((pTVar21->AllocatorInstance).Data,_Src.Data,lVar13 << 4);
      }
    }
  }
  FVolumetricLightmapBasicBrickDataLayers::operator=
            ((FVolumetricLightmapBasicBrickDataLayers *)&this->TextureSet,
             (FVolumetricLightmapBasicBrickDataLayers *)local_248);
  *(undefined8 *)&(this->TextureSet).BrickDataDimensions.field0_0x0 = local_50[0]._0_8_;
  (this->TextureSet).BrickDataDimensions.field0_0x0._s_0.Z = local_50[0]._s_0.Z;
  FVolumetricLightmapBasicBrickDataLayers::~FVolumetricLightmapBasicBrickDataLayers
            ((FVolumetricLightmapBasicBrickDataLayers *)local_248);
  if (local_6e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6e0.Data);
  }
  return;
}

