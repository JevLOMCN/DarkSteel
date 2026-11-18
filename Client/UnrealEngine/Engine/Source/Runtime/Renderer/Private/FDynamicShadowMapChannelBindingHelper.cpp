// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// DisableAllOtherChannels @ 14486fc30

void __thiscall
FDynamicShadowMapChannelBindingHelper::DisableAllOtherChannels
          (FDynamicShadowMapChannelBindingHelper *this,int param_1)

{
  int *piVar1;
  
  if (param_1 == 0) {
LAB_14486fc85:
    if (this->Channels[1].bIsAvailable != false) {
      this->Channels[1].bIsAvailable = false;
      piVar1 = &this->Channels[1].Lights.ArrayMax;
      this->Channels[1].Lights.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_>
                  (8,8,0,(ForElementType<FLightSceneInfo_*> *)(this->Channels + 1),0,piVar1);
      }
      this->AvailableChannelCount = this->AvailableChannelCount + -1;
    }
    if (param_1 == 2) goto LAB_14486fd0e;
  }
  else {
    if (this->Channels[0].bIsAvailable != false) {
      this->Channels[0].bIsAvailable = false;
      piVar1 = &this->Channels[0].Lights.ArrayMax;
      this->Channels[0].Lights.ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_>
                  (8,8,0,(ForElementType<FLightSceneInfo_*> *)this,0,piVar1);
      }
      this->AvailableChannelCount = this->AvailableChannelCount + -1;
    }
    if (param_1 != 1) goto LAB_14486fc85;
  }
  if (this->Channels[2].bIsAvailable != false) {
    this->Channels[2].bIsAvailable = false;
    piVar1 = &this->Channels[2].Lights.ArrayMax;
    this->Channels[2].Lights.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_>
                (8,8,0,(ForElementType<FLightSceneInfo_*> *)(this->Channels + 2),0,piVar1);
    }
    this->AvailableChannelCount = this->AvailableChannelCount + -1;
  }
  if (param_1 == 3) {
    return;
  }
LAB_14486fd0e:
  if (this->Channels[3].bIsAvailable != false) {
    this->Channels[3].bIsAvailable = false;
    piVar1 = &this->Channels[3].Lights.ArrayMax;
    this->Channels[3].Lights.ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_>
                (8,8,0,(ForElementType<FLightSceneInfo_*> *)(this->Channels + 3),0,piVar1);
    }
    this->AvailableChannelCount = this->AvailableChannelCount + -1;
  }
  return;
}

// DisableChannel @ 14486fd70

