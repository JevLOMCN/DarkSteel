// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 82

// <lambda_invoker_cdecl> @ 1487678e0

void __cdecl
`FRenderAssetStreamingManager::StreamOutRenderAssetData'::__l25::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  FRHICommandListImmediate::ImmediateFlush(param_1,FlushRHIThreadFlushResources,None);
  FRHICommandListImmediate::FlushResources(param_1);
  return;
}

// FRenderAssetStreamingManager @ 148777ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

FRenderAssetStreamingManager * __thiscall
FRenderAssetStreamingManager::FRenderAssetStreamingManager(FRenderAssetStreamingManager *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FBoundsViewInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FDoWorkAsyncTask *this_00;
  code *pcVar7;
  FAsyncRenderAssetStreamingData *pFVar8;
  TArray<FStreamingViewInfoExtra,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar9;
  void *pvVar10;
  bool bVar11;
  int iVar12;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar13;
  FRenderAssetStreamingManager *pFVar14;
  wchar_t *pwVar15;
  UDeviceProfileManager *this_01;
  UDeviceProfile *this_02;
  UTextureLODSettings *this_03;
  FTextureLODGroup *pFVar16;
  FAsyncTask<FRenderAssetStreamingMipCalcTask> *this_04;
  FAsyncTask<FRenderAssetStreamingMipCalcTask> *pFVar17;
  FName *pFVar18;
  TStatIdData *pTVar19;
  TMulticastDelegate<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy> *this_05;
  FDelegateHandle FVar20;
  undefined ***pppuVar21;
  ulonglong uVar22;
  FRenderAssetInstanceAsyncView *pFVar23;
  TextureGroup TVar24;
  FAsyncTask<FRenderAssetStreamingMipCalcTask> *pFVar25;
  bool *pbVar26;
  int *piVar27;
  undefined1 auStackY_128 [32];
  undefined4 local_c8;
  undefined4 local_c4;
  int local_c0 [2];
  FRenderAssetStreamingManager *local_b8;
  FRenderAssetStreamingManager *local_b0;
  FRenderAssetStreamingManager *local_a8;
  int *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [32];
  undefined1 local_68 [16];
  undefined **local_58;
  FRenderAssetStreamingManager *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pTVar1 = &this->NumStreamedMips_StaticMesh;
  (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar2 = &this->NumStreamedMips_SkeletalMesh;
  (this->AsyncUnsafeStreamingRenderAssets).ArrayNum = 0;
  this->_padding_ = (longlong)&___7FRenderAssetStreamingManager__6B_;
  piVar4 = &(this->NumStreamedMips_StaticMesh).ArrayMax;
  *(undefined8 *)&(this->ReferencedRenderAssets).Elements = 0;
  *(undefined8 *)&(this->ReferencedRenderAssets).Elements.field_0x8 = 0;
  local_a0 = &(this->AsyncUnsafeStreamingRenderAssets).ArrayMax;
  *(undefined8 *)&(this->ReferencedRenderAssets).Elements.field_0x20 = 0;
  this->_padding_ = 0;
  *local_a0 = 0;
  *(undefined4 *)&(this->ReferencedRenderAssets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ReferencedRenderAssets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ReferencedRenderAssets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ReferencedRenderAssets).Elements.field_0x34 = 0;
  (this->ReferencedRenderAssets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ReferencedRenderAssets).HashSize = 0;
  *(undefined8 *)&(this->OptionalBulkDataFiles).Elements = 0;
  *(undefined8 *)&(this->OptionalBulkDataFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->OptionalBulkDataFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->OptionalBulkDataFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->OptionalBulkDataFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->OptionalBulkDataFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OptionalBulkDataFiles).Elements.field_0x34 = 0;
  (this->OptionalBulkDataFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->OptionalBulkDataFiles).HashSize = 0;
  this->CurrentUpdateStreamingRenderAssetIndex = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->NumStreamedMips_StaticMesh).ArrayNum = 0;
  *piVar4 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->NumStreamedMips_SkeletalMesh).ArrayNum = 0;
  (this->NumStreamedMips_SkeletalMesh).ArrayMax = 0;
  memset(&this->Settings,0,0xa8);
  FRenderAssetStreamingSettings::Update(&this->Settings);
  this->AsyncWork = (FAsyncTask<FRenderAssetStreamingMipCalcTask> *)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::`1'::<lambda_29_>,0,0>
              ::_vftable_;
  (this->RenderAssetInstanceAsyncWork).Reference = (FDoWorkAsyncTask *)0x0;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l1::<lambda_29_>,void,TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&>
       ::Call;
  local_40 = (undefined ***)0x0;
  local_50 = this;
  FDynamicRenderAssetInstanceManager::FDynamicRenderAssetInstanceManager
            (&this->DynamicComponentManager,
             (TFunction<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&)>
              *)local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar21 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar21 = local_40;
    }
    (*(code *)(*pppuVar21)[2])();
  }
  (this->PendingStreamingRenderAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingStreamingRenderAssets).ArrayNum = 0;
  (this->PendingStreamingRenderAssets).ArrayMax = 0;
  (this->RemovedRenderAssetIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RemovedRenderAssetIndices).ArrayNum = 0;
  (this->RemovedRenderAssetIndices).ArrayMax = 0;
  (this->DeferredTickCBAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeferredTickCBAssets).ArrayNum = 0;
  (this->DeferredTickCBAssets).ArrayMax = 0;
  *(undefined8 *)&(this->FastResponseRenderAssets).Elements = 0;
  *(undefined8 *)&(this->FastResponseRenderAssets).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->FastResponseRenderAssets).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->FastResponseRenderAssets).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->FastResponseRenderAssets).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->FastResponseRenderAssets).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FastResponseRenderAssets).Elements.field_0x34 = 0;
  (this->FastResponseRenderAssets).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->FastResponseRenderAssets).HashSize = 0;
  *(undefined8 *)&(this->VisibleFastResponseRenderAssetIndices).Elements = 0;
  *(undefined8 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x34 = 0;
  (this->VisibleFastResponseRenderAssetIndices).Hash.SecondaryData =
       (ForElementType<FSetElementId>)0x0;
  (this->VisibleFastResponseRenderAssetIndices).HashSize = 0;
  (this->PendingMipCopyRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingMipCopyRequests).ArrayNum = 0;
  (this->PendingMipCopyRequests).ArrayMax = 0;
  (this->LevelRenderAssetManagers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LevelRenderAssetManagers).ArrayNum = 0;
  (this->LevelRenderAssetManagers).ArrayMax = 0;
  this->ProcessingStage = 0;
  this->MemoryMargin = 0;
  this->CurrentPendingMipCopyRequestIdx = 0;
  this->LevelRenderAssetManagersLock = (FScopedLevelRenderAssetManagersLock *)0x0;
  this->NumRenderAssetProcessingStages = 5;
  this->bUseDynamicStreaming = false;
  this->BoostPlayerTextures = 3.0;
  this->EffectiveStreamingPoolSize = 0;
  this->MemoryOverBudget = 0;
  this->MaxEverRequired = 0;
  this->bPauseRenderAssetStreaming = false;
  this->LastWorldUpdateTime = 0.0;
  this->LastWorldUpdateTime_MipCalcTask = 0.0;
  memset(&this->DisplayedStats,0,0xe8);
  memset(&this->GatheredStats,0,0xe8);
  (this->InflightRenderAssets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InflightRenderAssets).ArrayNum = 0;
  (this->InflightRenderAssets).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->MountedStateDirtyFilesCS,4000);
  this->bRecacheAllFiles = false;
  *(undefined8 *)&(this->MountedStateDirtyFiles).Elements = 0;
  *(undefined8 *)&(this->MountedStateDirtyFiles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->MountedStateDirtyFiles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->MountedStateDirtyFiles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->MountedStateDirtyFiles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->MountedStateDirtyFiles).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MountedStateDirtyFiles).Elements.field_0x34 = 0;
  (this->MountedStateDirtyFiles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->MountedStateDirtyFiles).HashSize = 0;
  (this->OnPakFileMounted2Handle).ID = 0;
  (this->NewFileAddedDelegateHandle).ID = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CriticalSection,4000);
  (this->StreamingRenderAssetsSyncEvent).Reference = (FBaseGraphTask *)0x0;
  (this->AbandonedRenderAssetUpdateManager).AbandonedRenderAssetUpdates.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AbandonedRenderAssetUpdateManager).AbandonedRenderAssetUpdates.ArrayNum = 0;
  (this->AbandonedRenderAssetUpdateManager).AbandonedRenderAssetUpdates.ArrayMax = 0;
  pTVar13 = FCoreUObjectDelegates::GetPostGarbageCollect();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FAbandonedRenderAssetUpdateManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             pTVar13,(FAbandonedRenderAssetUpdateManager *)local_98,
             (pmf_6b7b928a)&this->AbandonedRenderAssetUpdateManager);
  bVar11 = FConfigCacheIni::GetInt(GConfig,L"TextureStreaming",L"MemoryMargin",local_c0,&GEngineIni)
  ;
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GConfig->GetInt( L\"TextureStreaming\", L\"MemoryMargin\", TempInt, GEngineIni )"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                          ,0xa2,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FRenderAssetStreamingManager *)(*pcVar7)();
    return pFVar14;
  }
  this->MemoryMargin = (longlong)local_c0[0];
  bVar11 = FConfigCacheIni::GetFloat
                     (GConfig,L"TextureStreaming",L"LightmapStreamingFactor",
                      &GLightmapStreamingFactor,&GEngineIni);
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GConfig->GetFloat( L\"TextureStreaming\", L\"LightmapStreamingFactor\", GLightmapStreamingFactor, GEngineIni )"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                          ,0xa5,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FRenderAssetStreamingManager *)(*pcVar7)();
    return pFVar14;
  }
  bVar11 = FConfigCacheIni::GetFloat
                     (GConfig,L"TextureStreaming",L"ShadowmapStreamingFactor",
                      &GShadowmapStreamingFactor,&GEngineIni);
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("GConfig->GetFloat( L\"TextureStreaming\", L\"ShadowmapStreamingFactor\", GShadowmapStreamingFactor, GEngineIni )"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                          ,0xa6,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FRenderAssetStreamingManager *)(*pcVar7)();
    return pFVar14;
  }
  local_c0[1] = 0;
  FConfigCacheIni::GetInt(GConfig,L"TextureStreaming",L"PoolSize",local_c0 + 1,&GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"TextureStreaming",L"UseDynamicStreaming",&this->bUseDynamicStreaming,
             &GEngineIni);
  FConfigCacheIni::GetFloat
            (GConfig,L"TextureStreaming",L"BoostPlayerTextures",&this->BoostPlayerTextures,
             &GEngineIni);
  FConfigCacheIni::GetBool
            (GConfig,L"TextureStreaming",L"NeverStreamOutRenderAssets",&GNeverStreamOutRenderAssets,
             &GEngineIni);
  pwVar15 = FCommandLine::Get();
  bVar11 = FParse::Param(pwVar15,L"NeverStreamOutRenderAssets");
  if (bVar11) {
    GNeverStreamOutRenderAssets = true;
  }
  else if (GNeverStreamOutRenderAssets == false) goto LAB_1487783e7;
  if (4 < (byte)LogContentStreaming._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
  }
LAB_1487783e7:
  pbVar26 = (this->Settings).HighPriorityLoad_Texture;
  piVar27 = this->NumStreamedMips_Texture;
  this->MemoryMargin = this->MemoryMargin << 0x14;
  TVar24 = TEXTUREGROUP_World;
  do {
    this_01 = UDeviceProfileManager::Get(false);
    this_02 = UDeviceProfileManager::GetActiveProfile(this_01);
    this_03 = UDeviceProfile::GetTextureLODSettings(this_02);
    pFVar16 = UTextureLODSettings::GetTextureLODGroup(this_03,TVar24);
    *piVar27 = pFVar16->NumStreamedMips;
    if ((pFVar16->HighPriorityLoad == 0) && (2 < TVar24 - TEXTUREGROUP_Character)) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    *pbVar26 = bVar11;
    TVar24 = TVar24 + TEXTUREGROUP_WorldNormalMap;
    pbVar26 = pbVar26 + 1;
    piVar27 = piVar27 + 1;
  } while ((int)TVar24 < 0x52);
  pFVar25 = (FAsyncTask<FRenderAssetStreamingMipCalcTask> *)0x0;
  (this->NumStreamedMips_StaticMesh).ArrayNum = 0;
  iVar12 = 1;
  if (*piVar4 != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,&pTVar1->AllocatorInstance,0,piVar4);
    iVar12 = *piVar4;
  }
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  local_c8 = 0x7fffffff;
  if (((pFVar5 <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 < pFVar5 + (longlong)iVar12 * 4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FRenderAssetStreamingManager *)(*pcVar7)();
    return pFVar14;
  }
  iVar12 = (this->NumStreamedMips_StaticMesh).ArrayNum;
  if (iVar12 == *piVar4) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar1->AllocatorInstance,piVar4);
  }
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  piVar4 = &(this->NumStreamedMips_SkeletalMesh).ArrayMax;
  (this->NumStreamedMips_StaticMesh).ArrayNum = iVar12 + 1;
  *(undefined4 *)(pFVar5 + (longlong)iVar12 * 4) = local_c8;
  (this->NumStreamedMips_SkeletalMesh).ArrayNum = 0;
  iVar12 = 1;
  if (*piVar4 != 1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,1,&pTVar2->AllocatorInstance,0,piVar4);
    iVar12 = *piVar4;
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  local_c4 = 0x7fffffff;
  if (((pFVar5 <= (FScriptContainerElement *)&local_c4) &&
      ((FScriptContainerElement *)&local_c4 < pFVar5 + (longlong)iVar12 * 4)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar7 = (code *)swi(3);
    pFVar14 = (FRenderAssetStreamingManager *)(*pcVar7)();
    return pFVar14;
  }
  iVar12 = (this->NumStreamedMips_SkeletalMesh).ArrayNum;
  if (iVar12 == *piVar4) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar2->AllocatorInstance,piVar4);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  (this->NumStreamedMips_SkeletalMesh).ArrayNum = iVar12 + 1;
  *(undefined4 *)(pFVar5 + (longlong)iVar12 * 4) = local_c4;
  GFlushStreamingFunc = FlushResourceStreaming;
  this->ProcessingStage = 0;
  this_04 = ::operator_new(0x198);
  pFVar17 = pFVar25;
  if (this_04 != (FAsyncTask<FRenderAssetStreamingMipCalcTask> *)0x0) {
    local_b8 = this;
    pFVar17 = FAsyncTask<FRenderAssetStreamingMipCalcTask>::
              FAsyncTask<FRenderAssetStreamingMipCalcTask><FRenderAssetStreamingManager_*>
                        (this_04,&local_b8);
  }
  this->AsyncWork = pFVar17;
  pFVar17 = ::operator_new(0xc0);
  if (pFVar17 != (FAsyncTask<FRenderAssetStreamingMipCalcTask> *)0x0) {
    memset(&pFVar17->_padding_,0,0xb0);
    uVar22 = (ulonglong)_tls_index;
    pFVar17->_padding_ = 0;
    pFVar17->_padding_ = (longlong)&___7FAsyncTaskBase__6B_;
    pFVar17->_padding_ = (longlong)&TStatId::TStatId_NAME_None;
    *(undefined4 *)&pFVar17->_padding_ = 0;
    pFVar17->_padding_ = (longlong)&___7__FAsyncTask_VFDoWorkTask_RenderAssetInstanceTask____6B_;
    pvVar10 = ThreadLocalStoragePointer;
    pFVar17->_padding_ = 0;
    pFVar17->_padding_ = 0;
    *(undefined2 *)&pFVar17->_padding_ = 3;
    lVar6 = *(longlong *)((longlong)pvVar10 + uVar22 * 8);
    pFVar17->_padding_ = -1;
    pFVar17->_padding_ = 0;
    (pFVar17->Task).StreamingData.ViewInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar17->Task).StreamingData.ViewInfos.ArrayNum = 0;
    (pFVar17->Task).StreamingData.ViewInfos.ArrayMax = 0;
    pFVar8 = &(pFVar17->Task).StreamingData;
    (pFVar8->ViewInfoExtras).AllocatorInstance.InlineData[0] = '\0';
    (pFVar8->ViewInfoExtras).AllocatorInstance.InlineData[1] = '\0';
    (pFVar8->ViewInfoExtras).AllocatorInstance.InlineData[2] = '\0';
    (pFVar8->ViewInfoExtras).AllocatorInstance.InlineData[3] = '\0';
    (pFVar8->ViewInfoExtras).AllocatorInstance.InlineData[4] = '\0';
    (pFVar8->ViewInfoExtras).AllocatorInstance.InlineData[5] = '\0';
    (pFVar8->ViewInfoExtras).AllocatorInstance.InlineData[6] = '\0';
    (pFVar8->ViewInfoExtras).AllocatorInstance.InlineData[7] = '\0';
    pTVar9 = &(pFVar17->Task).StreamingData.ViewInfoExtras;
    (pTVar9->AllocatorInstance).InlineData[8] = '\0';
    (pTVar9->AllocatorInstance).InlineData[9] = '\0';
    (pTVar9->AllocatorInstance).InlineData[10] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0xf] = '\0';
    pTVar9 = &(pFVar17->Task).StreamingData.ViewInfoExtras;
    (pTVar9->AllocatorInstance).InlineData[0x10] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x11] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x12] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x13] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x14] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x15] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x16] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x17] = '\0';
    pTVar9 = &(pFVar17->Task).StreamingData.ViewInfoExtras;
    (pTVar9->AllocatorInstance).InlineData[0x18] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x19] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x1a] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x1b] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x1c] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x1d] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x1e] = '\0';
    (pTVar9->AllocatorInstance).InlineData[0x1f] = '\0';
    (pFVar17->Task).StreamingData.ViewInfoExtras.AllocatorInstance.SecondaryData =
         (ForElementType<FStreamingViewInfoExtra>)0x0;
    (pFVar17->Task).StreamingData.ViewInfoExtras.ArrayNum = 0;
    (pFVar17->Task).StreamingData.ViewInfoExtras.ArrayMax = 0;
    if ((*(int *)(lVar6 + 0x9d4c) <
         `public:_struct_TStatId___cdecl_RenderAssetInstanceTask::FDoWorkTask::GetStatId(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_struct_TStatId___cdecl_RenderAssetInstanceTask::FDoWorkTask::GetStatId(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `public:_struct_TStatId___cdecl_RenderAssetInstanceTask::FDoWorkTask::GetStatId(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      FThreadSafeStaticStat<`RenderAssetInstanceTask::FDoWorkTask::GetStatId'::__l2::FStat_FCreateViewWithUninitializedBounds>
      ::
      FThreadSafeStaticStat<_RenderAssetInstanceTask::FDoWorkTask::GetStatId_::__l2::FStat_FCreateViewWithUninitializedBounds>
                (&`public:_struct_TStatId___cdecl_RenderAssetInstanceTask::FDoWorkTask::GetStatId(void)const___ptr64'
                  ::__l2::StatPtr_FCreateViewWithUninitializedBounds);
      _Init_thread_footer(&`public:_struct_TStatId___cdecl_RenderAssetInstanceTask::FDoWorkTask::GetStatId(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    pTVar19 = _StatPtr_FCreateViewWithUninitializedBounds;
    if (_StatPtr_FCreateViewWithUninitializedBounds == (TStatIdData *)0x0) {
      pFVar18 = ::FName::FName((FName *)(local_98 + 8),"FCreateViewWithUninitializedBounds");
      pTVar19 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`public:_struct_TStatId___cdecl_RenderAssetInstanceTask::FDoWorkTask::GetStatId(void)const___ptr64'
                            ::__l2::StatPtr_FCreateViewWithUninitializedBounds,*pFVar18,
                           L"FCreateViewWithUninitializedBounds","STATGROUP_ThreadPoolAsyncTasks",
                           "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,
                           false,MCR_Invalid);
    }
    pFVar17->_padding_ = (longlong)pTVar19;
    pFVar17->_padding_ =
         (longlong)
         &RenderAssetInstanceTask::FDoWorkAsyncTask::
          _vftable__for__FAsyncTask<RenderAssetInstanceTask::FDoWorkTask>__;
    (pFVar17->Task).StreamingData.DynamicInstancesView.View.Reference =
         (FRenderAssetInstanceView *)
         &RenderAssetInstanceTask::FDoWorkAsyncTask::_vftable__for__FRefCountedObject__;
    *(undefined4 *)
     &(pFVar17->Task).StreamingData.DynamicInstancesView.BoundsViewInfo.AllocatorInstance.Data = 0;
    pFVar25 = pFVar17;
  }
  pFVar17 = (FAsyncTask<FRenderAssetStreamingMipCalcTask> *)
            (this->RenderAssetInstanceAsyncWork).Reference;
  if (pFVar17 != pFVar25) {
    (this->RenderAssetInstanceAsyncWork).Reference = (FDoWorkAsyncTask *)pFVar25;
    if (pFVar25 != (FAsyncTask<FRenderAssetStreamingMipCalcTask> *)0x0) {
      pTVar3 = &(pFVar25->Task).StreamingData.DynamicInstancesView.BoundsViewInfo;
      *(int *)&(pTVar3->AllocatorInstance).Data = *(int *)&(pTVar3->AllocatorInstance).Data + 1;
    }
    if (pFVar17 != (FAsyncTask<FRenderAssetStreamingMipCalcTask> *)0x0) {
      pFVar23 = &(pFVar17->Task).StreamingData.DynamicInstancesView;
      pTVar3 = &(pFVar17->Task).StreamingData.DynamicInstancesView.BoundsViewInfo;
      *(int *)&(pTVar3->AllocatorInstance).Data = *(int *)&(pTVar3->AllocatorInstance).Data + -1;
      if (*(int *)&(pTVar3->AllocatorInstance).Data == 0) {
        (*(code *)((pFVar23->View).Reference)->_padding_)(pFVar23,1);
      }
    }
  }
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    this_00 = (this->RenderAssetInstanceAsyncWork).Reference;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
    FDynamicRenderAssetInstanceManager::RegisterTasks
              (&this->DynamicComponentManager,(FDoWorkTask *)&this_00->field_0x70);
  }
  pTVar13 = FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FRenderAssetStreamingManager>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             pTVar13,(FRenderAssetStreamingManager *)local_88,(pmf_4b5c8ac4)this);
  this_05 = FCoreDelegates::GetOnPakFileMounted2();
  local_b0 = this;
  FVar20 = TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
           ::
           AddLambda<_FRenderAssetStreamingManager::FRenderAssetStreamingManager_::__l2::<lambda_1>_>
                     ((TMulticastDelegateRegistration<void___cdecl(IPakFile_const_&),FDefaultTSDelegateUserPolicy>
                       *)this_05,(<lambda_1> *)(local_88 + 8));
                    /* WARNING: Load size is inaccurate */
  (this->OnPakFileMounted2Handle).ID = *FVar20.ID;
  local_a8 = this;
  FVar20 = TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
           ::
           AddLambda<_FRenderAssetStreamingManager::FRenderAssetStreamingManager_::__l2::<lambda_2>_>
                     ((TMulticastDelegateRegistration<void___cdecl(FString_const_&),FDefaultDelegateUserPolicy>
                       *)&FCoreDelegates::NewFileAddedDelegate,(<lambda_2> *)(local_88 + 0x10));
                    /* WARNING: Load size is inaccurate */
  (this->NewFileAddedDelegateHandle).ID = *FVar20.ID;
  if (*local_a0 < 20000) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,20000,&(this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance,
               (this->AsyncUnsafeStreamingRenderAssets).ArrayNum,local_a0);
  }
  return this;
}

// ~FRenderAssetStreamingManager @ 14877ee50

void __thiscall
FRenderAssetStreamingManager::~FRenderAssetStreamingManager(FRenderAssetStreamingManager *this)

{
  undefined1 *puVar1;
  int iVar2;
  FAsyncTask<FRenderAssetStreamingMipCalcTask> *pFVar3;
  ulong64 uVar4;
  FBaseGraphTask *pFVar5;
  ForElementType<FSetElementId> FVar6;
  FDoWorkAsyncTask *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  ulong64 *puVar11;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ForAnyElementType *this_02;
  FScriptContainerElement *pFVar16;
  FDestructionSentinel local_58;
  
  this->_padding_ = (longlong)&___7FRenderAssetStreamingManager__6B_;
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
  pFVar3 = this->AsyncWork;
  if (pFVar3 != (FAsyncTask<FRenderAssetStreamingMipCalcTask> *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x28))(pFVar3,1);
  }
  FAsyncTaskBase::EnsureCompletion
            ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::GetOnPakFileMounted2();
  uVar4 = (this->OnPakFileMounted2Handle).ID;
  uVar14 = 0;
  if (uVar4 != 0) {
    if ((this_00 == (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)this_00);
    uVar13 = uVar14;
    uVar15 = uVar14;
    if (0 < (this_00->InvocationList).ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar10 = 0;
        if ((int)uVar12 < (this_00->InvocationList).ArrayNum) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar16 = (this_00->InvocationList).AllocatorInstance.Data + uVar15;
        if (((*(int *)&pFVar16[8].field_0x0 != 0) &&
            (*(longlong **)&pFVar16->field_0x0 != (longlong *)0x0)) &&
           (puVar11 = (ulong64 *)(**(code **)(**(longlong **)&pFVar16->field_0x0 + 0x40))(),
           *puVar11 == uVar4)) {
          if ((*(int *)&pFVar16[8].field_0x0 != 0) &&
             (*(undefined8 **)&pFVar16->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&pFVar16->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)pFVar16,0,0,0x10);
            *(undefined4 *)&pFVar16[8].field_0x0 = 0;
          }
          TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList(this_00,false)
          ;
          break;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar15 = uVar15 + 0x10;
      } while ((int)(uVar12 + 1) < (this_00->InvocationList).ArrayNum);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
  }
  uVar4 = (this->NewFileAddedDelegateHandle).ID;
  if (uVar4 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::NewFileAddedDelegate,(FWriteAccessScope *)&local_58);
    uVar13 = uVar14;
    if (0 < (int)FCoreDelegates::NewFileAddedDelegate._16_4_) {
      do {
        uVar12 = (uint)uVar14;
        uVar10 = 0;
        if ((int)uVar12 < (int)FCoreDelegates::NewFileAddedDelegate._16_4_) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        this_02 = (ForAnyElementType *)(FCoreDelegates::NewFileAddedDelegate._8_8_ + uVar13);
        if (((*(int *)&this_02[1].Data != 0) && (this_02->Data != (FScriptContainerElement *)0x0))
           && (puVar11 = (ulong64 *)(**(code **)(*(longlong *)this_02->Data + 0x40))(),
              *puVar11 == uVar4)) {
          if ((*(int *)&this_02[1].Data != 0) && (this_02->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_02->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_02,0,0,0x10);
            *(undefined4 *)&this_02[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::NewFileAddedDelegate,false);
          break;
        }
        uVar14 = (ulonglong)(uVar12 + 1);
        uVar13 = uVar13 + 0x10;
      } while ((int)(uVar12 + 1) < (int)FCoreDelegates::NewFileAddedDelegate._16_4_);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            FCoreUObjectDelegates::GetPreGarbageCollectDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_01,this);
  memset(&this->DisplayedStats,0,0xe8);
  FRenderAssetStreamingStats::Apply(&this->DisplayedStats);
  FAbandonedRenderAssetUpdateManager::~FAbandonedRenderAssetUpdateManager
            (&this->AbandonedRenderAssetUpdateManager);
  pFVar5 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  (this->MountedStateDirtyFiles).HashSize = 0;
  FVar6 = (this->MountedStateDirtyFiles).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->MountedStateDirtyFiles).Elements);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->MountedStateDirtyFilesCS);
  pFVar16 = (this->InflightRenderAssets).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->PendingMipCopyRequests).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  (this->VisibleFastResponseRenderAssetIndices).HashSize = 0;
  FVar6 = (this->VisibleFastResponseRenderAssetIndices).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VisibleFastResponseRenderAssetIndices).Elements);
  (this->FastResponseRenderAssets).HashSize = 0;
  FVar6 = (this->FastResponseRenderAssets).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<UStreamableRenderAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UStreamableRenderAsset_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->FastResponseRenderAssets).Elements);
  pFVar16 = (this->DeferredTickCBAssets).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->RemovedRenderAssetIndices).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->PendingStreamingRenderAssets).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  FDynamicRenderAssetInstanceManager::~FDynamicRenderAssetInstanceManager
            (&this->DynamicComponentManager);
  pFVar7 = (this->RenderAssetInstanceAsyncWork).Reference;
  if (pFVar7 != (FDoWorkAsyncTask *)0x0) {
    puVar1 = &pFVar7->field_0xb8;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (*(int *)puVar1 == 0) {
      (*(code *)**(undefined8 **)&pFVar7->field_0xb0)(&pFVar7->field_0xb0,1);
    }
  }
  pFVar16 = (this->NumStreamedMips_SkeletalMesh).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  pFVar16 = (this->NumStreamedMips_StaticMesh).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  (this->OptionalBulkDataFiles).HashSize = 0;
  FVar6 = (this->OptionalBulkDataFiles).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OptionalBulkDataFiles).Elements);
  (this->ReferencedRenderAssets).HashSize = 0;
  FVar6 = (this->ReferencedRenderAssets).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<TObjectPtr<UStreamableRenderAsset>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TObjectPtr<UStreamableRenderAsset>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ReferencedRenderAssets).Elements);
  DestructItems<FStreamingRenderAsset,int>
            ((FStreamingRenderAsset *)
             (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data,
             (this->AsyncUnsafeStreamingRenderAssets).ArrayNum);
  pFVar16 = (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
  if (pFVar16 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar16);
  }
  this->_padding_ = (longlong)&___7IStreamingManager__6B_;
  return;
}

// operator() @ 148781980

void __thiscall
`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l2::<lambda_1>::operator()
          (void *this,IPakFile *param_1)

{
  longlong lVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *this_00;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)this + 0x668);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  *(undefined1 *)(*(longlong *)this + 0x690) = 1;
  lVar1 = *(longlong *)this;
  this_00 = (TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
            (lVar1 + 0x698);
  bVar2 = 1 < *(int *)(lVar1 + 0x6e0);
  if (!bVar2) {
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::UnhashElements(this_00)
    ;
  }
  *(undefined4 *)(lVar1 + 0x6a0) = 0;
  if (*(int *)(lVar1 + 0x6a4) != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)(lVar1 + 0x6a4));
  }
  *(undefined4 *)(lVar1 + 0x6cc) = 0;
  *(undefined4 *)(lVar1 + 0x6c8) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x6c0) = 0;
  if ((*(int *)(lVar1 + 0x6c4) < 0) || (0x80 < *(int *)(lVar1 + 0x6c4))) {
    *(undefined4 *)(lVar1 + 0x6c4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 0x6a8),0);
  }
  if (bVar2) {
    *(undefined4 *)(lVar1 + 0x6e0) = 1;
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
                    /* WARNING: Could not recover jumptable at 0x000148781a5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// operator() @ 148782b40

FString * __thiscall
`FRenderAssetStreamingManager::HandleListStreamingRenderAssetsCommand'::__l49::<lambda_1>::
operator()(void *this,FString *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  
  uVar3 = 0;
  if (param_1 < *(int *)(*(longlong *)this + 8)) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FString *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (**(longlong **)((longlong)this + 8) == 0) {
    if (**(longlong **)((longlong)this + 0x10) == 0) {
      pwVar5 = L"%dx%d*%d";
      if (**(longlong **)((longlong)this + 0x18) == 0) {
        pwVar5 = L"%d?%d?%d";
      }
    }
    else {
      pwVar5 = L"%dx%dx%d";
    }
    ::FString::PrintfImpl(__return_storage_ptr__,pwVar5);
  }
  else {
    ::FString::PrintfImpl(__return_storage_ptr__,L"%dx%d");
  }
  return __return_storage_ptr__;
}

// operator() @ 148782c40

bool __thiscall
`FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand'::__l15::<lambda_1>::operator()
          (void *this,int *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FString *pFVar7;
  FString *pFVar8;
  uint uVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  FString local_28;
  FString local_18;
  
  uVar1 = *param_2;
  plVar2 = *(longlong **)this;
  uVar9 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar7 = UObjectBaseUtility::GetFullName
                     (*(UObjectBaseUtility **)((longlong)(int)uVar1 * 0xb8 + *plVar2),&local_18,
                      (UObject *)0x0,None);
  uVar1 = *param_1;
  plVar2 = *(longlong **)this;
  uVar9 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar8 = UObjectBaseUtility::GetFullName
                     (*(UObjectBaseUtility **)((longlong)(int)uVar1 * 0xb8 + *plVar2),&local_28,
                      (UObject *)0x0,None);
  pwVar10 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  if ((pFVar8->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
  }
  iVar6 = FGenericPlatformStricmp::Stricmp(pwVar10,pwVar11);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar6 >> 0x1f,0);
}

// operator() @ 148783310

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FRenderAssetStreamingManager::FRenderAssetStreamingManager'::__l2::<lambda_2>::operator()
          (void *this,FString *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  FWriteBuffer *pFVar2;
  bool bVar3;
  undefined1 auStackY_78 [32];
  FLLMScope local_44;
  FLLMScope local_40;
  FLLMScope local_3c;
  uint local_38 [2];
  uint local_30 [2];
  FMemScope local_28;
  TLogScope<0> local_20;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_78;
  lVar1 = *(longlong *)this;
  local_38[0] = MakeIoFilenameHash(param_1);
  if ((*(char *)(lVar1 + 0x690) == '\0') && (local_38[0] != 0)) {
    FLLMScope::FLLMScope(&local_3c,StreamingManager,false,None,Default,true);
    FMemScope::FMemScope(&local_28,StreamingManager,true);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_40,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_44,AssetClasses,Default);
    bVar3 = -1 < MetadataChannel->Enabled;
    if (bVar3) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_20);
      *(undefined8 *)(local_20._8_8_ + 0x28) = *(undefined8 *)(local_20._8_8_ + 0x20);
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar1 + 0x668);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int_&>
              ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
               (lVar1 + 0x698),local_30,(bool *)local_38);
    LeaveCriticalSection(lpCriticalSection);
    if (bVar3) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
      if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 1) {
        pFVar2 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar2->Cursor = '\n';
      pFVar2->Cursor = pFVar2->Cursor + 1;
      pFVar2->Committed = pFVar2->Cursor;
    }
    FLLMScope::~FLLMScope(&local_44);
    FLLMScope::~FLLMScope(&local_40);
    FMemScope::~FMemScope(&local_28);
    FLLMScope::~FLLMScope(&local_3c);
  }
  return;
}

// AddLevel @ 148786820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::AddLevel(FRenderAssetStreamingManager *this,ULevel *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<FLevelRenderAssetManager_*,TSizedDefaultAllocator<32>_> *pTVar2;
  byte *pbVar3;
  FScopedLevelRenderAssetManagersLock *pFVar4;
  longlong *plVar5;
  FDoWorkAsyncTask *this_00;
  longlong lVar6;
  code *pcVar7;
  FRenderAssetStreamingManager *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FWriteBuffer *pFVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  undefined1 auStackY_c8 [32];
  undefined1 local_78;
  undefined1 local_77;
  <lambda_1> local_76;
  longlong *local_70;
  FLLMScope local_68;
  FLLMScope local_64;
  FLLMScope local_60;
  uint local_5c;
  FRenderAssetStreamingManager *local_58;
  FScriptContainerElement *local_50;
  FMemScope local_48;
  TLogScope<0> local_40;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    return;
  }
  lpCriticalSection = &this->CriticalSection;
  local_58 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FLLMScope::FLLMScope(&local_60,StreamingManager,false,None,Default,true);
  FMemScope::FMemScope(&local_48,StreamingManager,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_64,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_68,AssetClasses,Default);
  bVar17 = -1 < MetadataChannel->Enabled;
  if (bVar17) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_40);
    *(undefined8 *)(local_40._8_8_ + 0x28) = *(undefined8 *)(local_40._8_8_ + 0x20);
  }
  if ((param_1 == (ULevel *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Level",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                         ,0x374,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar2 = &this->LevelRenderAssetManagers;
  pFVar16 = (pTVar2->AllocatorInstance).Data;
  iVar11 = (this->LevelRenderAssetManagers).ArrayNum;
  pFVar14 = pFVar16 + (longlong)iVar11 * 8;
  while( true ) {
    if ((this->LevelRenderAssetManagers).ArrayNum != iVar11) {
      local_78 = 0;
      `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_78);
    }
    if (pFVar16 == pFVar14) {
      pFVar4 = local_58->LevelRenderAssetManagersLock;
      if (pFVar4 == (FScopedLevelRenderAssetManagersLock *)0x0) goto LAB_1487869e4;
      local_5c = (pFVar4->PendingAddLevelManagers).ArrayNum;
      uVar13 = (ulonglong)(int)local_5c;
      pFVar14 = (pFVar4->PendingAddLevelManagers).AllocatorInstance.Data;
      local_50 = pFVar14 + uVar13 * 8;
      goto LAB_148786988;
    }
    if ((*(longlong **)pFVar16 != (longlong *)0x0) && ((ULevel *)**(longlong **)pFVar16 == param_1))
    break;
    pFVar16 = pFVar16 + 8;
  }
LAB_148786c58:
  if (bVar17) {
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar6 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar6 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
  }
  FLLMScope::~FLLMScope(&local_68);
  FLLMScope::~FLLMScope(&local_64);
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(&local_60);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
LAB_148786988:
  pFVar16 = local_50;
  if ((pFVar4->PendingAddLevelManagers).ArrayNum != (int)uVar13) {
    local_77 = 0;
    `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>::
    operator()(&local_77);
  }
  if (pFVar14 == pFVar16) goto LAB_1487869e4;
  plVar5 = *(longlong **)pFVar14;
  if ((plVar5 == (longlong *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("LevelManager",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                         ,0x38c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((ULevel *)*plVar5 == param_1) goto LAB_148786c58;
  uVar13 = (ulonglong)local_5c;
  pFVar14 = pFVar14 + 8;
  goto LAB_148786988;
LAB_1487869e4:
  pFVar8 = local_58;
  FAsyncTaskBase::EnsureCompletion
            ((FAsyncTaskBase *)(local_58->RenderAssetInstanceAsyncWork).Reference,true,false);
  local_70 = ::operator_new(0xc0);
  if (local_70 == (longlong *)0x0) {
    local_70 = (longlong *)0x0;
  }
  else {
    this_00 = (pFVar8->RenderAssetInstanceAsyncWork).Reference;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
    *local_70 = (longlong)param_1;
    *(undefined2 *)(local_70 + 1) = 0;
    FStaticRenderAssetInstanceManager::FStaticRenderAssetInstanceManager
              ((FStaticRenderAssetInstanceManager *)(local_70 + 2),
               (FDoWorkTask *)&this_00->field_0x70);
    *(undefined1 *)(local_70 + 8) = 0;
    local_70[9] = 0;
    local_70[10] = 0;
    local_70[0xb] = 0;
    local_70[0xc] = 0;
    local_70[0xd] = 0;
    local_70[0xe] = 0;
    local_70[0x11] = 0;
    *(undefined4 *)(local_70 + 0x12) = 0;
    *(undefined4 *)((longlong)local_70 + 0x94) = 0x80;
    *(undefined4 *)(local_70 + 0x13) = 0xffffffff;
    *(undefined4 *)((longlong)local_70 + 0x9c) = 0;
    local_70[0x15] = 0;
    *(undefined4 *)(local_70 + 0x16) = 0;
    *(undefined1 *)(local_70 + 0x17) = 0;
    if (*local_70 != 0) {
      pbVar3 = (byte *)(*local_70 + 0x240);
      *pbVar3 = *pbVar3 & 0xef;
    }
  }
  uVar10 = TArray<FLevelRenderAssetManager_*,TSizedDefaultAllocator<32>_>::
           FindLastByPredicate<_FRenderAssetStreamingManager::AddLevel_::__l2::<lambda_1>_>
                     (pTVar2,local_76,(this->LevelRenderAssetManagers).ArrayNum);
  plVar5 = local_70;
  if (uVar10 == 0xffffffff) {
    pFVar4 = pFVar8->LevelRenderAssetManagersLock;
    if (pFVar4 == (FScopedLevelRenderAssetManagersLock *)0x0) {
      pTVar2 = &pFVar8->LevelRenderAssetManagers;
      pFVar14 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_70) &&
          ((FScriptContainerElement *)&local_70 <
           pFVar14 + (longlong)(pFVar8->LevelRenderAssetManagers).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (pFVar8->LevelRenderAssetManagers).ArrayNum;
      piVar1 = &(pFVar8->LevelRenderAssetManagers).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar8->LevelRenderAssetManagers).ArrayNum = iVar11 + 1;
      pFVar14 = (pTVar2->AllocatorInstance).Data;
    }
    else {
      pFVar14 = (pFVar4->PendingAddLevelManagers).AllocatorInstance.Data;
      if (((pFVar14 <= (FScriptContainerElement *)&local_70) &&
          ((FScriptContainerElement *)&local_70 <
           pFVar14 + (longlong)(pFVar4->PendingAddLevelManagers).ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = (pFVar4->PendingAddLevelManagers).ArrayNum;
      piVar1 = &(pFVar4->PendingAddLevelManagers).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(pFVar4->PendingAddLevelManagers).AllocatorInstance,piVar1);
      }
      (pFVar4->PendingAddLevelManagers).ArrayNum = iVar11 + 1;
      pFVar14 = (pFVar4->PendingAddLevelManagers).AllocatorInstance.Data;
    }
    *(longlong **)(pFVar14 + (longlong)iVar11 * 8) = local_70;
  }
  else {
    uVar15 = 0;
    if ((int)uVar10 < (this->LevelRenderAssetManagers).ArrayNum) {
      uVar15 = ~uVar10 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(longlong **)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8) = plVar5;
  }
  goto LAB_148786c58;
}

// AddRenderedTextureStats @ 1487879f0

void __thiscall
FRenderAssetStreamingManager::AddRenderedTextureStats
          (FRenderAssetStreamingManager *this,
          TMap<FString,FRenderedTextureStats,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRenderedTextureStats,0>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong lVar2;
  ForAnyElementType FVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int *piVar9;
  FRenderedTextureStats *pFVar10;
  FRenderedTextureStats *pFVar11;
  int iVar12;
  FName local_res8;
  TPairInitializer<FString_&&,FRenderedTextureStats_const_&> local_res18;
  FString local_90;
  FString *local_80;
  int *local_78;
  FString local_70;
  int local_60 [2];
  FString local_58 [2];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  fVar4 = __real_7f7fffff;
  iVar1 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  pFVar11 = (FRenderedTextureStats *)(this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data
  ;
  local_res18.Value = (FRenderedTextureStats *)((longlong)pFVar11 + (longlong)iVar1 * 0xb8);
  pFVar10 = local_res18.Value;
  do {
    while( true ) {
      if ((this->AsyncUnsafeStreamingRenderAssets).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FStreamingRenderAsset,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (pFVar11 == pFVar10) {
                    /* WARNING: Could not recover jumptable at 0x000148787c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        return;
      }
      lVar2 = *(longlong *)pFVar11;
      if ((((lVar2 != 0) && (-1 < *(char *)((longlong)&pFVar11[6]._padding_ + 2))) &&
          ((char)pFVar11[6]._padding_ == '\x01')) && (fVar4 != (float)pFVar11[4]._padding_)) break;
LAB_148787bda:
      pFVar11 = (FRenderedTextureStats *)&pFVar11[7].TextureGroup.Data.ArrayNum;
    }
    iVar12 = (int)*(char *)((longlong)&pFVar11[5].TextureGroup.Data.ArrayMax + 1) -
             (int)*(char *)((longlong)&pFVar11[5].TextureGroup.Data.ArrayNum + 2);
    local_res8 = *(FName *)(lVar2 + 0x18);
    if (iVar12 < 0) {
      iVar12 = 0;
    }
    ::FName::ToString(&local_res8,&local_90);
    iVar6 = local_90.Data.ArrayNum + -1;
    FVar3.Data = local_90.Data.AllocatorInstance.Data;
    if (local_90.Data.ArrayNum == 0) {
      iVar6 = 0;
      FVar3.Data = (FScriptContainerElement *)L"";
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar3.Data);
    iVar6 = TSet<TTuple<FString,FRenderedTextureStats>,TDefaultMapHashableKeyFuncs<FString,FRenderedTextureStats,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FRenderedTextureStats>,TDefaultMapHashableKeyFuncs<FString,FRenderedTextureStats,0>,FDefaultSetAllocator>
                        *)param_1,uVar5,&local_90);
    if (iVar6 == -1) {
      lVar8 = 0;
    }
    else {
      lVar8 = (longlong)iVar6 * 0x30 + *(longlong *)param_1;
    }
    piVar9 = (int *)(lVar8 + 0x10);
    if (lVar8 == 0) {
      piVar9 = (int *)0x0;
    }
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (piVar9 == (int *)0x0) {
      local_58[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58[0].Data.ArrayNum = 0;
      local_58[0].Data.ArrayMax = 0;
      local_60[0] = iVar12;
      pwVar7 = UTexture::GetTextureGroupString(pFVar11[1]._padding_);
      ::FString::operator=(local_58,pwVar7);
      local_res8 = *(FName *)(lVar2 + 0x18);
      ::FName::ToString(&local_res8,&local_70);
      local_80 = &local_70;
      local_78 = local_60;
      TSet<TTuple<FString,FRenderedTextureStats>,TDefaultMapHashableKeyFuncs<FString,FRenderedTextureStats,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FRenderedTextureStats_const_&>_>
                ((TSet<TTuple<FString,FRenderedTextureStats>,TDefaultMapHashableKeyFuncs<FString,FRenderedTextureStats,0>,FDefaultSetAllocator>
                  *)param_1,&local_res18,(bool *)&local_80);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      pFVar10 = local_res18.Value;
      if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
        pFVar10 = local_res18.Value;
      }
      goto LAB_148787bda;
    }
    iVar6 = *piVar9;
    if (iVar12 < *piVar9) {
      iVar6 = iVar12;
    }
    pFVar11 = (FRenderedTextureStats *)&pFVar11[7].TextureGroup.Data.ArrayNum;
    *piVar9 = iVar6;
    pFVar10 = local_res18.Value;
  } while( true );
}

// AddStreamingRenderAsset @ 148787f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderAssetStreamingManager::AddStreamingRenderAsset
          (FRenderAssetStreamingManager *this,UStreamableRenderAsset *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FWriteBuffer *pFVar8;
  byte bVar9;
  bool bVar10;
  undefined1 auStackY_c8 [32];
  UStreamableRenderAsset *local_78;
  FLLMScope local_6c;
  FLLMScope local_68;
  FLLMScope local_64;
  TObjectPtr<UStreamableRenderAsset> local_60;
  LARGE_INTEGER local_58;
  UStreamableRenderAsset *local_50;
  LARGE_INTEGER local_48;
  FMemScope local_40;
  TLogScope<0> local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  lpCriticalSection = &this->CriticalSection;
  local_78 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FLLMScope::FLLMScope(&local_64,StreamingManager,false,None,Default,true);
  FMemScope::FMemScope(&local_40,StreamingManager,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_68,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_6c,AssetClasses,Default);
  bVar10 = -1 < MetadataChannel->Enabled;
  if (bVar10) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_38);
    *(undefined8 *)(local_38._8_8_ + 0x28) = *(undefined8 *)(local_38._8_8_ + 0x20);
  }
  QueryPerformanceCounter(&local_58);
  (this->GatheredStats).CallbacksCycles = -local_58.s.LowPart;
  if (local_78->StreamingIndex != -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InAsset->StreamingIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                       ,0x3f2,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pTVar2 = &this->PendingStreamingRenderAssets;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_78) &&
     ((FScriptContainerElement *)&local_78 <
      pFVar3 + (longlong)(this->PendingStreamingRenderAssets).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->PendingStreamingRenderAssets).ArrayNum;
  piVar1 = &(this->PendingStreamingRenderAssets).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  (this->PendingStreamingRenderAssets).ArrayNum = iVar7 + 1;
  *(UStreamableRenderAsset **)(pFVar3 + (longlong)iVar7 * 8) = local_78;
  local_78->StreamingIndex = iVar7;
  bVar9 = 0;
  if (this->bPauseRenderAssetStreaming == false) {
    bVar9 = 4;
  }
  local_78->bHasStreamingUpdatePending = bVar9 >> 2;
  local_50 = local_78;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_78 != (UStreamableRenderAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_78);
  }
  TSet<TObjectPtr<UStreamableRenderAsset>,FRenderAssetStreamingManager::FPointerKeyFunc,FDefaultSetAllocator>
  ::Emplace<TObjectPtr<UStreamableRenderAsset>_>
            (&this->ReferencedRenderAssets,&local_60,(bool *)&local_50);
  QueryPerformanceCounter(&local_48);
  (this->GatheredStats).CallbacksCycles = (this->GatheredStats).CallbacksCycles + local_48.s.LowPart
  ;
  if (bVar10) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar8 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar8 - *(int *)&pFVar8->Cursor < 1) {
      pFVar8 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar8->Cursor = '\n';
    pFVar8->Cursor = pFVar8->Cursor + 1;
    pFVar8->Committed = pFVar8->Cursor;
  }
  FLLMScope::~FLLMScope(&local_6c);
  FLLMScope::~FLLMScope(&local_68);
  FMemScope::~FMemScope(&local_40);
  FLLMScope::~FLLMScope(&local_64);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// BlockTillAllRequestsFinished @ 148789cf0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FRenderAssetStreamingManager::BlockTillAllRequestsFinished
          (FRenderAssetStreamingManager *this,float param_1,bool param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FBaseGraphTask *pFVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  DWORD DVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:_virtual_int___cdecl_FRenderAssetStreamingManager::BlockTillAllRequestsFinished(float,bool)_::_2_::FStat_STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished>
  FVar14;
  FStreamableRenderResourceState FVar15;
  uint uVar16;
  FNameEntryId FVar17;
  FName FVar18;
  FStreamingRenderAsset *this_00;
  int iVar19;
  FStreamingRenderAsset *pFVar20;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res20 [2];
  FName local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  FName local_b8;
  FName local_b0;
  undefined1 local_a8 [8];
  FName local_a0;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if ((pFVar1 != (FBaseGraphTask *)0x0) &&
     (DVar11 = GetCurrentThreadId(), DVar11 != *(DWORD *)&pFVar1->field_0x48)) {
    FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished ==
        (FThreadSafeStaticStat<_public:_virtual_int___cdecl_FRenderAssetStreamingManager::BlockTillAllRequestsFinished(float,bool)_::_2_::FStat_STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished>
         )0x0) {
      pFVar13 = ::FName::FName(&local_b8,
                               "STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished,*pFVar13,
                 L"STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished","STATGROUP_Quick"
                 ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar14 = StatPtr_STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished;
  if (StatPtr_STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished ==
      (FThreadSafeStaticStat<_public:_virtual_int___cdecl_FRenderAssetStreamingManager::BlockTillAllRequestsFinished(float,bool)_::_2_::FStat_STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished>
       )0x0) {
    pFVar13 = ::FName::FName(&local_b0,
                             "STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished");
    FVar14 = (FThreadSafeStaticStat<_public:_virtual_int___cdecl_FRenderAssetStreamingManager::BlockTillAllRequestsFinished(float,bool)_::_2_::FStat_STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished,
                          *pFVar13,L"STAT_FRenderAssetStreamingManager_BlockTillAllRequestsFinished"
                          ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar4 = false;
  bVar6 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar17 = FVar18.ComparisonIndex.Value;
  uVar16 = FVar18.Number;
  if ((FVar17.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = FVar17.Value;
        local_d8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                   ,0x82f);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar17.Value;
      uStackX_c = uVar16;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar5 = true;
      goto LAB_148789ecb;
    }
  }
  bVar5 = false;
  FVar18 = local_a0;
LAB_148789ecb:
  QueryPerformanceCounter(&local_d0);
  fVar9 = __real_3f800000;
  fVar8 = __real_3c23d70a;
  dVar3 = (double)local_d0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  pTVar7 = CVarSyncStatesWhenBlocking.Ref;
  do {
    CVarSyncStatesWhenBlocking.Ref = pTVar7;
    if (0 < (int)GRenderAssetStreamingSuspension) {
      bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3236546578122541107>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                          ,0x833,"!IsAssetStreamingSuspended()");
      if (bVar10) {
        pcVar2 = (code *)swi(3);
        iVar12 = (*pcVar2)();
        return iVar12;
      }
      iVar19 = 0;
LAB_14878a118:
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar4) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar5) {
        FThreadStats::AddMessage(FVar18,CycleScopeEnd);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return iVar19;
    }
    bVar10 = IsInParallelGameThread();
    if (((!bVar10) && (bVar10 = IsInGameThread(), !bVar10)) &&
       (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar10)) {
      pcVar2 = (code *)swi(3);
      iVar12 = (*pcVar2)();
      return iVar12;
    }
    if (pTVar7->ShadowedValue[0] != 0) {
      iVar12 = this->ProcessingStage;
      while (iVar12 != 0) {
        UpdateResourceStreaming(this,0.0,false);
        iVar12 = this->ProcessingStage;
      }
      FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
      FAsyncTaskBase::EnsureCompletion
                ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
      CheckUserSettings(this);
      ProcessRemovedRenderAssets(this);
      ProcessAddedRenderAssets(this);
      FRenderAssetStreamingSettings::Update(&this->Settings);
      ConditionalUpdateStaticData(this);
      IncrementalUpdate(this,fVar9,false);
      if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
        ProcessLevelsToReferenceToStreamedTextures(this);
      }
    }
    iVar12 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
    iVar19 = 0;
    this_00 = (FStreamingRenderAsset *)
              (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
    pFVar20 = this_00 + iVar12;
    while( true ) {
      if ((this->AsyncUnsafeStreamingRenderAssets).ArrayNum != iVar12) {
        local_res8 = local_res8 & 0xffffff00;
        `TCheckedPointerIterator<FStreamingRenderAsset,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_res8);
      }
      if (this_00 == pFVar20) break;
      FVar15 = FStreamingRenderAsset::UpdateStreamingStatus
                         (this_00,SUB81(local_a8,0),
                          (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
      if ((*(longlong *)FVar15.field0_0x0 != 0) && (this_00->RequestedMips != this_00->ResidentMips)
         ) {
        iVar19 = iVar19 + 1;
      }
      this_00 = this_00 + 1;
    }
    if ((iVar19 == 0) ||
       ((param_1 != 0.0 &&
        (QueryPerformanceCounter(&local_c8),
        param_1 <=
        (float)((double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3))))) {
      if ((param_2) &&
         ((QueryPerformanceCounter(&local_c0),
          __real_3dcccccd <
          (float)((double)local_c0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar3) *
          __real_447a0000 && (4 < (byte)LogContentStreaming._0_1_)))) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      }
      goto LAB_14878a118;
    }
    FlushRenderingCommands();
    FWindowsPlatformProcess::Sleep(fVar8);
    pTVar7 = CVarSyncStatesWhenBlocking.Ref;
  } while( true );
}

// BoostTextures @ 14878a2d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::BoostTextures
          (FRenderAssetStreamingManager *this,AActor *param_1,float param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar11;
  UClass *pUVar12;
  FStreamingRenderAsset *pFVar13;
  ulonglong uVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar15;
  int iVar16;
  ForAnyElementType FVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  float fVar22;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_90;
  LPCRITICAL_SECTION local_88;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_88 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (param_1 != (AActor *)0x0) {
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    iVar18 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x20,&local_d8,0,(int *)((longlong)&local_d0 + 4));
    pTVar11 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                        (&param_1->OwnedComponents);
    iVar3 = *(int *)&(pTVar11->Elements).field_0x28;
    uStack_bc = 1;
    local_a8 = 0;
    puVar1 = &(pTVar11->Elements).field_0x10;
    iStack_ac = local_a8;
    if (iVar3 != 0) {
      puVar20 = *(uint **)&(pTVar11->Elements).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar15 = *puVar20;
      iVar18 = 0;
      local_a8 = 0;
      while (uVar15 == 0) {
        iVar18 = iVar18 + 1;
        local_a8 = local_a8 + 0x20;
        iStack_ac = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14878a3fe;
        uVar15 = puVar20[iVar18];
      }
      uStack_bc = ~(uVar15 - 1) & uVar15;
      uVar14 = (ulonglong)uStack_bc * 2 + 1;
      lVar7 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_98 = (int)lVar7;
      iStack_ac = local_98 + -1 + local_a8;
      if (iVar3 < iStack_ac) {
        iStack_ac = iVar3;
      }
    }
LAB_14878a3fe:
    uVar15 = *(uint *)&(pTVar11->Elements).field_0x28;
    iStack_a0 = *(int *)&(pTVar11->Elements).field_0x8 - *(int *)&(pTVar11->Elements).field_0x34;
    uVar21 = uVar15 & 0xffffffe0;
    TStack_78._padding_ = CONCAT44(uStack_bc,iVar18);
    uStack_b0 = 0xffffffff;
    TStack_78.CurrentBitIndex = iStack_ac;
    TStack_78.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar15 >> 5;
    TStack_78._28_4_ = iStack_ac;
    TStack_78.BaseBitIndex = local_a8;
    uStack_58 = CONCAT44(uStack_9c,iStack_a0);
    local_c8 = pTVar11;
    iStack_c0 = iVar18;
    local_b8 = puVar1;
    iStack_a4 = iStack_ac;
    local_90 = pTVar11;
    local_80 = pTVar11;
    TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar9 = local_90;
    uVar4 = *(uint *)&(pTVar11->Elements).field_0x28;
    if (uVar15 != uVar4) {
      puVar5 = *(undefined1 **)&(pTVar11->Elements).field_0x20;
      puVar19 = puVar1;
      if (puVar5 != (undefined1 *)0x0) {
        puVar19 = puVar5;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar16 * 4);
      while (uVar15 == 0) {
        iVar16 = iVar16 + 1;
        uVar21 = uVar21 + 0x20;
        uVar15 = uVar4;
        if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar16)
        goto LAB_14878a500;
        uVar15 = *(uint *)(puVar19 + (longlong)iVar16 * 4);
      }
      uVar14 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar15 = (int)lVar7 + -1 + uVar21;
      if ((int)uVar4 < (int)uVar15) {
        uVar15 = uVar4;
      }
    }
LAB_14878a500:
    while( true ) {
      pTVar11 = local_80;
      if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
          (int)uStack_58) {
        `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      lpCriticalSection = local_88;
      if (((TStack_78.CurrentBitIndex == uVar15) &&
          (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar11 == pTVar9)) break;
      plVar6 = *(longlong **)
                (*(longlong *)&pTVar11->Elements + (longlong)TStack_78.CurrentBitIndex * 0x10);
      if (plVar6 != (longlong *)0x0) {
        pUVar12 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
        iVar3 = (int)pUVar12->_padding_;
        if (((iVar3 <= *(int *)(plVar6[2] + 0x38)) &&
            ((longlong *)*(undefined1 **)(*(longlong *)(plVar6[2] + 0x30) + (longlong)iVar3 * 8) ==
             &pUVar12->_padding_)) && ((*(byte *)(plVar6 + 0x13) & 1) != 0)) {
          uVar21 = local_d0._4_4_;
          if ((longlong)local_d0 < 0) {
            local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
            if (uVar21 != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
            }
          }
          else {
            local_d0 = (ulonglong)local_d0._4_4_ << 0x20;
          }
          (**(code **)(*plVar6 + 0x7f8))(plVar6,&local_d8,4);
          iVar3 = (int)local_d0;
          uVar14 = (ulonglong)(int)local_d0;
          pFVar2 = local_d8.Data + uVar14 * 8;
          FVar17.Data = local_d8.Data;
          while( true ) {
            if ((int)uVar14 != iVar3) {
              `TCheckedPointerIterator<UTexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res20);
            }
            if (FVar17.Data == pFVar2) break;
            pFVar13 = GetStreamingRenderAsset(this,*(UStreamableRenderAsset **)FVar17.Data);
            if (pFVar13 != (FStreamingRenderAsset *)0x0) {
              fVar22 = pFVar13->DynamicBoostFactor;
              if (pFVar13->DynamicBoostFactor <= param_2) {
                fVar22 = param_2;
              }
              pFVar13->DynamicBoostFactor = fVar22;
            }
            uVar14 = local_d0 & 0xffffffff;
            FVar17.Data = FVar17.Data + 8;
          }
        }
      }
      TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
    }
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014878a678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// CancelForcedResources @ 14878b700

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::CancelForcedResources(FRenderAssetStreamingManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FBaseGraphTask *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  DWORD DVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar1 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if ((pFVar1 != (FBaseGraphTask *)0x0) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != *(DWORD *)&pFVar1->field_0x48)) {
    FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
  }
  dVar5 = __real_3ff0000000000000;
  iVar9 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  uVar11 = 0;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar11 < iVar9) {
        uVar8 = ~uVar11 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar2 + lVar10) != 0) &&
         (plVar3 = *(longlong **)(pFVar2 + lVar10),
         0.0 <= (float)((double)plVar3[8] - (double)FApp::CurrentTime))) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3);
        *(byte *)(plVar3 + 0x1a) = *(byte *)(plVar3 + 0x1a) & 0xbf;
        plVar3[8] = (longlong)((double)FApp::CurrentTime - dVar5);
        *(undefined8 *)(pFVar2 + lVar10 + 0x68) = 0xc7efffffe0000000;
        (**(code **)(**(longlong **)(pFVar2 + lVar10) + 0x2e0))();
      }
      iVar9 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0xb8;
    } while ((int)uVar11 < iVar9);
  }
  this->ProcessingStage = 0;
                    /* WARNING: Could not recover jumptable at 0x00014878b8a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// CheckUserSettings @ 14878cf70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRenderAssetStreamingManager::CheckUserSettings(FRenderAssetStreamingManager *this)

{
  longlong lVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  long64 lVar6;
  undefined1 auStackY_e8 [32];
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  TStringBuilderBase<wchar_t> local_78;
  wchar_t local_58 [32];
  ulonglong local_18 [2];
  
  pTVar3 = CVarStreamingUseFixedPoolSize.Ref;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    if (!bVar5) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pTVar4 = CVarStreamingPoolSize.Ref;
  if (pTVar3->ShadowedValue[0] == 0) {
    bVar5 = IsInParallelGameThread();
    if (!bVar5) {
      bVar5 = IsInGameThread();
      if (!bVar5) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    lVar6 = GRHIGlobals.TexturePoolSize;
    if (pTVar4->ShadowedValue[0] == -1) {
      local_b8 = ___xmm_ffffffffffffffffffffffffffffffff;
      lStack_b0 = _UNK_15060db28;
      local_a8 = ___xmm_ffffffffffffffffffffffffffffffff;
      lStack_a0 = _UNK_15060db28;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      local_90 = 0;
      (**(code **)(GDynamicRHI->_padding_ + 0x188))(GDynamicRHI,&local_b8);
      if ((0 < GRHIGlobals.PoolSizeVRAMPercentage) && (0 < lStack_a0)) {
        lVar1 = GRHIGlobals.PoolSizeVRAMPercentage * lStack_a0 +
                SUB168(SEXT816(-0x5c28f5c28f5c28f5) *
                       SEXT816(GRHIGlobals.PoolSizeVRAMPercentage * lStack_a0),8);
        lVar6 = (lVar1 >> 6) - (lVar1 >> 0x3f);
      }
    }
    else {
      lVar6 = (longlong)pTVar4->ShadowedValue[0] << 0x14;
    }
    if (lVar6 != GRHIGlobals.TexturePoolSize) {
      if (4 < (byte)LogContentStreaming._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
      }
      local_78.Base = local_58;
      local_78.bIsDynamic = false;
      local_78.bIsExternal = false;
      local_78.CurPos = local_58;
      local_78.End = (wchar_t *)local_18;
      TStringBuilderBase<wchar_t>::AppendfImpl(&local_78,L"%d");
      if (local_78.End < local_78.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_78,1);
      }
      *local_78.CurPos = L'\0';
      FCsvProfiler::SetMetadata(L"StreamingPoolSizeMB",local_78.Base);
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_78);
      GRHIGlobals.TexturePoolSize = lVar6;
    }
  }
  return;
}

// ConditionalUpdateStaticData @ 14878dd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::ConditionalUpdateStaticData(FRenderAssetStreamingManager *this)

{
  longlong *plVar1;
  int *piVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar3;
  FLevelRenderAssetManager *this_00;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  FRenderAssetInstanceView *pFVar6;
  UPrimitiveComponent *pUVar7;
  code *pcVar8;
  FRenderAssetStreamingManager *this_01;
  undefined4 uVar9;
  bool bVar10;
  Type TVar11;
  EAddComponentResult EVar12;
  int iVar13;
  longlong lVar14;
  FStreamingRenderAsset *this_02;
  ForElementType<ULevel_*> FVar15;
  ForAnyElementType FVar16;
  FStreamingRenderAsset *pFVar17;
  ForElementType<ULevel_*> FVar18;
  FScriptContainerElement *pFVar19;
  FRenderAssetStreamingSettings *pFVar20;
  undefined1 auStackY_248 [32];
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6;
  undefined1 local_1f5 [5];
  ULevel *local_1f0;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> local_1e8;
  FRenderAssetStreamingSettings *local_1d8;
  LARGE_INTEGER local_1c8;
  LARGE_INTEGER local_1c0;
  FRenderAssetStreamingManager *local_1b8;
  LARGE_INTEGER local_1b0;
  LARGE_INTEGER local_1a8 [2];
  FStreamingTextureLevelContext local_198;
  undefined1 local_148 [256];
  ForElementType<ULevel_*> local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_1b8 = this;
  if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    PreviousLightmapStreamingFactor = GLightmapStreamingFactor;
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    PreviousShadowmapStreamingFactor = GShadowmapStreamingFactor;
    _Init_thread_footer(&::_TSS1);
  }
  if ((*(int *)(lVar14 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    PreviousSettings.MaxEffectiveScreenSize = (this->Settings).MaxEffectiveScreenSize;
    PreviousSettings.MaxTempMemoryAllowed = (this->Settings).MaxTempMemoryAllowed;
    PreviousSettings.DropMips = (this->Settings).DropMips;
    PreviousSettings.HLODStrategy = (this->Settings).HLODStrategy;
    PreviousSettings.HiddenPrimitiveScale = (this->Settings).HiddenPrimitiveScale;
    PreviousSettings.PerTextureBiasViewBoostThreshold =
         (this->Settings).PerTextureBiasViewBoostThreshold;
    PreviousSettings.MaxHiddenPrimitiveViewBoost = (this->Settings).MaxHiddenPrimitiveViewBoost;
    PreviousSettings.GlobalMipBias = (this->Settings).GlobalMipBias;
    PreviousSettings.PoolSize = (this->Settings).PoolSize;
    PreviousSettings.MeshPoolSize = (this->Settings).MeshPoolSize;
    PreviousSettings.VirtualTexturePoolSize = (this->Settings).VirtualTexturePoolSize;
    PreviousSettings.bLimitPoolSizeToVRAM = (this->Settings).bLimitPoolSizeToVRAM;
    PreviousSettings.bUseNewMetrics = (this->Settings).bUseNewMetrics;
    PreviousSettings.bFullyLoadUsedTextures = (this->Settings).bFullyLoadUsedTextures;
    PreviousSettings.bFullyLoadMeshes = (this->Settings).bFullyLoadMeshes;
    PreviousSettings.bUseAllMips = (this->Settings).bUseAllMips;
    PreviousSettings.bUsePerTextureBias = (this->Settings).bUsePerTextureBias;
    PreviousSettings.bUseMaterialData = (this->Settings).bUseMaterialData;
    PreviousSettings._51_1_ = (this->Settings).field_0x33;
    PreviousSettings.MinMipForSplitRequest = (this->Settings).MinMipForSplitRequest;
    PreviousSettings.MinLevelRenderAssetScreenSize = (this->Settings).MinLevelRenderAssetScreenSize;
    PreviousSettings.MaxTextureUVDensity = (this->Settings).MaxTextureUVDensity;
    PreviousSettings.MaterialQualityLevel = (this->Settings).MaterialQualityLevel;
    PreviousSettings.FramesForFullUpdate = (this->Settings).FramesForFullUpdate;
    PreviousSettings.LowResHandlingMode = (this->Settings).LowResHandlingMode;
    PreviousSettings.bMipCalculationEnablePerLevelList =
         (this->Settings).bMipCalculationEnablePerLevelList;
    PreviousSettings.bPrioritizeMeshLODRetention = (this->Settings).bPrioritizeMeshLODRetention;
    PreviousSettings._78_2_ = *(undefined2 *)&(this->Settings).field_0x4e;
    PreviousSettings.VRAMPercentageClamp = (this->Settings).VRAMPercentageClamp;
    PreviousSettings.bStressTest = (this->Settings).bStressTest;
    PreviousSettings.HighPriorityLoad_Texture[0] = (this->Settings).HighPriorityLoad_Texture[0];
    PreviousSettings.HighPriorityLoad_Texture[1] = (this->Settings).HighPriorityLoad_Texture[1];
    PreviousSettings.HighPriorityLoad_Texture[2] = (this->Settings).HighPriorityLoad_Texture[2];
    PreviousSettings.HighPriorityLoad_Texture._3_8_ =
         *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 3);
    PreviousSettings.HighPriorityLoad_Texture._11_8_ =
         *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 0xb);
    PreviousSettings.HighPriorityLoad_Texture._19_8_ =
         *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 0x13);
    PreviousSettings.HighPriorityLoad_Texture._27_8_ =
         *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 0x1b);
    PreviousSettings.HighPriorityLoad_Texture._35_8_ =
         *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 0x23);
    PreviousSettings.HighPriorityLoad_Texture._43_8_ =
         *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 0x2b);
    PreviousSettings.HighPriorityLoad_Texture._51_8_ =
         *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 0x33);
    PreviousSettings.HighPriorityLoad_Texture._59_8_ =
         *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 0x3b);
    PreviousSettings.HighPriorityLoad_Texture._67_8_ =
         *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 0x43);
    PreviousSettings._160_8_ = *(undefined8 *)((this->Settings).HighPriorityLoad_Texture + 0x4b);
    _Init_thread_footer(&::_TSS2);
  }
  if (((PreviousLightmapStreamingFactor != GLightmapStreamingFactor) ||
      (PreviousShadowmapStreamingFactor != GShadowmapStreamingFactor)) ||
     (iVar13 = memcmp(&PreviousSettings,&this->Settings,0xa8), iVar13 != 0)) {
    QueryPerformanceCounter(&local_1c8);
    pFVar20 = &this->Settings;
    piVar2 = &(this->GatheredStats).SetupAsyncTaskCycles;
    *piVar2 = *piVar2 + local_1c8.s.LowPart;
    iVar13 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
    this_02 = (FStreamingRenderAsset *)
              (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
    pFVar17 = this_02 + iVar13;
    local_1d8 = pFVar20;
    while( true ) {
      if ((this->AsyncUnsafeStreamingRenderAssets).ArrayNum != iVar13) {
        local_1f8 = 0;
        `TCheckedPointerIterator<FStreamingRenderAsset,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1f8);
      }
      if (this_02 == pFVar17) break;
      FStreamingRenderAsset::UpdateStaticData(this_02,pFVar20);
      if (PreviousSettings.MaterialQualityLevel != (this->Settings).MaterialQualityLevel) {
        this_02->InstanceRemovedTimestamp = (double)FApp::CurrentTime;
      }
      this_02 = this_02 + 1;
    }
    QueryPerformanceCounter(&local_1c0);
    piVar2 = &(this->GatheredStats).SetupAsyncTaskCycles;
    *piVar2 = *piVar2 - local_1c0._0_4_;
    if (((PreviousSettings.bUseMaterialData == (this->Settings).bUseMaterialData) &&
        (PreviousSettings.bUseNewMetrics == (this->Settings).bUseNewMetrics)) &&
       ((PreviousSettings.bUsePerTextureBias == (this->Settings).bUsePerTextureBias &&
        (PreviousSettings.MaxTextureUVDensity == (this->Settings).MaxTextureUVDensity)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) &&
       ((bVar10 || (PreviousSettings.MaterialQualityLevel != (this->Settings).MaterialQualityLevel))
       )) {
      local_3c = 0x20;
      local_48 = (ForElementType<ULevel_*>)0x0;
      local_40 = 0;
      if ((this->LevelRenderAssetManagersLock != (FScopedLevelRenderAssetManagersLock *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!LevelRenderAssetManagersLock",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                              ,0x296,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar19 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
      iVar13 = (this->LevelRenderAssetManagers).ArrayNum;
      pFVar3 = pFVar19 + (longlong)iVar13 * 8;
      FVar18 = local_48;
      while( true ) {
        if ((this->LevelRenderAssetManagers).ArrayNum != iVar13) {
          local_1f7 = 0;
          `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_1f7);
          FVar18 = local_48;
        }
        this_01 = local_1b8;
        if (pFVar19 == pFVar3) break;
        this_00 = *(FLevelRenderAssetManager **)pFVar19;
        if (this_00 != (FLevelRenderAssetManager *)0x0) {
          local_1f0 = this_00->Level;
          FVar15 = (ForElementType<ULevel_*>)local_148;
          if (FVar18 != (ForElementType<ULevel_*>)0x0) {
            FVar15 = FVar18;
          }
          if ((ulonglong)FVar15 <= &local_1f0) {
            FVar15 = (ForElementType<ULevel_*>)local_148;
            if (FVar18 != (ForElementType<ULevel_*>)0x0) {
              FVar15 = FVar18;
            }
            if ((&local_1f0 < (ULevel **)((longlong)FVar15 + (longlong)local_3c * 8)) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), FVar18 = local_48, bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          if (local_40 == local_3c) {
            local_40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<ULevel_*>_>
                                 (0x808,(ForElementType<ULevel_*> *)local_148,&local_3c);
            FVar18 = local_48;
          }
          lVar14 = (longlong)local_40;
          FVar15 = (ForElementType<ULevel_*>)local_148;
          if (FVar18 != (ForElementType<ULevel_*>)0x0) {
            FVar15 = FVar18;
          }
          local_40 = local_40 + 1;
          *(ULevel **)((longlong)FVar15 + lVar14 * 8) = local_1f0;
          FLevelRenderAssetManager::Remove
                    (this_00,(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                              *)0x0);
          *(undefined4 *)&(this_00->TextureGuidToLevelIndex).field_0x48 = 0;
          pvVar4 = *(void **)&(this_00->TextureGuidToLevelIndex).field_0x40;
          if (pvVar4 != (void *)0x0) {
            FMemory::Free(pvVar4);
          }
          TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ((TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      *)&this_00->TextureGuidToLevelIndex);
          pFVar5 = (this_00->PendingComponents).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          pFVar5 = (this_00->UnprocessedComponents).AllocatorInstance.Data;
          if (pFVar5 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar5);
          }
          (this_00->StaticInstances)._padding_ =
               (longlong)&___7FStaticRenderAssetInstanceManager__6B_;
          FStaticRenderAssetInstanceManager::FTasks::SyncResults
                    (&(this_00->StaticInstances).StateSync.Tasks);
          pFVar6 = (this_00->StaticInstances).AsyncView.Reference;
          if (pFVar6 != (FRenderAssetInstanceView *)0x0) {
            plVar1 = &pFVar6->_padding_;
            *(int *)plVar1 = (int)*plVar1 + -1;
            if ((int)*plVar1 == 0) {
              (**(code **)pFVar6->_padding_)(pFVar6,1);
            }
          }
          FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>::
          ~FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>
                    (&(this_00->StaticInstances).StateSync);
          (this_00->StaticInstances)._padding_ = (longlong)&___7IRenderAssetInstanceManager__6B_;
          ::operator_delete(this_00,0xc0);
          FVar18 = local_48;
        }
        pFVar19 = pFVar19 + 8;
      }
      piVar2 = &(this->LevelRenderAssetManagers).ArrayMax;
      (this->LevelRenderAssetManagers).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->LevelRenderAssetManagers).AllocatorInstance,0,piVar2);
        FVar18 = local_48;
      }
      iVar13 = local_40;
      FVar15 = (ForElementType<ULevel_*>)local_148;
      if (FVar18 != (ForElementType<ULevel_*>)0x0) {
        FVar15 = FVar18;
      }
      FVar18 = (ForElementType<ULevel_*>)((longlong)FVar15 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar13) {
          `TCheckedPointerIterator<ULevel_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_1f6);
        }
        if (FVar15 == FVar18) break;
        AddLevel(this_01,*(ULevel **)FVar15);
        FVar15 = (ForElementType<ULevel_*>)((longlong)FVar15 + 8);
      }
      local_1e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e8.ArrayNum = 0;
      local_1e8.ArrayMax = 0;
      FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
                (&(this_01->DynamicComponentManager).StateSync);
      FRenderAssetInstanceState::GetReferencedComponents
                ((FRenderAssetInstanceState *)(this_01->DynamicComponentManager).StateSync._padding_
                 ,&local_1e8);
      iVar13 = local_1e8.ArrayNum;
      pFVar3 = local_1e8.AllocatorInstance.Data + (longlong)local_1e8.ArrayNum * 8;
      FVar16.Data = local_1e8.AllocatorInstance.Data;
      while( true ) {
        if (local_1e8.ArrayNum != iVar13) {
          `TCheckedPointerIterator<UPrimitiveComponent_const_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_1f5);
        }
        if (FVar16.Data == pFVar3) break;
        pUVar7 = *(UPrimitiveComponent **)FVar16.Data;
        if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
          QueryPerformanceCounter(&local_1b0);
          uVar9 = local_1b0.s.LowPart;
          if ((this_01->bUseDynamicStreaming != false) && (pUVar7 != (UPrimitiveComponent *)0x0)) {
            lpCriticalSection = &this_01->CriticalSection;
            if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::ReportNotNullPtr();
            }
            EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
            TVar11 = GetCurrentMaterialQualityLevelChecked();
            FStreamingTextureLevelContext::FStreamingTextureLevelContext
                      (&local_198,TVar11,(ULevel *)0x0,
                       (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_>
                        *)0x0);
            EVar12 = FDynamicRenderAssetInstanceManager::Add
                               (&this_01->DynamicComponentManager,pUVar7,&local_198,0.0);
            if ((EVar12 == Success) &&
               (0 < GRenderAssetStreamingEnableStrippingDuplicatePrimitiveComponent)) {
              RemoveStaticReferences(this_01,pUVar7);
            }
            FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_198);
            LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          }
          QueryPerformanceCounter(local_1a8);
          LOCK();
          piVar2 = &(this_01->GatheredStats).CallbacksCycles;
          *piVar2 = *piVar2 + (local_1a8[0].s.LowPart - uVar9);
          UNLOCK();
        }
        FVar16.Data = FVar16.Data + 8;
      }
      if (local_1e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.AllocatorInstance.Data);
      }
      pFVar20 = local_1d8;
      if (local_48 != (ForElementType<ULevel_*>)0x0) {
        FMemory::Free((void *)local_48);
        pFVar20 = local_1d8;
      }
    }
    PreviousLightmapStreamingFactor = GLightmapStreamingFactor;
    PreviousSettings.MaxEffectiveScreenSize = pFVar20->MaxEffectiveScreenSize;
    PreviousSettings.MaxTempMemoryAllowed = pFVar20->MaxTempMemoryAllowed;
    PreviousSettings.DropMips = pFVar20->DropMips;
    PreviousSettings.HLODStrategy = pFVar20->HLODStrategy;
    PreviousShadowmapStreamingFactor = GShadowmapStreamingFactor;
    PreviousSettings.HiddenPrimitiveScale = pFVar20->HiddenPrimitiveScale;
    PreviousSettings.PerTextureBiasViewBoostThreshold = pFVar20->PerTextureBiasViewBoostThreshold;
    PreviousSettings.MaxHiddenPrimitiveViewBoost = pFVar20->MaxHiddenPrimitiveViewBoost;
    PreviousSettings.GlobalMipBias = pFVar20->GlobalMipBias;
    PreviousSettings.PoolSize = pFVar20->PoolSize;
    PreviousSettings.MeshPoolSize = pFVar20->MeshPoolSize;
    PreviousSettings.VirtualTexturePoolSize = pFVar20->VirtualTexturePoolSize;
    PreviousSettings.bLimitPoolSizeToVRAM = pFVar20->bLimitPoolSizeToVRAM;
    PreviousSettings.bUseNewMetrics = pFVar20->bUseNewMetrics;
    PreviousSettings.bFullyLoadUsedTextures = pFVar20->bFullyLoadUsedTextures;
    PreviousSettings.bFullyLoadMeshes = pFVar20->bFullyLoadMeshes;
    PreviousSettings.bUseAllMips = pFVar20->bUseAllMips;
    PreviousSettings.bUsePerTextureBias = pFVar20->bUsePerTextureBias;
    PreviousSettings.bUseMaterialData = pFVar20->bUseMaterialData;
    PreviousSettings._51_1_ = pFVar20->field_0x33;
    PreviousSettings.MinMipForSplitRequest = pFVar20->MinMipForSplitRequest;
    PreviousSettings.MinLevelRenderAssetScreenSize = pFVar20->MinLevelRenderAssetScreenSize;
    PreviousSettings.MaxTextureUVDensity = pFVar20->MaxTextureUVDensity;
    PreviousSettings.MaterialQualityLevel = pFVar20->MaterialQualityLevel;
    PreviousSettings.FramesForFullUpdate = pFVar20->FramesForFullUpdate;
    PreviousSettings.LowResHandlingMode = pFVar20->LowResHandlingMode;
    PreviousSettings.bMipCalculationEnablePerLevelList = pFVar20->bMipCalculationEnablePerLevelList;
    PreviousSettings.bPrioritizeMeshLODRetention = pFVar20->bPrioritizeMeshLODRetention;
    PreviousSettings._78_2_ = *(undefined2 *)&pFVar20->field_0x4e;
    PreviousSettings.VRAMPercentageClamp = pFVar20->VRAMPercentageClamp;
    PreviousSettings.bStressTest = pFVar20->bStressTest;
    PreviousSettings.HighPriorityLoad_Texture[0] = pFVar20->HighPriorityLoad_Texture[0];
    PreviousSettings.HighPriorityLoad_Texture[1] = pFVar20->HighPriorityLoad_Texture[1];
    PreviousSettings.HighPriorityLoad_Texture[2] = pFVar20->HighPriorityLoad_Texture[2];
    PreviousSettings.HighPriorityLoad_Texture._3_8_ =
         *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 3);
    PreviousSettings.HighPriorityLoad_Texture._11_8_ =
         *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 0xb);
    PreviousSettings.HighPriorityLoad_Texture._19_8_ =
         *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 0x13);
    PreviousSettings.HighPriorityLoad_Texture._27_8_ =
         *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 0x1b);
    PreviousSettings.HighPriorityLoad_Texture._35_8_ =
         *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 0x23);
    PreviousSettings.HighPriorityLoad_Texture._43_8_ =
         *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 0x2b);
    PreviousSettings.HighPriorityLoad_Texture._51_8_ =
         *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 0x33);
    PreviousSettings.HighPriorityLoad_Texture._59_8_ =
         *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 0x3b);
    PreviousSettings.HighPriorityLoad_Texture._67_8_ =
         *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 0x43);
    PreviousSettings._160_8_ = *(undefined8 *)(pFVar20->HighPriorityLoad_Texture + 0x4b);
  }
  return;
}

// Exec @ 148796a20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
FRenderAssetStreamingManager::Exec
          (FRenderAssetStreamingManager *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  UMaterialInterface *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  UPackage *pUVar9;
  longlong lVar10;
  ForAnyElementType FVar11;
  FWindowsRecursiveMutex *pFVar12;
  double dVar13;
  float fVar14;
  wchar_t *local_res18 [2];
  TObjectIterator<UMaterialInterface> local_138;
  FString local_120;
  FString local_110;
  wchar_t *local_100;
  wchar_t *local_f8;
  wchar_t *local_f0;
  wchar_t *local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FString local_90 [6];
  
  local_res18[0] = param_2;
  bVar2 = FParse::Command(local_res18,L"DumpTextureStreamingStats",true);
  if ((bVar2) || (bVar2 = FParse::Command(local_res18,L"DumpRenderAssetStreamingStats",true), bVar2)
     ) {
    pFVar12 = &this->CriticalSection;
    if (pFVar12 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar12);
      FOutputDevice::Log(param_3,L"--------------------------------------------------------");
      FOutputDevice::Log(param_3,L"Texture Streaming Stats:");
      FOutputDevice::LogfImpl(param_3,L"Total Pool Size (aka RenderAssetPool) = %.2f MB");
      FOutputDevice::LogfImpl(param_3,L"Non-Streaming Mips = %.2f MB");
      FOutputDevice::LogfImpl(param_3,L"Remaining Streaming Pool Size = %.2f MB");
      FOutputDevice::LogfImpl(param_3,L"Streaming Assets, Current/Pool = %.2f / %.2f MB (%d%%)");
      FOutputDevice::LogfImpl(param_3,L"Streaming Assets, Target/Pool =  %.2f / %.2f MB (%d%%)");
      FOutputDevice::Log(param_3,L"--------------------------------------------------------");
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar12);
      return true;
    }
LAB_14879764e:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  bVar2 = FParse::Command(local_res18,L"ListStreamingTextures",true);
  if ((bVar2) || (bVar2 = FParse::Command(local_res18,L"ListStreamingRenderAssets",true), bVar2)) {
    bVar2 = HandleListStreamingRenderAssetsCommand(this,local_res18[0],param_3);
    return bVar2;
  }
  bVar2 = FParse::Command(local_res18,L"ResetMaxEverRequiredTextures",true);
  if ((bVar2) ||
     (bVar2 = FParse::Command(local_res18,L"ResetMaxEverRequiredRenderAssetMemory",true), bVar2)) {
    pFVar12 = &this->CriticalSection;
    if (pFVar12 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar12);
      FOutputDevice::LogfImpl(param_3,L"OldMax: %u MaxEverRequired Reset.");
      this->MaxEverRequired = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar12);
      return true;
    }
    goto LAB_14879764e;
  }
  bVar2 = FParse::Command(local_res18,L"LightmapStreamingFactor",true);
  if (bVar2) {
    local_100 = local_res18[0];
    if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    FParse::Token(&local_d0,&local_100,false);
    iVar4 = local_d0.Data.ArrayNum + -1;
    if (local_d0.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    fVar14 = GLightmapStreamingFactor;
    if (0 < iVar4) {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_d0.Data.ArrayNum != 0) {
        FVar11.Data = local_d0.Data.AllocatorInstance.Data;
      }
      dVar13 = _wtof((wchar_t *)FVar11.Data);
      fVar14 = (float)dVar13;
    }
    if (0.0 <= fVar14) {
      GLightmapStreamingFactor = fVar14;
    }
    FOutputDevice::LogfImpl
              (param_3,
               L"Lightmap streaming factor: %.3f (lower values makes streaming more aggressive).");
    goto LAB_148796bc0;
  }
  bVar2 = FParse::Command(local_res18,L"CancelTextureStreaming",true);
  if ((bVar2) || (bVar2 = FParse::Command(local_res18,L"CancelRenderAssetStreaming",true), bVar2)) {
    pFVar12 = &this->CriticalSection;
    if (pFVar12 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar12);
      UTexture::CancelPendingTextureStreaming();
      UStaticMesh::CancelAllPendingStreamingActions();
      USkeletalMesh::CancelAllPendingStreamingActions();
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar12);
      return true;
    }
    goto LAB_14879764e;
  }
  bVar2 = FParse::Command(local_res18,L"ShadowmapStreamingFactor",true);
  if (bVar2) {
    local_f8 = local_res18[0];
    if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    FParse::Token(&local_c0,&local_f8,false);
    iVar4 = local_c0.Data.ArrayNum + -1;
    if (local_c0.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    fVar14 = GShadowmapStreamingFactor;
    if (0 < iVar4) {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_c0.Data.ArrayNum != 0) {
        FVar11.Data = local_c0.Data.AllocatorInstance.Data;
      }
      dVar13 = _wtof((wchar_t *)FVar11.Data);
      fVar14 = (float)dVar13;
    }
    if (0.0 <= fVar14) {
      GShadowmapStreamingFactor = fVar14;
    }
    FOutputDevice::LogfImpl
              (param_3,
               L"Shadowmap streaming factor: %.3f (lower values makes streaming more aggressive).");
    local_d0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
LAB_148796bc0:
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    return true;
  }
  bVar2 = FParse::Command(local_res18,L"NumStreamedMips",true);
  if (bVar2) {
    bVar2 = HandleNumStreamedMipsCommand(this,local_res18[0],param_3);
    return bVar2;
  }
  bVar2 = FParse::Command(local_res18,L"TrackTexture",true);
  if ((bVar2) || (bVar2 = FParse::Command(local_res18,L"TrackRenderAsset",true), bVar2)) {
    local_d8 = local_res18[0];
    if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    FParse::Token(&local_110,&local_d8,false);
    bVar2 = TrackRenderAsset(&local_110);
    local_d0.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
    if (bVar2) {
      FOutputDevice::LogfImpl(param_3,L"Textures or meshes containing \"%s\" are now tracked.");
      local_d0.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
    }
    goto LAB_148796bc0;
  }
  bVar2 = FParse::Command(local_res18,L"ListTrackedTextures",true);
  if ((bVar2) || (bVar2 = FParse::Command(local_res18,L"ListTrackedRenderAssets",true), bVar2)) {
    local_e0 = local_res18[0];
    if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    FParse::Token(local_90,&local_e0,false);
    iVar4 = local_90[0].Data.ArrayNum + -1;
    if (local_90[0].Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if (iVar4 < 1) {
      ListTrackedRenderAssets(param_3,-1);
      local_d0.Data.AllocatorInstance.Data = local_90[0].Data.AllocatorInstance.Data;
    }
    else {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_90[0].Data.ArrayNum != 0) {
        FVar11.Data = local_90[0].Data.AllocatorInstance.Data;
      }
      iVar4 = _wtoi((wchar_t *)FVar11.Data);
      ListTrackedRenderAssets(param_3,iVar4);
      local_d0.Data.AllocatorInstance.Data = local_90[0].Data.AllocatorInstance.Data;
    }
    goto LAB_148796bc0;
  }
  bVar2 = FParse::Command(local_res18,L"DebugTrackedTextures",true);
  if ((bVar2) || (bVar2 = FParse::Command(local_res18,L"DebugTrackedRenderAssets",true), bVar2)) {
    pFVar12 = &this->CriticalSection;
    if (pFVar12 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar12);
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar12);
      return true;
    }
    goto LAB_14879764e;
  }
  bVar2 = FParse::Command(local_res18,L"UntrackTexture",true);
  if ((bVar2) || (bVar2 = FParse::Command(local_res18,L"UntrackRenderAsset",true), bVar2)) {
    local_e8 = local_res18[0];
    if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
    FParse::Token(&local_120,&local_e8,false);
    bVar2 = UntrackRenderAsset(&local_120);
    local_d0.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
    if (bVar2) {
      FOutputDevice::LogfImpl
                (param_3,L"Textures or meshes containing \"%s\" are no longer tracked.");
      local_d0.Data.AllocatorInstance.Data = local_120.Data.AllocatorInstance.Data;
    }
    goto LAB_148796bc0;
  }
  bVar2 = FParse::Command(local_res18,L"StreamOut",true);
  if (!bVar2) {
    bVar2 = FParse::Command(local_res18,L"PauseTextureStreaming",true);
    if ((!bVar2) && (bVar2 = FParse::Command(local_res18,L"PauseRenderAssetStreaming",true), !bVar2)
       ) {
      bVar2 = FParse::Command(local_res18,L"StreamingManagerMemory",true);
      if (bVar2) {
        bVar2 = HandleStreamingManagerMemoryCommand(this,local_res18[0],param_3,param_1);
        return bVar2;
      }
      bVar2 = FParse::Command(local_res18,L"TextureGroups",true);
      if ((!bVar2) && (bVar2 = FParse::Command(local_res18,L"LODGroups",true), !bVar2)) {
        bVar2 = FParse::Command(local_res18,L"InvestigateTexture",true);
        if ((bVar2) || (bVar2 = FParse::Command(local_res18,L"InvestigateRenderAsset",true), bVar2))
        {
          bVar2 = HandleInvestigateRenderAssetCommand(this,local_res18[0],param_3,param_1);
          return bVar2;
        }
        bVar2 = FParse::Command(local_res18,L"ListMaterialsWithMissingTextureStreamingData",true);
        if (!bVar2) {
          return false;
        }
        FOutputDevice::Log(param_3,L"Listing all materials with not texture streaming data.");
        FOutputDevice::Log(param_3,
                           L"Run \"BuildMaterialTextureStreamingData\" in the editor to fix the issue"
                          );
        FOutputDevice::Log(param_3,
                           L"Note that some materials might have no that even after rebuild.");
        local_138.Index = 0xffffffff;
        local_138.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.ObjectArray.ArrayNum = 0;
        local_138.ObjectArray.ArrayMax = 0;
        EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
        pUVar7 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        GetObjectsOfClass(pUVar7,&local_138.ObjectArray,true,RF_ClassDefaultObject,
                          EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
        TObjectIterator<UMaterialInterface>::Advance(&local_138);
        while( true ) {
          lVar10 = (longlong)local_138.Index;
          if ((local_138.Index < 0) || (local_138.ObjectArray.ArrayNum <= local_138.Index)) {
            if (local_138.ObjectArray.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
              return true;
            }
            FMemory::Free(local_138.ObjectArray.AllocatorInstance.Data);
            return true;
          }
          uVar6 = 0;
          if (local_138.Index < local_138.ObjectArray.ArrayNum) {
            uVar6 = (uint)~local_138.Index >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) break;
          this_00 = *(UMaterialInterface **)
                     (local_138.ObjectArray.AllocatorInstance.Data + lVar10 * 8);
          if (this_00 != (UMaterialInterface *)0x0) {
            pUVar8 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
            pUVar9 = GetTransientPackage();
            if ((((pUVar8 != pUVar9) && ((this_00->_padding_ & 1) != 0)) &&
                (bVar2 = UMaterialInterface::UseAnyStreamingTexture(this_00), bVar2)) &&
               ((this_00->TextureStreamingData).ArrayNum == 0)) {
              UObjectBaseUtility::GetFullName
                        ((UObjectBaseUtility *)this_00,&local_a0,(UObject *)0x0,None);
              FOutputDevice::LogfImpl(param_3,L"%s");
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
            }
          }
          TObjectIterator<UMaterialInterface>::Advance(&local_138);
        }
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      bVar2 = HandleLODGroupsCommand(this,local_res18[0],param_3);
      return bVar2;
    }
    pFVar12 = &this->CriticalSection;
    if (pFVar12 != (FWindowsRecursiveMutex *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar12);
      this->bPauseRenderAssetStreaming = this->bPauseRenderAssetStreaming == false;
      FOutputDevice::LogfImpl(param_3,L"Render asset streaming is now \"%s\".");
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar12);
      return true;
    }
    goto LAB_14879764e;
  }
  pFVar12 = &this->CriticalSection;
  local_f0 = local_res18[0];
  if (pFVar12 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)pFVar12);
  FParse::Token(&local_b0,&local_f0,false);
  iVar4 = local_b0.Data.ArrayNum + -1;
  if (local_b0.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      FVar11.Data = local_b0.Data.AllocatorInstance.Data;
    }
    iVar4 = _wtoi((wchar_t *)FVar11.Data);
    if (0 < iVar4) {
      StreamOutRenderAssetData(this,(longlong)iVar4 << 0x14);
      FOutputDevice::LogfImpl(param_3,L"Tried to stream out %llu MB of texture/mesh data: %s");
      goto LAB_148796ed6;
    }
  }
  FOutputDevice::Log(param_3,L"Usage: StreamOut <N> (in MB)");
LAB_148796ed6:
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)pFVar12);
  return true;
}

// FastForceFullyResident @ 1487990d0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRenderAssetStreamingManager::FastForceFullyResident
          (FRenderAssetStreamingManager *this,UStreamableRenderAsset *param_1)

{
  int iVar1;
  uint uVar2;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  undefined1 uVar7;
  DWORD DVar8;
  uint uVar9;
  FStreamingManagerCollection *this_00;
  FStreamingRenderAsset *this_01;
  UStreamableRenderAsset *local_res8;
  undefined1 local_res18 [8];
  
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                       ,0x577,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
  }
  pFVar3 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 != *(DWORD *)&pFVar3->field_0x48) {
      FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
    }
  }
  pTVar5 = CVarStreamingAllowFastForceResident.Ref;
  bVar6 = IsInParallelGameThread();
  if (!bVar6) {
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return (bool)uVar7;
      }
    }
  }
  if (pTVar5->ShadowedValue[0] != 0) {
    this_00 = IStreamingManager::Get();
    bVar6 = FStreamingManagerCollection::IsStreamingEnabled(this_00);
    if ((((bVar6) && (this->bPauseRenderAssetStreaming == false)) &&
        (param_1 != (UStreamableRenderAsset *)0x0)) &&
       ((param_1->bIgnoreStreamingMipBias != '\0' &&
        ((param_1->bForceMiplevelsToBeResident != '\0' ||
         ((double)FApp::CurrentTime < param_1->ForceMipLevelsToBeResidentTimestamp ||
          (double)FApp::CurrentTime == param_1->ForceMipLevelsToBeResidentTimestamp)))))) {
      iVar1 = param_1->StreamingIndex;
      if ((-1 < iVar1) && (iVar1 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
        if (iVar1 < 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
        }
        if (*(UStreamableRenderAsset **)
             ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
             (longlong)iVar1 * 0xb8) == param_1) {
          uVar2 = param_1->StreamingIndex;
          uVar9 = 0;
          if ((int)uVar2 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
            uVar9 = ~uVar2 >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
          }
          this_01 = (FStreamingRenderAsset *)
                    ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                    (longlong)(int)uVar2 * 0xb8);
          FStreamingRenderAsset::UpdateStreamingStatus
                    (this_01,SUB81(local_res18,0),
                     (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
          if (this_01->ResidentMips < this_01->MaxAllowedMips) {
            TSet<UStreamableRenderAsset_*,DefaultKeyFuncs<UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
            ::Emplace<UStreamableRenderAsset_*_const_&>
                      (&this->FastResponseRenderAssets,&local_res8,(bool *)this_01);
            return true;
          }
        }
      }
    }
  }
  return false;
}

// GetAssetComponents @ 14879b8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::GetAssetComponents
          (FRenderAssetStreamingManager *this,UStreamableRenderAsset *param_1,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_2,
          TFunction<bool___cdecl(UPrimitiveComponent_const_*)> *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TFunction<bool___cdecl(UPrimitiveComponent_const_*)> *pTVar5;
  UStreamableRenderAsset *pUVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::GetAssetComponents(UStreamableRenderAsset_const_*,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_&,TFunction<bool___cdecl(UPrimitiveComponent_const_*)>)_::_9_::FStat_STAT_FRenderAssetStreamingManager_GetAssetComponents>
  FVar12;
  longlong lVar13;
  longlong *plVar14;
  FNameEntryId FVar15;
  FName FVar16;
  uint uVar17;
  int iVar18;
  FScriptContainerElement *pFVar19;
  uint uVar20;
  int iVar21;
  undefined1 auStackY_128 [32];
  FColor_u_0 local_b8 [2];
  uint local_b0;
  uint uStack_ac;
  TFunction<bool___cdecl(UPrimitiveComponent_const_*)> *local_a8;
  FScriptContainerElement *local_a0;
  FName local_98;
  FName local_90;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *local_88;
  UStreamableRenderAsset *local_80;
  FName local_78;
  int local_68;
  FName local_64;
  FName local_5c;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_128;
  local_a8 = param_3;
  local_88 = param_2;
  local_80 = param_1;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    if (*(longlong *)param_3 == 0) {
      return;
    }
    plVar14 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
    return;
  }
  if ((param_1 == (UStreamableRenderAsset *)0x0) || (param_1->StreamingIndex < 0))
  goto LAB_14879beb6;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRenderAssetStreamingManager_GetAssetComponents ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::GetAssetComponents(UStreamableRenderAsset_const_*,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_&,TFunction<bool___cdecl(UPrimitiveComponent_const_*)>)_::_9_::FStat_STAT_FRenderAssetStreamingManager_GetAssetComponents>
         )0x0) {
      pFVar11 = ::FName::FName(&local_64,"STAT_FRenderAssetStreamingManager_GetAssetComponents");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FRenderAssetStreamingManager_GetAssetComponents,*pFVar11,
                 L"STAT_FRenderAssetStreamingManager_GetAssetComponents","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_FRenderAssetStreamingManager_GetAssetComponents;
  if (StatPtr_STAT_FRenderAssetStreamingManager_GetAssetComponents ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::GetAssetComponents(UStreamableRenderAsset_const_*,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_&,TFunction<bool___cdecl(UPrimitiveComponent_const_*)>)_::_9_::FStat_STAT_FRenderAssetStreamingManager_GetAssetComponents>
       )0x0) {
    pFVar11 = ::FName::FName(&local_5c,"STAT_FRenderAssetStreamingManager_GetAssetComponents");
    FVar12 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::GetAssetComponents(UStreamableRenderAsset_const_*,TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>_&,TFunction<bool___cdecl(UPrimitiveComponent_const_*)>)_::_9_::FStat_STAT_FRenderAssetStreamingManager_GetAssetComponents>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FRenderAssetStreamingManager_GetAssetComponents,*pFVar11,
                          L"STAT_FRenderAssetStreamingManager_GetAssetComponents","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar3 = false;
  bVar4 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  bVar7 = false;
  bVar8 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar20 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar20 == 0)) {
LAB_14879bada:
    bVar4 = bVar8;
    bVar3 = bVar7;
    bVar7 = false;
    local_90 = local_78;
    FVar16 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar3 = false;
      bVar4 = true;
      bVar7 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar15.Value;
        local_98.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                   ,0x8a7);
        bVar3 = true;
        bVar4 = true;
        bVar7 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14879bada;
    local_b0 = FVar15.Value;
    uStack_ac = uVar20;
    local_90 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar7 = true;
  }
  uVar20 = param_1->StreamingIndex;
  if (((int)uVar20 < 0) || ((this->AsyncUnsafeStreamingRenderAssets).ArrayNum <= (int)uVar20)) {
LAB_14879bb69:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("AsyncUnsafeStreamingRenderAssets.IsValidIndex(Idx) && AsyncUnsafeStreamingRenderAssets[Idx].RenderAsset == RenderAsset"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                       ,0x8aa,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar9 = 0;
    if ((int)uVar20 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
      uVar9 = ~uVar20 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(UStreamableRenderAsset **)
         ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
         (longlong)(int)uVar20 * 0xb8) != param_1) goto LAB_14879bb69;
  }
  uVar9 = 0;
  if ((int)uVar20 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
    uVar9 = ~uVar20 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pUVar6 = local_80;
  pTVar5 = local_a8;
  iVar18 = 0;
  iVar21 = 0;
  local_a0 = (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
             (longlong)(int)uVar20 * 0xb8 + 0x98;
  uVar20 = *(uint *)(local_a0 + 0x18);
  if (uVar20 != 0) {
    pFVar19 = *(FScriptContainerElement **)(local_a0 + 0x10);
    if (*(FScriptContainerElement **)(local_a0 + 0x10) == (FScriptContainerElement *)0x0) {
      pFVar19 = local_a0;
    }
    uVar9 = *(uint *)pFVar19;
    while (uVar9 == 0) {
      lVar13 = (longlong)iVar18;
      iVar21 = iVar21 + 0x20;
      iVar18 = iVar18 + 1;
      if ((int)((uVar20 - 1) + ((int)(uVar20 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14879bdfc;
      uVar9 = *(uint *)(pFVar19 + (lVar13 + 1) * 4);
    }
    uVar9 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_68 = (int)lVar13;
    uVar17 = local_68 + -1 + iVar21;
    if ((int)uVar17 < (int)uVar20) {
      uVar20 = 0xffffffff;
      do {
        if ((((int)uVar17 < 0) || ((this->LevelRenderAssetManagers).ArrayNum <= (int)uVar17)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("LevelRenderAssetManagers.IsValidIndex(LevelIdx)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                               ,0x8b0,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar10 = 0;
        if ((int)uVar17 < (this->LevelRenderAssetManagers).ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar14 = *(longlong **)
                   ((this->LevelRenderAssetManagers).AllocatorInstance.Data +
                   (longlong)(int)uVar17 * 8);
        if (((plVar14 != (longlong *)0x0) && ((char)plVar14[1] != '\0')) &&
           ((0 < *(int *)(plVar14[3] + 0x140) && ((*(byte *)(*plVar14 + 0x240) & 0x20) != 0)))) {
          FStaticRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)(plVar14 + 4));
          *(undefined4 *)(plVar14 + 7) = 0;
          GatherComponentsFromView(pUVar6,(FRenderAssetInstanceView *)plVar14[6],pTVar5,local_88);
        }
        uVar20 = uVar20 & ~uVar9;
        uVar10 = *(uint *)(local_a0 + 0x18);
        pFVar19 = local_a0;
        if (*(FScriptContainerElement **)(local_a0 + 0x10) != (FScriptContainerElement *)0x0) {
          pFVar19 = *(FScriptContainerElement **)(local_a0 + 0x10);
        }
        uVar17 = uVar20 & *(uint *)(pFVar19 + (longlong)iVar18 * 4);
        while (uVar17 == 0) {
          lVar13 = (longlong)iVar18;
          iVar21 = iVar21 + 0x20;
          iVar18 = iVar18 + 1;
          uVar17 = uVar10;
          if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14879bde3;
          uVar20 = 0xffffffff;
          uVar17 = *(uint *)(pFVar19 + (lVar13 + 1) * 4);
        }
        uVar9 = -uVar17 & uVar17;
        uVar1 = (ulonglong)uVar9 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_b0 = (uint)lVar13;
        uVar17 = (local_b0 - 1) + iVar21;
        if ((int)uVar10 < (int)uVar17) {
          uVar17 = uVar10;
        }
LAB_14879bde3:
        FVar16 = local_90;
      } while ((int)uVar17 < (int)*(uint *)(local_a0 + 0x18));
    }
  }
LAB_14879bdfc:
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\DynamicTextureInstanceManager.cpp"
                         ,0x168,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  GatherComponentsFromView
            (local_80,(FRenderAssetInstanceView *)
                      (this->DynamicComponentManager).StateSync._padding_,local_a8,local_88);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
LAB_14879beb6:
  if (*(longlong *)local_a8 != 0) {
    plVar14 = (longlong *)&local_a8->field_0x10;
    if (*(longlong **)&local_a8->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&local_a8->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

// GetCachedMips @ 14879ce10

float __thiscall FRenderAssetStreamingManager::GetCachedMips(FRenderAssetStreamingManager *this)

{
  return (float)(this->DisplayedStats).CachedMips;
}

// GetMaxEverRequired @ 1487a13d0

long64 __thiscall
FRenderAssetStreamingManager::GetMaxEverRequired(FRenderAssetStreamingManager *this)

{
  return this->MaxEverRequired;
}

// GetMemoryOverBudget @ 1487a13e0

long64 __thiscall
FRenderAssetStreamingManager::GetMemoryOverBudget(FRenderAssetStreamingManager *this)

{
  return this->MemoryOverBudget;
}

// GetNumStreamedMipsArray @ 1487a1c80

int __thiscall
FRenderAssetStreamingManager::GetNumStreamedMipsArray
          (FRenderAssetStreamingManager *this,EStreamableRenderAssetType param_1,int **param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 == Texture) {
    *param_2 = this->NumStreamedMips_Texture;
    return 0x52;
  }
  if (param_1 == StaticMesh) {
    *param_2 = (int *)(this->NumStreamedMips_StaticMesh).AllocatorInstance.Data;
    return (this->NumStreamedMips_StaticMesh).ArrayNum;
  }
  if (param_1 == SkeletalMesh) {
    *param_2 = (int *)(this->NumStreamedMips_SkeletalMesh).AllocatorInstance.Data;
    return (this->NumStreamedMips_SkeletalMesh).ArrayNum;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.h"
                     ,0x109,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  *param_2 = (int *)0x0;
  return -1;
}

// GetObjectReferenceBounds @ 1487a1e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FRenderAssetStreamingManager::GetObjectReferenceBounds
          (FRenderAssetStreamingManager *this,UObject *param_1,
          TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FRenderAssetInstanceView *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::GetObjectReferenceBounds(UObject_const_*,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds>
  FVar11;
  UClass *pUVar12;
  TBoxSphereBounds<double,double> *pTVar13;
  FElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  FNameEntryId FVar18;
  undefined1 auStackY_1e8 [32];
  undefined1 local_188 [8];
  FName local_180;
  byte local_178;
  FRenderAssetLinkConstIterator local_170;
  FColor_u_0 local_160 [2];
  FName local_158;
  FRenderAssetLinkConstIterator local_150;
  FName local_140;
  FName local_138;
  TBoxSphereBounds<double,double> local_130;
  TBoxSphereBounds<double,double> local_f8;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  undefined1 local_a0 [16];
  undefined1 local_90;
  undefined7 uStack_8f;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  undefined1 local_58;
  undefined7 uStack_57;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::GetObjectReferenceBounds(UObject_const_*,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds>
         )0x0) {
      pFVar10 = ::FName::FName(&local_140,
                               "STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds,*pFVar10,
                 L"STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds;
  if (StatPtr_STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::GetObjectReferenceBounds(UObject_const_*,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds>
       )0x0) {
    pFVar10 = ::FName::FName(&local_138,"STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds"
                            );
    FVar11 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::GetObjectReferenceBounds(UObject_const_*,TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds,
                          *pFVar10,L"STAT_FRenderAssetStreamingManager_GetObjectReferenceBounds",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  local_178 = 0;
  FVar2 = *(FName *)FVar11;
  FVar18 = FVar2.ComparisonIndex.Value;
  uVar16 = FVar2.Number;
  if ((FVar18.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      local_178 = local_178 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_158.ComparisonIndex.Value = FVar18.Value;
        local_158.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_158,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                   ,0x85e);
        local_178 = local_178 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_180 = FVar2;
      local_170.State._0_4_ = FVar18.Value;
      local_170.State._4_4_ = uVar16;
      FThreadStats::AddMessage(FVar2,CycleScopeStart);
      local_178 = local_178 | 4;
    }
  }
  if (param_1 != (UObject *)0x0) {
    pUVar12 = UStreamableRenderAsset::StaticClass();
    iVar9 = (int)pUVar12->_padding_;
    if ((iVar9 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
        &pUVar12->_padding_)) {
      if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
        pFVar17 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
        iVar9 = (this->LevelRenderAssetManagers).ArrayNum;
        pFVar5 = pFVar17 + (longlong)iVar9 * 8;
        while( true ) {
          if ((this->LevelRenderAssetManagers).ArrayNum != iVar9) {
            local_188[0] = 0;
            `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_188);
          }
          if (pFVar17 == pFVar5) break;
          lVar15 = *(longlong *)pFVar17;
          if (lVar15 != 0) {
            FStaticRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)(lVar15 + 0x20));
            *(undefined4 *)(lVar15 + 0x38) = 0;
            if (*(FRenderAssetInstanceView **)(lVar15 + 0x30) != (FRenderAssetInstanceView *)0x0) {
              FRenderAssetInstanceView::FRenderAssetLinkConstIterator::FRenderAssetLinkConstIterator
                        (&local_170,*(FRenderAssetInstanceView **)(lVar15 + 0x30),
                         (UStreamableRenderAsset *)param_1);
              while (local_170.CurrElementIndex != -1) {
                pTVar13 = FRenderAssetInstanceView::FRenderAssetLinkConstIterator::GetBounds
                                    (&local_170,&local_130);
                pFVar3 = (param_2->AllocatorInstance).Data;
                dVar1 = (pTVar13->Origin).field0_0x0._s_0.X;
                dStack_a8 = (pTVar13->BoxExtent).field0_0x0._s_0.X;
                local_c0 = dVar1 - dStack_a8;
                dStack_a8 = dStack_a8 + dVar1;
                dStack_b8 = (pTVar13->Origin).field0_0x0._s_0.Y -
                            (pTVar13->BoxExtent).field0_0x0._s_0.Y;
                local_b0 = (pTVar13->Origin).field0_0x0._s_0.Z -
                           (pTVar13->BoxExtent).field0_0x0._s_0.Z;
                dVar1 = (pTVar13->BoxExtent).field0_0x0._s_0.Z + (pTVar13->Origin).field0_0x0._s_0.Z
                ;
                local_90 = 1;
                local_a0._8_4_ = SUB84(dVar1,0);
                local_a0._0_8_ =
                     (pTVar13->BoxExtent).field0_0x0._s_0.Y + (pTVar13->Origin).field0_0x0._s_0.Y;
                local_a0._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
                if (((pFVar3 <= (FScriptContainerElement *)&local_c0) &&
                    ((FScriptContainerElement *)&local_c0 <
                     pFVar3 + (longlong)param_2->ArrayMax * 0x38)) &&
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
                iVar8 = param_2->ArrayNum;
                if (iVar8 == param_2->ArrayMax) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
                }
                param_2->ArrayNum = iVar8 + 1;
                lVar15 = (longlong)iVar8 * 0x38;
                pFVar3 = (param_2->AllocatorInstance).Data;
                *(double *)(pFVar3 + lVar15) = local_c0;
                *(double *)(pFVar3 + lVar15 + 8) = dStack_b8;
                *(double *)(pFVar3 + lVar15 + 0x10) = local_b0;
                *(double *)(pFVar3 + lVar15 + 0x10 + 8) = dStack_a8;
                *(undefined8 *)(pFVar3 + lVar15 + 0x20) = local_a0._0_8_;
                *(undefined8 *)(pFVar3 + lVar15 + 0x20 + 8) = local_a0._8_8_;
                *(ulonglong *)(pFVar3 + lVar15 + 0x30) = CONCAT71(uStack_8f,local_90);
                pFVar14 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                          ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                                        *)(CONCAT44(local_170.State._4_4_,local_170.State._0_4_) +
                                          0x20),local_170.CurrElementIndex);
                local_170.CurrElementIndex = pFVar14->NextRenderAssetLink;
              }
            }
          }
          pFVar17 = pFVar17 + 8;
        }
        FRenderAssetDynamicInstanceStateTaskSync<FDynamicRenderAssetInstanceManager::FTasks>::Sync
                  (&(this->DynamicComponentManager).StateSync);
        pFVar4 = (this->DynamicComponentManager).AsyncView.Reference;
        (this->DynamicComponentManager).DirtyIndex = 0;
        if ((pFVar4 != (FRenderAssetInstanceView *)0x0) &&
           (FRenderAssetInstanceView::FRenderAssetLinkConstIterator::FRenderAssetLinkConstIterator
                      (&local_150,pFVar4,(UStreamableRenderAsset *)param_1),
           local_150.CurrElementIndex != -1)) {
          do {
            pTVar13 = FRenderAssetInstanceView::FRenderAssetLinkConstIterator::GetBounds
                                (&local_150,&local_f8);
            pFVar5 = (param_2->AllocatorInstance).Data;
            dVar1 = (pTVar13->Origin).field0_0x0._s_0.X;
            dStack_70 = (pTVar13->BoxExtent).field0_0x0._s_0.X;
            local_88 = dVar1 - dStack_70;
            dStack_70 = dStack_70 + dVar1;
            dStack_80 = (pTVar13->Origin).field0_0x0._s_0.Y - (pTVar13->BoxExtent).field0_0x0._s_0.Y
            ;
            local_78 = (pTVar13->Origin).field0_0x0._s_0.Z - (pTVar13->BoxExtent).field0_0x0._s_0.Z;
            dVar1 = (pTVar13->BoxExtent).field0_0x0._s_0.Z + (pTVar13->Origin).field0_0x0._s_0.Z;
            local_58 = 1;
            local_68._8_4_ = SUB84(dVar1,0);
            local_68._0_8_ =
                 (pTVar13->BoxExtent).field0_0x0._s_0.Y + (pTVar13->Origin).field0_0x0._s_0.Y;
            local_68._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
            if ((pFVar5 <= (FScriptContainerElement *)&local_88) &&
               (((FScriptContainerElement *)&local_88 < pFVar5 + (longlong)param_2->ArrayMax * 0x38
                && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar7)))) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar9 = param_2->ArrayNum;
            if (iVar9 == param_2->ArrayMax) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
            }
            param_2->ArrayNum = iVar9 + 1;
            lVar15 = (longlong)iVar9 * 0x38;
            pFVar5 = (param_2->AllocatorInstance).Data;
            *(double *)(pFVar5 + lVar15) = local_88;
            *(double *)(pFVar5 + lVar15 + 8) = dStack_80;
            *(double *)(pFVar5 + lVar15 + 0x10) = local_78;
            *(double *)(pFVar5 + lVar15 + 0x10 + 8) = dStack_70;
            *(undefined8 *)(pFVar5 + lVar15 + 0x20) = local_68._0_8_;
            *(undefined8 *)(pFVar5 + lVar15 + 0x20 + 8) = local_68._8_8_;
            *(ulonglong *)(pFVar5 + lVar15 + 0x30) = CONCAT71(uStack_57,local_58);
            pFVar14 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                      ::operator[](&(local_150.State)->Elements,local_150.CurrElementIndex);
            local_150.CurrElementIndex = pFVar14->NextRenderAssetLink;
          } while (local_150.CurrElementIndex != -1);
          local_150.CurrElementIndex = -1;
        }
      }
      else {
        if ((FSimpleStreamableAssetManager::Instance == (FSimpleStreamableAssetManager *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Instance != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                               ,0x75,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FSimpleStreamableAssetManager::GetAssetReferenceBounds_Impl
                  (FSimpleStreamableAssetManager::Instance,(UStreamableRenderAsset *)param_1,param_2
                  );
      }
    }
  }
  if ((local_178 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_178 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_178 & 4) != 0) {
    FThreadStats::AddMessage(local_180,CycleScopeEnd);
  }
  local_178 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return;
}

// GetPoolSize @ 1487a28d0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

long64 __thiscall FRenderAssetStreamingManager::GetPoolSize(FRenderAssetStreamingManager *this)

{
  return GRHIGlobals.TexturePoolSize;
}

// GetRequiredPoolSize @ 1487a4140

long64 __thiscall
FRenderAssetStreamingManager::GetRequiredPoolSize(FRenderAssetStreamingManager *this)

{
  return (this->DisplayedStats).RequiredPool;
}

// GetStreamingRenderAsset @ 1487a6320

FStreamingRenderAsset * __thiscall
FRenderAssetStreamingManager::GetStreamingRenderAsset
          (FRenderAssetStreamingManager *this,UStreamableRenderAsset *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FStreamingRenderAsset *pFVar5;
  FStreamingRenderAsset *pFVar6;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 != (UStreamableRenderAsset *)0x0) {
    uVar1 = param_1->StreamingIndex;
    if ((-1 < (int)uVar1) && ((int)uVar1 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
      uVar4 = 0;
      if ((int)uVar1 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FStreamingRenderAsset *)(*pcVar2)();
        return pFVar5;
      }
      pFVar6 = (FStreamingRenderAsset *)
               ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
               (longlong)(int)uVar1 * 0xb8);
      pFVar5 = (FStreamingRenderAsset *)0x0;
      if (pFVar6->RenderAsset == param_1) {
        pFVar5 = pFVar6;
      }
      goto LAB_1487a63cc;
    }
  }
  pFVar5 = (FStreamingRenderAsset *)0x0;
LAB_1487a63cc:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar5;
}

// GetStreamingRenderAssetsAsyncSafe @ 1487a6400

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> * __thiscall
FRenderAssetStreamingManager::GetStreamingRenderAssetsAsyncSafe(FRenderAssetStreamingManager *this)

{
  FBaseGraphTask *pFVar1;
  DWORD DVar2;
  
  pFVar1 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if (pFVar1 != (FBaseGraphTask *)0x0) {
    DVar2 = GetCurrentThreadId();
    if (DVar2 != *(DWORD *)&pFVar1->field_0x48) {
      FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
    }
    return &this->AsyncUnsafeStreamingRenderAssets;
  }
  return &this->AsyncUnsafeStreamingRenderAssets;
}

// HandleCancelRenderAssetStreamingCommand @ 1487a6e60

bool __thiscall
FRenderAssetStreamingManager::HandleCancelRenderAssetStreamingCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    UTexture::CancelPendingTextureStreaming();
    UStaticMesh::CancelAllPendingStreamingActions();
    USkeletalMesh::CancelAllPendingStreamingActions();
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleDebugTrackedRenderAssetsCommand @ 1487a6eb0

bool __thiscall
FRenderAssetStreamingManager::HandleDebugTrackedRenderAssetsCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleDumpTextureStreamingStatsCommand @ 1487a6ef0

bool __thiscall
FRenderAssetStreamingManager::HandleDumpTextureStreamingStatsCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FOutputDevice::Log(param_2,L"--------------------------------------------------------");
    FOutputDevice::Log(param_2,L"Texture Streaming Stats:");
    FOutputDevice::LogfImpl(param_2,L"Total Pool Size (aka RenderAssetPool) = %.2f MB");
    FOutputDevice::LogfImpl(param_2,L"Non-Streaming Mips = %.2f MB");
    FOutputDevice::LogfImpl(param_2,L"Remaining Streaming Pool Size = %.2f MB");
    FOutputDevice::LogfImpl(param_2,L"Streaming Assets, Current/Pool = %.2f / %.2f MB (%d%%)");
    FOutputDevice::LogfImpl(param_2,L"Streaming Assets, Target/Pool =  %.2f / %.2f MB (%d%%)");
    FOutputDevice::Log(param_2,L"--------------------------------------------------------");
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleInvestigateRenderAssetCommand @ 1487a7120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2,
          UWorld *param_3)

{
  FRenderAssetStreamingMipCalcTask *this_00;
  int *piVar1;
  undefined1 *puVar2;
  float fVar3;
  FBaseGraphTask *pFVar4;
  FAsyncTask<FRenderAssetStreamingMipCalcTask> *this_01;
  FRenderAssetInstanceAsyncView *pFVar5;
  undefined8 uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FSimpleStreamableAssetManager *lpCriticalSection;
  UStreamableRenderAsset *pUVar9;
  FRenderAssetStreamingManager *pFVar10;
  FAsyncRenderAssetStreamingData *this_02;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  DWORD DVar14;
  int iVar15;
  EPlatformMemorySizeBucket EVar16;
  size_t sVar17;
  UClass *pUVar18;
  wchar_t *pwVar19;
  longlong lVar20;
  longlong *plVar21;
  UStreamableRenderAsset *pUVar22;
  UDeviceProfileManager *this_03;
  UDeviceProfile *this_04;
  UTextureLODSettings *pUVar23;
  int iVar24;
  ForAnyElementType FVar25;
  FStaticBasicLogRecord *pFVar26;
  LPCRITICAL_SECTION lpCriticalSection_00;
  FStreamingRenderAsset *pFVar27;
  UStreamableRenderAsset *pUVar28;
  UStreamableRenderAsset *pUVar29;
  byte bVar30;
  uint uVar31;
  uint uVar32;
  UStreamableRenderAsset *pUVar33;
  uint uVar34;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar35;
  uint uVar36;
  uint uVar37;
  FIdentityFunctor FVar38;
  wchar_t *local_res10;
  undefined1 auStackY_288 [32];
  int local_224;
  uint local_220;
  ForAnyElementType local_218;
  int local_210;
  int local_20c;
  uint local_208;
  uint local_204;
  FString local_200;
  UStreamableRenderAsset *local_1f0;
  FRenderAssetStreamingManager *local_1e8;
  TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> local_1e0;
  int local_1d0;
  longlong local_1c8;
  TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> local_1c0;
  FString local_1b0;
  UStreamableRenderAsset *local_1a0;
  FString local_198;
  FString local_188;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_178;
  undefined8 local_170;
  UWorld *local_168;
  FAsyncRenderAssetStreamingData *local_160;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_158;
  LPCRITICAL_SECTION local_150;
  FSimpleStreamableAssetManager *local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  wchar_t *local_a0;
  wchar_t *local_98;
  wchar_t *local_90;
  wchar_t *local_88;
  wchar_t *local_80;
  wchar_t *local_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_288;
  lpCriticalSection_00 = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_res10 = param_1;
  local_1e8 = this;
  local_168 = param_3;
  local_150 = lpCriticalSection_00;
  if (lpCriticalSection_00 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection_00);
  pFVar4 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if ((pFVar4 != (FBaseGraphTask *)0x0) &&
     (DVar14 = GetCurrentThreadId(), DVar14 != *(DWORD *)&pFVar4->field_0x48)) {
    FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
  }
  pTVar35 = &this->AsyncUnsafeStreamingRenderAssets;
  iVar15 = this->ProcessingStage;
  local_158 = pTVar35;
  while (iVar15 != 0) {
    UpdateResourceStreaming(this,0.0,false);
    iVar15 = this->ProcessingStage;
  }
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
  FAsyncTaskBase::EnsureCompletion
            ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
  CheckUserSettings(this);
  ProcessRemovedRenderAssets(this);
  ProcessAddedRenderAssets(this);
  local_1f0 = (UStreamableRenderAsset *)&this->Settings;
  FRenderAssetStreamingSettings::Update((FRenderAssetStreamingSettings *)local_1f0);
  ConditionalUpdateStaticData(this);
  IncrementalUpdate(this,__real_3f800000,false);
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    ProcessLevelsToReferenceToStreamedTextures(this);
  }
  FParse::Token(&local_1b0,&local_res10,false);
  if ((local_1b0.Data.ArrayNum == 0) || (local_1b0.Data.ArrayNum == 1)) {
    FOutputDevice::Log(param_2,L"Usage: InvestigateTexture <name>");
  }
  else {
    this_01 = this->AsyncWork;
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_01);
    FVar38 = (FIdentityFunctor)
             (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0);
    this_00 = &this_01->Task;
    local_148 = FSimpleStreamableAssetManager::Instance;
    local_160 = &this_00->StreamingData;
    if ((bool)FVar38) {
      EnterCriticalSection((LPCRITICAL_SECTION)FSimpleStreamableAssetManager::Instance);
    }
    FVar25.Data = IStreamingManager::CurrentViewInfos.AllocatorInstance.Data;
    if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
      lVar20 = (longlong)IStreamingManager::CurrentViewInfos.ArrayNum;
      fVar3 = this->LastWorldUpdateTime;
      local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c0.ArrayNum = IStreamingManager::CurrentViewInfos.ArrayNum;
      if (IStreamingManager::CurrentViewInfos.ArrayNum == 0) {
        local_1c0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,IStreamingManager::CurrentViewInfos.ArrayNum,0,
                   &local_1c0.AllocatorInstance,IStreamingManager::CurrentViewInfos.ArrayNum,
                   &local_1c0.ArrayMax);
        memcpy(local_1c0.AllocatorInstance.Data,FVar25.Data,lVar20 << 6);
      }
      FAsyncRenderAssetStreamingData::Init
                (&this_00->StreamingData,&local_1c0,fVar3,&this->LevelRenderAssetManagers,
                 &this->DynamicComponentManager);
    }
    else {
      if ((FSimpleStreamableAssetManager::Instance == (FSimpleStreamableAssetManager *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Instance != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                              ,0x50,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      lpCriticalSection = FSimpleStreamableAssetManager::Instance;
      if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
        FSimpleStreamableAssetManager::UpdateTask_Async(FSimpleStreamableAssetManager::Instance);
      }
      else {
        EnterCriticalSection((LPCRITICAL_SECTION)FSimpleStreamableAssetManager::Instance);
        FSimpleStreamableAssetManager::UpdateTask_Async(FSimpleStreamableAssetManager::Instance);
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      }
      iVar15 = IStreamingManager::CurrentViewInfos.ArrayNum;
      FVar25.Data = IStreamingManager::CurrentViewInfos.AllocatorInstance.Data;
      fVar3 = this->LastWorldUpdateTime;
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = IStreamingManager::CurrentViewInfos.ArrayNum;
      if (IStreamingManager::CurrentViewInfos.ArrayNum == 0) {
        local_1e0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,IStreamingManager::CurrentViewInfos.ArrayNum,0,
                   &local_1e0.AllocatorInstance,IStreamingManager::CurrentViewInfos.ArrayNum,
                   &local_1e0.ArrayMax);
        memcpy(local_1e0.AllocatorInstance.Data,FVar25.Data,(longlong)iVar15 << 6);
      }
      TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *)this_00,&local_1e0);
      (this_01->Task).StreamingData.LastUpdateTime = fVar3;
      piVar1 = &(this_01->Task).StreamingData.StaticInstancesViews.ArrayMax;
      pFVar5 = (FRenderAssetInstanceAsyncView *)
               (this_01->Task).StreamingData.StaticInstancesViews.AllocatorInstance.Data;
      iVar15 = (this_01->Task).StreamingData.StaticInstancesViews.ArrayNum;
      if (*piVar1 < 0) {
        DestructItems<FRenderAssetInstanceAsyncView,int>(pFVar5,iVar15);
        iVar15 = *piVar1;
        (this_01->Task).StreamingData.StaticInstancesViews.ArrayNum = 0;
        if (iVar15 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,&(this_01->Task).StreamingData.StaticInstancesViews.AllocatorInstance,
                     0,piVar1);
        }
      }
      else {
        DestructItems<FRenderAssetInstanceAsyncView,int>(pFVar5,iVar15);
        (this_01->Task).StreamingData.StaticInstancesViews.ArrayNum = 0;
      }
      iVar15 = (this_01->Task).StreamingData.StaticInstancesViewIndices.ArrayMax;
      (this_01->Task).StreamingData.StaticInstancesViewIndices.ArrayNum = 0;
      if (iVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this_01->Task).StreamingData.StaticInstancesViewIndices.AllocatorInstance
                   ,0,&(this_01->Task).StreamingData.StaticInstancesViewIndices.ArrayMax);
      }
      iVar15 = (this_01->Task).StreamingData.CulledStaticInstancesViewIndices.ArrayMax;
      (this_01->Task).StreamingData.CulledStaticInstancesViewIndices.ArrayNum = 0;
      if (iVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this_01->Task).StreamingData.CulledStaticInstancesViewIndices.
                          AllocatorInstance,0,
                   &(this_01->Task).StreamingData.CulledStaticInstancesViewIndices.ArrayMax);
      }
      iVar15 = (this_01->Task).StreamingData.StaticInstancesViewLevelIndices.ArrayMax;
      (this_01->Task).StreamingData.StaticInstancesViewLevelIndices.ArrayNum = 0;
      if (iVar15 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this_01->Task).StreamingData.StaticInstancesViewLevelIndices.
                          AllocatorInstance,0,
                   &(this_01->Task).StreamingData.StaticInstancesViewLevelIndices.ArrayMax);
      }
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
    }
    FAsyncRenderAssetStreamingData::ComputeViewInfoExtras
              (&this_00->StreamingData,(FRenderAssetStreamingSettings *)local_1f0);
    FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async
              (&this_00->StreamingData,(FRenderAssetStreamingSettings *)local_1f0);
    FVar25.Data = (FScriptContainerElement *)L"";
    if (local_1b0.Data.ArrayNum != 0) {
      FVar25.Data = local_1b0.Data.AllocatorInstance.Data;
    }
    iVar15 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar25.Data,L"*");
    uVar36 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
    local_218.Data = (FScriptContainerElement *)0x0;
    local_210 = 0;
    local_20c = 0;
    local_1d0 = iVar15;
    if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar36);
    }
    if (0 < (int)uVar36) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar36,&local_218,0,&local_20c);
    }
    local_224 = 0;
    if (0 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
      do {
        if (((local_218.Data <= (FScriptContainerElement *)&local_224) &&
            ((FScriptContainerElement *)&local_224 < local_218.Data + (longlong)local_20c * 4)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        if (local_210 == local_20c) {
          local_210 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_218,&local_20c);
        }
        iVar24 = local_210 + 1;
        *(int *)(local_218.Data + (longlong)local_210 * 4) = local_224;
        local_224 = local_224 + 1;
        local_210 = iVar24;
      } while (local_224 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum);
    }
    if (iVar15 == 0) {
      local_178 = pTVar35;
      AlgoImpl::
      IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FRenderAssetStreamingManager::HandleInvestigateRenderAssetCommand_::__l15::<lambda_1>_>_>
                ((int *)local_218.Data,local_210,FVar38,(<lambda_1> *)&local_178);
    }
    pUVar9 = local_1f0;
    local_204 = 0;
    if (0 < local_210) {
      local_1c8 = 0;
      do {
        lVar20 = local_1c8;
        uVar36 = local_204;
        pUVar29 = (UStreamableRenderAsset *)0x0;
        uVar37 = 0;
        if ((int)local_204 < local_210) {
          uVar37 = ~local_204 >> 0x1f;
        }
        if ((uVar37 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        uVar37 = *(uint *)(local_218.Data + lVar20);
        uVar31 = 0;
        if ((int)uVar37 < pTVar35->ArrayNum) {
          uVar31 = ~uVar37 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          uVar12 = (*pcVar8)();
          return (bool)uVar12;
        }
        pFVar27 = (FStreamingRenderAsset *)
                  ((pTVar35->AllocatorInstance).Data + (longlong)(int)uVar37 * 0xb8);
        UObjectBaseUtility::GetFullName
                  ((UObjectBaseUtility *)pFVar27->RenderAsset,&local_188,(UObject *)0x0,None);
        if (local_1d0 == 0) {
LAB_1487a7802:
          pUVar28 = pFVar27->RenderAsset;
          local_1a0 = pUVar28;
          if (pUVar28 != (UStreamableRenderAsset *)0x0) {
            uVar6 = *(undefined8 *)&pUVar28->CachedSRRState;
            uVar36 = (uint)((ulonglong)uVar6 >> 0x20);
            local_170 = uVar6;
            pUVar18 = Z_Construct_UClass_UTexture_NoRegister();
            bVar30 = (byte)((ulonglong)uVar6 >> 0x18);
            iVar15 = (int)pUVar18->_padding_;
            if ((*(int *)(pUVar28->_padding_ + 0x38) < iVar15) ||
               (local_1f0 = pUVar28,
               (longlong *)
               *(undefined1 **)(*(longlong *)(pUVar28->_padding_ + 0x30) + (longlong)iVar15 * 8) !=
               &pUVar18->_padding_)) {
              local_1f0 = (UStreamableRenderAsset *)0x0;
              uVar36 = uVar36 & 0xff;
            }
            Z_Construct_UClass_UStaticMesh_NoRegister();
            local_208 = (uint)bVar30;
            uVar37 = ((uint)bVar30 - (int)pFVar27->ResidentMips) + (uVar36 & 0xff);
            iVar15 = (int)pFVar27->HiddenWantedMips;
            if ((int)pFVar27->HiddenWantedMips < (int)pFVar27->VisibleWantedMips) {
              iVar15 = (int)pFVar27->VisibleWantedMips;
            }
            local_220 = ((uint)bVar30 - iVar15) + (uVar36 & 0xff);
            if (4 < (byte)LogContentStreaming._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
            }
            pUVar22 = local_1f0;
            if (local_1f0 == (UStreamableRenderAsset *)0x0) {
              pwVar19 = L"Unknown";
            }
            else {
              pwVar19 = UTexture::GetTextureGroupString(pFVar27->LODGroup);
            }
            ::FString::FString(&local_198,pwVar19);
            local_a0 = L"Largest";
            local_98 = L"Larger";
            local_90 = L"Default";
            local_88 = L"Smaller";
            local_80 = L"Smallest";
            local_78 = L"Tiniest";
            EVar16 = FGenericPlatformMemory::GetMemorySizeBucket();
            if (EVar16 < (Smallest|Default)) {
              if (4 < (byte)LogContentStreaming._0_1_) {
                FGenericPlatformMemory::GetMemorySizeBucket();
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
              }
            }
            else if (4 < (byte)LogContentStreaming._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
            }
            if ((((pUVar22 != (UStreamableRenderAsset *)0x0) &&
                 (lVar20 = (**(code **)(pUVar22->_padding_ + 0x358))(), lVar20 != 0)) &&
                (plVar21 = (longlong *)(**(code **)(pUVar22->_padding_ + 0x358))(), *plVar21 != 0))
               && (4 < (byte)LogContentStreaming._0_1_)) {
              (**(code **)(pUVar22->_padding_ + 0x358))(pUVar22);
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
            }
            if ((*(longlong *)&pUVar28->field_0xd0 & 2) == 0) {
              if ((*(longlong *)&pUVar28->field_0xd0 & 8) == 0) {
                cVar13 = (**(code **)(pUVar28->_padding_ + 0x2f0))();
                if (cVar13 == '\0') {
                  if (pFVar27->bForceFullyLoadHeuristic == '\0') {
                    if ((local_170._3_1_ == '\x01') && (4 < (byte)LogContentStreaming._0_1_)) {
                      pFVar26 = &::LOG_Static;
                      goto LAB_1487a7b36;
                    }
                  }
                  else if (4 < (byte)LogContentStreaming._0_1_) {
                    pFVar26 = &::LOG_Static;
LAB_1487a7b36:
                    UE::Logging::Private::BasicLog<5>
                              (pFVar26,(FLogCategoryBase *)&LogContentStreaming);
                  }
                }
                else if (4 < (byte)LogContentStreaming._0_1_) {
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                }
              }
              else if (4 < (byte)LogContentStreaming._0_1_) {
                pFVar26 = (FStaticBasicLogRecord *)&PTR_u___Force_all_mip_151b7ad80;
                goto LAB_1487a7b36;
              }
            }
            else if (4 < (byte)LogContentStreaming._0_1_) {
              pFVar26 = &::LOG_Static;
              goto LAB_1487a7b36;
            }
            if (((pUVar22 == (UStreamableRenderAsset *)0x0) ||
                (cVar13 = (**(code **)(pUVar22->_padding_ + 0x348))(), cVar13 != '\0')) ||
               ((lVar20 = (**(code **)(pUVar22->_padding_ + 0x358))(), lVar20 == 0 ||
                (plVar21 = (longlong *)(**(code **)(pUVar22->_padding_ + 0x358))(), *plVar21 == 0)))
               ) {
              if ((4 < (byte)LogContentStreaming._0_1_) &&
                 (UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming),
                 4 < (byte)LogContentStreaming._0_1_)) {
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                goto LAB_1487a8330;
              }
            }
            else {
              plVar21 = (longlong *)(**(code **)(pUVar22->_padding_ + 0x358))();
              lVar20 = *plVar21;
              pUVar18 = Z_Construct_UClass_UTexture2D_NoRegister();
              iVar15 = (int)pUVar18->_padding_;
              if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar15) ||
                 (pUVar28 = pUVar22,
                 (longlong *)
                 *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar15 * 8)
                 != &pUVar18->_padding_)) {
                pUVar28 = pUVar29;
              }
              pUVar18 = Z_Construct_UClass_UVolumeTexture_NoRegister();
              iVar15 = (int)pUVar18->_padding_;
              if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar15) ||
                 (pUVar33 = pUVar22,
                 (longlong *)
                 *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar15 * 8)
                 != &pUVar18->_padding_)) {
                pUVar33 = pUVar29;
              }
              pUVar18 = Z_Construct_UClass_UTexture2DArray_NoRegister();
              iVar15 = (int)pUVar18->_padding_;
              if ((*(int *)(pUVar22->_padding_ + 0x38) < iVar15) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar22->_padding_ + 0x30) + (longlong)iVar15 * 8)
                  != &pUVar18->_padding_)) {
                pUVar22 = pUVar29;
              }
              if (pUVar28 == (UStreamableRenderAsset *)0x0) {
                if (pUVar33 == (UStreamableRenderAsset *)0x0) {
                  if (pUVar22 == (UStreamableRenderAsset *)0x0) {
LAB_1487a8330:
                    if ((((4 < (byte)LogContentStreaming._0_1_) &&
                         (UE::Logging::Private::BasicLog<5>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming),
                         4 < (byte)LogContentStreaming._0_1_)) &&
                        (UE::Logging::Private::BasicLog<5>
                                   (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming),
                        4 < (byte)LogContentStreaming._0_1_)) &&
                       (UE::Logging::Private::BasicLog<5>
                                  (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming),
                       4 < (byte)LogContentStreaming._0_1_)) {
                      UE::Logging::Private::BasicLog<5>
                                (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                    }
                  }
                  else if (4 < (byte)LogContentStreaming._0_1_) {
                    uVar31 = ~uVar37 >> 0x1f;
                    uVar36 = 0;
                    if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                      uVar36 = uVar31;
                    }
                    if ((uVar36 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      uVar12 = (*pcVar8)();
                      return (bool)uVar12;
                    }
                    uVar36 = 0;
                    if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                      uVar36 = uVar31;
                    }
                    if ((uVar36 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      uVar12 = (*pcVar8)();
                      return (bool)uVar12;
                    }
                    uVar36 = 0;
                    if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                      uVar36 = uVar31;
                    }
                    if ((uVar36 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      uVar12 = (*pcVar8)();
                      return (bool)uVar12;
                    }
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                    if (4 < (byte)LogContentStreaming._0_1_) {
                      uVar36 = 0;
                      if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                        uVar36 = uVar31;
                      }
                      if ((uVar36 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        uVar12 = (*pcVar8)();
                        return (bool)uVar12;
                      }
                      uVar37 = ~local_220;
                      uVar36 = 0;
                      if ((int)local_220 < *(int *)(lVar20 + 0x20)) {
                        uVar36 = uVar37 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        uVar12 = (*pcVar8)();
                        return (bool)uVar12;
                      }
                      uVar36 = 0;
                      if ((int)local_220 < *(int *)(lVar20 + 0x20)) {
                        uVar36 = uVar37 >> 0x1f;
                      }
                      if ((uVar36 == 0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar11)) {
                        pcVar8 = (code *)swi(3);
                        uVar12 = (*pcVar8)();
                        return (bool)uVar12;
                      }
                      UE::Logging::Private::BasicLog<5>
                                (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                      goto LAB_1487a8330;
                    }
                  }
                }
                else if (4 < (byte)LogContentStreaming._0_1_) {
                  uVar31 = ~uVar37 >> 0x1f;
                  uVar36 = 0;
                  if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                    uVar36 = uVar31;
                  }
                  if ((uVar36 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    uVar12 = (*pcVar8)();
                    return (bool)uVar12;
                  }
                  uVar36 = 0;
                  if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                    uVar36 = uVar31;
                  }
                  if ((uVar36 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    uVar12 = (*pcVar8)();
                    return (bool)uVar12;
                  }
                  uVar36 = 0;
                  if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                    uVar36 = uVar31;
                  }
                  if ((uVar36 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    uVar12 = (*pcVar8)();
                    return (bool)uVar12;
                  }
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                  if (4 < (byte)LogContentStreaming._0_1_) {
                    uVar36 = 0;
                    if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                      uVar36 = uVar31;
                    }
                    if ((uVar36 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      uVar12 = (*pcVar8)();
                      return (bool)uVar12;
                    }
                    uVar37 = ~local_220;
                    uVar36 = 0;
                    if ((int)local_220 < *(int *)(lVar20 + 0x20)) {
                      uVar36 = uVar37 >> 0x1f;
                    }
                    if ((uVar36 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      uVar12 = (*pcVar8)();
                      return (bool)uVar12;
                    }
                    uVar36 = 0;
                    if ((int)local_220 < *(int *)(lVar20 + 0x20)) {
                      uVar36 = uVar37 >> 0x1f;
                    }
                    if ((uVar36 == 0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar11)) {
                      pcVar8 = (code *)swi(3);
                      uVar12 = (*pcVar8)();
                      return (bool)uVar12;
                    }
                    UE::Logging::Private::BasicLog<5>
                              (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                    goto LAB_1487a8330;
                  }
                }
              }
              else if (4 < (byte)LogContentStreaming._0_1_) {
                uVar36 = 0;
                if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                  uVar36 = ~uVar37 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  uVar12 = (*pcVar8)();
                  return (bool)uVar12;
                }
                uVar36 = 0;
                if ((int)uVar37 < *(int *)(lVar20 + 0x20)) {
                  uVar36 = ~uVar37 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  uVar12 = (*pcVar8)();
                  return (bool)uVar12;
                }
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                uVar36 = local_220;
                if (4 < (byte)LogContentStreaming._0_1_) {
                  uVar31 = ~local_220;
                  uVar37 = 0;
                  if ((int)local_220 < *(int *)(lVar20 + 0x20)) {
                    uVar37 = uVar31 >> 0x1f;
                  }
                  if ((uVar37 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    uVar12 = (*pcVar8)();
                    return (bool)uVar12;
                  }
                  uVar37 = 0;
                  if ((int)uVar36 < *(int *)(lVar20 + 0x20)) {
                    uVar37 = uVar31 >> 0x1f;
                  }
                  if ((uVar37 == 0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar11)) {
                    pcVar8 = (code *)swi(3);
                    uVar12 = (*pcVar8)();
                    return (bool)uVar12;
                  }
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                  goto LAB_1487a8330;
                }
              }
            }
            uVar37 = 0;
            uVar31 = 0;
            local_200.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_200.Data.ArrayNum = 0;
            local_200.Data.ArrayMax = 0;
            pUVar29 = local_1a0;
            uVar36 = uVar37;
            if ((local_1e8->Settings).bUseAllMips == false) {
              if ((pFVar27->LODGroup == 0x10) && (GUITextureLODBias != 0)) {
                ::FString::PrintfImpl(&local_140,L" [UI:%d]");
                uVar36 = uVar31;
                if (local_140.Data.ArrayNum != 0) {
                  uVar36 = local_140.Data.ArrayNum - 1;
                }
                ::FString::AppendChars
                          (&local_200,(wchar_t *)local_140.Data.AllocatorInstance.Data,uVar36);
                uVar36 = GUITextureLODBias;
                if (local_140.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_140.Data.AllocatorInstance.Data);
                  uVar36 = GUITextureLODBias;
                }
              }
              this_03 = UDeviceProfileManager::Get(false);
              this_04 = UDeviceProfileManager::GetActiveProfile(this_03);
              pUVar23 = UDeviceProfile::GetTextureLODSettings(this_04);
              uVar34 = pFVar27->LODGroup;
              uVar32 = uVar31;
              if ((int)uVar34 < (pUVar23->TextureLODGroups).ArrayNum) {
                uVar32 = ~uVar34 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                uVar12 = (*pcVar8)();
                return (bool)uVar12;
              }
              pUVar28 = local_1f0;
              pFVar7 = (pUVar23->TextureLODGroups).AllocatorInstance.Data;
              if ((local_1f0 == (UStreamableRenderAsset *)0x0) ||
                 (cVar13 = (**(code **)(local_1f0->_padding_ + 0x348))(local_1f0), cVar13 == '\0'))
              {
                iVar15 = *(int *)(pFVar7 + (longlong)(int)uVar34 * 0x60 + 8);
              }
              else {
                iVar15 = *(int *)(pFVar7 + (longlong)(int)uVar34 * 0x60 + 0x14);
              }
              if (iVar15 != 0) {
                ::FString::PrintfImpl(&local_130,L" [LODGroup.Bias:0(%d)]");
                uVar32 = uVar31;
                if (local_130.Data.ArrayNum != 0) {
                  uVar32 = local_130.Data.ArrayNum - 1;
                }
                ::FString::AppendChars
                          (&local_200,(wchar_t *)local_130.Data.AllocatorInstance.Data,uVar32);
                if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_130.Data.AllocatorInstance.Data);
                }
              }
              pUVar29 = local_1a0;
              uVar32 = uVar31;
              if (pFVar27->LODGroup == 0x10) {
                uVar32 = GUITextureLODBias;
              }
              iVar15 = (((local_208 - uVar32) - *(int *)(pFVar7 + (longlong)(int)uVar34 * 0x60 + 4))
                       - local_1a0->NumCinematicMipLevels) + -1;
              if (0 < iVar15) {
                ::FString::PrintfImpl(&local_120,L" [LODGroup.MaxRes:%d]");
                uVar34 = uVar31;
                if (local_120.Data.ArrayNum != 0) {
                  uVar34 = local_120.Data.ArrayNum - 1;
                }
                ::FString::AppendChars
                          (&local_200,(wchar_t *)local_120.Data.AllocatorInstance.Data,uVar34);
                if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_120.Data.AllocatorInstance.Data);
                }
                uVar36 = uVar36 + iVar15;
              }
              if ((pUVar28 != (UStreamableRenderAsset *)0x0) &&
                 (*(int *)((longlong)&pUVar28[1]._padding_ + 4) != 0)) {
                ::FString::PrintfImpl(&local_110,L" [Asset.Bias:0(%d)]");
                uVar34 = uVar31;
                if (local_110.Data.ArrayNum != 0) {
                  uVar34 = local_110.Data.ArrayNum - 1;
                }
                ::FString::AppendChars
                          (&local_200,(wchar_t *)local_110.Data.AllocatorInstance.Data,uVar34);
                if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_110.Data.AllocatorInstance.Data);
                }
              }
              if ((pUVar29->NumCinematicMipLevels != LRHM_DoNothing) &&
                 ((pFVar27->bForceFullyLoad == '\0' ||
                  ((*(longlong *)&pUVar29->field_0xd0 & 0x40) == 0)))) {
                ::FString::PrintfImpl(&local_100,L" [Asset.Cine:%d]");
                uVar34 = uVar31;
                if (local_100.Data.ArrayNum != 0) {
                  uVar34 = local_100.Data.ArrayNum - 1;
                }
                ::FString::AppendChars
                          (&local_200,(wchar_t *)local_100.Data.AllocatorInstance.Data,uVar34);
                if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_100.Data.AllocatorInstance.Data);
                }
                uVar36 = uVar36 + pUVar29->NumCinematicMipLevels;
              }
            }
            pFVar10 = local_1e8;
            uVar34 = local_208;
            uVar32 = local_208 -
                     (byte)((TDelegate<void___cdecl(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_const_&),FDefaultDelegateUserPolicy>
                             *)&pUVar29->CachedSRRState)->field_0x2;
            if ((pFVar27->OptionalMipsState != OMS_HasOptionalMips) && (0 < (int)(uVar32 - uVar36)))
            {
              ::FString::PrintfImpl(&local_f0,L" [Asset.Opt:%d]");
              uVar36 = uVar31;
              if (local_f0.Data.ArrayNum != 0) {
                uVar36 = local_f0.Data.ArrayNum - 1;
              }
              ::FString::AppendChars
                        (&local_200,(wchar_t *)local_f0.Data.AllocatorInstance.Data,uVar36);
              uVar36 = uVar32;
              if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              }
            }
            if (0 < (int)((uVar34 - GRHIGlobals.MaxTextureMipCount) - uVar36)) {
              ::FString::PrintfImpl(&local_e0,L" [RHI.MaxRes:%d]");
              uVar36 = uVar31;
              if (local_e0.Data.ArrayNum != 0) {
                uVar36 = local_e0.Data.ArrayNum - 1;
              }
              ::FString::AppendChars
                        (&local_200,(wchar_t *)local_e0.Data.AllocatorInstance.Data,uVar36);
              if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0.Data.AllocatorInstance.Data);
              }
            }
            if ((((pFVar27->RenderAssetType != Texture) || (pFVar27->LODGroup != 0x1d)) &&
                (pFVar27->bIsTerrainTexture == '\0')) &&
               (((pFVar27->bIgnoreStreamingMipBias != '\x01' ||
                  pFVar27->bForceFullyLoadHeuristic != '\x01' &&
                 ((pFVar10->Settings).bUsePerTextureBias == false)) &&
                ((pFVar10->Settings).GlobalMipBias != 0)))) {
              ::FString::PrintfImpl(&local_d0,L" [Global:%d]");
              uVar36 = uVar31;
              if (local_d0.Data.ArrayNum != 0) {
                uVar36 = local_d0.Data.ArrayNum - 1;
              }
              ::FString::AppendChars
                        (&local_200,(wchar_t *)local_d0.Data.AllocatorInstance.Data,uVar36);
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
            }
            if (pFVar27->BudgetMipBias != 0) {
              ::FString::PrintfImpl(&local_c0,L" [Budget:%d]");
              uVar36 = uVar31;
              if (local_c0.Data.ArrayNum != 0) {
                uVar36 = local_c0.Data.ArrayNum - 1;
              }
              ::FString::AppendChars
                        (&local_200,(wchar_t *)local_c0.Data.AllocatorInstance.Data,uVar36);
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
            }
            if (4 < (byte)LogContentStreaming._0_1_) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
            }
            if ((local_168 != (UWorld *)0x0) && (4 < (byte)LogContentStreaming._0_1_)) {
              UE::Logging::Private::BasicLog<5>
                        (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
            }
            this_02 = local_160;
            iVar15 = (local_160->ViewInfos).ArrayNum;
            if (0 < iVar15) {
              do {
                uVar36 = uVar31;
                if ((int)uVar37 < iVar15) {
                  uVar36 = ~uVar37 >> 0x1f;
                }
                if ((uVar36 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  uVar12 = (*pcVar8)();
                  return (bool)uVar12;
                }
                if (4 < (byte)LogContentStreaming._0_1_) {
                  ::FString::PrintfImpl(&local_b0,L"X=%3.3f Y=%3.3f Z=%3.3f");
                  UE::Logging::Private::BasicLog<5>
                            (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
                  }
                }
                iVar15 = (this_02->ViewInfos).ArrayNum;
                uVar37 = uVar37 + 1;
              } while ((int)uVar37 < iVar15);
            }
            FAsyncRenderAssetStreamingData::UpdatePerfectWantedMips_Async
                      (this_02,pFVar27,(FRenderAssetStreamingSettings *)pUVar9,true);
            if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_200.Data.AllocatorInstance.Data);
            }
            lVar20 = local_1c8;
            uVar36 = local_204;
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
              lVar20 = local_1c8;
              uVar36 = local_204;
            }
          }
        }
        else if (local_1b0.Data.ArrayNum == 0) {
          FVar25.Data = (FScriptContainerElement *)L"";
LAB_1487a77cf:
          sVar17 = wcslen((wchar_t *)FVar25.Data);
          iVar15 = ::FString::Find(&local_188,(wchar_t *)FVar25.Data,(int)sVar17,IgnoreCase,
                                   FromStart,-1);
          if (iVar15 != -1) goto LAB_1487a7802;
        }
        else {
          FVar25.Data = local_1b0.Data.AllocatorInstance.Data;
          if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_1487a77cf;
        }
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        local_204 = uVar36 + 1;
        local_1c8 = lVar20 + 4;
        lpCriticalSection_00 = local_150;
        pTVar35 = local_158;
      } while ((int)local_204 < local_210);
    }
    if (local_218.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_218.Data);
    }
    if ((bool)FVar38) {
      LeaveCriticalSection((LPCRITICAL_SECTION)local_148);
    }
  }
  if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection(lpCriticalSection_00);
  return true;
}

// HandleLODGroupsCommand @ 1487a8ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRenderAssetStreamingManager::HandleLODGroupsCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  UTexture *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  EInternalObjectFlags EVar5;
  int iVar6;
  uint uVar7;
  UClass *pUVar8;
  ulonglong uVar9;
  longlong *plVar10;
  FTextureResource *pFVar11;
  FStreamingRenderAsset *this_01;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStackY_12d8 [32];
  TObjectIterator<UTexture> local_1270;
  ulonglong local_1258;
  ulonglong local_1250;
  ulonglong local_1248;
  ulonglong local_1240;
  int local_1238 [2];
  longlong local_1230 [3];
  longlong local_1218 [2];
  longlong local_1208 [568];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_12d8;
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = this->ProcessingStage;
  while (iVar6 != 0) {
    UpdateResourceStreaming(this,0.0,false);
    iVar6 = this->ProcessingStage;
  }
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
  FAsyncTaskBase::EnsureCompletion
            ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
  CheckUserSettings(this);
  ProcessRemovedRenderAssets(this);
  ProcessAddedRenderAssets(this);
  FRenderAssetStreamingSettings::Update(&this->Settings);
  ConditionalUpdateStaticData(this);
  IncrementalUpdate(this,__real_3f800000,false);
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    ProcessLevelsToReferenceToStreamedTextures(this);
  }
  lVar12 = 0x52;
  plVar10 = local_1230 + 1;
  uVar13 = 0;
  do {
    *(undefined4 *)(plVar10 + -2) = 0;
    plVar10[-1] = 0;
    *plVar10 = 0;
    plVar10[1] = 0;
    *(undefined4 *)(plVar10 + 2) = 0;
    plVar10[3] = 0;
    *(undefined4 *)(plVar10 + 4) = 0;
    plVar10 = plVar10 + 7;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  local_1270.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1270.ObjectArray.ArrayNum = 0;
  local_1270.ObjectArray.ArrayMax = 0;
  local_1270.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar8 = Z_Construct_UClass_UTexture_NoRegister();
  GetObjectsOfClass(pUVar8,&local_1270.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  TObjectIterator<UTexture>::Advance(&local_1270);
  do {
    while( true ) {
      while( true ) {
        lVar12 = (longlong)local_1270.Index;
        if ((local_1270.Index < 0) || (local_1270.ObjectArray.ArrayNum <= local_1270.Index)) {
          if (local_1270.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1270.ObjectArray.AllocatorInstance.Data);
          }
          if (4 < (byte)LogContentStreaming._0_1_) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
          }
          plVar10 = local_1218;
          uVar9 = uVar13;
          uVar14 = uVar13;
          uVar15 = uVar13;
          uVar16 = uVar13;
          bVar4 = LogContentStreaming._0_1_;
          do {
            if ((((int)plVar10[-4] != 0) || ((int)*plVar10 != 0)) || ((int)plVar10[2] != 0)) {
              local_1240 = uVar15 + plVar10[-3];
              local_1248 = uVar14 + plVar10[-2];
              local_1250 = uVar9 + plVar10[-1];
              local_1258 = uVar13 + plVar10[1];
              uVar13 = local_1258;
              uVar9 = local_1250;
              uVar14 = local_1248;
              uVar15 = local_1240;
              if (4 < bVar4) {
                UTexture::GetTextureGroupString((TextureGroup)uVar16);
                UE::Logging::Private::BasicLog<5>
                          (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
                uVar13 = local_1258;
                uVar9 = local_1250;
                uVar14 = local_1248;
                uVar15 = local_1240;
                bVar4 = LogContentStreaming._0_1_;
              }
            }
            uVar7 = (TextureGroup)uVar16 + TEXTUREGROUP_WorldNormalMap;
            uVar16 = (ulonglong)uVar7;
            plVar10 = plVar10 + 7;
          } while ((int)uVar7 < 0x52);
          if (4 < bVar4) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
          return true;
        }
        uVar7 = 0;
        if (local_1270.Index < local_1270.ObjectArray.ArrayNum) {
          uVar7 = (uint)~local_1270.Index >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        this_00 = *(UTexture **)(local_1270.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
        if ((this_00 == (UTexture *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Texture",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                               ,0xad7,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
        uVar9 = (ulonglong)(this_00->LODGroup).Value;
        lVar12 = (**(code **)(this_00->_padding_ + 0x358))(this_00);
        if ((lVar12 == 0) ||
           (plVar10 = (longlong *)(**(code **)(this_00->_padding_ + 0x358))(this_00), *plVar10 == 0)
           ) {
          pFVar11 = UTexture::GetResource(this_00);
          if ((pFVar11 != (FTextureResource *)0x0) &&
             (pFVar11 = UTexture::GetResource(this_00), pFVar11->_padding_ != 0)) {
            pFVar11 = UTexture::GetResource(this_00);
            (**(code **)(*(longlong *)pFVar11->_padding_ + 0x20))();
          }
        }
        else {
          (**(code **)(this_00->_padding_ + 0x358))(this_00);
        }
        pFVar11 = UTexture::GetResource(this_00);
        if (pFVar11 != (FTextureResource *)0x0) break;
        *(int *)(local_1208 + uVar9 * 7) = (int)local_1208[uVar9 * 7] + 1;
        TObjectIterator<UTexture>::Advance(&local_1270);
      }
      if ((int)this_00->_padding_ != -1) break;
      *(int *)(local_1218 + uVar9 * 7) = (int)local_1218[uVar9 * 7] + 1;
      uVar7 = (**(code **)(this_00->_padding_ + 0x3b0))(this_00,0);
      local_1208[uVar9 * 7 + -1] = local_1208[uVar9 * 7 + -1] + (ulonglong)uVar7;
LAB_1487a8e47:
      TObjectIterator<UTexture>::Advance(&local_1270);
    }
    this_01 = GetStreamingRenderAsset(this,(UStreamableRenderAsset *)this_00);
    if (this_01 == (FStreamingRenderAsset *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3236546578122541811>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                         ,0xaf3,"StreamingTexture");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      goto LAB_1487a8e47;
    }
    local_1238[uVar9 * 0xe] = local_1238[uVar9 * 0xe] + 1;
    iVar6 = FStreamingRenderAsset::GetSize(this_01,(int)this_01->ResidentMips);
    local_1230[uVar9 * 7] = local_1230[uVar9 * 7] + (longlong)iVar6;
    iVar6 = FStreamingRenderAsset::GetSize(this_01,(int)this_01->WantedMips);
    local_1230[uVar9 * 7 + 1] = local_1230[uVar9 * 7 + 1] + (longlong)iVar6;
    iVar6 = FStreamingRenderAsset::GetSize(this_01,(int)this_01->MaxAllowedMips);
    local_1218[uVar9 * 7 + -1] = local_1218[uVar9 * 7 + -1] + (longlong)iVar6;
    TObjectIterator<UTexture>::Advance(&local_1270);
  } while( true );
}

// HandleLightmapStreamingFactorCommand @ 1487a91e0

bool __thiscall
FRenderAssetStreamingManager::HandleLightmapStreamingFactorCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ForAnyElementType _Str;
  double dVar2;
  float fVar3;
  wchar_t *local_res10 [3];
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FParse::Token(&local_18,local_res10,false);
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  fVar3 = GLightmapStreamingFactor;
  if (0 < iVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    dVar2 = _wtof((wchar_t *)_Str.Data);
    fVar3 = (float)dVar2;
  }
  if (0.0 <= fVar3) {
    GLightmapStreamingFactor = fVar3;
  }
  FOutputDevice::LogfImpl
            (param_2,
             L"Lightmap streaming factor: %.3f (lower values makes streaming more aggressive).");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// HandleListStreamingRenderAssetsCommand @ 1487a92c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRenderAssetStreamingManager::HandleListStreamingRenderAssetsCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  float fVar1;
  FScriptContainerElement FVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 uVar12;
  DWORD DVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  UClass *pUVar18;
  longlong *plVar19;
  longlong lVar20;
  ForAnyElementType FVar21;
  ulonglong uVar22;
  wchar_t *pwVar23;
  ulonglong uVar24;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar25;
  UObjectBaseUtility *pUVar26;
  uint uVar27;
  ulonglong uVar28;
  uint uVar29;
  ForElementType<unsigned_int> FVar30;
  longlong lVar31;
  undefined1 auStackY_318 [32];
  FIdentityFunctor local_2c8 [4];
  uint local_2c4;
  undefined8 local_2c0;
  uint local_2b8;
  int local_2b4;
  int local_2b0;
  FString local_2a8;
  uint local_298;
  uint uStack_294;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_290;
  undefined4 local_288;
  undefined8 uStack_284;
  undefined4 uStack_27c;
  UObjectBaseUtility *local_278;
  UObjectBaseUtility *local_270;
  wchar_t *local_268;
  longlong *local_260;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_258;
  longlong local_238;
  UObjectBaseUtility **local_230;
  UObjectBaseUtility **local_228;
  UObjectBaseUtility **local_220;
  longlong *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  FIdentityFunctor **local_1f0;
  UObjectBaseUtility *local_1e8;
  FRenderAssetStreamingManager *local_1e0;
  LPCRITICAL_SECTION local_1d8;
  FString local_1d0;
  FString local_1c0;
  TPairInitializer<FString_&&,int_const_&> local_1b0;
  FIdentityFunctor *local_1a0;
  longlong *local_198;
  undefined4 uStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  undefined4 uStack_174;
  FString *local_168;
  uint *local_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8 [2];
  undefined4 local_bc;
  undefined1 local_b8 [32];
  ForElementType<unsigned_int> local_98;
  uint local_90;
  int local_8c;
  int local_88;
  int local_84;
  undefined1 local_80 [8];
  ForAnyElementType local_78;
  uint local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_318;
  uVar24 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_2c0 = local_2c0 & 0xffffffff00000000;
  local_268 = param_1;
  local_1e0 = this;
  local_1d8 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pFVar3 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if ((pFVar3 != (FBaseGraphTask *)0x0) &&
     (DVar13 = GetCurrentThreadId(), DVar13 != *(DWORD *)&pFVar3->field_0x48)) {
    FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
  }
  iVar14 = this->ProcessingStage;
  while (iVar14 != 0) {
    UpdateResourceStreaming(this,0.0,false);
    iVar14 = this->ProcessingStage;
  }
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
  FAsyncTaskBase::EnsureCompletion
            ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
  CheckUserSettings(this);
  ProcessRemovedRenderAssets(this);
  ProcessAddedRenderAssets(this);
  FRenderAssetStreamingSettings::Update(&this->Settings);
  ConditionalUpdateStaticData(this);
  IncrementalUpdate(this,__real_3f800000,false);
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    ProcessLevelsToReferenceToStreamedTextures(this);
  }
  bVar10 = FParse::Command(&local_268,L"UNKOWNREF",true);
  local_2c4 = (uint)pFVar3 & 0xffffff00;
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  bVar11 = FParse::Value(local_268,L"AssetType=",&local_2a8,true,(wchar_t **)0x0);
  if (bVar11) {
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_2a8.Data.ArrayNum != 0) {
      FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
    }
    iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"Texture");
    if (iVar14 == 0) {
      local_2c4 = 1;
    }
    else {
      FVar21.Data = (FScriptContainerElement *)L"";
      if (local_2a8.Data.ArrayNum != 0) {
        FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
      }
      iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"StaticMesh");
      if (iVar14 == 0) {
        local_2c4 = 2;
      }
      else {
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_2a8.Data.ArrayNum != 0) {
          FVar21.Data = local_2a8.Data.AllocatorInstance.Data;
        }
        iVar14 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar21.Data,L"SkeletalMesh");
        local_2c4 = 0;
        if (iVar14 == 0) {
          local_2c4 = 3;
        }
      }
    }
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  iVar14 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  local_b8._8_4_ = 0;
  local_84 = 0;
  local_b8._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  local_b8._12_4_ = 0;
  local_98 = (ForElementType<unsigned_int>)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = -1;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_2b8 = 0;
  uVar28 = uVar24;
  if (0 < iVar14) {
    do {
      uVar29 = (uint)uVar28;
      uVar16 = 0;
      if ((int)uVar29 < iVar14) {
        uVar16 = ~uVar29 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return (bool)uVar12;
      }
      pFVar4 = (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
      pUVar26 = *(UObjectBaseUtility **)(pFVar4 + (longlong)(int)uVar29 * 0xb8);
      if ((pUVar26 != (UObjectBaseUtility *)0x0) &&
         ((!bVar10 || ((char)pFVar4[(longlong)(int)uVar29 * 0xb8 + 0x96] < '\0')))) {
        local_168 = UObjectBaseUtility::GetFullName(pUVar26,&local_108,(UObject *)0x0,None);
        local_160 = &local_2b8;
        TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<FString_&&,int_const_&>_>
                  ((TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
                    *)local_b8,&local_1b0,(bool *)&local_168);
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      iVar14 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
      local_2b8 = local_2b8 + 1;
      uVar28 = (ulonglong)local_2b8;
    } while ((int)local_2b8 < iVar14);
    uVar28 = (ulonglong)local_90;
  }
  local_1a0 = local_2c8;
  local_1f0 = &local_1a0;
  uVar16 = (uint)uVar28;
  if (0 < local_b8._8_4_ - local_84) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_b8);
    uVar9 = local_b8._0_8_;
    iVar14 = local_b8._8_4_ - local_84;
    if ((iVar14 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar12 = (*pcVar5)();
      return (bool)uVar12;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FKeyComparisonClass<TLess<FString>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar9,iVar14,local_2c8[0],
               (FElementCompareClass<TSortableMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>::FKeyComparisonClass<TLess<FString>_>_>
                *)&local_1f0);
    uVar16 = local_90;
  }
  uVar29 = local_70;
  uVar28 = (ulonglong)local_70;
  if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,0,4);
    uVar16 = local_90;
  }
  if (uVar29 == 0) goto LAB_1487a9742;
  uVar15 = uVar29;
  if (uVar29 < 2) {
    if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
      uVar15 = 0;
      goto LAB_1487a96e8;
    }
  }
  else {
LAB_1487a96e8:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_78,0,uVar15,4);
    uVar16 = local_90;
  }
  if (0 < (int)uVar29) {
    uVar22 = uVar24;
    do {
      FVar21.Data = (FScriptContainerElement *)local_80;
      if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
        FVar21.Data = local_78.Data;
      }
      uVar17 = (longlong)(int)uVar29 - 1U & uVar22;
      uVar22 = uVar22 + 1;
      *(undefined4 *)((longlong)FVar21.Data + uVar17 * 4) = 0xffffffff;
      uVar28 = uVar28 - 1;
      uVar16 = local_90;
    } while (uVar28 != 0);
  }
LAB_1487a9742:
  uVar29 = 0;
  if (local_70 != 0) {
    uStack_294 = 1;
    local_298 = 0;
    pTStack_290 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
    uStack_284 = 0;
    if (uVar16 != 0) {
      FVar30 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
      if (local_98 != (ForElementType<unsigned_int>)0x0) {
        FVar30 = local_98;
      }
      uVar15 = *(uint *)FVar30;
      uVar28 = uVar24;
      uVar22 = uVar24;
      uVar27 = uVar29;
      while (uVar15 == 0) {
        uVar27 = (int)uVar22 + 0x20;
        uVar22 = (ulonglong)uVar27;
        iVar14 = (int)uVar28;
        local_298 = iVar14 + 1;
        uVar28 = (ulonglong)local_298;
        uStack_284 = (ulonglong)uVar27 << 0x20;
        if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_298) {
          uStack_284 = CONCAT44(uVar27,uVar16);
          goto LAB_1487a9801;
        }
        uVar15 = ((uint *)((longlong)FVar30 + 4))[iVar14];
      }
      uStack_294 = ~(uVar15 - 1) & uVar15;
      uVar28 = (ulonglong)uStack_294 * 2 + 1;
      lVar31 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar31 == 0; lVar31 = lVar31 + -1) {
        }
      }
      local_1b0.Key._4_4_ = (int)lVar31;
      uVar15 = (uVar27 - 1) + local_1b0.Key._4_4_;
      if ((int)uVar16 < (int)uVar15) {
        uVar15 = uVar16;
      }
      uStack_284._4_4_ = (int)((ulonglong)uStack_284 >> 0x20);
      uStack_284 = CONCAT44(uStack_284._4_4_,uVar15);
    }
LAB_1487a9801:
    local_288 = 0xffffffff;
    local_218 = (longlong *)local_b8;
    local_210._padding_ = CONCAT44(uStack_294,local_298);
    local_210.UnvisitedBitMask = 0xffffffff;
    local_210.CurrentBitIndex = (int)uStack_284;
    local_210.BaseBitIndex = uStack_284._4_4_;
    local_210._28_4_ = uStack_27c;
    local_210.Array = pTStack_290;
    if ((int)uStack_284 < (int)uVar16) {
      do {
        iVar8 = local_210.CurrentBitIndex;
        lVar31 = *local_218;
        lVar25 = (longlong)local_210.CurrentBitIndex * 0x20;
        iVar14 = *(int *)(lVar25 + 8 + lVar31);
        if (iVar14 == 0) {
          pwVar23 = L"";
          uVar16 = uVar29;
        }
        else {
          pwVar23 = *(wchar_t **)(lVar25 + lVar31);
          uVar16 = iVar14 - 1;
        }
        uVar16 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar16,pwVar23);
        uVar16 = local_70 - 1 & uVar16;
        *(uint *)(lVar25 + 0x1c + lVar31) = uVar16;
        FVar21.Data = (FScriptContainerElement *)local_80;
        if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
          FVar21.Data = local_78.Data;
        }
        lVar20 = (longlong)(int)(local_70 - 1 & uVar16);
        *(undefined4 *)(lVar25 + 0x18 + lVar31) =
             *(undefined4 *)((longlong)FVar21.Data + lVar20 * 4);
        *(int *)((longlong)FVar21.Data + lVar20 * 4) = iVar8;
        local_210.UnvisitedBitMask = local_210.UnvisitedBitMask & ~local_210._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
        uVar16 = local_90;
      } while (local_210.CurrentBitIndex < (local_210.Array)->NumBits);
    }
  }
  fVar6 = __real_7f7fffff;
  uVar28 = uVar24;
  TStack_258.CurrentBitIndex = uVar29;
  uStack_18c = 1;
  if (uVar16 != 0) {
    FVar30 = (ForElementType<unsigned_int>)((longlong)local_b8 + 0x10);
    if (local_98 != (ForElementType<unsigned_int>)0x0) {
      FVar30 = local_98;
    }
    uVar22 = uVar24;
    uVar29 = 0;
    for (uVar15 = *(uint *)FVar30; uVar15 == 0;
        uVar15 = *(uint *)((longlong)FVar30 + (longlong)(int)uVar15 * 4)) {
      uVar15 = (int)uVar28 + 1;
      uVar28 = (ulonglong)uVar15;
      uVar29 = (int)uVar22 + 0x20;
      uVar22 = (ulonglong)uVar29;
      TStack_258.CurrentBitIndex = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar15)
      goto LAB_1487a9961;
    }
    uStack_18c = ~(uVar15 - 1) & uVar15;
    uVar22 = (ulonglong)uStack_18c * 2 + 1;
    lVar31 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_1b0.Value._0_4_ = (int)lVar31;
    TStack_258.CurrentBitIndex = (uVar29 - 1) + (int)local_1b0.Value;
    if ((int)uVar16 < TStack_258.CurrentBitIndex) {
      TStack_258.CurrentBitIndex = uVar16;
    }
  }
LAB_1487a9961:
  local_260 = (longlong *)local_b8;
  uStack_174 = local_bc;
  local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10);
  uStack_180 = 0xffffffff;
  uStack_190 = (undefined4)uVar28;
  TStack_258._padding_ = CONCAT44(uStack_18c,uStack_190);
  TStack_258.UnvisitedBitMask = 0xffffffff;
  TStack_258._28_4_ = local_bc;
  TStack_258.BaseBitIndex = uVar29;
  local_198 = local_260;
  uStack_17c = TStack_258.CurrentBitIndex;
  local_178 = uVar29;
  TStack_258.Array = local_188;
  if (TStack_258.CurrentBitIndex < (int)uVar16) {
    do {
      uVar16 = *(uint *)((longlong)TStack_258.CurrentBitIndex * 0x20 + 0x10 + *local_260);
      uVar29 = 0;
      if ((int)uVar16 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
        uVar29 = ~uVar16 >> 0x1f;
      }
      if (uVar29 == 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          uVar12 = (*pcVar5)();
          return (bool)uVar12;
        }
      }
      pFVar4 = (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
      lVar31 = (longlong)(int)uVar16 * 0xb8;
      pUVar26 = *(UObjectBaseUtility **)(pFVar4 + lVar31);
      FVar2 = pFVar4[lVar31 + 0x94];
      local_2c0 = *(ulonglong *)&pUVar26[5].field_0x10;
      if ((SUB41(local_2c4,0) != (FScriptContainerElement)0x0) && (SUB41(local_2c4,0) != FVar2))
      goto LAB_1487a9fc2;
      if (4 < (byte)LogContentStreaming._0_1_) {
        UObjectBaseUtility::GetFullName(pUVar26,&local_f8,(UObject *)0x0,None);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
      }
      uVar15 = (uint)local_2c0._3_1_;
      bVar7 = local_2c0._4_1_;
      uVar27 = (uint)local_2c0._3_1_;
      uVar16 = (uint)local_2c0._5_1_;
      uVar29 = (uint)local_2c0._4_1_;
      local_2c0 = CONCAT44(local_2c0._4_4_,(uVar15 - uVar16) + uVar29);
      iVar14 = (int)(char)pFVar4[lVar31 + 0x90];
      if ((int)(char)pFVar4[lVar31 + 0x90] < (int)(char)pFVar4[lVar31 + 0x8f]) {
        iVar14 = (int)(char)pFVar4[lVar31 + 0x8f];
      }
      local_2b0 = (uVar15 - iVar14) + uVar29;
      local_2b4 = (uVar27 - (int)(char)pFVar4[lVar31 + 0x8d]) + (uint)bVar7;
      if (pUVar26 == (UObjectBaseUtility *)0x0) {
LAB_1487a9c0e:
        plVar19 = (longlong *)0x0;
      }
      else {
        pUVar18 = Z_Construct_UClass_UTexture_NoRegister();
        iVar14 = (int)pUVar18->_padding_;
        if ((*(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38) < iVar14) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
            &pUVar18->_padding_)) goto LAB_1487a9c0e;
        pUVar18 = Z_Construct_UClass_UTexture_NoRegister();
        iVar14 = (int)pUVar18->_padding_;
        if ((*(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38) < iVar14) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
            &pUVar18->_padding_)) {
          plVar19 = (longlong *)(**(code **)(_DAT_00000000 + 0x358))();
        }
        else {
          plVar19 = (longlong *)(**(code **)(*(longlong *)pUVar26 + 0x358))();
        }
      }
      if (((FVar2 == (FScriptContainerElement)0x1) && (plVar19 != (longlong *)0x0)) &&
         (*plVar19 != 0)) {
        if (pUVar26 == (UObjectBaseUtility *)0x0) {
LAB_1487a9c5b:
          local_278 = (UObjectBaseUtility *)0x0;
          if (pUVar26 != (UObjectBaseUtility *)0x0) goto LAB_1487a9c68;
LAB_1487a9c91:
          local_270 = (UObjectBaseUtility *)0x0;
          if (pUVar26 != (UObjectBaseUtility *)0x0) goto LAB_1487a9c9e;
LAB_1487a9cc1:
          pUVar26 = (UObjectBaseUtility *)0x0;
        }
        else {
          pUVar18 = Z_Construct_UClass_UTexture2D_NoRegister();
          iVar14 = (int)pUVar18->_padding_;
          if ((*(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38) < iVar14) ||
             (local_278 = pUVar26,
             (longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
             &pUVar18->_padding_)) goto LAB_1487a9c5b;
LAB_1487a9c68:
          pUVar18 = Z_Construct_UClass_UVolumeTexture_NoRegister();
          iVar14 = (int)pUVar18->_padding_;
          if ((*(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38) < iVar14) ||
             (local_270 = pUVar26,
             (longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
             &pUVar18->_padding_)) goto LAB_1487a9c91;
LAB_1487a9c9e:
          pUVar18 = Z_Construct_UClass_UTexture2DArray_NoRegister();
          iVar14 = (int)pUVar18->_padding_;
          if ((*(int *)(*(longlong *)&pUVar26->field_0x10 + 0x38) < iVar14) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar26->field_0x10 + 0x30) + (longlong)iVar14 * 8) !=
              &pUVar18->_padding_)) goto LAB_1487a9cc1;
        }
        local_238 = *plVar19 + 0x18;
        local_230 = &local_278;
        local_228 = &local_270;
        local_220 = &local_1e8;
        local_1e8 = pUVar26;
        if (fVar6 == *(float *)(pFVar4 + lVar31 + 100)) {
          if (4 < (byte)LogContentStreaming._0_1_) {
            UTexture::GetTextureGroupString(*(TextureGroup *)(pFVar4 + lVar31 + 0x1c));
            `FRenderAssetStreamingManager::HandleListStreamingRenderAssetsCommand'::__l49::
            <lambda_1>::operator()(&local_238,&local_118,local_2b4);
            `FRenderAssetStreamingManager::HandleListStreamingRenderAssetsCommand'::__l49::
            <lambda_1>::operator()(&local_238,&local_128,local_2b0);
            `FRenderAssetStreamingManager::HandleListStreamingRenderAssetsCommand'::__l49::
            <lambda_1>::operator()(&local_238,&local_138,(int)local_2c0);
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
            if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_138.Data.AllocatorInstance.Data);
            }
            FVar21.Data = local_118.Data.AllocatorInstance.Data;
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
              FVar21.Data = local_118.Data.AllocatorInstance.Data;
            }
            goto LAB_1487a9fb8;
          }
        }
        else if (4 < (byte)LogContentStreaming._0_1_) {
          UTexture::GetTextureGroupString(*(TextureGroup *)(pFVar4 + lVar31 + 0x1c));
          `FRenderAssetStreamingManager::HandleListStreamingRenderAssetsCommand'::__l49::<lambda_1>
          ::operator()(&local_238,&local_148,local_2b4);
          `FRenderAssetStreamingManager::HandleListStreamingRenderAssetsCommand'::__l49::<lambda_1>
          ::operator()(&local_238,&local_158,local_2b0);
          `FRenderAssetStreamingManager::HandleListStreamingRenderAssetsCommand'::__l49::<lambda_1>
          ::operator()(&local_238,local_e8,(int)local_2c0);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
          if (local_e8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8[0].Data.AllocatorInstance.Data);
          }
          FVar21.Data = local_148.Data.AllocatorInstance.Data;
          if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_158.Data.AllocatorInstance.Data);
            FVar21.Data = local_148.Data.AllocatorInstance.Data;
          }
          goto LAB_1487a9fb8;
        }
      }
      else {
        fVar1 = *(float *)(pFVar4 + lVar31 + 100);
        if (pUVar26 != (UObjectBaseUtility *)0x0) {
          Z_Construct_UClass_UStaticMesh_NoRegister();
        }
        ::FString::FString(&local_1c0,L"Unknown");
        FVar21.Data = local_1c0.Data.AllocatorInstance.Data;
        if (4 < (byte)LogContentStreaming._0_1_) {
          if (fVar1 != fVar6) {
            uVar24 = 1;
            ::FString::PrintfImpl(&local_1d0,L"%.3f");
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
          FVar21.Data = local_1c0.Data.AllocatorInstance.Data;
          if ((uVar24 != 0) &&
             (uVar24 = 0, local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
          {
            FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
            FVar21.Data = local_1c0.Data.AllocatorInstance.Data;
          }
        }
LAB_1487a9fb8:
        if (FVar21.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar21.Data);
        }
      }
LAB_1487a9fc2:
      TStack_258.UnvisitedBitMask = TStack_258.UnvisitedBitMask & ~TStack_258._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_258);
      lpCriticalSection = local_1d8;
      this = local_1e0;
    } while (TStack_258.CurrentBitIndex < (TStack_258.Array)->NumBits);
  }
  local_70 = 0;
  if ((ForElementType<FSetElementId>)local_78.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_78.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_b8);
  LeaveCriticalSection(lpCriticalSection);
  return true;
}

// HandleListTrackedRenderAssetsCommand @ 1487aa080

bool __thiscall
FRenderAssetStreamingManager::HandleListTrackedRenderAssetsCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ForAnyElementType _Str;
  wchar_t *local_res10 [3];
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10[0] = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FParse::Token(&local_18,local_res10,false);
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    if (iVar1 < 1) {
      iVar1 = -1;
    }
    else {
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_18.Data.ArrayNum != 0) {
        _Str.Data = local_18.Data.AllocatorInstance.Data;
      }
      iVar1 = _wtoi((wchar_t *)_Str.Data);
    }
    ListTrackedRenderAssets(param_2,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleNumStreamedMipsCommand @ 1487aa7c0

bool __thiscall
FRenderAssetStreamingManager::HandleNumStreamedMipsCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  TextureGroup TVar2;
  int iVar3;
  UDeviceProfileManager *this_00;
  UDeviceProfile *this_01;
  UTextureLODSettings *this_02;
  FTextureLODGroup *pFVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  wchar_t *local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FParse::Token(&local_28,&local_res10,false);
  FParse::Token(&local_38,&local_res10,false);
  FParse::Token(&local_48,&local_res10,false);
  iVar3 = 0x7fffffff;
  iVar1 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if (iVar1 < 1) {
    TVar2 = 0x7fffffff;
  }
  else {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    TVar2 = _wtoi((wchar_t *)FVar5.Data);
  }
  iVar1 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if (0 < iVar1) {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar5.Data = local_38.Data.AllocatorInstance.Data;
    }
    iVar3 = _wtoi((wchar_t *)FVar5.Data);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"");
  if (iVar1 == 0) {
LAB_1487aa8ca:
    if (TVar2 < TEXTUREGROUP_MAX) {
      this_00 = UDeviceProfileManager::Get(false);
      this_01 = UDeviceProfileManager::GetActiveProfile(this_00);
      this_02 = UDeviceProfile::GetTextureLODSettings(this_01);
      pFVar4 = UTextureLODSettings::GetTextureLODGroup(this_02,TVar2);
      if (iVar3 + 1U < 0x11) {
        pFVar4->NumStreamedMips = iVar3;
      }
      UTexture::GetTextureGroupString(TVar2);
      FOutputDevice::LogfImpl(param_2,L"%s.NumStreamedMips = %d");
      goto LAB_1487aa979;
    }
  }
  else {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"Texture");
    if (iVar1 == 0) goto LAB_1487aa8ca;
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"StaticMesh");
  if (iVar1 == 0) {
    pwVar6 = L"NumStreamedMips command is not implemented for static mesh yet";
  }
  else {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_48.Data.ArrayNum != 0) {
      FVar5.Data = local_48.Data.AllocatorInstance.Data;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"SkeletalMesh");
    pwVar6 = L"NumStreamedMips command is not implemented for skeletal mesh yet";
    if (iVar1 != 0) {
      pwVar6 = L"Usage: NumStreamedMips LODGroupIndex <N> [Texture|StaticMesh|SkeletalMesh]";
    }
  }
  FOutputDevice::Log(param_2,pwVar6);
LAB_1487aa979:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// HandlePauseRenderAssetStreamingCommand @ 1487aa9e0

bool __thiscall
FRenderAssetStreamingManager::HandlePauseRenderAssetStreamingCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->bPauseRenderAssetStreaming = this->bPauseRenderAssetStreaming == false;
    FOutputDevice::LogfImpl(param_2,L"Render asset streaming is now \"%s\".");
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleResetMaxEverRequiredRenderAssetMemoryCommand @ 1487aaa70

bool __thiscall
FRenderAssetStreamingManager::HandleResetMaxEverRequiredRenderAssetMemoryCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FOutputDevice::LogfImpl(param_2,L"OldMax: %u MaxEverRequired Reset.");
    this->MaxEverRequired = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleShadowmapStreamingFactorCommand @ 1487aaaf0

bool __thiscall
FRenderAssetStreamingManager::HandleShadowmapStreamingFactorCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ForAnyElementType _Str;
  double dVar2;
  float fVar3;
  wchar_t *local_res10 [3];
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10[0] = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FParse::Token(&local_18,local_res10,false);
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  fVar3 = GShadowmapStreamingFactor;
  if (0 < iVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    dVar2 = _wtof((wchar_t *)_Str.Data);
    fVar3 = (float)dVar2;
  }
  if (0.0 <= fVar3) {
    GShadowmapStreamingFactor = fVar3;
  }
  FOutputDevice::LogfImpl
            (param_2,
             L"Shadowmap streaming factor: %.3f (lower values makes streaming more aggressive).");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// HandleStreamOutCommand @ 1487aabd0

bool __thiscall
FRenderAssetStreamingManager::HandleStreamOutCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  ForAnyElementType _Str;
  wchar_t *local_res10;
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FParse::Token(&local_18,&local_res10,false);
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  if (0 < iVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar1 = _wtoi((wchar_t *)_Str.Data);
    if (0 < iVar1) {
      StreamOutRenderAssetData(this,(longlong)iVar1 << 0x14);
      FOutputDevice::LogfImpl(param_2,L"Tried to stream out %llu MB of texture/mesh data: %s");
      goto LAB_1487aac94;
    }
  }
  FOutputDevice::Log(param_2,L"Usage: StreamOut <N> (in MB)");
LAB_1487aac94:
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// HandleStreamingManagerMemoryCommand @ 1487aacd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FRenderAssetStreamingManager::HandleStreamingManagerMemoryCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2,
          UWorld *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FBaseGraphTask *pFVar2;
  FRenderAssetInstanceState *pFVar3;
  code *pcVar4;
  FSimpleStreamableAssetManager *lpCriticalSection_00;
  FSimpleStreamableAssetManager *pFVar5;
  bool bVar6;
  undefined1 uVar7;
  DWORD DVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  char local_res8 [8];
  undefined1 local_48;
  undefined1 local_47 [15];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if ((pFVar2 != (FBaseGraphTask *)0x0) &&
     (DVar8 = GetCurrentThreadId(), DVar8 != *(DWORD *)&pFVar2->field_0x48)) {
    FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
  }
  iVar1 = this->ProcessingStage;
  while (iVar1 != 0) {
    UpdateResourceStreaming(this,0.0,false);
    iVar1 = this->ProcessingStage;
  }
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
  FAsyncTaskBase::EnsureCompletion
            ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
  CheckUserSettings(this);
  ProcessRemovedRenderAssets(this);
  ProcessAddedRenderAssets(this);
  FRenderAssetStreamingSettings::Update(&this->Settings);
  ConditionalUpdateStaticData(this);
  IncrementalUpdate(this,__real_3f800000,false);
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    ProcessLevelsToReferenceToStreamedTextures(this);
  }
  pFVar3 = (FRenderAssetInstanceState *)(this->DynamicComponentManager).StateSync._padding_;
  if (pFVar3 != (FRenderAssetInstanceState *)0x0) {
    FRenderAssetInstanceState::GetAllocatedSize(pFVar3);
  }
  FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this->AsyncWork);
  pFVar9 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
  iVar1 = (this->LevelRenderAssetManagers).ArrayNum;
  pFVar10 = pFVar9 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->LevelRenderAssetManagers).ArrayNum != iVar1) {
      local_res8[0] = '\0';
      `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    if ((*(longlong *)pFVar9 != 0) &&
       (pFVar3 = *(FRenderAssetInstanceState **)(*(longlong *)pFVar9 + 0x18),
       pFVar3 != (FRenderAssetInstanceState *)0x0)) {
      FRenderAssetInstanceState::GetAllocatedSize(pFVar3);
    }
    pFVar9 = pFVar9 + 8;
  }
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    if ((FSimpleStreamableAssetManager::Instance == (FSimpleStreamableAssetManager *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                           ,0x6c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return (bool)uVar7;
    }
    lpCriticalSection_00 = FSimpleStreamableAssetManager::Instance;
    local_res8[0] = FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0;
    if ((bool)local_res8[0]) {
      EnterCriticalSection((LPCRITICAL_SECTION)FSimpleStreamableAssetManager::Instance);
    }
    pFVar5 = FSimpleStreamableAssetManager::Instance;
    iVar1 = (FSimpleStreamableAssetManager::Instance->ObjectRegistrationIndexToAssetProperty).
            ArrayNum;
    pFVar10 = (FSimpleStreamableAssetManager::Instance->ObjectRegistrationIndexToAssetProperty).
              AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((pFVar5->ObjectRegistrationIndexToAssetProperty).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TArray<FSimpleStreamableAssetManager::FAssetRecord,TSizedDefaultAllocator<32>_>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_48);
      }
      if (pFVar10 == pFVar9) break;
      pFVar10 = pFVar10 + 0x10;
    }
    iVar1 = (pFVar5->AssetIndexToBounds4Index).ArrayNum;
    pFVar10 = (pFVar5->AssetIndexToBounds4Index).AllocatorInstance.Data;
    pFVar9 = pFVar10 + (longlong)iVar1 * 0x38;
    while( true ) {
      if ((pFVar5->AssetIndexToBounds4Index).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FSimpleStreamableAssetManager::TSimpleSparseArray<FSimpleStreamableAssetManager::FAssetBoundElement>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_47);
      }
      if (pFVar10 == pFVar9) break;
      pFVar10 = pFVar10 + 0x38;
    }
    if (local_res8[0] != '\0') {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    }
  }
  FOutputDevice::LogfImpl(param_2,L"StreamingManagerTexture: %.2f KB used");
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return true;
}

// HandleTrackRenderAssetCommand @ 1487ab070

bool __thiscall
FRenderAssetStreamingManager::HandleTrackRenderAssetCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  wchar_t *local_res10 [3];
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10[0] = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FParse::Token(&local_18,local_res10,false);
    bVar1 = TrackRenderAsset(&local_18);
    if (bVar1) {
      FOutputDevice::LogfImpl(param_2,L"Textures or meshes containing \"%s\" are now tracked.");
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// HandleUntrackRenderAssetCommand @ 1487ab110

bool __thiscall
FRenderAssetStreamingManager::HandleUntrackRenderAssetCommand
          (FRenderAssetStreamingManager *this,wchar_t *param_1,FOutputDevice *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  wchar_t *local_res10 [3];
  FString local_18;
  
  lpCriticalSection = &this->CriticalSection;
  local_res10[0] = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FParse::Token(&local_18,local_res10,false);
    bVar1 = UntrackRenderAsset(&local_18);
    if (bVar1) {
      FOutputDevice::LogfImpl
                (param_2,L"Textures or meshes containing \"%s\" are no longer tracked.");
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// IncrementalUpdate @ 1487acee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::IncrementalUpdate
          (FRenderAssetStreamingManager *this,float param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_private:_void___cdecl_FRenderAssetStreamingManager::IncrementalUpdate(float,bool)_::_2_::FStat_STAT_FRenderAssetStreamingManager_IncrementalUpdate>
  FVar10;
  FName FVar11;
  FScriptContainerElement *pFVar12;
  bool bVar13;
  undefined1 auStackY_188 [32];
  undefined1 local_127 [7];
  FName local_120;
  FColor_u_0 local_118 [2];
  FName local_110;
  FName local_108;
  FScopedLevelRenderAssetManagersLock local_f8;
  FName local_d0;
  FName local_c8;
  TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_c0;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId474,"FRenderAssetStreamingManager::IncrementalUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
               ,0x1da);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId474);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRenderAssetStreamingManager_IncrementalUpdate ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FRenderAssetStreamingManager::IncrementalUpdate(float,bool)_::_2_::FStat_STAT_FRenderAssetStreamingManager_IncrementalUpdate>
         )0x0) {
      pFVar9 = ::FName::FName(&local_d0,"STAT_FRenderAssetStreamingManager_IncrementalUpdate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FRenderAssetStreamingManager_IncrementalUpdate,*pFVar9,
                 L"STAT_FRenderAssetStreamingManager_IncrementalUpdate","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_FRenderAssetStreamingManager_IncrementalUpdate;
  if (StatPtr_STAT_FRenderAssetStreamingManager_IncrementalUpdate ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FRenderAssetStreamingManager::IncrementalUpdate(float,bool)_::_2_::FStat_STAT_FRenderAssetStreamingManager_IncrementalUpdate>
       )0x0) {
    pFVar9 = ::FName::FName(&local_c8,"STAT_FRenderAssetStreamingManager_IncrementalUpdate");
    FVar10 = (FThreadSafeStaticStat<_private:_void___cdecl_FRenderAssetStreamingManager::IncrementalUpdate(float,bool)_::_2_::FStat_STAT_FRenderAssetStreamingManager_IncrementalUpdate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FRenderAssetStreamingManager_IncrementalUpdate,*pFVar9,
                          L"STAT_FRenderAssetStreamingManager_IncrementalUpdate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_108.ComparisonIndex.Value = 0;
  local_108.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_118[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_118[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_110.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                   ,0x1db);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      goto LAB_1487ad0b4;
    }
  }
  bVar5 = false;
  FVar11 = local_108;
LAB_1487ad0b4:
  pTVar7 = CVarStreamingNumStaticComponentsProcessedPerFrame.Ref;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    local_c0.AllocatorInstance.SecondaryData = (ForElementType<UStreamableRenderAsset_const_*>)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0xc;
    bVar8 = IsInParallelGameThread();
    if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_120 = (FName)(longlong)pTVar7->ShadowedValue[0];
    local_f8.PendingAddLevelManagers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((longlong)local_120 < 1) {
      local_120.ComparisonIndex.Value = 0xffffffff;
      local_120.Number = 0x7fffffff;
    }
    local_f8.PendingAddLevelManagers.ArrayNum = 0;
    local_f8.PendingAddLevelManagers.ArrayMax = 0;
    local_f8.PendingRemoveLevelManagers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.PendingRemoveLevelManagers.ArrayNum = 0;
    local_f8.PendingRemoveLevelManagers.ArrayMax = 0;
    local_f8.StreamingManager = this;
    if ((this->LevelRenderAssetManagersLock != (FScopedLevelRenderAssetManagersLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!StreamingManager->LevelRenderAssetManagersLock",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                           ,0x34b,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (local_f8.StreamingManager)->LevelRenderAssetManagersLock = &local_f8;
    pFVar12 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
    iVar2 = (this->LevelRenderAssetManagers).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->LevelRenderAssetManagers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_127);
      }
      if (pFVar12 == pFVar1) break;
      if (*(FLevelRenderAssetManager **)pFVar12 != (FLevelRenderAssetManager *)0x0) {
        FLevelRenderAssetManager::IncrementalUpdate
                  (*(FLevelRenderAssetManager **)pFVar12,&this->DynamicComponentManager,&local_c0,
                   (long64 *)&local_120,param_1,this->bUseDynamicStreaming);
      }
      pFVar12 = pFVar12 + 8;
    }
    ProcessPendingLevelManagers(local_f8.StreamingManager);
    (local_f8.StreamingManager)->LevelRenderAssetManagersLock =
         (FScopedLevelRenderAssetManagersLock *)0x0;
    if (local_f8.PendingRemoveLevelManagers.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(local_f8.PendingRemoveLevelManagers.AllocatorInstance.Data);
    }
    if (local_f8.PendingAddLevelManagers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.PendingAddLevelManagers.AllocatorInstance.Data);
    }
    if ((param_2) && (this->bUseDynamicStreaming != false)) {
      FDynamicRenderAssetInstanceManager::IncrementalUpdate
                (&this->DynamicComponentManager,&local_c0,param_1);
    }
    SetRenderAssetsRemovedTimestamp(this,&local_c0);
    if (local_c0.AllocatorInstance.SecondaryData !=
        (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
      FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsFullyStreamedIn @ 1487aee40

bool __thiscall
FRenderAssetStreamingManager::IsFullyStreamedIn
          (FRenderAssetStreamingManager *this,UStreamableRenderAsset *param_1)

{
  EOptionalMipsState EVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  FStreamingRenderAsset *pFVar7;
  uint uVar8;
  
  if ((param_1 == (UStreamableRenderAsset *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                         ,0x42a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar7 = GetStreamingRenderAsset(this,param_1);
  if (pFVar7 == (FStreamingRenderAsset *)0x0) {
    return false;
  }
  EVar1 = pFVar7->OptionalMipsState;
  iVar5 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  uVar8 = (uint)(param_1->CachedSRRState).field0_0x0._s_0.MaxNumLODs - iVar5;
  uVar6 = uVar8;
  if ((EVar1 == OMS_NoOptionalMips) &&
     (uVar6 = (uint)(param_1->CachedSRRState).field0_0x0._s_0.NumNonOptionalLODs,
     (int)uVar8 < (int)uVar6)) {
    uVar6 = uVar8;
  }
  return (int)uVar6 <= (int)(uint)(param_1->CachedSRRState).field0_0x0._s_0.NumResidentLODs;
}

// IsParallelForAllowedDuringIncrementalUpdate @ 1487af0d0

bool __cdecl
FRenderAssetStreamingManager::IsParallelForAllowedDuringIncrementalUpdate(int param_1,int *param_2)

{
  bool bVar1;
  
  if (UE::Private::RenderAssetStreamingManager::bAllowParallelForDuringIncrementalUpdate) {
    bVar1 = FApp::ShouldUseThreadingForPerformance();
    if ((bVar1) && (MinNumElementsToProcess <= param_1)) {
      bVar1 = true;
      if ((0 < UE::Private::RenderAssetStreamingManager::
               GWorkerCountForParallelForDuringIncrementalUpdate) &&
         (UE::Private::RenderAssetStreamingManager::
          GWorkerCountForParallelForDuringIncrementalUpdate < param_1)) {
        *param_2 = (UE::Private::RenderAssetStreamingManager::
                    GWorkerCountForParallelForDuringIncrementalUpdate + -1 + param_1) /
                   UE::Private::RenderAssetStreamingManager::
                   GWorkerCountForParallelForDuringIncrementalUpdate;
        return true;
      }
      goto LAB_1487af12b;
    }
  }
  bVar1 = false;
LAB_1487af12b:
  *param_2 = 1;
  return bVar1;
}

// LogViewLocationChange @ 1487aff60

void __thiscall
FRenderAssetStreamingManager::LogViewLocationChange(FRenderAssetStreamingManager *this)

{
  return;
}

// MarkMountedStateDirty @ 1487aff90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderAssetStreamingManager::MarkMountedStateDirty(FRenderAssetStreamingManager *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  FWriteBuffer *pFVar2;
  bool bVar3;
  uint local_res10 [2];
  undefined1 auStackY_78 [32];
  FLLMScope local_44;
  FLLMScope local_40;
  FLLMScope local_3c;
  uint local_38 [2];
  FMemScope local_30;
  TLogScope<0> local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if ((this->bRecacheAllFiles == false) && (param_1 != 0)) {
    local_res10[0] = param_1;
    FLLMScope::FLLMScope(&local_3c,StreamingManager,false,None,Default,true);
    FMemScope::FMemScope(&local_30,StreamingManager,true);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_40,Assets,Default);
    FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_44,AssetClasses,Default);
    bVar3 = -1 < MetadataChannel->Enabled;
    if (bVar3) {
      UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_28);
      *(undefined8 *)(local_28._8_8_ + 0x28) = *(undefined8 *)(local_28._8_8_ + 0x20);
    }
    lpCriticalSection = &this->MountedStateDirtyFilesCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::Emplace<unsigned_int_&>
              (&this->MountedStateDirtyFiles,local_38,(bool *)local_res10);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (bVar3) {
      lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar1 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
      if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 1) {
        pFVar2 = UE::Trace::Private::Writer_NextBuffer();
      }
      *pFVar2->Cursor = '\n';
      pFVar2->Cursor = pFVar2->Cursor + 1;
      pFVar2->Committed = pFVar2->Cursor;
    }
    FLLMScope::~FLLMScope(&local_44);
    FLLMScope::~FLLMScope(&local_40);
    FMemScope::~FMemScope(&local_30);
    FLLMScope::~FLLMScope(&local_3c);
  }
  return;
}

// NotifyActorDestroyed @ 1487b0340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::NotifyActorDestroyed
          (FRenderAssetStreamingManager *this,AActor *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  UPrimitiveComponent *pUVar3;
  code *pcVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  longlong *plVar9;
  longlong lVar10;
  ULevel *pUVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  longlong *plVar18;
  undefined1 auStack_228 [32];
  longlong *local_208;
  longlong *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8;
  undefined1 local_1d7;
  undefined1 local_1d6 [6];
  longlong local_1d0;
  UClass *local_1c8;
  ULevel *local_1c0;
  UPrimitiveComponent *local_1b8;
  FRenderAssetStreamingManager *local_1b0;
  LPCRITICAL_SECTION local_1a8;
  LARGE_INTEGER local_1a0;
  UClass *local_198;
  LARGE_INTEGER local_190;
  longlong local_188 [24];
  longlong *local_c8;
  int local_c0;
  int local_bc;
  TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    return;
  }
  local_1a8 = (LPCRITICAL_SECTION)&this->CriticalSection;
  local_1c0 = (ULevel *)param_1;
  local_1b0 = this;
  if (local_1a8 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_1a8);
  QueryPerformanceCounter(&local_1a0);
  local_b8.AllocatorInstance.SecondaryData = (ForElementType<UStreamableRenderAsset_const_*>)0x0;
  (this->GatheredStats).CallbacksCycles = -local_1a0.s.LowPart;
  local_b8.ArrayNum = 0;
  local_b8.ArrayMax = 0xc;
  if ((param_1 == (AActor *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Actor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                         ,1099,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_c8 = (longlong *)0x0;
  local_bc = 0x18;
  local_c0 = 0;
  pUVar6 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 != (UClass *)0x0) goto LAB_1487b0450;
  }
  else if (pUVar6 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_1487b0450:
    pUVar7 = Z_Construct_UClass_UActorComponent_NoRegister();
    if (pUVar7 != (UClass *)0x0) {
      iVar12 = (int)pUVar7->_padding_;
      if (((int)pUVar6->_padding_ < iVar12) ||
         ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar12 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pUVar7 = pUVar6;
      if (bVar5) goto LAB_1487b0485;
    }
  }
  pUVar7 = (UClass *)0x0;
LAB_1487b0485:
  pUVar8 = Z_Construct_UClass_UActorComponent_NoRegister();
  if (pUVar7 == pUVar8) {
    local_198 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,1,0,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_198,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_188);
  }
  else {
    local_1c8 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    AActor::
    ForEachComponent_Internal<UPrimitiveComponent,0,0,_AActor::GetComponents<UPrimitiveComponent,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>_::__l2::<lambda_1>_>
              (param_1,(TSubclassOf<UActorComponent>)&local_1c8,
               (TArray<UPrimitiveComponent_*,TSizedInlineAllocator<24,32,TSizedDefaultAllocator<32>_>_>
                *)local_188);
  }
  local_1d0 = 0;
  plVar9 = local_188;
  if (local_c8 != (longlong *)0x0) {
    plVar9 = local_c8;
  }
  if (plVar9 <= &local_1d0) {
    plVar9 = local_188;
    if (local_c8 != (longlong *)0x0) {
      plVar9 = local_c8;
    }
    if (&local_1d0 < plVar9 + local_bc) {
      local_1f0 = (longlong)local_c0;
      local_1e8 = 8;
      local_200 = local_188;
      if (local_c8 != (longlong *)0x0) {
        local_200 = local_c8;
      }
      local_208 = &local_1d0;
      local_1f8 = (longlong)local_bc;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  lVar10 = (longlong)local_c0;
  iVar12 = local_c0;
  if (local_c0 != 0) {
    plVar9 = local_188;
    if (local_c8 != (longlong *)0x0) {
      plVar9 = local_c8;
    }
    iVar12 = 0;
    bVar5 = *plVar9 != local_1d0;
    lVar15 = 0;
    lVar16 = local_1d0;
    iVar13 = 0;
    do {
      iVar14 = iVar13;
      do {
        lVar15 = lVar15 + 1;
        iVar14 = iVar14 + 1;
        if (lVar10 <= lVar15) break;
      } while (bVar5 == (plVar9[lVar15] != lVar16));
      if (bVar5 != false) {
        if (iVar12 != iVar13) {
          memmove(plVar9 + iVar12,plVar9 + iVar13,(longlong)(iVar14 - iVar13) << 3);
          lVar16 = local_1d0;
        }
        iVar12 = iVar12 + (iVar14 - iVar13);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      this = local_1b0;
      param_1 = (AActor *)local_1c0;
      iVar13 = iVar14;
    } while (lVar15 < lVar10);
  }
  local_c0 = iVar12;
  pUVar11 = AActor::GetLevel(param_1);
  local_1c0 = pUVar11;
  if ((this->LevelRenderAssetManagersLock != (FScopedLevelRenderAssetManagersLock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LevelRenderAssetManagersLock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                         ,0x455,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar17 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
  iVar12 = (this->LevelRenderAssetManagers).ArrayNum;
  local_1c8 = (UClass *)(pFVar17 + (longlong)iVar12 * 8);
  while( true ) {
    pUVar6 = local_1c8;
    if ((this->LevelRenderAssetManagers).ArrayNum != iVar12) {
      `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1d8);
    }
    iVar13 = local_c0;
    lpCriticalSection = local_1a8;
    if ((UClass *)pFVar17 == pUVar6) break;
    plVar9 = *(longlong **)pFVar17;
    if ((plVar9 != (longlong *)0x0) &&
       ((pUVar11 == (ULevel *)0x0 || ((ULevel *)*plVar9 == pUVar11)))) {
      plVar18 = local_188;
      if (local_c8 != (longlong *)0x0) {
        plVar18 = local_c8;
      }
      plVar2 = plVar18 + local_c0;
      while( true ) {
        if (local_c0 != iVar13) {
          `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_1d7);
        }
        pUVar11 = local_1c0;
        this = local_1b0;
        if (plVar18 == plVar2) break;
        pUVar3 = (UPrimitiveComponent *)*plVar18;
        local_1b8 = pUVar3;
        FStaticRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)(plVar9 + 4));
        if (plVar9[6] == 0) {
          FRenderAssetInstanceState::RemoveComponent
                    ((FRenderAssetInstanceState *)plVar9[3],pUVar3,&local_b8);
        }
        else {
          FRenderAssetInstanceState::RemoveComponentReferences
                    ((FRenderAssetInstanceState *)plVar9[3],pUVar3);
        }
        TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                  ((TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)(plVar9 + 9),
                   &local_1b8,Default);
        TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                  ((TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)(plVar9 + 0xb)
                   ,&local_1b8,Default);
        plVar18 = plVar18 + 1;
      }
    }
    pFVar17 = pFVar17 + 8;
  }
  plVar9 = local_188;
  if (local_c8 != (longlong *)0x0) {
    plVar9 = local_c8;
  }
  plVar18 = plVar9 + local_c0;
  while( true ) {
    if (local_c0 != iVar13) {
      `TCheckedPointerIterator<UPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1d6);
    }
    if (plVar9 == plVar18) break;
    pUVar3 = (UPrimitiveComponent *)*plVar9;
    FDynamicRenderAssetInstanceManager::Remove(&this->DynamicComponentManager,pUVar3,&local_b8);
    pUVar3->bAttachedToStreamingManagerAsStatic = '\0';
    plVar9 = plVar9 + 1;
  }
  SetRenderAssetsRemovedTimestamp(this,&local_b8);
  QueryPerformanceCounter(&local_190);
  (this->GatheredStats).CallbacksCycles =
       (this->GatheredStats).CallbacksCycles + local_190.s.LowPart;
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  if (local_b8.AllocatorInstance.SecondaryData !=
      (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// NotifyLevelChange @ 1487b0850

void __thiscall FRenderAssetStreamingManager::NotifyLevelChange(FRenderAssetStreamingManager *this)

{
  return;
}

// NotifyLevelOffset @ 1487b08b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::NotifyLevelOffset
          (FRenderAssetStreamingManager *this,ULevel *param_1,TVector<double> *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res20 [8];
  
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar4 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
    iVar2 = (this->LevelRenderAssetManagers).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->LevelRenderAssetManagers).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar4 == pFVar1) goto LAB_1487b095f;
      plVar3 = *(longlong **)pFVar4;
      if ((plVar3 != (longlong *)0x0) && ((ULevel *)*plVar3 == param_1)) break;
      pFVar4 = pFVar4 + 8;
    }
    if ((char)plVar3[8] == '\x06') {
      FStaticRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)(plVar3 + 4));
      if ((FRenderAssetInstanceState *)plVar3[3] != (FRenderAssetInstanceState *)0x0) {
        FRenderAssetInstanceState::OffsetBounds((FRenderAssetInstanceState *)plVar3[3],param_2);
      }
    }
LAB_1487b095f:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// NotifyPrimitiveDetached @ 1487b0b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::NotifyPrimitiveDetached
          (FRenderAssetStreamingManager *this,UPrimitiveComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  ULevel *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  UPrimitiveComponent *local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((param_1 != (UPrimitiveComponent *)0x0) &&
       (param_1->bAttachedToStreamingManagerAsStatic != '\0' ||
        param_1->bAttachedToStreamingManagerAsDynamic != '\0')) {
      QueryPerformanceCounter(&local_c8);
      local_b8.ArrayMax = 0xc;
      (this->GatheredStats).CallbacksCycles = -local_c8.s.LowPart;
      local_b8.AllocatorInstance.SecondaryData = (ForElementType<UStreamableRenderAsset_const_*>)0x0
      ;
      local_b8.ArrayNum = 0;
      if (param_1->bAttachedToStreamingManagerAsStatic != '\0') {
        pUVar6 = UActorComponent::GetComponentLevel((UActorComponent *)param_1);
        if ((pUVar6 == (ULevel *)0x0) ||
           ((((uint)pUVar6->_padding_ >> 0x1e & 1) == 0 && ((pUVar6->_padding_ & 0x18000) == 0)))) {
          if (((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0) ||
             ((*(uint *)&param_1->field_0x8 & 0x18000) != 0)) {
            if ((this->LevelRenderAssetManagersLock != (FScopedLevelRenderAssetManagersLock *)0x0)
               && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                     ("!LevelRenderAssetManagersLock",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                                      ,0x4b1,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar7 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
            iVar2 = (this->LevelRenderAssetManagers).ArrayNum;
            pFVar1 = pFVar7 + (longlong)iVar2 * 8;
            while( true ) {
              if ((this->LevelRenderAssetManagers).ArrayNum != iVar2) {
                `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_d8);
              }
              if (pFVar7 == pFVar1) break;
              plVar3 = *(longlong **)pFVar7;
              if ((plVar3 != (longlong *)0x0) &&
                 ((pUVar6 == (ULevel *)0x0 || ((ULevel *)*plVar3 == pUVar6)))) {
                local_d0 = param_1;
                FStaticRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)(plVar3 + 4));
                if (plVar3[6] == 0) {
                  FRenderAssetInstanceState::RemoveComponent
                            ((FRenderAssetInstanceState *)plVar3[3],param_1,&local_b8);
                }
                else {
                  FRenderAssetInstanceState::RemoveComponentReferences
                            ((FRenderAssetInstanceState *)plVar3[3],param_1);
                }
                TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                          ((TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)
                           (plVar3 + 9),&local_d0,Default);
                TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                          ((TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)
                           (plVar3 + 0xb),&local_d0,Default);
              }
              pFVar7 = pFVar7 + 8;
            }
            param_1->bAttachedToStreamingManagerAsStatic = '\0';
          }
        }
        else {
          RemoveLevel(this,pUVar6);
        }
      }
      FDynamicRenderAssetInstanceManager::Remove(&this->DynamicComponentManager,param_1,&local_b8);
      SetRenderAssetsRemovedTimestamp(this,&local_b8);
      QueryPerformanceCounter(&local_c0);
      (this->GatheredStats).CallbacksCycles =
           (this->GatheredStats).CallbacksCycles + local_c0.s.LowPart;
      if (local_b8.AllocatorInstance.SecondaryData !=
          (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
        FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// NotifyPrimitiveUpdated @ 1487b0dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::NotifyPrimitiveUpdated
          (FRenderAssetStreamingManager *this,UPrimitiveComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  Type TVar2;
  LARGE_INTEGER local_res18;
  FStreamingTextureLevelContext local_58;
  
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    return;
  }
  QueryPerformanceCounter(&local_res18);
  (this->GatheredStats).CallbacksCycles = -local_res18.s.LowPart;
  bVar1 = IsInGameThread();
  if ((((!bVar1) || (this->bUseDynamicStreaming == false)) ||
      (param_1 == (UPrimitiveComponent *)0x0)) || ((bool)param_1->bIgnoreStreamingManagerUpdate))
  goto LAB_1487b0ed8;
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((param_1->field_0x98 & 3) == 3) && ((param_1->field_0x99 & 1) == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (param_1->bHandledByStreamingManagerAsDynamic == '\0') {
    if (param_1->bAttachedToStreamingManagerAsStatic != '\0') {
      RemoveStaticReferences(this,param_1);
      param_1->bHandledByStreamingManagerAsDynamic = '\x01';
      goto LAB_1487b0e8c;
    }
  }
  else {
LAB_1487b0e8c:
    if (bVar1) {
      TVar2 = GetCurrentMaterialQualityLevelChecked();
      FStreamingTextureLevelContext::FStreamingTextureLevelContext(&local_58,TVar2,param_1);
      FDynamicRenderAssetInstanceManager::Add(&this->DynamicComponentManager,param_1,&local_58,0.0);
      FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_58);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_1487b0ed8:
  QueryPerformanceCounter(&local_res18);
  (this->GatheredStats).CallbacksCycles =
       (this->GatheredStats).CallbacksCycles + local_res18.s.LowPart;
  return;
}

// NotifyPrimitiveUpdated_Concurrent @ 1487b0f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::NotifyPrimitiveUpdated_Concurrent
          (FRenderAssetStreamingManager *this,UPrimitiveComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  undefined4 uVar2;
  Type TVar3;
  EAddComponentResult EVar4;
  LARGE_INTEGER local_res18;
  FStreamingTextureLevelContext local_58;
  
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    QueryPerformanceCounter(&local_res18);
    uVar2 = local_res18.s.LowPart;
    if ((this->bUseDynamicStreaming != false) && (param_1 != (UPrimitiveComponent *)0x0)) {
      lpCriticalSection = &this->CriticalSection;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      TVar3 = GetCurrentMaterialQualityLevelChecked();
      FStreamingTextureLevelContext::FStreamingTextureLevelContext
                (&local_58,TVar3,(ULevel *)0x0,
                 (TMap<FGuid,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,int,0>_> *)
                 0x0);
      EVar4 = FDynamicRenderAssetInstanceManager::Add
                        (&this->DynamicComponentManager,param_1,&local_58,0.0);
      if ((EVar4 == Success) &&
         (0 < GRenderAssetStreamingEnableStrippingDuplicatePrimitiveComponent)) {
        RemoveStaticReferences(this,param_1);
      }
      FStreamingTextureLevelContext::~FStreamingTextureLevelContext(&local_58);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    QueryPerformanceCounter(&local_res18);
    LOCK();
    piVar1 = &(this->GatheredStats).CallbacksCycles;
    *piVar1 = *piVar1 + (local_res18.s.LowPart - uVar2);
    UNLOCK();
  }
  return;
}

// OnPreGarbageCollect @ 1487b16b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::OnPreGarbageCollect(FRenderAssetStreamingManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FBaseGraphTask *this_00;
  FLevelRenderAssetManager *pFVar1;
  ULevel *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FRenderAssetStreamingManager::OnPreGarbageCollect(void)_::_2_::FStat_STAT_FRenderAssetStreamingManager_OnPreGarbageCollect>
  FVar11;
  FNameEntryId FVar12;
  FName FVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStackY_138 [32];
  FColor_u_0 local_d8 [2];
  FName local_d0;
  uint local_c8;
  uint uStack_c4;
  FName local_c0;
  FName local_b0;
  FName local_a8;
  TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_a0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_138;
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId267,"FRenderAssetStreamingManager::OnPreGarbageCollect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
               ,0x10b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId267);
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if (this_00 != (FBaseGraphTask *)0x0) {
    FBaseGraphTask::Wait(this_00,GameThread);
  }
  uVar14 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRenderAssetStreamingManager_OnPreGarbageCollect ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRenderAssetStreamingManager::OnPreGarbageCollect(void)_::_2_::FStat_STAT_FRenderAssetStreamingManager_OnPreGarbageCollect>
         )0x0) {
      pFVar10 = ::FName::FName(&local_b0,"STAT_FRenderAssetStreamingManager_OnPreGarbageCollect");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FRenderAssetStreamingManager_OnPreGarbageCollect,*pFVar10,
                 L"STAT_FRenderAssetStreamingManager_OnPreGarbageCollect","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_FRenderAssetStreamingManager_OnPreGarbageCollect;
  if (StatPtr_STAT_FRenderAssetStreamingManager_OnPreGarbageCollect ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRenderAssetStreamingManager::OnPreGarbageCollect(void)_::_2_::FStat_STAT_FRenderAssetStreamingManager_OnPreGarbageCollect>
       )0x0) {
    pFVar10 = ::FName::FName(&local_a8,"STAT_FRenderAssetStreamingManager_OnPreGarbageCollect");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FRenderAssetStreamingManager::OnPreGarbageCollect(void)_::_2_::FStat_STAT_FRenderAssetStreamingManager_OnPreGarbageCollect>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FRenderAssetStreamingManager_OnPreGarbageCollect,*pFVar10,
                          L"STAT_FRenderAssetStreamingManager_OnPreGarbageCollect","STATGROUP_Quick"
                          ,"STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar12.Value;
        local_d0.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                   ,0x114);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8 = FVar12.Value;
      uStack_c4 = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_1487b18bb;
    }
  }
  bVar5 = false;
  FVar13 = local_c0;
LAB_1487b18bb:
  pTVar7 = CVarFlushDeferredMipLevelChangeCallbacksBeforeGC.Ref;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pTVar7->ShadowedValue[0] != 0) {
    TickDeferredMipLevelChangeCallbacks(this);
  }
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    local_a0.AllocatorInstance.SecondaryData = (ForElementType<UStreamableRenderAsset_const_*>)0x0;
    local_a0.ArrayNum = 0;
    local_a0.ArrayMax = 0xc;
    if ((this->LevelRenderAssetManagersLock != (FScopedLevelRenderAssetManagersLock *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!LevelRenderAssetManagersLock",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                           ,0x123,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar16 = uVar14;
    if (0 < (this->LevelRenderAssetManagers).ArrayNum) {
      do {
        uVar15 = (uint)uVar16;
        uVar17 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < (this->LevelRenderAssetManagers).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)((this->LevelRenderAssetManagers).AllocatorInstance.Data + uVar14) != 0) {
          uVar9 = 0;
          if ((int)uVar15 < (this->LevelRenderAssetManagers).ArrayNum) {
            uVar9 = uVar17;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar1 = *(FLevelRenderAssetManager **)
                    ((this->LevelRenderAssetManagers).AllocatorInstance.Data + uVar14);
          pUVar2 = pFVar1->Level;
          if ((pUVar2 == (ULevel *)0x0) || (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) {
            FLevelRenderAssetManager::Remove(pFVar1,&local_a0);
            uVar9 = 0;
            if ((int)uVar15 < (this->LevelRenderAssetManagers).ArrayNum) {
              uVar9 = uVar17;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar1 = *(FLevelRenderAssetManager **)
                      ((this->LevelRenderAssetManagers).AllocatorInstance.Data + uVar14);
            if (pFVar1 != (FLevelRenderAssetManager *)0x0) {
              FLevelRenderAssetManager::_scalar_deleting_destructor_(pFVar1,1);
            }
            uVar9 = 0;
            if ((int)uVar15 < (this->LevelRenderAssetManagers).ArrayNum) {
              uVar9 = uVar17;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(undefined8 *)((this->LevelRenderAssetManagers).AllocatorInstance.Data + uVar14) = 0;
          }
        }
        uVar14 = uVar14 + 8;
        uVar16 = (ulonglong)(uVar15 + 1);
      } while ((int)(uVar15 + 1) < (this->LevelRenderAssetManagers).ArrayNum);
    }
    FDynamicRenderAssetInstanceManager::OnPreGarbageCollect
              (&this->DynamicComponentManager,&local_a0);
    SetRenderAssetsRemovedTimestamp(this,&local_a0);
    if (local_a0.AllocatorInstance.SecondaryData !=
        (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
      FMemory::Free((void *)local_a0.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnRenderAssetUpdateAbandoned @ 1487b21d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::OnRenderAssetUpdateAbandoned
          (FRenderAssetStreamingManager *this,UStreamableRenderAsset *param_1,
          TRefCountPtr<FRenderAssetUpdate> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAbandonedRenderAssetUpdateManager *pFVar6;
  FName local_res8;
  FRenderAssetUpdate *local_28;
  FString local_20;
  
  if ((!GEnableAssetUpdateAbandons) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GEnableAssetUpdateAbandons",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                         ,0x8ff,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_28 = param_2->Reference;
  pFVar6 = &this->AbandonedRenderAssetUpdateManager;
  if (local_28 != (FRenderAssetUpdate *)0x0) {
    LOCK();
    (local_28->NumRefs).Counter = (local_28->NumRefs).Counter + 1;
    UNLOCK();
  }
  bVar4 = IsInGameThread();
  if (!bVar4) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
  }
  (**(code **)(local_28->_padding_ + 0x30))();
  pFVar2 = (pFVar6->AbandonedRenderAssetUpdates).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar2 + (longlong)
                (this->AbandonedRenderAssetUpdateManager).AbandonedRenderAssetUpdates.ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->AbandonedRenderAssetUpdateManager).AbandonedRenderAssetUpdates.ArrayNum;
  piVar1 = &(this->AbandonedRenderAssetUpdateManager).AbandonedRenderAssetUpdates.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pFVar6,piVar1);
  }
  (this->AbandonedRenderAssetUpdateManager).AbandonedRenderAssetUpdates.ArrayNum = iVar5 + 1;
  pFVar2 = (pFVar6->AbandonedRenderAssetUpdates).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 8) = 0;
  *(FRenderAssetUpdate **)(pFVar2 + (longlong)iVar5 * 8) = local_28;
  if (local_28 != (FRenderAssetUpdate *)0x0) {
    LOCK();
    (local_28->NumRefs).Counter = (local_28->NumRefs).Counter + 1;
    UNLOCK();
  }
  if (4 < (byte)LogContentStreaming._0_1_) {
    local_res8 = (FName)param_1->_padding_;
    ::FName::ToString(&local_res8,&local_20);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
    if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_20.Data.AllocatorInstance.Data);
    }
  }
  if (local_28 != (FRenderAssetUpdate *)0x0) {
    FRenderAssetUpdate::Release(local_28);
  }
  return;
}

// PauseRenderAssetStreaming @ 1487b2510

void __thiscall
FRenderAssetStreamingManager::PauseRenderAssetStreaming
          (FRenderAssetStreamingManager *this,bool param_1)

{
  this->bPauseRenderAssetStreaming = param_1;
  return;
}

// PrepareAsyncTask @ 1487b2520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRenderAssetStreamingManager::PrepareAsyncTask(FRenderAssetStreamingManager *this,bool param_1)

{
  float fVar1;
  FAsyncTask<FRenderAssetStreamingMipCalcTask> *this_00;
  long64 lVar2;
  ForAnyElementType _Src;
  longlong lVar3;
  TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> local_68;
  undefined8 local_58;
  long64 lStack_50;
  undefined8 local_48;
  long64 lStack_40;
  long64 local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong lStack_20;
  
  this_00 = this->AsyncWork;
  FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_00);
  local_58 = ___xmm_ffffffffffffffffffffffffffffffff;
  lStack_50 = _UNK_15060db28;
  local_48 = ___xmm_ffffffffffffffffffffffffffffffff;
  lStack_40 = _UNK_15060db28;
  local_28 = 0;
  lStack_20 = 0;
  local_38 = 0;
  local_30 = 0;
  (**(code **)(GDynamicRHI->_padding_ + 0x188))(GDynamicRHI,&local_58);
  if (((lStack_20 < 1) || (param_1)) || ((this->Settings).bFullyLoadUsedTextures != false)) {
    (this_00->Task).AllocatedMemory = local_38;
    (this_00->Task).PoolSize = 0x7fffffffffffffff;
    (this_00->Task).TempMemoryBudget = 0x3fffffffffffffff;
    (this_00->Task).TotalGraphicsMemory = 0;
    (this_00->Task).MemoryMargin = 0;
  }
  else {
    lVar2 = this->MemoryMargin;
    (this_00->Task).TempMemoryBudget = (longlong)(this->Settings).MaxTempMemoryAllowed << 0x14;
    (this_00->Task).TotalGraphicsMemory = lStack_40;
    (this_00->Task).AllocatedMemory = local_38;
    (this_00->Task).PoolSize = lStack_20;
    (this_00->Task).MemoryMargin = lVar2;
  }
  (this_00->Task).bAbort = false;
  _Src = IStreamingManager::CurrentViewInfos.AllocatorInstance;
  lVar3 = (longlong)IStreamingManager::CurrentViewInfos.ArrayNum;
  fVar1 = this->LastWorldUpdateTime;
  local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = IStreamingManager::CurrentViewInfos.ArrayNum;
  if (IStreamingManager::CurrentViewInfos.ArrayNum == 0) {
    local_68.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,IStreamingManager::CurrentViewInfos.ArrayNum,0,&local_68.AllocatorInstance,
               IStreamingManager::CurrentViewInfos.ArrayNum,&local_68.ArrayMax);
    memcpy(local_68.AllocatorInstance.Data,_Src.Data,lVar3 << 6);
  }
  FAsyncRenderAssetStreamingData::Init
            (&(this_00->Task).StreamingData,&local_68,fVar1,&this->LevelRenderAssetManagers,
             &this->DynamicComponentManager);
  this->LastWorldUpdateTime_MipCalcTask = this->LastWorldUpdateTime;
  return;
}

// ProcessAddedRenderAssets @ 1487b2900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::ProcessAddedRenderAssets(FRenderAssetStreamingManager *this)

{
  int *piVar1;
  FBaseGraphTask *pFVar2;
  UStreamableRenderAsset *pUVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  DWORD DVar7;
  uint uVar8;
  uint uVar9;
  FStreamingRenderAsset *this_00;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong local_res8;
  
  pFVar2 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if ((pFVar2 != (FBaseGraphTask *)0x0) &&
     (DVar7 = GetCurrentThreadId(), DVar7 != *(DWORD *)&pFVar2->field_0x48)) {
    FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
  }
  iVar10 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  uVar12 = (this->PendingStreamingRenderAssets).ArrayNum + iVar10;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &(this->AsyncUnsafeStreamingRenderAssets).ArrayMax;
  if (*piVar1 < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb8,8,uVar12,&(this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance,iVar10,
               piVar1);
  }
  uVar12 = 0;
  if (0 < (this->PendingStreamingRenderAssets).ArrayNum) {
    local_res8 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->PendingStreamingRenderAssets).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar3 = *(UStreamableRenderAsset **)
                ((this->PendingStreamingRenderAssets).AllocatorInstance.Data + local_res8);
      if (pUVar3 != (UStreamableRenderAsset *)0x0) {
        pUVar3->StreamingIndex = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
        cVar6 = (**(code **)(pUVar3->_padding_ + 0x300))(pUVar3);
        if (cVar6 == '\x01') {
          pFVar11 = (FScriptContainerElement *)this->NumStreamedMips_Texture;
          iVar10 = 0x52;
        }
        else if (cVar6 == '\x02') {
          pFVar11 = (this->NumStreamedMips_StaticMesh).AllocatorInstance.Data;
          iVar10 = (this->NumStreamedMips_StaticMesh).ArrayNum;
        }
        else if (cVar6 == '\x03') {
          pFVar11 = (this->NumStreamedMips_SkeletalMesh).AllocatorInstance.Data;
          iVar10 = (this->NumStreamedMips_SkeletalMesh).ArrayNum;
        }
        else {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.h"
                             ,0x109,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar11 = (FScriptContainerElement *)0x0;
          iVar10 = -1;
        }
        uVar8 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
        if (uVar8 == (this->AsyncUnsafeStreamingRenderAssets).ArrayMax) {
          uVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8b8,&(this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance,
                             &(this->AsyncUnsafeStreamingRenderAssets).ArrayMax);
        }
        (this->AsyncUnsafeStreamingRenderAssets).ArrayNum = uVar8 + 1;
        uVar9 = 0;
        if ((int)uVar8 < (int)(uVar8 + 1)) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FStreamingRenderAsset *)
                  ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                  (longlong)(int)uVar8 * 0xb8);
        if (this_00 != (FStreamingRenderAsset *)0x0) {
          FStreamingRenderAsset::FStreamingRenderAsset
                    (this_00,pUVar3,&pUVar3->SimpleStreamableAssetManagerIndex,(int *)pFVar11,iVar10
                     ,&this->Settings);
        }
      }
      uVar12 = uVar12 + 1;
      local_res8 = local_res8 + 8;
    } while ((int)uVar12 < (this->PendingStreamingRenderAssets).ArrayNum);
  }
  (this->PendingStreamingRenderAssets).ArrayNum = 0;
  if ((this->PendingStreamingRenderAssets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PendingStreamingRenderAssets).AllocatorInstance,0,
               &(this->PendingStreamingRenderAssets).ArrayMax);
  }
  return;
}

// ProcessLevelsToReferenceToStreamedTextures @ 1487b2bb0

void __thiscall
FRenderAssetStreamingManager::ProcessLevelsToReferenceToStreamedTextures
          (FRenderAssetStreamingManager *this)

{
  uchar *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  FScriptContainerElement *pFVar11;
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    uVar13 = 0;
    uVar15 = uVar13;
    if (0 < (this->LevelRenderAssetManagers).ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar9 = 0;
        if ((int)uVar12 < (this->LevelRenderAssetManagers).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)((this->LevelRenderAssetManagers).AllocatorInstance.Data + uVar15) != 0) {
          uVar9 = 0;
          if ((int)uVar12 < (this->LevelRenderAssetManagers).ArrayNum) {
            uVar9 = ~uVar12 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar2 = *(longlong *)((this->LevelRenderAssetManagers).AllocatorInstance.Data + uVar15);
          if (*(char *)(lVar2 + 9) == '\0') {
            FStaticRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)(lVar2 + 0x20));
            *(undefined4 *)(lVar2 + 0x38) = 0;
            if (*(longlong *)(lVar2 + 0x30) != 0) {
              *(undefined1 *)(lVar2 + 9) = 1;
              FStaticRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)(lVar2 + 0x20));
              *(undefined4 *)(lVar2 + 0x38) = 0;
              FRenderAssetInstanceView::FRenderAssetIterator::FRenderAssetIterator
                        ((FRenderAssetIterator *)&local_48,
                         *(FRenderAssetInstanceView **)(lVar2 + 0x30));
              if (local_40.CurrentBitIndex < (local_40.Array)->NumBits) {
                do {
                  uVar3 = *(ulonglong *)(*local_48 + (longlong)local_40.CurrentBitIndex * 0x18);
                  if ((uVar3 != 0) &&
                     (uVar9 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595,
                     uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb,
                     *(int *)&(this->ReferencedRenderAssets).Elements.field_0x8 !=
                     *(int *)&(this->ReferencedRenderAssets).Elements.field_0x34)) {
                    FVar4 = (this->ReferencedRenderAssets).Hash.SecondaryData;
                    FVar10 = (ForElementType<FSetElementId>)&(this->ReferencedRenderAssets).Hash;
                    if (FVar4 != (ForElementType<FSetElementId>)0x0) {
                      FVar10 = FVar4;
                    }
                    iVar14 = *(int *)((longlong)FVar10 +
                                     (ulonglong)
                                     ((this->ReferencedRenderAssets).HashSize - 1U &
                                     (uVar9 >> 0x10 ^ uVar9)) * 4);
                    if (iVar14 != -1) {
                      lVar2 = *(longlong *)&(this->ReferencedRenderAssets).Elements;
                      do {
                        if (*(ulonglong *)(lVar2 + (longlong)iVar14 * 0x10) == uVar3) {
                          uVar9 = *(uint *)(uVar3 + 0xb8);
                          if ((-1 < (int)uVar9) &&
                             ((int)uVar9 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
                            uVar7 = 0;
                            if ((int)uVar9 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
                              uVar7 = ~uVar9 >> 0x1f;
                            }
                            if ((uVar7 == 0) &&
                               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar6)) {
                              pcVar5 = (code *)swi(3);
                              (*pcVar5)();
                              return;
                            }
                            pFVar11 = (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.
                                      Data + (longlong)(int)uVar9 * 0xb8;
                            if ((*(ulonglong *)pFVar11 != uVar3) &&
                               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("StreamingRenderAsset.RenderAsset == RenderAsset"
                                                   ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                                                  ,0x2e0,L""), bVar6)) {
                              pcVar5 = (code *)swi(3);
                              (*pcVar5)();
                              return;
                            }
                            this_00 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar11 + 0x98);
                            if ((*(int *)(pFVar11 + 0xb0) <= (int)uVar12) &&
                               (iVar14 = (uVar12 - *(int *)(pFVar11 + 0xb0)) + 1, -1 < iVar14)) {
                              iVar8 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                                (this_00,iVar14);
                              TBitArray<FDefaultBitArrayAllocator>::SetRange
                                        (this_00,iVar8,iVar14,false);
                            }
                            if ((((int)uVar12 < 0) || (*(int *)(pFVar11 + 0xb0) <= (int)uVar12)) &&
                               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                                  ("Index>=0 && Index<NumBits",
                                                                                                      
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                                  ,0x5be,L""), bVar6)) {
                              pcVar5 = (code *)swi(3);
                              (*pcVar5)();
                              return;
                            }
                            if (*(TBitArray<FDefaultBitArrayAllocator> **)(pFVar11 + 0xa8) !=
                                (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                              this_00 = *(TBitArray<FDefaultBitArrayAllocator> **)(pFVar11 + 0xa8);
                            }
                            uVar9 = uVar12;
                            if ((int)uVar12 < 0) {
                              uVar9 = uVar12 + 0x1f;
                            }
                            puVar1 = (this_00->AllocatorInstance).InlineData +
                                     (longlong)((int)uVar9 >> 5) * 4;
                            *(uint *)puVar1 = *(uint *)puVar1 | 1 << ((byte)uVar13 & 0x1f);
                          }
                          break;
                        }
                        iVar14 = *(int *)(lVar2 + 8 + (longlong)iVar14 * 0x10);
                      } while (iVar14 != -1);
                    }
                  }
                  local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
                } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
              }
            }
          }
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar15 = uVar15 + 8;
      } while ((int)(uVar12 + 1) < (this->LevelRenderAssetManagers).ArrayNum);
    }
  }
  return;
}

// ProcessPendingLevelManagers @ 1487b2f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::ProcessPendingLevelManagers(FRenderAssetStreamingManager *this)

{
  longlong *plVar1;
  TArray<FLevelRenderAssetManager_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScopedLevelRenderAssetManagersLock *pFVar5;
  FLevelRenderAssetManager *this_00;
  void *pvVar6;
  FScriptContainerElement *pFVar7;
  FRenderAssetInstanceView *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TArray<FLevelRenderAssetManager_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [8];
  FRenderAssetStreamingManager *local_b0;
  TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_b0 = this;
  if (this->LevelRenderAssetManagersLock == (FScopedLevelRenderAssetManagersLock *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("LevelRenderAssetManagersLock",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                        ,0x357,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  pFVar5 = this->LevelRenderAssetManagersLock;
  pTVar2 = &this->LevelRenderAssetManagers;
  pTVar12 = &pFVar5->PendingAddLevelManagers;
  if (pTVar2 == pTVar12) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  iVar4 = (pFVar5->PendingAddLevelManagers).ArrayNum;
  if (iVar4 != 0) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,iVar4,&pTVar2->AllocatorInstance,
                        &(this->LevelRenderAssetManagers).ArrayNum,
                        &(this->LevelRenderAssetManagers).ArrayMax);
    memcpy((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8,(pTVar12->AllocatorInstance).Data
           ,(longlong)iVar4 << 3);
  }
  pFVar5 = this->LevelRenderAssetManagersLock;
  local_a8.AllocatorInstance.SecondaryData = (ForElementType<UStreamableRenderAsset_const_*>)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0xc;
  pFVar13 = (pFVar5->PendingRemoveLevelManagers).AllocatorInstance.Data;
  iVar4 = (pFVar5->PendingRemoveLevelManagers).ArrayNum;
  pFVar3 = pFVar13 + (longlong)iVar4 * 8;
  while( true ) {
    if ((pFVar5->PendingRemoveLevelManagers).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (pFVar13 == pFVar3) break;
    this_00 = *(FLevelRenderAssetManager **)pFVar13;
    FLevelRenderAssetManager::Remove(this_00,&local_a8);
    if (this_00 != (FLevelRenderAssetManager *)0x0) {
      *(undefined4 *)&(this_00->TextureGuidToLevelIndex).field_0x48 = 0;
      pvVar6 = *(void **)&(this_00->TextureGuidToLevelIndex).field_0x40;
      if (pvVar6 != (void *)0x0) {
        FMemory::Free(pvVar6);
      }
      TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FGuid,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&this_00->TextureGuidToLevelIndex);
      pFVar7 = (this_00->PendingComponents).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      pFVar7 = (this_00->UnprocessedComponents).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (this_00->StaticInstances)._padding_ = (longlong)&___7FStaticRenderAssetInstanceManager__6B_;
      FStaticRenderAssetInstanceManager::FTasks::SyncResults
                (&(this_00->StaticInstances).StateSync.Tasks);
      pFVar8 = (this_00->StaticInstances).AsyncView.Reference;
      if (pFVar8 != (FRenderAssetInstanceView *)0x0) {
        plVar1 = &pFVar8->_padding_;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)pFVar8->_padding_)(pFVar8,1);
        }
      }
      FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>::
      ~FRenderAssetInstanceStateTaskSync<FStaticRenderAssetInstanceManager::FTasks>
                (&(this_00->StaticInstances).StateSync);
      (this_00->StaticInstances)._padding_ = (longlong)&___7IRenderAssetInstanceManager__6B_;
      ::operator_delete(this_00,0xc0);
    }
    pFVar13 = pFVar13 + 8;
  }
  SetRenderAssetsRemovedTimestamp(local_b0,&local_a8);
  if (local_a8.AllocatorInstance.SecondaryData !=
      (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  return;
}

// ProcessPendingMipCopyRequests @ 1487b3180

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::ProcessPendingMipCopyRequests(FRenderAssetStreamingManager *this)

{
  FBaseGraphTask *pFVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  DWORD DVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  FStreamingRenderAsset *this_00;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  
  pTVar5 = CVarTextureStreamingAmortizeCPUToGPUCopy.Ref;
  bVar7 = IsInParallelGameThread();
  if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar6 = CVarTextureStreamingMaxNumTexturesToStreamPerFrame.Ref;
  if (pTVar5->ShadowedValue[0] != 0) {
    bVar7 = IsInParallelGameThread();
    if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007945>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (0 < pTVar6->ShadowedValue[0]) {
      pFVar1 = (this->StreamingRenderAssetsSyncEvent).Reference;
      if ((pFVar1 != (FBaseGraphTask *)0x0) &&
         (DVar8 = GetCurrentThreadId(), DVar8 != *(DWORD *)&pFVar1->field_0x48)) {
        FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
      }
      pTVar5 = CVarTextureStreamingMaxNumTexturesToStreamPerFrame.Ref;
      bVar7 = IsInParallelGameThread();
      if (((!bVar7) && (bVar7 = IsInGameThread(), !bVar7)) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007945>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6c9,"GetShadowIndex() == 0"), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar13 = pTVar5->ShadowedValue[0];
joined_r0x0001487b329b:
      if (iVar13 != 0) {
        iVar9 = this->CurrentPendingMipCopyRequestIdx;
        if ((this->PendingMipCopyRequests).ArrayNum <= iVar9) {
          return;
        }
        this->CurrentPendingMipCopyRequestIdx = iVar9 + 1;
        if ((iVar9 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (this->PendingMipCopyRequests).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
        uVar15 = *(ulonglong *)pFVar14;
        if (uVar15 != 0) {
          iVar9 = *(int *)(pFVar14 + 8);
          if ((-1 < iVar9) && (iVar9 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
            if ((iVar9 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar15 = *(ulonglong *)pFVar14;
            if (*(ulonglong *)
                 ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                 (longlong)iVar9 * 0xb8) == uVar15) {
              uVar11 = *(uint *)(pFVar14 + 8);
LAB_1487b344b:
              uVar10 = 0;
              if ((int)uVar11 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
                uVar10 = ~uVar11 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              this_00 = (FStreamingRenderAsset *)
                        ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                        (longlong)(int)uVar11 * 0xb8);
              if (this_00 != (FStreamingRenderAsset *)0x0) {
                FStreamingRenderAsset::StreamWantedMipsUsingCachedData(this_00,this);
                iVar13 = iVar13 + -1;
              }
              goto joined_r0x0001487b329b;
            }
          }
          uVar11 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
          uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
          if (*(int *)&(this->ReferencedRenderAssets).Elements.field_0x8 !=
              *(int *)&(this->ReferencedRenderAssets).Elements.field_0x34) {
            FVar2 = (this->ReferencedRenderAssets).Hash.SecondaryData;
            FVar12 = (ForElementType<FSetElementId>)&(this->ReferencedRenderAssets).Hash;
            if (FVar2 != (ForElementType<FSetElementId>)0x0) {
              FVar12 = FVar2;
            }
            iVar9 = *(int *)((longlong)FVar12 +
                            (ulonglong)
                            ((this->ReferencedRenderAssets).HashSize - 1U &
                            (uVar11 >> 0x10 ^ uVar11)) * 4);
            if (iVar9 != -1) {
              lVar3 = *(longlong *)&(this->ReferencedRenderAssets).Elements;
              do {
                if (*(ulonglong *)(lVar3 + (longlong)iVar9 * 0x10) == uVar15) {
                  if (((*(int *)(*(longlong *)pFVar14 + 0xb8) < 0) ||
                      ((this->AsyncUnsafeStreamingRenderAssets).ArrayNum <=
                       *(int *)(*(longlong *)pFVar14 + 0xb8))) &&
                     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("StreamingRenderAssets.IsValidIndex(Request.RenderAsset->StreamingIndex)"
                                         ,
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                                         ,0x6a2,L""), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  uVar11 = *(uint *)(*(longlong *)pFVar14 + 0xb8);
                  goto LAB_1487b344b;
                }
                iVar9 = *(int *)(lVar3 + 8 + (longlong)iVar9 * 0x10);
              } while (iVar9 != -1);
            }
          }
        }
        goto joined_r0x0001487b329b;
      }
    }
  }
  return;
}

// ProcessRemovedRenderAssets @ 1487b34d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::ProcessRemovedRenderAssets(FRenderAssetStreamingManager *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FBaseGraphTask *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  DWORD DVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  uint local_res10 [2];
  uint local_res18 [2];
  int local_res20 [2];
  
  pFVar4 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if (pFVar4 != (FBaseGraphTask *)0x0) {
    DVar8 = GetCurrentThreadId();
    if (DVar8 != *(DWORD *)&pFVar4->field_0x48) {
      FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
    }
  }
  pFVar11 = (this->RemovedRenderAssetIndices).AllocatorInstance.Data;
  iVar2 = (this->RemovedRenderAssetIndices).ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar2 * 4;
  do {
    if ((this->RemovedRenderAssetIndices).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) {
      (this->RemovedRenderAssetIndices).ArrayNum = 0;
      if ((this->RemovedRenderAssetIndices).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->RemovedRenderAssetIndices).AllocatorInstance,0,
                   &(this->RemovedRenderAssetIndices).ArrayMax);
      }
      return;
    }
    uVar3 = *(uint *)pFVar11;
    local_res10[0] = uVar3;
    while (-1 < (int)uVar3) {
      iVar10 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
      if (iVar10 <= (int)uVar3) {
LAB_1487b363a:
        if (-1 < (int)uVar3) {
          iVar10 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
          if ((int)uVar3 < iVar10) {
            uVar9 = 0;
            if ((int)uVar3 < iVar10) {
              uVar9 = ~uVar3 >> 0x1f;
            }
            if (uVar9 == 0) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            lVar5 = *(longlong *)
                     ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                     (longlong)(int)uVar3 * 0xb8);
            local_res18[0] = *(uint *)(lVar5 + 0xb8);
            if (*(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x8 !=
                *(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x34) {
              iVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                                 (&this->VisibleFastResponseRenderAssetIndices,local_res18[0],
                                  (int *)local_res18);
              if (iVar10 != 0) {
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                          (&this->VisibleFastResponseRenderAssetIndices,local_res20,
                           (bool *)local_res10);
              }
            }
            *(uint *)(lVar5 + 0xb8) = uVar3;
          }
        }
        break;
      }
      uVar9 = 0;
      if ((int)uVar3 < iVar10) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (*(longlong *)
           ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
           (longlong)(int)uVar3 * 0xb8) != 0) goto LAB_1487b363a;
      uVar9 = 0;
      if ((int)uVar3 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                (&this->AsyncUnsafeStreamingRenderAssets,uVar3);
    }
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// PropagateLightingScenarioChange @ 1487b3780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::PropagateLightingScenarioChange(FRenderAssetStreamingManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FLevelRenderAssetManager *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FRenderAssetStreamingManager *this_01;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::PropagateLightingScenarioChange(void)_::_2_::FStat_STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange>
  FVar10;
  uint uVar11;
  longlong lVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<ULevel_*> FVar16;
  ForElementType<ULevel_*> FVar17;
  undefined1 auStackY_1f8 [32];
  undefined1 local_198;
  undefined1 local_197 [7];
  ULevel *local_190;
  FColor_u_0 local_188 [2];
  FName local_180;
  uint local_178;
  uint uStack_174;
  FName local_170;
  FRenderAssetStreamingManager *local_160;
  FName local_158;
  FName local_150;
  ForElementType<ULevel_*> local_148;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    return;
  }
  local_160 = this;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange ==
        (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::PropagateLightingScenarioChange(void)_::_2_::FStat_STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange>
         )0x0) {
      pFVar9 = ::FName::FName(&local_158,
                              "STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange,*pFVar9,
                 L"STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange;
  if (StatPtr_STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::PropagateLightingScenarioChange(void)_::_2_::FStat_STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange>
       )0x0) {
    pFVar9 = ::FName::FName(&local_150,
                            "STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FRenderAssetStreamingManager::PropagateLightingScenarioChange(void)_::_2_::FStat_STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange
                          ,*pFVar9,
                          L"STAT_FRenderAssetStreamingManager_PropagateLightingScenarioChange",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_180.ComparisonIndex.Value = FVar13.Value;
        local_180.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_180,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                   ,0x8c7);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_178 = FVar13.Value;
      uStack_174 = uVar11;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar6 = true;
      goto LAB_1487b3931;
    }
  }
  bVar6 = false;
  FVar14 = local_170;
LAB_1487b3931:
  local_148.SecondaryData = (ForElementType<ULevel_*>)0x0;
  local_40 = 0;
  local_3c = 0x20;
  if ((this->LevelRenderAssetManagersLock != (FScopedLevelRenderAssetManagersLock *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!LevelRenderAssetManagersLock",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                         ,0x8cc,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar15 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
  iVar3 = (this->LevelRenderAssetManagers).ArrayNum;
  pFVar2 = pFVar15 + (longlong)iVar3 * 8;
  FVar17 = local_148.SecondaryData;
  do {
    if ((this->LevelRenderAssetManagers).ArrayNum != iVar3) {
      local_198 = 0;
      `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_198);
      FVar17 = local_148.SecondaryData;
    }
    this_01 = local_160;
    if (pFVar15 == pFVar2) {
      piVar1 = &(this->LevelRenderAssetManagers).ArrayMax;
      (this->LevelRenderAssetManagers).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->LevelRenderAssetManagers).AllocatorInstance,0,piVar1);
        FVar17 = local_148.SecondaryData;
      }
      iVar3 = local_40;
      FVar16 = (ForElementType<ULevel_*>)&local_148;
      if (FVar17 != (ForElementType<ULevel_*>)0x0) {
        FVar16 = FVar17;
      }
      FVar17 = (ForElementType<ULevel_*>)((longlong)FVar16 + (longlong)local_40 * 8);
      while( true ) {
        if (local_40 != iVar3) {
          `TCheckedPointerIterator<ULevel_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_197);
        }
        if (FVar16 == FVar17) break;
        AddLevel(this_01,*(ULevel **)FVar16);
        FVar16 = (ForElementType<ULevel_*>)((longlong)FVar16 + 8);
      }
      if (local_148.SecondaryData != (ForElementType<ULevel_*>)0x0) {
        FMemory::Free((void *)local_148.SecondaryData);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FThreadStats::AddMessage(FVar14,CycleScopeEnd);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&this_01->CriticalSection);
      return;
    }
    this_00 = *(FLevelRenderAssetManager **)pFVar15;
    if (this_00 != (FLevelRenderAssetManager *)0x0) {
      local_190 = this_00->Level;
      FVar16 = (ForElementType<ULevel_*>)&local_148;
      if (FVar17 != (ForElementType<ULevel_*>)0x0) {
        FVar16 = FVar17;
      }
      if ((ulonglong)FVar16 <= &local_190) {
        FVar16 = (ForElementType<ULevel_*>)&local_148;
        if (FVar17 != (ForElementType<ULevel_*>)0x0) {
          FVar16 = FVar17;
        }
        if ((&local_190 < (ULevel **)((longlong)FVar16 + (longlong)local_3c * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), FVar17 = local_148.SecondaryData, bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<ULevel_*>_>
                             (0x808,&local_148,&local_3c);
        FVar17 = local_148.SecondaryData;
      }
      lVar12 = (longlong)local_40;
      FVar16 = (ForElementType<ULevel_*>)&local_148;
      if (FVar17 != (ForElementType<ULevel_*>)0x0) {
        FVar16 = FVar17;
      }
      local_40 = local_40 + 1;
      *(ULevel **)((longlong)FVar16 + lVar12 * 8) = local_190;
      FLevelRenderAssetManager::Remove
                (this_00,(TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                          *)0x0);
      FLevelRenderAssetManager::_scalar_deleting_destructor_(this_00,1);
      FVar17 = local_148.SecondaryData;
    }
    pFVar15 = pFVar15 + 8;
  } while( true );
}

// RemoveLevel @ 1487b9040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::RemoveLevel(FRenderAssetStreamingManager *this,ULevel *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScopedLevelRenderAssetManagersLock *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  FLevelRenderAssetManager **local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  FLevelRenderAssetManager *local_98;
  TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_90;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    return;
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == (ULevel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Level",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                       ,0x3b3,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((((uint)param_1->_padding_ >> 0x1e & 1) == 0) && ((param_1->_padding_ & 0x18000) == 0))
  goto LAB_1487b9300;
  uVar8 = 0;
  if (0 < (this->LevelRenderAssetManagers).ArrayNum) {
    lVar9 = 0;
    do {
      iVar7 = (this->LevelRenderAssetManagers).ArrayNum;
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_c8 = (FLevelRenderAssetManager **)(longlong)(int)uVar8;
        local_c0 = (FScriptContainerElement *)(longlong)iVar7;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_98 = *(FLevelRenderAssetManager **)
                  ((this->LevelRenderAssetManagers).AllocatorInstance.Data + lVar9);
      if ((local_98 != (FLevelRenderAssetManager *)0x0) && (local_98->Level == param_1)) {
        iVar7 = (this->LevelRenderAssetManagers).ArrayNum;
        uVar6 = 0;
        if ((int)uVar8 < iVar7) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          local_c8 = (FLevelRenderAssetManager **)(longlong)(int)uVar8;
          local_c0 = (FScriptContainerElement *)(longlong)iVar7;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        *(undefined8 *)
         ((this->LevelRenderAssetManagers).AllocatorInstance.Data + (longlong)(int)uVar8 * 8) = 0;
        pFVar2 = this->LevelRenderAssetManagersLock;
        if (pFVar2 == (FScopedLevelRenderAssetManagersLock *)0x0) {
          local_90.AllocatorInstance.SecondaryData =
               (ForElementType<UStreamableRenderAsset_const_*>)0x0;
          local_90.ArrayNum = 0;
          local_90.ArrayMax = 0xc;
          FLevelRenderAssetManager::Remove(local_98,&local_90);
          SetRenderAssetsRemovedTimestamp(this,&local_90);
          if (local_98 != (FLevelRenderAssetManager *)0x0) {
            FLevelRenderAssetManager::_scalar_deleting_destructor_(local_98,1);
          }
          if (local_90.AllocatorInstance.SecondaryData !=
              (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
            FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
          }
        }
        else {
          pFVar3 = (pFVar2->PendingRemoveLevelManagers).AllocatorInstance.Data;
          if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
             (lVar9 = (longlong)(pFVar2->PendingRemoveLevelManagers).ArrayMax,
             (FScriptContainerElement *)&local_98 < pFVar3 + lVar9 * 8)) {
            local_b0 = (longlong)(pFVar2->PendingRemoveLevelManagers).ArrayNum;
            local_a8 = 8;
            local_c8 = &local_98;
            local_c0 = pFVar3;
            local_b8 = lVar9;
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar7 = (pFVar2->PendingRemoveLevelManagers).ArrayNum;
          piVar1 = &(pFVar2->PendingRemoveLevelManagers).ArrayMax;
          if (iVar7 == *piVar1) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&(pFVar2->PendingRemoveLevelManagers).AllocatorInstance,piVar1)
            ;
          }
          (pFVar2->PendingRemoveLevelManagers).ArrayNum = iVar7 + 1;
          *(FLevelRenderAssetManager **)
           ((pFVar2->PendingRemoveLevelManagers).AllocatorInstance.Data + (longlong)iVar7 * 8) =
               local_98;
        }
        break;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->LevelRenderAssetManagers).ArrayNum);
  }
LAB_1487b9300:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveStaticReferences @ 1487ba390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::RemoveStaticReferences
          (FRenderAssetStreamingManager *this,UPrimitiveComponent *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  ULevel *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  UPrimitiveComponent *local_b0;
  TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    lpCriticalSection = &this->CriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1 == (UPrimitiveComponent *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Primitive",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                         ,0x478,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (param_1->bAttachedToStreamingManagerAsStatic != '\0') {
      local_a8.AllocatorInstance.SecondaryData = (ForElementType<UStreamableRenderAsset_const_*>)0x0
      ;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0xc;
      pUVar6 = UActorComponent::GetComponentLevel((UActorComponent *)param_1);
      if (this->LevelRenderAssetManagersLock != (FScopedLevelRenderAssetManagersLock *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!LevelRenderAssetManagersLock",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                           ,0x47e,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar7 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
      iVar2 = (this->LevelRenderAssetManagers).ArrayNum;
      pFVar1 = pFVar7 + (longlong)iVar2 * 8;
      while( true ) {
        if ((this->LevelRenderAssetManagers).ArrayNum != iVar2) {
          `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_b8);
        }
        if (pFVar7 == pFVar1) break;
        plVar3 = *(longlong **)pFVar7;
        if ((plVar3 != (longlong *)0x0) &&
           ((pUVar6 == (ULevel *)0x0 || ((ULevel *)*plVar3 == pUVar6)))) {
          local_b0 = param_1;
          FStaticRenderAssetInstanceManager::FTasks::SyncResults((FTasks *)(plVar3 + 4));
          if (plVar3[6] == 0) {
            FRenderAssetInstanceState::RemoveComponent
                      ((FRenderAssetInstanceState *)plVar3[3],param_1,&local_a8);
          }
          else {
            FRenderAssetInstanceState::RemoveComponentReferences
                      ((FRenderAssetInstanceState *)plVar3[3],param_1);
          }
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                    ((TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)(plVar3 + 9)
                     ,&local_b0,Default);
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
                    ((TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)
                     (plVar3 + 0xb),&local_b0,Default);
        }
        pFVar7 = pFVar7 + 8;
      }
      param_1->bAttachedToStreamingManagerAsStatic = '\0';
      if (local_a8.AllocatorInstance.SecondaryData !=
          (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
        FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// RemoveStreamingRenderAsset @ 1487ba5b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::RemoveStreamingRenderAsset
          (FRenderAssetStreamingManager *this,UStreamableRenderAsset *param_1)

{
  int *piVar1;
  TSharedPtr<int,1> *pTVar2;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FBaseGraphTask *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FSimpleStreamableAssetManager *lpCriticalSection_00;
  bool bVar7;
  bool bVar8;
  DWORD DVar9;
  uint uVar10;
  int iVar11;
  FWriteBuffer *pFVar12;
  uint uVar13;
  TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord> *this_00;
  TReferenceControllerBase<1> *pTVar14;
  ForElementType<FSetElementId> FVar15;
  longlong lVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined1 auStackY_108 [32];
  uint local_b8;
  char local_b4;
  FLLMScope local_b0;
  FLLMScope local_ac;
  FLLMScope local_a8 [2];
  uint local_a0 [2];
  TReferenceControllerBase<1> *local_98;
  FSharedReferencer<1> FStack_90;
  LARGE_INTEGER local_88;
  LARGE_INTEGER local_80;
  FMemScope local_78;
  FRemovedAssetRecord local_70;
  TLogScope<0> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_108;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    if ((FSimpleStreamableAssetManager::Instance == (FSimpleStreamableAssetManager *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\SimpleStreamableAssetManager.cpp"
                           ,0x5a,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lpCriticalSection_00 = FSimpleStreamableAssetManager::Instance;
    local_b4 = FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0;
    if ((bool)local_b4) {
      EnterCriticalSection((LPCRITICAL_SECTION)FSimpleStreamableAssetManager::Instance);
    }
    pTVar2 = &param_1->SimpleStreamableAssetManagerIndex;
    local_70.SimpleStreamableAssetManagerIndex.Object = pTVar2->Object;
    pTVar14 = (TReferenceControllerBase<1> *)0x0;
    local_70.SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController =
         (param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController;
    this_00 = &FSimpleStreamableAssetManager::Instance->RemovedAssetsRecords;
    (param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar2->Object = (int *)0x0;
    local_70.AssetElementIndex = -1;
    local_70.StreamableRenderAsset_ForDebug = param_1;
    TLocklessGrowingStorage<FSimpleStreamableAssetManager::FRemovedAssetRecord>::Push
              (this_00,&local_70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.SimpleStreamableAssetManagerIndex.SharedReferenceCount.ReferenceController);
    FStack_90.ReferenceController = ::operator_new(0x18);
    if (FStack_90.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      pTVar17 = (TReferenceControllerBase<1> *)&DAT_00000010;
      local_98 = ___xmm_00000000000000000000000000000010;
      FStack_90.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_90.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pTVar17 = FStack_90.ReferenceController + 1;
      (FStack_90.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_90.ReferenceController)->_padding_ =
           (longlong)&___7__TIntrusiveReferenceController_H_00_SharedPointerInternals__6B_;
      *(undefined4 *)&FStack_90.ReferenceController[1]._padding_ = 0xffffffff;
      if ((pTVar17 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      (FStack_90.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_90.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar14 = FStack_90.ReferenceController;
      local_98 = pTVar17;
    }
    if (pTVar2 != (TSharedPtr<int,1> *)&local_98) {
      pTVar2->Object = (int *)pTVar17;
      local_98 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->SimpleStreamableAssetManagerIndex).SharedReferenceCount,&FStack_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_90.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    if (local_b4 != '\0') {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    }
  }
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  FLLMScope::FLLMScope(local_a8,StreamingManager,false,None,Default,true);
  FMemScope::FMemScope(&local_78,StreamingManager,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_ac,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_b0,AssetClasses,Default);
  bVar7 = -1 < MetadataChannel->Enabled;
  if (bVar7) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_50);
    *(undefined8 *)(local_50._8_8_ + 0x28) = *(undefined8 *)(local_50._8_8_ + 0x20);
  }
  pFVar4 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if ((pFVar4 != (FBaseGraphTask *)0x0) &&
     (DVar9 = GetCurrentThreadId(), DVar9 != *(DWORD *)&pFVar4->field_0x48)) {
    FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
  }
  QueryPerformanceCounter(&local_88);
  (this->GatheredStats).CallbacksCycles = -local_88.s.LowPart;
  local_b8 = param_1->StreamingIndex;
  lVar16 = (longlong)(int)local_b8;
  if ((-1 < (int)local_b8) && ((int)local_b8 < (this->PendingStreamingRenderAssets).ArrayNum)) {
    uVar13 = 0;
    if ((int)local_b8 < (this->PendingStreamingRenderAssets).ArrayNum) {
      uVar13 = ~local_b8 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar13 = local_b8;
    if (*(UStreamableRenderAsset **)
         ((this->PendingStreamingRenderAssets).AllocatorInstance.Data + lVar16 * 8) == param_1) {
      uVar10 = 0;
      if ((int)local_b8 < (this->PendingStreamingRenderAssets).ArrayNum) {
        uVar10 = ~local_b8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined8 *)
       ((this->PendingStreamingRenderAssets).AllocatorInstance.Data + (longlong)(int)uVar13 * 8) = 0
      ;
      goto LAB_1487bab2d;
    }
  }
  if ((-1 < (int)local_b8) &&
     (iVar11 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum, (int)local_b8 < iVar11)) {
    lVar16 = (longlong)(int)local_b8;
    uVar13 = 0;
    if ((int)local_b8 < iVar11) {
      uVar13 = ~local_b8 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar13 = local_b8;
    if (*(UStreamableRenderAsset **)
         ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data + lVar16 * 0xb8) ==
        param_1) {
      uVar10 = 0;
      if ((int)local_b8 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
        uVar10 = ~local_b8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar3 = &this->RemovedRenderAssetIndices;
      *(undefined8 *)
       ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
       (longlong)(int)uVar13 * 0xb8) = 0;
      pFVar5 = (pTVar3->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 <
           pFVar5 + (longlong)(this->RemovedRenderAssetIndices).ArrayMax * 4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar11 = (this->RemovedRenderAssetIndices).ArrayNum;
      piVar1 = &(this->RemovedRenderAssetIndices).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar3->AllocatorInstance,piVar1);
      }
      (this->RemovedRenderAssetIndices).ArrayNum = iVar11 + 1;
      *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_b8;
      if (*(int *)&(this->FastResponseRenderAssets).Elements.field_0x8 !=
          *(int *)&(this->FastResponseRenderAssets).Elements.field_0x34) {
        FVar15 = (this->FastResponseRenderAssets).Hash.SecondaryData;
        uVar13 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
                 -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        if (FVar15 == (ForElementType<FSetElementId>)0x0) {
          FVar15 = (ForElementType<FSetElementId>)&(this->FastResponseRenderAssets).Hash;
        }
        iVar11 = *(int *)((longlong)FVar15 +
                         (((ulonglong)(uVar13 >> 0x10) ^ (longlong)(int)uVar13) &
                         (longlong)(this->FastResponseRenderAssets).HashSize - 1U) * 4);
        if (iVar11 != -1) {
          lVar16 = *(longlong *)&(this->FastResponseRenderAssets).Elements;
          do {
            if (*(UStreamableRenderAsset **)(lVar16 + (longlong)iVar11 * 0x10) == param_1) {
              TSet<UStreamableRenderAsset_*,DefaultKeyFuncs<UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
              ::RemoveByIndex(&this->FastResponseRenderAssets,iVar11);
              break;
            }
            iVar11 = *(int *)(lVar16 + 8 + (longlong)iVar11 * 0x10);
          } while (iVar11 != -1);
        }
      }
      local_a0[0] = local_b8;
      if (*(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x8 !=
          *(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x34) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  (&this->VisibleFastResponseRenderAssetIndices,local_b8,(int *)local_a0);
      }
    }
  }
LAB_1487bab2d:
  param_1->bHasStreamingUpdatePending = '\0';
  param_1->StreamingIndex = -1;
  TSet<TObjectPtr<UStreamableRenderAsset>,FRenderAssetStreamingManager::FPointerKeyFunc,FDefaultSetAllocator>
  ::Remove(&this->ReferencedRenderAssets,param_1);
  QueryPerformanceCounter(&local_80);
  (this->GatheredStats).CallbacksCycles = (this->GatheredStats).CallbacksCycles + local_80.s.LowPart
  ;
  if (bVar7) {
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar16 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar16 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
  }
  FLLMScope::~FLLMScope(&local_b0);
  FLLMScope::~FLLMScope(&local_ac);
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(local_a8);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ResetMaxEverRequired @ 1487bfea0

void __thiscall
FRenderAssetStreamingManager::ResetMaxEverRequired(FRenderAssetStreamingManager *this)

{
  this->MaxEverRequired = 0;
  return;
}

// SetDisregardWorldResourcesForFrames @ 1487c1a60

void __thiscall
FRenderAssetStreamingManager::SetDisregardWorldResourcesForFrames
          (FRenderAssetStreamingManager *this,int param_1)

{
  return;
}

// SetLastUpdateTime @ 1487c2740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FRenderAssetStreamingManager::SetLastUpdateTime(FRenderAssetStreamingManager *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  ULevel *this_00;
  bool bVar4;
  UWorld *pUVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  undefined1 local_res10 [8];
  
  fVar7 = 0.0;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    pFVar6 = (this->LevelRenderAssetManagers).AllocatorInstance.Data;
    iVar3 = (this->LevelRenderAssetManagers).ArrayNum;
    pFVar2 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      while( true ) {
        if ((this->LevelRenderAssetManagers).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FLevelRenderAssetManager_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if (pFVar6 == pFVar2) goto LAB_1487c28ac;
        if (*(undefined8 **)pFVar6 != (undefined8 *)0x0) break;
        pFVar6 = pFVar6 + 8;
        fVar7 = 0.0;
      }
      this_00 = (ULevel *)**(undefined8 **)pFVar6;
      if (((this_00 == (ULevel *)0x0) ||
          (pUVar5 = ULevel::GetWorld(this_00), pUVar5 == (UWorld *)0x0)) ||
         (bVar4 = UWorld::IsPaused(pUVar5), bVar4)) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = (float)pUVar5->TimeSeconds;
      }
      if (0.0 < fVar7) break;
      pFVar6 = pFVar6 + 8;
    }
  }
  else {
    if (FSimpleStreamableAssetManager::GSimpleStreamableAssetManagerConsiderVisibility == 0) {
      return;
    }
    pFVar6 = (GEngine->WorldList).Array.AllocatorInstance.Data;
    piVar1 = &(GEngine->WorldList).Array.ArrayNum;
    iVar3 = *piVar1;
    pFVar2 = pFVar6 + (longlong)iVar3 * 8;
    while( true ) {
      while( true ) {
        if (*piVar1 != iVar3) {
          `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar6 == pFVar2) goto LAB_1487c28ac;
        pUVar5 = *(UWorld **)(*(longlong *)pFVar6 + 0x2c0);
        if ((pUVar5 != (UWorld *)0x0) && (bVar4 = UWorld::IsPaused(pUVar5), !bVar4)) break;
        pFVar6 = pFVar6 + 8;
        fVar7 = 0.0;
      }
      fVar7 = (float)pUVar5->TimeSeconds;
      if (0.0 < fVar7) break;
      pFVar6 = pFVar6 + 8;
    }
  }
LAB_1487c28b1:
  this->LastWorldUpdateTime = fVar7 - __real_3f000000;
  return;
LAB_1487c28ac:
  if (fVar7 <= 0.0) {
    return;
  }
  goto LAB_1487c28b1;
}

// SetRenderAssetsRemovedTimestamp @ 1487c3410

void __thiscall
FRenderAssetStreamingManager::SetRenderAssetsRemovedTimestamp
          (FRenderAssetStreamingManager *this,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  ForElementType<UStreamableRenderAsset_const_*> FVar1;
  UStreamableRenderAsset *pUVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  code *pcVar5;
  atomic<double> aVar6;
  bool bVar7;
  FStreamingRenderAsset *pFVar8;
  uint uVar9;
  ForElementType<UStreamableRenderAsset_const_*> FVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  
  aVar6 = FApp::CurrentTime;
  uVar12 = 0;
  iVar14 = param_1->ArrayNum;
  if (0 < iVar14) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < iVar14) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar1 = (param_1->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<UStreamableRenderAsset_const_*>)param_1;
      if (FVar1 != (ForElementType<UStreamableRenderAsset_const_*>)0x0) {
        FVar10 = FVar1;
      }
      pUVar2 = *(UStreamableRenderAsset **)(lVar13 + (longlong)FVar10);
      uVar9 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (*(int *)&(this->ReferencedRenderAssets).Elements.field_0x8 !=
          *(int *)&(this->ReferencedRenderAssets).Elements.field_0x34) {
        FVar3 = (this->ReferencedRenderAssets).Hash.SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&(this->ReferencedRenderAssets).Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar3;
        }
        iVar14 = *(int *)((longlong)FVar11 +
                         (ulonglong)
                         ((this->ReferencedRenderAssets).HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) *
                         4);
        if (iVar14 != -1) {
          lVar4 = *(longlong *)&(this->ReferencedRenderAssets).Elements;
          do {
            if (*(UStreamableRenderAsset **)(lVar4 + (longlong)iVar14 * 0x10) == pUVar2) {
              pFVar8 = GetStreamingRenderAsset(this,pUVar2);
              if (pFVar8 != (FStreamingRenderAsset *)0x0) {
                pFVar8->InstanceRemovedTimestamp = (double)aVar6;
              }
              break;
            }
            iVar14 = *(int *)(lVar4 + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
      }
      iVar14 = param_1->ArrayNum;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar12 < iVar14);
  }
  return;
}

// StreamOutRenderAssetData @ 1487c6520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FRenderAssetStreamingManager::StreamOutRenderAssetData
          (FRenderAssetStreamingManager *this,long64 param_1)

{
  FIdentityFunctor FVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  DWORD DVar9;
  longlong lVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  FWriteBuffer *pFVar12;
  ulonglong uVar13;
  undefined ***pppuVar14;
  int iVar15;
  uint uVar16;
  FStreamingRenderAsset *this_02;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStackY_168 [32];
  uint local_114;
  ForAnyElementType local_110;
  int local_108;
  int local_104;
  FLLMScope local_100;
  FLLMScope local_fc;
  FLLMScope local_f8 [2];
  longlong local_f0;
  ulonglong local_e8;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_e0;
  long64 local_d8;
  longlong local_d0;
  FMemScope local_c8;
  undefined1 local_c0 [8];
  code *local_b8 [2];
  undefined **local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  code *pcStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  TLogScope<0> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_d8 = param_1;
  if (&this->CriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  FLLMScope::FLLMScope(local_f8,StreamingManager,false,None,Default,true);
  FMemScope::FMemScope(&local_c8,StreamingManager,true);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_fc,Assets,Default);
  FLLMClearScope::FLLMClearScope((FLLMClearScope *)&local_100,AssetClasses,Default);
  bVar20 = -1 < MetadataChannel->Enabled;
  if (bVar20) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_48);
    *(undefined8 *)(local_48._8_8_ + 0x28) = *(undefined8 *)(local_48._8_8_ + 0x20);
  }
  pFVar3 = (this->StreamingRenderAssetsSyncEvent).Reference;
  local_d0 = (longlong)(this->Settings).MaxTempMemoryAllowed << 0x14;
  FVar1 = (FIdentityFunctor)this->bPauseRenderAssetStreaming;
  if ((pFVar3 != (FBaseGraphTask *)0x0) &&
     (DVar9 = GetCurrentThreadId(), DVar9 != *(DWORD *)&pFVar3->field_0x48)) {
    FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
  }
  iVar15 = this->ProcessingStage;
  this->bPauseRenderAssetStreaming = true;
  while (iVar15 != 0) {
    UpdateResourceStreaming(this,0.0,false);
    iVar15 = this->ProcessingStage;
  }
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
  FAsyncTaskBase::EnsureCompletion
            ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
  CheckUserSettings(this);
  ProcessRemovedRenderAssets(this);
  ProcessAddedRenderAssets(this);
  FRenderAssetStreamingSettings::Update(&this->Settings);
  ConditionalUpdateStaticData(this);
  IncrementalUpdate(this,__real_3f800000,false);
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    ProcessLevelsToReferenceToStreamedTextures(this);
  }
  uVar18 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  uVar17 = 0;
  local_110.Data = (FScriptContainerElement *)0x0;
  local_104 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  local_108 = 0;
  if (uVar18 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18,&local_110,0,&local_104);
  }
  iVar15 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  local_114 = 0;
  uVar13 = uVar17;
  if (0 < iVar15) {
    do {
      uVar16 = (uint)uVar13;
      uVar18 = 0;
      if ((int)uVar16 < iVar15) {
        uVar18 = ~uVar16 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
      lVar10 = (longlong)(int)uVar16 * 0xb8;
      if (((((pFVar4[lVar10 + 0x94] != (FScriptContainerElement)0x1) ||
            (*(int *)(pFVar4 + lVar10 + 0x1c) != 0x1d)) && (((byte)pFVar4[lVar10 + 0x96] & 4) == 0))
          && (((byte)pFVar4[lVar10 + 0x96] & 0x50) != 0x50)) &&
         (((this->Settings).bFullyLoadMeshes == false ||
          (pFVar4[lVar10 + 0x94] == (FScriptContainerElement)0x1)))) {
        if ((local_110.Data <= (FScriptContainerElement *)&local_114) &&
           (((FScriptContainerElement *)&local_114 < local_110.Data + (longlong)local_104 * 4 &&
            (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)))) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        if (local_108 == local_104) {
          local_108 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_110,&local_104);
        }
        lVar10 = (longlong)local_108;
        local_108 = local_108 + 1;
        *(uint *)(local_110.Data + lVar10 * 4) = local_114;
      }
      iVar15 = (this->AsyncUnsafeStreamingRenderAssets).ArrayNum;
      local_114 = local_114 + 1;
      uVar13 = (ulonglong)local_114;
    } while ((int)local_114 < iVar15);
  }
  local_e0 = &this->AsyncUnsafeStreamingRenderAssets;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>
            ((int *)local_110.Data,local_108,FVar1,
             (FCompareRenderAssetByRetentionPriority *)&local_e0);
  uVar18 = local_108 - 1;
  local_f0 = 0;
  if (-1 < (int)uVar18) {
    lVar10 = (longlong)(int)uVar18 * 4;
    do {
      local_e8 = uVar17;
      if (local_d8 <= (longlong)uVar17) break;
      uVar16 = 0;
      if ((int)uVar18 < local_108) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar15 = *(int *)(local_110.Data + lVar10);
      if ((-1 < iVar15) && (iVar15 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
        if ((iVar15 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        this_02 = (FStreamingRenderAsset *)
                  ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                  (longlong)iVar15 * 0xb8);
        if (this_02->RenderAsset != (UStreamableRenderAsset *)0x0) {
          cVar8 = this_02->MinAllowedMips;
          if ((cVar8 < '\x01') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InMipCount > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                                 ,0x38,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar13 = 8;
          if (this_02->RenderAssetType == Texture) {
            uVar13 = 0x10;
          }
          if ((uVar13 < ((longlong)cVar8 & 0xffffffffU)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                                 ,0x39,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar15 = *(int *)((longlong)(&(this_02->LevelIndexUsage).AllocatorInstance + -5) +
                           (longlong)cVar8 * 4);
          cVar8 = this_02->ResidentMips;
          if ((cVar8 < '\x01') &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InMipCount > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                                 ,0x38,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          uVar13 = 8;
          if (this_02->RenderAssetType == Texture) {
            uVar13 = 0x10;
          }
          if ((uVar13 < ((longlong)cVar8 & 0xffffffffU)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                                 ,0x39,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
          iVar2 = *(int *)((longlong)(&(this_02->LevelIndexUsage).AllocatorInstance + -5) +
                          (longlong)cVar8 * 4);
          cVar8 = (**(code **)(this_02->RenderAsset->_padding_ + 0x2d0))
                            (this_02->RenderAsset,(int)this_02->MinAllowedMips);
          if (cVar8 != '\0') {
            lVar19 = local_f0 + iVar15;
            uVar17 = uVar17 + (longlong)(iVar2 - iVar15);
            local_f0 = lVar19;
            FStreamingRenderAsset::UpdateStreamingStatus
                      (this_02,SUB81(local_c0,0),
                       (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
            if (local_d0 <= lVar19) {
              local_a8 = &
                         ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
              ;
              pcStack_a0 = `FRenderAssetStreamingManager::StreamOutRenderAssetData'::__l25::
                           <lambda_1>::<lambda_invoker_cdecl>;
              local_b8[0] = UE::Core::Private::Function::
                            TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                            ::Call;
              local_90 = (undefined ***)0x0;
              this_00 = FRenderCommandList::GetInstanceTLS();
              if (this_00 == (FRenderCommandList *)0x0) {
                FRenderThreadCommandPipe::
                Enqueue<TRenderCommandTag<_FRenderAssetStreamingManager::StreamOutRenderAssetData_::__l25::TSTR_FlushResourceCommand436>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
              }
              else {
                this_01 = FRenderCommandList::GetRenderThread(this_00);
                local_88._0_8_ = local_b8[0];
                local_60 = local_90;
                local_90 = (undefined ***)0x0;
                local_78 = local_a8;
                pcStack_70 = pcStack_a0;
                local_68 = local_98;
                local_b8[0] = (code *)0x0;
                local_58 = 2;
                pFVar11 = (FRenderCommandTag *)
                          TRenderCommandTag<`FRenderAssetStreamingManager::StreamOutRenderAssetData'::__l25::TSTR_FlushResourceCommand436>
                          ::Get();
                UE::RenderCommandPipe::FCommandList::Enqueue
                          (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                                    *)local_88,pFVar11);
                uVar13 = (ulonglong)local_58;
                if ((2 < uVar13) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                       ,0xd4,L""), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  uVar7 = (*pcVar5)();
                  return (bool)uVar7;
                }
                if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar13] ==
                    UE::Core::Private::
                    TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
                    Destruct) {
                  if ((code *)local_88._0_8_ != (code *)0x0) {
                    pppuVar14 = (undefined ***)(local_88 + 0x10);
                    if (local_60 != (undefined ***)0x0) {
                      pppuVar14 = local_60;
                    }
                    (*(code *)(*pppuVar14)[2])();
                  }
                }
                else {
                  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                              ::__l2::Destructors)[uVar13])(local_88);
                }
              }
              if (local_b8[0] != (code *)0x0) {
                pppuVar14 = &local_a8;
                if (local_90 != (undefined ***)0x0) {
                  pppuVar14 = local_90;
                }
                (*(code *)(*pppuVar14)[2])();
              }
              FlushRenderingCommands();
              local_f0 = 0;
            }
          }
        }
      }
      lVar10 = lVar10 + -4;
      uVar18 = uVar18 - 1;
      local_e8 = uVar17;
    } while (-1 < (int)uVar18);
  }
  this->bPauseRenderAssetStreaming = (bool)FVar1;
  if (4 < (byte)LogContentStreaming._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogContentStreaming);
  }
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (bVar20) {
    lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar10 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar12 = *(FWriteBuffer **)(lVar10 + 0x20);
    if ((int)pFVar12 - *(int *)&pFVar12->Cursor < 1) {
      pFVar12 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar12->Cursor = '\n';
    pFVar12->Cursor = pFVar12->Cursor + 1;
    pFVar12->Committed = pFVar12->Cursor;
  }
  FLLMScope::~FLLMScope(&local_100);
  FLLMScope::~FLLMScope(&local_fc);
  FMemScope::~FMemScope(&local_c8);
  FLLMScope::~FLLMScope(local_f8);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->CriticalSection);
  return true;
}

// StreamRenderAssets @ 1487c6d60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::StreamRenderAssets(FRenderAssetStreamingManager *this,bool param_1)

{
  undefined1 *puVar1;
  TArray<FRenderAssetStreamingManager::FPendingMipCopyRequest,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  FBaseGraphTask *pFVar6;
  ForElementType<FSetElementId> FVar7;
  code *pcVar8;
  TConsoleVariableData<int> *pTVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  byte bVar12;
  DWORD DVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ForElementType<FSetElementId> FVar20;
  FScriptContainerElement *pFVar21;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  FScriptContainerElement *pFVar22;
  byte bVar23;
  FScriptContainerElement *pFVar24;
  uint *puVar25;
  FAsyncTask<FRenderAssetStreamingMipCalcTask> *this_01;
  FStreamingRenderAsset *this_02;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8 [8];
  FScriptContainerElement *local_d0;
  uint local_c8;
  FAsyncTask<FRenderAssetStreamingMipCalcTask> *local_c0;
  int local_b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_88;
  int iStack_80;
  uint uStack_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  undefined4 uStack_64;
  undefined4 local_3c;
  
  pFVar6 = (this->StreamingRenderAssetsSyncEvent).Reference;
  if ((pFVar6 != (FBaseGraphTask *)0x0) &&
     (DVar13 = GetCurrentThreadId(), DVar13 != *(DWORD *)&pFVar6->field_0x48)) {
    FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
  }
  this_01 = this->AsyncWork;
  local_c0 = this_01;
  FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)this_01);
  if ((this->bPauseRenderAssetStreaming == false) || (param_1)) {
    pFVar22 = (this_01->Task).CancelationRequests.AllocatorInstance.Data;
    iVar15 = (this_01->Task).CancelationRequests.ArrayNum;
    pFVar24 = pFVar22 + (longlong)iVar15 * 4;
    while( true ) {
      if ((this_01->Task).CancelationRequests.ArrayNum != iVar15) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      pTVar9 = CVarTextureStreamingAmortizeCPUToGPUCopy.Ref;
      if (pFVar22 == pFVar24) break;
      uVar5 = *(uint *)pFVar22;
      if ((-1 < (int)uVar5) && ((int)uVar5 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
        if (*(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x8 !=
            *(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x34) {
          FVar7 = (this->VisibleFastResponseRenderAssetIndices).Hash.SecondaryData;
          FVar20 = (ForElementType<FSetElementId>)
                   &(this->VisibleFastResponseRenderAssetIndices).Hash;
          if (FVar7 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = FVar7;
          }
          iVar14 = *(int *)((longlong)FVar20 +
                           (ulonglong)
                           ((this->VisibleFastResponseRenderAssetIndices).HashSize - 1U & uVar5) * 4
                           );
          if (iVar14 != -1) {
            lVar19 = *(longlong *)&(this->VisibleFastResponseRenderAssetIndices).Elements;
            do {
              if (*(uint *)(lVar19 + (longlong)iVar14 * 0xc) == uVar5) goto LAB_1487c6ebc;
              iVar14 = *(int *)(lVar19 + 4 + (longlong)iVar14 * 0xc);
            } while (iVar14 != -1);
          }
        }
        if (((int)uVar5 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FStreamingRenderAsset::CancelStreamingRequest
                  ((FStreamingRenderAsset *)
                   ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                   (longlong)(int)uVar5 * 0xb8));
      }
LAB_1487c6ebc:
      pFVar22 = pFVar22 + 4;
    }
    if (!param_1) {
      bVar11 = IsInParallelGameThread();
      if (((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) &&
         (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pTVar10 = CVarTextureStreamingMaxNumTexturesToStreamPerFrame.Ref;
      if (pTVar9->ShadowedValue[0] != 0) {
        bVar11 = IsInParallelGameThread();
        if (((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (0 < pTVar10->ShadowedValue[0]) {
          pTVar2 = &this->PendingMipCopyRequests;
          piVar3 = &(this->PendingMipCopyRequests).ArrayMax;
          (this->PendingMipCopyRequests).ArrayNum = 0;
          if ((this->PendingMipCopyRequests).ArrayMax < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar3);
          }
          this->CurrentPendingMipCopyRequestIdx = 0;
          local_c8 = (local_c0->Task).LoadRequests.ArrayNum;
          uVar18 = (ulonglong)(int)local_c8;
          pFVar24 = (local_c0->Task).LoadRequests.AllocatorInstance.Data;
          local_d0 = pFVar24 + uVar18 * 4;
          pFVar22 = local_d0;
LAB_1487c6fc2:
          do {
            if ((local_c0->Task).LoadRequests.ArrayNum != (int)uVar18) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res18);
            }
            this_01 = local_c0;
            if (pFVar24 == pFVar22) goto LAB_1487c728f;
            uVar5 = *(uint *)&pFVar24->field_0x0;
            if ((-1 < (int)uVar5) &&
               ((int)uVar5 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
              if (((int)uVar5 < 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              pFVar22 = local_d0;
              if (*(longlong *)
                   ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                   (longlong)(int)uVar5 * 0xb8) != 0) {
                if (*(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x8 !=
                    *(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x34) {
                  FVar7 = (this->VisibleFastResponseRenderAssetIndices).Hash.SecondaryData;
                  FVar20 = (ForElementType<FSetElementId>)
                           &(this->VisibleFastResponseRenderAssetIndices).Hash;
                  if (FVar7 != (ForElementType<FSetElementId>)0x0) {
                    FVar20 = FVar7;
                  }
                  iVar15 = *(int *)((longlong)FVar20 +
                                   (ulonglong)
                                   ((this->VisibleFastResponseRenderAssetIndices).HashSize - 1U &
                                   uVar5) * 4);
                  if (iVar15 != -1) {
                    lVar19 = *(longlong *)&(this->VisibleFastResponseRenderAssetIndices).Elements;
                    do {
                      if (*(uint *)(lVar19 + (longlong)iVar15 * 0xc) == uVar5) goto LAB_1487c718d;
                      iVar15 = *(int *)(lVar19 + 4 + (longlong)iVar15 * 0xc);
                    } while (iVar15 != -1);
                  }
                }
                uVar16 = 0;
                if ((int)uVar5 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
                  uVar16 = ~uVar5 >> 0x1f;
                }
                if ((uVar16 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                this_02 = (FStreamingRenderAsset *)
                          ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                          (longlong)(int)uVar5 * 0xb8);
                FStreamingRenderAsset::CacheStreamingMetaData(this_02);
                uVar16 = (this->PendingMipCopyRequests).ArrayNum;
                if (uVar16 == *piVar3) {
                  uVar16 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x810,&pTVar2->AllocatorInstance,piVar3);
                }
                (this->PendingMipCopyRequests).ArrayNum = uVar16 + 1;
                uVar17 = 0;
                if ((int)uVar16 < (int)(uVar16 + 1)) {
                  uVar17 = ~uVar16 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                pFVar21 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x10;
                pFVar22 = local_d0;
                if (pFVar21 != (FScriptContainerElement *)0x0) {
                  pFVar24 = pFVar24 + 4;
                  uVar18 = (ulonglong)local_c8;
                  *(UStreamableRenderAsset **)pFVar21 = this_02->RenderAsset;
                  *(uint *)(pFVar21 + 8) = uVar5;
                  goto LAB_1487c6fc2;
                }
              }
            }
LAB_1487c718d:
            uVar18 = (ulonglong)local_c8;
            pFVar24 = pFVar24 + 4;
          } while( true );
        }
      }
    }
    pFVar22 = (this_01->Task).LoadRequests.AllocatorInstance.Data;
    iVar15 = (this_01->Task).LoadRequests.ArrayNum;
    pFVar24 = pFVar22 + (longlong)iVar15 * 4;
    while( true ) {
      if ((this_01->Task).LoadRequests.ArrayNum != iVar15) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar22 == pFVar24) break;
      uVar5 = *(uint *)&pFVar22->field_0x0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
        if (*(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x8 !=
            *(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x34) {
          FVar7 = (this->VisibleFastResponseRenderAssetIndices).Hash.SecondaryData;
          FVar20 = (ForElementType<FSetElementId>)
                   &(this->VisibleFastResponseRenderAssetIndices).Hash;
          if (FVar7 != (ForElementType<FSetElementId>)0x0) {
            FVar20 = FVar7;
          }
          iVar14 = *(int *)((longlong)FVar20 +
                           (ulonglong)
                           ((this->VisibleFastResponseRenderAssetIndices).HashSize - 1U & uVar5) * 4
                           );
          if (iVar14 != -1) {
            lVar19 = *(longlong *)&(this->VisibleFastResponseRenderAssetIndices).Elements;
            do {
              if (*(uint *)(lVar19 + (longlong)iVar14 * 0xc) == uVar5) goto LAB_1487c7282;
              iVar14 = *(int *)(lVar19 + 4 + (longlong)iVar14 * 0xc);
            } while (iVar14 != -1);
          }
        }
        if (((int)uVar5 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FStreamingRenderAsset::StreamWantedMips
                  ((FStreamingRenderAsset *)
                   ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                   (longlong)(int)uVar5 * 0xb8),this);
      }
LAB_1487c7282:
      pFVar22 = pFVar22 + 4;
    }
  }
LAB_1487c728f:
  pFVar22 = (this_01->Task).PendingUpdateDirties.AllocatorInstance.Data;
  iVar15 = (this_01->Task).PendingUpdateDirties.ArrayNum;
  pFVar24 = pFVar22 + (longlong)iVar15 * 4;
  while( true ) {
    if ((this_01->Task).PendingUpdateDirties.ArrayNum != iVar15) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_d8);
    }
    if (pFVar22 == pFVar24) break;
    uVar5 = *(uint *)pFVar22;
    if ((-1 < (int)uVar5) && ((int)uVar5 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
      if (*(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x8 !=
          *(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x34) {
        FVar7 = (this->VisibleFastResponseRenderAssetIndices).Hash.SecondaryData;
        FVar20 = (ForElementType<FSetElementId>)&(this->VisibleFastResponseRenderAssetIndices).Hash;
        if (FVar7 != (ForElementType<FSetElementId>)0x0) {
          FVar20 = FVar7;
        }
        iVar14 = *(int *)((longlong)FVar20 +
                         (ulonglong)
                         ((this->VisibleFastResponseRenderAssetIndices).HashSize - 1U & uVar5) * 4);
        if (iVar14 != -1) {
          lVar19 = *(longlong *)&(this->VisibleFastResponseRenderAssetIndices).Elements;
          do {
            if (*(uint *)(lVar19 + (longlong)iVar14 * 0xc) == uVar5) goto LAB_1487c73e0;
            iVar14 = *(int *)(lVar19 + 4 + (longlong)iVar14 * 0xc);
          } while (iVar14 != -1);
        }
      }
      if (((int)uVar5 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar21 = (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                (longlong)(int)uVar5 * 0xb8;
      if (((this_01->Task).StreamingData.ViewInfos.ArrayNum < 1) &&
         (((byte)pFVar21[0x96] & 0x40) == 0)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if ((this->bPauseRenderAssetStreaming != false) ||
         (((char)pFVar21[0x91] <= (char)pFVar21[0x8a] && (bVar11)))) {
        bVar23 = 0;
        bVar12 = 0;
      }
      else {
        bVar23 = 4;
        bVar12 = 0x20;
      }
      lVar19 = *(longlong *)pFVar21;
      pFVar21[0x96] = (FScriptContainerElement)((byte)pFVar21[0x96] & 0xdf | bVar12);
      if (lVar19 != 0) {
        *(byte *)(lVar19 + 0xd0) = *(byte *)(lVar19 + 0xd0) & 0xfb;
        *(byte *)(lVar19 + 0xd0) = *(byte *)(lVar19 + 0xd0) | bVar23;
      }
    }
LAB_1487c73e0:
    pFVar22 = pFVar22 + 4;
  }
  local_b0 = &this->VisibleFastResponseRenderAssetIndices;
  iVar15 = *(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x28;
  TStack_a8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)
       &(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x10;
  iStack_80 = 0;
  uStack_7c = 1;
  local_68 = 0;
  iStack_6c = 0;
  if (iVar15 != 0) {
    puVar25 = *(uint **)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)TStack_a8.Array;
    }
    uVar5 = *puVar25;
    while (uVar5 == 0) {
      lVar19 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar15;
      if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_1487c746e;
      uVar5 = puVar25[lVar19 + 1];
    }
    uStack_7c = -uVar5 & uVar5;
    uVar18 = (ulonglong)uStack_7c * 2 + 1;
    lVar19 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_b8 = (int)lVar19;
    iStack_6c = local_b8 + -1 + local_68;
    if (iVar15 < iStack_6c) {
      iStack_6c = iVar15;
    }
  }
LAB_1487c746e:
  uStack_70 = 0xffffffff;
  uStack_64 = local_3c;
  TStack_a8._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_a8.UnvisitedBitMask = 0xffffffff;
  TStack_a8._28_4_ = local_3c;
  TStack_a8.BaseBitIndex = local_68;
  local_88 = local_b0;
  local_78 = (undefined1 *)TStack_a8.Array;
  TStack_a8.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar15) {
    do {
      iVar15 = *(int *)(*(longlong *)&local_b0->Elements + (longlong)TStack_a8.CurrentBitIndex * 0xc
                       );
      if ((-1 < iVar15) && (iVar15 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum)) {
        if ((iVar15 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar24 = (this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                  (longlong)iVar15 * 0xb8;
        pFVar24[0x96] = (FScriptContainerElement)((byte)pFVar24[0x96] | 0x10);
        *(undefined4 *)(pFVar24 + 0x80) = 0;
        if (*(longlong *)pFVar24 != 0) {
          FVar4 = *(FScriptContainerElement *)(*(longlong *)pFVar24 + 0xda);
          if ((int)(uint)(byte)FVar4 < (int)(char)pFVar24[0x8d]) {
            FVar4 = pFVar24[0x8d];
          }
          pFVar24[0x8d] = FVar4;
        }
      }
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    } while (TStack_a8.CurrentBitIndex < (TStack_a8.Array)->NumBits);
  }
  this_00 = &this->VisibleFastResponseRenderAssetIndices;
  bVar11 = 1 < (this->VisibleFastResponseRenderAssetIndices).HashSize;
  if (!bVar11) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->VisibleFastResponseRenderAssetIndices).Elements.field_0xc;
  *(undefined4 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x34 = 0;
  iVar15 = *(int *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x2c;
  *(undefined4 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->VisibleFastResponseRenderAssetIndices).Elements.field_0x10,0);
  }
  if (bVar11) {
    (this->VisibleFastResponseRenderAssetIndices).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// SyncStates @ 1487c8220

void __thiscall
FRenderAssetStreamingManager::SyncStates(FRenderAssetStreamingManager *this,bool param_1)

{
  int iVar1;
  
  iVar1 = this->ProcessingStage;
  while ((iVar1 != 0 && (param_1))) {
    UpdateResourceStreaming(this,0.0,false);
    iVar1 = this->ProcessingStage;
  }
  FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
  FAsyncTaskBase::EnsureCompletion
            ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
  CheckUserSettings(this);
  ProcessRemovedRenderAssets(this);
  ProcessAddedRenderAssets(this);
  FRenderAssetStreamingSettings::Update(&this->Settings);
  ConditionalUpdateStaticData(this);
  IncrementalUpdate(this,__real_3f800000,false);
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    ProcessLevelsToReferenceToStreamedTextures(this);
  }
  return;
}

// TickDeferredMipLevelChangeCallbacks @ 1487c8de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::TickDeferredMipLevelChangeCallbacks
          (FRenderAssetStreamingManager *this)

{
  FBaseGraphTask *this_00;
  UStreamableRenderAsset *this_01;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (0 < (this->DeferredTickCBAssets).ArrayNum) {
    bVar2 = IsInGameThread();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                           ,0x6b3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (this->StreamingRenderAssetsSyncEvent).Reference;
    if (this_00 != (FBaseGraphTask *)0x0) {
      FBaseGraphTask::Wait(this_00,GameThread);
    }
    uVar4 = 0;
    if (0 < (this->DeferredTickCBAssets).ArrayNum) {
      lVar5 = 0;
      do {
        uVar3 = 0;
        if ((int)uVar4 < (this->DeferredTickCBAssets).ArrayNum) {
          uVar3 = ~uVar4 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_01 = *(UStreamableRenderAsset **)
                   ((this->DeferredTickCBAssets).AllocatorInstance.Data + lVar5);
        if (this_01 != (UStreamableRenderAsset *)0x0) {
          UStreamableRenderAsset::TickMipLevelChangeCallbacks
                    (this_01,(TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
        }
        uVar4 = uVar4 + 1;
        lVar5 = lVar5 + 8;
      } while ((int)uVar4 < (this->DeferredTickCBAssets).ArrayNum);
    }
    (this->DeferredTickCBAssets).ArrayNum = 0;
    if ((this->DeferredTickCBAssets).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->DeferredTickCBAssets).AllocatorInstance,0,
                 &(this->DeferredTickCBAssets).ArrayMax);
    }
  }
  return;
}

// TickFastResponseAssets @ 1487c8f20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::TickFastResponseAssets(FRenderAssetStreamingManager *this)

{
  TSet<UStreamableRenderAsset_*,DefaultKeyFuncs<UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
  *pTVar1;
  float fVar2;
  FBaseGraphTask *pFVar3;
  UStreamableRenderAsset *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  DWORD DVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  FStreamingRenderAsset *this_00;
  float fVar20;
  uint local_res10 [2];
  int local_res18;
  int local_res20 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  TSet<UStreamableRenderAsset_*,DefaultKeyFuncs<UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
  *local_b0;
  TSet<UStreamableRenderAsset_*,DefaultKeyFuncs<UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
  *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  uint local_88;
  undefined4 uStack_84;
  undefined1 local_78 [8];
  undefined1 local_70 [36];
  undefined4 local_4c;
  
  pTVar7 = CVarStreamingAllowFastForceResident.Ref;
  bVar8 = IsInParallelGameThread();
  if (((!bVar8) && (bVar8 = IsInGameThread(), !bVar8)) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007945>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6c9,"GetShadowIndex() == 0"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (pTVar7->ShadowedValue[0] != 0) {
    pFVar3 = (this->StreamingRenderAssetsSyncEvent).Reference;
    uVar10 = 1;
    if ((pFVar3 != (FBaseGraphTask *)0x0) &&
       (DVar9 = GetCurrentThreadId(), DVar9 != *(DWORD *)&pFVar3->field_0x48)) {
      FBaseGraphTask::Wait((this->StreamingRenderAssetsSyncEvent).Reference,GameThread);
    }
    uVar19 = 0;
    pTVar1 = &this->FastResponseRenderAssets;
    uVar12 = *(uint *)&(this->FastResponseRenderAssets).Elements.field_0x28;
    TStack_d0.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &(this->FastResponseRenderAssets).Elements.field_0x10;
    uStack_a0 = 0;
    uVar15 = uVar19;
    local_88 = uStack_a0;
    if (uVar12 != 0) {
      puVar13 = *(uint **)&(this->FastResponseRenderAssets).Elements.field_0x20;
      uVar15 = (ulonglong)uVar12;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)TStack_d0.Array;
      }
      uVar11 = *puVar13;
      uVar16 = uVar19;
      uVar18 = uVar19;
      local_88 = 0;
      uStack_a0 = 0;
      while (uVar11 == 0) {
        iVar17 = (int)uVar16;
        local_88 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)local_88;
        uStack_a0 = iVar17 + 1;
        uVar16 = (ulonglong)uStack_a0;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_a0)
        goto LAB_1487c904e;
        uVar11 = puVar13[(longlong)iVar17 + 1];
      }
      uVar10 = -uVar11 & uVar11;
      uVar15 = (ulonglong)uVar10 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_res18 = (int)lVar14;
      uVar11 = local_res18 + -1 + local_88;
      if ((int)uVar12 < (int)uVar11) {
        uVar11 = uVar12;
      }
      uVar15 = (ulonglong)uVar11;
    }
LAB_1487c904e:
    uStack_90 = 0xffffffff;
    uStack_8c = (uint)uVar15;
    uStack_84 = local_4c;
    TStack_d0._padding_ = CONCAT44(uVar10,uStack_a0);
    TStack_d0.UnvisitedBitMask = 0xffffffff;
    TStack_d0._28_4_ = local_4c;
    TStack_d0.BaseBitIndex = local_88;
    local_b0 = pTVar1;
    local_a8 = pTVar1;
    uStack_9c = uVar10;
    local_98 = (undefined1 *)TStack_d0.Array;
    TStack_d0.CurrentBitIndex = uStack_8c;
    if ((int)uStack_8c < (int)uVar12) {
      do {
        pUVar4 = *(UStreamableRenderAsset **)
                  (*(longlong *)&pTVar1->Elements + (longlong)(int)uVar15 * 0x10);
        if (((pUVar4 == (UStreamableRenderAsset *)0x0) || (pUVar4->bIgnoreStreamingMipBias == '\0'))
           || ((pUVar4->bForceMiplevelsToBeResident == '\0' &&
               (pUVar4->ForceMipLevelsToBeResidentTimestamp <= (double)FApp::CurrentTime &&
                (double)FApp::CurrentTime != pUVar4->ForceMipLevelsToBeResidentTimestamp)))) {
          TSet<UStreamableRenderAsset_*,DefaultKeyFuncs<UStreamableRenderAsset_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(local_b0,TStack_d0.CurrentBitIndex);
        }
        else {
          fVar2 = this->LastWorldUpdateTime_MipCalcTask;
          fVar20 = (float)(**(code **)(pUVar4->_padding_ + 0x2e8))(pUVar4);
          if (fVar2 <= fVar20) {
            local_res10[0] = pUVar4->StreamingIndex;
            lVar14 = (longlong)(int)local_res10[0];
            uVar10 = 0;
            if ((int)local_res10[0] < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
              uVar10 = ~local_res10[0] >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_00 = (FStreamingRenderAsset *)
                      ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                      lVar14 * 0xb8);
            if ((pUVar4 != this_00->RenderAsset) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RenderAsset == Asset.RenderAsset",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                                   ,0x21f,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FStreamingRenderAsset::UpdateStreamingStatus
                      (this_00,SUB81(local_78,0),
                       (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
            if ((this_00->ResidentMips == this_00->RequestedMips) &&
               (this_00->ResidentMips < this_00->MaxAllowedMips)) {
              (**(code **)(pUVar4->_padding_ + 0x2d8))(pUVar4,(int)this_00->MaxAllowedMips,1);
              pUVar4->bHasStreamingUpdatePending = '\x01';
              this_00->bHasUpdatePending = '\x01';
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&this->VisibleFastResponseRenderAssetIndices,local_res20,
                         (bool *)local_res10);
              uVar15 = uVar19;
              uVar16 = uVar19;
              if (0 < (this->PendingMipCopyRequests).ArrayNum) {
                do {
                  uVar12 = (uint)uVar15;
                  uVar10 = 0;
                  if ((int)uVar12 < (this->PendingMipCopyRequests).ArrayNum) {
                    uVar10 = ~uVar12 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar5 = (this->PendingMipCopyRequests).AllocatorInstance.Data;
                  if (*(UStreamableRenderAsset **)(pFVar5 + uVar16) == pUVar4) {
                    *(undefined8 *)(pFVar5 + uVar16) = 0;
                  }
                  uVar15 = (ulonglong)(uVar12 + 1);
                  uVar16 = uVar16 + 0x10;
                } while ((int)(uVar12 + 1) < (this->PendingMipCopyRequests).ArrayNum);
              }
              FStreamingRenderAsset::UpdateStreamingStatus
                        (this_00,SUB81(local_70,0),
                         (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
              TrackRenderAssetEvent(this_00,pUVar4,true,this);
            }
          }
        }
        TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
        uVar15 = (ulonglong)(uint)TStack_d0.CurrentBitIndex;
      } while (TStack_d0.CurrentBitIndex < (TStack_d0.Array)->NumBits);
    }
  }
  return;
}

// UpdateCSVOnlyStats @ 1487ccfb0

void __thiscall FRenderAssetStreamingManager::UpdateCSVOnlyStats(FRenderAssetStreamingManager *this)

{
  long64 lVar1;
  long64 lVar2;
  long64 lVar3;
  long64 lVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  
  lVar1 = (this->GatheredStats).UsedStreamingPool;
  lVar2 = (this->GatheredStats).SafetyPool;
  lVar3 = (this->GatheredStats).TemporaryPool;
  (this->DisplayedStats).RenderAssetPool = (this->GatheredStats).RenderAssetPool;
  (this->DisplayedStats).UsedStreamingPool = lVar1;
  lVar1 = (this->GatheredStats).StreamingPool;
  lVar4 = (this->GatheredStats).NonStreamingMips;
  (this->DisplayedStats).SafetyPool = lVar2;
  (this->DisplayedStats).TemporaryPool = lVar3;
  lVar2 = (this->GatheredStats).RequiredPool;
  lVar3 = (this->GatheredStats).VisibleMips;
  (this->DisplayedStats).StreamingPool = lVar1;
  (this->DisplayedStats).NonStreamingMips = lVar4;
  lVar1 = (this->GatheredStats).HiddenMips;
  lVar4 = (this->GatheredStats).ForcedMips;
  (this->DisplayedStats).RequiredPool = lVar2;
  (this->DisplayedStats).VisibleMips = lVar3;
  lVar2 = (this->GatheredStats).UnkownRefMips;
  lVar3 = (this->GatheredStats).CachedMips;
  (this->DisplayedStats).HiddenMips = lVar1;
  (this->DisplayedStats).ForcedMips = lVar4;
  lVar1 = (this->GatheredStats).WantedMips;
  lVar4 = (this->GatheredStats).NewRequests;
  (this->DisplayedStats).UnkownRefMips = lVar2;
  (this->DisplayedStats).CachedMips = lVar3;
  lVar2 = (this->GatheredStats).OverBudget;
  dVar5 = (this->GatheredStats).Timestamp;
  (this->DisplayedStats).WantedMips = lVar1;
  (this->DisplayedStats).NewRequests = lVar4;
  lVar1 = (this->GatheredStats).MipIOBandwidth;
  (this->DisplayedStats).PendingRequests = (this->GatheredStats).PendingRequests;
  (this->DisplayedStats).MipIOBandwidth = lVar1;
  iVar6 = (this->GatheredStats).CallbacksCycles;
  iVar7 = (this->GatheredStats).SetupAsyncTaskCycles;
  iVar8 = (this->GatheredStats).UpdateStreamingDataCycles;
  iVar9 = (this->GatheredStats).StreamRenderAssetsCycles;
  (this->DisplayedStats).OverBudget = lVar2;
  (this->DisplayedStats).Timestamp = dVar5;
  iVar10 = (this->GatheredStats).NumStreamedMeshes;
  fVar11 = (this->GatheredStats).AvgNumStreamedLODs;
  fVar12 = (this->GatheredStats).AvgNumResidentLODs;
  fVar13 = (this->GatheredStats).AvgNumEvictedLODs;
  (this->DisplayedStats).CallbacksCycles = iVar6;
  (this->DisplayedStats).SetupAsyncTaskCycles = iVar7;
  (this->DisplayedStats).UpdateStreamingDataCycles = iVar8;
  (this->DisplayedStats).StreamRenderAssetsCycles = iVar9;
  lVar1 = (this->GatheredStats).StreamedMeshMem;
  lVar2 = (this->GatheredStats).ResidentMeshMem;
  (this->DisplayedStats).NumStreamedMeshes = iVar10;
  (this->DisplayedStats).AvgNumStreamedLODs = fVar11;
  (this->DisplayedStats).AvgNumResidentLODs = fVar12;
  (this->DisplayedStats).AvgNumEvictedLODs = fVar13;
  lVar3 = (this->GatheredStats).EvictedMeshMem;
  lVar4 = (this->GatheredStats).VirtualTexturePool;
  (this->DisplayedStats).StreamedMeshMem = lVar1;
  (this->DisplayedStats).ResidentMeshMem = lVar2;
  iVar6 = (this->GatheredStats).NumVirtualTextures;
  uVar14 = *(undefined4 *)&(this->GatheredStats).field_0xd4;
  lVar2 = (this->GatheredStats).RequiredVirtualTexturePool;
  lVar1 = (this->GatheredStats).UsedVirtualTexturePool;
  (this->DisplayedStats).EvictedMeshMem = lVar3;
  (this->DisplayedStats).VirtualTexturePool = lVar4;
  (this->DisplayedStats).NumVirtualTextures = iVar6;
  *(undefined4 *)&(this->DisplayedStats).field_0xd4 = uVar14;
  (this->DisplayedStats).RequiredVirtualTexturePool = lVar2;
  (this->DisplayedStats).UsedVirtualTexturePool = lVar1;
  return;
}

// UpdateIndividualRenderAsset @ 1487cda20

void __thiscall
FRenderAssetStreamingManager::UpdateIndividualRenderAsset
          (FRenderAssetStreamingManager *this,UStreamableRenderAsset *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  bool bVar1;
  int iVar2;
  FStreamingManagerCollection *this_00;
  FStreamingRenderAsset *this_01;
  int *local_res8;
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this_00 = IStreamingManager::Get();
  bVar1 = FStreamingManagerCollection::IsStreamingEnabled(this_00);
  if ((bVar1) && (param_1 != (UStreamableRenderAsset *)0x0)) {
    FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
    FAsyncTaskBase::EnsureCompletion
              ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
    CheckUserSettings(this);
    ProcessRemovedRenderAssets(this);
    ProcessAddedRenderAssets(this);
    FRenderAssetStreamingSettings::Update(&this->Settings);
    ConditionalUpdateStaticData(this);
    IncrementalUpdate(this,__real_3f800000,false);
    if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
      ProcessLevelsToReferenceToStreamedTextures(this);
    }
    this_01 = GetStreamingRenderAsset(this,param_1);
    if (this_01 != (FStreamingRenderAsset *)0x0) {
      iVar2 = GetNumStreamedMipsArray(this,this_01->RenderAssetType,&local_res8);
      FStreamingRenderAsset::UpdateDynamicData
                (this_01,local_res8,iVar2,&this->Settings,false,
                 (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0);
      if (this_01->bForceFullyLoad != '\0') {
        this_01->BudgetedMips = this_01->MaxAllowedMips;
        this_01->WantedMips = this_01->MaxAllowedMips;
      }
      FStreamingRenderAsset::StreamWantedMips(this_01,this);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487cdb6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UpdatePendingStates @ 1487ce410

void __thiscall
FRenderAssetStreamingManager::UpdatePendingStates(FRenderAssetStreamingManager *this,bool param_1)

{
  CheckUserSettings(this);
  ProcessRemovedRenderAssets(this);
  ProcessAddedRenderAssets(this);
  FRenderAssetStreamingSettings::Update(&this->Settings);
  ConditionalUpdateStaticData(this);
  IncrementalUpdate(this,__real_3f800000,param_1);
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
    if (param_1) {
      FDynamicRenderAssetInstanceManager::PrepareAsyncView(&this->DynamicComponentManager);
    }
    ProcessLevelsToReferenceToStreamedTextures(this);
  }
  return;
}

// UpdateResourceStreaming @ 1487cf560

/* WARNING: Removing unreachable block (ram,0x0001487cff0e) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingManager::UpdateResourceStreaming
          (FRenderAssetStreamingManager *this,float param_1,bool param_2)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  longlong *plVar3;
  FWindowsRecursiveMutex *lpCriticalSection;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  int *piVar5;
  FScriptContainerElement *pFVar6;
  atomic<unsigned_int> aVar7;
  FBaseGraphTask *pFVar8;
  FAsyncTask<FRenderAssetStreamingMipCalcTask> *pFVar9;
  FRenderAssetInstanceAsyncView *pFVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  TConsoleVariableData<int> *pTVar15;
  bool bVar16;
  bool bVar17;
  DWORD DVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_RenderAssetStreaming_GameThreadUpdateTime> FVar23;
  FTaskBase *this_00;
  int iVar24;
  long64 lVar25;
  FName FVar26;
  FScriptContainerElement *pFVar27;
  TArray<FRenderAssetInstanceAsyncView,TSizedDefaultAllocator<32>_> *pTVar28;
  FQueuedThreadPool *pFVar29;
  char *pcVar30;
  float fVar31;
  float fVar32;
  EExtendedTaskPriority local_108;
  ETaskPriority local_107 [3];
  DWORD local_104;
  FColor_u_0 local_100 [2];
  FName local_f8;
  FName local_f0;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  FRenderAssetInstanceAsyncView local_b0;
  FName local_90;
  longlong local_88;
  undefined1 local_80 [72];
  
  lpCriticalSection = &this->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar4 = &this->StreamingRenderAssetsSyncEvent;
  pFVar8 = pTVar4->Reference;
  if ((pFVar8 != (FBaseGraphTask *)0x0) &&
     (DVar18 = GetCurrentThreadId(), DVar18 != *(DWORD *)&pFVar8->field_0x48)) {
    FBaseGraphTask::Wait(pTVar4->Reference,GameThread);
  }
  FVar23 = StatPtr_STAT_RenderAssetStreaming_GameThreadUpdateTime;
  if (StatPtr_STAT_RenderAssetStreaming_GameThreadUpdateTime ==
      (FThreadSafeStaticStat<FStat_STAT_RenderAssetStreaming_GameThreadUpdateTime>)0x0) {
    pFVar22 = ::FName::FName(&local_90,"STAT_RenderAssetStreaming_GameThreadUpdateTime");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_RenderAssetStreaming_GameThreadUpdateTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_RenderAssetStreaming_GameThreadUpdateTime,*pFVar22,
                        L"Renderable Asset Streaming Game Thread Update Time","STATGROUP_Streaming",
                        "STATCAT_Advanced",L"Streaming",true,true,ST_int64,true,true,MCR_Invalid);
  }
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  bVar13 = false;
  bVar12 = false;
  FVar26 = *(FName *)FVar23;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_1487cf712:
    bVar14 = false;
    FVar26 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_100[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_100[0]._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_f8.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f8,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
                   ,0x76e);
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1487cf712;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar14 = true;
  }
  if (__CsvProfilerStat1903 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("RenderAssetStreaming");
    __CsvProfilerStat1903 = true;
  }
  FCsvProfiler::BeginExclusiveStat("RenderAssetStreaming","CSV_RenderAssetStreaming");
  if (__CsvProfilerStat1904 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/RenderAssetStreaming");
    __CsvProfilerStat1904 = true;
  }
  FCsvProfiler::BeginSetWaitStat
            ("EventWait/RenderAssetStreaming","CsvEventWait/RenderAssetStreaming",
             "CsvEventWait/RenderAssetStreaming (Non-CP)");
  bVar16 = FApp::ShouldUseThreadingForPerformance();
  FRenderAssetStreamingStats::Apply(&this->DisplayedStats);
  if (GRHIGlobals.PoolSizeVRAMPercentage < 1) {
    lVar25 = (this->DisplayedStats).NonStreamingMips;
  }
  else {
    lVar25 = 0;
  }
  fVar32 = (float)((this->DisplayedStats).RequiredPool + lVar25);
  if (__CsvProfilerStat1912 == false) {
    FCsvProfilerTrace::OutputInlineStat("StreamingPool",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1912 = true;
  }
  fVar31 = __real_35800000;
  FCsvProfiler::RecordCustomStat
            ("StreamingPool",_GCsvCategory_TextureStreaming.Index,fVar32 * __real_35800000,Set);
  if (__CsvProfilerStat1913 == false) {
    FCsvProfilerTrace::OutputInlineStat("SafetyPool",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1913 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("SafetyPool",_GCsvCategory_TextureStreaming.Index,
             (float)(this->DisplayedStats).SafetyPool * fVar31,Set);
  if (__CsvProfilerStat1914 == false) {
    FCsvProfilerTrace::OutputInlineStat("TemporaryPool",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1914 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("TemporaryPool",_GCsvCategory_TextureStreaming.Index,
             (float)(this->DisplayedStats).TemporaryPool * fVar31,Set);
  if (__CsvProfilerStat1915 == false) {
    FCsvProfilerTrace::OutputInlineStat("CachedMips",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1915 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("CachedMips",_GCsvCategory_TextureStreaming.Index,
             (float)(this->DisplayedStats).CachedMips * fVar31,Set);
  if (__CsvProfilerStat1916 == false) {
    FCsvProfilerTrace::OutputInlineStat("WantedMips",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1916 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("WantedMips",_GCsvCategory_TextureStreaming.Index,
             (float)(this->DisplayedStats).WantedMips * fVar31,Set);
  if (__CsvProfilerStat1917 == false) {
    FCsvProfilerTrace::OutputInlineStat("ResidentMeshMem",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1917 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("ResidentMeshMem",_GCsvCategory_TextureStreaming.Index,
             (float)(this->DisplayedStats).ResidentMeshMem * fVar31,Set);
  if (__CsvProfilerStat1918 == false) {
    FCsvProfilerTrace::OutputInlineStat("StreamedMeshMem",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1918 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("StreamedMeshMem",_GCsvCategory_TextureStreaming.Index,
             (float)(this->DisplayedStats).StreamedMeshMem * fVar31,Set);
  if (__CsvProfilerStat1919 == false) {
    FCsvProfilerTrace::OutputInlineStat("NonStreamingMips",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1919 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("NonStreamingMips",_GCsvCategory_TextureStreaming.Index,
             (float)(this->DisplayedStats).NonStreamingMips * fVar31,Set);
  if (__CsvProfilerStat1920 == false) {
    FCsvProfilerTrace::OutputInlineStat("PendingStreamInData",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1920 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("PendingStreamInData",_GCsvCategory_TextureStreaming.Index,
             (float)(this->DisplayedStats).PendingRequests * fVar31,Set);
  fVar31 = 0.0;
  if (fVar32 != 0.0) {
    fVar31 = ((float)(this->DisplayedStats).WantedMips * __real_42c80000) / fVar32;
  }
  if (__CsvProfilerStat1923 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("DesiredDataLoadedPercent",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1923 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("DesiredDataLoadedPercent",_GCsvCategory_TextureStreaming.Index,fVar31,Set);
  pcVar30 = (char *)0x0;
  FAsyncTaskBase::EnsureCompletion
            ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,true,false);
  if ((this->NumRenderAssetProcessingStages < 1) || (param_2)) {
    if (((FThreadSafeCounter *)&this->AsyncWork->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this->AsyncWork,false);
    }
    else {
      FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
    }
    iVar24 = (this->Settings).FramesForFullUpdate;
    this->ProcessingStage = 0;
    this->NumRenderAssetProcessingStages = iVar24;
    SetLastUpdateTime(this);
    UpdateStreamingRenderAssets(this,0,1,false,false);
    CheckUserSettings(this);
    ProcessRemovedRenderAssets(this);
    ProcessAddedRenderAssets(this);
    FRenderAssetStreamingSettings::Update(&this->Settings);
    ConditionalUpdateStaticData(this);
    IncrementalUpdate(this,__real_3f800000,true);
    if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
      FDynamicRenderAssetInstanceManager::PrepareAsyncView(&this->DynamicComponentManager);
      ProcessLevelsToReferenceToStreamedTextures(this);
    }
    if ((param_2) || ((this->Settings).bStressTest != false)) {
      bVar17 = true;
    }
    else {
      bVar17 = false;
    }
    PrepareAsyncTask(this,bVar17);
    FAsyncTaskBase::Start
              ((FAsyncTaskBase *)this->AsyncWork,true,GThreadPool,Normal,None,-1,(wchar_t *)0x0);
    TickFastResponseAssets(this);
    StreamRenderAssets(this,param_2);
    (this->GatheredStats).SetupAsyncTaskCycles = 0;
    (this->GatheredStats).UpdateStreamingDataCycles = 0;
    (this->GatheredStats).StreamRenderAssetsCycles = 0;
    (this->GatheredStats).CallbacksCycles = 0;
    UpdateStats(this);
    if (param_2) goto LAB_1487d02c7;
  }
  else if (this->ProcessingStage == 0) {
    QueryPerformanceCounter(&local_e0);
    pFVar9 = this->AsyncWork;
    (this->GatheredStats).SetupAsyncTaskCycles = -local_e0.s.LowPart;
    this->NumRenderAssetProcessingStages = (this->Settings).FramesForFullUpdate;
    if (((FThreadSafeCounter *)&pFVar9->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar9,false);
    }
    else {
      FAsyncTaskBase::EnsureCompletion((FAsyncTaskBase *)this->AsyncWork,true,false);
    }
    CheckUserSettings(this);
    ProcessRemovedRenderAssets(this);
    ProcessAddedRenderAssets(this);
    FRenderAssetStreamingSettings::Update(&this->Settings);
    ConditionalUpdateStaticData(this);
    IncrementalUpdate(this,__real_3f800000,false);
    if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
      ProcessLevelsToReferenceToStreamedTextures(this);
    }
    PrepareAsyncTask(this,(this->Settings).bStressTest != false);
    pTVar15 = CVarUseBackgroundThreadPool.Ref;
    pFVar9 = this->AsyncWork;
    bVar17 = IsInParallelGameThread();
    if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
       (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007945>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar29 = GThreadPool;
    if (pTVar15->ShadowedValue[0] != 0) {
      pFVar29 = GBackgroundPriorityThreadPool;
    }
    FAsyncTaskBase::Start((FAsyncTaskBase *)pFVar9,false,pFVar29,Normal,None,-1,(wchar_t *)0x0);
    TickFastResponseAssets(this);
    this->ProcessingStage = this->ProcessingStage + 1;
    QueryPerformanceCounter(&local_d8);
    piVar5 = &(this->GatheredStats).SetupAsyncTaskCycles;
    *piVar5 = *piVar5 + local_d8.s.LowPart;
  }
  else if (this->NumRenderAssetProcessingStages < this->ProcessingStage) {
    if (((FThreadSafeCounter *)&this->AsyncWork->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this->AsyncWork,false);
      QueryPerformanceCounter(&local_c0);
      iVar24 = (this->PendingStreamingRenderAssets).ArrayNum;
      (this->GatheredStats).StreamRenderAssetsCycles = -local_c0.s.LowPart;
      pTVar15 = CVarProcessAddedRenderAssetsAfterAsyncWork.Ref;
      if (0 < iVar24) {
        bVar17 = IsInParallelGameThread();
        if ((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) {
          pcVar30 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
          ;
          bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0");
          if (bVar17) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        if (pTVar15->ShadowedValue[0] != 0) {
          ProcessAddedRenderAssets(this);
        }
      }
      pFVar27 = (this->InflightRenderAssets).AllocatorInstance.Data;
      iVar24 = (this->InflightRenderAssets).ArrayNum;
      pFVar6 = pFVar27 + (longlong)iVar24 * 4;
      while( true ) {
        if ((this->InflightRenderAssets).ArrayNum != iVar24) {
          local_107[1] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_107 + 1);
        }
        if (pFVar27 == pFVar6) break;
        uVar20 = *(uint *)pFVar27;
        uVar21 = 0;
        if ((int)uVar20 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
          uVar21 = ~uVar20 >> 0x1f;
        }
        if (uVar21 == 0) {
          pcVar30 = (char *)0x447;
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
        pcVar30 = (char *)CONCAT71((int7)((ulonglong)pcVar30 >> 8),0.0 < param_1);
        FStreamingRenderAsset::UpdateStreamingStatus
                  ((FStreamingRenderAsset *)
                   ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                   (longlong)(int)uVar20 * 0xb8),SUB81(local_80,0),
                   (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)pcVar30);
        pFVar27 = pFVar27 + 4;
      }
      TickFastResponseAssets(this);
      StreamRenderAssets(this,false);
      pFVar9 = this->AsyncWork;
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar9);
      local_b0.MaxLevelRenderAssetScreenSize = 3.4028235e+38;
      local_b0.BoundsViewInfo.ArrayNum = 0;
      local_b0.BoundsViewInfo.ArrayMax = 0;
      local_b0.View.Reference = (FRenderAssetInstanceView *)0x0;
      local_b0.BoundsViewInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FRenderAssetInstanceAsyncView::operator=
                (&(pFVar9->Task).StreamingData.DynamicInstancesView,&local_b0);
      if (local_b0.BoundsViewInfo.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.BoundsViewInfo.AllocatorInstance.Data);
      }
      if (local_b0.View.Reference != (FRenderAssetInstanceView *)0x0) {
        plVar3 = &(local_b0.View.Reference)->_padding_;
        *(int *)plVar3 = (int)*plVar3 + -1;
        if ((int)*plVar3 == 0) {
          (**(code **)(local_b0.View.Reference)->_padding_)(local_b0.View.Reference,1);
        }
      }
      pTVar28 = &(pFVar9->Task).StreamingData.StaticInstancesViews;
      piVar5 = &(pFVar9->Task).StreamingData.StaticInstancesViews.ArrayMax;
      pFVar10 = (FRenderAssetInstanceAsyncView *)(pTVar28->AllocatorInstance).Data;
      iVar24 = (pFVar9->Task).StreamingData.StaticInstancesViews.ArrayNum;
      if (*piVar5 < 0) {
        DestructItems<FRenderAssetInstanceAsyncView,int>(pFVar10,iVar24);
        (pFVar9->Task).StreamingData.StaticInstancesViews.ArrayNum = 0;
        if (*piVar5 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,0,&pTVar28->AllocatorInstance,0,piVar5);
        }
      }
      else {
        DestructItems<FRenderAssetInstanceAsyncView,int>(pFVar10,iVar24);
        (pFVar9->Task).StreamingData.StaticInstancesViews.ArrayNum = 0;
      }
      iVar19 = this->NumRenderAssetProcessingStages + -1;
      iVar24 = 1;
      if (1 < iVar19) {
        iVar24 = iVar19;
      }
      IncrementalUpdate(this,__real_3f800000 / (float)iVar24,true);
      if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) {
        FDynamicRenderAssetInstanceManager::PrepareAsyncView(&this->DynamicComponentManager);
      }
      this->ProcessingStage = 0;
      QueryPerformanceCounter(&local_b8);
      piVar5 = &(this->GatheredStats).StreamRenderAssetsCycles;
      *piVar5 = *piVar5 + local_b8.s.LowPart;
      UpdateStats(this);
    }
  }
  else {
    QueryPerformanceCounter(&local_d0);
    pTVar15 = CVarProcessAddedRenderAssetsAfterAsyncWork.Ref;
    local_104 = local_d0.s.LowPart;
    if (0 < (this->PendingStreamingRenderAssets).ArrayNum) {
      bVar17 = IsInParallelGameThread();
      if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if ((pTVar15->ShadowedValue[0] != 0) &&
         (((FThreadSafeCounter *)&this->AsyncWork->_padding_)->Counter == 0)) {
        FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this->AsyncWork,false);
        ProcessAddedRenderAssets(this);
      }
    }
    if (this->ProcessingStage == 1) {
      SetLastUpdateTime(this);
    }
    TickFastResponseAssets(this);
    pTVar15 = CVarStreamingOverlapAssetAndLevelTicks.Ref;
    if (bVar16) {
      bVar17 = IsInParallelGameThread();
      if (((!bVar17) && (bVar17 = IsInGameThread(), !bVar17)) &&
         (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007945>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6c9,"GetShadowIndex() == 0"), bVar17)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      if (pTVar15->ShadowedValue[0] == 0) goto LAB_1487cfe78;
      if (((pTVar4->Reference != (FBaseGraphTask *)0x0) && (pTVar4->Reference->field_0xd0 != '\0'))
         && (pFVar8 = pTVar4->Reference, pFVar8 != (FBaseGraphTask *)0x0)) {
        pTVar4->Reference = (FBaseGraphTask *)0x0;
        LOCK();
        puVar1 = &pFVar8->field_0x30;
        iVar24 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar24 == 1) {
          (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
        }
      }
      iVar24 = this->ProcessingStage;
      this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
      if (this_00 == (FTaskBase *)0x0) {
        this_00 = (FTaskBase *)0x0;
      }
      else {
        FBaseGraphTask::FBaseGraphTask
                  ((FBaseGraphTask *)this_00,
                   (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                    *)0x0);
        this_00->_padding_ = (longlong)&___7__TGraphTask_VFUpdateStreamingRenderAssetsTask____6B_;
      }
      iVar19 = this->NumRenderAssetProcessingStages;
      this_00[1]._padding_ = (longlong)this;
      *(int *)&this_00[1]._padding_ = iVar24 + -1;
      *(int *)((longlong)&this_00[1]._padding_ + 4) = iVar19;
      *(bool *)&this_00[1]._padding_ = 0.0 < param_1;
      UE::Tasks::Private::TranslatePriority(AnyNormalThreadNormalTask,local_107,&local_108);
      UE::Tasks::Private::FTaskBase::Init(this_00,L"GraphTask",local_107[0],local_108,None);
      if (this_00 != (FTaskBase *)0x0) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xf0);
      if (pTVar4 == (TRefCountPtr<FBaseGraphTask> *)&local_88) {
        if (this_00 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &this_00->RefCount;
          aVar7 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar7 == (atomic<unsigned_int>)0x1) {
            (**(code **)this_00->_padding_)(this_00,1);
          }
        }
      }
      else {
        pFVar8 = pTVar4->Reference;
        pTVar4->Reference = (FBaseGraphTask *)this_00;
        if (pFVar8 != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar1 = &pFVar8->field_0x30;
          iVar24 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar24 == 1) {
            (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
          }
        }
      }
    }
    else {
LAB_1487cfe78:
      UpdateStreamingRenderAssets
                (this,this->ProcessingStage + -1,this->NumRenderAssetProcessingStages,0.0 < param_1,
                 false);
    }
    iVar19 = this->NumRenderAssetProcessingStages + -1;
    iVar24 = 1;
    if (1 < iVar19) {
      iVar24 = iVar19;
    }
    IncrementalUpdate(this,__real_3f800000 / (float)iVar24,true);
    this->ProcessingStage = this->ProcessingStage + 1;
    QueryPerformanceCounter(&local_c8);
    piVar5 = &(this->GatheredStats).UpdateStreamingDataCycles;
    uVar20 = local_c8.s.LowPart - local_104;
    if (this->ProcessingStage < 3) {
      *piVar5 = uVar20;
    }
    else {
      if (uVar20 < (uint)*piVar5) {
        uVar20 = *piVar5;
      }
      *piVar5 = uVar20;
    }
  }
  ProcessPendingMipCopyRequests(this);
LAB_1487d02c7:
  TickDeferredMipLevelChangeCallbacks(this);
  if ((GEnableAssetUpdateAbandons != false) &&
     (GTickAbandonedRenderAssetUpdatesOnStreamingUpdate != false)) {
    FAbandonedRenderAssetUpdateManager::TickAbandoned(&this->AbandonedRenderAssetUpdateManager);
  }
  FAsyncTaskBase::Start
            ((FAsyncTaskBase *)(this->RenderAssetInstanceAsyncWork).Reference,!bVar16,GThreadPool,
             Normal,None,-1,(wchar_t *)0x0);
  FCsvProfiler::EndSetWaitStat();
  FCsvProfiler::EndExclusiveStat("RenderAssetStreaming");
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// UpdateStats @ 1487d03c0

void __thiscall FRenderAssetStreamingManager::UpdateStats(FRenderAssetStreamingManager *this)

{
  long64 lVar1;
  long64 lVar2;
  long64 lVar3;
  long64 lVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  longlong lVar14;
  float fVar15;
  
  fVar15 = (float)((this->GatheredStats).Timestamp - (this->DisplayedStats).Timestamp);
  if (__real_322bcc77 < fVar15) {
    (this->GatheredStats).MipIOBandwidth =
         (longlong)((float)(this->GatheredStats).MipIOBandwidth / fVar15);
  }
  lVar1 = (this->GatheredStats).UsedStreamingPool;
  lVar2 = (this->GatheredStats).SafetyPool;
  lVar3 = (this->GatheredStats).TemporaryPool;
  (this->DisplayedStats).RenderAssetPool = (this->GatheredStats).RenderAssetPool;
  (this->DisplayedStats).UsedStreamingPool = lVar1;
  lVar1 = (this->GatheredStats).StreamingPool;
  lVar4 = (this->GatheredStats).NonStreamingMips;
  (this->DisplayedStats).SafetyPool = lVar2;
  (this->DisplayedStats).TemporaryPool = lVar3;
  lVar2 = (this->GatheredStats).RequiredPool;
  lVar3 = (this->GatheredStats).VisibleMips;
  (this->DisplayedStats).StreamingPool = lVar1;
  (this->DisplayedStats).NonStreamingMips = lVar4;
  lVar1 = (this->GatheredStats).HiddenMips;
  lVar4 = (this->GatheredStats).ForcedMips;
  (this->DisplayedStats).RequiredPool = lVar2;
  (this->DisplayedStats).VisibleMips = lVar3;
  lVar2 = (this->GatheredStats).UnkownRefMips;
  lVar3 = (this->GatheredStats).CachedMips;
  (this->DisplayedStats).HiddenMips = lVar1;
  (this->DisplayedStats).ForcedMips = lVar4;
  lVar1 = (this->GatheredStats).WantedMips;
  lVar4 = (this->GatheredStats).NewRequests;
  (this->DisplayedStats).UnkownRefMips = lVar2;
  (this->DisplayedStats).CachedMips = lVar3;
  lVar2 = (this->GatheredStats).OverBudget;
  dVar5 = (this->GatheredStats).Timestamp;
  (this->DisplayedStats).WantedMips = lVar1;
  (this->DisplayedStats).NewRequests = lVar4;
  lVar1 = (this->GatheredStats).MipIOBandwidth;
  (this->DisplayedStats).PendingRequests = (this->GatheredStats).PendingRequests;
  (this->DisplayedStats).MipIOBandwidth = lVar1;
  iVar6 = (this->GatheredStats).CallbacksCycles;
  iVar7 = (this->GatheredStats).SetupAsyncTaskCycles;
  iVar8 = (this->GatheredStats).UpdateStreamingDataCycles;
  iVar9 = (this->GatheredStats).StreamRenderAssetsCycles;
  (this->DisplayedStats).OverBudget = lVar2;
  (this->DisplayedStats).Timestamp = dVar5;
  iVar10 = (this->GatheredStats).NumStreamedMeshes;
  fVar15 = (this->GatheredStats).AvgNumStreamedLODs;
  fVar11 = (this->GatheredStats).AvgNumResidentLODs;
  fVar12 = (this->GatheredStats).AvgNumEvictedLODs;
  (this->DisplayedStats).CallbacksCycles = iVar6;
  (this->DisplayedStats).SetupAsyncTaskCycles = iVar7;
  (this->DisplayedStats).UpdateStreamingDataCycles = iVar8;
  (this->DisplayedStats).StreamRenderAssetsCycles = iVar9;
  lVar1 = (this->GatheredStats).StreamedMeshMem;
  lVar2 = (this->GatheredStats).ResidentMeshMem;
  (this->DisplayedStats).NumStreamedMeshes = iVar10;
  (this->DisplayedStats).AvgNumStreamedLODs = fVar15;
  (this->DisplayedStats).AvgNumResidentLODs = fVar11;
  (this->DisplayedStats).AvgNumEvictedLODs = fVar12;
  lVar3 = (this->GatheredStats).EvictedMeshMem;
  lVar4 = (this->GatheredStats).VirtualTexturePool;
  (this->DisplayedStats).StreamedMeshMem = lVar1;
  (this->DisplayedStats).ResidentMeshMem = lVar2;
  iVar6 = (this->GatheredStats).NumVirtualTextures;
  uVar13 = *(undefined4 *)&(this->GatheredStats).field_0xd4;
  lVar2 = (this->GatheredStats).RequiredVirtualTexturePool;
  lVar1 = (this->GatheredStats).UsedVirtualTexturePool;
  (this->DisplayedStats).EvictedMeshMem = lVar3;
  (this->DisplayedStats).VirtualTexturePool = lVar4;
  (this->DisplayedStats).NumVirtualTextures = iVar6;
  *(undefined4 *)&(this->DisplayedStats).field_0xd4 = uVar13;
  (this->DisplayedStats).RequiredVirtualTexturePool = lVar2;
  (this->DisplayedStats).UsedVirtualTexturePool = lVar1;
  lVar14 = (this->DisplayedStats).RequiredPool;
  (this->GatheredStats).CallbacksCycles = 0;
  (this->GatheredStats).MipIOBandwidth = 0;
  this->MemoryOverBudget = (this->DisplayedStats).OverBudget;
  if (lVar14 < this->MaxEverRequired) {
    lVar14 = this->MaxEverRequired;
  }
  this->MaxEverRequired = lVar14;
  return;
}

// UpdateStreamingRenderAssets @ 1487d0c00

void __thiscall
FRenderAssetStreamingManager::UpdateStreamingRenderAssets
          (FRenderAssetStreamingManager *this,int param_1,int param_2,bool param_3,bool param_4)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  long64 *plVar3;
  EStreamableRenderAssetType EVar4;
  byte bVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *pTVar12;
  byte bVar13;
  byte bVar14;
  TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *pTVar15;
  FStreamingRenderAsset *this_00;
  uint uVar16;
  bool bVar17;
  uint local_38 [4];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1435,"UpdateStreamingRenderAssets",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.cpp"
               ,0x59b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1435);
  }
  if (param_1 == 0) {
    this->CurrentUpdateStreamingRenderAssetIndex = 0;
    (this->InflightRenderAssets).ArrayNum = 0;
    if ((this->InflightRenderAssets).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->InflightRenderAssets).AllocatorInstance,0,
                 &(this->InflightRenderAssets).ArrayMax);
    }
  }
  uVar16 = this->CurrentUpdateStreamingRenderAssetIndex;
  iVar9 = ((param_1 + 1) * (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) / param_2;
  do {
    local_38[0] = uVar16;
    if (iVar9 <= (int)uVar16) {
      this->CurrentUpdateStreamingRenderAssetIndex = iVar9;
      if (bVar17) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    uVar10 = 0;
    if ((int)uVar16 < (this->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
      uVar10 = ~uVar16 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_00 = (FStreamingRenderAsset *)
              ((this->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
              (longlong)(int)uVar16 * 0xb8);
    if (this_00->RenderAsset != (UStreamableRenderAsset *)0x0) {
      EVar4 = this_00->RenderAssetType;
      bVar5 = this_00->ResidentMips;
      if (EVar4 == Texture) {
        pTVar15 = (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)
                  this->NumStreamedMips_Texture;
        iVar11 = 0x52;
      }
      else if (EVar4 == StaticMesh) {
        pTVar15 = (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)
                  (this->NumStreamedMips_StaticMesh).AllocatorInstance.Data;
        iVar11 = (this->NumStreamedMips_StaticMesh).ArrayNum;
      }
      else if (EVar4 == SkeletalMesh) {
        pTVar15 = (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)
                  (this->NumStreamedMips_SkeletalMesh).AllocatorInstance.Data;
        iVar11 = (this->NumStreamedMips_SkeletalMesh).ArrayNum;
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingManagerTexture.h"
                           ,0x109,L"");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = -1;
        pTVar15 = (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0;
      }
      pTVar12 = &this->DeferredTickCBAssets;
      if (!param_4) {
        pTVar12 = (TArray<UStreamableRenderAsset_*,TSizedDefaultAllocator<32>_> *)0x0;
      }
      FStreamingRenderAsset::UpdateDynamicData
                (this_00,(int *)pTVar15,iVar11,&this->Settings,param_3,pTVar12);
      if (this_00->RequestedMips != this_00->ResidentMips) {
        pTVar2 = &this->InflightRenderAssets;
        pFVar6 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar6 <= (FScriptContainerElement *)local_38) &&
            ((FScriptContainerElement *)local_38 <
             pFVar6 + (longlong)(this->InflightRenderAssets).ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->InflightRenderAssets).ArrayNum;
        piVar1 = &(this->InflightRenderAssets).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->InflightRenderAssets).ArrayNum = iVar11 + 1;
        *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_38[0];
      }
      bVar14 = this_00->ResidentMips;
      if ((char)bVar5 < (char)bVar14) {
        if (((char)bVar14 < '\x01') &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InMipCount > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                               ,0x38,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar13 = 8;
        if (this_00->RenderAssetType == Texture) {
          bVar13 = 0x10;
        }
        if ((bVar13 < bVar14) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                               ,0x39,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = *(int *)((longlong)(&(this_00->LevelIndexUsage).AllocatorInstance + -5) +
                         (longlong)(char)bVar14 * 4);
        if (((char)bVar5 < '\x01') &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InMipCount > 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                               ,0x38,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        bVar14 = 8;
        if (this_00->RenderAssetType == Texture) {
          bVar14 = 0x10;
        }
        if ((bVar14 < bVar5) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                               ,0x39,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar3 = &(this->GatheredStats).MipIOBandwidth;
        *plVar3 = *plVar3 + (longlong)
                            (iVar11 - *(int *)((longlong)
                                               (&(this_00->LevelIndexUsage).AllocatorInstance + -5)
                                              + (longlong)(char)bVar5 * 4));
      }
    }
    uVar16 = local_38[0] + 1;
  } while( true );
}

