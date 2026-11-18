// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 11

// GetRenderer<FShadowSceneRenderer> @ 1447efa60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FShadowSceneRenderer * __thiscall
FSceneExtensionsRenderers::GetRenderer<FShadowSceneRenderer>(FSceneExtensionsRenderers *this)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FShadowSceneRenderer *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  uVar2 = FShadowScene::ExtensionRegistration._8_4_;
  lVar5 = (longlong)(int)FShadowScene::ExtensionRegistration._8_4_;
  if ((-1 < (int)FShadowScene::ExtensionRegistration._8_4_) &&
     ((int)FShadowScene::ExtensionRegistration._8_4_ < *(int *)&(this->Renderers).field_0x28)) {
    if ((*(int *)&(this->Renderers).field_0x28 <= (int)FShadowScene::ExtensionRegistration._8_4_) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FShadowSceneRenderer *)(*pcVar1)();
      return pFVar4;
    }
    puVar6 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Renderers).field_0x10;
    }
    if (((*(uint *)(puVar6 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
          (uVar2 & 0x1f) & 1) != 0) &&
       (pFVar4 = *(FShadowSceneRenderer **)(*(longlong *)&this->Renderers + lVar5 * 8),
       pFVar4 != (FShadowSceneRenderer *)0x0)) {
      return pFVar4;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Renderer != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.h"
                     ,0x123,L"");
  if (!bVar3) {
    return (FShadowSceneRenderer *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FShadowSceneRenderer *)(*pcVar1)();
  return pFVar4;
}

// GetRendererPtr<FSceneCullingRenderer> @ 1447efb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSceneCullingRenderer * __thiscall
FSceneExtensionsRenderers::GetRendererPtr<FSceneCullingRenderer>(FSceneExtensionsRenderers *this)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FSceneCullingRenderer *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  uVar2 = FSceneCulling::ExtensionRegistration._8_4_;
  lVar5 = (longlong)(int)FSceneCulling::ExtensionRegistration._8_4_;
  if ((-1 < (int)FSceneCulling::ExtensionRegistration._8_4_) &&
     ((int)FSceneCulling::ExtensionRegistration._8_4_ < *(int *)&(this->Renderers).field_0x28)) {
    if (*(int *)&(this->Renderers).field_0x28 <= (int)FSceneCulling::ExtensionRegistration._8_4_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FSceneCullingRenderer *)(*pcVar1)();
        return pFVar4;
      }
    }
    puVar6 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Renderers).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      return *(FSceneCullingRenderer **)(*(longlong *)&this->Renderers + lVar5 * 8);
    }
  }
  return (FSceneCullingRenderer *)0x0;
}

// PostRender @ 14481d910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneExtensionsRenderers::PostRender(FSceneExtensionsRenderers *this,FRDGBuilder *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_60;
  int local_40;
  
  local_res10 = param_1;
  if (((this->bValidateCallbacks != false) && (this->CurrentCallbackStage != PostRender)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bValidateCallbacks || InCallbackStage == CurrentCallbackStage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.h"
                         ,0x160,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->CurrentCallbackStage = End;
  local_88 = 0;
  iVar3 = *(int *)&(this->Renderers).field_0x28;
  puVar2 = &(this->Renderers).field_0x10;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Renderers).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar11 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar11 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar9 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14481da07;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_74 = local_res18 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14481da07:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->Renderers).field_0x28;
  local_40 = *(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar10 = (int)uVar11 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar14 = uVar11 & 0xffffffe0;
  local_60.Array =
       (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar7 = local_res10;
  uVar4 = *(uint *)&(this->Renderers).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14481daf0;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14481daf0:
  while( true ) {
    if (*(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34 != local_40) {
      `TSparseArray<ISceneExtensionRenderer_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Renderers + (longlong)local_60.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x38))(plVar5,pFVar7);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_60);
  }
  return;
}

// PreInitViews @ 14481db60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneExtensionsRenderers::PreInitViews(FSceneExtensionsRenderers *this,FRDGBuilder *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_60;
  int local_40;
  
  local_res10 = param_1;
  if (((this->bValidateCallbacks != false) && (this->CurrentCallbackStage != PreInitViews)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bValidateCallbacks || InCallbackStage == CurrentCallbackStage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.h"
                         ,0x160,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->CurrentCallbackStage = UpdateViewData;
  local_88 = 0;
  iVar3 = *(int *)&(this->Renderers).field_0x28;
  puVar2 = &(this->Renderers).field_0x10;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Renderers).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar11 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar11 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar9 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14481dc57;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_74 = local_res18 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14481dc57:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->Renderers).field_0x28;
  local_40 = *(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar10 = (int)uVar11 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar14 = uVar11 & 0xffffffe0;
  local_60.Array =
       (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar7 = local_res10;
  uVar4 = *(uint *)&(this->Renderers).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14481dd40;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14481dd40:
  while( true ) {
    if (*(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34 != local_40) {
      `TSparseArray<ISceneExtensionRenderer_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Renderers + (longlong)local_60.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x18))(plVar5,pFVar7);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_60);
  }
  return;
}

