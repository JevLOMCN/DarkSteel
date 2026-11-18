// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 29

// FSkeletalMeshObjectNanite @ 148692910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObjectNanite * __thiscall
FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite
          (FSkeletalMeshObjectNanite *this,FSkinnedMeshSceneProxyDesc *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  int iVar1;
  TArray<FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  FSkeletalMeshObject *pFVar4;
  code *pcVar5;
  FRayTracingGeometryInitializer *pFVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FSkeletalMeshObjectNanite *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  undefined ***pppuVar14;
  int iVar15;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  FSkeletalMeshUpdateHandle local_98;
  code *local_88 [2];
  undefined **local_78;
  FSkeletalMeshObjectNanite *local_70;
  FSkeletalMeshObject *local_68;
  undefined ***local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_c8;
  FSkeletalMeshObject::FSkeletalMeshObject((FSkeletalMeshObject *)this,param_1,param_2,param_3);
  *(undefined ***)this = &___7FSkeletalMeshObjectNanite__6B_;
  FRenderResource::FRenderResource((FRenderResource *)&this->RayTracingGeometry);
  iVar15 = 0;
  (this->RayTracingGeometry).DynamicGeometrySharedBufferGenerationID = -1;
  (this->RayTracingGeometry).LastUpdatedFrame = 0;
  (this->RayTracingGeometry)._padding_ = (longlong)&___7FRayTracingGeometry__6B_;
  (this->RayTracingGeometry).RawDataHeader.Reserved[0] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[1] = 0xffffffff;
  (this->RayTracingGeometry).RawData._padding_ = (longlong)&___7__TResourceArray_E_0A___6B_;
  (this->RayTracingGeometry).RawDataHeader.Reserved[2] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[3] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[4] = 0xffffffff;
  (this->RayTracingGeometry).RawDataHeader.Reserved[5] = 0xffffffff;
  (this->RayTracingGeometry).RawData._padding_ = 0;
  (this->RayTracingGeometry).RawData._padding_ = 0;
  (this->RayTracingGeometry).RawData.bNeedsCPUAccess = false;
  (this->RayTracingGeometry).NumUpdatesSinceLastBuild = 0;
  (this->RayTracingGeometry).Initializer.IndexBuffer.Reference = (FRHIBuffer *)0x0;
  (this->RayTracingGeometry).Initializer.IndexBufferOffset = 0;
  (this->RayTracingGeometry).Initializer.GeometryType = RTGT_Triangles;
  (this->RayTracingGeometry).Initializer.TotalPrimitiveCount = 0;
  (this->RayTracingGeometry).Initializer.bFastBuild = false;
  (this->RayTracingGeometry).Initializer.bAllowUpdate = false;
  (this->RayTracingGeometry).Initializer.bAllowCompaction = true;
  (this->RayTracingGeometry).Initializer.bTemplate = false;
  (this->RayTracingGeometry).Initializer.Type = Rendering;
  (this->RayTracingGeometry).Initializer.Segments.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RayTracingGeometry).Initializer.Segments.ArrayNum = 0;
  (this->RayTracingGeometry).Initializer.Segments.ArrayMax = 0;
  (this->RayTracingGeometry).Initializer.OfflineData = (FResourceArrayUploadInterface *)0x0;
  (this->RayTracingGeometry).Initializer.OfflineDataHeader.Reserved[0] = 0xffffffff;
  (this->RayTracingGeometry).Initializer.OfflineDataHeader.Reserved[1] = 0xffffffff;
  pFVar6 = &(this->RayTracingGeometry).Initializer;
  (pFVar6->OfflineDataHeader).Reserved[2] = 0xffffffff;
  (pFVar6->OfflineDataHeader).Reserved[3] = 0xffffffff;
  pFVar6 = &(this->RayTracingGeometry).Initializer;
  (pFVar6->OfflineDataHeader).Reserved[4] = 0xffffffff;
  (pFVar6->OfflineDataHeader).Reserved[5] = 0xffffffff;
  (this->RayTracingGeometry).Initializer.SourceGeometry = (FRHIRayTracingGeometry *)0x0;
  FDebugName::FDebugName(&(this->RayTracingGeometry).Initializer.DebugName);
  (this->RayTracingGeometry).Initializer.OwnerName.ComparisonIndex = 0;
  (this->RayTracingGeometry).Initializer.OwnerName.Number = 0;
  (this->RayTracingGeometry).GroupHandle = -1;
  pTVar2 = &this->LODs;
  (this->RayTracingGeometry).LODIndex = -1;
  (this->RayTracingGeometry).RayTracingGeometryRHI.Reference = (FRHIRayTracingGeometry *)0x0;
  (this->RayTracingGeometry).GeometryState = Invalid;
  (this->RayTracingGeometry).RayTracingBuildRequestIndex = -1;
  (this->RayTracingGeometry).RayTracingGeometryHandle = -1;
  (this->NaniteMaterials).AssetName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NaniteMaterials).AssetName.Data.ArrayNum = 0;
  (this->NaniteMaterials).AssetName.Data.ArrayMax = 0;
  (this->NaniteMaterials).Entries.AllocatorInstance.SecondaryData =
       (ForElementType<Nanite::FMaterialAuditEntry>)0x0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->LODs).ArrayNum = 0;
  (this->LODs).ArrayMax = 0;
  (this->UpdateHandle).Index = 0xffffffff;
  this->DynamicData = (FDynamicSkelMeshObjectDataNanite *)0x0;
  (this->NaniteMaterials).Entries.ArrayNum = 0;
  (this->NaniteMaterials).Entries.ArrayMax = 4;
  (this->NaniteMaterials).bHasAnyError = '\0';
  (this->NaniteMaterials).bCompatibleWithLumenCardSharing = '\0';
  (this->NaniteMaterials).bHasSky = '\0';
  (this->NaniteMaterials).bHasMasked = '\0';
  (this->NaniteMaterials).FallbackMaterial = (UMaterialInterface *)0x0;
  this->bHasValidMaterials = false;
  (this->BonesToRemoveCache).SkinnedAsset = (USkinnedAsset *)0x0;
  (this->BonesToRemoveCache).LODIndex = -1;
  (this->BonesToRemoveCache).BonesToRemove.DataPtr = (FBoneReference *)0x0;
  (this->BonesToRemoveCache).BonesToRemove.ArrayNum = 0;
  this->LastRayTracingBoneTransformUpdate = 0xffffffff;
  if (param_1->PreviousMeshObject != (FSkeletalMeshObject *)0x0) {
    cVar7 = (**(code **)(param_1->PreviousMeshObject->_padding_ + 0x50))();
    if (((cVar7 != '\0') &&
        (pFVar4 = param_1->PreviousMeshObject, pFVar4->SkeletalMeshRenderData == param_2)) &&
       (pFVar4->FeatureLevel == param_3)) {
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::`11'::<lambda_1>,1,0>
                  ::_vftable_;
      local_60 = (undefined ***)0x0;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite'::__l11::<lambda_1>,void,FRHICommandList_&>
                    ::Call;
      local_70 = this;
      local_68 = pFVar4;
      FRenderCommandDispatcher::
      Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite_::__l11::TSTR_ReleaseSkeletalMeshSkinCacheResources424>_>
                (&UE::RenderCommandPipe::SkeletalMesh,
                 (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_88);
      if (local_88[0] != (code *)0x0) {
        pppuVar14 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar14 = local_60;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  if (0 < (param_2->LODRenderData).Array.ArrayNum) {
    do {
      uVar9 = (this->LODs).ArrayNum;
      if (uVar9 == (this->LODs).ArrayMax) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&pTVar2->AllocatorInstance,&(this->LODs).ArrayMax);
      }
      iVar1 = uVar9 + 1;
      (this->LODs).ArrayNum = iVar1;
      uVar13 = 0;
      if ((int)uVar9 < iVar1) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_a0 = (longlong)iVar1;
        local_a8 = (longlong)(int)uVar9;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FSkeletalMeshObjectNanite *)(*pcVar5)();
          return pFVar10;
        }
      }
      pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x30;
      if (pFVar11 != (FScriptContainerElement *)0x0) {
        *(FSkeletalMeshRenderData **)pFVar11 = param_2;
        *(int *)(pFVar11 + 8) = iVar15;
        pFVar11[0xc] = (FScriptContainerElement)0x0;
        *(undefined8 *)(pFVar11 + 0x10) = 0;
        *(undefined8 *)(pFVar11 + 0x18) = 0;
        *(undefined8 *)(pFVar11 + 0x20) = 0;
        *(undefined8 *)(pFVar11 + 0x28) = 0;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < (param_2->LODRenderData).Array.ArrayNum);
  }
  InitResources(this,param_1);
  Nanite::AuditMaterials(param_1,&this->NaniteMaterials,true);
  if (param_1->_padding_ == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\PrimitiveSceneProxyDesc.h"
                       ,0x10e,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FSkeletalMeshObjectNanite *)(*pcVar5)();
      return pFVar10;
    }
  }
  bVar8 = Nanite::IsMaskingAllowed((UWorld *)param_1->_padding_,false);
  if (((this->NaniteMaterials).bHasAnyError == '\0' && (this->NaniteMaterials).bHasSky == '\0') &&
     ((bVar8 || ((this->NaniteMaterials).bHasMasked == '\0')))) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  this->bHasValidMaterials = bVar8;
  if ((longlong *)param_1->_padding_ != (longlong *)0x0) {
    lVar12 = (**(code **)(*(longlong *)param_1->_padding_ + 0x460))();
    if (lVar12 != 0) {
      if (FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::Instance ==
          (TBackend<FSkeletalMeshUpdatePacketNanite> *)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.h"
                           ,0x260,L"Skeletal mesh backend instance was not instantiated.");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FSkeletalMeshObjectNanite *)(*pcVar5)();
          return pFVar10;
        }
      }
      uVar9 = *(uint *)&FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::
                        Instance->field_0x18;
      uVar13 = 0;
      if ((int)uVar9 < *(int *)(lVar12 + 0x20)) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if (uVar13 == 0) {
        local_a8 = (longlong)(int)uVar9;
        local_a0 = (longlong)*(int *)(lVar12 + 0x20);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FSkeletalMeshObjectNanite *)(*pcVar5)();
          return pFVar10;
        }
      }
      FSkeletalMeshUpdateChannel::Create
                ((FSkeletalMeshUpdateChannel *)
                 ((longlong)(int)uVar9 * 0x88 + *(longlong *)(lVar12 + 0x18)),&local_98,
                 (FSkeletalMeshObject *)this);
      (this->UpdateHandle).Channel = local_98.Channel;
      (this->UpdateHandle).Index = local_98.Index;
    }
  }
  return this;
}

// FSkeletalMeshObjectNanite @ 148692d70

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshObjectNanite * __thiscall
FSkeletalMeshObjectNanite::FSkeletalMeshObjectNanite
          (FSkeletalMeshObjectNanite *this,USkinnedMeshComponent *param_1,
          FSkeletalMeshRenderData *param_2,Type param_3)

{
  FSkinnedMeshSceneProxyDesc *pFVar1;
  FSkinnedMeshSceneProxyDesc local_198;
  
  pFVar1 = FSkinnedMeshSceneProxyDesc::FSkinnedMeshSceneProxyDesc(&local_198,param_1);
  FSkeletalMeshObjectNanite(this,pFVar1,param_2,param_3);
  if (local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.MaterialSlotsOverlayMaterial.AllocatorInstance.Data);
  }
  FPrimitiveSceneProxyDesc::~FPrimitiveSceneProxyDesc((FPrimitiveSceneProxyDesc *)&local_198);
  *(undefined ***)this = &___7FSkeletalMeshObjectNanite__6B_;
  return this;
}

// ~FSkeletalMeshObjectNanite @ 14869a720

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::~FSkeletalMeshObjectNanite(FSkeletalMeshObjectNanite *this)

{
  ForElementType<Nanite::FMaterialAuditEntry> FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  *(undefined ***)this = &___7FSkeletalMeshObjectNanite__6B_;
  TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release(this->DynamicData);
  FVar1 = (this->NaniteMaterials).Entries.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<Nanite::FMaterialAuditEntry>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->NaniteMaterials).AssetName.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((this->UpdateHandle).Channel != (FSkeletalMeshUpdateChannel *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Channel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.h"
                       ,0x177,L"Call Release prior to destructing this handle");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DestructItems<FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,int>
            ((FSkeletalMeshObjectLOD *)(this->LODs).AllocatorInstance.Data,(this->LODs).ArrayNum);
  pFVar2 = (this->LODs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FRayTracingGeometry::~FRayTracingGeometry(&this->RayTracingGeometry);
  FSkeletalMeshObject::~FSkeletalMeshObject((FSkeletalMeshObject *)this);
  return;
}

// operator() @ 14869e390

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_res18 [16];
  
  lVar4 = *(longlong *)this;
  lVar7 = *(longlong *)(lVar4 + 0x1a0);
  iVar2 = *(int *)(lVar4 + 0x1a8);
  piVar6 = (int *)(lVar7 + 0x18);
  lVar8 = (longlong)iVar2 * 0x30 + lVar7;
  while( true ) {
    if (*(int *)(lVar4 + 0x1a8) != iVar2) {
      `TCheckedPointerIterator<FSkeletalMeshObjectNanite::FSkeletalMeshObjectLOD,int,0>::operator!='
      ::__l2::<lambda_1>::operator()(local_res18);
    }
    if (lVar7 == lVar8) break;
    *(undefined1 *)(piVar6 + -3) = 0;
    plVar5 = *(longlong **)(piVar6 + -2);
    iVar3 = *piVar6;
    plVar1 = plVar5 + iVar3;
    while( true ) {
      if (*piVar6 != iVar3) {
        `TCheckedPointerIterator<TUniquePtr<FGPUBaseSkinVertexFactory,TDefaultDelete<FGPUBaseSkinVertexFactory>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (plVar5 == plVar1) break;
      if ((longlong *)*plVar5 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar5 + 0x20))();
      }
      plVar5 = plVar5 + 1;
    }
    if (*(longlong **)(piVar6 + 2) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(piVar6 + 2) + 0x20))();
    }
    lVar7 = lVar7 + 0x30;
    piVar6 = piVar6 + 0xc;
  }
  (**(code **)(*(longlong *)(*(longlong *)this + 0x98) + 0x20))();
  FGPUSkinCache::Release((FGPUSkinCacheEntry **)(*(longlong *)this + 0x58));
  return;
}

// operator() @ 14869ef90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FSkeletalMeshObjectNanite::Update'::__l5::<lambda_1>::operator()
          (void *this,FRHICommandList *param_1)

{
  int *piVar1;
  FName *pFVar2;
  FDynamicSkelMeshObjectDataNanite *this_00;
  FSkeletalMeshObjectNanite *this_01;
  FGPUSkinCache *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FName FVar10;
  FNameEntryId FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FStatMessage local_38;
  
  bVar5 = false;
  bVar7 = false;
  pFVar2 = *(FName **)(*(longlong *)this + 0x68);
  FVar10 = *pFVar2;
  FVar11 = FVar10.ComparisonIndex.Value;
  uVar9 = FVar10.Number;
  if ((FVar11.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar2[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar11.Value;
        local_res18.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                   ,0x217);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20.s.LowPart = FVar11.Value;
      local_res20.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar6 = true;
      goto LAB_14869f06c;
    }
  }
  bVar6 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14869f06c:
  this_00 = *(FDynamicSkelMeshObjectDataNanite **)((longlong)this + 0x10);
  this_01 = *(FSkeletalMeshObjectNanite **)this;
  pFVar3 = *(FGPUSkinCache **)((longlong)this + 8);
  if (this_00 == (FDynamicSkelMeshObjectDataNanite *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDynamicData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x26d,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FDynamicSkelMeshObjectDataNanite::BuildBoneTransforms(this_00,this_01->DynamicData);
  TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release(this_01->DynamicData);
  this_01->DynamicData = this_00;
  bVar8 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported();
  if (((bVar8) && (pFVar3 != (FGPUSkinCache *)0x0)) && (GEnableGPUSkinCache != 0)) {
    bVar8 = IsRayTracingEnabled();
    if ((bVar8) && (*(char *)(*(longlong *)&this_01->field_0x48 + 0x1e) != '\0')) {
      FSkeletalMeshObjectNanite::ProcessUpdatedDynamicData(this_01,param_1,pFVar3);
      FSkeletalMeshObjectNanite::UpdateBoneData(this_01,param_1);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar6) && (FVar10 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_38.NameAndInfo.Index = FVar10.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_38);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// GetComponentSpaceTransforms @ 1486bbf40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> * __thiscall
FSkeletalMeshObjectNanite::GetComponentSpaceTransforms(FSkeletalMeshObjectNanite *this)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  
  pTVar1 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0;
  if (this->DynamicData != (FDynamicSkelMeshObjectDataNanite *)0x0) {
    pTVar1 = &this->DynamicData->ComponentSpaceTransforms;
  }
  return pTVar1;
}

// GetLOD @ 1486c07f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FSkeletalMeshObjectNanite::GetLOD(FSkeletalMeshObjectNanite *this)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(*(longlong *)&this->field_0x48 + 0x1b);
  uVar2 = (uint)bVar1;
  if ((int)(uint)bVar1 < *(int *)&this->field_0x30) {
    uVar2 = *(uint *)&this->field_0x30;
  }
  return uVar2;
}

// GetNaniteMaterials @ 1486c1de0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FMaterialAudit * __thiscall
FSkeletalMeshObjectNanite::GetNaniteMaterials(FSkeletalMeshObjectNanite *this)

{
  return &this->NaniteMaterials;
}

// GetPrevReferenceToLocalMatrices @ 1486c3b30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FSkeletalMeshObjectNanite::GetPrevReferenceToLocalMatrices
          (FSkeletalMeshObjectNanite *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  FDynamicSkelMeshObjectDataNanite *pFVar1;
  
  pFVar1 = this->DynamicData;
  if (1 < pFVar1->RevisionNumber - pFVar1->PreviousRevisionNumber) {
    TArrayView<UE::Math::TMatrix<float>_const_,int>::
    TArrayView<UE::Math::TMatrix<float>_const_,int><TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
              (__return_storage_ptr__,&pFVar1->ReferenceToLocal);
    return __return_storage_ptr__;
  }
  TArrayView<UE::Math::TMatrix<float>_const_,int>::
  TArrayView<UE::Math::TMatrix<float>_const_,int><TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
            (__return_storage_ptr__,&pFVar1->PreviousReferenceToLocal);
  return __return_storage_ptr__;
}

// GetRayTracingGeometry @ 1486c5d60

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRayTracingGeometry * __thiscall
FSkeletalMeshObjectNanite::GetRayTracingGeometry(FSkeletalMeshObjectNanite *this)

{
  bool bVar1;
  
  bVar1 = FRayTracingGeometry::HasValidInitializer(&this->RayTracingGeometry);
  if ((bVar1) && ((int)(this->RayTracingGeometry)._padding_ != -1)) {
    return &this->RayTracingGeometry;
  }
  return (FRayTracingGeometry *)0x0;
}

// GetRayTracingGeometry @ 1486c5db0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FRayTracingGeometry * __thiscall
FSkeletalMeshObjectNanite::GetRayTracingGeometry(FSkeletalMeshObjectNanite *this)

{
  bool bVar1;
  
  bVar1 = FRayTracingGeometry::HasValidInitializer(&this->RayTracingGeometry);
  if ((bVar1) && ((int)(this->RayTracingGeometry)._padding_ != -1)) {
    return &this->RayTracingGeometry;
  }
  return (FRayTracingGeometry *)0x0;
}

// GetRayTracingLOD @ 1486c5e00

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall FSkeletalMeshObjectNanite::GetRayTracingLOD(FSkeletalMeshObjectNanite *this)

{
  if (this->DynamicData != (FDynamicSkelMeshObjectDataNanite *)0x0) {
    return this->DynamicData->RayTracingLODIndex;
  }
  return 0;
}

// GetReferenceToLocalMatrices @ 1486c60f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArrayView<UE::Math::TMatrix<float>_const_,int> * __thiscall
FSkeletalMeshObjectNanite::GetReferenceToLocalMatrices
          (FSkeletalMeshObjectNanite *this,
          TArrayView<UE::Math::TMatrix<float>_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::Math::TMatrix<float>_const_,int> *pTVar4;
  
  iVar1 = (this->DynamicData->ReferenceToLocal).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (TMatrix<float> *)(this->DynamicData->ReferenceToLocal).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::Math::TMatrix<float>_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetResourceSizeEx @ 1486c66d0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::GetResourceSizeEx
          (FSkeletalMeshObjectNanite *this,FResourceSizeEx *param_1)

{
  FDynamicSkelMeshObjectDataNanite *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x2f0);
  pFVar1 = this->DynamicData;
  if (pFVar1 != (FDynamicSkelMeshObjectDataNanite *)0x0) {
    FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,0x78);
    FResourceSizeEx::AddDedicatedSystemMemoryBytes
              (param_1,(longlong)(pFVar1->ReferenceToLocal).ArrayMax << 6);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(param_1,(longlong)(this->LODs).ArrayMax * 0x30);
  iVar5 = (this->LODs).ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar5 = (this->LODs).ArrayNum;
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// GetSkinVertexFactory @ 1486c7910

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVertexFactory * __thiscall
FSkeletalMeshObjectNanite::GetSkinVertexFactory
          (FSkeletalMeshObjectNanite *this,FSceneView *param_1,int param_2,int param_3,
          ESkinVertexFactoryMode param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FVertexFactory *pFVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)param_2;
  if ((param_2 < 0) || ((this->LODs).ArrayNum <= param_2)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODs.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x281,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FVertexFactory *)(*pcVar3)();
      return pFVar5;
    }
  }
  iVar1 = (this->LODs).ArrayNum;
  if (param_4 == RayTracing) {
    uVar7 = 0;
    if (param_2 < iVar1) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FVertexFactory *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar5 = *(FVertexFactory **)((this->LODs).AllocatorInstance.Data + lVar6 * 0x30 + 0x20);
  }
  else {
    uVar7 = 0;
    if (param_2 < iVar1) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FVertexFactory *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar2 = (this->LODs).AllocatorInstance.Data;
    uVar7 = 0;
    if (param_3 < *(int *)(pFVar2 + lVar6 * 0x30 + 0x18)) {
      uVar7 = (uint)~param_3 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FVertexFactory *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar5 = *(FVertexFactory **)
              (*(longlong *)(pFVar2 + lVar6 * 0x30 + 0x10) + (longlong)param_3 * 8);
  }
  return pFVar5;
}

// GetSkinWeightVertexBuffer @ 1486c7b10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkinWeightVertexBuffer * __thiscall
FSkeletalMeshObjectNanite::GetSkinWeightVertexBuffer(FSkeletalMeshObjectNanite *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSkinWeightVertexBuffer *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->LODs).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSkinWeightVertexBuffer *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSkinWeightVertexBuffer **)
          ((this->LODs).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x28);
}

// GetStaticSkinVertexFactory @ 1486c8890

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FVertexFactory * __thiscall
FSkeletalMeshObjectNanite::GetStaticSkinVertexFactory
          (FSkeletalMeshObjectNanite *this,int param_1,int param_2,ESkinVertexFactoryMode param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FVertexFactory *pFVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)param_1;
  if ((param_1 < 0) || ((this->LODs).ArrayNum <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LODs.IsValidIndex(LODIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x28d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FVertexFactory *)(*pcVar3)();
      return pFVar5;
    }
  }
  iVar1 = (this->LODs).ArrayNum;
  if (param_3 == RayTracing) {
    uVar7 = 0;
    if (param_1 < iVar1) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FVertexFactory *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar5 = *(FVertexFactory **)((this->LODs).AllocatorInstance.Data + lVar6 * 0x30 + 0x20);
  }
  else {
    uVar7 = 0;
    if (param_1 < iVar1) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FVertexFactory *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar2 = (this->LODs).AllocatorInstance.Data;
    uVar7 = 0;
    if (param_2 < *(int *)(pFVar2 + lVar6 * 0x30 + 0x18)) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FVertexFactory *)(*pcVar3)();
        return pFVar5;
      }
    }
    pFVar5 = *(FVertexFactory **)
              (*(longlong *)(pFVar2 + lVar6 * 0x30 + 0x10) + (longlong)param_2 * 8);
  }
  return pFVar5;
}

// HaveValidDynamicData @ 1486cb770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSkeletalMeshObjectNanite::HaveValidDynamicData(FSkeletalMeshObjectNanite *this)

{
  return this->DynamicData != (FDynamicSkelMeshObjectDataNanite *)0x0;
}

// InitResources @ 1486cf0c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::InitResources
          (FSkeletalMeshObjectNanite *this,FSkinnedMeshSceneProxyDesc *param_1)

{
  FSkeletalMeshRenderData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkelMeshComponentLODInfo *pFVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  FSkeletalMeshObjectLOD *this_00;
  longlong lVar9;
  
  uVar6 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar7 = 0;
    lVar9 = 0;
    do {
      uVar8 = ~uVar6 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar6 < (this->LODs).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FSkeletalMeshObjectLOD *)((this->LODs).AllocatorInstance.Data + lVar9);
      pFVar1 = this_00->RenderData;
      uVar4 = 0;
      if ((int)uVar6 < (pFVar1->LODRenderData).Array.ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)((pFVar1->LODRenderData).Array.AllocatorInstance.Data + lVar7 * 8) +
                  300) != 0) {
        if (((int)uVar6 < 0) || ((param_1->LODInfo).ArrayNum <= (int)uVar6)) {
          pFVar5 = (FSkelMeshComponentLODInfo *)0x0;
        }
        else {
          uVar4 = 0;
          if ((int)uVar6 < (param_1->LODInfo).ArrayNum) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar5 = (param_1->LODInfo).DataPtr + (int)uVar6;
        }
        FSkeletalMeshObjectLOD::InitResources(this_00,pFVar5,*(Type *)&this->field_0x70);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x30;
    } while ((int)uVar6 < (this->LODs).ArrayNum);
  }
  bVar3 = IsRayTracingEnabled();
  if ((bVar3) && (this->field_0x39 != '\0')) {
    BeginInitResource((FRenderResource *)&this->RayTracingGeometry,
                      &UE::RenderCommandPipe::SkeletalMesh);
    return;
  }
  return;
}

// IsNaniteMesh @ 1486d1420

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FSkeletalMeshObjectNanite::IsNaniteMesh(FSkeletalMeshObjectNanite *this)

{
  return true;
}

// ProcessUpdatedDynamicData @ 1486e2e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ESkinVertexColorChannel": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::ProcessUpdatedDynamicData
          (FSkeletalMeshObjectNanite *this,FRHICommandList *param_1,FGPUSkinCache *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  float *pfVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ForElementType<FGPUSkinCache::FProcessEntrySection> FVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStackY_4b8 [32];
  FProcessEntryInputs local_468;
  undefined8 local_408;
  undefined8 uStack_400;
  uint local_3f8;
  undefined4 uStack_3f4;
  undefined8 uStack_3f0;
  ForElementType<FGPUSkinCache::FProcessEntrySection> local_3a8;
  int local_98;
  int local_94 [3];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  uVar4 = this->DynamicData->RayTracingLODIndex;
  pTVar16 = FSkeletalMeshObject::GetRenderSections((FSkeletalMeshObject *)this,uVar4);
  uVar19 = 0;
  if ((int)uVar4 < (this->LODs).ArrayNum) {
    uVar19 = ~uVar4 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (this->LODs).AllocatorInstance.Data;
  uVar19 = this->DynamicData->RevisionNumber;
  local_3a8.SecondaryData = (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0;
  local_98 = 0;
  local_94[0] = 8;
  uVar23 = pTVar16->ArrayNum;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  if (8 < (int)uVar23) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSkinCache::FProcessEntrySection>_>
              (0x60,0x10,uVar23,&local_3a8,0,local_94);
  }
  iVar17 = pTVar16->ArrayNum;
  uVar23 = 0;
  if (0 < iVar17) {
    lVar24 = 0;
    lVar25 = 0;
    do {
      uVar20 = 0;
      if ((int)uVar23 < iVar17) {
        uVar20 = ~uVar23 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar22 = (pTVar16->AllocatorInstance).Data + lVar25;
      if ((*(int *)(pFVar22 + 8) != 0) && (pFVar22[0x110] == (FScriptContainerElement)0x0)) {
        uVar20 = 0;
        if ((int)uVar23 < *(int *)(pFVar5 + (longlong)(int)uVar4 * 0x30 + 0x18)) {
          uVar20 = ~uVar23 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar18 = *(longlong *)
                  (*(longlong *)(pFVar5 + (longlong)(int)uVar4 * 0x30 + 0x10) + lVar24 * 8);
        uVar20 = uVar19;
        if (uVar19 == 0xffffffff) {
          uVar20 = *(uint *)(lVar18 + 400);
        }
        *(uint *)(lVar18 + 0x18c) = uVar20;
        uVar20 = 1 - *(int *)(lVar18 + 0x188);
        *(uint *)(lVar18 + 400) = uVar19;
        *(uint *)(lVar18 + 0x188) = uVar20;
        *(ulonglong *)(lVar18 + 0x150) = (ulonglong)this->DynamicData->BoneTransformFrameNumber;
        FGPUBaseSkinVertexFactory::FShaderDataType::AllocateBoneBuffer
                  (param_1,*(uint *)(lVar18 + 0x1bc),
                   (FVertexBufferAndSRV *)(lVar18 + (ulonglong)uVar20 * 0x18 + 0x158));
        uVar14 = UE::Math::TMatrix<float>::Identity.M[3]._8_8_;
        uVar13 = UE::Math::TMatrix<float>::Identity.M[3]._0_8_;
        uVar12 = UE::Math::TMatrix<float>::Identity.M[2]._8_8_;
        uVar11 = UE::Math::TMatrix<float>::Identity.M[2]._0_8_;
        uVar10 = UE::Math::TMatrix<float>::Identity.M[1]._8_8_;
        uVar9 = UE::Math::TMatrix<float>::Identity.M[1]._0_8_;
        uVar8 = UE::Math::TMatrix<float>::Identity.M[0]._8_8_;
        uVar7 = UE::Math::TMatrix<float>::Identity.M[0]._0_8_;
        uStack_3f0 = 0;
        local_408 = lVar18;
        uStack_400 = pFVar22;
        local_3f8 = uVar23;
        if (local_98 == local_94[0]) {
          local_98 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FGPUSkinCache::FProcessEntrySection>_>
                               (0x1060,&local_3a8,local_94);
        }
        FVar21 = (ForElementType<FGPUSkinCache::FProcessEntrySection>)&local_3a8;
        if (local_3a8.SecondaryData != (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0) {
          FVar21 = local_3a8.SecondaryData;
        }
        lVar18 = (longlong)local_98 * 0x60;
        puVar1 = (undefined4 *)(lVar18 + (longlong)FVar21);
        local_98 = local_98 + 1;
        *puVar1 = (undefined4)local_408;
        puVar1[1] = local_408._4_4_;
        puVar1[2] = (undefined4)uStack_400;
        puVar1[3] = uStack_400._4_4_;
        puVar2 = (undefined8 *)(lVar18 + 0x10 + (longlong)FVar21);
        *puVar2 = CONCAT44(uStack_3f4,local_3f8);
        puVar2[1] = uStack_3f0;
        pfVar3 = (float *)(lVar18 + 0x20 + (longlong)FVar21);
        *(undefined8 *)pfVar3 = uVar7;
        *(undefined8 *)(pfVar3 + 2) = uVar8;
        pfVar3 = (float *)(lVar18 + 0x30 + (longlong)FVar21);
        *(undefined8 *)pfVar3 = uVar9;
        *(undefined8 *)(pfVar3 + 2) = uVar10;
        pfVar3 = (float *)(lVar18 + 0x40 + (longlong)FVar21);
        *(undefined8 *)pfVar3 = uVar11;
        *(undefined8 *)(pfVar3 + 2) = uVar12;
        pfVar3 = (float *)(lVar18 + 0x50 + (longlong)FVar21);
        *(undefined8 *)pfVar3 = uVar13;
        *(undefined8 *)(pfVar3 + 2) = uVar14;
      }
      iVar17 = pTVar16->ArrayNum;
      uVar23 = uVar23 + 1;
      lVar24 = lVar24 + 1;
      lVar25 = lVar25 + 0x118;
    } while ((int)uVar23 < iVar17);
  }
  iVar17 = local_98;
  local_468.Sections.DataPtr = (FProcessEntrySection *)&local_3a8;
  if (local_3a8.SecondaryData != (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0) {
    local_468.Sections.DataPtr = (FProcessEntrySection *)local_3a8.SecondaryData;
  }
  local_468.Mode = RayTracing;
  if ((local_98 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_468.TargetVertexFactory =
       *(FGPUSkinPassthroughVertexFactory **)(pFVar5 + (longlong)(int)uVar4 * 0x30 + 0x20);
  local_468.Sections.ArrayNum = iVar17;
  local_468.MorphVertexBuffer = (FMorphVertexBuffer *)0x0;
  local_468.ClothVertexBuffer = (FSkeletalMeshVertexClothBuffer *)0x0;
  local_468.ClothWorldScale.field0_0x0._0_8_ = ___xmm_000000003f8000003f8000003f800000;
  local_468._64_8_ = _UNK_150689548;
  local_468.bRecreating = this->DynamicData->bRecreating;
  local_468.Skin = (FSkeletalMeshObject *)this;
  local_468.CurrentRevisionNumber = uVar19;
  local_468.LODIndex = uVar4;
  FGPUSkinCache::ProcessEntry(param_2,param_1,&local_468,(FGPUSkinCacheEntry **)&this->field_0x58);
  if (local_3a8.SecondaryData != (ForElementType<FGPUSkinCache::FProcessEntrySection>)0x0) {
    FMemory::Free((void *)local_3a8.SecondaryData);
  }
  return;
}

// ReleaseResources @ 1486e6970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkeletalMeshObjectNanite::ReleaseResources(FSkeletalMeshObjectNanite *this)

{
  FSkeletalMeshUpdateChannel *this_00;
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  FSkeletalMeshObjectNanite *local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  this_00 = (this->UpdateHandle).Channel;
  if (this_00 != (FSkeletalMeshUpdateChannel *)0x0) {
    FSkeletalMeshUpdateChannel::Release(this_00,&this->UpdateHandle);
  }
  local_20 = (undefined ***)0x0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkeletalMeshObjectNanite::ReleaseResources'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSkeletalMeshObjectNanite::ReleaseResources'::__l2::<lambda_1>,void,FRHICommandList_&>
                ::Call;
  local_30 = this;
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::ReleaseResources_::__l2::TSTR_FSkeletalMeshObjectNanite_ReleaseResources488>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// Update @ 1486f3bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::Update
          (FSkeletalMeshObjectNanite *this,int param_1,USkinnedMeshComponent *param_2,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_3,TArray<float,TSizedDefaultAllocator<32>_> *param_4,
          EPreviousBoneTransformUpdateMode param_5,FExternalMorphWeightData *param_6)

{
  FPrimitiveSceneProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  USkinnedAsset *pUVar4;
  USkinnedMeshComponent *pUVar5;
  undefined1 auStackY_198 [32];
  FSkinnedMeshSceneProxyDynamicData local_148;
  ulonglong local_38;
  
  if (param_2 != (USkinnedMeshComponent *)0x0) {
    local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
    pUVar4 = USkinnedMeshComponent::GetSkinnedAsset(param_2);
    if (param_2->_padding_ != param_2->_padding_) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneProxy == SceneData.SceneProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Components\\PrimitiveComponent.h"
                         ,0x801,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (FPrimitiveSceneProxy *)param_2->_padding_;
    pUVar5 = (USkinnedMeshComponent *)FWeakObjectPtr::Get(&(param_2->LeaderPoseComponent).WeakPtr);
    FSkinnedMeshSceneProxyDynamicData::FSkinnedMeshSceneProxyDynamicData(&local_148,param_2,pUVar5);
    Update(this,param_1,&local_148,pFVar1,pUVar4,param_3,param_4,param_5,param_6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_148.RefPoseOverride.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Update @ 1486f3d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::Update
          (FSkeletalMeshObjectNanite *this,int param_1,FSkinnedMeshSceneProxyDynamicData *param_2,
          FPrimitiveSceneProxy *param_3,USkinnedAsset *param_4,
          TMap<UMorphTarget_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMorphTarget_const_*,int,0>_>
          *param_5,TArray<float,TSizedDefaultAllocator<32>_> *param_6,
          EPreviousBoneTransformUpdateMode param_7,FExternalMorphWeightData *param_8)

{
  FSkeletalMeshUpdateChannel *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *this_00;
  FDynamicSkelMeshObjectDataNanite *this_01;
  FDynamicSkelMeshObjectDataNanite *pFVar5;
  FDynamicSkelMeshObjectDataNanite *pFVar6;
  code **ppcVar7;
  undefined1 auStackY_b8 [32];
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  iVar4 = FSkeletalMeshDynamicDataPool::GetBucketIndex
                    ((FSkeletalMeshDynamicDataPool *)
                     &TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Pool,
                     (param_2->ComponentSpaceTransforms).ArrayNum);
  this_00 = (FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *)
            TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket(iVar4);
  this_01 = FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>::Pop(this_00);
  pFVar6 = (FDynamicSkelMeshObjectDataNanite *)0x0;
  if (this_01 == (FDynamicSkelMeshObjectDataNanite *)0x0) {
    pFVar5 = ::operator_new(0x78);
    this_01 = pFVar6;
    if (pFVar5 != (FDynamicSkelMeshObjectDataNanite *)0x0) {
      pFVar5->_padding_ = 0;
      *(undefined4 *)((longlong)&pFVar5->_padding_ + 4) = 0;
      pFVar5->_padding_ = (longlong)&___7FDynamicSkelMeshObjectDataNanite__6B_;
      (pFVar5->ReferenceToLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->ReferenceToLocal).ArrayNum = 0;
      (pFVar5->ReferenceToLocal).ArrayMax = 0;
      (pFVar5->ReferenceToLocalForRayTracing).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar5->ReferenceToLocalForRayTracing).ArrayNum = 0;
      (pFVar5->ReferenceToLocalForRayTracing).ArrayMax = 0;
      (pFVar5->PreviousReferenceToLocal).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->PreviousReferenceToLocal).ArrayNum = 0;
      (pFVar5->PreviousReferenceToLocal).ArrayMax = 0;
      (pFVar5->ComponentSpaceTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar5->ComponentSpaceTransforms).ArrayNum = 0;
      (pFVar5->ComponentSpaceTransforms).ArrayMax = 0;
      this_01 = pFVar5;
    }
    *(int *)&this_01->_padding_ = iVar4;
  }
  else {
    FSkeletalMeshDynamicDataPool::AddStatsMemory
              ((FSkeletalMeshDynamicDataPool *)
               &TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Pool,iVar4,
               -*(int *)((longlong)&this_01->_padding_ + 4));
    LOCK();
    TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Pool.NumFreeBytes =
         TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Pool.NumFreeBytes -
         (longlong)*(int *)((longlong)&this_01->_padding_ + 4);
    UNLOCK();
  }
  FDynamicSkelMeshObjectDataNanite::Init
            (this_01,param_2,param_4,*(FSkeletalMeshRenderData **)&this->field_0x48,param_1,param_7,
             this);
  pFVar1 = (this->UpdateHandle).Channel;
  if (pFVar1 != (FSkeletalMeshUpdateChannel *)0x0) {
    if (((FBackend *)FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::Instance
         != pFVar1->Backend) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Channel->IsChannelFor<SkeletalMeshMeshDynamicDataType>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.inl"
                           ,10,L"Provided MeshDynamicData is not the correct type for this handle.")
       , bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = FSkeletalMeshUpdateChannel::Update
                      ((this->UpdateHandle).Channel,&this->UpdateHandle,
                       (FSkeletalMeshDynamicData *)this_01);
    if (bVar3) {
      return;
    }
  }
  if (param_3 != (FPrimitiveSceneProxy *)0x0) {
    pFVar6 = (FDynamicSkelMeshObjectDataNanite *)(**(code **)(param_3->Scene->_padding_ + 0x458))();
  }
  local_78[0] = (code *)0x0;
  local_50 = FMemory::Malloc(0x20,8);
  *local_50 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSkeletalMeshObjectNanite::Update'::`5'::<lambda_1>,1,1>
                       ::_vftable_;
  local_50[1] = (code *)this;
  local_50[2] = (code *)pFVar6;
  local_50[3] = (code *)this_01;
  if (local_50 + 1 != (code **)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshObjectNanite::Update'::__l5::<lambda_1>,void,FRHICommandList_&>
                  ::Call;
  }
  FRenderCommandDispatcher::
  Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::Update_::__l5::TSTR_SkelMeshObjectUpdateDataCommand532>_>
            (&UE::RenderCommandPipe::SkeletalMesh,
             (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    ppcVar7 = local_78 + 2;
    if (local_50 != (code **)0x0) {
      ppcVar7 = local_50;
    }
    (**(code **)(*ppcVar7 + 0x10))();
  }
  return;
}

// UpdateBoneData @ 1486f44e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::UpdateBoneData(FSkeletalMeshObjectNanite *this,FRHICommandList *param_1)

{
  uint uVar1;
  int iVar2;
  FDynamicSkelMeshObjectDataNanite *pFVar3;
  FScriptContainerElement *pFVar4;
  TMatrix<float> *pTVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  FRHIBuffer *pFVar8;
  ushort *puVar9;
  code *pcVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  FName local_res8;
  FRHICommandList *local_res10;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TArrayView<unsigned_short_const_,int> local_68;
  TArrayView<UE::Math::TMatrix<float>_const_,int> local_58 [2];
  
  uVar1 = this->DynamicData->RayTracingLODIndex;
  local_res10 = param_1;
  pTVar14 = FSkeletalMeshObject::GetRenderSections((FSkeletalMeshObject *)this,uVar1);
  FSkeletalMeshObject::GetAssetPathName((FSkeletalMeshObject *)this,(int)&local_res8);
  uVar17 = 0;
  if ((int)uVar1 < (this->LODs).ArrayNum) {
    uVar17 = ~uVar1 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar3 = this->DynamicData;
  pFVar4 = (this->LODs).AllocatorInstance.Data;
  lVar16 = 0x28;
  if (pFVar3->RayTracingLODIndex == pFVar3->LODIndex) {
    lVar16 = 0x18;
  }
  pTVar5 = *(TMatrix<float> **)((longlong)&pFVar3->_padding_ + lVar16);
  iVar2 = *(int *)((longlong)&pFVar3->_padding_ + lVar16);
  if ((iVar2 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  iVar15 = pTVar14->ArrayNum;
  uVar17 = 0;
  if (0 < iVar15) {
    lVar16 = 0;
    lVar18 = 0;
    uVar11._4_4_ = uStack_7c;
    uVar11._0_4_ = iVar2;
    do {
      uVar13 = 0;
      if ((int)uVar17 < iVar15) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar6 = (pTVar14->AllocatorInstance).Data;
      uVar13 = 0;
      if ((int)uVar17 < *(int *)(pFVar4 + (longlong)(int)uVar1 * 0x30 + 0x18)) {
        uVar13 = ~uVar17 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar7 = *(longlong *)(*(longlong *)(pFVar4 + (longlong)(int)uVar1 * 0x30 + 0x10) + lVar16 * 8)
      ;
      pFVar8 = *(FRHIBuffer **)(lVar7 + 0x140 + ((ulonglong)*(uint *)(lVar7 + 0x188) + 1) * 0x18);
      if (pFVar8 != (FRHIBuffer *)0x0) {
        puVar9 = *(ushort **)(pFVar6 + lVar18 + 0x38);
        iVar2 = *(int *)(pFVar6 + lVar18 + 0x40);
        if ((iVar2 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_68._12_4_ = uStack_6c;
        local_68.ArrayNum = iVar2;
        local_68.DataPtr = puVar9;
        local_58[0].DataPtr = pTVar5;
        local_58[0]._8_8_ = uVar11;
        FGPUBaseSkinVertexFactory::FShaderDataType::UpdateBoneData
                  (local_res10,&local_res8,local_58,&local_68,pFVar8);
      }
      iVar15 = pTVar14->ArrayNum;
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 1;
      lVar18 = lVar18 + 0x118;
    } while ((int)uVar17 < iVar15);
  }
  return;
}

// UpdateDynamicData_RenderThread @ 1486f5560

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::UpdateDynamicData_RenderThread
          (FSkeletalMeshObjectNanite *this,FRHICommandList *param_1,FGPUSkinCache *param_2,
          FDynamicSkelMeshObjectDataNanite *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_3 == (FDynamicSkelMeshObjectDataNanite *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InDynamicData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                       ,0x26d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FDynamicSkelMeshObjectDataNanite::BuildBoneTransforms(param_3,this->DynamicData);
  TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release(this->DynamicData);
  this->DynamicData = param_3;
  bVar2 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported();
  if (((bVar2) && (param_2 != (FGPUSkinCache *)0x0)) && (GEnableGPUSkinCache != 0)) {
    bVar2 = IsRayTracingEnabled();
    if ((bVar2) && (*(char *)(*(longlong *)&this->field_0x48 + 0x1e) != '\0')) {
      ProcessUpdatedDynamicData(this,param_1,param_2);
      UpdateBoneData(this,param_1);
    }
  }
  return;
}

// UpdateRayTracingGeometry @ 1486f60e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::UpdateRayTracingGeometry
          (FSkeletalMeshObjectNanite *this,FRHICommandListBase *param_1,
          FSkeletalMeshLODRenderData *param_2,uint param_3,
          TArray<TRefCountPtr<FRHIBuffer>,TSizedDefaultAllocator<32>_> *param_4)

{
  FSkeletalMeshObjectGPUSkin::UpdateRayTracingGeometry_Internal
            (param_2,param_3,param_4,&this->RayTracingGeometry,false,(FSkeletalMeshObject *)this);
  return;
}

// UpdateSkinWeightBuffer @ 1486f6130

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer
          (FSkeletalMeshObjectNanite *this,USkinnedMeshComponent *param_1)

{
  int iVar1;
  FSkelMeshComponentLODInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FSkelMeshComponentLODInfo_const_,int> local_18;
  
  pFVar2 = (FSkelMeshComponentLODInfo *)(param_1->LODInfo).AllocatorInstance.Data;
  iVar1 = (param_1->LODInfo).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  UpdateSkinWeightBuffer(this,&local_18);
  return;
}

// UpdateSkinWeightBuffer @ 1486f61b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer
          (FSkeletalMeshObjectNanite *this,TArrayView<FSkelMeshComponentLODInfo_const_,int> *param_1
          )

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  FSkinWeightVertexBuffer *pFVar7;
  undefined ***pppuVar8;
  uint uVar9;
  FSkelMeshComponentLODInfo *pFVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  TArrayView<FSkelMeshComponentLODInfo_const_,int> *local_88;
  code *local_78 [2];
  undefined **local_68;
  FSkeletalMeshObjectNanite *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  uVar9 = 0;
  if (0 < (this->LODs).ArrayNum) {
    lVar11 = 0;
    lVar12 = 0;
    local_88 = param_1;
    do {
      iVar1 = (this->LODs).ArrayNum;
      uVar5 = 0;
      if ((int)uVar9 < iVar1) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_98 = (longlong)(int)uVar9;
        local_90 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar13 = (this->LODs).AllocatorInstance.Data + lVar12;
      plVar2 = *(longlong **)pFVar13;
      iVar1 = (int)plVar2[1];
      uVar5 = 0;
      if ((int)uVar9 < iVar1) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (local_98 = lVar11, local_90 = (longlong)iVar1,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(int *)(*(longlong *)(*plVar2 + lVar11 * 8) + 300) != 0) {
        if (((int)uVar9 < 0) || (param_1->ArrayNum <= (int)uVar9)) {
          pFVar10 = (FSkelMeshComponentLODInfo *)0x0;
        }
        else {
          if ((int)uVar9 < 0) {
            local_98 = (longlong)(int)uVar9;
            local_90 = (longlong)param_1->ArrayNum;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          pFVar10 = param_1->DataPtr + (int)uVar9;
        }
        if ((*(longlong *)pFVar13 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RenderData",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                               ,0x34c,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(int *)(pFVar13 + 8) < 0) ||
            (*(int *)(*(longlong *)pFVar13 + 8) <= *(int *)(pFVar13 + 8))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("RenderData->LODRenderData.IsValidIndex(LODIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderNanite.cpp"
                               ,0x34d,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar5 = *(uint *)(pFVar13 + 8);
        plVar2 = *(longlong **)pFVar13;
        iVar1 = (int)plVar2[1];
        uVar6 = 0;
        if ((int)uVar5 < iVar1) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (local_98 = (longlong)(int)uVar5, local_90 = (longlong)iVar1,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar7 = FSkeletalMeshObject::GetSkinWeightVertexBuffer
                           (*(FSkeletalMeshLODRenderData **)(*plVar2 + (longlong)(int)uVar5 * 8),
                            pFVar10);
        *(FSkinWeightVertexBuffer **)(pFVar13 + 0x28) = pFVar7;
        local_50 = (undefined ***)0x0;
        local_68 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::`7'::<lambda_1>,1,0>
                    ::_vftable_;
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer'::__l7::<lambda_1>,void,FRHICommandList_&>
                      ::Call;
        local_60 = this;
        FRenderCommandDispatcher::
        Enqueue<TRenderCommandTag<_FSkeletalMeshObjectNanite::UpdateSkinWeightBuffer_::__l7::TSTR_UpdateSkinCacheSkinWeightBuffer740>_>
                  (&UE::RenderCommandPipe::SkeletalMesh,
                   (TUniqueFunction<void___cdecl(FRHICommandList_&)> *)local_78);
        param_1 = local_88;
        if (local_78[0] != (code *)0x0) {
          pppuVar8 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar8 = local_50;
          }
          (*(code *)(*pppuVar8)[2])();
          param_1 = local_88;
        }
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x30;
    } while ((int)uVar9 < (this->LODs).ArrayNum);
  }
  return;
}

