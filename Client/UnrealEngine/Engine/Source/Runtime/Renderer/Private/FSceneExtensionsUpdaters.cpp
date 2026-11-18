// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// PostGPUSceneUpdate @ 145445770

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
FSceneExtensionsUpdaters::PostGPUSceneUpdate
          (FSceneExtensionsUpdaters *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

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
  
  uStack_94 = 1;
  iVar3 = *(int *)&(this->Updaters).field_0x28;
  puVar2 = &(this->Updaters).field_0x10;
  local_98 = 0;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Updaters).field_0x20;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_145445827;
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
LAB_145445827:
      iStack_84 = iVar3;
    }
  }
  uVar12 = *(uint *)&(this->Updaters).field_0x28;
  local_50 = *(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar11 = (int)uVar12 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar15 = uVar12 & 0xffffffe0;
  local_res10 = param_1;
  local_res18 = param_2;
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
  uVar4 = *(uint *)&(this->Updaters).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Updaters).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145445913;
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
LAB_145445913:
  while( true ) {
    if (*(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34 != local_50) {
      `TSparseArray<ISceneExtensionUpdater_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar12) &&
       (local_70.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Updaters + (longlong)local_70.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x38))(plVar5,pFVar7,pFVar8);
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_70);
  }
  return;
}

// PostLightsUpdate @ 145445980

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
FSceneExtensionsUpdaters::PostLightsUpdate
          (FSceneExtensionsUpdaters *this,FRDGBuilder *param_1,FLightSceneChangeSet *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  FLightSceneChangeSet *pFVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FLightSceneChangeSet *local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_70;
  int local_50;
  
  uStack_94 = 1;
  iVar3 = *(int *)&(this->Updaters).field_0x28;
  puVar2 = &(this->Updaters).field_0x10;
  local_98 = 0;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Updaters).field_0x20;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_145445a37;
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
LAB_145445a37:
      iStack_84 = iVar3;
    }
  }
  uVar12 = *(uint *)&(this->Updaters).field_0x28;
  local_50 = *(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar11 = (int)uVar12 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar15 = uVar12 & 0xffffffe0;
  local_res10 = param_1;
  local_res18 = param_2;
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
  uVar4 = *(uint *)&(this->Updaters).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Updaters).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145445b23;
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
LAB_145445b23:
  while( true ) {
    if (*(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34 != local_50) {
      `TSparseArray<ISceneExtensionUpdater_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar12) &&
       (local_70.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Updaters + (longlong)local_70.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x18))(plVar5,pFVar7,pFVar8);
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_70);
  }
  return;
}

// PostSceneUpdate @ 145445bb0

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
FSceneExtensionsUpdaters::PostSceneUpdate
          (FSceneExtensionsUpdaters *this,FRDGBuilder *param_1,FScenePostUpdateChangeSet *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  FScenePostUpdateChangeSet *pFVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FScenePostUpdateChangeSet *local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_70;
  int local_50;
  
  uStack_94 = 1;
  iVar3 = *(int *)&(this->Updaters).field_0x28;
  puVar2 = &(this->Updaters).field_0x10;
  local_98 = 0;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Updaters).field_0x20;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_145445c67;
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
LAB_145445c67:
      iStack_84 = iVar3;
    }
  }
  uVar12 = *(uint *)&(this->Updaters).field_0x28;
  local_50 = *(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar11 = (int)uVar12 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar15 = uVar12 & 0xffffffe0;
  local_res10 = param_1;
  local_res18 = param_2;
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
  uVar4 = *(uint *)&(this->Updaters).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Updaters).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145445d53;
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
LAB_145445d53:
  while( true ) {
    if (*(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34 != local_50) {
      `TSparseArray<ISceneExtensionUpdater_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar12) &&
       (local_70.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Updaters + (longlong)local_70.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x30))(plVar5,pFVar7,pFVar8);
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_70);
  }
  return;
}

// PreLightsUpdate @ 145445de0

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
FSceneExtensionsUpdaters::PreLightsUpdate
          (FSceneExtensionsUpdaters *this,FRDGBuilder *param_1,FLightSceneChangeSet *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  FLightSceneChangeSet *pFVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FLightSceneChangeSet *local_res18;
  int local_res20;
  int local_98;
  uint uStack_94;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_70;
  int local_50;
  
  uStack_94 = 1;
  iVar3 = *(int *)&(this->Updaters).field_0x28;
  puVar2 = &(this->Updaters).field_0x10;
  local_98 = 0;
  iStack_84 = 0;
  iStack_80 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(this->Updaters).field_0x20;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_98) goto LAB_145445e97;
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
LAB_145445e97:
      iStack_84 = iVar3;
    }
  }
  uVar12 = *(uint *)&(this->Updaters).field_0x28;
  local_50 = *(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34;
  local_70._padding_ = CONCAT44(uStack_94,local_98);
  iVar11 = (int)uVar12 >> 5;
  local_70.CurrentBitIndex = iStack_84;
  local_70.UnvisitedBitMask = 0xffffffff;
  local_70._28_4_ = uStack_7c;
  local_70.BaseBitIndex = iStack_80;
  uVar15 = uVar12 & 0xffffffe0;
  local_res10 = param_1;
  local_res18 = param_2;
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
  uVar4 = *(uint *)&(this->Updaters).field_0x28;
  if (uVar12 != uVar4) {
    puVar13 = *(undefined1 **)&(this->Updaters).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar11 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar12 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145445f83;
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
LAB_145445f83:
  while( true ) {
    if (*(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34 != local_50) {
      `TSparseArray<ISceneExtensionUpdater_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_70.CurrentBitIndex == uVar12) &&
       (local_70.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Updaters + (longlong)local_70.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x20))(plVar5,pFVar7,pFVar8);
    local_70.UnvisitedBitMask = local_70.UnvisitedBitMask & ~local_70._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_70);
  }
  return;
}

