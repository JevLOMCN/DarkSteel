// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 7

// GatherShotRenderTelemetryForGraph @ 14dd83e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMoviePipelineShotRenderTelemetry * __cdecl
FMoviePipelineTelemetry::GatherShotRenderTelemetryForGraph
          (FMoviePipelineShotRenderTelemetry *__return_storage_ptr__,
          UMoviePipelineExecutorShot *param_1,UMovieGraphEvaluatedConfig *param_2)

{
  FObjectPtr_u_0 *pFVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  UMovieGraphNode *this;
  code *pcVar6;
  TMap<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
  *pTVar7;
  bool bVar8;
  UMovieGraphConfig *pUVar9;
  UClass *pUVar10;
  UObject *pUVar11;
  FMoviePipelineShotRenderTelemetry *pFVar12;
  longlong lVar13;
  int iVar14;
  FObjectPtr_u_0 *this_00;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  TMap<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
  *pTVar20;
  float in_XMM1_Da;
  undefined1 auStackY_158 [32];
  undefined1 local_128;
  undefined1 local_127 [7];
  undefined1 local_120 [16];
  int local_110;
  TMap<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
  *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  TMap<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
  *local_d0;
  TMap<FName,FMovieGraphEvaluatedBranchConfig,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FMovieGraphEvaluatedBranchConfig,0>_>
  *local_c8;
  undefined1 auStack_c0 [32];
  int iStack_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForAnyElementType local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  __return_storage_ptr__->bIsQuickRender = false;
  __return_storage_ptr__->bUsesDeferred = false;
  __return_storage_ptr__->bUsesPathTracer = false;
  __return_storage_ptr__->bUsesPanoramic = false;
  __return_storage_ptr__->bUsesHighResTiling = false;
  __return_storage_ptr__->bUsesNDisplay = false;
  __return_storage_ptr__->bUsesObjectID = false;
  __return_storage_ptr__->bUsesMultiCamera = false;
  __return_storage_ptr__->ResolutionX = 0;
  __return_storage_ptr__->ResolutionY = 0;
  __return_storage_ptr__->HandleFrameCount = 0;
  __return_storage_ptr__->TemporalSampleCount = 0;
  __return_storage_ptr__->SpatialSampleCount = 0;
  __return_storage_ptr__->RenderLayerCount = 0;
  __return_storage_ptr__->HighResTileCount = 0;
  __return_storage_ptr__->HighResOverlap = 0.0;
  __return_storage_ptr__->bUsesPageToSystemMemory = false;
  __return_storage_ptr__->bUsesScripting = false;
  __return_storage_ptr__->bUsesSubgraphs = false;
  __return_storage_ptr__->bUsesPPMs = false;
  __return_storage_ptr__->bUsesAudio = false;
  __return_storage_ptr__->bUsesAvid = false;
  __return_storage_ptr__->bUsesProRes = false;
  __return_storage_ptr__->bUsesMP4 = false;
  __return_storage_ptr__->bUsesJPG = false;
  __return_storage_ptr__->bUsesPNG = false;
  __return_storage_ptr__->bUsesBMP = false;
  __return_storage_ptr__->bUsesEXR = false;
  __return_storage_ptr__->bUsesMultiEXR = false;
  __return_storage_ptr__->bIsGraph = true;
  __return_storage_ptr__->bIsQuickRender = bIsCurrentRenderRequestQuickRender;
  UMovieGraphBlueprintLibrary::GetOverscannedResolution
            ((UMovieGraphEvaluatedConfig *)local_120,in_XMM1_Da,0.0);
  __return_storage_ptr__->ResolutionX = local_120._0_4_;
  __return_storage_ptr__->ResolutionY = local_120._4_4_;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  iVar17 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  pUVar9 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous(&param_1->GraphPreset);
  if (pUVar9 != (UMovieGraphConfig *)0x0) {
    UMovieGraphConfig::GetAllContainedSubgraphs
              (pUVar9,(TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>
                       *)local_98);
  }
  if (local_98._8_4_ == local_64) {
    pUVar10 = UMoviePipelineExecutorJob::StaticClass();
    pUVar11 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar10);
    if ((pUVar11 != (UObject *)0x0) &&
       (pUVar9 = TSoftObjectPtr<UMovieGraphConfig>::LoadSynchronous
                           ((TSoftObjectPtr<UMovieGraphConfig> *)&pUVar11[7].field_0x20),
       pUVar9 != (UMovieGraphConfig *)0x0)) {
      UMovieGraphConfig::GetAllContainedSubgraphs
                (pUVar9,(TSet<UMovieGraphConfig_*,DefaultKeyFuncs<UMovieGraphConfig_*,0>,FDefaultSetAllocator>
                         *)local_98);
    }
  }
  local_50 = 0;
  __return_storage_ptr__->bUsesSubgraphs = local_98._8_4_ != local_64;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  iVar4 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar4 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  iVar4 = *(int *)&(param_2->BranchConfigMapping).field_0x28;
  puVar3 = &(param_2->BranchConfigMapping).field_0x10;
  pTVar20 = &param_2->BranchConfigMapping;
  uStack_fc = 1;
  iStack_ec = iVar17;
  iStack_100 = iVar17;
  if (iVar4 != 0) {
    puVar19 = *(uint **)&(param_2->BranchConfigMapping).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar3;
    }
    uVar16 = *puVar19;
    iVar17 = 0;
    iStack_100 = 0;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_100;
      iVar17 = iVar17 + 0x20;
      iStack_100 = iStack_100 + 1;
      iStack_ec = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100) goto LAB_14dd8401d;
      uVar16 = puVar19[lVar13 + 1];
    }
    uStack_fc = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_fc * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_d8 = (int)lVar13;
    iStack_ec = iVar17 + -1 + local_d8;
    if (iVar4 < iStack_ec) {
      iStack_ec = iVar4;
    }
  }
LAB_14dd8401d:
  iStack_e0 = *(int *)&(param_2->BranchConfigMapping).field_0x8 -
              *(int *)&(param_2->BranchConfigMapping).field_0x34;
  uVar16 = *(uint *)&(param_2->BranchConfigMapping).field_0x28;
  uStack_f0 = 0xffffffff;
  auStack_c0._0_8_ = CONCAT44(uStack_fc,iStack_100);
  uVar15 = uVar16 & 0xffffffe0;
  auStack_c0._20_4_ = iStack_ec;
  auStack_c0._16_4_ = 0xffffffff;
  iVar14 = (int)uVar16 >> 5;
  auStack_c0._28_4_ = iStack_ec;
  auStack_c0._24_4_ = iVar17;
  unique0x1000036a = uStack_dc;
  iStack_a0 = iStack_e0;
  local_108 = pTVar20;
  local_f8 = puVar3;
  local_e8 = iVar17;
  iStack_e4 = iStack_ec;
  local_d0 = pTVar20;
  local_c8 = pTVar20;
  auStack_c0._8_8_ = puVar3;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FMoviePipelineShotRenderTelemetry *)(*pcVar6)();
    return pFVar12;
  }
  uVar5 = *(uint *)&(param_2->BranchConfigMapping).field_0x28;
  if (uVar16 != uVar5) {
    puVar18 = *(undefined1 **)&(param_2->BranchConfigMapping).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar3;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar14 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar16 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14dd84130;
      uVar16 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar15;
    if ((int)uVar5 < (int)uVar16) {
      uVar16 = uVar5;
    }
  }