// PreRender @ 14481ddb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneExtensionsRenderers::PreRender(FSceneExtensionsRenderers *this,FRDGBuilder *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_60;
  int local_40;
  
  local_res10 = param_1;
  if (((this->bValidateCallbacks != false) && (this->CurrentCallbackStage != PreRender)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bValidateCallbacks || InCallbackStage == CurrentCallbackStage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.h"
                         ,0x160,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->CurrentCallbackStage = PostRender;
  local_88 = 0;
  iVar3 = *(int *)&(this->Renderers).field_0x28;
  puVar2 = &(this->Renderers).field_0x10;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Renderers).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar11 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar11 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar9 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14481dea7;
      uVar11 = puVar13[lVar9 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iStack_74 = local_res18 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14481dea7:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->Renderers).field_0x28;
  local_40 = *(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar10 = (int)uVar11 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar14 = uVar11 & 0xffffffe0;
  local_60.Array =
       (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar7 = local_res10;
  uVar4 = *(uint *)&(this->Renderers).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14481df90;
      uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14481df90:
  while( true ) {
    if (*(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34 != local_40) {
      `TSparseArray<ISceneExtensionRenderer_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Renderers + (longlong)local_60.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x30))(plVar5,pFVar7);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_60);
  }
  return;
}

// UpdateSceneUniformBuffer @ 144837ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneExtensionsRenderers::UpdateSceneUniformBuffer
          (FSceneExtensionsRenderers *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  FSceneUniformBuffer *pFVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FSceneUniformBuffer *local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_70;
  int local_50;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (((this->bValidateCallbacks != false) &&
      (this->CurrentCallbackStage != UpdateSceneUniformBuffer)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bValidateCallbacks || InCallbackStage == CurrentCallbackStage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.h"
                         ,0x160,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->CurrentCallbackStage = PreRender;
  local_98 = 0;
  iVar3 = *(int *)&(this->Renderers).field_0x28;
  puVar2 = &(this->Renderers).field_0x10;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Renderers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar12 = *puVar14;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar12 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar10 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_144837c97;
      uVar12 = puVar14[lVar10 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar3 < iStack_84) {
LAB_144837c97:
      iStack_84 = iVar3;
    }
  }
  uVar12 = *(uint *)&(this->Renderers).field_0x28;
  local_50 = *(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar11 = (int)uVar12 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar15 = uVar12 & 0xffffffe0;
  local_70.Array =
       (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar8 = local_res18;
  pFVar7 = local_res10;
  uVar4 = *(uint *)&(this->Renderers).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144837d83;
      uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_144837d83:
  while( true ) {
    if (*(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34 != local_50) {
      `TSparseArray<ISceneExtensionRenderer_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar12) &&
       (local_70.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Renderers + (longlong)local_70.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x28))(plVar5,pFVar7,pFVar8);
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_70);
  }
  return;
}

// UpdateViewData @ 144837df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSceneExtensionsRenderers::UpdateViewData
          (FSceneExtensionsRenderers *this,FRDGBuilder *param_1,FRendererViewDataManager *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  FRendererViewDataManager *pFVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FRendererViewDataManager *local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_70;
  int local_50;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (((this->bValidateCallbacks != false) && (this->CurrentCallbackStage != UpdateViewData)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bValidateCallbacks || InCallbackStage == CurrentCallbackStage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.h"
                         ,0x160,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->CurrentCallbackStage = UpdateSceneUniformBuffer;
  local_98 = 0;
  iVar3 = *(int *)&(this->Renderers).field_0x28;
  puVar2 = &(this->Renderers).field_0x10;
  uStack_94 = 1;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Renderers).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar2;
    }
    uVar12 = *puVar14;
    iStack_80 = 0;
    local_98 = 0;
    while (uVar12 == 0) {
      iStack_80 = iStack_80 + 0x20;
      lVar10 = (longlong)local_98;
      local_98 = local_98 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_144837ee7;
      uVar12 = puVar14[lVar10 + 1];
    }
    uStack_94 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uStack_94 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_84 = local_res20 + -1 + iStack_80;
    if (iVar3 < iStack_84) {
LAB_144837ee7:
      iStack_84 = iVar3;
    }
  }
  uVar12 = *(uint *)&(this->Renderers).field_0x28;
  local_50 = *(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar11 = (int)uVar12 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar15 = uVar12 & 0xffffffe0;
  local_70.Array =
       (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        *)puVar2;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar8 = local_res18;
  pFVar7 = local_res10;
  uVar4 = *(uint *)&(this->Renderers).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_144837fd3;
      uVar12 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar12 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar12) {
      uVar12 = uVar4;
    }
  }