// PreSceneUpdate @ 145445ff0

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
FSceneExtensionsUpdaters::PreSceneUpdate
          (FSceneExtensionsUpdaters *this,FRDGBuilder *param_1,FScenePreUpdateChangeSet *param_2,
          FSceneUniformBuffer *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FRDGBuilder *pFVar7;
  FScenePreUpdateChangeSet *pFVar8;
  FSceneUniformBuffer *pFVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FScenePreUpdateChangeSet *local_res18;
  FSceneUniformBuffer *local_res20;
  int local_a0;
  uint uStack_9c;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  local_78;
  int local_58;
  
  uStack_9c = 1;
  iVar3 = *(int *)&(this->Updaters).field_0x28;
  puVar2 = &(this->Updaters).field_0x10;
  local_a0 = 0;
  iStack_8c = 0;
  iStack_88 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Updaters).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar2;
    }
    uVar13 = *puVar15;
    iStack_88 = 0;
    local_a0 = 0;
    while (uVar13 == 0) {
      iStack_88 = iStack_88 + 0x20;
      lVar11 = (longlong)local_a0;
      local_a0 = local_a0 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a0) goto LAB_1454460b7;
      uVar13 = puVar15[lVar11 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_8c = (int)lVar11 + -1 + iStack_88;
    if (iVar3 < iStack_8c) {
LAB_1454460b7:
      iStack_8c = iVar3;
    }
  }
  uVar13 = *(uint *)&(this->Updaters).field_0x28;
  local_58 = *(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34;
  local_78._padding_ = CONCAT44(uStack_9c,local_a0);
  iVar12 = (int)uVar13 >> 5;
  local_78.CurrentBitIndex = iStack_8c;
  local_78.UnvisitedBitMask = 0xffffffff;
  local_78._28_4_ = uStack_84;
  local_78.BaseBitIndex = iStack_88;
  uVar16 = uVar13 & 0xffffffe0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  local_78.Array =
       (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        *)puVar2;
  if ((((int)uVar13 < 0) || (iVar3 < (int)uVar13)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = local_res20;
  pFVar8 = local_res18;
  pFVar7 = local_res10;
  uVar4 = *(uint *)&(this->Updaters).field_0x28;
  if (uVar13 != uVar4) {
    puVar14 = *(undefined1 **)&(this->Updaters).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar2;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1454461b0;
      uVar13 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar13) {
      uVar13 = uVar4;
    }
  }
LAB_1454461b0:
  while( true ) {
    if (*(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34 != local_58) {
      `TSparseArray<ISceneExtensionUpdater_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_78.CurrentBitIndex == uVar13) &&
       (local_78.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Updaters + (longlong)local_78.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x28))(plVar5,pFVar7,pFVar8,pFVar9);
    local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_78);
  }
  return;
}

// Begin @ 1454954f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneExtensionsUpdaters::Begin(FSceneExtensionsUpdaters *this,FScene *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  FScene *pFVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FScene *local_res10;
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
  if ((this->Scene != (FScene *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUpdating()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneExtensions.cpp"
                         ,0x5e,L"Detected FSceneExtensionsUpdater Begin() without matching End()"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->Scene = param_1;
  FSceneExtensions::CreateUpdaters(&param_1->SceneExtensions,&this->Updaters);
  iVar3 = *(int *)&(this->Updaters).field_0x28;
  puVar2 = &(this->Updaters).field_0x10;
  uStack_84 = 1;
  local_88 = 0;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Updaters).field_0x20;
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1454955e8;
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
LAB_1454955e8:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->Updaters).field_0x28;
  local_40 = *(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34;
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
  uVar4 = *(uint *)&(this->Updaters).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->Updaters).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_1454956d0;
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
LAB_1454956d0:
  while( true ) {
    if (*(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34 != local_40) {
      `TSparseArray<ISceneExtensionUpdater_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar2)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Updaters + (longlong)local_60.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 8))(plVar5,pFVar7);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_60);
  }
  return;
}

// End @ 1454a1a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FSceneExtensionsUpdaters::End(FSceneExtensionsUpdaters *this)

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
  
  uStack_84 = 1;
  local_88 = 0;
  iVar3 = *(int *)&(this->Updaters).field_0x28;
  puVar1 = &(this->Updaters).field_0x10;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Updaters).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar9 = *puVar11;
    iStack_70 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1454a1aea;
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
LAB_1454a1aea:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Updaters).field_0x28;
  local_40 = *(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34;
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
  uVar4 = *(uint *)&(this->Updaters).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Updaters).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar12 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1454a1bd0;
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
LAB_1454a1bd0:
  while( true ) {
    if (*(int *)&(this->Updaters).field_0x8 - *(int *)&(this->Updaters).field_0x34 != local_40) {
      `TSparseArray<ISceneExtensionUpdater_*,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array ==
        (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
         *)puVar1)) break;
    plVar5 = *(longlong **)(*(longlong *)&this->Updaters + (longlong)local_60.CurrentBitIndex * 8);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    (**(code **)*plVar5)(plVar5,1);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_60);
  }
  *(undefined4 *)&(this->Updaters).field_0x8 = 0;
  if (*(int *)&(this->Updaters).field_0xc < 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_>_>
              (8,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<8,8>_>_> *)
                     &this->Updaters,0,(int *)&(this->Updaters).field_0xc);
  }
  *(undefined4 *)&(this->Updaters).field_0x34 = 0;
  *(undefined4 *)&(this->Updaters).field_0x28 = 0;
  *(undefined4 *)&(this->Updaters).field_0x30 = 0xffffffff;
  this->Scene = (FScene *)0x0;
  return;
}