LAB_14dd84130:
  while( true ) {
    pTVar7 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != iStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FMovieGraphEvaluatedBranchConfig>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_128);
    }
    if (((auStack_c0._20_4_ == uVar16) && ((undefined1 *)auStack_c0._8_8_ == puVar3)) &&
       (pTVar7 == pTVar20)) break;
    FMovieGraphEvaluatedBranchConfig::GetNodes
              ((FMovieGraphEvaluatedBranchConfig *)
               ((longlong)(int)auStack_c0._20_4_ * 0x60 + *(longlong *)pTVar7 + 8),
               (TArray<TObjectPtr<UMovieGraphNode>,TSizedDefaultAllocator<32>_> *)(local_120 + 8));
    iVar17 = local_110;
    pFVar1 = (FObjectPtr_u_0 *)(local_120._8_8_ + (longlong)local_110 * 8);
    this_00 = (FObjectPtr_u_0 *)local_120._8_8_;
    while( true ) {
      if (local_110 != iVar17) {
        `TCheckedPointerIterator<TObjectPtr<UMovieGraphNode>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_127);
      }
      if (this_00 == pFVar1) break;
      if (this_00->Handle != (UObject *)0x0) {
        pUVar10 = Z_Construct_UClass_UMovieGraphSettingNode_NoRegister();
        bVar8 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar10);
        if (((bVar8) && (this = (UMovieGraphNode *)this_00->Handle, this != (UMovieGraphNode *)0x0))
           && (bVar8 = UMovieGraphNode::IsDisabled(this), !bVar8)) {
          (**(code **)(this->_padding_ + 0x378))(this,__return_storage_ptr__);
        }
      }
      this_00 = this_00 + 1;
    }
    if ((FObjectPtr_u_0 *)local_120._8_8_ != (FObjectPtr_u_0 *)0x0) {
      FMemory::Free((void *)local_120._8_8_);
    }
    auStack_c0._16_4_ = auStack_c0._16_4_ & ~auStack_c0._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
    pTVar20 = local_d0;
  }
  return __return_storage_ptr__;
}

// GatherShotRenderTelemetryForLegacy @ 14dd84250

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMoviePipelineShotRenderTelemetry * __cdecl
FMoviePipelineTelemetry::GatherShotRenderTelemetryForLegacy
          (FMoviePipelineShotRenderTelemetry *__return_storage_ptr__,
          UMoviePipelineExecutorShot *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UMoviePipelineExecutorShot *this;
  UMoviePipelineShotConfig *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *pTVar11;
  FMoviePipelineShotRenderTelemetry *pFVar12;
  ForAnyElementType FVar13;
  float in_XMM2_Da;
  undefined1 local_res8 [8];
  undefined4 local_res10;
  undefined4 local_res14;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_88;
  void *local_78 [2];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined4 uStack_57;
  undefined3 uStack_53;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint local_30;
  
  uStack_67 = 0;
  uStack_60 = 0;
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_30 = local_30 & 0xffffff00;
  local_68 = 0;
  uStack_5f = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  pUVar9 = UMoviePipelineExecutorJob::StaticClass();
  pUVar10 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar9);
  this = *(UMoviePipelineExecutorShot **)&pUVar10[6].field_0x10;
  UMoviePipelineBlueprintLibrary::GetOverscannedResolution
            ((UMoviePipelinePrimaryConfig *)&local_res10,this,in_XMM2_Da);
  uStack_50 = local_res10;
  uStack_4c = local_res14;
  UMoviePipelinePrimaryConfig::GetAllSettings
            ((UMoviePipelinePrimaryConfig *)this,&local_88,false,false);
  pUVar3 = (param_1->ShotOverrideConfig).field0_0x0.DebugPtr;
  if (pUVar3 != (UMoviePipelineShotConfig *)0x0) {
    pTVar11 = (TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *)
              (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3,local_78);
    if (&local_88 == pTVar11) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x986,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar12 = (FMoviePipelineShotRenderTelemetry *)(*pcVar5)();
        return pFVar12;
      }
    }
    iVar2 = pTVar11->ArrayNum;
    if (iVar2 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&local_88.AllocatorInstance,&local_88.ArrayNum,&local_88.ArrayMax
                        );
      memmove(local_88.AllocatorInstance.Data + (longlong)iVar8 * 8,
              (pTVar11->AllocatorInstance).Data,(longlong)iVar2 << 3);
      pTVar11->ArrayNum = 0;
    }
    if (local_78[0] != (void *)0x0) {
      FMemory::Free(local_78[0]);
    }
  }
  iVar2 = local_88.ArrayNum;
  pFVar1 = local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 8;
  FVar13.Data = local_88.AllocatorInstance.Data;
  while( true ) {
    if (local_88.ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar13.Data == pFVar1) break;
    plVar4 = *(longlong **)FVar13.Data;
    if (plVar4 != (longlong *)0x0) {
      cVar7 = (**(code **)(*plVar4 + 0x328))(plVar4);
      if (cVar7 != '\0') {
        (**(code **)(*plVar4 + 0x2b0))(plVar4,&local_68);
      }
    }
    FVar13.Data = FVar13.Data + 8;
  }
  __return_storage_ptr__->bIsGraph = (bool)local_68;
  __return_storage_ptr__->bIsQuickRender = (bool)(char)uStack_67;
  __return_storage_ptr__->bUsesDeferred = (bool)(char)((uint7)uStack_67 >> 8);
  __return_storage_ptr__->bUsesPathTracer = (bool)(char)((uint7)uStack_67 >> 0x10);
  __return_storage_ptr__->bUsesPanoramic = (bool)(char)((uint7)uStack_67 >> 0x18);
  __return_storage_ptr__->bUsesHighResTiling = (bool)(char)((uint7)uStack_67 >> 0x20);
  __return_storage_ptr__->bUsesNDisplay = (bool)(char)((uint7)uStack_67 >> 0x28);
  __return_storage_ptr__->bUsesObjectID = (bool)(char)((uint7)uStack_67 >> 0x30);
  __return_storage_ptr__->bUsesMultiCamera = (bool)uStack_60;
  __return_storage_ptr__->bUsesScripting = (bool)(char)uStack_5f;
  __return_storage_ptr__->bUsesSubgraphs = (bool)(char)((uint7)uStack_5f >> 8);
  __return_storage_ptr__->bUsesPPMs = (bool)(char)((uint7)uStack_5f >> 0x10);
  __return_storage_ptr__->bUsesAudio = (bool)(char)((uint7)uStack_5f >> 0x18);
  __return_storage_ptr__->bUsesAvid = (bool)(char)((uint7)uStack_5f >> 0x20);
  __return_storage_ptr__->bUsesProRes = (bool)(char)((uint7)uStack_5f >> 0x28);
  __return_storage_ptr__->bUsesMP4 = (bool)(char)((uint7)uStack_5f >> 0x30);
  __return_storage_ptr__->bUsesJPG = (bool)uStack_58;
  __return_storage_ptr__->bUsesPNG = (bool)(char)uStack_57;
  __return_storage_ptr__->bUsesBMP = (bool)(char)((uint)uStack_57 >> 8);
  __return_storage_ptr__->bUsesEXR = (bool)(char)((uint)uStack_57 >> 0x10);
  __return_storage_ptr__->bUsesMultiEXR = (bool)(char)((uint)uStack_57 >> 0x18);
  *(undefined3 *)&__return_storage_ptr__->field_0x15 = uStack_53;
  __return_storage_ptr__->ResolutionX = uStack_50;
  __return_storage_ptr__->ResolutionY = uStack_4c;
  __return_storage_ptr__->HandleFrameCount = (undefined4)local_48;
  __return_storage_ptr__->TemporalSampleCount = local_48._4_4_;
  __return_storage_ptr__->SpatialSampleCount = (undefined4)uStack_40;
  __return_storage_ptr__->RenderLayerCount = uStack_40._4_4_;
  __return_storage_ptr__->HighResTileCount = (undefined4)local_38;
  __return_storage_ptr__->HighResOverlap = (float)local_38._4_4_;
  *(uint *)&__return_storage_ptr__->bUsesPageToSystemMemory = local_30;
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSessionType @ 14dd8c950

FString * __cdecl FMoviePipelineTelemetry::GetSessionType(FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  ::FString::operator=(__return_storage_ptr__,L"Shipping");
  return __return_storage_ptr__;
}

// SendBeginShotRenderTelemetry @ 14dd9d6c0

/* WARNING: Removing unreachable block (ram,0x00014dd9e553) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e0ee) */
/* WARNING: Removing unreachable block (ram,0x00014dd9dd0a) */
/* WARNING: Removing unreachable block (ram,0x00014dd9d938) */
/* WARNING: Removing unreachable block (ram,0x00014dd9db21) */
/* WARNING: Removing unreachable block (ram,0x00014dd9def3) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e31f) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e78f) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e564) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e0fc) */
/* WARNING: Removing unreachable block (ram,0x00014dd9dd18) */
/* WARNING: Removing unreachable block (ram,0x00014dd9d946) */
/* WARNING: Removing unreachable block (ram,0x00014dd9db2f) */
/* WARNING: Removing unreachable block (ram,0x00014dd9df01) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e330) */
/* WARNING: Removing unreachable block (ram,0x00014dd9e7a0) */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __cdecl
FMoviePipelineTelemetry::SendBeginShotRenderTelemetry
          (UMoviePipelineExecutorShot *param_1,UMovieGraphEvaluatedConfig *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMoviePipelineShotRenderTelemetry *pFVar5;
  FString *pFVar6;
  longlong lVar7;
  FAnalyticsEventAttribute *pFVar8;
  FString *pFVar9;
  IAnalyticsProviderET *pIVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  ForAnyElementType local_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 local_838;
  undefined4 local_830 [2];
  FAnalyticsEventAttribute local_828;
  FAnalyticsEventAttribute local_7f8;
  FAnalyticsEventAttribute local_7c8;
  FAnalyticsEventAttribute local_798;
  FAnalyticsEventAttribute local_768;
  FAnalyticsEventAttribute local_738;
  FAnalyticsEventAttribute local_708;
  FAnalyticsEventAttribute local_6d8;
  FAnalyticsEventAttribute local_6a8;
  FString local_678;
  FString local_668;
  FString local_658;
  FString local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  FString local_5f8;
  FString local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FAnalyticsEventAttribute local_498;
  FAnalyticsEventAttribute local_468;
  FAnalyticsEventAttribute local_438;
  FAnalyticsEventAttribute local_408;
  FAnalyticsEventAttribute local_3d8;
  FAnalyticsEventAttribute local_3a8;
  FAnalyticsEventAttribute local_378;
  FAnalyticsEventAttribute local_348;
  FAnalyticsEventAttribute local_318;
  FAnalyticsEventAttribute local_2e8;
  FAnalyticsEventAttribute local_2b8;
  FAnalyticsEventAttribute local_288;
  FAnalyticsEventAttribute local_258;
  FAnalyticsEventAttribute local_228;
  FAnalyticsEventAttribute local_1f8;
  FAnalyticsEventAttribute local_1c8;
  FAnalyticsEventAttribute local_198;
  FAnalyticsEventAttribute local_168;
  FAnalyticsEventAttribute local_138;
  FAnalyticsEventAttribute local_108;
  FAnalyticsEventAttribute local_d8;
  FString local_a8;
  FMoviePipelineShotRenderTelemetry local_98;
  FMoviePipelineShotRenderTelemetry local_58;
  
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    return;
  }
  if (param_2 == (UMovieGraphEvaluatedConfig *)0x0) {
    pFVar5 = GatherShotRenderTelemetryForLegacy(&local_58,param_1);
  }
  else {
    pFVar5 = GatherShotRenderTelemetryForGraph(&local_98,param_1,param_2);
  }
  local_830[0] = *(undefined4 *)&pFVar5->bUsesPageToSystemMemory;
  local_848._0_4_ = pFVar5->HandleFrameCount;
  local_848._4_4_ = pFVar5->TemporalSampleCount;
  uStack_840._0_4_ = pFVar5->SpatialSampleCount;
  uStack_840._4_4_ = pFVar5->RenderLayerCount;
  local_858._0_1_ = pFVar5->bUsesJPG;
  local_858._1_1_ = pFVar5->bUsesPNG;
  local_858._2_1_ = pFVar5->bUsesBMP;
  local_858._3_1_ = pFVar5->bUsesEXR;
  local_858._4_1_ = pFVar5->bUsesMultiEXR;
  local_858._5_3_ = *(undefined3 *)&pFVar5->field_0x15;
  uStack_850._0_4_ = pFVar5->ResolutionX;
  uStack_850._4_4_ = pFVar5->ResolutionY;
  local_868._0_1_ = pFVar5->bIsGraph;
  local_868._1_1_ = pFVar5->bIsQuickRender;
  local_868._2_1_ = pFVar5->bUsesDeferred;
  local_868._3_1_ = pFVar5->bUsesPathTracer;
  local_868._4_1_ = pFVar5->bUsesPanoramic;
  local_868._5_1_ = pFVar5->bUsesHighResTiling;
  local_868._6_1_ = pFVar5->bUsesNDisplay;
  local_868._7_1_ = pFVar5->bUsesObjectID;
  uStack_860._0_1_ = pFVar5->bUsesMultiCamera;
  uStack_860._1_1_ = pFVar5->bUsesScripting;
  uStack_860._2_1_ = pFVar5->bUsesSubgraphs;
  uStack_860._3_1_ = pFVar5->bUsesPPMs;
  uStack_860._4_1_ = pFVar5->bUsesAudio;
  uStack_860._5_1_ = pFVar5->bUsesAvid;
  uStack_860._6_1_ = pFVar5->bUsesProRes;
  uStack_860._7_1_ = pFVar5->bUsesMP4;
  local_838._0_4_ = pFVar5->HighResTileCount;
  local_838._4_4_ = pFVar5->HighResOverlap;
  local_878.Data = (FScriptContainerElement *)0x0;
  local_870 = 0;
  pFVar6 = ::FString::FString(&local_518,L"IsGraph");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dd9d7a1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dd9d7a1;
  }
  local_828.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  pwVar12 = L"true";
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar11 = L"true";
  if ((char)local_868 == '\0') {
    pwVar11 = L"false";
  }
  local_828.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  local_828.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_828.AttrValueString,pwVar11);
  local_828.AttrValueBool = false;
  local_828.AttrValueNumber = 0.0;
  local_828.AttrType = JsonFragment;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_878.Data <= &local_828) &&
      (&local_828 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       local_828.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = local_828.AttrName.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = local_828.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       local_828.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = local_828.AttrValueString.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = local_828.AttrValueString.Data.ArrayMax;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = local_828.AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_828.AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = local_828.AttrType;
  local_828.AttrValueString.Data.ArrayNum = 0;
  local_828.AttrValueString.Data.ArrayMax = 0;
  local_828.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_828.AttrName.Data.ArrayNum = 0;
  local_828.AttrName.Data.ArrayMax = 0;
  local_828.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_508,L"IsQuickRender");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dd9d99b:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dd9d99b;
  }
  local_7f8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  pwVar11 = L"true";
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_868._1_1_ == '\0') {
    pwVar11 = L"false";
  }
  local_7f8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_7f8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_7f8.AttrValueString,pwVar11);
  local_7f8.AttrValueNumber = 0.0;
  local_7f8.AttrValueBool = false;
  local_7f8.AttrType = JsonFragment;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_878.Data <= &local_7f8) &&
      (&local_7f8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       local_7f8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = local_7f8.AttrName.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = local_7f8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       local_7f8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = local_7f8.AttrValueString.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = local_7f8.AttrValueString.Data.ArrayMax;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = local_7f8.AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_7f8.AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = local_7f8.AttrType;
  local_7f8.AttrValueString.Data.ArrayNum = 0;
  local_7f8.AttrValueString.Data.ArrayMax = 0;
  local_7f8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7f8.AttrName.Data.ArrayNum = 0;
  local_7f8.AttrName.Data.ArrayMax = 0;
  local_7f8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_4f8,L"UsesDeferred");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dd9db84:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dd9db84;
  }
  local_7c8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  pwVar11 = L"true";
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_868._2_1_ == '\0') {
    pwVar11 = L"false";
  }
  local_7c8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_7c8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_7c8.AttrValueString,pwVar11);
  local_7c8.AttrValueNumber = 0.0;
  local_7c8.AttrValueBool = false;
  local_7c8.AttrType = JsonFragment;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_878.Data <= &local_7c8) &&
      (&local_7c8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       local_7c8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = local_7c8.AttrName.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = local_7c8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       local_7c8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = local_7c8.AttrValueString.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = local_7c8.AttrValueString.Data.ArrayMax;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = local_7c8.AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_7c8.AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = local_7c8.AttrType;
  local_7c8.AttrValueString.Data.ArrayNum = 0;
  local_7c8.AttrValueString.Data.ArrayMax = 0;
  local_7c8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_7c8.AttrName.Data.ArrayNum = 0;
  local_7c8.AttrName.Data.ArrayMax = 0;
  local_7c8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_4e8,L"UsesPathTracer");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dd9dd6d:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dd9dd6d;
  }
  local_798.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  pwVar11 = L"true";
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_868._3_1_ == '\0') {
    pwVar11 = L"false";
  }
  local_798.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_798.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_798.AttrValueString,pwVar11);
  local_798.AttrValueNumber = 0.0;
  local_798.AttrValueBool = false;
  local_798.AttrType = JsonFragment;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_878.Data <= &local_798) &&
      (&local_798 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       local_798.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = local_798.AttrName.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = local_798.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       local_798.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = local_798.AttrValueString.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = local_798.AttrValueString.Data.ArrayMax;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = local_798.AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_798.AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = local_798.AttrType;
  local_798.AttrValueString.Data.ArrayNum = 0;
  local_798.AttrValueString.Data.ArrayMax = 0;
  local_798.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_798.AttrName.Data.ArrayNum = 0;
  local_798.AttrName.Data.ArrayMax = 0;
  local_798.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_4d8,L"UsesPanoramic");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dd9df56:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dd9df56;
  }
  local_768.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  pwVar11 = L"true";
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_868._4_1_ == '\0') {
    pwVar11 = L"false";
  }
  local_768.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_768.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_768.AttrValueString,pwVar11);
  local_768.AttrValueNumber = 0.0;
  local_768.AttrValueBool = false;
  local_768.AttrType = JsonFragment;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_878.Data <= &local_768) &&
      (&local_768 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       local_768.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = local_768.AttrName.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = local_768.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       local_768.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = local_768.AttrValueString.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = local_768.AttrValueString.Data.ArrayMax;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = local_768.AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_768.AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = local_768.AttrType;
  local_768.AttrValueString.Data.ArrayNum = 0;
  local_768.AttrValueString.Data.ArrayMax = 0;
  local_768.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_768.AttrName.Data.ArrayNum = 0;
  local_768.AttrName.Data.ArrayMax = 0;
  local_768.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_4c8,L"UsesHighResTiling");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dd9e151:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dd9e151;
  }
  local_738.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  pwVar11 = L"true";
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_868._5_1_ == '\0') {
    pwVar11 = L"false";
  }
  local_738.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_738.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_738.AttrValueString,pwVar11);
  local_738.AttrValueNumber = 0.0;
  local_738.AttrValueBool = false;
  local_738.AttrType = JsonFragment;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_878.Data <= &local_738) &&
      (&local_738 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       local_738.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = local_738.AttrName.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = local_738.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       local_738.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = local_738.AttrValueString.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = local_738.AttrValueString.Data.ArrayMax;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = local_738.AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_738.AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = local_738.AttrType;
  local_738.AttrValueString.Data.ArrayNum = 0;
  local_738.AttrValueString.Data.ArrayMax = 0;
  local_738.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_738.AttrName.Data.ArrayNum = 0;
  local_738.AttrName.Data.ArrayMax = 0;
  local_738.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_528,L"UsesNDisplay");
  if (((pFVar6->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dd9e385:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dd9e385;
  }
  local_708.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  pwVar11 = L"true";
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_868._6_1_ == '\0') {
    pwVar11 = L"false";
  }
  local_708.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_708.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_708.AttrValueString,pwVar11);
  local_708.AttrValueNumber = 0.0;
  local_708.AttrValueBool = false;
  local_708.AttrType = JsonFragment;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_878.Data <= &local_708) &&
      (&local_708 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       local_708.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = local_708.AttrName.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = local_708.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       local_708.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = local_708.AttrValueString.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = local_708.AttrValueString.Data.ArrayMax;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = local_708.AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_708.AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = local_708.AttrType;
  local_708.AttrValueString.Data.ArrayNum = 0;
  local_708.AttrValueString.Data.ArrayMax = 0;
  local_708.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_708.AttrName.Data.ArrayNum = 0;
  local_708.AttrName.Data.ArrayMax = 0;
  local_708.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = ::FString::FString(&local_4b8,L"UsesObjectID");
  if ((1 < (pFVar6->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar6->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 != 0) goto LAB_14dd9e5df;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14dd9e5df:
  local_6d8.AttrName.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_868._7_1_ == '\0') {
    pwVar12 = L"false";
  }
  local_6d8.AttrName.Data.ArrayNum = (pFVar6->Data).ArrayNum;
  local_6d8.AttrName.Data.ArrayMax = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  ::FString::FString(&local_6d8.AttrValueString,pwVar12);
  local_6d8.AttrValueNumber = 0.0;
  local_6d8.AttrValueBool = false;
  local_6d8.AttrType = JsonFragment;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_878.Data <= &local_6d8) &&
      (&local_6d8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       local_6d8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = local_6d8.AttrName.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = local_6d8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       local_6d8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = local_6d8.AttrValueString.Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = local_6d8.AttrValueString.Data.ArrayMax;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = local_6d8.AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)local_6d8.AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = local_6d8.AttrType;
  local_6d8.AttrValueString.Data.ArrayNum = 0;
  local_6d8.AttrValueString.Data.ArrayMax = 0;
  local_6d8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6d8.AttrName.Data.ArrayNum = 0;
  local_6d8.AttrName.Data.ArrayMax = 0;
  local_6d8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_870._0_4_ = iVar4 + 1;
  pFVar6 = ::FString::FString(&local_a8,L"UsesMultiCamera");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_498,pFVar6,(bool *)&uStack_860);
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)local_870 == local_870._4_4_) {
    local_870._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)(int)local_870;
  local_870 = CONCAT44(local_870._4_4_,(int)local_870 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_498.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_498.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_668,L"UsesScripting");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_468,pFVar6,(bool *)((longlong)&uStack_860 + 1));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_468.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_468.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_658,L"UsesSubgraphs");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_438,pFVar6,(bool *)((longlong)&uStack_860 + 2));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_438.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_438.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_438.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_648,L"UsesPPMs");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_408,pFVar6,(bool *)((longlong)&uStack_860 + 3));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_408.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_408.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_408.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_638,L"UsesAudio");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_3d8,pFVar6,(bool *)((longlong)&uStack_860 + 4));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_3d8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_3d8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_628,L"UsesAvid");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_3a8,pFVar6,(bool *)((longlong)&uStack_860 + 5));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_3a8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_3a8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_618,L"UsesProRes");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_378,pFVar6,(bool *)((longlong)&uStack_860 + 6));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_378.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_378.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_608,L"UsesMP4");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_348,pFVar6,(bool *)((longlong)&uStack_860 + 7));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_348.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_348.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_348.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_5f8,L"UsesJPG");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_318,pFVar6,(bool *)&local_858);
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_318.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_318.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_318.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_5e8,L"UsesPNG");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_2e8,pFVar6,(bool *)((longlong)&local_858 + 1));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_2e8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_2e8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_5d8,L"UsesBMP");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_2b8,pFVar6,(bool *)((longlong)&local_858 + 2));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_2b8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_2b8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_5c8,L"UsesEXR");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_288,pFVar6,(bool *)((longlong)&local_858 + 3));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  lVar7 = (longlong)iVar4;
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  *(undefined8 *)&local_878.Data[lVar7 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_878.Data[lVar7 * 0x30].field_0x0 =
       (pFVar8->AttrName).Data.AllocatorInstance.Data;
  (pFVar8->AttrName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 8) = (pFVar8->AttrName).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0xc) = (pFVar8->AttrName).Data.ArrayMax;
  (pFVar8->AttrName).Data.ArrayNum = 0;
  (pFVar8->AttrName).Data.ArrayMax = 0;
  *(undefined8 *)(local_878.Data + lVar7 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_878.Data + lVar7 * 0x30 + 0x10) =
       (pFVar8->AttrValueString).Data.AllocatorInstance.Data;
  (pFVar8->AttrValueString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x18) = (pFVar8->AttrValueString).Data.ArrayNum;
  *(int *)(local_878.Data + lVar7 * 0x30 + 0x1c) = (pFVar8->AttrValueString).Data.ArrayMax;
  (pFVar8->AttrValueString).Data.ArrayNum = 0;
  (pFVar8->AttrValueString).Data.ArrayMax = 0;
  *(double *)(local_878.Data + lVar7 * 0x30 + 0x20) = pFVar8->AttrValueNumber;
  local_878.Data[lVar7 * 0x30 + 0x28] = (FScriptContainerElement)pFVar8->AttrValueBool;
  *(AttrTypeEnum *)(local_878.Data + lVar7 * 0x30 + 0x2c) = pFVar8->AttrType;
  if (local_288.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_288.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_5b8,L"UsesMultiEXR");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_258,pFVar6,(bool *)((longlong)&local_858 + 4));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),pFVar8);
  if (local_258.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_258.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_5a8,L"ResolutionX");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_const_&>
                     (&local_228,pFVar6,(int *)&uStack_850);
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),pFVar8);
  if (local_228.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_228.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_4a8,L"ResolutionY");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_const_&>
                     (&local_1f8,pFVar6,(int *)((longlong)&uStack_850 + 4));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),pFVar8);
  if (local_1f8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_1f8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_598,L"HandleFrameCount");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_const_&>
                     (&local_1c8,pFVar6,(int *)&local_848);
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),pFVar8);
  if (local_1c8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_1c8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_588,L"TemporalSampleCount");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_const_&>
                     (&local_198,pFVar6,(int *)((longlong)&local_848 + 4));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),pFVar8);
  if (local_198.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_198.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_578,L"SpatialSampleCount");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_const_&>
                     (&local_168,pFVar6,(int *)&uStack_840);
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),pFVar8);
  if (local_168.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_168.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_568,L"RenderLayerCount");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_const_&>
                     (&local_138,pFVar6,(int *)((longlong)&uStack_840 + 4));
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),pFVar8);
  if (local_138.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_138.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_558,L"HighResTileCount");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<int_const_&>
                     (&local_108,pFVar6,(int *)&local_838);
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),pFVar8);
  if (local_108.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_108.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_548,L"HighResOverlap");
  pFVar9 = FAnalyticsEventAttribute::CheckName(&local_6a8,pFVar6);
  local_6a8.AttrName.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.AttrName.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  local_6a8.AttrName.Data.ArrayMax = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  AnalyticsConversionToString(&local_6a8.AttrValueString,local_838._4_4_);
  local_6a8.AttrValueNumber = 0.0;
  local_6a8.AttrValueBool = false;
  local_6a8.AttrType = JsonFragment;
  pFVar1 = (pFVar6->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_878.Data <= &local_6a8) &&
      (&local_6a8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),&local_6a8);
  if (local_6a8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_6a8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.AttrName.Data.AllocatorInstance.Data);
  }
  pFVar6 = ::FString::FString(&local_538,L"PageToSystemMemory");
  pFVar8 = FAnalyticsEventAttribute::FAnalyticsEventAttribute<bool_const_&>
                     (&local_d8,pFVar6,(bool *)local_830);
  if (((local_878.Data <= pFVar8) &&
      (pFVar8 < (FAnalyticsEventAttribute *)(local_878.Data + (longlong)local_870._4_4_ * 0x30))) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_870;
  if ((int)local_870 == local_870._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_878,(int *)((longlong)&local_870 + 4));
  }
  local_870 = CONCAT44(local_870._4_4_,iVar4 + 1);
  FAnalyticsEventAttribute::FAnalyticsEventAttribute
            ((FAnalyticsEventAttribute *)(local_878.Data + (longlong)iVar4 * 0x30),pFVar8);
  if (local_d8.AttrValueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AttrValueString.Data.AllocatorInstance.Data);
  }
  if (local_d8.AttrName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AttrName.Data.AllocatorInstance.Data);
  }
  pIVar10 = FEngineAnalytics::GetProvider();
  pcVar2 = *(code **)(pIVar10->_padding_ + 0x100);
  ::FString::FString(&local_678,L"MoviePipeline.BeginShotRender");
  (*pcVar2)(pIVar10,&local_678,&local_878);
  if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_678.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_878.Data,(int)local_870);
  if ((FAnalyticsEventAttribute *)local_878.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_878.Data);
  }
  return;
}

// SendEndShotRenderTelemetry @ 14dda01a0

/* WARNING: Removing unreachable block (ram,0x00014dda07b5) */
/* WARNING: Removing unreachable block (ram,0x00014dda03e6) */
/* WARNING: Removing unreachable block (ram,0x00014dda05d0) */
/* WARNING: Removing unreachable block (ram,0x00014dda09c1) */
/* WARNING: Removing unreachable block (ram,0x00014dda07c3) */
/* WARNING: Removing unreachable block (ram,0x00014dda03f5) */
/* WARNING: Removing unreachable block (ram,0x00014dda05de) */
/* WARNING: Removing unreachable block (ram,0x00014dda09cf) */

void __cdecl
FMoviePipelineTelemetry::SendEndShotRenderTelemetry(bool param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  longlong lVar6;
  IAnalyticsProviderET *pIVar7;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  ForAnyElementType local_158;
  undefined8 local_150;
  FAnalyticsEventAttribute local_148;
  FAnalyticsEventAttribute local_118;
  FAnalyticsEventAttribute local_e8;
  FAnalyticsEventAttribute local_b8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48 [2];
  
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    return;
  }
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  pFVar5 = ::FString::FString(&local_78,L"IsGraph");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dda023f:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dda023f;
  }
  local_148.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  pwVar9 = L"true";
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar8 = L"true";
  local_148.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_148.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  if (!param_1) {
    pwVar8 = L"false";
  }
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_148.AttrValueString,pwVar8);
  local_148.AttrValueBool = false;
  local_148.AttrValueNumber = 0.0;
  local_148.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_158.Data <= &local_148) &&
      (&local_148 < (FAnalyticsEventAttribute *)(local_158.Data + (longlong)local_150._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_150;
  if ((int)local_150 == local_150._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_158,(int *)((longlong)&local_150 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_150 = CONCAT44(local_150._4_4_,iVar4 + 1);
  *(undefined8 *)&local_158.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_158.Data[lVar6 * 0x30].field_0x0 =
       local_148.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_158.Data + lVar6 * 0x30 + 8) = local_148.AttrName.Data.ArrayNum;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0xc) = local_148.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_158.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_158.Data + lVar6 * 0x30 + 0x10) =
       local_148.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0x18) = local_148.AttrValueString.Data.ArrayNum;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0x1c) = local_148.AttrValueString.Data.ArrayMax;
  *(double *)(local_158.Data + lVar6 * 0x30 + 0x20) = local_148.AttrValueNumber;
  local_158.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_148.AttrValueBool;
  *(AttrTypeEnum *)(local_158.Data + lVar6 * 0x30 + 0x2c) = local_148.AttrType;
  local_148.AttrValueString.Data.ArrayNum = 0;
  local_148.AttrValueString.Data.ArrayMax = 0;
  local_148.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.AttrName.Data.ArrayNum = 0;
  local_148.AttrName.Data.ArrayMax = 0;
  local_148.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_68,L"IsQuickRender");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dda0448:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dda0448;
  }
  local_118.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  pwVar8 = L"true";
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  local_118.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bIsCurrentRenderRequestQuickRender == false) {
    pwVar8 = L"false";
  }
  ::FString::FString(&local_118.AttrValueString,pwVar8);
  local_118.AttrValueNumber = 0.0;
  local_118.AttrValueBool = false;
  local_118.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_158.Data <= &local_118) &&
      (&local_118 < (FAnalyticsEventAttribute *)(local_158.Data + (longlong)local_150._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_150;
  if ((int)local_150 == local_150._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_158,(int *)((longlong)&local_150 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_150 = CONCAT44(local_150._4_4_,iVar4 + 1);
  *(undefined8 *)&local_158.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_158.Data[lVar6 * 0x30].field_0x0 =
       local_118.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_158.Data + lVar6 * 0x30 + 8) = local_118.AttrName.Data.ArrayNum;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0xc) = local_118.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_158.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_158.Data + lVar6 * 0x30 + 0x10) =
       local_118.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0x18) = local_118.AttrValueString.Data.ArrayNum;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0x1c) = local_118.AttrValueString.Data.ArrayMax;
  *(double *)(local_158.Data + lVar6 * 0x30 + 0x20) = local_118.AttrValueNumber;
  local_158.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_118.AttrValueBool;
  *(AttrTypeEnum *)(local_158.Data + lVar6 * 0x30 + 0x2c) = local_118.AttrType;
  local_118.AttrValueString.Data.ArrayNum = 0;
  local_118.AttrValueString.Data.ArrayMax = 0;
  local_118.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.AttrName.Data.ArrayNum = 0;
  local_118.AttrName.Data.ArrayMax = 0;
  local_118.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(&local_58,L"WasSuccessful");
  if (((pFVar5->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dda0631:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dda0631;
  }
  local_e8.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pwVar8 = L"true";
  if (!param_2) {
    pwVar8 = L"false";
  }
  local_e8.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  local_e8.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_e8.AttrValueString,pwVar8);
  local_e8.AttrValueNumber = 0.0;
  local_e8.AttrValueBool = false;
  local_e8.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_158.Data <= &local_e8) &&
      (&local_e8 < (FAnalyticsEventAttribute *)(local_158.Data + (longlong)local_150._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_150;
  if ((int)local_150 == local_150._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_158,(int *)((longlong)&local_150 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_150 = CONCAT44(local_150._4_4_,iVar4 + 1);
  *(undefined8 *)&local_158.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_158.Data[lVar6 * 0x30].field_0x0 =
       local_e8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_158.Data + lVar6 * 0x30 + 8) = local_e8.AttrName.Data.ArrayNum;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0xc) = local_e8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_158.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_158.Data + lVar6 * 0x30 + 0x10) =
       local_e8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0x18) = local_e8.AttrValueString.Data.ArrayNum;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0x1c) = local_e8.AttrValueString.Data.ArrayMax;
  *(double *)(local_158.Data + lVar6 * 0x30 + 0x20) = local_e8.AttrValueNumber;
  local_158.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_e8.AttrValueBool;
  *(AttrTypeEnum *)(local_158.Data + lVar6 * 0x30 + 0x2c) = local_e8.AttrType;
  local_e8.AttrValueString.Data.ArrayNum = 0;
  local_e8.AttrValueString.Data.ArrayMax = 0;
  local_e8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.AttrName.Data.ArrayNum = 0;
  local_e8.AttrName.Data.ArrayMax = 0;
  local_e8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar5 = ::FString::FString(local_48,L"WasCanceled");
  if ((1 < (pFVar5->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar8,L"DateOffset");
    if (iVar4 != 0) goto LAB_14dda083c;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14dda083c:
  local_b8.AttrName.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (!param_3) {
    pwVar9 = L"false";
  }
  local_b8.AttrName.Data.ArrayMax = (pFVar5->Data).ArrayMax;
  local_b8.AttrName.Data.ArrayNum = (pFVar5->Data).ArrayNum;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  ::FString::FString(&local_b8.AttrValueString,pwVar9);
  local_b8.AttrValueNumber = 0.0;
  local_b8.AttrValueBool = false;
  local_b8.AttrType = JsonFragment;
  pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_158.Data <= &local_b8) &&
      (&local_b8 < (FAnalyticsEventAttribute *)(local_158.Data + (longlong)local_150._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_150;
  if ((int)local_150 == local_150._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_158,(int *)((longlong)&local_150 + 4));
  }
  lVar6 = (longlong)iVar4;
  local_150 = CONCAT44(local_150._4_4_,iVar4 + 1);
  *(undefined8 *)&local_158.Data[lVar6 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_158.Data[lVar6 * 0x30].field_0x0 =
       local_b8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_158.Data + lVar6 * 0x30 + 8) = local_b8.AttrName.Data.ArrayNum;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0xc) = local_b8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_158.Data + lVar6 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_158.Data + lVar6 * 0x30 + 0x10) =
       local_b8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0x18) = local_b8.AttrValueString.Data.ArrayNum;
  *(int *)(local_158.Data + lVar6 * 0x30 + 0x1c) = local_b8.AttrValueString.Data.ArrayMax;
  *(double *)(local_158.Data + lVar6 * 0x30 + 0x20) = local_b8.AttrValueNumber;
  local_158.Data[lVar6 * 0x30 + 0x28] = (FScriptContainerElement)local_b8.AttrValueBool;
  *(AttrTypeEnum *)(local_158.Data + lVar6 * 0x30 + 0x2c) = local_b8.AttrType;
  local_b8.AttrValueString.Data.ArrayNum = 0;
  local_b8.AttrValueString.Data.ArrayMax = 0;
  local_b8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.AttrName.Data.ArrayNum = 0;
  local_b8.AttrName.Data.ArrayMax = 0;
  local_b8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pIVar7 = FEngineAnalytics::GetProvider();
  pcVar2 = *(code **)(pIVar7->_padding_ + 0x100);
  ::FString::FString(&local_88,L"MoviePipeline.EndShotRender");
  (*pcVar2)(pIVar7,&local_88,&local_158);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_158.Data,(int)local_150);
  if ((FAnalyticsEventAttribute *)local_158.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_158.Data);
  }
  return;
}

// SendQuickRenderRequestedTelemetry @ 14dda0a50

/* WARNING: Removing unreachable block (ram,0x00014dda10d0) */
/* WARNING: Removing unreachable block (ram,0x00014dda0caa) */
/* WARNING: Removing unreachable block (ram,0x00014dda0ebe) */
/* WARNING: Removing unreachable block (ram,0x00014dda1305) */
/* WARNING: Removing unreachable block (ram,0x00014dda10de) */
/* WARNING: Removing unreachable block (ram,0x00014dda0cb9) */
/* WARNING: Removing unreachable block (ram,0x00014dda0ecc) */
/* WARNING: Removing unreachable block (ram,0x00014dda1313) */

void __cdecl
FMoviePipelineTelemetry::SendQuickRenderRequestedTelemetry(EMovieGraphQuickRenderMode param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UMovieGraphQuickRenderModeSettings *pUVar5;
  UEnum *pUVar6;
  FString *pFVar7;
  FString *pFVar8;
  longlong lVar9;
  IAnalyticsProviderET *pIVar10;
  wchar_t *pwVar11;
  ForAnyElementType local_178;
  undefined8 local_170;
  FAnalyticsEventAttribute local_168;
  FAnalyticsEventAttribute local_138;
  FAnalyticsEventAttribute local_108;
  FAnalyticsEventAttribute local_d8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28 [2];
  
  bIsCurrentRenderRequestQuickRender = true;
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    bIsCurrentRenderRequestQuickRender = true;
    return;
  }
  pUVar5 = UMovieGraphQuickRenderSettings::GetSavedQuickRenderModeSettings(param_1);
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  pUVar6 = StaticEnum<enum_EMovieGraphQuickRenderMode>();
  pFVar7 = UEnum::GetNameStringByValue(pUVar6,&local_98,(ulonglong)param_1);
  pFVar8 = ::FString::FString(&local_58,L"Mode");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dda0b0b:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dda0b0b;
  }
  local_168.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_168.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_168.AttrValueString.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.AttrValueString.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_168.AttrValueString.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_168.AttrValueNumber = 0.0;
  local_168.AttrValueBool = false;
  local_168.AttrType = String;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_178.Data <= &local_168) &&
      (&local_168 < (FAnalyticsEventAttribute *)(local_178.Data + (longlong)local_170._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_170;
  if ((int)local_170 == local_170._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_178,(int *)((longlong)&local_170 + 4));
  }
  lVar9 = (longlong)iVar4;
  local_170 = CONCAT44(local_170._4_4_,iVar4 + 1);
  *(undefined8 *)&local_178.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_178.Data[lVar9 * 0x30].field_0x0 =
       local_168.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_178.Data + lVar9 * 0x30 + 8) = local_168.AttrName.Data.ArrayNum;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0xc) = local_168.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_178.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_178.Data + lVar9 * 0x30 + 0x10) =
       local_168.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0x18) = local_168.AttrValueString.Data.ArrayNum;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0x1c) = local_168.AttrValueString.Data.ArrayMax;
  *(double *)(local_178.Data + lVar9 * 0x30 + 0x20) = local_168.AttrValueNumber;
  local_178.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_168.AttrValueBool;
  *(AttrTypeEnum *)(local_178.Data + lVar9 * 0x30 + 0x2c) = local_168.AttrType;
  local_168.AttrValueString.Data.ArrayNum = 0;
  local_168.AttrValueString.Data.ArrayMax = 0;
  local_168.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.AttrName.Data.ArrayNum = 0;
  local_168.AttrName.Data.ArrayMax = 0;
  local_168.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pUVar6 = StaticEnum<enum_EMovieGraphQuickRenderPostRenderActionType>();
  pFVar7 = UEnum::GetNameStringByValue(pUVar6,&local_88,(ulonglong)pUVar5->PostRenderBehavior);
  pFVar8 = ::FString::FString(&local_48,L"PlayAfterRenderMode");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dda0d36:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dda0d36;
  }
  local_138.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_138.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_138.AttrValueString.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AttrValueString.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_138.AttrValueString.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_138.AttrValueNumber = 0.0;
  local_138.AttrValueBool = false;
  local_138.AttrType = String;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_178.Data <= &local_138) &&
      (&local_138 < (FAnalyticsEventAttribute *)(local_178.Data + (longlong)local_170._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_170;
  if ((int)local_170 == local_170._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_178,(int *)((longlong)&local_170 + 4));
  }
  lVar9 = (longlong)iVar4;
  local_170 = CONCAT44(local_170._4_4_,iVar4 + 1);
  *(undefined8 *)&local_178.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_178.Data[lVar9 * 0x30].field_0x0 =
       local_138.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_178.Data + lVar9 * 0x30 + 8) = local_138.AttrName.Data.ArrayNum;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0xc) = local_138.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_178.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_178.Data + lVar9 * 0x30 + 0x10) =
       local_138.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0x18) = local_138.AttrValueString.Data.ArrayNum;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0x1c) = local_138.AttrValueString.Data.ArrayMax;
  *(double *)(local_178.Data + lVar9 * 0x30 + 0x20) = local_138.AttrValueNumber;
  local_178.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_138.AttrValueBool;
  *(AttrTypeEnum *)(local_178.Data + lVar9 * 0x30 + 0x2c) = local_138.AttrType;
  local_138.AttrValueString.Data.ArrayNum = 0;
  local_138.AttrValueString.Data.ArrayMax = 0;
  local_138.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AttrName.Data.ArrayNum = 0;
  local_138.AttrName.Data.ArrayMax = 0;
  local_138.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pUVar6 = StaticEnum<enum_EMovieGraphQuickRenderViewportLookFlags>();
  pFVar7 = UEnum::GetValueOrBitfieldAsString(pUVar6,&local_78,(longlong)pUVar5->ViewportLookFlags);
  pFVar8 = ::FString::FString(&local_38,L"ViewportLookFlags");
  if (((pFVar8->Data).ArrayNum < 2) ||
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar4 == 0)
     ) {
LAB_14dda0f48:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 == 0) goto LAB_14dda0f48;
  }
  local_108.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_108.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_108.AttrValueString.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.AttrValueString.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_108.AttrValueString.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_108.AttrValueNumber = 0.0;
  local_108.AttrValueBool = false;
  local_108.AttrType = String;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_178.Data <= &local_108) &&
      (&local_108 < (FAnalyticsEventAttribute *)(local_178.Data + (longlong)local_170._4_4_ * 0x30))
      ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_170;
  if ((int)local_170 == local_170._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_178,(int *)((longlong)&local_170 + 4));
  }
  lVar9 = (longlong)iVar4;
  local_170 = CONCAT44(local_170._4_4_,iVar4 + 1);
  *(undefined8 *)&local_178.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_178.Data[lVar9 * 0x30].field_0x0 =
       local_108.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_178.Data + lVar9 * 0x30 + 8) = local_108.AttrName.Data.ArrayNum;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0xc) = local_108.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_178.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_178.Data + lVar9 * 0x30 + 0x10) =
       local_108.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0x18) = local_108.AttrValueString.Data.ArrayNum;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0x1c) = local_108.AttrValueString.Data.ArrayMax;
  *(double *)(local_178.Data + lVar9 * 0x30 + 0x20) = local_108.AttrValueNumber;
  local_178.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_108.AttrValueBool;
  *(AttrTypeEnum *)(local_178.Data + lVar9 * 0x30 + 0x2c) = local_108.AttrType;
  local_108.AttrValueString.Data.ArrayNum = 0;
  local_108.AttrValueString.Data.ArrayMax = 0;
  local_108.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.AttrName.Data.ArrayNum = 0;
  local_108.AttrName.Data.ArrayMax = 0;
  local_108.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pUVar6 = StaticEnum<enum_EMovieGraphQuickRenderFrameRangeType>();
  pFVar7 = UEnum::GetNameStringByValue(pUVar6,&local_68,(ulonglong)pUVar5->FrameRangeType);
  pFVar8 = ::FString::FString(local_28,L"SequencerFrameRange");
  if ((1 < (pFVar8->Data).ArrayNum) &&
     (iVar4 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,L"EventName"), iVar4 != 0)
     ) {
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar11,L"DateOffset");
    if (iVar4 != 0) goto LAB_14dda118c;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14dda118c:
  local_d8.AttrName.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
  (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.AttrName.Data.ArrayNum = (pFVar8->Data).ArrayNum;
  local_d8.AttrName.Data.ArrayMax = (pFVar8->Data).ArrayMax;
  (pFVar8->Data).ArrayNum = 0;
  (pFVar8->Data).ArrayMax = 0;
  local_d8.AttrValueString.Data.AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.AttrValueString.Data.ArrayNum = (pFVar7->Data).ArrayNum;
  local_d8.AttrValueString.Data.ArrayMax = (pFVar7->Data).ArrayMax;
  (pFVar7->Data).ArrayNum = 0;
  (pFVar7->Data).ArrayMax = 0;
  local_d8.AttrValueNumber = 0.0;
  local_d8.AttrValueBool = false;
  local_d8.AttrType = String;
  pFVar1 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (((local_178.Data <= &local_d8) &&
      (&local_d8 < (FAnalyticsEventAttribute *)(local_178.Data + (longlong)local_170._4_4_ * 0x30)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (int)local_170;
  if ((int)local_170 == local_170._4_4_) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_178,(int *)((longlong)&local_170 + 4));
  }
  lVar9 = (longlong)iVar4;
  local_170 = CONCAT44(local_170._4_4_,iVar4 + 1);
  *(undefined8 *)&local_178.Data[lVar9 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_178.Data[lVar9 * 0x30].field_0x0 =
       local_d8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_178.Data + lVar9 * 0x30 + 8) = local_d8.AttrName.Data.ArrayNum;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0xc) = local_d8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_178.Data + lVar9 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_178.Data + lVar9 * 0x30 + 0x10) =
       local_d8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0x18) = local_d8.AttrValueString.Data.ArrayNum;
  *(int *)(local_178.Data + lVar9 * 0x30 + 0x1c) = local_d8.AttrValueString.Data.ArrayMax;
  *(double *)(local_178.Data + lVar9 * 0x30 + 0x20) = local_d8.AttrValueNumber;
  local_178.Data[lVar9 * 0x30 + 0x28] = (FScriptContainerElement)local_d8.AttrValueBool;
  *(AttrTypeEnum *)(local_178.Data + lVar9 * 0x30 + 0x2c) = local_d8.AttrType;
  local_d8.AttrValueString.Data.ArrayNum = 0;
  local_d8.AttrValueString.Data.ArrayMax = 0;
  local_d8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.AttrName.Data.ArrayNum = 0;
  local_d8.AttrName.Data.ArrayMax = 0;
  local_d8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pIVar10 = FEngineAnalytics::GetProvider();
  pcVar2 = *(code **)(pIVar10->_padding_ + 0x100);
  ::FString::FString(&local_a8,L"MoviePipeline.QuickRenderRequested");
  (*pcVar2)(pIVar10,&local_a8,&local_178);
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_178.Data,(int)local_170);
  if ((FAnalyticsEventAttribute *)local_178.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return;
}

// SendRendersRequestedTelemetry @ 14dda13a0

/* WARNING: Removing unreachable block (ram,0x00014dda1f64) */
/* WARNING: Removing unreachable block (ram,0x00014dda1b86) */
/* WARNING: Removing unreachable block (ram,0x00014dda177c) */
/* WARNING: Removing unreachable block (ram,0x00014dda1988) */
/* WARNING: Removing unreachable block (ram,0x00014dda1d75) */
/* WARNING: Removing unreachable block (ram,0x00014dda2189) */
/* WARNING: Removing unreachable block (ram,0x00014dda1f72) */
/* WARNING: Removing unreachable block (ram,0x00014dda1b94) */
/* WARNING: Removing unreachable block (ram,0x00014dda178a) */
/* WARNING: Removing unreachable block (ram,0x00014dda1996) */
/* WARNING: Removing unreachable block (ram,0x00014dda1d83) */
/* WARNING: Removing unreachable block (ram,0x00014dda2197) */

void __cdecl
FMoviePipelineTelemetry::SendRendersRequestedTelemetry
          (bool param_1,TArray<UMoviePipelineExecutorJob_*,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong *plVar1;
  UObject *this;
  code *pcVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  UFunction *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  longlong lVar10;
  IAnalyticsProviderET *pIVar11;
  ulonglong uVar12;
  wchar_t *pwVar13;
  FScriptContainerElement *pFVar14;
  longlong *plVar15;
  char cVar16;
  char local_res18 [8];
  char local_res20 [8];
  ForAnyElementType local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined1 local_217 [7];
  FString local_210;
  int local_200;
  int local_1fc;
  FAnalyticsEventAttribute local_1f8;
  FAnalyticsEventAttribute local_1c8;
  FAnalyticsEventAttribute local_198;
  FAnalyticsEventAttribute local_168;
  FAnalyticsEventAttribute local_138;
  FAnalyticsEventAttribute local_108;
  uint local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  bIsCurrentRenderRequestQuickRender = false;
  if (FEngineAnalytics::Analytics.Object == (IAnalyticsProviderET *)0x0) {
    bIsCurrentRenderRequestQuickRender = false;
    return;
  }
  local_d8 = param_2->ArrayNum;
  uVar12 = (ulonglong)(int)local_d8;
  pFVar14 = (param_2->AllocatorInstance).Data;
  local_210.Data.AllocatorInstance.Data = pFVar14 + uVar12 * 8;
  local_200 = 0;
  local_1fc = 0;
  while( true ) {
    iVar4 = local_1fc;
    iVar6 = local_200;
    FVar3.Data = local_210.Data.AllocatorInstance.Data;
    local_d0.Data.AllocatorInstance.Data = pFVar14;
    if (param_2->ArrayNum != (int)uVar12) {
      local_218 = 0;
      `TCheckedPointerIterator<UMoviePipelineExecutorJob_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_218);
    }
    if (pFVar14 == FVar3.Data) break;
    this = *(UObject **)pFVar14;
    pUVar7 = UObject::FindFunctionChecked(this,NAME_UMoviePipelineExecutorJob_IsEnabled);
    pUVar8 = UField::GetOwnerClass((UField *)pUVar7);
    if ((pUVar8->ClassFlags & CLASS_Native) == CLASS_None) {
      local_res18[0] = '\0';
      (**(code **)(*(longlong *)this + 0x260))(this,pUVar7,local_res18);
      cVar16 = local_res18[0] != '\0';
    }
    else {
      cVar16 = (**(code **)(*(longlong *)this + 0x2f0))(this);
    }
    if (cVar16 == '\0') {
      local_1fc = iVar4 + 1;
    }
    else {
      local_200 = iVar6 + 1;
    }
    plVar15 = *(longlong **)&this[3].field_0x20;
    iVar6 = *(int *)(this + 4);
    plVar1 = plVar15 + iVar6;
    while( true ) {
      if (*(int *)(this + 4) != iVar6) {
        local_217[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMoviePipelineExecutorShot>_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_217);
      }
      if (plVar15 == plVar1) break;
      if (*(char *)(*plVar15 + 0x28) == '\0') {
LAB_14dda154a:
        plVar15 = plVar15 + 1;
      }
      else {
        pUVar7 = UObject::FindFunctionChecked(this,NAME_UMoviePipelineExecutorJob_IsEnabled);
        pUVar8 = UField::GetOwnerClass((UField *)pUVar7);
        if ((pUVar8->ClassFlags & CLASS_Native) == CLASS_None) {
          local_res20[0] = '\0';
          (**(code **)(*(longlong *)this + 0x260))(this,pUVar7,local_res20);
          cVar16 = local_res20[0] != '\0';
        }
        else {
          cVar16 = (**(code **)(*(longlong *)this + 0x2f0))(this);
        }
        if (cVar16 == '\0') goto LAB_14dda154a;
        plVar15 = plVar15 + 1;
      }
    }
    pFVar14 = local_d0.Data.AllocatorInstance.Data + 8;
    uVar12 = (ulonglong)local_d8;
  }
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220 = 0;
  pFVar9 = ::FString::FString(&local_c0,L"IsLocal");
  if (((pFVar9->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_14dda15e6:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
    if (iVar6 == 0) goto LAB_14dda15e6;
  }
  local_1c8.AttrName.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
  pwVar13 = L"true";
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.AttrName.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  local_1c8.AttrName.Data.ArrayMax = (pFVar9->Data).ArrayMax;
  if (!param_1) {
    pwVar13 = L"false";
  }
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  ::FString::FString(&local_1c8.AttrValueString,pwVar13);
  local_1c8.AttrValueBool = false;
  local_1c8.AttrValueNumber = 0.0;
  local_1c8.AttrType = JsonFragment;
  pFVar14 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  if (((local_228.Data <= &local_1c8) &&
      (&local_1c8 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar10 = (longlong)iVar6;
  local_220 = CONCAT44(local_220._4_4_,iVar6 + 1);
  *(undefined8 *)&local_228.Data[lVar10 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar10 * 0x30].field_0x0 =
       local_1c8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 8) = local_1c8.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0xc) = local_1c8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar10 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar10 * 0x30 + 0x10) =
       local_1c8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x18) = local_1c8.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x1c) = local_1c8.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar10 * 0x30 + 0x20) = local_1c8.AttrValueNumber;
  local_228.Data[lVar10 * 0x30 + 0x28] = (FScriptContainerElement)local_1c8.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar10 * 0x30 + 0x2c) = local_1c8.AttrType;
  local_1c8.AttrValueString.Data.ArrayNum = 0;
  local_1c8.AttrValueString.Data.ArrayMax = 0;
  local_1c8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.AttrName.Data.ArrayNum = 0;
  local_1c8.AttrName.Data.ArrayMax = 0;
  local_1c8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.Data.ArrayNum = 0;
  local_210.Data.ArrayMax = 0;
  ::FString::operator=(&local_210,L"Shipping");
  pFVar9 = ::FString::FString(&local_b0,L"SessionType");
  if (((pFVar9->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_14dda17fa:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
    if (iVar6 == 0) goto LAB_14dda17fa;
  }
  local_1f8.AttrName.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.AttrName.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  local_1f8.AttrName.Data.ArrayMax = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  local_1f8.AttrValueString.Data.AllocatorInstance.Data = local_210.Data.AllocatorInstance.Data;
  local_1f8.AttrValueString.Data.ArrayNum = local_210.Data.ArrayNum;
  local_1f8.AttrValueString.Data.ArrayMax = local_210.Data.ArrayMax;
  local_210.Data.ArrayNum = 0;
  local_210.Data.ArrayMax = 0;
  local_1f8.AttrValueNumber = 0.0;
  local_210.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.AttrValueBool = false;
  local_1f8.AttrType = String;
  pFVar14 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  if (((local_228.Data <= &local_1f8) &&
      (&local_1f8 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar10 = (longlong)iVar6;
  local_220 = CONCAT44(local_220._4_4_,iVar6 + 1);
  *(undefined8 *)&local_228.Data[lVar10 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar10 * 0x30].field_0x0 =
       local_1f8.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 8) = local_1f8.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0xc) = local_1f8.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar10 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar10 * 0x30 + 0x10) =
       local_1f8.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x18) = local_1f8.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x1c) = local_1f8.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar10 * 0x30 + 0x20) = local_1f8.AttrValueNumber;
  local_228.Data[lVar10 * 0x30 + 0x28] = (FScriptContainerElement)local_1f8.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar10 * 0x30 + 0x2c) = local_1f8.AttrType;
  local_1f8.AttrValueString.Data.ArrayNum = 0;
  local_1f8.AttrValueString.Data.ArrayMax = 0;
  local_1f8.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.AttrName.Data.ArrayNum = 0;
  local_1f8.AttrName.Data.ArrayMax = 0;
  local_1f8.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_210.Data.AllocatorInstance.Data);
  }
  pFVar9 = ::FString::FString(&local_a0,L"EnabledJobCount");
  if (((pFVar9->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_14dda19fa:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
    if (iVar6 == 0) goto LAB_14dda19fa;
  }
  local_198.AttrName.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.AttrName.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  local_198.AttrName.Data.ArrayMax = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_198.AttrValueString,L"%d");
  local_198.AttrValueNumber = 0.0;
  local_198.AttrValueBool = false;
  local_198.AttrType = JsonFragment;
  pFVar14 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  if (((local_228.Data <= &local_198) &&
      (&local_198 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar10 = (longlong)iVar6;
  local_220 = CONCAT44(local_220._4_4_,iVar6 + 1);
  *(undefined8 *)&local_228.Data[lVar10 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar10 * 0x30].field_0x0 =
       local_198.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 8) = local_198.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0xc) = local_198.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar10 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar10 * 0x30 + 0x10) =
       local_198.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x18) = local_198.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x1c) = local_198.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar10 * 0x30 + 0x20) = local_198.AttrValueNumber;
  local_228.Data[lVar10 * 0x30 + 0x28] = (FScriptContainerElement)local_198.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar10 * 0x30 + 0x2c) = local_198.AttrType;
  local_198.AttrValueString.Data.ArrayNum = 0;
  local_198.AttrValueString.Data.ArrayMax = 0;
  local_198.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.AttrName.Data.ArrayNum = 0;
  local_198.AttrName.Data.ArrayMax = 0;
  local_198.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = ::FString::FString(&local_90,L"DisabledJobCount");
  if (((pFVar9->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_14dda1be9:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
    if (iVar6 == 0) goto LAB_14dda1be9;
  }
  local_168.AttrName.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.AttrName.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  local_168.AttrName.Data.ArrayMax = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_168.AttrValueString,L"%d");
  local_168.AttrValueNumber = 0.0;
  local_168.AttrValueBool = false;
  local_168.AttrType = JsonFragment;
  pFVar14 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  if (((local_228.Data <= &local_168) &&
      (&local_168 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar10 = (longlong)iVar6;
  local_220 = CONCAT44(local_220._4_4_,iVar6 + 1);
  *(undefined8 *)&local_228.Data[lVar10 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar10 * 0x30].field_0x0 =
       local_168.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 8) = local_168.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0xc) = local_168.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar10 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar10 * 0x30 + 0x10) =
       local_168.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x18) = local_168.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x1c) = local_168.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar10 * 0x30 + 0x20) = local_168.AttrValueNumber;
  local_228.Data[lVar10 * 0x30 + 0x28] = (FScriptContainerElement)local_168.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar10 * 0x30 + 0x2c) = local_168.AttrType;
  local_168.AttrValueString.Data.ArrayNum = 0;
  local_168.AttrValueString.Data.ArrayMax = 0;
  local_168.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_168.AttrName.Data.ArrayNum = 0;
  local_168.AttrName.Data.ArrayMax = 0;
  local_168.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = ::FString::FString(&local_80,L"EnabledShotCount");
  if (((pFVar9->Data).ArrayNum < 2) ||
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,L"EventName"), iVar6 == 0)
     ) {
LAB_14dda1dd8:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidAttributeName(InName)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                       ,0x78,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
    if (iVar6 == 0) goto LAB_14dda1dd8;
  }
  local_138.AttrName.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AttrName.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  local_138.AttrName.Data.ArrayMax = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_138.AttrValueString,L"%d");
  local_138.AttrValueNumber = 0.0;
  local_138.AttrValueBool = false;
  local_138.AttrType = JsonFragment;
  pFVar14 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  if (((local_228.Data <= &local_138) &&
      (&local_138 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar10 = (longlong)iVar6;
  local_220 = CONCAT44(local_220._4_4_,iVar6 + 1);
  *(undefined8 *)&local_228.Data[lVar10 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar10 * 0x30].field_0x0 =
       local_138.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 8) = local_138.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0xc) = local_138.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar10 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar10 * 0x30 + 0x10) =
       local_138.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x18) = local_138.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x1c) = local_138.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar10 * 0x30 + 0x20) = local_138.AttrValueNumber;
  local_228.Data[lVar10 * 0x30 + 0x28] = (FScriptContainerElement)local_138.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar10 * 0x30 + 0x2c) = local_138.AttrType;
  local_138.AttrValueString.Data.ArrayNum = 0;
  local_138.AttrValueString.Data.ArrayMax = 0;
  local_138.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.AttrName.Data.ArrayNum = 0;
  local_138.AttrName.Data.ArrayMax = 0;
  local_138.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar9 = ::FString::FString(local_70,L"DisabledShotCount");
  if ((1 < (pFVar9->Data).ArrayNum) &&
     (iVar6 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(pFVar9->Data).AllocatorInstance.Data,L"EventName"), iVar6 != 0)
     ) {
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar13 = L"";
    }
    else {
      pwVar13 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar6 = FGenericPlatformStricmp::Stricmp(pwVar13,L"DateOffset");
    if (iVar6 != 0) goto LAB_14dda1fed;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidAttributeName(InName)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Analytics\\Analytics\\Public\\AnalyticsEventAttribute.h"
                     ,0x78,L"");
  if (bVar5) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14dda1fed:
  local_108.AttrName.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
  (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.AttrName.Data.ArrayNum = (pFVar9->Data).ArrayNum;
  local_108.AttrName.Data.ArrayMax = (pFVar9->Data).ArrayMax;
  (pFVar9->Data).ArrayNum = 0;
  (pFVar9->Data).ArrayMax = 0;
  ::FString::PrintfImpl(&local_108.AttrValueString,L"%d");
  local_108.AttrValueNumber = 0.0;
  local_108.AttrValueBool = false;
  local_108.AttrType = JsonFragment;
  pFVar14 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar14 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar14);
  }
  if (((local_228.Data <= &local_108) &&
      (&local_108 < (FAnalyticsEventAttribute *)(local_228.Data + (longlong)local_220._4_4_ * 0x30))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (int)local_220;
  if ((int)local_220 == local_220._4_4_) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&local_228,(int *)((longlong)&local_220 + 4));
  }
  lVar10 = (longlong)iVar6;
  local_220 = CONCAT44(local_220._4_4_,iVar6 + 1);
  *(undefined8 *)&local_228.Data[lVar10 * 0x30].field_0x0 = 0;
  *(FScriptContainerElement **)&local_228.Data[lVar10 * 0x30].field_0x0 =
       local_108.AttrName.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 8) = local_108.AttrName.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0xc) = local_108.AttrName.Data.ArrayMax;
  *(undefined8 *)(local_228.Data + lVar10 * 0x30 + 0x10) = 0;
  *(FScriptContainerElement **)(local_228.Data + lVar10 * 0x30 + 0x10) =
       local_108.AttrValueString.Data.AllocatorInstance.Data;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x18) = local_108.AttrValueString.Data.ArrayNum;
  *(int *)(local_228.Data + lVar10 * 0x30 + 0x1c) = local_108.AttrValueString.Data.ArrayMax;
  *(double *)(local_228.Data + lVar10 * 0x30 + 0x20) = local_108.AttrValueNumber;
  local_228.Data[lVar10 * 0x30 + 0x28] = (FScriptContainerElement)local_108.AttrValueBool;
  *(AttrTypeEnum *)(local_228.Data + lVar10 * 0x30 + 0x2c) = local_108.AttrType;
  local_108.AttrValueString.Data.ArrayNum = 0;
  local_108.AttrValueString.Data.ArrayMax = 0;
  local_108.AttrValueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.AttrName.Data.ArrayNum = 0;
  local_108.AttrName.Data.ArrayMax = 0;
  local_108.AttrName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pIVar11 = FEngineAnalytics::GetProvider();
  pcVar2 = *(code **)(pIVar11->_padding_ + 0x100);
  ::FString::FString(&local_d0,L"MoviePipeline.RendersRequested");
  (*pcVar2)(pIVar11,&local_d0,&local_228);
  if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.Data.AllocatorInstance.Data);
  }
  DestructItems<FAnalyticsEventAttribute,int>
            ((FAnalyticsEventAttribute *)local_228.Data,(int)local_220);
  if ((FAnalyticsEventAttribute *)local_228.Data != (FAnalyticsEventAttribute *)0x0) {
    FMemory::Free(local_228.Data);
  }
  return;
}