LAB_144837fd3:
  while( true ) {
    if (*(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34 != local_50) {
      `TSparseArray<ISceneExtensionRenderer_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar12) &&
       (local_70.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Renderers + (longlong)local_70.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x20))(plVar5,pFVar7,pFVar8);
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_70);
  }
  return;
}

// Begin @ 145495250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSceneExtensionsRenderers::Begin
          (FSceneExtensionsRenderers *this,FSceneRendererBase *param_1,FEngineShowFlags *param_2,
          bool param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  int local_90;
  uint uStack_8c;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_68;
  int local_48;
  
  this->bValidateCallbacks = false;
  this->CurrentCallbackStage = PreInitViews;
  if ((this->SceneRenderer != (FSceneRendererBase *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsRendering()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.cpp"
                         ,0x78,L"Detected FSceneExtensionsRenderer Begin() without matching End()"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->SceneRenderer = param_1;
  if ((param_1->Scene == (FScene *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneRenderer->Scene != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.cpp"
                         ,0x7b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FSceneExtensions::CreateRenderers
            (&this->SceneRenderer->Scene->SceneExtensions,param_1,param_2,&this->Renderers);
  iVar3 = *(int *)&(this->Renderers).field_0x28;
  puVar1 = &(this->Renderers).field_0x10;
  uStack_8c = 1;
  local_90 = 0;
  iStack_7c = 0;
  iStack_78 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Renderers).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar10 = *puVar12;
    iStack_78 = 0;
    local_90 = 0;
    while (uVar10 == 0) {
      iStack_78 = iStack_78 + 0x20;
      lVar8 = (longlong)local_90;
      local_90 = local_90 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_90) goto LAB_145495397;
      uVar10 = puVar12[lVar8 + 1];
    }
    uStack_8c = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_8c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_7c = local_res10 + -1 + iStack_78;
    if (iVar3 < iStack_7c) {
LAB_145495397:
      iStack_7c = iVar3;
    }
  }
  uVar10 = *(uint *)&(this->Renderers).field_0x28;
  local_48 = *(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34;
  local_68._padding_ = CONCAT44(uStack_8c,local_90);
  local_68.CurrentBitIndex = iStack_7c;
  local_68.UnvisitedBitMask = 0xffffffff;
  local_68._28_4_ = uStack_74;
  local_68.BaseBitIndex = iStack_78;
  iVar9 = (int)uVar10 >> 5;
  uVar13 = uVar10 & 0xffffffe0;
  local_68.Array =
       (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Renderers).field_0x28;
  if (uVar10 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_145495471;
      uVar10 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_145495471:
  while( true ) {
    if (*(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34 != local_48) {
      `TSparseArray<ISceneExtensionRenderer_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_68.CurrentBitIndex == uVar10) &&
       (local_68.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar1)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Renderers + (longlong)local_68.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 8))(plVar5,param_1);
    local_68.UnvisitedBitMask = local_68.UnvisitedBitMask & ~local_68._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_68);
  }
  return;
}