void __thiscall
FDynamicShadowMapChannelBindingHelper::DisableChannel
          (FDynamicShadowMapChannelBindingHelper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ForElementType<FLightSceneInfo_*> *pFVar3;
  
  if (3 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelIndex >= 0 && ChannelIndex < CHANNEL_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicShadowMapChannelBindingHelper.h"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = (ForElementType<FLightSceneInfo_*> *)(this->Channels + param_1);
  if (pFVar3[1].InlineData[8] != '\0') {
    pFVar3[1].InlineData[8] = '\0';
    pFVar3[1].InlineData[0] = '\0';
    pFVar3[1].InlineData[1] = '\0';
    pFVar3[1].InlineData[2] = '\0';
    pFVar3[1].InlineData[3] = '\0';
    if (*(int *)(pFVar3[1].InlineData + 4) != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_>
                (8,8,0,pFVar3,0,(int *)(pFVar3[1].InlineData + 4));
    }
    this->AvailableChannelCount = this->AvailableChannelCount + -1;
  }
  return;
}

// GetBestAvailableChannel @ 14487ae40

int __thiscall
FDynamicShadowMapChannelBindingHelper::GetBestAvailableChannel
          (FDynamicShadowMapChannelBindingHelper *this)

{
  bool bVar1;
  int iVar2;
  
  if (this->AvailableChannelCount < 1) {
    return -1;
  }
  bVar1 = this->Channels[0].bIsAvailable;
  iVar2 = (bVar1 != false) - 1;
  if (this->Channels[1].bIsAvailable != false) {
    if (bVar1 == false) {
      iVar2 = 1;
    }
    else if (this->Channels[1].Lights.ArrayNum < this->Channels[iVar2].Lights.ArrayNum) {
      iVar2 = 1;
    }
  }
  if (this->Channels[2].bIsAvailable != false) {
    if (iVar2 == -1) {
      iVar2 = 2;
    }
    else if (this->Channels[2].Lights.ArrayNum < this->Channels[iVar2].Lights.ArrayNum) {
      iVar2 = 2;
    }
  }
  if (this->Channels[3].bIsAvailable != false) {
    if (iVar2 == -1) {
      return 3;
    }
    if (this->Channels[3].Lights.ArrayNum < this->Channels[iVar2].Lights.ArrayNum) {
      iVar2 = 3;
    }
  }
  return iVar2;
}

// GetPriority @ 14487d3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

int __cdecl FDynamicShadowMapChannelBindingHelper::GetPriority(FLightSceneInfo *param_1)

{
  FLightSceneProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (param_1 == (FLightSceneInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Light",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicShadowMapChannelBindingHelper.cpp"
                       ,0x6f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = param_1->Proxy;
  if ((pFVar1 != (FLightSceneProxy *)0x0) &&
     ((pFVar1->bCastDynamicShadow != '\0' ||
      (pFVar1->LightFunctionMaterial != (FMaterialRenderProxy *)0x0)))) {
    if (pFVar1->bStaticShadowing != '\0') {
      return 2;
    }
    return (int)(pFVar1->LightType == '\0');
  }
  return -1;
}

// SortLightByPriority @ 1448a29e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FDynamicShadowMapChannelBindingHelper::SortLightByPriority
          (FDynamicShadowMapChannelBindingHelper *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  ForElementType<FLightSceneInfo_*> FVar3;
  ForElementType<FLightSceneInfo_*> FVar4;
  FIdentityFunctor local_res10 [24];
  
  if (3 < (uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ChannelIndex >= 0 && ChannelIndex < CHANNEL_COUNT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicShadowMapChannelBindingHelper.cpp"
                       ,0x65,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4 = (ForElementType<FLightSceneInfo_*>)(this->Channels + param_1);
  FVar3 = *(ForElementType<FLightSceneInfo_*> *)((longlong)FVar4 + 0x40);
  if (*(ForElementType<FLightSceneInfo_*> *)((longlong)FVar4 + 0x40) ==
      (ForElementType<FLightSceneInfo_*>)0x0) {
    FVar3 = FVar4;
  }
  AlgoImpl::
  IntroSortInternal<FLightSceneInfo_*,int,FIdentityFunctor,TDereferenceWrapper<FLightSceneInfo_*,_FDynamicShadowMapChannelBindingHelper::SortLightByPriority_::__l2::<lambda_1>_>_>
            ((FLightSceneInfo **)FVar3,*(int *)((longlong)FVar4 + 0x48),local_res10[0],
             (<lambda_1> *)local_res10);
  return;
}

// UpdateAvailableChannels @ 1448abf80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
FDynamicShadowMapChannelBindingHelper::UpdateAvailableChannels
          (FDynamicShadowMapChannelBindingHelper *this,
          TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
          *param_1,FLightSceneInfo *param_2)

{
  ulonglong uVar1;
  int iVar2;
  FLightSceneProxy *pFVar3;
  FLightSceneInfo *this_00;
  ForElementType<FLightSceneInfo_*> FVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ForElementType<FLightSceneInfo_*> FVar10;
  longlong lVar11;
  ForElementType<FLightSceneInfo_*> FVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  FLightSceneInfo *local_e8;
  int local_e0;
  uint uStack_dc;
  undefined1 *puStack_d8;
  undefined4 local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  iVar9 = 0;
  if (((param_2 == (FLightSceneInfo *)0x0) ||
      (pFVar3 = param_2->Proxy, pFVar3 == (FLightSceneProxy *)0x0)) ||
     ((pFVar3->bCastDynamicShadow == '\0' &&
      (pFVar3->LightFunctionMaterial == (FMaterialRenderProxy *)0x0)))) {
    uVar15 = 0xffffffff;
  }
  else if (pFVar3->bStaticShadowing == '\0') {
    uVar15 = (uint)(pFVar3->LightType == '\0');
  }
  else {
    uVar15 = 2;
  }
  if (uVar15 == 0xffffffff) {
    do {
      DisableChannel(this,iVar9);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
    return;
  }
  (**(code **)(param_2->Proxy->_padding_ + 0x10))(param_2->Proxy,&local_98);
  iVar2 = *(int *)&param_1->field_0x28;
  puStack_d8 = &param_1->field_0x10;
  local_e0 = 0;
  uStack_dc = 1;
  iStack_cc = 0;
  iStack_c8 = 0;
  if (iVar2 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puStack_d8;
    }
    uVar8 = *puVar14;
    iStack_c8 = iVar9;
    local_e0 = iVar9;
    while (uVar8 == 0) {
      iStack_c8 = iStack_c8 + 0x20;
      lVar11 = (longlong)local_e0;
      local_e0 = local_e0 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_e0) goto LAB_1448ac0c2;
      uVar8 = puVar14[lVar11 + 1];
    }
    uStack_dc = -uVar8 & uVar8;
    uVar1 = (ulonglong)uStack_dc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iStack_cc = (int)lVar11 + -1 + iStack_c8;
    if (iVar2 < iStack_cc) {
LAB_1448ac0c2:
      iStack_cc = iVar2;
    }
  }
  local_d0 = 0xffffffff;
  local_b8._padding_ = CONCAT44(uStack_dc,local_e0);
  local_b8.UnvisitedBitMask = 0xffffffff;
  local_b8.CurrentBitIndex = iStack_cc;
  local_b8._28_4_ = uStack_c4;
  local_b8.BaseBitIndex = iStack_c8;
  local_c0 = param_1;
  local_b8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_d8;
  if (iStack_cc < iVar2) {
    do {
      this_00 = *(FLightSceneInfo **)
                 ((longlong)local_b8.CurrentBitIndex * 0x40 + 0x30 + *(longlong *)local_c0);
      if ((this_00 != (FLightSceneInfo *)0x0) &&
         (((this_00->Proxy->bCastDynamicShadow != '\0' ||
           (this_00->Proxy->LightFunctionMaterial != (FMaterialRenderProxy *)0x0)) &&
          (this_00 != param_2)))) {
        uVar8 = FLightSceneInfo::GetDynamicShadowMapChannel(this_00);
        if (uVar8 != 0xffffffff) {
          if ((3 < uVar8) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("ChannelIndex >= 0 && ChannelIndex < CHANNEL_COUNT",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicShadowMapChannelBindingHelper.h"
                                 ,0x1d,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar12 = (ForElementType<FLightSceneInfo_*>)(this->Channels + (int)uVar8);
          if (((*(uchar *)((longlong)FVar12 + 0x50) != '\0') &&
              (pFVar3 = this_00->Proxy, pFVar3 != (FLightSceneProxy *)0x0)) &&
             ((pFVar3->bCastDynamicShadow != '\0' ||
              (pFVar3->LightFunctionMaterial != (FMaterialRenderProxy *)0x0)))) {
            if (pFVar3->bStaticShadowing == '\0') {
              uVar13 = (uint)(pFVar3->LightType == '\0');
            }
            else {
              uVar13 = 2;
            }
            if (((int)uVar15 < 2) || (uVar13 < 2)) {
              local_78 = local_98;
              uStack_70 = uStack_90;
              local_48 = local_80;
              uStack_44 = uStack_7c;
              local_50 = local_80;
              uStack_4c = uStack_7c;
              local_60 = local_80;
              uStack_5c = uStack_7c;
              uStack_58 = local_80;
              uStack_54 = uStack_7c;
              local_68 = local_88;
              cVar7 = (**(code **)(pFVar3->_padding_ + 8))(pFVar3,&local_78);
              if (cVar7 != '\0') {
                if ((int)uVar13 < (int)uVar15) {
                  local_e8 = this_00;
                  if ((3 < uVar8) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("ChannelIndex >= 0 && ChannelIndex < CHANNEL_COUNT",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicShadowMapChannelBindingHelper.h"
                                         ,0x1d,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  if (((*(uchar *)((longlong)FVar12 + 0x50) == '\0') ||
                      (local_e8 == (FLightSceneInfo *)0x0)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsChannelEnabled(ChannelIndex) && Light",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicShadowMapChannelBindingHelper.h"
                                         ,0x46,L""), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                  FVar4 = *(ForElementType<FLightSceneInfo_*> *)((longlong)FVar12 + 0x40);
                  FVar10 = FVar12;
                  if (FVar4 != (ForElementType<FLightSceneInfo_*>)0x0) {
                    FVar10 = FVar4;
                  }
                  if ((ulonglong)FVar10 <= &local_e8) {
                    FVar10 = FVar12;
                    if (FVar4 != (ForElementType<FLightSceneInfo_*>)0x0) {
                      FVar10 = FVar4;
                    }
                    if ((&local_e8 <
                         (FLightSceneInfo **)
                         ((longlong)FVar10 + (longlong)*(int *)((longlong)FVar12 + 0x4c) * 8)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      (*pcVar5)();
                      return;
                    }
                  }
                  iVar9 = *(int *)((longlong)FVar12 + 0x48);
                  if (iVar9 == *(int *)((longlong)FVar12 + 0x4c)) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FLightSceneInfo_*>_>
                                      (0x808,(ForElementType<FLightSceneInfo_*> *)FVar12,
                                       (int *)((longlong)FVar12 + 0x4c));
                  }
                  *(int *)((longlong)FVar12 + 0x48) = iVar9 + 1;
                  if (*(ForElementType<FLightSceneInfo_*> *)((longlong)FVar12 + 0x40) !=
                      (ForElementType<FLightSceneInfo_*>)0x0) {
                    FVar12 = *(ForElementType<FLightSceneInfo_*> *)((longlong)FVar12 + 0x40);
                  }
                  *(FLightSceneInfo **)((longlong)FVar12 + (longlong)iVar9 * 8) = local_e8;
                }
                else {
                  DisableChannel(this,uVar8);
                  if (this->AvailableChannelCount < 1) {
                    return;
                  }
                }
              }
            }
          }
        }
      }
      local_b8.UnvisitedBitMask = local_b8.UnvisitedBitMask & ~local_b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_b8);
    } while (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits);
  }
  return;
}