// End @ 1454a1790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneExtensionsRenderers::End(FSceneExtensionsRenderers *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  undefined1 local_res10 [8];
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_60;
  int local_40;
  
  if (((this->bValidateCallbacks != false) && (this->CurrentCallbackStage != End)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bValidateCallbacks || InCallbackStage == CurrentCallbackStage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.h"
                         ,0x160,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->CurrentCallbackStage = End|PreInitViews;
  local_88 = 0;
  iVar3 = *(int *)&(this->Renderers).field_0x28;
  puVar1 = &(this->Renderers).field_0x10;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Renderers).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar9 = *puVar11;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1454a1887;
      uVar9 = puVar11[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iStack_74 = local_res18 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_1454a1887:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Renderers).field_0x28;
  local_40 = *(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar12 = (int)uVar9 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array =
       (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&(this->Renderers).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar12 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1454a1970;
      uVar9 = *(uint *)(puVar10 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_1454a1970:
  while( true ) {
    if (*(int *)&(this->Renderers).field_0x8 - *(int *)&(this->Renderers).field_0x34 != local_40) {
      `TSparseArray<ISceneExtensionRenderer_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar1)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Renderers + (longlong)local_60.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)*plVar5)(plVar5,1);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_60);
  }
  *(undefined4 *)&(this->Renderers).field_0x8 = 0;
  if (*(int *)&(this->Renderers).field_0xc < 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_>_>
              (8,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_> *)
                     &this->Renderers,0,(int *)&(this->Renderers).field_0xc);
  }
  *(undefined4 *)&(this->Renderers).field_0x34 = 0;
  *(undefined4 *)&(this->Renderers).field_0x28 = 0;
  *(undefined4 *)&(this->Renderers).field_0x30 = 0xffffffff;
  this->SceneRenderer = (FSceneRendererBase *)0x0;
  return;
}

// GetRendererPtr<FShadowSceneRenderer> @ 14556eba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FShadowSceneRenderer * __thiscall
FSceneExtensionsRenderers::GetRendererPtr<FShadowSceneRenderer>(FSceneExtensionsRenderers *this)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FShadowSceneRenderer *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  uVar2 = FShadowScene::ExtensionRegistration._8_4_;
  lVar5 = (longlong)(int)FShadowScene::ExtensionRegistration._8_4_;
  if ((-1 < (int)FShadowScene::ExtensionRegistration._8_4_) &&
     ((int)FShadowScene::ExtensionRegistration._8_4_ < *(int *)&(this->Renderers).field_0x28)) {
    if (*(int *)&(this->Renderers).field_0x28 <= (int)FShadowScene::ExtensionRegistration._8_4_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FShadowSceneRenderer *)(*pcVar1)();
        return pFVar4;
      }
    }
    puVar6 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Renderers).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      return *(FShadowSceneRenderer **)(*(longlong *)&this->Renderers + lVar5 * 8);
    }
  }
  return (FShadowSceneRenderer *)0x0;
}

// GetRendererPtr<FFirstPersonSceneExtensionRenderer> @ 145602de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FFirstPersonSceneExtensionRenderer * __thiscall
FSceneExtensionsRenderers::GetRendererPtr<FFirstPersonSceneExtensionRenderer>
          (FSceneExtensionsRenderers *this)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  FFirstPersonSceneExtensionRenderer *pFVar4;
  longlong lVar5;
  undefined1 *puVar6;
  
  uVar2 = FFirstPersonSceneExtension::ExtensionRegistration._8_4_;
  lVar5 = (longlong)(int)FFirstPersonSceneExtension::ExtensionRegistration._8_4_;
  if ((-1 < (int)FFirstPersonSceneExtension::ExtensionRegistration._8_4_) &&
     ((int)FFirstPersonSceneExtension::ExtensionRegistration._8_4_ <
      *(int *)&(this->Renderers).field_0x28)) {
    if (*(int *)&(this->Renderers).field_0x28 <=
        (int)FFirstPersonSceneExtension::ExtensionRegistration._8_4_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FFirstPersonSceneExtensionRenderer *)(*pcVar1)();
        return pFVar4;
      }
    }
    puVar6 = *(undefined1 **)&(this->Renderers).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Renderers).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar2 + ((int)uVar2 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar2 & 0x1f) & 1) != 0) {
      return *(FFirstPersonSceneExtensionRenderer **)(*(longlong *)&this->Renderers + lVar5 * 8);
    }
  }
  return (FFirstPersonSceneExtensionRenderer *)0x0;
}

